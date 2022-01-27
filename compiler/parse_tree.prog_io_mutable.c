/*
** Automatically generated from `prog_io_mutable.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module parse_tree.prog_io_mutable. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_mutable__init
ENDINIT
*/

#include "parse_tree.prog_io_mutable.mih"


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
#include "parse_tree.prog_io_pragma.mih"
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



#line 231 "prog_io_mutable.m"
struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s {
#line 234 "prog_io_mutable.m"
  MR_bool parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded;
#line 274 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11;
#line 256 "prog_io_mutable.m"
  jmp_buf parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0;
#line 256 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_110_110;
#line 256 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12;
#line 256 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13;
#line 256 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49;
#line 256 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49;
#line 231 "prog_io_mutable.m"
};

#line 204 "prog_io_mutable.m"
struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s {
#line 204 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5;
#line 215 "prog_io_mutable.m"
  MR_bool parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded;
#line 207 "prog_io_mutable.m"
  jmp_buf parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__commit_0;
#line 204 "prog_io_mutable.m"
};

#line 188 "prog_io_mutable.m"
struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s {
#line 188 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5;
#line 199 "prog_io_mutable.m"
  MR_bool parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded;
#line 191 "prog_io_mutable.m"
  jmp_buf parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__commit_0;
#line 188 "prog_io_mutable.m"
};


#line 175 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 178 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0;

#line 181 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_0[1];

#line 184 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0;

#line 187 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_1[1];

#line 190 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1;

#line 193 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_2[1];

#line 196 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2;

#line 199 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_3[1];

#line 202 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3;

#line 205 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_4[1];

#line 208 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4;

#line 211 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_0[1];

#line 214 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_1[1];

#line 217 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_2[1];

#line 220 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_3[2];

#line 223 "parse_tree.prog_io_mutable.c"
static const MR_DuPtagLayout parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_ptag_ordered_collected_mutable_attribute_0[4];

#line 226 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_name_ordered_collected_mutable_attribute_0[5];

#line 229 "parse_tree.prog_io_mutable.c"
static const MR_Integer parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_collected_mutable_attribute_0[5];

#line 232 "parse_tree.prog_io_mutable.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0_10001(
#line 235 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 237 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2);

#line 240 "parse_tree.prog_io_mutable.c"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0_10001(
#line 243 "parse_tree.prog_io_mutable.c"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_1,
#line 245 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 247 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_3);

#line 224 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0(
#line 224 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__HeadVar__1_1,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__3_3);

#line 224 "prog_io_mutable.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0(
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2);

#line 307 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attr_2_p_0(
#line 307 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrTerm_3,
#line 307 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MutAttrResult_4);

#line 284 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__process_mutable_attribute_3_p_0(
#line 284 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 284 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2,
#line 284 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);

#line 270 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_6(
#line 270 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 270 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 270 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 270 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_3);

#line 248 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_1(
#line 248 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 248 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 248 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_2);

#line 256 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_2(
#line 256 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 256 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_4(
#line 256 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 256 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_3(
#line 256 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 256 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_5(
#line 256 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 231 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0(
#line 231 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 231 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrsTerm_5,
#line 231 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeMutAttrs_6);

#line 207 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_1(
#line 207 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 207 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_2(
#line 207 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 204 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0(
#line 204 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 204 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__InstTerm_5,
#line 204 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeInst_6);

#line 191 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_1(
#line 191 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 191 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_2(
#line 191 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 188 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0(
#line 188 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 188 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__TypeTerm_5,
#line 188 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeType_6);


static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_2[40][2];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_3[8][1];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_5[1][6];




