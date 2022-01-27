/*
** Automatically generated from `prog_io_mode_defn.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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



#line 168 "prog_io_mode_defn.m"
struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0_s {
#line 172 "prog_io_mode_defn.m"
  MR_bool parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded;
#line 206 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__Args_20;
#line 187 "prog_io_mode_defn.m"
  jmp_buf parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__commit_0;
#line 187 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__TypeInfo_73_73;
#line 187 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__TypeInfo_82_82;
#line 187 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__Arg2_21;
#line 187 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__OtherArgs_22;
#line 187 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__V_33_33;
#line 187 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__V_81_81;
#line 187 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__conv0_Arg2_21;
#line 168 "prog_io_mode_defn.m"
};

#line 80 "prog_io_mode_defn.m"
struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s {
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__BodyTerm_12;
#line 84 "prog_io_mode_defn.m"
  MR_bool parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded;
#line 84 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151;
#line 158 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Args_22;
#line 99 "prog_io_mode_defn.m"
  jmp_buf parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__commit_0;
#line 99 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeInfo_152_152;
#line 99 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeInfo_162_162;
#line 99 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Arg2_23;
#line 99 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__OtherArgs_24;
#line 99 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__V_41_41;
#line 99 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__V_161_161;
#line 99 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__conv0_Arg2_23;
#line 111 "prog_io_mode_defn.m"
  jmp_buf parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__commit_1;
#line 111 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Var2_27;
#line 80 "prog_io_mode_defn.m"
};

#line 34 "prog_io_mode_defn.m"
struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s {
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__BodyTerm_12;
#line 226 "prog_io_mode_defn.m"
  MR_bool parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded;
#line 226 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeCtorInfo_123_123;
#line 284 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Args_22;
#line 239 "prog_io_mode_defn.m"
  jmp_buf parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__commit_0;
#line 239 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeInfo_124_124;
#line 239 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeInfo_134_134;
#line 239 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Arg2_23;
#line 239 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__OtherArgs_24;
#line 239 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__V_37_37;
#line 239 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__V_133_133;
#line 239 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__conv0_Arg2_23;
#line 252 "prog_io_mode_defn.m"
  jmp_buf parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__commit_1;
#line 252 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Var2_27;
#line 34 "prog_io_mode_defn.m"
};


#line 222 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 225 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 228 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 231 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 234 "parse_tree.prog_io_mode_defn.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0[3];

#line 237 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0;

#line 240 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0[1];

#line 243 "parse_tree.prog_io_mode_defn.c"
static const MR_DuPtagLayout parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0[1];

#line 246 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0[1];

#line 249 "parse_tree.prog_io_mode_defn.c"
static const MR_Integer parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0[1];

#line 252 "parse_tree.prog_io_mode_defn.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001(
#line 255 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 257 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 260 "parse_tree.prog_io_mode_defn.c"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001(
#line 263 "parse_tree.prog_io_mode_defn.c"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 265 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2,
#line 267 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_3);

#line 199 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_abstract_inst_defn__199__1_2_p_0(
#line 199 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_75,
#line 199 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_76);

#line 142 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_inst_defn_base__142__1_2_p_0(
#line 142 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_155,
#line 142 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_156);

#line 268 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_mode_defn__268__1_2_p_0(
#line 268 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_127,
#line 268 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_128);

#line 218 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(
#line 218 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 218 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2,
#line 218 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__3_3);

#line 218 "prog_io_mode_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(
#line 218 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 218 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2);

#line 199 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_5(
#line 199 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 199 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 199 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 187 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_1(
#line 187 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 187 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_3(
#line 187 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 187 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_2(
#line 187 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 187 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_4(
#line 187 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 168 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0(
#line 168 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 168 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 168 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 168 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Condition_11,
#line 168 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 168 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 168 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_14);

#line 142 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_8(
#line 142 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 142 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 142 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 99 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_1(
#line 99 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 99 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_3(
#line 99 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 99 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_2(
#line 99 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 99 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_4(
#line 99 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 111 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_5(
#line 111 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 111 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_6(
#line 111 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 111 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_7(
#line 111 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 80 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0(
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_9,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_10,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_11,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_12,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Condition_13,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_14,
#line 80 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_15,
#line 80 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_16);

#line 268 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_8(
#line 268 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 268 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 268 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 239 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_1(
#line 239 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 239 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_3(
#line 239 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 239 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_2(
#line 239 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 239 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_4(
#line 239 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 252 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_5(
#line 252 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 252 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_6(
#line 252 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 252 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_7(
#line 252 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);


static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_1[57][2];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_2[13][1];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_4[3][3];




static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_1[57][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_mode_defn_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_mode_defn_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in LHS of mode definition."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: repeated parameters"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in RHS of mode definition."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: free inst parameter"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in mode definition body."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: mode parameters must be variables."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in LHS of inst definition."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: repeated inst parameters"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in RHS of inst definition."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: attempt to redefine builtin inst."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: inst parameters must be variables."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in abstract inst definition."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In mode definition:"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 48 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In inst definition:"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in inst body at"))
  },
  /* row 55 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 56 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_2[13][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ":- inst"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "=="))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "bound"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[11])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[15])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[19])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[23])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[25])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[29])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[32])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[34])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[38])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[41])))
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
    ((MR_Box) (parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_5)),
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



#line 892 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 900 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 908 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 916 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 924 "parse_tree.prog_io_mode_defn.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0
};

#line 931 "parse_tree.prog_io_mode_defn.c"
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

#line 946 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0[1] = {
  &parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0
};

#line 951 "parse_tree.prog_io_mode_defn.c"
static const MR_DuPtagLayout parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0
  }
};

#line 960 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0[1] = {
  &parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0
};

#line 965 "parse_tree.prog_io_mode_defn.c"
static const MR_Integer parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0[1] = {
  (MR_Integer) 0
};

#line 970 "parse_tree.prog_io_mode_defn.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__type_ctor_info_processed_mode_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001)),
  (MR_String) "parse_tree.prog_io_mode_defn",
  (MR_String) "processed_mode_body",
  {
    parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0
  },
  {
    parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0
};

#line 991 "parse_tree.prog_io_mode_defn.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001(
#line 994 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 996 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 998 "parse_tree.prog_io_mode_defn.c"
{
#line 1000 "parse_tree.prog_io_mode_defn.c"
  {
#line 1002 "parse_tree.prog_io_mode_defn.c"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 1005 "parse_tree.prog_io_mode_defn.c"
    {
#line 1007 "parse_tree.prog_io_mode_defn.c"
      parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_2));
    }
#line 1010 "parse_tree.prog_io_mode_defn.c"
    return parse_tree__prog_io_mode_defn__succeeded;
#line 1012 "parse_tree.prog_io_mode_defn.c"
  }
#line 1014 "parse_tree.prog_io_mode_defn.c"
}

#line 1017 "parse_tree.prog_io_mode_defn.c"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001(
#line 1020 "parse_tree.prog_io_mode_defn.c"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 1022 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2,
#line 1024 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_3)
#line 1026 "parse_tree.prog_io_mode_defn.c"
{
#line 1028 "parse_tree.prog_io_mode_defn.c"
  {
#line 1030 "parse_tree.prog_io_mode_defn.c"
    MR_Word parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1;

#line 1033 "parse_tree.prog_io_mode_defn.c"
    {
#line 1035 "parse_tree.prog_io_mode_defn.c"
      parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(&parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_3));
    }
#line 1038 "parse_tree.prog_io_mode_defn.c"
    *parse_tree__prog_io_mode_defn__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1));
#line 1040 "parse_tree.prog_io_mode_defn.c"
  }
#line 1042 "parse_tree.prog_io_mode_defn.c"
}

#line 199 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_abstract_inst_defn__199__1_2_p_0(
#line 199 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_75,
#line 199 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_76)
#line 199 "prog_io_mode_defn.m"
{
#line 199 "prog_io_mode_defn.m"
  {
#line 199 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 199 "prog_io_mode_defn.m"
    {
#line 199 "prog_io_mode_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__HeadVar__1_75, parse_tree__prog_io_mode_defn__HeadVar__2_76);
#line 199 "prog_io_mode_defn.m"
      return;
    }
#line 199 "prog_io_mode_defn.m"
  }
#line 199 "prog_io_mode_defn.m"
}

#line 142 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_inst_defn_base__142__1_2_p_0(
#line 142 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_155,
#line 142 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_156)
#line 142 "prog_io_mode_defn.m"
{
#line 142 "prog_io_mode_defn.m"
  {
#line 142 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 142 "prog_io_mode_defn.m"
    {
#line 142 "prog_io_mode_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__HeadVar__1_155, parse_tree__prog_io_mode_defn__HeadVar__2_156);
#line 142 "prog_io_mode_defn.m"
      return;
    }
#line 142 "prog_io_mode_defn.m"
  }
#line 142 "prog_io_mode_defn.m"
}

#line 268 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_mode_defn__268__1_2_p_0(
#line 268 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_127,
#line 268 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_128)
#line 268 "prog_io_mode_defn.m"
{
#line 268 "prog_io_mode_defn.m"
  {
#line 268 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 268 "prog_io_mode_defn.m"
    {
#line 268 "prog_io_mode_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__HeadVar__1_127, parse_tree__prog_io_mode_defn__HeadVar__2_128);
#line 268 "prog_io_mode_defn.m"
      return;
    }
#line 268 "prog_io_mode_defn.m"
  }
#line 268 "prog_io_mode_defn.m"
}

#line 218 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(
#line 218 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 218 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2,
#line 218 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__3_3)
#line 218 "prog_io_mode_defn.m"
{
#line 218 "prog_io_mode_defn.m"
  {
#line 218 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 218 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastX_12 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__2_2;
#line 218 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastY_13 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__3_3;

#line 218 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__CastX_12 == parse_tree__prog_io_mode_defn__CastY_13);
#line 218 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 1147 "parse_tree.prog_io_mode_defn.c"
      *parse_tree__prog_io_mode_defn__HeadVar__1_1 = (MR_Integer) 0;
#line 218 "prog_io_mode_defn.m"
    else
#line 218 "prog_io_mode_defn.m"
      {
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 2)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 2)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_10_10;

#line 218 "prog_io_mode_defn.m"
        {
#line 218 "prog_io_mode_defn.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&parse_tree__prog_io_mode_defn__V_10_10, parse_tree__prog_io_mode_defn__V_4_4, parse_tree__prog_io_mode_defn__V_7_7);
        }
#line 1173 "parse_tree.prog_io_mode_defn.c"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_10_10 == (MR_Integer) 0);
#line 218 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = !(parse_tree__prog_io_mode_defn__succeeded);
#line 218 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 218 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__HeadVar__1_1 = parse_tree__prog_io_mode_defn__V_10_10;
#line 218 "prog_io_mode_defn.m"
        else
#line 218 "prog_io_mode_defn.m"
          {
#line 218 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_11_11;

#line 218 "prog_io_mode_defn.m"
            {
#line 218 "prog_io_mode_defn.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2], &parse_tree__prog_io_mode_defn__V_11_11, ((MR_Box) (parse_tree__prog_io_mode_defn__V_5_5)), ((MR_Box) (parse_tree__prog_io_mode_defn__V_8_8)));
            }
#line 1193 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_11_11 == (MR_Integer) 0);
#line 218 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = !(parse_tree__prog_io_mode_defn__succeeded);
#line 218 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 218 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__HeadVar__1_1 = parse_tree__prog_io_mode_defn__V_11_11;
#line 218 "prog_io_mode_defn.m"
            else
#line 218 "prog_io_mode_defn.m"
              {
#line 218 "prog_io_mode_defn.m"
                parse_tree__prog_data____Compare____mode_defn_0_0(parse_tree__prog_io_mode_defn__HeadVar__1_1, parse_tree__prog_io_mode_defn__V_6_6, parse_tree__prog_io_mode_defn__V_9_9);
#line 218 "prog_io_mode_defn.m"
                return;
              }
#line 218 "prog_io_mode_defn.m"
          }
#line 218 "prog_io_mode_defn.m"
      }
#line 218 "prog_io_mode_defn.m"
  }
#line 218 "prog_io_mode_defn.m"
}

#line 218 "prog_io_mode_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(
#line 218 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 218 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2)
#line 218 "prog_io_mode_defn.m"
{
#line 218 "prog_io_mode_defn.m"
  {
#line 218 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 218 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastX_9 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__1_1;
#line 218 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastY_10 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__2_2;

#line 218 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__CastX_9 == parse_tree__prog_io_mode_defn__CastY_10);
#line 218 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 218 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__succeeded = MR_TRUE;
#line 218 "prog_io_mode_defn.m"
    else
#line 218 "prog_io_mode_defn.m"
      {
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_12_12;
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 2)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 2)));

#line 1262 "parse_tree.prog_io_mode_defn.c"
        {
#line 1264 "parse_tree.prog_io_mode_defn.c"
          parse_tree__prog_io_mode_defn__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io_mode_defn__V_3_3, parse_tree__prog_io_mode_defn__V_6_6);
        }
#line 218 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 218 "prog_io_mode_defn.m"
          {
#line 1271 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 1273 "parse_tree.prog_io_mode_defn.c"
            {
#line 1275 "parse_tree.prog_io_mode_defn.c"
              parse_tree__prog_io_mode_defn__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_io_mode_defn__V_4_4)), ((MR_Box) (parse_tree__prog_io_mode_defn__V_7_7)));
            }
#line 218 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 1280 "parse_tree.prog_io_mode_defn.c"
              {
#line 1282 "parse_tree.prog_io_mode_defn.c"
                return parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(parse_tree__prog_io_mode_defn__V_5_5, parse_tree__prog_io_mode_defn__V_8_8);
              }
#line 218 "prog_io_mode_defn.m"
          }
#line 218 "prog_io_mode_defn.m"
      }
#line 218 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__succeeded;
#line 218 "prog_io_mode_defn.m"
  }
#line 218 "prog_io_mode_defn.m"
}

#line 199 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_5(
#line 199 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 199 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 199 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 199 "prog_io_mode_defn.m"
{
#line 199 "prog_io_mode_defn.m"
  {
#line 199 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 199 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__conv1_HeadVar__2_76;

#line 199 "prog_io_mode_defn.m"
    {
#line 199 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_abstract_inst_defn__199__1_2_p_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), &parse_tree__prog_io_mode_defn__conv1_HeadVar__2_76);
    }
#line 199 "prog_io_mode_defn.m"
    *parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv1_HeadVar__2_76));
#line 199 "prog_io_mode_defn.m"
  }
#line 199 "prog_io_mode_defn.m"
}

#line 187 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_1(
#line 187 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 187 "prog_io_mode_defn.m"
{
#line 187 "prog_io_mode_defn.m"
  {
#line 187 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 187 "prog_io_mode_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__commit_0, 1);
#line 187 "prog_io_mode_defn.m"
  }
#line 187 "prog_io_mode_defn.m"
}

#line 187 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_3(
#line 187 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 187 "prog_io_mode_defn.m"
{
#line 187 "prog_io_mode_defn.m"
  {
#line 187 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 187 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__Arg2_21 = ((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__conv0_Arg2_21);
#line 187 "prog_io_mode_defn.m"
    {
#line 187 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_2(parse_tree__prog_io_mode_defn__env_ptr);
#line 187 "prog_io_mode_defn.m"
      return;
    }
#line 187 "prog_io_mode_defn.m"
  }
#line 187 "prog_io_mode_defn.m"
}

#line 187 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_2(
#line 187 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 187 "prog_io_mode_defn.m"
{
#line 187 "prog_io_mode_defn.m"
  {
#line 187 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 187 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 187 "prog_io_mode_defn.m"
    if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded)
#line 187 "prog_io_mode_defn.m"
      {
#line 187 "prog_io_mode_defn.m"
        {
#line 187 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__V_33_33, (MR_Integer) 0)));
#line 187 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__OtherArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__V_33_33, (MR_Integer) 1)));
#line 187 "prog_io_mode_defn.m"
        }
#line 187 "prog_io_mode_defn.m"
        {
#line 1399 "parse_tree.prog_io_mode_defn.c"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__TypeInfo_82_82 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 187 "prog_io_mode_defn.m"
          {
#line 187 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__TypeInfo_82_82, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__Arg2_21)), ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__V_81_81)));
          }
#line 187 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded)
#line 187 "prog_io_mode_defn.m"
            {
#line 188 "prog_io_mode_defn.m"
              {
#line 188 "prog_io_mode_defn.m"
                (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__TypeInfo_73_73, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__Arg2_21)), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__OtherArgs_22);
              }
#line 188 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded)
#line 188 "prog_io_mode_defn.m"
                {
#line 188 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_1(parse_tree__prog_io_mode_defn__env_ptr);
#line 188 "prog_io_mode_defn.m"
                  return;
                }
#line 187 "prog_io_mode_defn.m"
            }
#line 187 "prog_io_mode_defn.m"
        }
#line 187 "prog_io_mode_defn.m"
      }
#line 187 "prog_io_mode_defn.m"
  }
#line 187 "prog_io_mode_defn.m"
}

#line 187 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_4(
#line 187 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 187 "prog_io_mode_defn.m"
{
#line 187 "prog_io_mode_defn.m"
  {
#line 187 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 187 "prog_io_mode_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__commit_0) == 0)
#line 187 "prog_io_mode_defn.m"
      {
#line 1451 "parse_tree.prog_io_mode_defn.c"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__TypeInfo_73_73 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 187 "prog_io_mode_defn.m"
        {
#line 187 "prog_io_mode_defn.m"
          mercury__list__member_3_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__TypeInfo_73_73, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__conv0_Arg2_21, (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__Args_20, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__V_33_33, parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_3, parse_tree__prog_io_mode_defn__env_ptr);
        }
#line 187 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded = MR_FALSE;
#line 187 "prog_io_mode_defn.m"
      }
#line 187 "prog_io_mode_defn.m"
    else
#line 187 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 187 "prog_io_mode_defn.m"
  }
#line 187 "prog_io_mode_defn.m"
}

#line 168 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0(
#line 168 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 168 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 168 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 168 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Condition_11,
#line 168 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 168 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 168 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_14)
#line 168 "prog_io_mode_defn.m"
{
#line 168 "prog_io_mode_defn.m"
  {
#line 168 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0_s parse_tree__prog_io_mode_defn__env;

#line 172 "prog_io_mode_defn.m"
    {
#line 172 "prog_io_mode_defn.m"
      MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_72_72 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 172 "prog_io_mode_defn.m"
      MR_Word parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16;

#line 174 "prog_io_mode_defn.m"
      {
#line 174 "prog_io_mode_defn.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_72_72, parse_tree__prog_io_mode_defn__ModuleName_8, parse_tree__prog_io_mode_defn__HeadTerm_10, parse_tree__prog_io_mode_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[50]), &parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16);
      }
#line 179 "prog_io_mode_defn.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16)) == (MR_mktag((MR_Integer) 0))))
#line 177 "prog_io_mode_defn.m"
        {
#line 177 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16, (MR_Integer) 0)));

#line 178 "prog_io_mode_defn.m"
          {
#line 178 "prog_io_mode_defn.m"
            MR_Word base;
#line 178 "prog_io_mode_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 178 "prog_io_mode_defn.m"
            *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 178 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_17));
#line 178 "prog_io_mode_defn.m"
          }
#line 177 "prog_io_mode_defn.m"
        }
#line 179 "prog_io_mode_defn.m"
      else
#line 180 "prog_io_mode_defn.m"
        {
#line 180 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16, (MR_Integer) 0)));
#line 180 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__ArgTerms_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16, (MR_Integer) 1)));

#line 183 "prog_io_mode_defn.m"
          {
#line 183 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_72_72, parse_tree__prog_io_mode_defn__ArgTerms_19, &(parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__Args_20);
          }
#line 206 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded)
#line 197 "prog_io_mode_defn.m"
            {
#line 187 "prog_io_mode_defn.m"
              {
#line 187 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_4(&parse_tree__prog_io_mode_defn__env);
              }
#line 197 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__succeeded)
#line 192 "prog_io_mode_defn.m"
                {
#line 192 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__Spec_24;
#line 192 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_44_44;
#line 192 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_45_45;
#line 192 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_46_46;
#line 192 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_51_51;

#line 194 "prog_io_mode_defn.m"
                  {
#line 194 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_46_46 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_72_72, parse_tree__prog_io_mode_defn__HeadTerm_10);
                  }
#line 195 "prog_io_mode_defn.m"
                  {
#line 195 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 195 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_46_46));
#line 195 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[56])));
#line 195 "prog_io_mode_defn.m"
                  }
#line 193 "prog_io_mode_defn.m"
                  {
#line 193 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_45_45));
#line 193 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "prog_io_mode_defn.m"
                  }
#line 193 "prog_io_mode_defn.m"
                  {
#line 193 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 193 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 193 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_44_44));
#line 193 "prog_io_mode_defn.m"
                  }
#line 196 "prog_io_mode_defn.m"
                  {
#line 196 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_24));
#line 196 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "prog_io_mode_defn.m"
                  }
#line 196 "prog_io_mode_defn.m"
                  {
#line 196 "prog_io_mode_defn.m"
                    MR_Word base;
#line 196 "prog_io_mode_defn.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 196 "prog_io_mode_defn.m"
                    *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 196 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_51_51));
#line 196 "prog_io_mode_defn.m"
                  }
#line 192 "prog_io_mode_defn.m"
                }
#line 197 "prog_io_mode_defn.m"
              else
#line 198 "prog_io_mode_defn.m"
                {
#line 198 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__InstVarSet_25;
#line 198 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__InstArgs_26;
#line 198 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__ItemInstDefn_28;
#line 198 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__Item_29;

#line 198 "prog_io_mode_defn.m"
                  {
#line 198 "prog_io_mode_defn.m"
                    mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_72_72, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_9, &parse_tree__prog_io_mode_defn__InstVarSet_25);
                  }
#line 199 "prog_io_mode_defn.m"
                  {
#line 199 "prog_io_mode_defn.m"
                    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_4[2], (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0_env_0__Args_20, &parse_tree__prog_io_mode_defn__InstArgs_26);
                  }
#line 201 "prog_io_mode_defn.m"
                  {
#line 201 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__ItemInstDefn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 201 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_28, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_25));
#line 201 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_28, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_18));
#line 201 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_28, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgs_26));
#line 201 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_28, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Condition_11));
#line 201 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_28, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_12));
#line 201 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_28, 6) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_13));
#line 201 "prog_io_mode_defn.m"
                  }
#line 203 "prog_io_mode_defn.m"
                  {
#line 203 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 203 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_29, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ItemInstDefn_28));
#line 203 "prog_io_mode_defn.m"
                  }
#line 204 "prog_io_mode_defn.m"
                  {
#line 204 "prog_io_mode_defn.m"
                    MR_Word base;
#line 204 "prog_io_mode_defn.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_io_mode_defn.m"
                    *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 204 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_29));
#line 204 "prog_io_mode_defn.m"
                  }
#line 198 "prog_io_mode_defn.m"
                }
#line 197 "prog_io_mode_defn.m"
            }
#line 206 "prog_io_mode_defn.m"
          else
#line 209 "prog_io_mode_defn.m"
            {
#line 209 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_61_61;
#line 209 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_62_62;
#line 209 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_63_63;
#line 209 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_68_68;
#line 209 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__Spec_71;

#line 211 "prog_io_mode_defn.m"
              {
#line 211 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_63_63 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_72_72, parse_tree__prog_io_mode_defn__HeadTerm_10);
              }
#line 211 "prog_io_mode_defn.m"
              {
#line 211 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_63_63));
#line 211 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[55])));
#line 211 "prog_io_mode_defn.m"
              }
#line 210 "prog_io_mode_defn.m"
              {
#line 210 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_62_62));
#line 210 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "prog_io_mode_defn.m"
              }
#line 210 "prog_io_mode_defn.m"
              {
#line 210 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__Spec_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 210 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 210 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_71, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_61_61));
#line 210 "prog_io_mode_defn.m"
              }
#line 212 "prog_io_mode_defn.m"
              {
#line 212 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_71));
#line 212 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_io_mode_defn.m"
              }
#line 212 "prog_io_mode_defn.m"
              {
#line 212 "prog_io_mode_defn.m"
                MR_Word base;
#line 212 "prog_io_mode_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 212 "prog_io_mode_defn.m"
                *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 212 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_68_68));
#line 212 "prog_io_mode_defn.m"
              }
#line 209 "prog_io_mode_defn.m"
            }
#line 180 "prog_io_mode_defn.m"
        }
#line 172 "prog_io_mode_defn.m"
    }
#line 168 "prog_io_mode_defn.m"
  }
#line 168 "prog_io_mode_defn.m"
}

#line 142 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_8(
#line 142 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 142 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 142 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 142 "prog_io_mode_defn.m"
{
#line 142 "prog_io_mode_defn.m"
  {
#line 142 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 142 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__conv1_HeadVar__2_156;

#line 142 "prog_io_mode_defn.m"
    {
#line 142 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_inst_defn_base__142__1_2_p_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), &parse_tree__prog_io_mode_defn__conv1_HeadVar__2_156);
    }
#line 142 "prog_io_mode_defn.m"
    *parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv1_HeadVar__2_156));
#line 142 "prog_io_mode_defn.m"
  }
#line 142 "prog_io_mode_defn.m"
}

#line 99 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_1(
#line 99 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 99 "prog_io_mode_defn.m"
{
#line 99 "prog_io_mode_defn.m"
  {
#line 99 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 99 "prog_io_mode_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__commit_0, 1);
#line 99 "prog_io_mode_defn.m"
  }
#line 99 "prog_io_mode_defn.m"
}

#line 99 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_3(
#line 99 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 99 "prog_io_mode_defn.m"
{
#line 99 "prog_io_mode_defn.m"
  {
#line 99 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 99 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Arg2_23 = ((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__conv0_Arg2_23);
#line 99 "prog_io_mode_defn.m"
    {
#line 99 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_2(parse_tree__prog_io_mode_defn__env_ptr);
#line 99 "prog_io_mode_defn.m"
      return;
    }
#line 99 "prog_io_mode_defn.m"
  }
#line 99 "prog_io_mode_defn.m"
}

#line 99 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_2(
#line 99 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 99 "prog_io_mode_defn.m"
{
#line 99 "prog_io_mode_defn.m"
  {
#line 99 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 99 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 99 "prog_io_mode_defn.m"
    if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 99 "prog_io_mode_defn.m"
      {
#line 99 "prog_io_mode_defn.m"
        {
#line 99 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__V_41_41, (MR_Integer) 0)));
#line 99 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__OtherArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__V_41_41, (MR_Integer) 1)));
#line 99 "prog_io_mode_defn.m"
        }
#line 99 "prog_io_mode_defn.m"
        {
#line 1884 "parse_tree.prog_io_mode_defn.c"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeInfo_162_162 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 99 "prog_io_mode_defn.m"
          {
#line 99 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeInfo_162_162, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Arg2_23)), ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__V_161_161)));
          }
#line 99 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 99 "prog_io_mode_defn.m"
            {
#line 100 "prog_io_mode_defn.m"
              {
#line 100 "prog_io_mode_defn.m"
                (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeInfo_152_152, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Arg2_23)), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__OtherArgs_24);
              }
#line 100 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 100 "prog_io_mode_defn.m"
                {
#line 100 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_1(parse_tree__prog_io_mode_defn__env_ptr);
#line 100 "prog_io_mode_defn.m"
                  return;
                }
#line 99 "prog_io_mode_defn.m"
            }
#line 99 "prog_io_mode_defn.m"
        }
#line 99 "prog_io_mode_defn.m"
      }
#line 99 "prog_io_mode_defn.m"
  }
#line 99 "prog_io_mode_defn.m"
}

#line 99 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_4(
#line 99 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 99 "prog_io_mode_defn.m"
{
#line 99 "prog_io_mode_defn.m"
  {
#line 99 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 99 "prog_io_mode_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__commit_0) == 0)
#line 99 "prog_io_mode_defn.m"
      {
#line 1936 "parse_tree.prog_io_mode_defn.c"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeInfo_152_152 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 99 "prog_io_mode_defn.m"
        {
#line 99 "prog_io_mode_defn.m"
          mercury__list__member_3_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeInfo_152_152, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__conv0_Arg2_23, (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Args_22, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__V_41_41, parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_3, parse_tree__prog_io_mode_defn__env_ptr);
        }
#line 99 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = MR_FALSE;
#line 99 "prog_io_mode_defn.m"
      }
#line 99 "prog_io_mode_defn.m"
    else
#line 99 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = MR_TRUE;
#line 99 "prog_io_mode_defn.m"
  }
#line 99 "prog_io_mode_defn.m"
}

#line 111 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_5(
#line 111 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 111 "prog_io_mode_defn.m"
{
#line 111 "prog_io_mode_defn.m"
  {
#line 111 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 111 "prog_io_mode_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__commit_1, 1);
#line 111 "prog_io_mode_defn.m"
  }
#line 111 "prog_io_mode_defn.m"
}

#line 111 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_6(
#line 111 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 111 "prog_io_mode_defn.m"
{
#line 111 "prog_io_mode_defn.m"
  {
#line 111 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 111 "prog_io_mode_defn.m"
    {
#line 112 "prog_io_mode_defn.m"
      {
#line 112 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Var2_27)), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Args_22);
      }
#line 112 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = !((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded);
#line 112 "prog_io_mode_defn.m"
      if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 112 "prog_io_mode_defn.m"
        {
#line 112 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_5(parse_tree__prog_io_mode_defn__env_ptr);
#line 112 "prog_io_mode_defn.m"
          return;
        }
#line 111 "prog_io_mode_defn.m"
    }
#line 111 "prog_io_mode_defn.m"
  }
#line 111 "prog_io_mode_defn.m"
}

#line 111 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_7(
#line 111 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 111 "prog_io_mode_defn.m"
{
#line 111 "prog_io_mode_defn.m"
  {
#line 111 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 111 "prog_io_mode_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__commit_1) == 0)
#line 111 "prog_io_mode_defn.m"
      {
#line 111 "prog_io_mode_defn.m"
        {
#line 111 "prog_io_mode_defn.m"
          mercury__term__contains_var_2_p_1((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151, (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__BodyTerm_12, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Var2_27, parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_6, parse_tree__prog_io_mode_defn__env_ptr);
        }
#line 111 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = MR_FALSE;
#line 111 "prog_io_mode_defn.m"
      }
#line 111 "prog_io_mode_defn.m"
    else
#line 111 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = MR_TRUE;
#line 111 "prog_io_mode_defn.m"
  }
#line 111 "prog_io_mode_defn.m"
}

#line 80 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0(
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_9,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_10,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_11,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_12,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Condition_13,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_14,
#line 80 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_15,
#line 80 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_16)
#line 80 "prog_io_mode_defn.m"
{
#line 80 "prog_io_mode_defn.m"
  {
#line 80 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0_s parse_tree__prog_io_mode_defn__env;

#line 80 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__BodyTerm_12 = parse_tree__prog_io_mode_defn__BodyTerm_12;
#line 84 "prog_io_mode_defn.m"
    {
#line 84 "prog_io_mode_defn.m"
      MR_Word parse_tree__prog_io_mode_defn__MaybeNameAndArgs_18;

#line 2079 "parse_tree.prog_io_mode_defn.c"
      (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 86 "prog_io_mode_defn.m"
      {
#line 86 "prog_io_mode_defn.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151, parse_tree__prog_io_mode_defn__ModuleName_9, parse_tree__prog_io_mode_defn__HeadTerm_11, parse_tree__prog_io_mode_defn__VarSet_10, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[50]), &parse_tree__prog_io_mode_defn__MaybeNameAndArgs_18);
      }
#line 91 "prog_io_mode_defn.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeNameAndArgs_18)) == (MR_mktag((MR_Integer) 0))))
#line 89 "prog_io_mode_defn.m"
        {
#line 89 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Specs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_18, (MR_Integer) 0)));

#line 90 "prog_io_mode_defn.m"
          {
#line 90 "prog_io_mode_defn.m"
            MR_Word base;
#line 90 "prog_io_mode_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 90 "prog_io_mode_defn.m"
            *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 90 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_19));
#line 90 "prog_io_mode_defn.m"
          }
#line 89 "prog_io_mode_defn.m"
        }
#line 91 "prog_io_mode_defn.m"
      else
#line 92 "prog_io_mode_defn.m"
        {
#line 92 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_18, (MR_Integer) 0)));
#line 92 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__ArgTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_18, (MR_Integer) 1)));

#line 95 "prog_io_mode_defn.m"
          {
#line 95 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = mercury__term__term_list_to_var_list_2_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151, parse_tree__prog_io_mode_defn__ArgTerms_21, &(parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Args_22);
          }
#line 158 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 109 "prog_io_mode_defn.m"
            {
#line 99 "prog_io_mode_defn.m"
              {
#line 99 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_4(&parse_tree__prog_io_mode_defn__env);
              }
#line 109 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 104 "prog_io_mode_defn.m"
                {
#line 104 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__Spec_26;
#line 104 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_52_52;
#line 104 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_53_53;
#line 104 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_54_54;
#line 104 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_59_59;

#line 106 "prog_io_mode_defn.m"
                  {
#line 106 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_54_54 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151, parse_tree__prog_io_mode_defn__HeadTerm_11);
                  }
#line 107 "prog_io_mode_defn.m"
                  {
#line 107 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 107 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_54_54));
#line 107 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[51])));
#line 107 "prog_io_mode_defn.m"
                  }
#line 105 "prog_io_mode_defn.m"
                  {
#line 105 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_53_53));
#line 105 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "prog_io_mode_defn.m"
                  }
#line 105 "prog_io_mode_defn.m"
                  {
#line 105 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 105 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 105 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_52_52));
#line 105 "prog_io_mode_defn.m"
                  }
#line 108 "prog_io_mode_defn.m"
                  {
#line 108 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_26));
#line 108 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "prog_io_mode_defn.m"
                  }
#line 108 "prog_io_mode_defn.m"
                  {
#line 108 "prog_io_mode_defn.m"
                    MR_Word base;
#line 108 "prog_io_mode_defn.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 108 "prog_io_mode_defn.m"
                    *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 108 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_59_59));
#line 108 "prog_io_mode_defn.m"
                  }
#line 104 "prog_io_mode_defn.m"
                }
#line 109 "prog_io_mode_defn.m"
              else
#line 120 "prog_io_mode_defn.m"
                {
#line 111 "prog_io_mode_defn.m"
                  {
#line 111 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_7(&parse_tree__prog_io_mode_defn__env);
                  }
#line 120 "prog_io_mode_defn.m"
                  if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 115 "prog_io_mode_defn.m"
                    {
#line 115 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_71_71;
#line 115 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_72_72;
#line 115 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_73_73;
#line 115 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_78_78;
#line 115 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__Spec_138;

#line 117 "prog_io_mode_defn.m"
                      {
#line 117 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_73_73 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__BodyTerm_12);
                      }
#line 118 "prog_io_mode_defn.m"
                      {
#line 118 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_73_73));
#line 118 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[52])));
#line 118 "prog_io_mode_defn.m"
                      }
#line 116 "prog_io_mode_defn.m"
                      {
#line 116 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_72_72));
#line 116 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 116 "prog_io_mode_defn.m"
                      }
#line 116 "prog_io_mode_defn.m"
                      {
#line 116 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__Spec_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 116 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 116 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 116 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_138, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_71_71));
#line 116 "prog_io_mode_defn.m"
                      }
#line 119 "prog_io_mode_defn.m"
                      {
#line 119 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_138));
#line 119 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "prog_io_mode_defn.m"
                      }
#line 119 "prog_io_mode_defn.m"
                      {
#line 119 "prog_io_mode_defn.m"
                        MR_Word base;
#line 119 "prog_io_mode_defn.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 119 "prog_io_mode_defn.m"
                        *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 119 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_78_78));
#line 119 "prog_io_mode_defn.m"
                      }
#line 115 "prog_io_mode_defn.m"
                    }
#line 120 "prog_io_mode_defn.m"
                  else
#line 136 "prog_io_mode_defn.m"
                    {
#line 125 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__UserInst_28;
#line 125 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_81_81;
#line 126 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_29_29;
#line 126 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_30_30;

#line 124 "prog_io_mode_defn.m"
                      {
#line 124 "prog_io_mode_defn.m"
                        (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_mode_defn__HeadTerm_11, &parse_tree__prog_io_mode_defn__UserInst_28);
                      }
#line 125 "prog_io_mode_defn.m"
                      if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 125 "prog_io_mode_defn.m"
                        {
#line 126 "prog_io_mode_defn.m"
                          (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__UserInst_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__UserInst_28, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 126 "prog_io_mode_defn.m"
                          if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 126 "prog_io_mode_defn.m"
                            {
#line 126 "prog_io_mode_defn.m"
                              parse_tree__prog_io_mode_defn__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__UserInst_28, (MR_Integer) 1)));
#line 126 "prog_io_mode_defn.m"
                              (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_81_81)) == (MR_mktag((MR_Integer) 0)));
#line 126 "prog_io_mode_defn.m"
                              if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 126 "prog_io_mode_defn.m"
                                {
#line 126 "prog_io_mode_defn.m"
                                  parse_tree__prog_io_mode_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_81_81, (MR_Integer) 0)));
#line 126 "prog_io_mode_defn.m"
                                  parse_tree__prog_io_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_81_81, (MR_Integer) 1)));
#line 126 "prog_io_mode_defn.m"
                                }
#line 126 "prog_io_mode_defn.m"
                            }
#line 125 "prog_io_mode_defn.m"
                        }
#line 123 "prog_io_mode_defn.m"
                      (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = !((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded);
#line 136 "prog_io_mode_defn.m"
                      if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 131 "prog_io_mode_defn.m"
                        {
#line 131 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_89_89;
#line 131 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_90_90;
#line 131 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_91_91;
#line 131 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_96_96;
#line 131 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__Spec_140;

#line 133 "prog_io_mode_defn.m"
                          {
#line 133 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_91_91 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151, parse_tree__prog_io_mode_defn__HeadTerm_11);
                          }
#line 134 "prog_io_mode_defn.m"
                          {
#line 134 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 134 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_91_91));
#line 134 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[53])));
#line 134 "prog_io_mode_defn.m"
                          }
#line 132 "prog_io_mode_defn.m"
                          {
#line 132 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_90_90));
#line 132 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "prog_io_mode_defn.m"
                          }
#line 132 "prog_io_mode_defn.m"
                          {
#line 132 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__Spec_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 132 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 132 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_140, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_89_89));
#line 132 "prog_io_mode_defn.m"
                          }
#line 135 "prog_io_mode_defn.m"
                          {
#line 135 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_140));
#line 135 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 135 "prog_io_mode_defn.m"
                          }
#line 135 "prog_io_mode_defn.m"
                          {
#line 135 "prog_io_mode_defn.m"
                            MR_Word base;
#line 135 "prog_io_mode_defn.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 135 "prog_io_mode_defn.m"
                            *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 135 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_96_96));
#line 135 "prog_io_mode_defn.m"
                          }
#line 131 "prog_io_mode_defn.m"
                        }
#line 136 "prog_io_mode_defn.m"
                      else
#line 148 "prog_io_mode_defn.m"
                        {
#line 148 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__Inst_31;

#line 139 "prog_io_mode_defn.m"
                          {
#line 139 "prog_io_mode_defn.m"
                            (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__BodyTerm_12, &parse_tree__prog_io_mode_defn__Inst_31);
                          }
#line 148 "prog_io_mode_defn.m"
                          if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__succeeded)
#line 141 "prog_io_mode_defn.m"
                            {
#line 141 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__InstVarSet_32;
#line 141 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__InstArgs_33;
#line 141 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__InstDefn_34;
#line 141 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__ItemInstDefn_35;
#line 141 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__Item_36;

#line 141 "prog_io_mode_defn.m"
                              {
#line 141 "prog_io_mode_defn.m"
                                mercury__varset__coerce_2_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_10, &parse_tree__prog_io_mode_defn__InstVarSet_32);
                              }
#line 142 "prog_io_mode_defn.m"
                              {
#line 142 "prog_io_mode_defn.m"
                                mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_4[1], (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__Args_22, &parse_tree__prog_io_mode_defn__InstArgs_33);
                              }
#line 143 "prog_io_mode_defn.m"
                              {
#line 143 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__InstDefn_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 143 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__InstDefn_34, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Inst_31));
#line 143 "prog_io_mode_defn.m"
                              }
#line 144 "prog_io_mode_defn.m"
                              {
#line 144 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__ItemInstDefn_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 144 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_35, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_32));
#line 144 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_35, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_20));
#line 144 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_35, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgs_33));
#line 144 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_35, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstDefn_34));
#line 144 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_35, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Condition_13));
#line 144 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_35, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_14));
#line 144 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_35, 6) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_15));
#line 144 "prog_io_mode_defn.m"
                              }
#line 146 "prog_io_mode_defn.m"
                              {
#line 146 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__Item_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 146 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_36, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ItemInstDefn_35));
#line 146 "prog_io_mode_defn.m"
                              }
#line 147 "prog_io_mode_defn.m"
                              {
#line 147 "prog_io_mode_defn.m"
                                MR_Word base;
#line 147 "prog_io_mode_defn.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 147 "prog_io_mode_defn.m"
                                *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 147 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_36));
#line 147 "prog_io_mode_defn.m"
                              }
#line 141 "prog_io_mode_defn.m"
                            }
#line 148 "prog_io_mode_defn.m"
                          else
#line 149 "prog_io_mode_defn.m"
                            {
#line 149 "prog_io_mode_defn.m"
                              MR_String parse_tree__prog_io_mode_defn__BodyTermStr_37;
#line 149 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_102_102;
#line 149 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_103_103;
#line 149 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_112_112;
#line 149 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_113_113;
#line 149 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_114_114;
#line 149 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_115_115;
#line 149 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_116_116;
#line 149 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_119_119;
#line 149 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__Pieces_141;
#line 149 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__Spec_142;

#line 149 "prog_io_mode_defn.m"
                              {
#line 149 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__BodyTermStr_37 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151, parse_tree__prog_io_mode_defn__VarSet_10, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__BodyTerm_12);
                              }
#line 151 "prog_io_mode_defn.m"
                              {
#line 151 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 151 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_103_103, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTermStr_37));
#line 151 "prog_io_mode_defn.m"
                              }
#line 150 "prog_io_mode_defn.m"
                              {
#line 150 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_103_103));
#line 150 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[36])));
#line 150 "prog_io_mode_defn.m"
                              }
#line 150 "prog_io_mode_defn.m"
                              {
#line 150 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__Pieces_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Pieces_141, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[54])));
#line 150 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Pieces_141, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_102_102));
#line 150 "prog_io_mode_defn.m"
                              }
#line 153 "prog_io_mode_defn.m"
                              {
#line 153 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_114_114 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__BodyTerm_12);
                              }
#line 154 "prog_io_mode_defn.m"
                              {
#line 154 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Pieces_141));
#line 154 "prog_io_mode_defn.m"
                              }
#line 153 "prog_io_mode_defn.m"
                              {
#line 153 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_116_116));
#line 153 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "prog_io_mode_defn.m"
                              }
#line 154 "prog_io_mode_defn.m"
                              {
#line 154 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_114_114));
#line 154 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_113_113, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_115_115));
#line 154 "prog_io_mode_defn.m"
                              }
#line 152 "prog_io_mode_defn.m"
                              {
#line 152 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_112_112, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_113_113));
#line 152 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "prog_io_mode_defn.m"
                              }
#line 152 "prog_io_mode_defn.m"
                              {
#line 152 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__Spec_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 152 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 152 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_142, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_112_112));
#line 152 "prog_io_mode_defn.m"
                              }
#line 155 "prog_io_mode_defn.m"
                              {
#line 155 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_142));
#line 155 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "prog_io_mode_defn.m"
                              }
#line 155 "prog_io_mode_defn.m"
                              {
#line 155 "prog_io_mode_defn.m"
                                MR_Word base;
#line 155 "prog_io_mode_defn.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 155 "prog_io_mode_defn.m"
                                *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 155 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_119_119));
#line 155 "prog_io_mode_defn.m"
                              }
#line 149 "prog_io_mode_defn.m"
                            }
#line 148 "prog_io_mode_defn.m"
                        }
#line 136 "prog_io_mode_defn.m"
                    }
#line 120 "prog_io_mode_defn.m"
                }
#line 109 "prog_io_mode_defn.m"
            }
#line 158 "prog_io_mode_defn.m"
          else
#line 161 "prog_io_mode_defn.m"
            {
#line 161 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_128_128;
#line 161 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_129_129;
#line 161 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_130_130;
#line 161 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_135_135;
#line 161 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__Spec_150;

#line 163 "prog_io_mode_defn.m"
              {
#line 163 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_130_130 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0_env_0__TypeCtorInfo_151_151, parse_tree__prog_io_mode_defn__HeadTerm_11);
              }
#line 163 "prog_io_mode_defn.m"
              {
#line 163 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 163 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_130_130));
#line 163 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[55])));
#line 163 "prog_io_mode_defn.m"
              }
#line 162 "prog_io_mode_defn.m"
              {
#line 162 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_128_128, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_129_129));
#line 162 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 162 "prog_io_mode_defn.m"
              }
#line 162 "prog_io_mode_defn.m"
              {
#line 162 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__Spec_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 162 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_150, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 162 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 162 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_150, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_128_128));
#line 162 "prog_io_mode_defn.m"
              }
#line 164 "prog_io_mode_defn.m"
              {
#line 164 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_150));
#line 164 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "prog_io_mode_defn.m"
              }
#line 164 "prog_io_mode_defn.m"
              {
#line 164 "prog_io_mode_defn.m"
                MR_Word base;
#line 164 "prog_io_mode_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 164 "prog_io_mode_defn.m"
                *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 164 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_135_135));
#line 164 "prog_io_mode_defn.m"
              }
#line 161 "prog_io_mode_defn.m"
            }
#line 92 "prog_io_mode_defn.m"
        }
#line 84 "prog_io_mode_defn.m"
    }
#line 80 "prog_io_mode_defn.m"
  }
#line 80 "prog_io_mode_defn.m"
}

#line 268 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_8(
#line 268 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 268 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 268 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 268 "prog_io_mode_defn.m"
{
#line 268 "prog_io_mode_defn.m"
  {
#line 268 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 268 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__conv1_HeadVar__2_128;

#line 268 "prog_io_mode_defn.m"
    {
#line 268 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_mode_defn__268__1_2_p_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), &parse_tree__prog_io_mode_defn__conv1_HeadVar__2_128);
    }
#line 268 "prog_io_mode_defn.m"
    *parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv1_HeadVar__2_128));
#line 268 "prog_io_mode_defn.m"
  }
#line 268 "prog_io_mode_defn.m"
}

#line 239 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_1(
#line 239 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 239 "prog_io_mode_defn.m"
{
#line 239 "prog_io_mode_defn.m"
  {
#line 239 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 239 "prog_io_mode_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__commit_0, 1);
#line 239 "prog_io_mode_defn.m"
  }
#line 239 "prog_io_mode_defn.m"
}

#line 239 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_3(
#line 239 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 239 "prog_io_mode_defn.m"
{
#line 239 "prog_io_mode_defn.m"
  {
#line 239 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 239 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Arg2_23 = ((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__conv0_Arg2_23);
#line 239 "prog_io_mode_defn.m"
    {
#line 239 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_2(parse_tree__prog_io_mode_defn__env_ptr);
#line 239 "prog_io_mode_defn.m"
      return;
    }
#line 239 "prog_io_mode_defn.m"
  }
#line 239 "prog_io_mode_defn.m"
}

#line 239 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_2(
#line 239 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 239 "prog_io_mode_defn.m"
{
#line 239 "prog_io_mode_defn.m"
  {
#line 239 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 239 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 239 "prog_io_mode_defn.m"
    if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded)
#line 239 "prog_io_mode_defn.m"
      {
#line 239 "prog_io_mode_defn.m"
        {
#line 239 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__V_37_37, (MR_Integer) 0)));
#line 239 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__OtherArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__V_37_37, (MR_Integer) 1)));
#line 239 "prog_io_mode_defn.m"
        }
#line 239 "prog_io_mode_defn.m"
        {
#line 2841 "parse_tree.prog_io_mode_defn.c"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeInfo_134_134 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 239 "prog_io_mode_defn.m"
          {
#line 239 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeInfo_134_134, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Arg2_23)), ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__V_133_133)));
          }
#line 239 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded)
#line 239 "prog_io_mode_defn.m"
            {
#line 240 "prog_io_mode_defn.m"
              {
#line 240 "prog_io_mode_defn.m"
                (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeInfo_124_124, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Arg2_23)), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__OtherArgs_24);
              }
#line 240 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded)
#line 240 "prog_io_mode_defn.m"
                {
#line 240 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_1(parse_tree__prog_io_mode_defn__env_ptr);
#line 240 "prog_io_mode_defn.m"
                  return;
                }
#line 239 "prog_io_mode_defn.m"
            }
#line 239 "prog_io_mode_defn.m"
        }
#line 239 "prog_io_mode_defn.m"
      }
#line 239 "prog_io_mode_defn.m"
  }
#line 239 "prog_io_mode_defn.m"
}

#line 239 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_4(
#line 239 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 239 "prog_io_mode_defn.m"
{
#line 239 "prog_io_mode_defn.m"
  {
#line 239 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 239 "prog_io_mode_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__commit_0) == 0)
#line 239 "prog_io_mode_defn.m"
      {
#line 2893 "parse_tree.prog_io_mode_defn.c"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeInfo_124_124 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 239 "prog_io_mode_defn.m"
        {
#line 239 "prog_io_mode_defn.m"
          mercury__list__member_3_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeInfo_124_124, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__conv0_Arg2_23, (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Args_22, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__V_37_37, parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_3, parse_tree__prog_io_mode_defn__env_ptr);
        }
#line 239 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = MR_FALSE;
#line 239 "prog_io_mode_defn.m"
      }
#line 239 "prog_io_mode_defn.m"
    else
#line 239 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = MR_TRUE;
#line 239 "prog_io_mode_defn.m"
  }
#line 239 "prog_io_mode_defn.m"
}

#line 252 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_5(
#line 252 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 252 "prog_io_mode_defn.m"
{
#line 252 "prog_io_mode_defn.m"
  {
#line 252 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 252 "prog_io_mode_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__commit_1, 1);
#line 252 "prog_io_mode_defn.m"
  }
#line 252 "prog_io_mode_defn.m"
}

#line 252 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_6(
#line 252 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 252 "prog_io_mode_defn.m"
{
#line 252 "prog_io_mode_defn.m"
  {
#line 252 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 252 "prog_io_mode_defn.m"
    {
#line 253 "prog_io_mode_defn.m"
      {
#line 253 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Var2_27)), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Args_22);
      }
#line 253 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = !((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded);
#line 253 "prog_io_mode_defn.m"
      if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded)
#line 253 "prog_io_mode_defn.m"
        {
#line 253 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_5(parse_tree__prog_io_mode_defn__env_ptr);
#line 253 "prog_io_mode_defn.m"
          return;
        }
#line 252 "prog_io_mode_defn.m"
    }
#line 252 "prog_io_mode_defn.m"
  }
#line 252 "prog_io_mode_defn.m"
}

#line 252 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_7(
#line 252 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 252 "prog_io_mode_defn.m"
{
#line 252 "prog_io_mode_defn.m"
  {
#line 252 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 252 "prog_io_mode_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__commit_1) == 0)
#line 252 "prog_io_mode_defn.m"
      {
#line 252 "prog_io_mode_defn.m"
        {
#line 252 "prog_io_mode_defn.m"
          mercury__term__contains_var_2_p_1((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeCtorInfo_123_123, (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__BodyTerm_12, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Var2_27, parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_6, parse_tree__prog_io_mode_defn__env_ptr);
        }
#line 252 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = MR_FALSE;
#line 252 "prog_io_mode_defn.m"
      }
#line 252 "prog_io_mode_defn.m"
    else
#line 252 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = MR_TRUE;
#line 252 "prog_io_mode_defn.m"
  }
#line 252 "prog_io_mode_defn.m"
}

#line 34 "prog_io_mode_defn.m"
void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0(
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_9,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_10,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_11,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_12,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Condition_13,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_14,
#line 34 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_15,
#line 34 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_16)
#line 34 "prog_io_mode_defn.m"
{
#line 34 "prog_io_mode_defn.m"
  {
#line 34 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0_s parse_tree__prog_io_mode_defn__env;

#line 34 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__BodyTerm_12 = parse_tree__prog_io_mode_defn__BodyTerm_12;
#line 226 "prog_io_mode_defn.m"
    {
#line 226 "prog_io_mode_defn.m"
      MR_Word parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_18;

#line 3036 "parse_tree.prog_io_mode_defn.c"
      (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeCtorInfo_123_123 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 228 "prog_io_mode_defn.m"
      {
#line 228 "prog_io_mode_defn.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeCtorInfo_123_123, parse_tree__prog_io_mode_defn__ModuleName_9, parse_tree__prog_io_mode_defn__HeadTerm_11, parse_tree__prog_io_mode_defn__VarSet_10, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[44]), &parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_18);
      }
#line 233 "prog_io_mode_defn.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_18)) == (MR_mktag((MR_Integer) 0))))
#line 231 "prog_io_mode_defn.m"
        {
#line 231 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Specs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_18, (MR_Integer) 0)));

#line 232 "prog_io_mode_defn.m"
          {
#line 232 "prog_io_mode_defn.m"
            MR_Word base;
#line 232 "prog_io_mode_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "prog_io_mode_defn.m"
            *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 232 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_19));
#line 232 "prog_io_mode_defn.m"
          }
#line 231 "prog_io_mode_defn.m"
        }
#line 233 "prog_io_mode_defn.m"
      else
#line 234 "prog_io_mode_defn.m"
        {
#line 234 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_18, (MR_Integer) 0)));
#line 234 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__ArgTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_18, (MR_Integer) 1)));

#line 236 "prog_io_mode_defn.m"
          {
#line 236 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = mercury__term__term_list_to_var_list_2_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeCtorInfo_123_123, parse_tree__prog_io_mode_defn__ArgTerms_21, &(parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Args_22);
          }
#line 284 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded)
#line 250 "prog_io_mode_defn.m"
            {
#line 239 "prog_io_mode_defn.m"
              {
#line 239 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_4(&parse_tree__prog_io_mode_defn__env);
              }
#line 250 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded)
#line 245 "prog_io_mode_defn.m"
                {
#line 245 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__Spec_26;
#line 245 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_48_48;
#line 245 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_49_49;
#line 245 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_50_50;
#line 245 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_55_55;

#line 247 "prog_io_mode_defn.m"
                  {
#line 247 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_50_50 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeCtorInfo_123_123, parse_tree__prog_io_mode_defn__HeadTerm_11);
                  }
#line 248 "prog_io_mode_defn.m"
                  {
#line 248 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_50_50));
#line 248 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[45])));
#line 248 "prog_io_mode_defn.m"
                  }
#line 246 "prog_io_mode_defn.m"
                  {
#line 246 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_49_49));
#line 246 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_io_mode_defn.m"
                  }
#line 246 "prog_io_mode_defn.m"
                  {
#line 246 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 246 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 246 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_48_48));
#line 246 "prog_io_mode_defn.m"
                  }
#line 249 "prog_io_mode_defn.m"
                  {
#line 249 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_26));
#line 249 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 249 "prog_io_mode_defn.m"
                  }
#line 249 "prog_io_mode_defn.m"
                  {
#line 249 "prog_io_mode_defn.m"
                    MR_Word base;
#line 249 "prog_io_mode_defn.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 249 "prog_io_mode_defn.m"
                    *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 249 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_55_55));
#line 249 "prog_io_mode_defn.m"
                  }
#line 245 "prog_io_mode_defn.m"
                }
#line 250 "prog_io_mode_defn.m"
              else
#line 263 "prog_io_mode_defn.m"
                {
#line 252 "prog_io_mode_defn.m"
                  {
#line 252 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_7(&parse_tree__prog_io_mode_defn__env);
                  }
#line 263 "prog_io_mode_defn.m"
                  if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded)
#line 258 "prog_io_mode_defn.m"
                    {
#line 258 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_67_67;
#line 258 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_68_68;
#line 258 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_69_69;
#line 258 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_74_74;
#line 258 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__Spec_114;

#line 260 "prog_io_mode_defn.m"
                      {
#line 260 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_69_69 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeCtorInfo_123_123, parse_tree__prog_io_mode_defn__HeadTerm_11);
                      }
#line 261 "prog_io_mode_defn.m"
                      {
#line 261 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_69_69));
#line 261 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[46])));
#line 261 "prog_io_mode_defn.m"
                      }
#line 259 "prog_io_mode_defn.m"
                      {
#line 259 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_68_68));
#line 259 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "prog_io_mode_defn.m"
                      }
#line 259 "prog_io_mode_defn.m"
                      {
#line 259 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__Spec_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 259 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 259 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_114, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_67_67));
#line 259 "prog_io_mode_defn.m"
                      }
#line 262 "prog_io_mode_defn.m"
                      {
#line 262 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_114));
#line 262 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 262 "prog_io_mode_defn.m"
                      }
#line 262 "prog_io_mode_defn.m"
                      {
#line 262 "prog_io_mode_defn.m"
                        MR_Word base;
#line 262 "prog_io_mode_defn.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 262 "prog_io_mode_defn.m"
                        *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 262 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_74_74));
#line 262 "prog_io_mode_defn.m"
                      }
#line 258 "prog_io_mode_defn.m"
                    }
#line 263 "prog_io_mode_defn.m"
                  else
#line 274 "prog_io_mode_defn.m"
                    {
#line 274 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__Mode_28;

#line 265 "prog_io_mode_defn.m"
                      {
#line 265 "prog_io_mode_defn.m"
                        (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 1, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__BodyTerm_12, &parse_tree__prog_io_mode_defn__Mode_28);
                      }
#line 274 "prog_io_mode_defn.m"
                      if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__succeeded)
#line 267 "prog_io_mode_defn.m"
                        {
#line 267 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__InstVarSet_29;
#line 267 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__ModeArgs_30;
#line 267 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__ModeDefn_31;
#line 267 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__ItemModeDefn_32;
#line 267 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__Item_33;

#line 267 "prog_io_mode_defn.m"
                          {
#line 267 "prog_io_mode_defn.m"
                            mercury__varset__coerce_2_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeCtorInfo_123_123, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_10, &parse_tree__prog_io_mode_defn__InstVarSet_29);
                          }
#line 268 "prog_io_mode_defn.m"
                          {
#line 268 "prog_io_mode_defn.m"
                            mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_4[0], (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__Args_22, &parse_tree__prog_io_mode_defn__ModeArgs_30);
                          }
#line 269 "prog_io_mode_defn.m"
                          parse_tree__prog_io_mode_defn__ModeDefn_31 = (MR_Word) parse_tree__prog_io_mode_defn__Mode_28;
#line 270 "prog_io_mode_defn.m"
                          {
#line 270 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__ItemModeDefn_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_32, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_29));
#line 270 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_32, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_20));
#line 270 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_32, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__ModeArgs_30));
#line 270 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_32, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__ModeDefn_31));
#line 270 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_32, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Condition_13));
#line 270 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_32, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_14));
#line 270 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_32, 6) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_15));
#line 270 "prog_io_mode_defn.m"
                          }
#line 272 "prog_io_mode_defn.m"
                          {
#line 272 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__Item_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 272 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_33, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ItemModeDefn_32));
#line 272 "prog_io_mode_defn.m"
                          }
#line 273 "prog_io_mode_defn.m"
                          {
#line 273 "prog_io_mode_defn.m"
                            MR_Word base;
#line 273 "prog_io_mode_defn.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 273 "prog_io_mode_defn.m"
                            *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 273 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_33));
#line 273 "prog_io_mode_defn.m"
                          }
#line 267 "prog_io_mode_defn.m"
                        }
#line 274 "prog_io_mode_defn.m"
                      else
#line 277 "prog_io_mode_defn.m"
                        {
#line 277 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_88_88;
#line 277 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_89_89;
#line 277 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_90_90;
#line 277 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_95_95;
#line 277 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__Spec_116;

#line 279 "prog_io_mode_defn.m"
                          {
#line 279 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_90_90 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeCtorInfo_123_123, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__BodyTerm_12);
                          }
#line 280 "prog_io_mode_defn.m"
                          {
#line 280 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_90_90));
#line 280 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[47])));
#line 280 "prog_io_mode_defn.m"
                          }
#line 278 "prog_io_mode_defn.m"
                          {
#line 278 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_89_89));
#line 278 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "prog_io_mode_defn.m"
                          }
#line 278 "prog_io_mode_defn.m"
                          {
#line 278 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__Spec_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 278 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 278 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_116, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_88_88));
#line 278 "prog_io_mode_defn.m"
                          }
#line 281 "prog_io_mode_defn.m"
                          {
#line 281 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_116));
#line 281 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "prog_io_mode_defn.m"
                          }
#line 281 "prog_io_mode_defn.m"
                          {
#line 281 "prog_io_mode_defn.m"
                            MR_Word base;
#line 281 "prog_io_mode_defn.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_mode_defn.m"
                            *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 281 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_95_95));
#line 281 "prog_io_mode_defn.m"
                          }
#line 277 "prog_io_mode_defn.m"
                        }
#line 274 "prog_io_mode_defn.m"
                    }
#line 263 "prog_io_mode_defn.m"
                }
#line 250 "prog_io_mode_defn.m"
            }
#line 284 "prog_io_mode_defn.m"
          else
#line 287 "prog_io_mode_defn.m"
            {
#line 287 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_104_104;
#line 287 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_105_105;
#line 287 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_106_106;
#line 287 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_111_111;
#line 287 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__Spec_122;

#line 289 "prog_io_mode_defn.m"
              {
#line 289 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_106_106 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0_env_0__TypeCtorInfo_123_123, parse_tree__prog_io_mode_defn__HeadTerm_11);
              }
#line 289 "prog_io_mode_defn.m"
              {
#line 289 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 289 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_106_106));
#line 289 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[48])));
#line 289 "prog_io_mode_defn.m"
              }
#line 288 "prog_io_mode_defn.m"
              {
#line 288 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_105_105));
#line 288 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "prog_io_mode_defn.m"
              }
#line 288 "prog_io_mode_defn.m"
              {
#line 288 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__Spec_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 288 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 288 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_122, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_104_104));
#line 288 "prog_io_mode_defn.m"
              }
#line 290 "prog_io_mode_defn.m"
              {
#line 290 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_122));
#line 290 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 290 "prog_io_mode_defn.m"
              }
#line 290 "prog_io_mode_defn.m"
              {
#line 290 "prog_io_mode_defn.m"
                MR_Word base;
#line 290 "prog_io_mode_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 290 "prog_io_mode_defn.m"
                *parse_tree__prog_io_mode_defn__MaybeItem_16 = base;
#line 290 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_111_111));
#line 290 "prog_io_mode_defn.m"
              }
#line 287 "prog_io_mode_defn.m"
            }
#line 234 "prog_io_mode_defn.m"
        }
#line 226 "prog_io_mode_defn.m"
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
#line 55 "prog_io_mode_defn.m"
  {
#line 55 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 55 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__HeadTerm_13;
#line 55 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__BodyTerm_14;
#line 50 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_25_25;
#line 50 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__V_26_26;
#line 50 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_27_27;
#line 50 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_28_28;
#line 50 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_29_29;
#line 50 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_15_15;

#line 50 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 50 "prog_io_mode_defn.m"
      {
#line 50 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 50 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 50 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 50 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 50 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 50 "prog_io_mode_defn.m"
          {
#line 50 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_25_25, (MR_Integer) 0)));
#line 50 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_26_26, (MR_String) "==") == 0);
#line 50 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 50 "prog_io_mode_defn.m"
              {
#line 50 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 50 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 50 "prog_io_mode_defn.m"
                  {
#line 50 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__HeadTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_27_27, (MR_Integer) 0)));
#line 50 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_27_27, (MR_Integer) 1)));
#line 50 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 50 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 50 "prog_io_mode_defn.m"
                      {
#line 50 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__BodyTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_28_28, (MR_Integer) 0)));
#line 50 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_28_28, (MR_Integer) 1)));
#line 50 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
#line 55 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 52 "prog_io_mode_defn.m"
      {
#line 52 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__BeforeCondTerm_16;
#line 52 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Condition_17;

#line 52 "prog_io_mode_defn.m"
        {
#line 52 "prog_io_mode_defn.m"
          parse_tree__prog_io_util__parse_condition_suffix_3_p_0(parse_tree__prog_io_mode_defn__BodyTerm_14, &parse_tree__prog_io_mode_defn__BeforeCondTerm_16, &parse_tree__prog_io_mode_defn__Condition_17);
        }
#line 53 "prog_io_mode_defn.m"
        {
#line 53 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_13, parse_tree__prog_io_mode_defn__BeforeCondTerm_16, parse_tree__prog_io_mode_defn__Condition_17, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 53 "prog_io_mode_defn.m"
          return;
        }
#line 52 "prog_io_mode_defn.m"
      }
#line 55 "prog_io_mode_defn.m"
    else
#line 64 "prog_io_mode_defn.m"
      {
#line 64 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTerm_82;
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Args_18;
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_30_30;
#line 58 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__V_31_31;
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_32_32;
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_33_33;
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_34_34;
#line 58 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__V_35_35;
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_36_36;
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_37_37;
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_19_19;
#line 59 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_20_20;

#line 58 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 58 "prog_io_mode_defn.m"
          {
#line 58 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 58 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 58 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 58 "prog_io_mode_defn.m"
              {
#line 58 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_30_30, (MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_31_31, (MR_String) "is") == 0);
#line 58 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 58 "prog_io_mode_defn.m"
                  {
#line 59 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Args_18)) == (MR_mktag((MR_Integer) 1)));
#line 59 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 59 "prog_io_mode_defn.m"
                      {
#line 59 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__HeadTerm_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Args_18, (MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Args_18, (MR_Integer) 1)));
#line 59 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 59 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 59 "prog_io_mode_defn.m"
                          {
#line 59 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_32_32, (MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_32_32, (MR_Integer) 1)));
#line 59 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 58 "prog_io_mode_defn.m"
                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 58 "prog_io_mode_defn.m"
                              {
#line 59 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
                                if (parse_tree__prog_io_mode_defn__succeeded)
#line 59 "prog_io_mode_defn.m"
                                  {
#line 59 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_33_33, (MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_33_33, (MR_Integer) 1)));
#line 59 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_33_33, (MR_Integer) 2)));
#line 59 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 58 "prog_io_mode_defn.m"
                                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 58 "prog_io_mode_defn.m"
                                      {
#line 59 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_34_34)) == (MR_mktag((MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
                                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 59 "prog_io_mode_defn.m"
                                          {
#line 59 "prog_io_mode_defn.m"
                                            parse_tree__prog_io_mode_defn__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_34_34, (MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
                                            parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_35_35, (MR_String) "private") == 0);
#line 59 "prog_io_mode_defn.m"
                                          }
#line 58 "prog_io_mode_defn.m"
                                      }
#line 59 "prog_io_mode_defn.m"
                                  }
#line 58 "prog_io_mode_defn.m"
                              }
#line 59 "prog_io_mode_defn.m"
                          }
#line 59 "prog_io_mode_defn.m"
                      }
#line 58 "prog_io_mode_defn.m"
                  }
#line 58 "prog_io_mode_defn.m"
              }
#line 58 "prog_io_mode_defn.m"
          }
#line 64 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 61 "prog_io_mode_defn.m"
          {
#line 62 "prog_io_mode_defn.m"
            {
#line 62 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_7_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 62 "prog_io_mode_defn.m"
              return;
            }
#line 61 "prog_io_mode_defn.m"
          }
#line 64 "prog_io_mode_defn.m"
        else
#line 72 "prog_io_mode_defn.m"
          {
#line 72 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__HeadTerm_78;
#line 72 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodyTerm_79;
#line 65 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_38_38;
#line 65 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__V_39_39;
#line 65 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_40_40;
#line 65 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_41_41;
#line 65 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_42_42;
#line 65 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_21_21;

#line 65 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 65 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 65 "prog_io_mode_defn.m"
              {
#line 65 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 65 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 65 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 65 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 65 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 65 "prog_io_mode_defn.m"
                  {
#line 65 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_38_38, (MR_Integer) 0)));
#line 65 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_39_39, (MR_String) "--->") == 0);
#line 65 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 65 "prog_io_mode_defn.m"
                      {
#line 65 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 65 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 65 "prog_io_mode_defn.m"
                          {
#line 65 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__HeadTerm_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_40_40, (MR_Integer) 0)));
#line 65 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_40_40, (MR_Integer) 1)));
#line 65 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 65 "prog_io_mode_defn.m"
                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 65 "prog_io_mode_defn.m"
                              {
#line 65 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__BodyTerm_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_41_41, (MR_Integer) 0)));
#line 65 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_41_41, (MR_Integer) 1)));
#line 65 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 65 "prog_io_mode_defn.m"
                              }
#line 65 "prog_io_mode_defn.m"
                          }
#line 65 "prog_io_mode_defn.m"
                      }
#line 65 "prog_io_mode_defn.m"
                  }
#line 65 "prog_io_mode_defn.m"
              }
#line 72 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 67 "prog_io_mode_defn.m"
              {
#line 67 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__BoundBeforeCondTerm_22;
#line 67 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_45_45;
#line 67 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__BeforeCondTerm_76;
#line 67 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__Condition_77;

#line 67 "prog_io_mode_defn.m"
                {
#line 67 "prog_io_mode_defn.m"
                  parse_tree__prog_io_util__parse_condition_suffix_3_p_0(parse_tree__prog_io_mode_defn__BodyTerm_79, &parse_tree__prog_io_mode_defn__BeforeCondTerm_76, &parse_tree__prog_io_mode_defn__Condition_77);
                }
#line 69 "prog_io_mode_defn.m"
                {
#line 69 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 69 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BeforeCondTerm_76));
#line 69 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 69 "prog_io_mode_defn.m"
                }
#line 68 "prog_io_mode_defn.m"
                {
#line 68 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__BoundBeforeCondTerm_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 68 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBeforeCondTerm_22, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[2]));
#line 68 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBeforeCondTerm_22, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_45_45));
#line 68 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBeforeCondTerm_22, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_10));
#line 68 "prog_io_mode_defn.m"
                }
#line 70 "prog_io_mode_defn.m"
                {
#line 70 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__parse_inst_defn_base_8_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_78, parse_tree__prog_io_mode_defn__BoundBeforeCondTerm_22, parse_tree__prog_io_mode_defn__Condition_77, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 70 "prog_io_mode_defn.m"
                  return;
                }
#line 67 "prog_io_mode_defn.m"
              }
#line 72 "prog_io_mode_defn.m"
            else
#line 74 "prog_io_mode_defn.m"
              {
#line 74 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__Spec_24;
#line 74 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_66_66;
#line 74 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_67_67;
#line 74 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_68_68;
#line 74 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_73_73;

#line 76 "prog_io_mode_defn.m"
                {
#line 76 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_68_68 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__Term_9);
                }
#line 76 "prog_io_mode_defn.m"
                {
#line 76 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 76 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_68_68));
#line 76 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[42])));
#line 76 "prog_io_mode_defn.m"
                }
#line 75 "prog_io_mode_defn.m"
                {
#line 75 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 75 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_67_67));
#line 75 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 75 "prog_io_mode_defn.m"
                }
#line 75 "prog_io_mode_defn.m"
                {
#line 75 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 75 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 75 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 75 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_66_66));
#line 75 "prog_io_mode_defn.m"
                }
#line 77 "prog_io_mode_defn.m"
                {
#line 77 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_24));
#line 77 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 77 "prog_io_mode_defn.m"
                }
#line 77 "prog_io_mode_defn.m"
                {
#line 77 "prog_io_mode_defn.m"
                  MR_Word base;
#line 77 "prog_io_mode_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 77 "prog_io_mode_defn.m"
                  *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 77 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_73_73));
#line 77 "prog_io_mode_defn.m"
                }
#line 74 "prog_io_mode_defn.m"
              }
#line 72 "prog_io_mode_defn.m"
          }
#line 64 "prog_io_mode_defn.m"
      }
#line 55 "prog_io_mode_defn.m"
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