static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0)),
    ((MR_Box) (&parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_2[40][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid mutable name."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid inst in mutable declaration."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_mutable_scalar_common_3[0])))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1])))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[7])))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[2])))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in mutable declaration."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: unrecognised attribute"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the type in a mutable declaration"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot contain variables:"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the inst in a mutable declaration"))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: conflicting attributes"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in attribute list:"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: malformed attribute list"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in mutable declaration:"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "requires arity, found"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration specifies a predicate"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "whose arity is not zero or two:"))
  },
  /* row 39 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_3[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[6])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[22])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[4])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_mutable__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0))
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



#line 699 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 707 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0
  }
};

#line 715 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_trailed_0
};

#line 720 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0 = {
  (MR_String) "mutable_attr_trailed",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_0,
  NULL,
  NULL,
  NULL
};

#line 735 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_name_0
};

#line 740 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1 = {
  (MR_String) "mutable_attr_foreign_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_1,
  NULL,
  NULL,
  NULL
};

#line 755 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 760 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2 = {
  (MR_String) "mutable_attr_attach_to_io_state",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_2,
  NULL,
  NULL,
  NULL
};

#line 775 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 780 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3 = {
  (MR_String) "mutable_attr_constant",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_3,
  NULL,
  NULL,
  NULL
};

#line 795 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_4[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_thread_local_0
};

#line 800 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4 = {
  (MR_String) "mutable_attr_thread_local",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_4,
  NULL,
  NULL,
  NULL
};

#line 815 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_0[1] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1
};

#line 820 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_1[1] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0
};

#line 825 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_2[1] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2
};

#line 830 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_3[2] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4
};

#line 836 "parse_tree.prog_io_mutable.c"
static const MR_DuPtagLayout parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_ptag_ordered_collected_mutable_attribute_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_3
  }
};

#line 860 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_name_ordered_collected_mutable_attribute_0[5] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0
};

#line 869 "parse_tree.prog_io_mutable.c"
static const MR_Integer parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_collected_mutable_attribute_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3
};

#line 878 "parse_tree.prog_io_mutable.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0_10001)),
  (MR_String) "parse_tree.prog_io_mutable",
  (MR_String) "collected_mutable_attribute",
  {
    parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_name_ordered_collected_mutable_attribute_0
  },
  {
    parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_ptag_ordered_collected_mutable_attribute_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_collected_mutable_attribute_0
};

#line 899 "parse_tree.prog_io_mutable.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0_10001(
#line 902 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 904 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2)
#line 906 "parse_tree.prog_io_mutable.c"
{
#line 908 "parse_tree.prog_io_mutable.c"
  {
#line 910 "parse_tree.prog_io_mutable.c"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 913 "parse_tree.prog_io_mutable.c"
    {
#line 915 "parse_tree.prog_io_mutable.c"
      parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0(((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2));
    }
#line 918 "parse_tree.prog_io_mutable.c"
    return parse_tree__prog_io_mutable__succeeded;
#line 920 "parse_tree.prog_io_mutable.c"
  }
#line 922 "parse_tree.prog_io_mutable.c"
}

#line 925 "parse_tree.prog_io_mutable.c"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0_10001(
#line 928 "parse_tree.prog_io_mutable.c"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_1,
#line 930 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 932 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_3)
#line 934 "parse_tree.prog_io_mutable.c"
{
#line 936 "parse_tree.prog_io_mutable.c"
  {
#line 938 "parse_tree.prog_io_mutable.c"
    MR_Word parse_tree__prog_io_mutable__conv0_HeadVar__1_1;

#line 941 "parse_tree.prog_io_mutable.c"
    {
#line 943 "parse_tree.prog_io_mutable.c"
      parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0(&parse_tree__prog_io_mutable__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_3));
    }
#line 946 "parse_tree.prog_io_mutable.c"
    *parse_tree__prog_io_mutable__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_mutable__conv0_HeadVar__1_1));
#line 948 "parse_tree.prog_io_mutable.c"
  }
#line 950 "parse_tree.prog_io_mutable.c"
}

#line 36 "prog_io_mutable.m"
MR_bool MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Terms_9,
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 36 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 36 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeMutableInfo_12)
#line 36 "prog_io_mutable.m"
{
#line 139 "prog_io_mutable.m"
  {
#line 139 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__Terms_9)) == (MR_mktag((MR_Integer) 1)));
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_42_42;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_43_43;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__NameTerm_13;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__TypeTerm_14;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__ValueTerm_15;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__InstTerm_16;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__OptMutAttrsTerm_17;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeName_18;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeType_19;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__Value_20;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__ProgVarSet_21;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeInst_22;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeMutAttrs_23;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_31_31;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_32_32;
#line 139 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 181 "prog_io_mutable.m"
    MR_String parse_tree__prog_io_mutable__Name_51;
#line 179 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_55_55;
#line 179 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_56_56;
#line 179 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_52_52;
#line 170 "prog_io_mutable.m"
    MR_String parse_tree__prog_io_mutable__Name_25;
#line 170 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__Type_26;
#line 170 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__Inst_27;
#line 170 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MutAttrs_28;

#line 140 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 140 "prog_io_mutable.m"
      {
#line 140 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Terms_9, (MR_Integer) 0)));
#line 140 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Terms_9, (MR_Integer) 1)));
#line 140 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 140 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 140 "prog_io_mutable.m"
          {
#line 140 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__TypeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_31_31, (MR_Integer) 0)));
#line 140 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_31_31, (MR_Integer) 1)));
#line 140 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 140 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 140 "prog_io_mutable.m"
              {
#line 140 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__ValueTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_32_32, (MR_Integer) 0)));
#line 140 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_32_32, (MR_Integer) 1)));
#line 140 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 140 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 140 "prog_io_mutable.m"
                  {
#line 140 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__InstTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, (MR_Integer) 0)));
#line 140 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__OptMutAttrsTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, (MR_Integer) 1)));
#line 179 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__NameTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 179 "prog_io_mutable.m"
                    if (parse_tree__prog_io_mutable__succeeded)
#line 179 "prog_io_mutable.m"
                      {
#line 179 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__NameTerm_13, (MR_Integer) 0)));
#line 179 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__NameTerm_13, (MR_Integer) 1)));
#line 179 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__NameTerm_13, (MR_Integer) 2)));
#line 179 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 179 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 179 "prog_io_mutable.m"
                          {
#line 179 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_55_55)) == (MR_mktag((MR_Integer) 0)));
#line 179 "prog_io_mutable.m"
                            if (parse_tree__prog_io_mutable__succeeded)
#line 179 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__Name_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_55_55, (MR_Integer) 0)));
#line 179 "prog_io_mutable.m"
                          }
#line 179 "prog_io_mutable.m"
                      }
#line 181 "prog_io_mutable.m"
                    if (parse_tree__prog_io_mutable__succeeded)
#line 180 "prog_io_mutable.m"
                      {
#line 180 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__MaybeName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 180 "prog_io_mutable.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeName_18, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Name_51));
#line 180 "prog_io_mutable.m"
                      }
#line 181 "prog_io_mutable.m"
                    else
#line 182 "prog_io_mutable.m"
                      {
#line 182 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__Spec_54;
#line 182 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_64_64;
#line 182 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_65_65;
#line 182 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_66_66;
#line 182 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_71_71;

#line 184 "prog_io_mutable.m"
                        {
#line 184 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__V_66_66 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mutable__NameTerm_13);
                        }
#line 184 "prog_io_mutable.m"
                        {
#line 184 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 184 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_66_66));
#line 184 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[39])));
#line 184 "prog_io_mutable.m"
                        }
#line 183 "prog_io_mutable.m"
                        {
#line 183 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_65_65));
#line 183 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "prog_io_mutable.m"
                        }
#line 183 "prog_io_mutable.m"
                        {
#line 183 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__Spec_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 183 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 183 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_54, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_64_64));
#line 183 "prog_io_mutable.m"
                        }
#line 185 "prog_io_mutable.m"
                        {
#line 185 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_54));
#line 185 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "prog_io_mutable.m"
                        }
#line 185 "prog_io_mutable.m"
                        {
#line 185 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__MaybeName_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 185 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MaybeName_18, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_71_71));
#line 185 "prog_io_mutable.m"
                        }
#line 182 "prog_io_mutable.m"
                      }
#line 142 "prog_io_mutable.m"
                    {
#line 142 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__parse_mutable_type_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__TypeTerm_14, &parse_tree__prog_io_mutable__MaybeType_19);
                    }
#line 1174 "parse_tree.prog_io_mutable.c"
                    parse_tree__prog_io_mutable__TypeCtorInfo_42_42 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1176 "parse_tree.prog_io_mutable.c"
                    parse_tree__prog_io_mutable__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 143 "prog_io_mutable.m"
                    {
#line 143 "prog_io_mutable.m"
                      mercury__term__coerce_2_p_0(parse_tree__prog_io_mutable__TypeCtorInfo_42_42, parse_tree__prog_io_mutable__TypeCtorInfo_43_43, parse_tree__prog_io_mutable__ValueTerm_15, &parse_tree__prog_io_mutable__Value_20);
                    }
#line 144 "prog_io_mutable.m"
                    {
#line 144 "prog_io_mutable.m"
                      mercury__varset__coerce_2_p_0(parse_tree__prog_io_mutable__TypeCtorInfo_42_42, parse_tree__prog_io_mutable__TypeCtorInfo_43_43, parse_tree__prog_io_mutable__VarSet_8, &parse_tree__prog_io_mutable__ProgVarSet_21);
                    }
#line 145 "prog_io_mutable.m"
                    {
#line 145 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__InstTerm_16, &parse_tree__prog_io_mutable__MaybeInst_22);
                    }
#line 151 "prog_io_mutable.m"
                    if ((parse_tree__prog_io_mutable__OptMutAttrsTerm_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "prog_io_mutable.m"
                      {
#line 149 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_35_35;

#line 150 "prog_io_mutable.m"
                        {
#line 150 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__V_35_35 = parse_tree__prog_item__default_mutable_attributes_0_f_0();
                        }
#line 150 "prog_io_mutable.m"
                        {
#line 150 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__MaybeMutAttrs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeMutAttrs_23, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_35_35));
#line 150 "prog_io_mutable.m"
                        }
#line 149 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 149 "prog_io_mutable.m"
                      }
#line 151 "prog_io_mutable.m"
                    else
#line 152 "prog_io_mutable.m"
                      {
#line 152 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__MutAttrsTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__OptMutAttrsTerm_17, (MR_Integer) 0)));
#line 152 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__OptMutAttrsTerm_17, (MR_Integer) 1)));

#line 152 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 152 "prog_io_mutable.m"
                          {
#line 153 "prog_io_mutable.m"
                            {
#line 153 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__MutAttrsTerm_24, &parse_tree__prog_io_mutable__MaybeMutAttrs_23);
                            }
#line 153 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 152 "prog_io_mutable.m"
                          }
#line 152 "prog_io_mutable.m"
                      }
#line 139 "prog_io_mutable.m"
                    if (parse_tree__prog_io_mutable__succeeded)
#line 139 "prog_io_mutable.m"
                      {
#line 156 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeName_18)) == (MR_mktag((MR_Integer) 1)));
#line 156 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 156 "prog_io_mutable.m"
                          {
#line 156 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__Name_25 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeName_18, (MR_Integer) 0)));
#line 157 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
#line 157 "prog_io_mutable.m"
                            if (parse_tree__prog_io_mutable__succeeded)
#line 157 "prog_io_mutable.m"
                              {
#line 157 "prog_io_mutable.m"
                                parse_tree__prog_io_mutable__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeType_19, (MR_Integer) 0)));
#line 158 "prog_io_mutable.m"
                                parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeInst_22)) == (MR_mktag((MR_Integer) 1)));
#line 158 "prog_io_mutable.m"
                                if (parse_tree__prog_io_mutable__succeeded)
#line 158 "prog_io_mutable.m"
                                  {
#line 158 "prog_io_mutable.m"
                                    parse_tree__prog_io_mutable__Inst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeInst_22, (MR_Integer) 0)));
#line 159 "prog_io_mutable.m"
                                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeMutAttrs_23)) == (MR_mktag((MR_Integer) 1)));
#line 159 "prog_io_mutable.m"
                                    if (parse_tree__prog_io_mutable__succeeded)
#line 159 "prog_io_mutable.m"
                                      parse_tree__prog_io_mutable__MutAttrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeMutAttrs_23, (MR_Integer) 0)));
#line 158 "prog_io_mutable.m"
                                  }
#line 157 "prog_io_mutable.m"
                              }
#line 156 "prog_io_mutable.m"
                          }
#line 170 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 168 "prog_io_mutable.m"
                          {
#line 168 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__MutableInfo_29;

#line 167 "prog_io_mutable.m"
                            {
#line 167 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__MutableInfo_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 167 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Name_25));
#line 167 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 1) = ((MR_Box) (parse_tree__prog_io_mutable__Type_26));
#line 167 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 2) = ((MR_Box) (parse_tree__prog_io_mutable__Value_20));
#line 167 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 3) = ((MR_Box) (parse_tree__prog_io_mutable__Inst_27));
#line 167 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 4) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttrs_28));
#line 167 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 5) = ((MR_Box) (parse_tree__prog_io_mutable__ProgVarSet_21));
#line 167 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 6) = ((MR_Box) (parse_tree__prog_io_mutable__Context_10));
#line 167 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 7) = ((MR_Box) (parse_tree__prog_io_mutable__SeqNum_11));
#line 167 "prog_io_mutable.m"
                            }
#line 169 "prog_io_mutable.m"
                            {
#line 169 "prog_io_mutable.m"
                              MR_Word base;
#line 169 "prog_io_mutable.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 169 "prog_io_mutable.m"
                              *parse_tree__prog_io_mutable__MaybeMutableInfo_12 = base;
#line 169 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__MutableInfo_29));
#line 169 "prog_io_mutable.m"
                            }
#line 168 "prog_io_mutable.m"
                          }
#line 170 "prog_io_mutable.m"
                        else
#line 172 "prog_io_mutable.m"
                          {
#line 172 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 172 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__Specs_30;
#line 172 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_36_36;
#line 172 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_37_37;
#line 172 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_38_38;
#line 172 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_39_39;
#line 172 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_40_40;
#line 172 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_41_41;

#line 171 "prog_io_mutable.m"
                            {
#line 171 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_36_36 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_mutable__MaybeName_18);
                            }
#line 171 "prog_io_mutable.m"
                            {
#line 171 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_38_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_mutable__MaybeType_19);
                            }
#line 172 "prog_io_mutable.m"
                            {
#line 172 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_40_40 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_mutable__MaybeInst_22);
                            }
#line 172 "prog_io_mutable.m"
                            {
#line 172 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_41_41 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, parse_tree__prog_io_mutable__MaybeMutAttrs_23);
                            }
#line 171 "prog_io_mutable.m"
                            {
#line 171 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_44_44, parse_tree__prog_io_mutable__V_40_40, parse_tree__prog_io_mutable__V_41_41);
                            }
#line 171 "prog_io_mutable.m"
                            {
#line 171 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_37_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_44_44, parse_tree__prog_io_mutable__V_38_38, parse_tree__prog_io_mutable__V_39_39);
                            }
#line 171 "prog_io_mutable.m"
                            {
#line 171 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__Specs_30 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_44_44, parse_tree__prog_io_mutable__V_36_36, parse_tree__prog_io_mutable__V_37_37);
                            }
#line 173 "prog_io_mutable.m"
                            {
#line 173 "prog_io_mutable.m"
                              MR_Word base;
#line 173 "prog_io_mutable.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 173 "prog_io_mutable.m"
                              *parse_tree__prog_io_mutable__MaybeMutableInfo_12 = base;
#line 173 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Specs_30));
#line 173 "prog_io_mutable.m"
                            }
#line 172 "prog_io_mutable.m"
                          }
#line 170 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 139 "prog_io_mutable.m"
                      }
#line 140 "prog_io_mutable.m"
                  }
#line 140 "prog_io_mutable.m"
              }
#line 140 "prog_io_mutable.m"
          }
#line 140 "prog_io_mutable.m"
      }
#line 139 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 139 "prog_io_mutable.m"
  }
#line 36 "prog_io_mutable.m"
}

#line 33 "prog_io_mutable.m"
MR_bool MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Terms_9,
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 33 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 33 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 33 "prog_io_mutable.m"
{
#line 127 "prog_io_mutable.m"
  {
#line 127 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 127 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeMutableInfo_13;

#line 128 "prog_io_mutable.m"
    {
#line 128 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Terms_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, &parse_tree__prog_io_mutable__MaybeMutableInfo_13);
    }
#line 127 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 127 "prog_io_mutable.m"
      {
#line 133 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeMutableInfo_13)) == (MR_mktag((MR_Integer) 0))))
#line 135 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeItem_12 = (MR_Word) parse_tree__prog_io_mutable__MaybeMutableInfo_13;
#line 133 "prog_io_mutable.m"
        else
#line 131 "prog_io_mutable.m"
          {
#line 131 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__MutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeMutableInfo_13, (MR_Integer) 0)));
#line 131 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_16_16;

#line 132 "prog_io_mutable.m"
            {
#line 132 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 132 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io_mutable__MutableInfo_14));
#line 132 "prog_io_mutable.m"
            }
#line 132 "prog_io_mutable.m"
            {
#line 132 "prog_io_mutable.m"
              MR_Word base;
#line 132 "prog_io_mutable.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 132 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 132 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_16_16));
#line 132 "prog_io_mutable.m"
            }
#line 131 "prog_io_mutable.m"
          }
#line 133 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 127 "prog_io_mutable.m"
      }
#line 127 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 127 "prog_io_mutable.m"
  }
#line 33 "prog_io_mutable.m"
}

#line 30 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Term_9,
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 30 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 30 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 30 "prog_io_mutable.m"
{
#line 91 "prog_io_mutable.m"
  {
#line 91 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 91 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13;

#line 92 "prog_io_mutable.m"
    {
#line 92 "prog_io_mutable.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_specifier_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9, &parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13);
    }
#line 96 "prog_io_mutable.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13)) == (MR_mktag((MR_Integer) 0))))
#line 95 "prog_io_mutable.m"
      *parse_tree__prog_io_mutable__MaybeItem_12 = (MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13;
#line 96 "prog_io_mutable.m"
    else
#line 97 "prog_io_mutable.m"
      {
#line 97 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__SymNameSpecifier_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13, (MR_Integer) 0)));

#line 107 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__SymNameSpecifier_15)) == (MR_mktag((MR_Integer) 0))))
#line 99 "prog_io_mutable.m"
          {
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_94_94 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 99 "prog_io_mutable.m"
            MR_String parse_tree__prog_io_mutable__TermStr_17;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Pieces_18;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Spec_19;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_57_57;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_60_60;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_63_63;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_66_66;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_67_67;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_76_76;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_77_77;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_78_78;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_79_79;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_80_80;
#line 99 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_83_83;

#line 100 "prog_io_mutable.m"
            {
#line 100 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__TermStr_17 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_94_94, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9);
            }
#line 103 "prog_io_mutable.m"
            {
#line 103 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 103 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_17));
#line 103 "prog_io_mutable.m"
            }
#line 102 "prog_io_mutable.m"
            {
#line 102 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 102 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_67_67));
#line 102 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 102 "prog_io_mutable.m"
            }
#line 102 "prog_io_mutable.m"
            {
#line 102 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 102 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[36])));
#line 102 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_66_66));
#line 102 "prog_io_mutable.m"
            }
#line 101 "prog_io_mutable.m"
            {
#line 101 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[35])));
#line 101 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_63_63));
#line 101 "prog_io_mutable.m"
            }
#line 101 "prog_io_mutable.m"
            {
#line 101 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_mutable_scalar_common_3[6])));
#line 101 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_60_60));
#line 101 "prog_io_mutable.m"
            }
#line 101 "prog_io_mutable.m"
            {
#line 101 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[34])));
#line 101 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_18, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_57_57));
#line 101 "prog_io_mutable.m"
            }
#line 105 "prog_io_mutable.m"
            {
#line 105 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_94_94, parse_tree__prog_io_mutable__Term_9);
            }
#line 105 "prog_io_mutable.m"
            {
#line 105 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 105 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_18));
#line 105 "prog_io_mutable.m"
            }
#line 105 "prog_io_mutable.m"
            {
#line 105 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_80_80));
#line 105 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "prog_io_mutable.m"
            }
#line 105 "prog_io_mutable.m"
            {
#line 105 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 105 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_78_78));
#line 105 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_79_79));
#line 105 "prog_io_mutable.m"
            }
#line 104 "prog_io_mutable.m"
            {
#line 104 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_77_77));
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 104 "prog_io_mutable.m"
            }
#line 104 "prog_io_mutable.m"
            {
#line 104 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_76_76));
#line 104 "prog_io_mutable.m"
            }
#line 106 "prog_io_mutable.m"
            {
#line 106 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_19));
#line 106 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "prog_io_mutable.m"
            }
#line 106 "prog_io_mutable.m"
            {
#line 106 "prog_io_mutable.m"
              MR_Word base;
#line 106 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 106 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 106 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_83_83));
#line 106 "prog_io_mutable.m"
            }
#line 99 "prog_io_mutable.m"
          }
#line 107 "prog_io_mutable.m"
        else
#line 108 "prog_io_mutable.m"
          {
#line 108 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_15, (MR_Integer) 0)));
#line 108 "prog_io_mutable.m"
            MR_Integer parse_tree__prog_io_mutable__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_15, (MR_Integer) 1)));

#line 109 "prog_io_mutable.m"
            if ((parse_tree__prog_io_mutable__Arity_21 == (MR_Integer) 0))
#line 109 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 109 "prog_io_mutable.m"
            else
#line 109 "prog_io_mutable.m"
              if ((parse_tree__prog_io_mutable__Arity_21 == (MR_Integer) 2))
#line 109 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 109 "prog_io_mutable.m"
              else
#line 109 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_FALSE;
#line 114 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 111 "prog_io_mutable.m"
              {
#line 111 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__ItemFinalise_22;
#line 111 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Item_23;

#line 110 "prog_io_mutable.m"
                {
#line 110 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__ItemFinalise_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 110 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_22, 1) = ((MR_Box) (parse_tree__prog_io_mutable__SymName_20));
#line 110 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_22, 2) = ((MR_Box) (parse_tree__prog_io_mutable__Arity_21));
#line 110 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_22, 3) = ((MR_Box) (parse_tree__prog_io_mutable__Context_10));
#line 110 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_22, 4) = ((MR_Box) (parse_tree__prog_io_mutable__SeqNum_11));
#line 110 "prog_io_mutable.m"
                }
#line 112 "prog_io_mutable.m"
                {
#line 112 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Item_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 112 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_23, 1) = ((MR_Box) (parse_tree__prog_io_mutable__ItemFinalise_22));
#line 112 "prog_io_mutable.m"
                }
#line 113 "prog_io_mutable.m"
                {
#line 113 "prog_io_mutable.m"
                  MR_Word base;
#line 113 "prog_io_mutable.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 113 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Item_23));
#line 113 "prog_io_mutable.m"
                }
#line 111 "prog_io_mutable.m"
              }
#line 114 "prog_io_mutable.m"
            else
#line 115 "prog_io_mutable.m"
              {
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_95_95 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_27_27;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_36_36;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_37_37;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_46_46;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_47_47;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_48_48;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_49_49;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_50_50;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 115 "prog_io_mutable.m"
                MR_String parse_tree__prog_io_mutable__TermStr_85;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Pieces_86;
#line 115 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Spec_87;

#line 115 "prog_io_mutable.m"
                {
#line 115 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__TermStr_85 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_95_95, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9);
                }
#line 119 "prog_io_mutable.m"
                {
#line 119 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 119 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_85));
#line 119 "prog_io_mutable.m"
                }
#line 118 "prog_io_mutable.m"
                {
#line 118 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_37_37));
#line 118 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 118 "prog_io_mutable.m"
                }
#line 117 "prog_io_mutable.m"
                {
#line 117 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[38])));
#line 117 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_36_36));
#line 117 "prog_io_mutable.m"
                }
#line 116 "prog_io_mutable.m"
                {
#line 116 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[37])));
#line 116 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_33_33));
#line 116 "prog_io_mutable.m"
                }
#line 116 "prog_io_mutable.m"
                {
#line 116 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_mutable_scalar_common_3[6])));
#line 116 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 116 "prog_io_mutable.m"
                }
#line 116 "prog_io_mutable.m"
                {
#line 116 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Pieces_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[34])));
#line 116 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_86, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_27_27));
#line 116 "prog_io_mutable.m"
                }
#line 121 "prog_io_mutable.m"
                {
#line 121 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_48_48 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_95_95, parse_tree__prog_io_mutable__Term_9);
                }
#line 121 "prog_io_mutable.m"
                {
#line 121 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 121 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_86));
#line 121 "prog_io_mutable.m"
                }
#line 121 "prog_io_mutable.m"
                {
#line 121 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_50_50));
#line 121 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "prog_io_mutable.m"
                }
#line 121 "prog_io_mutable.m"
                {
#line 121 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_48_48));
#line 121 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_49_49));
#line 121 "prog_io_mutable.m"
                }
#line 120 "prog_io_mutable.m"
                {
#line 120 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_47_47));
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "prog_io_mutable.m"
                }
#line 120 "prog_io_mutable.m"
                {
#line 120 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Spec_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_46_46));
#line 120 "prog_io_mutable.m"
                }
#line 122 "prog_io_mutable.m"
                {
#line 122 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_87));
#line 122 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "prog_io_mutable.m"
                }
#line 122 "prog_io_mutable.m"
                {
#line 122 "prog_io_mutable.m"
                  MR_Word base;
#line 122 "prog_io_mutable.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 122 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 122 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 122 "prog_io_mutable.m"
                }
#line 115 "prog_io_mutable.m"
              }
#line 108 "prog_io_mutable.m"
          }
#line 97 "prog_io_mutable.m"
      }
#line 91 "prog_io_mutable.m"
  }
#line 30 "prog_io_mutable.m"
}

#line 27 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Term_9,
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 27 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 27 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 27 "prog_io_mutable.m"
{
#line 53 "prog_io_mutable.m"
  {
#line 53 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 53 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13;

#line 54 "prog_io_mutable.m"
    {
#line 54 "prog_io_mutable.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_specifier_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9, &parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13);
    }
#line 58 "prog_io_mutable.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13)) == (MR_mktag((MR_Integer) 0))))
#line 57 "prog_io_mutable.m"
      *parse_tree__prog_io_mutable__MaybeItem_12 = (MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13;
#line 58 "prog_io_mutable.m"
    else
#line 59 "prog_io_mutable.m"
      {
#line 59 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__SymNameSpecifier_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13, (MR_Integer) 0)));

#line 69 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__SymNameSpecifier_15)) == (MR_mktag((MR_Integer) 0))))
#line 61 "prog_io_mutable.m"
          {
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_94_94 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 61 "prog_io_mutable.m"
            MR_String parse_tree__prog_io_mutable__TermStr_17;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Pieces_18;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Spec_19;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_57_57;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_60_60;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_63_63;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_66_66;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_67_67;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_76_76;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_77_77;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_78_78;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_79_79;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_80_80;
#line 61 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_83_83;

#line 62 "prog_io_mutable.m"
            {
#line 62 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__TermStr_17 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_94_94, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9);
            }
#line 65 "prog_io_mutable.m"
            {
#line 65 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 65 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 65 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_17));
#line 65 "prog_io_mutable.m"
            }
#line 64 "prog_io_mutable.m"
            {
#line 64 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 64 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_67_67));
#line 64 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 64 "prog_io_mutable.m"
            }
#line 64 "prog_io_mutable.m"
            {
#line 64 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 64 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[36])));
#line 64 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_66_66));
#line 64 "prog_io_mutable.m"
            }
#line 63 "prog_io_mutable.m"
            {
#line 63 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 63 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[35])));
#line 63 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_63_63));
#line 63 "prog_io_mutable.m"
            }
#line 63 "prog_io_mutable.m"
            {
#line 63 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 63 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_mutable_scalar_common_3[5])));
#line 63 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_60_60));
#line 63 "prog_io_mutable.m"
            }
#line 63 "prog_io_mutable.m"
            {
#line 63 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 63 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[34])));
#line 63 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_18, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_57_57));
#line 63 "prog_io_mutable.m"
            }
#line 67 "prog_io_mutable.m"
            {
#line 67 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_94_94, parse_tree__prog_io_mutable__Term_9);
            }
#line 67 "prog_io_mutable.m"
            {
#line 67 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 67 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_18));
#line 67 "prog_io_mutable.m"
            }
#line 67 "prog_io_mutable.m"
            {
#line 67 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 67 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_80_80));
#line 67 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 67 "prog_io_mutable.m"
            }
#line 67 "prog_io_mutable.m"
            {
#line 67 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 67 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_78_78));
#line 67 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_79_79));
#line 67 "prog_io_mutable.m"
            }
#line 66 "prog_io_mutable.m"
            {
#line 66 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_77_77));
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 66 "prog_io_mutable.m"
            }
#line 66 "prog_io_mutable.m"
            {
#line 66 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_76_76));
#line 66 "prog_io_mutable.m"
            }
#line 68 "prog_io_mutable.m"
            {
#line 68 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 68 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_19));
#line 68 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 68 "prog_io_mutable.m"
            }
#line 68 "prog_io_mutable.m"
            {
#line 68 "prog_io_mutable.m"
              MR_Word base;
#line 68 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 68 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 68 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_83_83));
#line 68 "prog_io_mutable.m"
            }
#line 61 "prog_io_mutable.m"
          }
#line 69 "prog_io_mutable.m"
        else
#line 70 "prog_io_mutable.m"
          {
#line 70 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_15, (MR_Integer) 0)));
#line 70 "prog_io_mutable.m"
            MR_Integer parse_tree__prog_io_mutable__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_15, (MR_Integer) 1)));

#line 71 "prog_io_mutable.m"
            if ((parse_tree__prog_io_mutable__Arity_21 == (MR_Integer) 0))
#line 71 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 71 "prog_io_mutable.m"
            else
#line 71 "prog_io_mutable.m"
              if ((parse_tree__prog_io_mutable__Arity_21 == (MR_Integer) 2))
#line 71 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 71 "prog_io_mutable.m"
              else
#line 71 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_FALSE;
#line 76 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 73 "prog_io_mutable.m"
              {
#line 73 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__ItemInitialise_22;
#line 73 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Item_23;

#line 72 "prog_io_mutable.m"
                {
#line 72 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__ItemInitialise_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 72 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 72 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_22, 1) = ((MR_Box) (parse_tree__prog_io_mutable__SymName_20));
#line 72 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_22, 2) = ((MR_Box) (parse_tree__prog_io_mutable__Arity_21));
#line 72 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_22, 3) = ((MR_Box) (parse_tree__prog_io_mutable__Context_10));
#line 72 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_22, 4) = ((MR_Box) (parse_tree__prog_io_mutable__SeqNum_11));
#line 72 "prog_io_mutable.m"
                }
#line 74 "prog_io_mutable.m"
                {
#line 74 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Item_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 74 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 74 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_23, 1) = ((MR_Box) (parse_tree__prog_io_mutable__ItemInitialise_22));
#line 74 "prog_io_mutable.m"
                }
#line 75 "prog_io_mutable.m"
                {
#line 75 "prog_io_mutable.m"
                  MR_Word base;
#line 75 "prog_io_mutable.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 75 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 75 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Item_23));
#line 75 "prog_io_mutable.m"
                }
#line 73 "prog_io_mutable.m"
              }
#line 76 "prog_io_mutable.m"
            else
#line 77 "prog_io_mutable.m"
              {
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_95_95 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_27_27;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_36_36;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_37_37;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_46_46;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_47_47;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_48_48;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_49_49;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_50_50;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 77 "prog_io_mutable.m"
                MR_String parse_tree__prog_io_mutable__TermStr_85;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Pieces_86;
#line 77 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Spec_87;

#line 77 "prog_io_mutable.m"
                {
#line 77 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__TermStr_85 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_95_95, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9);
                }
#line 81 "prog_io_mutable.m"
                {
#line 81 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_85));
#line 81 "prog_io_mutable.m"
                }
#line 80 "prog_io_mutable.m"
                {
#line 80 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 80 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_37_37));
#line 80 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 80 "prog_io_mutable.m"
                }
#line 79 "prog_io_mutable.m"
                {
#line 79 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 79 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[38])));
#line 79 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_36_36));
#line 79 "prog_io_mutable.m"
                }
#line 78 "prog_io_mutable.m"
                {
#line 78 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 78 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[37])));
#line 78 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_33_33));
#line 78 "prog_io_mutable.m"
                }
#line 78 "prog_io_mutable.m"
                {
#line 78 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 78 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_mutable_scalar_common_3[5])));
#line 78 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 78 "prog_io_mutable.m"
                }
#line 78 "prog_io_mutable.m"
                {
#line 78 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Pieces_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 78 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[34])));
#line 78 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_86, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_27_27));
#line 78 "prog_io_mutable.m"
                }
#line 83 "prog_io_mutable.m"
                {
#line 83 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_48_48 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_95_95, parse_tree__prog_io_mutable__Term_9);
                }
#line 83 "prog_io_mutable.m"
                {
#line 83 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 83 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_86));
#line 83 "prog_io_mutable.m"
                }
#line 83 "prog_io_mutable.m"
                {
#line 83 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 83 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_50_50));
#line 83 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 83 "prog_io_mutable.m"
                }
#line 83 "prog_io_mutable.m"
                {
#line 83 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 83 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_48_48));
#line 83 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_49_49));
#line 83 "prog_io_mutable.m"
                }
#line 82 "prog_io_mutable.m"
                {
#line 82 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_47_47));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 82 "prog_io_mutable.m"
                }
#line 82 "prog_io_mutable.m"
                {
#line 82 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Spec_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_46_46));
#line 82 "prog_io_mutable.m"
                }
#line 84 "prog_io_mutable.m"
                {
#line 84 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 84 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_87));
#line 84 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 84 "prog_io_mutable.m"
                }
#line 84 "prog_io_mutable.m"
                {
#line 84 "prog_io_mutable.m"
                  MR_Word base;
#line 84 "prog_io_mutable.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 84 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 84 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 84 "prog_io_mutable.m"
                }
#line 77 "prog_io_mutable.m"
              }
#line 70 "prog_io_mutable.m"
          }
#line 59 "prog_io_mutable.m"
      }
#line 53 "prog_io_mutable.m"
  }
#line 27 "prog_io_mutable.m"
}

#line 224 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0(
#line 224 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__HeadVar__1_1,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__3_3)
#line 224 "prog_io_mutable.m"
{
#line 224 "prog_io_mutable.m"
  {
#line 224 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 224 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastX_54 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__2_2;
#line 224 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastY_55 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__3_3;

#line 224 "prog_io_mutable.m"
    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__CastX_54 == parse_tree__prog_io_mutable__CastY_55);
#line 224 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 2472 "parse_tree.prog_io_mutable.c"
      *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 0;
#line 224 "prog_io_mutable.m"
    else
#line 224 "prog_io_mutable.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 224 "prog_io_mutable.m"
        {
#line 224 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));

#line 224 "prog_io_mutable.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 224 "prog_io_mutable.m"
            {
#line 224 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
              MR_Integer parse_tree__prog_io_mutable__V_66_66 = (MR_Integer) parse_tree__prog_io_mutable__V_61_61;
#line 224 "prog_io_mutable.m"
              MR_Integer parse_tree__prog_io_mutable__V_67_67 = (MR_Integer) parse_tree__prog_io_mutable__V_29_29;

#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_66_66, parse_tree__prog_io_mutable__V_67_67);
#line 224 "prog_io_mutable.m"
                return;
              }
#line 224 "prog_io_mutable.m"
            }
#line 224 "prog_io_mutable.m"
          else
#line 224 "prog_io_mutable.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2507 "parse_tree.prog_io_mutable.c"
              *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
            else
#line 224 "prog_io_mutable.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2513 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
              else
#line 224 "prog_io_mutable.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2519 "parse_tree.prog_io_mutable.c"
                  *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                else
#line 2523 "parse_tree.prog_io_mutable.c"
                  *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
        }
#line 224 "prog_io_mutable.m"
      else
#line 224 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 224 "prog_io_mutable.m"
          {
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_63_63 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2), (MR_Integer) 0);

#line 224 "prog_io_mutable.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2538 "parse_tree.prog_io_mutable.c"
              *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
            else
#line 224 "prog_io_mutable.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 224 "prog_io_mutable.m"
                {
#line 224 "prog_io_mutable.m"
                  MR_Word parse_tree__prog_io_mutable__V_17_17 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3), (MR_Integer) 0);

#line 224 "prog_io_mutable.m"
                  {
#line 224 "prog_io_mutable.m"
                    parse_tree__prog_item____Compare____foreign_name_0_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_63_63, parse_tree__prog_io_mutable__V_17_17);
#line 224 "prog_io_mutable.m"
                    return;
                  }
#line 224 "prog_io_mutable.m"
                }
#line 224 "prog_io_mutable.m"
              else
#line 224 "prog_io_mutable.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2562 "parse_tree.prog_io_mutable.c"
                  *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                else
#line 224 "prog_io_mutable.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2568 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                  else
#line 2572 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
          }
#line 224 "prog_io_mutable.m"
        else
#line 224 "prog_io_mutable.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 224 "prog_io_mutable.m"
            {
#line 224 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));

#line 224 "prog_io_mutable.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2587 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
              else
#line 224 "prog_io_mutable.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2593 "parse_tree.prog_io_mutable.c"
                  *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                else
#line 224 "prog_io_mutable.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 224 "prog_io_mutable.m"
                    {
#line 224 "prog_io_mutable.m"
                      MR_Word parse_tree__prog_io_mutable__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
                      MR_Integer parse_tree__prog_io_mutable__V_72_72 = (MR_Integer) parse_tree__prog_io_mutable__V_65_65;
#line 224 "prog_io_mutable.m"
                      MR_Integer parse_tree__prog_io_mutable__V_73_73 = (MR_Integer) parse_tree__prog_io_mutable__V_5_5;

#line 224 "prog_io_mutable.m"
                      {
#line 224 "prog_io_mutable.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_72_72, parse_tree__prog_io_mutable__V_73_73);
#line 224 "prog_io_mutable.m"
                        return;
                      }
#line 224 "prog_io_mutable.m"
                    }
#line 224 "prog_io_mutable.m"
                  else
#line 224 "prog_io_mutable.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2621 "parse_tree.prog_io_mutable.c"
                      *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                    else
#line 2625 "parse_tree.prog_io_mutable.c"
                      *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
            }
#line 224 "prog_io_mutable.m"
          else
#line 224 "prog_io_mutable.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));

#line 224 "prog_io_mutable.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2640 "parse_tree.prog_io_mutable.c"
                  *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                else
#line 224 "prog_io_mutable.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2646 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                  else
#line 224 "prog_io_mutable.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2652 "parse_tree.prog_io_mutable.c"
                      *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                    else
#line 224 "prog_io_mutable.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 224 "prog_io_mutable.m"
                        {
#line 224 "prog_io_mutable.m"
                          MR_Word parse_tree__prog_io_mutable__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_68_68 = (MR_Integer) parse_tree__prog_io_mutable__V_62_62;
#line 224 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_69_69 = (MR_Integer) parse_tree__prog_io_mutable__V_41_41;

#line 224 "prog_io_mutable.m"
                          {
#line 224 "prog_io_mutable.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_68_68, parse_tree__prog_io_mutable__V_69_69);
#line 224 "prog_io_mutable.m"
                            return;
                          }
#line 224 "prog_io_mutable.m"
                        }
#line 224 "prog_io_mutable.m"
                      else
#line 2678 "parse_tree.prog_io_mutable.c"
                        *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
            else
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));

#line 224 "prog_io_mutable.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2691 "parse_tree.prog_io_mutable.c"
                  *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                else
#line 224 "prog_io_mutable.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2697 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                  else
#line 224 "prog_io_mutable.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2703 "parse_tree.prog_io_mutable.c"
                      *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                    else
#line 224 "prog_io_mutable.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2709 "parse_tree.prog_io_mutable.c"
                        *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                      else
#line 224 "prog_io_mutable.m"
                        {
#line 224 "prog_io_mutable.m"
                          MR_Word parse_tree__prog_io_mutable__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_70_70 = (MR_Integer) parse_tree__prog_io_mutable__V_64_64;
#line 224 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_71_71 = (MR_Integer) parse_tree__prog_io_mutable__V_53_53;

#line 224 "prog_io_mutable.m"
                          {
#line 224 "prog_io_mutable.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_70_70, parse_tree__prog_io_mutable__V_71_71);
#line 224 "prog_io_mutable.m"
                            return;
                          }
#line 224 "prog_io_mutable.m"
                        }
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
  }
#line 224 "prog_io_mutable.m"
}

#line 224 "prog_io_mutable.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0(
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2)
#line 224 "prog_io_mutable.m"
{
#line 224 "prog_io_mutable.m"
  {
#line 224 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 224 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastX_13 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__1_1;
#line 224 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastY_14 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__2_2;

#line 224 "prog_io_mutable.m"
    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__CastX_13 == parse_tree__prog_io_mutable__CastY_14);
#line 224 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 224 "prog_io_mutable.m"
    else
#line 224 "prog_io_mutable.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 224 "prog_io_mutable.m"
        {
#line 224 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_8_8;

#line 224 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 224 "prog_io_mutable.m"
          if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
            {
#line 224 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));
#line 2781 "parse_tree.prog_io_mutable.c"
              parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_7_7 == parse_tree__prog_io_mutable__V_8_8);
#line 224 "prog_io_mutable.m"
            }
#line 224 "prog_io_mutable.m"
        }
#line 224 "prog_io_mutable.m"
      else
#line 224 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 224 "prog_io_mutable.m"
          {
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1), (MR_Integer) 0);
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_6_6;

#line 224 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2), (MR_Integer) 0);
#line 2806 "parse_tree.prog_io_mutable.c"
                {
#line 2808 "parse_tree.prog_io_mutable.c"
                  return parse_tree__prog_io_mutable__succeeded = parse_tree__prog_item____Unify____foreign_name_0_0(parse_tree__prog_io_mutable__V_5_5, parse_tree__prog_io_mutable__V_6_6);
                }
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
          }
#line 224 "prog_io_mutable.m"
        else
#line 224 "prog_io_mutable.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 224 "prog_io_mutable.m"
            {
#line 224 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_4_4;

#line 224 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
              if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
                {
#line 224 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));
#line 2834 "parse_tree.prog_io_mutable.c"
                  parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_3_3 == parse_tree__prog_io_mutable__V_4_4);
#line 224 "prog_io_mutable.m"
                }
#line 224 "prog_io_mutable.m"
            }
#line 224 "prog_io_mutable.m"
          else
#line 224 "prog_io_mutable.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_10_10;

#line 224 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
                  {
#line 224 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));
#line 2859 "parse_tree.prog_io_mutable.c"
                    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_9_9 == parse_tree__prog_io_mutable__V_10_10);
#line 224 "prog_io_mutable.m"
                  }
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
            else
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_12_12;

#line 224 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
                  {
#line 224 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));
#line 2882 "parse_tree.prog_io_mutable.c"
                    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_11_11 == parse_tree__prog_io_mutable__V_12_12);
#line 224 "prog_io_mutable.m"
                  }
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 224 "prog_io_mutable.m"
  }
#line 224 "prog_io_mutable.m"
}

#line 307 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attr_2_p_0(
#line 307 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrTerm_3,
#line 307 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MutAttrResult_4)
#line 307 "prog_io_mutable.m"
{
#line 331 "prog_io_mutable.m"
  {
#line 331 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MutAttrTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 331 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MutAttr_7;
#line 312 "prog_io_mutable.m"
    MR_String parse_tree__prog_io_mutable__String_5;
#line 312 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_17_17;
#line 312 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_18_18;
#line 312 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_6_6;

#line 312 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 312 "prog_io_mutable.m"
      {
#line 312 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 0)));
#line 312 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 1)));
#line 312 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 2)));
#line 312 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 312 "prog_io_mutable.m"
          {
#line 312 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 312 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 312 "prog_io_mutable.m"
              {
#line 312 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_17_17, (MR_Integer) 0)));
#line 316 "prog_io_mutable.m"
                if ((strcmp(parse_tree__prog_io_mutable__String_5, (MR_String) "trailed") == 0))
#line 317 "prog_io_mutable.m"
                  {
#line 318 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__MutAttr_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1]);
#line 317 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 317 "prog_io_mutable.m"
                  }
#line 316 "prog_io_mutable.m"
                else
#line 316 "prog_io_mutable.m"
                  if ((strcmp(parse_tree__prog_io_mutable__String_5, (MR_String) "constant") == 0))
#line 323 "prog_io_mutable.m"
                    {
#line 324 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__MutAttr_7 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[31]);
#line 323 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 323 "prog_io_mutable.m"
                    }
#line 316 "prog_io_mutable.m"
                  else
#line 316 "prog_io_mutable.m"
                    if ((strcmp(parse_tree__prog_io_mutable__String_5, (MR_String) "untrailed") == 0))
#line 314 "prog_io_mutable.m"
                      {
#line 315 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__MutAttr_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[2]);
#line 314 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 314 "prog_io_mutable.m"
                      }
#line 316 "prog_io_mutable.m"
                    else
#line 316 "prog_io_mutable.m"
                      if ((strcmp(parse_tree__prog_io_mutable__String_5, (MR_String) "thread_local") == 0))
#line 326 "prog_io_mutable.m"
                        {
#line 327 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__MutAttr_7 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[32]);
#line 326 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 326 "prog_io_mutable.m"
                        }
#line 316 "prog_io_mutable.m"
                      else
#line 316 "prog_io_mutable.m"
                        if ((strcmp(parse_tree__prog_io_mutable__String_5, (MR_String) "attach_to_io_state") == 0))
#line 320 "prog_io_mutable.m"
                          {
#line 321 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__MutAttr_7 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_mutable_scalar_common_3[0]);
#line 320 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 320 "prog_io_mutable.m"
                          }
#line 316 "prog_io_mutable.m"
                        else
#line 316 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__succeeded = MR_FALSE;
#line 312 "prog_io_mutable.m"
              }
#line 312 "prog_io_mutable.m"
          }
#line 312 "prog_io_mutable.m"
      }
#line 331 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 330 "prog_io_mutable.m"
      {
#line 330 "prog_io_mutable.m"
        MR_Word base;
#line 330 "prog_io_mutable.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 330 "prog_io_mutable.m"
        *parse_tree__prog_io_mutable__MutAttrResult_4 = base;
#line 330 "prog_io_mutable.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttr_7));
#line 330 "prog_io_mutable.m"
      }
#line 331 "prog_io_mutable.m"
    else
#line 339 "prog_io_mutable.m"
      {
#line 339 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Lang_12;
#line 339 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__ForeignName_13;
#line 332 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Args_8;
#line 332 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__LangTerm_10;
#line 332 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__ForeignNameTerm_11;
#line 332 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_24_24;
#line 332 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__V_25_25;
#line 332 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_26_26;
#line 332 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_27_27;
#line 332 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_28_28;
#line 332 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_29_29;
#line 332 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_9_9;
#line 335 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_14_14;

#line 332 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MutAttrTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 332 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 332 "prog_io_mutable.m"
          {
#line 332 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 0)));
#line 332 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 1)));
#line 332 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 2)));
#line 332 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_24_24)) == (MR_mktag((MR_Integer) 0)));
#line 332 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 332 "prog_io_mutable.m"
              {
#line 332 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_24_24, (MR_Integer) 0)));
#line 332 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = (strcmp(parse_tree__prog_io_mutable__V_25_25, (MR_String) "foreign_name") == 0);
#line 332 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 332 "prog_io_mutable.m"
                  {
#line 333 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__Args_8)) == (MR_mktag((MR_Integer) 1)));
#line 333 "prog_io_mutable.m"
                    if (parse_tree__prog_io_mutable__succeeded)
#line 333 "prog_io_mutable.m"
                      {
#line 333 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__LangTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Args_8, (MR_Integer) 0)));
#line 333 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Args_8, (MR_Integer) 1)));
#line 333 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 333 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 333 "prog_io_mutable.m"
                          {
#line 333 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__ForeignNameTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_26_26, (MR_Integer) 0)));
#line 333 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_26_26, (MR_Integer) 1)));
#line 333 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "prog_io_mutable.m"
                            if (parse_tree__prog_io_mutable__succeeded)
#line 332 "prog_io_mutable.m"
                              {
#line 334 "prog_io_mutable.m"
                                {
#line 334 "prog_io_mutable.m"
                                  parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_pragma__parse_foreign_language_2_p_0(parse_tree__prog_io_mutable__LangTerm_10, &parse_tree__prog_io_mutable__Lang_12);
                                }
#line 332 "prog_io_mutable.m"
                                if (parse_tree__prog_io_mutable__succeeded)
#line 332 "prog_io_mutable.m"
                                  {
#line 335 "prog_io_mutable.m"
                                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__ForeignNameTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 335 "prog_io_mutable.m"
                                    if (parse_tree__prog_io_mutable__succeeded)
#line 335 "prog_io_mutable.m"
                                      {
#line 335 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ForeignNameTerm_11, (MR_Integer) 0)));
#line 335 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ForeignNameTerm_11, (MR_Integer) 1)));
#line 335 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ForeignNameTerm_11, (MR_Integer) 2)));
#line 335 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "prog_io_mutable.m"
                                        if (parse_tree__prog_io_mutable__succeeded)
#line 332 "prog_io_mutable.m"
                                          {
#line 335 "prog_io_mutable.m"
                                            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_28_28)) == (MR_mktag((MR_Integer) 2)));
#line 335 "prog_io_mutable.m"
                                            if (parse_tree__prog_io_mutable__succeeded)
#line 335 "prog_io_mutable.m"
                                              parse_tree__prog_io_mutable__ForeignName_13 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__V_28_28, (MR_Integer) 0)));
#line 332 "prog_io_mutable.m"
                                          }
#line 335 "prog_io_mutable.m"
                                      }
#line 332 "prog_io_mutable.m"
                                  }
#line 332 "prog_io_mutable.m"
                              }
#line 333 "prog_io_mutable.m"
                          }
#line 333 "prog_io_mutable.m"
                      }
#line 332 "prog_io_mutable.m"
                  }
#line 332 "prog_io_mutable.m"
              }
#line 332 "prog_io_mutable.m"
          }
#line 339 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 337 "prog_io_mutable.m"
          {
#line 337 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 337 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__MutAttr_50;

#line 337 "prog_io_mutable.m"
            {
#line 337 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Lang_12));
#line 337 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_mutable__ForeignName_13));
#line 337 "prog_io_mutable.m"
            }
#line 337 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__MutAttr_50 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_mutable__V_30_30);
#line 338 "prog_io_mutable.m"
            {
#line 338 "prog_io_mutable.m"
              MR_Word base;
#line 338 "prog_io_mutable.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MutAttrResult_4 = base;
#line 338 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttr_50));
#line 338 "prog_io_mutable.m"
            }
#line 337 "prog_io_mutable.m"
          }
#line 339 "prog_io_mutable.m"
        else
#line 341 "prog_io_mutable.m"
          {
#line 341 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Spec_16;
#line 341 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_41_41;
#line 341 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_42_42;
#line 341 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_43_43;
#line 341 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_48_48;

#line 343 "prog_io_mutable.m"
            {
#line 343 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_43_43 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mutable__MutAttrTerm_3);
            }
#line 343 "prog_io_mutable.m"
            {
#line 343 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 343 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_43_43));
#line 343 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[33])));
#line 343 "prog_io_mutable.m"
            }
#line 342 "prog_io_mutable.m"
            {
#line 342 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_42_42));
#line 342 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "prog_io_mutable.m"
            }
#line 342 "prog_io_mutable.m"
            {
#line 342 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 342 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 342 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_41_41));
#line 342 "prog_io_mutable.m"
            }
#line 344 "prog_io_mutable.m"
            {
#line 344 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_16));
#line 344 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "prog_io_mutable.m"
            }
#line 344 "prog_io_mutable.m"
            {
#line 344 "prog_io_mutable.m"
              MR_Word base;
#line 344 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 344 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MutAttrResult_4 = base;
#line 344 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_48_48));
#line 344 "prog_io_mutable.m"
            }
#line 341 "prog_io_mutable.m"
          }
#line 339 "prog_io_mutable.m"
      }
#line 331 "prog_io_mutable.m"
  }
#line 307 "prog_io_mutable.m"
}

#line 284 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__process_mutable_attribute_3_p_0(
#line 284 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 284 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2,
#line 284 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3)
#line 284 "prog_io_mutable.m"
{
#line 287 "prog_io_mutable.m"
  {
#line 287 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 287 "prog_io_mutable.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 293 "prog_io_mutable.m"
      {
#line 293 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__AttachToIOState_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));

#line 294 "prog_io_mutable.m"
        {
#line 294 "prog_io_mutable.m"
          parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_p_0(parse_tree__prog_io_mutable__AttachToIOState_14, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
#line 294 "prog_io_mutable.m"
          return;
        }
#line 293 "prog_io_mutable.m"
      }
#line 287 "prog_io_mutable.m"
    else
#line 287 "prog_io_mutable.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 290 "prog_io_mutable.m"
        {
#line 290 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__ForeignName_9 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1), (MR_Integer) 0);

#line 291 "prog_io_mutable.m"
          {
#line 291 "prog_io_mutable.m"
            parse_tree__prog_item__set_mutable_add_foreign_name_3_p_0(parse_tree__prog_io_mutable__ForeignName_9, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
#line 291 "prog_io_mutable.m"
            return;
          }
#line 290 "prog_io_mutable.m"
        }
#line 287 "prog_io_mutable.m"
      else
#line 287 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 287 "prog_io_mutable.m"
          {
#line 287 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Trailed_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));

#line 288 "prog_io_mutable.m"
            {
#line 288 "prog_io_mutable.m"
              parse_tree__prog_item__set_mutable_var_trailed_3_p_0(parse_tree__prog_io_mutable__Trailed_4, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
#line 288 "prog_io_mutable.m"
              return;
            }
#line 287 "prog_io_mutable.m"
          }
#line 287 "prog_io_mutable.m"
        else
#line 287 "prog_io_mutable.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 295 "prog_io_mutable.m"
            {
#line 295 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Constant_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));
#line 295 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23;

#line 296 "prog_io_mutable.m"
              {
#line 296 "prog_io_mutable.m"
                parse_tree__prog_item__set_mutable_var_constant_3_p_0(parse_tree__prog_io_mutable__Constant_19, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, &parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23);
              }
#line 301 "prog_io_mutable.m"
              if ((parse_tree__prog_io_mutable__Constant_19 == (MR_Integer) 0))
#line 302 "prog_io_mutable.m"
                *parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3 = parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23;
#line 301 "prog_io_mutable.m"
              else
#line 298 "prog_io_mutable.m"
                {
#line 298 "prog_io_mutable.m"
                  MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_25_25;

#line 299 "prog_io_mutable.m"
                  {
#line 299 "prog_io_mutable.m"
                    parse_tree__prog_item__set_mutable_var_trailed_3_p_0((MR_Integer) 1, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23, &parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_25_25);
                  }
#line 300 "prog_io_mutable.m"
                  {
#line 300 "prog_io_mutable.m"
                    parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_p_0((MR_Integer) 0, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_25_25, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
#line 300 "prog_io_mutable.m"
                    return;
                  }
#line 298 "prog_io_mutable.m"
                }
#line 295 "prog_io_mutable.m"
            }
#line 287 "prog_io_mutable.m"
          else
#line 304 "prog_io_mutable.m"
            {
#line 304 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__ThrLocal_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));

#line 305 "prog_io_mutable.m"
              {
#line 305 "prog_io_mutable.m"
                parse_tree__prog_item__set_mutable_var_thread_local_3_p_0(parse_tree__prog_io_mutable__ThrLocal_28, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
#line 305 "prog_io_mutable.m"
                return;
              }
#line 304 "prog_io_mutable.m"
            }
#line 287 "prog_io_mutable.m"
  }
#line 284 "prog_io_mutable.m"
}

#line 270 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_6(
#line 270 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 270 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 270 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 270 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_3)
#line 270 "prog_io_mutable.m"
{
#line 270 "prog_io_mutable.m"
  {
#line 270 "prog_io_mutable.m"
    MR_Box parse_tree__prog_io_mutable__closure = parse_tree__prog_io_mutable__closure_arg;
#line 270 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__conv2_STATE_VARIABLE_Attributes_3;

#line 270 "prog_io_mutable.m"
    {
#line 270 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__process_mutable_attribute_3_p_0(((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2), &parse_tree__prog_io_mutable__conv2_STATE_VARIABLE_Attributes_3);
    }
#line 270 "prog_io_mutable.m"
    *parse_tree__prog_io_mutable__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_mutable__conv2_STATE_VARIABLE_Attributes_3));
#line 270 "prog_io_mutable.m"
  }
#line 270 "prog_io_mutable.m"
}

#line 248 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_1(
#line 248 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 248 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 248 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_2)
#line 248 "prog_io_mutable.m"
{
#line 248 "prog_io_mutable.m"
  {
#line 248 "prog_io_mutable.m"
    MR_Box parse_tree__prog_io_mutable__closure = parse_tree__prog_io_mutable__closure_arg;
#line 248 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__conv0_MutAttrResult_4;

#line 248 "prog_io_mutable.m"
    {
#line 248 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_attr_2_p_0(((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_1), &parse_tree__prog_io_mutable__conv0_MutAttrResult_4);
    }
#line 248 "prog_io_mutable.m"
    *parse_tree__prog_io_mutable__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mutable__conv0_MutAttrResult_4));
#line 248 "prog_io_mutable.m"
  }
#line 248 "prog_io_mutable.m"
}

#line 256 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_2(
#line 256 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 256 "prog_io_mutable.m"
{
#line 256 "prog_io_mutable.m"
  {
#line 256 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 256 "prog_io_mutable.m"
    MR_builtin_longjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0, 1);
#line 256 "prog_io_mutable.m"
  }
#line 256 "prog_io_mutable.m"
}

#line 256 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_4(
#line 256 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 256 "prog_io_mutable.m"
{
#line 256 "prog_io_mutable.m"
  {
#line 256 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 256 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49 = ((MR_Word) (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49);
#line 256 "prog_io_mutable.m"
    {
#line 256 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_3(parse_tree__prog_io_mutable__env_ptr);
#line 256 "prog_io_mutable.m"
      return;
    }
#line 256 "prog_io_mutable.m"
  }
#line 256 "prog_io_mutable.m"
}

#line 256 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_3(
#line 256 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 256 "prog_io_mutable.m"
{
#line 256 "prog_io_mutable.m"
  {
#line 256 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 256 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49, (MR_Integer) 0)));
#line 256 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49, (MR_Integer) 1)));
#line 3532 "parse_tree.prog_io_mutable.c"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0;
#line 257 "prog_io_mutable.m"
    {
#line 257 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_110_110, ((MR_Box) ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12)), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11);
    }
#line 256 "prog_io_mutable.m"
    if ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 256 "prog_io_mutable.m"
      {
#line 258 "prog_io_mutable.m"
        {
#line 258 "prog_io_mutable.m"
          (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_110_110, ((MR_Box) ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13)), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11);
        }
#line 258 "prog_io_mutable.m"
        if ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 258 "prog_io_mutable.m"
          {
#line 258 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_2(parse_tree__prog_io_mutable__env_ptr);
#line 258 "prog_io_mutable.m"
            return;
          }
#line 256 "prog_io_mutable.m"
      }
#line 256 "prog_io_mutable.m"
  }
#line 256 "prog_io_mutable.m"
}

#line 256 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_5(
#line 256 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 256 "prog_io_mutable.m"
{
#line 256 "prog_io_mutable.m"
  {
#line 256 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 256 "prog_io_mutable.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0) == 0)
#line 256 "prog_io_mutable.m"
      {
#line 256 "prog_io_mutable.m"
        {
#line 256 "prog_io_mutable.m"
          {
#line 256 "prog_io_mutable.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_io_mutable_scalar_common_1[0], &(parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[18]), parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_4, parse_tree__prog_io_mutable__env_ptr);
          }
#line 256 "prog_io_mutable.m"
        }
#line 256 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = MR_FALSE;
#line 256 "prog_io_mutable.m"
      }
#line 256 "prog_io_mutable.m"
    else
#line 256 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = MR_TRUE;
#line 256 "prog_io_mutable.m"
  }
#line 256 "prog_io_mutable.m"
}

#line 231 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0(
#line 231 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 231 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrsTerm_5,
#line 231 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeMutAttrs_6)
#line 231 "prog_io_mutable.m"
{
#line 231 "prog_io_mutable.m"
  {
#line 231 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s parse_tree__prog_io_mutable__env;

#line 234 "prog_io_mutable.m"
    {
#line 234 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__Attributes0_7;
#line 247 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_108_108;
#line 247 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__MutAttrTerms_9;
#line 247 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__MaybeAttrList_10;
#line 247 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__V_48_48;

#line 235 "prog_io_mutable.m"
      {
#line 235 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__Attributes0_7 = parse_tree__prog_item__default_mutable_attributes_0_f_0();
      }
#line 247 "prog_io_mutable.m"
      {
#line 247 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_mutable__MutAttrsTerm_5, &parse_tree__prog_io_mutable__MutAttrTerms_9);
      }
#line 247 "prog_io_mutable.m"
      if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 247 "prog_io_mutable.m"
        {
#line 248 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_48_48 = (MR_Word) &parse_tree__prog_io_mutable_scalar_common_1[1];
#line 3647 "parse_tree.prog_io_mutable.c"
          parse_tree__prog_io_mutable__TypeCtorInfo_108_108 = (MR_Word) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0;
#line 248 "prog_io_mutable.m"
          {
#line 248 "prog_io_mutable.m"
            parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_mutable__TypeCtorInfo_108_108, parse_tree__prog_io_mutable__V_48_48, parse_tree__prog_io_mutable__MutAttrTerms_9, &parse_tree__prog_io_mutable__MaybeAttrList_10);
          }
#line 249 "prog_io_mutable.m"
          (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeAttrList_10)) == (MR_mktag((MR_Integer) 1)));
#line 249 "prog_io_mutable.m"
          if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 249 "prog_io_mutable.m"
            (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeAttrList_10, (MR_Integer) 0)));
#line 247 "prog_io_mutable.m"
        }
#line 274 "prog_io_mutable.m"
      if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 269 "prog_io_mutable.m"
        {
#line 256 "prog_io_mutable.m"
          {
#line 256 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_5(&parse_tree__prog_io_mutable__env);
          }
#line 269 "prog_io_mutable.m"
          if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 261 "prog_io_mutable.m"
            {
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_111_111 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 261 "prog_io_mutable.m"
              MR_String parse_tree__prog_io_mutable__MutAttrsStr_14;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Pieces_15;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Spec_16;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_56_56;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_58_58;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_59_59;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_68_68;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_69_69;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_70_70;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_71_71;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_72_72;
#line 261 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_75_75;

#line 261 "prog_io_mutable.m"
              {
#line 261 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__MutAttrsStr_14 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_111_111, parse_tree__prog_io_mutable__VarSet_4, (MR_Integer) 0, parse_tree__prog_io_mutable__MutAttrsTerm_5);
              }
#line 264 "prog_io_mutable.m"
              {
#line 264 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 264 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttrsStr_14));
#line 264 "prog_io_mutable.m"
              }
#line 263 "prog_io_mutable.m"
              {
#line 263 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_59_59));
#line 263 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 263 "prog_io_mutable.m"
              }
#line 263 "prog_io_mutable.m"
              {
#line 263 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 263 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_58_58));
#line 263 "prog_io_mutable.m"
              }
#line 262 "prog_io_mutable.m"
              {
#line 262 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[28])));
#line 262 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_56_56));
#line 262 "prog_io_mutable.m"
              }
#line 262 "prog_io_mutable.m"
              {
#line 262 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[27])));
#line 262 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_15, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 262 "prog_io_mutable.m"
              }
#line 266 "prog_io_mutable.m"
              {
#line 266 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_70_70 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_111_111, parse_tree__prog_io_mutable__MutAttrsTerm_5);
              }
#line 267 "prog_io_mutable.m"
              {
#line 267 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_15));
#line 267 "prog_io_mutable.m"
              }
#line 266 "prog_io_mutable.m"
              {
#line 266 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_72_72));
#line 266 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "prog_io_mutable.m"
              }
#line 267 "prog_io_mutable.m"
              {
#line 267 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_70_70));
#line 267 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_71_71));
#line 267 "prog_io_mutable.m"
              }
#line 265 "prog_io_mutable.m"
              {
#line 265 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_69_69));
#line 265 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "prog_io_mutable.m"
              }
#line 265 "prog_io_mutable.m"
              {
#line 265 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 265 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 265 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_68_68));
#line 265 "prog_io_mutable.m"
              }
#line 268 "prog_io_mutable.m"
              {
#line 268 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_16));
#line 268 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_mutable.m"
              }
#line 268 "prog_io_mutable.m"
              {
#line 268 "prog_io_mutable.m"
                MR_Word base;
#line 268 "prog_io_mutable.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 268 "prog_io_mutable.m"
                *parse_tree__prog_io_mutable__MaybeMutAttrs_6 = base;
#line 268 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_75_75));
#line 268 "prog_io_mutable.m"
              }
#line 261 "prog_io_mutable.m"
            }
#line 269 "prog_io_mutable.m"
          else
#line 271 "prog_io_mutable.m"
            {
#line 271 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Attributes_17;
#line 270 "prog_io_mutable.m"
              MR_Box parse_tree__prog_io_mutable__conv3_Attributes_17;

#line 270 "prog_io_mutable.m"
              {
#line 270 "prog_io_mutable.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, (MR_Word) &parse_tree__prog_io_mutable_scalar_common_1[2], (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11, ((MR_Box) (parse_tree__prog_io_mutable__Attributes0_7)), &parse_tree__prog_io_mutable__conv3_Attributes_17);
              }
#line 270 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Attributes_17 = ((MR_Word) parse_tree__prog_io_mutable__conv3_Attributes_17);
#line 272 "prog_io_mutable.m"
              {
#line 272 "prog_io_mutable.m"
                MR_Word base;
#line 272 "prog_io_mutable.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 272 "prog_io_mutable.m"
                *parse_tree__prog_io_mutable__MaybeMutAttrs_6 = base;
#line 272 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Attributes_17));
#line 272 "prog_io_mutable.m"
              }
#line 271 "prog_io_mutable.m"
            }
#line 269 "prog_io_mutable.m"
        }
#line 274 "prog_io_mutable.m"
      else
#line 275 "prog_io_mutable.m"
        {
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_117_117 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_81_81;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_84_84;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_85_85;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_94_94;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_95_95;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_96_96;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_97_97;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_98_98;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_101_101;
#line 275 "prog_io_mutable.m"
          MR_String parse_tree__prog_io_mutable__MutAttrsStr_103;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__Pieces_104;
#line 275 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__Spec_105;

#line 275 "prog_io_mutable.m"
          {
#line 275 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__MutAttrsStr_103 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_117_117, parse_tree__prog_io_mutable__VarSet_4, (MR_Integer) 0, parse_tree__prog_io_mutable__MutAttrsTerm_5);
          }
#line 278 "prog_io_mutable.m"
          {
#line 278 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 278 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_85_85, 1) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttrsStr_103));
#line 278 "prog_io_mutable.m"
          }
#line 277 "prog_io_mutable.m"
          {
#line 277 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_85_85));
#line 277 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 277 "prog_io_mutable.m"
          }
#line 276 "prog_io_mutable.m"
          {
#line 276 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[30])));
#line 276 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_84_84));
#line 276 "prog_io_mutable.m"
          }
#line 276 "prog_io_mutable.m"
          {
#line 276 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__Pieces_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[29])));
#line 276 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_104, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_81_81));
#line 276 "prog_io_mutable.m"
          }
#line 280 "prog_io_mutable.m"
          {
#line 280 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_96_96 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_117_117, parse_tree__prog_io_mutable__MutAttrsTerm_5);
          }
#line 280 "prog_io_mutable.m"
          {
#line 280 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_104));
#line 280 "prog_io_mutable.m"
          }
#line 280 "prog_io_mutable.m"
          {
#line 280 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_98_98));
#line 280 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "prog_io_mutable.m"
          }
#line 280 "prog_io_mutable.m"
          {
#line 280 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_96_96));
#line 280 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_95_95, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_97_97));
#line 280 "prog_io_mutable.m"
          }
#line 279 "prog_io_mutable.m"
          {
#line 279 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_95_95));
#line 279 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "prog_io_mutable.m"
          }
#line 279 "prog_io_mutable.m"
          {
#line 279 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__Spec_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 279 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 279 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_105, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_94_94));
#line 279 "prog_io_mutable.m"
          }
#line 281 "prog_io_mutable.m"
          {
#line 281 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_105));
#line 281 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "prog_io_mutable.m"
          }
#line 281 "prog_io_mutable.m"
          {
#line 281 "prog_io_mutable.m"
            MR_Word base;
#line 281 "prog_io_mutable.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_mutable.m"
            *parse_tree__prog_io_mutable__MaybeMutAttrs_6 = base;
#line 281 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_101_101));
#line 281 "prog_io_mutable.m"
          }
#line 275 "prog_io_mutable.m"
        }
#line 234 "prog_io_mutable.m"
    }
#line 231 "prog_io_mutable.m"
  }
#line 231 "prog_io_mutable.m"
}

#line 207 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_1(
#line 207 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 207 "prog_io_mutable.m"
{
#line 207 "prog_io_mutable.m"
  {
#line 207 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 207 "prog_io_mutable.m"
    MR_builtin_longjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__commit_0, 1);
#line 207 "prog_io_mutable.m"
  }
#line 207 "prog_io_mutable.m"
}

#line 207 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_2(
#line 207 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 207 "prog_io_mutable.m"
{
#line 207 "prog_io_mutable.m"
  {
#line 207 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 207 "prog_io_mutable.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__commit_0) == 0)
#line 207 "prog_io_mutable.m"
      {
#line 207 "prog_io_mutable.m"
        {
#line 207 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_7_7;

#line 207 "prog_io_mutable.m"
          {
#line 207 "prog_io_mutable.m"
            mercury__term__contains_var_2_p_1((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, &parse_tree__prog_io_mutable__V_7_7, parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_1, parse_tree__prog_io_mutable__env_ptr);
          }
#line 207 "prog_io_mutable.m"
        }
#line 207 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_FALSE;
#line 207 "prog_io_mutable.m"
      }
#line 207 "prog_io_mutable.m"
    else
#line 207 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_TRUE;
#line 207 "prog_io_mutable.m"
  }
#line 207 "prog_io_mutable.m"
}

#line 204 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0(
#line 204 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 204 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__InstTerm_5,
#line 204 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeInst_6)
#line 204 "prog_io_mutable.m"
{
#line 204 "prog_io_mutable.m"
  {
#line 204 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s parse_tree__prog_io_mutable__env;

#line 204 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5 = parse_tree__prog_io_mutable__InstTerm_5;
#line 207 "prog_io_mutable.m"
    {
#line 207 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_2(&parse_tree__prog_io_mutable__env);
    }
#line 215 "prog_io_mutable.m"
    if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded)
#line 208 "prog_io_mutable.m"
      {
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_58_58 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 208 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__InstTermStr_8;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Pieces_9;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Spec_10;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_14_14;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_17_17;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_18_18;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_27_27;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_28_28;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_29_29;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_31_31;
#line 208 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_34_34;

#line 208 "prog_io_mutable.m"
        {
#line 208 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__InstTermStr_8 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_58_58, parse_tree__prog_io_mutable__VarSet_4, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
        }
#line 211 "prog_io_mutable.m"
        {
#line 211 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 211 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_mutable__InstTermStr_8));
#line 211 "prog_io_mutable.m"
        }
#line 210 "prog_io_mutable.m"
        {
#line 210 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_18_18));
#line 210 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 210 "prog_io_mutable.m"
        }
#line 209 "prog_io_mutable.m"
        {
#line 209 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[24])));
#line 209 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_17_17));
#line 209 "prog_io_mutable.m"
        }
#line 209 "prog_io_mutable.m"
        {
#line 209 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[25])));
#line 209 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_14_14));
#line 209 "prog_io_mutable.m"
        }
#line 213 "prog_io_mutable.m"
        {
#line 213 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_58_58, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
        }
#line 213 "prog_io_mutable.m"
        {
#line 213 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 213 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_9));
#line 213 "prog_io_mutable.m"
        }
#line 213 "prog_io_mutable.m"
        {
#line 213 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_31_31));
#line 213 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "prog_io_mutable.m"
        }
#line 213 "prog_io_mutable.m"
        {
#line 213 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 213 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_29_29));
#line 213 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 213 "prog_io_mutable.m"
        }
#line 212 "prog_io_mutable.m"
        {
#line 212 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_28_28));
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_io_mutable.m"
        }
#line 212 "prog_io_mutable.m"
        {
#line 212 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_27_27));
#line 212 "prog_io_mutable.m"
        }
#line 214 "prog_io_mutable.m"
        {
#line 214 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_10));
#line 214 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "prog_io_mutable.m"
        }
#line 214 "prog_io_mutable.m"
        {
#line 214 "prog_io_mutable.m"
          MR_Word base;
#line 214 "prog_io_mutable.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 214 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeInst_6 = base;
#line 214 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_34_34));
#line 214 "prog_io_mutable.m"
        }
#line 208 "prog_io_mutable.m"
      }
#line 215 "prog_io_mutable.m"
    else
#line 217 "prog_io_mutable.m"
      {
#line 217 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Inst_11;

#line 215 "prog_io_mutable.m"
        {
#line 215 "prog_io_mutable.m"
          (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, &parse_tree__prog_io_mutable__Inst_11);
        }
#line 217 "prog_io_mutable.m"
        if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded)
#line 216 "prog_io_mutable.m"
          {
#line 216 "prog_io_mutable.m"
            MR_Word base;
#line 216 "prog_io_mutable.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_io_mutable.m"
            *parse_tree__prog_io_mutable__MaybeInst_6 = base;
#line 216 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Inst_11));
#line 216 "prog_io_mutable.m"
          }
#line 217 "prog_io_mutable.m"
        else
#line 218 "prog_io_mutable.m"
          {
#line 218 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_44_44;
#line 218 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_45_45;
#line 218 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_46_46;
#line 218 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_51_51;
#line 218 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Spec_54;

#line 220 "prog_io_mutable.m"
            {
#line 220 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_46_46 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
            }
#line 220 "prog_io_mutable.m"
            {
#line 220 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_46_46));
#line 220 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[26])));
#line 220 "prog_io_mutable.m"
            }
#line 219 "prog_io_mutable.m"
            {
#line 219 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_45_45));
#line 219 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "prog_io_mutable.m"
            }
#line 219 "prog_io_mutable.m"
            {
#line 219 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Spec_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 219 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 219 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_54, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_44_44));
#line 219 "prog_io_mutable.m"
            }
#line 221 "prog_io_mutable.m"
            {
#line 221 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_54));
#line 221 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "prog_io_mutable.m"
            }
#line 221 "prog_io_mutable.m"
            {
#line 221 "prog_io_mutable.m"
              MR_Word base;
#line 221 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeInst_6 = base;
#line 221 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_51_51));
#line 221 "prog_io_mutable.m"
            }
#line 218 "prog_io_mutable.m"
          }
#line 217 "prog_io_mutable.m"
      }
#line 204 "prog_io_mutable.m"
  }
#line 204 "prog_io_mutable.m"
}

#line 191 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_1(
#line 191 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 191 "prog_io_mutable.m"
{
#line 191 "prog_io_mutable.m"
  {
#line 191 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 191 "prog_io_mutable.m"
    MR_builtin_longjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__commit_0, 1);
#line 191 "prog_io_mutable.m"
  }
#line 191 "prog_io_mutable.m"
}

#line 191 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_2(
#line 191 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 191 "prog_io_mutable.m"
{
#line 191 "prog_io_mutable.m"
  {
#line 191 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 191 "prog_io_mutable.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__commit_0) == 0)
#line 191 "prog_io_mutable.m"
      {
#line 191 "prog_io_mutable.m"
        {
#line 191 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_7_7;

#line 191 "prog_io_mutable.m"
          {
#line 191 "prog_io_mutable.m"
            mercury__term__contains_var_2_p_1((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, &parse_tree__prog_io_mutable__V_7_7, parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_1, parse_tree__prog_io_mutable__env_ptr);
          }
#line 191 "prog_io_mutable.m"
        }
#line 191 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_FALSE;
#line 191 "prog_io_mutable.m"
      }
#line 191 "prog_io_mutable.m"
    else
#line 191 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_TRUE;
#line 191 "prog_io_mutable.m"
  }
#line 191 "prog_io_mutable.m"
}

#line 188 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0(
#line 188 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 188 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__TypeTerm_5,
#line 188 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeType_6)
#line 188 "prog_io_mutable.m"
{
#line 188 "prog_io_mutable.m"
  {
#line 188 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s parse_tree__prog_io_mutable__env;

#line 188 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5 = parse_tree__prog_io_mutable__TypeTerm_5;
#line 191 "prog_io_mutable.m"
    {
#line 191 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_2(&parse_tree__prog_io_mutable__env);
    }
#line 199 "prog_io_mutable.m"
    if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded)
#line 192 "prog_io_mutable.m"
      {
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 192 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__TypeTermStr_8;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Pieces_9;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Spec_10;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_14_14;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_17_17;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_18_18;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_27_27;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_28_28;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_29_29;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_31_31;
#line 192 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_34_34;

#line 192 "prog_io_mutable.m"
        {
#line 192 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__TypeTermStr_8 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_37_37, parse_tree__prog_io_mutable__VarSet_4, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
        }
#line 195 "prog_io_mutable.m"
        {
#line 195 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 195 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TypeTermStr_8));
#line 195 "prog_io_mutable.m"
        }
#line 194 "prog_io_mutable.m"
        {
#line 194 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_18_18));
#line 194 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 194 "prog_io_mutable.m"
        }
#line 193 "prog_io_mutable.m"
        {
#line 193 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[24])));
#line 193 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_17_17));
#line 193 "prog_io_mutable.m"
        }
#line 193 "prog_io_mutable.m"
        {
#line 193 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[23])));
#line 193 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_14_14));
#line 193 "prog_io_mutable.m"
        }
#line 197 "prog_io_mutable.m"
        {
#line 197 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_37_37, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
        }
#line 197 "prog_io_mutable.m"
        {
#line 197 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 197 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_9));
#line 197 "prog_io_mutable.m"
        }
#line 197 "prog_io_mutable.m"
        {
#line 197 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_31_31));
#line 197 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "prog_io_mutable.m"
        }
#line 197 "prog_io_mutable.m"
        {
#line 197 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 197 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_29_29));
#line 197 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 197 "prog_io_mutable.m"
        }
#line 196 "prog_io_mutable.m"
        {
#line 196 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_28_28));
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "prog_io_mutable.m"
        }
#line 196 "prog_io_mutable.m"
        {
#line 196 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_27_27));
#line 196 "prog_io_mutable.m"
        }
#line 198 "prog_io_mutable.m"
        {
#line 198 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_10));
#line 198 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "prog_io_mutable.m"
        }
#line 198 "prog_io_mutable.m"
        {
#line 198 "prog_io_mutable.m"
          MR_Word base;
#line 198 "prog_io_mutable.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 198 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeType_6 = base;
#line 198 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_34_34));
#line 198 "prog_io_mutable.m"
        }
#line 192 "prog_io_mutable.m"
      }
#line 199 "prog_io_mutable.m"
    else
#line 200 "prog_io_mutable.m"
      {
#line 201 "prog_io_mutable.m"
        {
#line 201 "prog_io_mutable.m"
          parse_tree__prog_io_util__parse_type_4_p_0((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, parse_tree__prog_io_mutable__VarSet_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_mutable__MaybeType_6);
#line 201 "prog_io_mutable.m"
          return;
        }
#line 200 "prog_io_mutable.m"
      }
#line 188 "prog_io_mutable.m"
  }
#line 188 "prog_io_mutable.m"
}

#line 36 "prog_io_mutable.m"
MR_bool MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_decl_info_6_p_0(
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable___ModuleName_7,
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Terms_9,
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 36 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 36 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeMutableInfo_12)
#line 36 "prog_io_mutable.m"
{
#line 139 "prog_io_mutable.m"
  {
#line 139 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 139 "prog_io_mutable.m"
    {
#line 139 "prog_io_mutable.m"
      return parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Terms_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeMutableInfo_12);
    }
#line 139 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 139 "prog_io_mutable.m"
  }
#line 36 "prog_io_mutable.m"
}

#line 33 "prog_io_mutable.m"
MR_bool MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_decl_6_p_0(
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ModuleName_7,
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Terms_9,
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 33 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 33 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 33 "prog_io_mutable.m"
{
#line 127 "prog_io_mutable.m"
  {
#line 127 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 127 "prog_io_mutable.m"
    {
#line 127 "prog_io_mutable.m"
      return parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Terms_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeItem_12);
    }
#line 127 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 127 "prog_io_mutable.m"
  }
#line 33 "prog_io_mutable.m"
}

#line 30 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__parse_finalise_decl_6_p_0(
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable___ModuleName_7,
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Term_9,
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 30 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 30 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 30 "prog_io_mutable.m"
{
#line 91 "prog_io_mutable.m"
  {
#line 91 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 91 "prog_io_mutable.m"
    {
#line 91 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeItem_12);
#line 91 "prog_io_mutable.m"
      return;
    }
#line 91 "prog_io_mutable.m"
  }
#line 30 "prog_io_mutable.m"
}

#line 27 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__parse_initialise_decl_6_p_0(
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable___ModuleName_7,
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Term_9,
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 27 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 27 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 27 "prog_io_mutable.m"
{
#line 53 "prog_io_mutable.m"
  {
#line 53 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 53 "prog_io_mutable.m"
    {
#line 53 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeItem_12);
#line 53 "prog_io_mutable.m"
      return;
    }
#line 53 "prog_io_mutable.m"
  }
#line 27 "prog_io_mutable.m"
}

void mercury__parse_tree__prog_io_mutable__init(void)
{
}

void mercury__parse_tree__prog_io_mutable__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0);
}

void mercury__parse_tree__prog_io_mutable__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_mutable. */
