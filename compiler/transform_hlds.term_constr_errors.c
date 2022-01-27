/*
** Automatically generated from `term_constr_errors.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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


/* :- module transform_hlds.term_constr_errors. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_errors__init
ENDINIT
*/

#include "transform_hlds.term_constr_errors.mih"


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
#include "int.mih"
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
#include "transform_hlds.mih"
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
#include "hlds.hlds_error_util.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 135 "transform_hlds.term_constr_errors.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_errors__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 138 "transform_hlds.term_constr_errors.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_errors__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 141 "transform_hlds.term_constr_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_errors__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 144 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_0;

#line 147 "transform_hlds.term_constr_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_termination2_error_0_1[2];

#line 150 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_1;

#line 153 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_2;

#line 156 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_3;

#line 159 "transform_hlds.term_constr_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_termination2_error_0_4[1];

#line 162 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_4;

#line 165 "transform_hlds.term_constr_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_termination2_error_0_5[1];

#line 168 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_5;

#line 171 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_0[3];

#line 174 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_1[1];

#line 177 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_2[1];

#line 180 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_3[1];

#line 183 "transform_hlds.term_constr_errors.c"
static const MR_DuPtagLayout transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_termination2_error_0[4];

#line 186 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_termination2_error_0[6];

#line 189 "transform_hlds.term_constr_errors.c"
static const MR_Integer transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_termination2_error_0[6];

#line 192 "transform_hlds.term_constr_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____error_0_0_10001(
#line 195 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1,
#line 197 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2);

#line 200 "transform_hlds.term_constr_errors.c"
static void MR_CALL 
transform_hlds__term_constr_errors____Compare____error_0_0_10001(
#line 203 "transform_hlds.term_constr_errors.c"
  MR_Box * transform_hlds__term_constr_errors__wrapper_arg_1,
#line 205 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2,
#line 207 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_3);

#line 210 "transform_hlds.term_constr_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_errors_0_0_10001(
#line 213 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1,
#line 215 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2);

#line 218 "transform_hlds.term_constr_errors.c"
static void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_errors_0_0_10001(
#line 221 "transform_hlds.term_constr_errors.c"
  MR_Box * transform_hlds__term_constr_errors__wrapper_arg_1,
#line 223 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2,
#line 225 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_3);

#line 228 "transform_hlds.term_constr_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____termination2_error_0_0_10001(
#line 231 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1,
#line 233 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2);

#line 236 "transform_hlds.term_constr_errors.c"
static void MR_CALL 
transform_hlds__term_constr_errors____Compare____termination2_error_0_0_10001(
#line 239 "transform_hlds.term_constr_errors.c"
  MR_Box * transform_hlds__term_constr_errors__wrapper_arg_1,
#line 241 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2,
#line 243 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_3);

#line 258 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__description__258__1_2_p_0(
#line 258 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__PredId_61,
#line 258 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__SCCPredId_67);

#line 234 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__description__234__1_2_p_0(
#line 234 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__CallerPPId_27,
#line 234 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__PPId_32);

#line 121 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__report_termination2_errors__121__1_1_p_0(
#line 121 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_44);

#line 108 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__report_termination2_errors__108__1_2_p_0(
#line 108 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31,
#line 108 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_43);

#line 95 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__report_termination2_errors__95__1_2_p_0(
#line 95 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31,
#line 95 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_37);

#line 258 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__description_5_p_0_2(
#line 258 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__closure_arg);

#line 234 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__description_5_p_0_1(
#line 234 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__closure_arg);

#line 213 "term_constr_errors.m"
static void MR_CALL 
transform_hlds__term_constr_errors__description_5_p_0(
#line 213 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
#line 213 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2,
#line 213 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Module_3,
#line 213 "term_constr_errors.m"
  MR_Word * transform_hlds__term_constr_errors__Pieces_4,
#line 213 "term_constr_errors.m"
  MR_Word * transform_hlds__term_constr_errors__HeadVar__5_5);

#line 196 "term_constr_errors.m"
static void MR_CALL 
transform_hlds__term_constr_errors__output_error_7_p_0(
#line 196 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
#line 196 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Single_10,
#line 196 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__ErrorNum_11,
#line 196 "term_constr_errors.m"
  MR_Integer transform_hlds__term_constr_errors__Indent_12,
#line 196 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Module_13);

#line 187 "term_constr_errors.m"
static void MR_CALL 
transform_hlds__term_constr_errors__output_errors_7_p_0(
#line 187 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
#line 187 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Single_2,
#line 187 "term_constr_errors.m"
  MR_Integer transform_hlds__term_constr_errors__ErrNum0_3,
#line 187 "term_constr_errors.m"
  MR_Integer transform_hlds__term_constr_errors__Indent_4,
#line 187 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Module_5);

#line 149 "term_constr_errors.m"
static void MR_CALL 
transform_hlds__term_constr_errors__report_term_errors_5_p_0(
#line 149 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__SCC_6,
#line 149 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Errors_7,
#line 149 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Module_8);

#line 121 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__report_termination2_errors_6_p_0_3(
#line 121 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__closure_arg,
#line 121 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1);

#line 108 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__report_termination2_errors_6_p_0_2(
#line 108 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__closure_arg,
#line 108 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1);

#line 95 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__report_termination2_errors_6_p_0_1(
#line 95 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__closure_arg,
#line 95 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_1[2][3];

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_2[46][2];

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_3[3][5];

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_4[1][4];




static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__term_constr_errors__report_termination2_errors_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_2[46][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "recursive procedures"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Termination of the mutually"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not satisfiable."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The termination condition"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "There is a"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "imported from another module."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "predicates and/or functions"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It contains one or more"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Termination of"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not proven, for unknown reason(s)."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not proven for the following reason:"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not proven for the following reasons:"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) ":")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It contains a higher-order call."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "calls"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "which could not be proven to terminate."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "it."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "There is a call the foreign procedure"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "which is not known to terminate."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_errors__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0))
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
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 686 "transform_hlds.term_constr_errors.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_errors__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 695 "transform_hlds.term_constr_errors.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_errors__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 704 "transform_hlds.term_constr_errors.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_errors____Unify____error_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_errors____Compare____error_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_errors",
  (MR_String) "error",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_errors__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 725 "transform_hlds.term_constr_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_errors__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_errors__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 733 "transform_hlds.term_constr_errors.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_errors____Unify____term2_errors_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_errors____Compare____term2_errors_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_errors",
  (MR_String) "term2_errors",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_errors__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 754 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_0 = {
  (MR_String) "imported_pred",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 769 "transform_hlds.term_constr_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_termination2_error_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 775 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_1 = {
  (MR_String) "can_loop_proc_called",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_termination2_error_0_1,
  NULL,
  NULL,
  NULL
};

#line 790 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_2 = {
  (MR_String) "cond_not_satisfied",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 805 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_3 = {
  (MR_String) "horder_call",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 820 "transform_hlds.term_constr_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_termination2_error_0_4[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 825 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_4 = {
  (MR_String) "does_not_term_pragma",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_termination2_error_0_4,
  NULL,
  NULL,
  NULL
};

#line 840 "transform_hlds.term_constr_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_termination2_error_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 845 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_5 = {
  (MR_String) "foreign_proc_called",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 5,
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_termination2_error_0_5,
  NULL,
  NULL,
  NULL
};

#line 860 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_0[3] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_0,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_2,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_3
};

#line 867 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_1[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_1
};

#line 872 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_2[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_4
};

#line 877 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_3[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_5
};

#line 882 "transform_hlds.term_constr_errors.c"
static const MR_DuPtagLayout transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_termination2_error_0[4] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_termination2_error_0_3
  }
};

#line 906 "transform_hlds.term_constr_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_termination2_error_0[6] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_1,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_2,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_4,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_5,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_3,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_termination2_error_0_0
};

#line 916 "transform_hlds.term_constr_errors.c"
static const MR_Integer transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_termination2_error_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 926 "transform_hlds.term_constr_errors.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_errors____Unify____termination2_error_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_errors____Compare____termination2_error_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_errors",
  (MR_String) "termination2_error",
  {
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_termination2_error_0
  },
  {
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_termination2_error_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_termination2_error_0
};

#line 947 "transform_hlds.term_constr_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____error_0_0_10001(
#line 950 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1,
#line 952 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2)
#line 954 "transform_hlds.term_constr_errors.c"
{
#line 956 "transform_hlds.term_constr_errors.c"
  {
#line 958 "transform_hlds.term_constr_errors.c"
    MR_bool transform_hlds__term_constr_errors__succeeded;

#line 961 "transform_hlds.term_constr_errors.c"
    {
#line 963 "transform_hlds.term_constr_errors.c"
      transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors____Unify____error_0_0(((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_2));
    }
#line 966 "transform_hlds.term_constr_errors.c"
    return transform_hlds__term_constr_errors__succeeded;
#line 968 "transform_hlds.term_constr_errors.c"
  }
#line 970 "transform_hlds.term_constr_errors.c"
}

#line 973 "transform_hlds.term_constr_errors.c"
static void MR_CALL 
transform_hlds__term_constr_errors____Compare____error_0_0_10001(
#line 976 "transform_hlds.term_constr_errors.c"
  MR_Box * transform_hlds__term_constr_errors__wrapper_arg_1,
#line 978 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2,
#line 980 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_3)
#line 982 "transform_hlds.term_constr_errors.c"
{
#line 984 "transform_hlds.term_constr_errors.c"
  {
#line 986 "transform_hlds.term_constr_errors.c"
    MR_Word transform_hlds__term_constr_errors__conv0_HeadVar__1_1;

#line 989 "transform_hlds.term_constr_errors.c"
    {
#line 991 "transform_hlds.term_constr_errors.c"
      transform_hlds__term_constr_errors____Compare____error_0_0(&transform_hlds__term_constr_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_3));
    }
#line 994 "transform_hlds.term_constr_errors.c"
    *transform_hlds__term_constr_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_errors__conv0_HeadVar__1_1));
#line 996 "transform_hlds.term_constr_errors.c"
  }
#line 998 "transform_hlds.term_constr_errors.c"
}

#line 1001 "transform_hlds.term_constr_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_errors_0_0_10001(
#line 1004 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1,
#line 1006 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2)
#line 1008 "transform_hlds.term_constr_errors.c"
{
#line 1010 "transform_hlds.term_constr_errors.c"
  {
#line 1012 "transform_hlds.term_constr_errors.c"
    MR_bool transform_hlds__term_constr_errors__succeeded;

#line 1015 "transform_hlds.term_constr_errors.c"
    {
#line 1017 "transform_hlds.term_constr_errors.c"
      transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors____Unify____term2_errors_0_0(((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_2));
    }
#line 1020 "transform_hlds.term_constr_errors.c"
    return transform_hlds__term_constr_errors__succeeded;
#line 1022 "transform_hlds.term_constr_errors.c"
  }
#line 1024 "transform_hlds.term_constr_errors.c"
}

#line 1027 "transform_hlds.term_constr_errors.c"
static void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_errors_0_0_10001(
#line 1030 "transform_hlds.term_constr_errors.c"
  MR_Box * transform_hlds__term_constr_errors__wrapper_arg_1,
#line 1032 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2,
#line 1034 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_3)
#line 1036 "transform_hlds.term_constr_errors.c"
{
#line 1038 "transform_hlds.term_constr_errors.c"
  {
#line 1040 "transform_hlds.term_constr_errors.c"
    MR_Word transform_hlds__term_constr_errors__conv0_HeadVar__1_1;

#line 1043 "transform_hlds.term_constr_errors.c"
    {
#line 1045 "transform_hlds.term_constr_errors.c"
      transform_hlds__term_constr_errors____Compare____term2_errors_0_0(&transform_hlds__term_constr_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_3));
    }
#line 1048 "transform_hlds.term_constr_errors.c"
    *transform_hlds__term_constr_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_errors__conv0_HeadVar__1_1));
#line 1050 "transform_hlds.term_constr_errors.c"
  }
#line 1052 "transform_hlds.term_constr_errors.c"
}

#line 1055 "transform_hlds.term_constr_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____termination2_error_0_0_10001(
#line 1058 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1,
#line 1060 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2)
#line 1062 "transform_hlds.term_constr_errors.c"
{
#line 1064 "transform_hlds.term_constr_errors.c"
  {
#line 1066 "transform_hlds.term_constr_errors.c"
    MR_bool transform_hlds__term_constr_errors__succeeded;

#line 1069 "transform_hlds.term_constr_errors.c"
    {
#line 1071 "transform_hlds.term_constr_errors.c"
      transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors____Unify____termination2_error_0_0(((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_2));
    }
#line 1074 "transform_hlds.term_constr_errors.c"
    return transform_hlds__term_constr_errors__succeeded;
#line 1076 "transform_hlds.term_constr_errors.c"
  }
#line 1078 "transform_hlds.term_constr_errors.c"
}

#line 1081 "transform_hlds.term_constr_errors.c"
static void MR_CALL 
transform_hlds__term_constr_errors____Compare____termination2_error_0_0_10001(
#line 1084 "transform_hlds.term_constr_errors.c"
  MR_Box * transform_hlds__term_constr_errors__wrapper_arg_1,
#line 1086 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2,
#line 1088 "transform_hlds.term_constr_errors.c"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_3)
#line 1090 "transform_hlds.term_constr_errors.c"
{
#line 1092 "transform_hlds.term_constr_errors.c"
  {
#line 1094 "transform_hlds.term_constr_errors.c"
    MR_Word transform_hlds__term_constr_errors__conv0_HeadVar__1_1;

#line 1097 "transform_hlds.term_constr_errors.c"
    {
#line 1099 "transform_hlds.term_constr_errors.c"
      transform_hlds__term_constr_errors____Compare____termination2_error_0_0(&transform_hlds__term_constr_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_3));
    }
#line 1102 "transform_hlds.term_constr_errors.c"
    *transform_hlds__term_constr_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_errors__conv0_HeadVar__1_1));
#line 1104 "transform_hlds.term_constr_errors.c"
  }
#line 1106 "transform_hlds.term_constr_errors.c"
}

#line 258 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__description__258__1_2_p_0(
#line 258 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__PredId_61,
#line 258 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__SCCPredId_67)
#line 258 "term_constr_errors.m"
{
#line 258 "term_constr_errors.m"
  {
#line 258 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;

#line 258 "term_constr_errors.m"
    {
#line 258 "term_constr_errors.m"
      return transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_constr_errors__PredId_61, transform_hlds__term_constr_errors__SCCPredId_67);
    }
#line 258 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 258 "term_constr_errors.m"
  }
#line 258 "term_constr_errors.m"
}

#line 234 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__description__234__1_2_p_0(
#line 234 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__CallerPPId_27,
#line 234 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__PPId_32)
#line 234 "term_constr_errors.m"
{
#line 234 "term_constr_errors.m"
  {
#line 234 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;

#line 234 "term_constr_errors.m"
    {
#line 234 "term_constr_errors.m"
      return transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_errors__PPId_32, transform_hlds__term_constr_errors__CallerPPId_27);
    }
#line 234 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 234 "term_constr_errors.m"
  }
#line 234 "term_constr_errors.m"
}

#line 121 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__report_termination2_errors__121__1_1_p_0(
#line 121 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_44)
#line 121 "term_constr_errors.m"
{
#line 121 "term_constr_errors.m"
  {
#line 121 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 121 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Error_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__1_44, (MR_Integer) 1)));
#line 122 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__1_44, (MR_Integer) 0)));

#line 278 "term_constr_errors.m"
    if ((transform_hlds__term_constr_errors__Error_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 279 "term_constr_errors.m"
      transform_hlds__term_constr_errors__succeeded = MR_TRUE;
#line 278 "term_constr_errors.m"
    else
#line 278 "term_constr_errors.m"
      if ((transform_hlds__term_constr_errors__Error_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "term_constr_errors.m"
        transform_hlds__term_constr_errors__succeeded = MR_TRUE;
#line 278 "term_constr_errors.m"
      else
#line 278 "term_constr_errors.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__Error_27)) == (MR_mktag((MR_Integer) 1))))
#line 281 "term_constr_errors.m"
          transform_hlds__term_constr_errors__succeeded = MR_TRUE;
#line 278 "term_constr_errors.m"
        else
#line 278 "term_constr_errors.m"
          if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__Error_27)) == (MR_mktag((MR_Integer) 2))))
#line 280 "term_constr_errors.m"
            transform_hlds__term_constr_errors__succeeded = MR_TRUE;
#line 278 "term_constr_errors.m"
          else
#line 278 "term_constr_errors.m"
            transform_hlds__term_constr_errors__succeeded = MR_FALSE;
#line 123 "term_constr_errors.m"
    transform_hlds__term_constr_errors__succeeded = !(transform_hlds__term_constr_errors__succeeded);
#line 121 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 121 "term_constr_errors.m"
  }
#line 121 "term_constr_errors.m"
}

#line 108 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__report_termination2_errors__108__1_2_p_0(
#line 108 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31,
#line 108 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_43)
#line 108 "term_constr_errors.m"
{
#line 108 "term_constr_errors.m"
  {
#line 108 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 108 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__PredInfo_48;
#line 109 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__V_21_21;

#line 109 "term_constr_errors.m"
    {
#line 109 "term_constr_errors.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31, transform_hlds__term_constr_errors__HeadVar__2_43, &transform_hlds__term_constr_errors__PredInfo_48, &transform_hlds__term_constr_errors__V_21_21);
    }
#line 110 "term_constr_errors.m"
    {
#line 110 "term_constr_errors.m"
      transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__term_constr_errors__PredInfo_48);
    }
#line 110 "term_constr_errors.m"
    transform_hlds__term_constr_errors__succeeded = !(transform_hlds__term_constr_errors__succeeded);
#line 108 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 108 "term_constr_errors.m"
  }
#line 108 "term_constr_errors.m"
}

#line 95 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__report_termination2_errors__95__1_2_p_0(
#line 95 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31,
#line 95 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_37)
#line 95 "term_constr_errors.m"
{
#line 95 "term_constr_errors.m"
  {
#line 95 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 95 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__PredInfo_16;
#line 95 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Markers_18;
#line 95 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__V_38_38;
#line 96 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__V_17_17;

#line 96 "term_constr_errors.m"
    {
#line 96 "term_constr_errors.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31, transform_hlds__term_constr_errors__HeadVar__2_37, &transform_hlds__term_constr_errors__PredInfo_16, &transform_hlds__term_constr_errors__V_17_17);
    }
#line 97 "term_constr_errors.m"
    {
#line 97 "term_constr_errors.m"
      transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__term_constr_errors__PredInfo_16);
    }
#line 97 "term_constr_errors.m"
    transform_hlds__term_constr_errors__succeeded = !(transform_hlds__term_constr_errors__succeeded);
#line 95 "term_constr_errors.m"
    if (transform_hlds__term_constr_errors__succeeded)
#line 95 "term_constr_errors.m"
      {
#line 98 "term_constr_errors.m"
        {
#line 98 "term_constr_errors.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__term_constr_errors__PredInfo_16, &transform_hlds__term_constr_errors__Markers_18);
        }
#line 99 "term_constr_errors.m"
        transform_hlds__term_constr_errors__V_38_38 = (MR_Integer) 19;
#line 99 "term_constr_errors.m"
        {
#line 99 "term_constr_errors.m"
          return transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_errors__Markers_18, transform_hlds__term_constr_errors__V_38_38);
        }
#line 95 "term_constr_errors.m"
      }
#line 95 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 95 "term_constr_errors.m"
  }
#line 95 "term_constr_errors.m"
}

#line 35 "term_constr_errors.m"
void MR_CALL 
transform_hlds__term_constr_errors____Compare____termination2_error_0_0(
#line 35 "term_constr_errors.m"
  MR_Word * transform_hlds__term_constr_errors__HeadVar__1_1,
#line 35 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2,
#line 35 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__3_3)
#line 35 "term_constr_errors.m"
{
#line 35 "term_constr_errors.m"
  {
#line 35 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 35 "term_constr_errors.m"
    MR_Integer transform_hlds__term_constr_errors__CastX_53 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;
#line 35 "term_constr_errors.m"
    MR_Integer transform_hlds__term_constr_errors__CastY_54 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__3_3;

#line 35 "term_constr_errors.m"
    transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastX_53 == transform_hlds__term_constr_errors__CastY_54);
#line 35 "term_constr_errors.m"
    if (transform_hlds__term_constr_errors__succeeded)
#line 1332 "transform_hlds.term_constr_errors.c"
      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "term_constr_errors.m"
    else
#line 35 "term_constr_errors.m"
      if ((transform_hlds__term_constr_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 35 "term_constr_errors.m"
        if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 35 "term_constr_errors.m"
          *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "term_constr_errors.m"
        else
#line 35 "term_constr_errors.m"
          if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 35 "term_constr_errors.m"
            *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
          else
#line 35 "term_constr_errors.m"
            if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 35 "term_constr_errors.m"
              *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
            else
#line 35 "term_constr_errors.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1358 "transform_hlds.term_constr_errors.c"
                *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
              else
#line 35 "term_constr_errors.m"
                if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1364 "transform_hlds.term_constr_errors.c"
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
                else
#line 1368 "transform_hlds.term_constr_errors.c"
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
      else
#line 35 "term_constr_errors.m"
        if ((transform_hlds__term_constr_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 35 "term_constr_errors.m"
          if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 35 "term_constr_errors.m"
            *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
          else
#line 35 "term_constr_errors.m"
            if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 35 "term_constr_errors.m"
              *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "term_constr_errors.m"
            else
#line 35 "term_constr_errors.m"
              if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 35 "term_constr_errors.m"
                *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
              else
#line 35 "term_constr_errors.m"
                if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1394 "transform_hlds.term_constr_errors.c"
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                else
#line 35 "term_constr_errors.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1400 "transform_hlds.term_constr_errors.c"
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
                  else
#line 1404 "transform_hlds.term_constr_errors.c"
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
        else
#line 35 "term_constr_errors.m"
          if ((transform_hlds__term_constr_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 35 "term_constr_errors.m"
            if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 35 "term_constr_errors.m"
              *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
            else
#line 35 "term_constr_errors.m"
              if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 35 "term_constr_errors.m"
                *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
              else
#line 35 "term_constr_errors.m"
                if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 35 "term_constr_errors.m"
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "term_constr_errors.m"
                else
#line 35 "term_constr_errors.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1430 "transform_hlds.term_constr_errors.c"
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
                  else
#line 35 "term_constr_errors.m"
                    if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1436 "transform_hlds.term_constr_errors.c"
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
                    else
#line 1440 "transform_hlds.term_constr_errors.c"
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
          else
#line 35 "term_constr_errors.m"
            if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 35 "term_constr_errors.m"
              {
#line 35 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "term_constr_errors.m"
                if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1455 "transform_hlds.term_constr_errors.c"
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
                else
#line 35 "term_constr_errors.m"
                  if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1461 "transform_hlds.term_constr_errors.c"
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
                  else
#line 35 "term_constr_errors.m"
                    if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "transform_hlds.term_constr_errors.c"
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                    else
#line 35 "term_constr_errors.m"
                      if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 35 "term_constr_errors.m"
                        {
#line 35 "term_constr_errors.m"
                          MR_Word transform_hlds__term_constr_errors__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 35 "term_constr_errors.m"
                          MR_Word transform_hlds__term_constr_errors__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 35 "term_constr_errors.m"
                          MR_Word transform_hlds__term_constr_errors__V_14_14;

#line 35 "term_constr_errors.m"
                          {
#line 35 "term_constr_errors.m"
                            hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_errors__V_14_14, transform_hlds__term_constr_errors__V_60_60, transform_hlds__term_constr_errors__V_12_12);
                          }
#line 1487 "transform_hlds.term_constr_errors.c"
                          transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__V_14_14 == (MR_Integer) 0);
#line 35 "term_constr_errors.m"
                          transform_hlds__term_constr_errors__succeeded = !(transform_hlds__term_constr_errors__succeeded);
#line 35 "term_constr_errors.m"
                          if (transform_hlds__term_constr_errors__succeeded)
#line 35 "term_constr_errors.m"
                            *transform_hlds__term_constr_errors__HeadVar__1_1 = transform_hlds__term_constr_errors__V_14_14;
#line 35 "term_constr_errors.m"
                          else
#line 35 "term_constr_errors.m"
                            {
#line 35 "term_constr_errors.m"
                              hlds__hlds_pred____Compare____pred_proc_id_0_0(transform_hlds__term_constr_errors__HeadVar__1_1, transform_hlds__term_constr_errors__V_59_59, transform_hlds__term_constr_errors__V_13_13);
#line 35 "term_constr_errors.m"
                              return;
                            }
#line 35 "term_constr_errors.m"
                        }
#line 35 "term_constr_errors.m"
                      else
#line 35 "term_constr_errors.m"
                        if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1510 "transform_hlds.term_constr_errors.c"
                          *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
                        else
#line 1514 "transform_hlds.term_constr_errors.c"
                          *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
              }
#line 35 "term_constr_errors.m"
            else
#line 35 "term_constr_errors.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 35 "term_constr_errors.m"
                {
#line 35 "term_constr_errors.m"
                  MR_Word transform_hlds__term_constr_errors__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "term_constr_errors.m"
                  if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1529 "transform_hlds.term_constr_errors.c"
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                  else
#line 35 "term_constr_errors.m"
                    if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1535 "transform_hlds.term_constr_errors.c"
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                    else
#line 35 "term_constr_errors.m"
                      if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1541 "transform_hlds.term_constr_errors.c"
                        *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                      else
#line 35 "term_constr_errors.m"
                        if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1547 "transform_hlds.term_constr_errors.c"
                          *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                        else
#line 35 "term_constr_errors.m"
                          if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 35 "term_constr_errors.m"
                            {
#line 35 "term_constr_errors.m"
                              MR_Word transform_hlds__term_constr_errors__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__HeadVar__3_3, (MR_Integer) 0)));

#line 35 "term_constr_errors.m"
                              {
#line 35 "term_constr_errors.m"
                                hlds__hlds_pred____Compare____pred_id_0_0(transform_hlds__term_constr_errors__HeadVar__1_1, transform_hlds__term_constr_errors__V_61_61, transform_hlds__term_constr_errors__V_40_40);
#line 35 "term_constr_errors.m"
                                return;
                              }
#line 35 "term_constr_errors.m"
                            }
#line 35 "term_constr_errors.m"
                          else
#line 1569 "transform_hlds.term_constr_errors.c"
                            *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "term_constr_errors.m"
                }
#line 35 "term_constr_errors.m"
              else
#line 35 "term_constr_errors.m"
                {
#line 35 "term_constr_errors.m"
                  MR_Word transform_hlds__term_constr_errors__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "term_constr_errors.m"
                  if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1582 "transform_hlds.term_constr_errors.c"
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                  else
#line 35 "term_constr_errors.m"
                    if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1588 "transform_hlds.term_constr_errors.c"
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                    else
#line 35 "term_constr_errors.m"
                      if ((transform_hlds__term_constr_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1594 "transform_hlds.term_constr_errors.c"
                        *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                      else
#line 35 "term_constr_errors.m"
                        if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1600 "transform_hlds.term_constr_errors.c"
                          *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                        else
#line 35 "term_constr_errors.m"
                          if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1606 "transform_hlds.term_constr_errors.c"
                            *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "term_constr_errors.m"
                          else
#line 35 "term_constr_errors.m"
                            {
#line 35 "term_constr_errors.m"
                              MR_Word transform_hlds__term_constr_errors__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_errors__HeadVar__3_3, (MR_Integer) 0)));

#line 35 "term_constr_errors.m"
                              {
#line 35 "term_constr_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(transform_hlds__term_constr_errors__HeadVar__1_1, transform_hlds__term_constr_errors__V_62_62, transform_hlds__term_constr_errors__V_52_52);
#line 35 "term_constr_errors.m"
                                return;
                              }
#line 35 "term_constr_errors.m"
                            }
#line 35 "term_constr_errors.m"
                }
#line 35 "term_constr_errors.m"
  }
#line 35 "term_constr_errors.m"
}

#line 35 "term_constr_errors.m"
MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____termination2_error_0_0(
#line 35 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
#line 35 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2)
#line 35 "term_constr_errors.m"
{
#line 35 "term_constr_errors.m"
  {
#line 35 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 35 "term_constr_errors.m"
    MR_Integer transform_hlds__term_constr_errors__CastX_17 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__1_1;
#line 35 "term_constr_errors.m"
    MR_Integer transform_hlds__term_constr_errors__CastY_18 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;

#line 35 "term_constr_errors.m"
    transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastX_17 == transform_hlds__term_constr_errors__CastY_18);
#line 35 "term_constr_errors.m"
    if (transform_hlds__term_constr_errors__succeeded)
#line 35 "term_constr_errors.m"
      transform_hlds__term_constr_errors__succeeded = MR_TRUE;
#line 35 "term_constr_errors.m"
    else
#line 35 "term_constr_errors.m"
      if ((transform_hlds__term_constr_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 35 "term_constr_errors.m"
        {
#line 35 "term_constr_errors.m"
          MR_Integer transform_hlds__term_constr_errors__CastX_9 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__1_1;
#line 35 "term_constr_errors.m"
          MR_Integer transform_hlds__term_constr_errors__CastY_10 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;

#line 35 "term_constr_errors.m"
          transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastY_10 == transform_hlds__term_constr_errors__CastX_9);
#line 35 "term_constr_errors.m"
        }
#line 35 "term_constr_errors.m"
      else
#line 35 "term_constr_errors.m"
        if ((transform_hlds__term_constr_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 35 "term_constr_errors.m"
          {
#line 35 "term_constr_errors.m"
            MR_Integer transform_hlds__term_constr_errors__CastX_11 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__1_1;
#line 35 "term_constr_errors.m"
            MR_Integer transform_hlds__term_constr_errors__CastY_12 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;

#line 35 "term_constr_errors.m"
            transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastY_12 == transform_hlds__term_constr_errors__CastX_11);
#line 35 "term_constr_errors.m"
          }
#line 35 "term_constr_errors.m"
        else
#line 35 "term_constr_errors.m"
          if ((transform_hlds__term_constr_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 35 "term_constr_errors.m"
            {
#line 35 "term_constr_errors.m"
              MR_Integer transform_hlds__term_constr_errors__CastX_3 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__1_1;
#line 35 "term_constr_errors.m"
              MR_Integer transform_hlds__term_constr_errors__CastY_4 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;

#line 35 "term_constr_errors.m"
              transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastY_4 == transform_hlds__term_constr_errors__CastX_3);
#line 35 "term_constr_errors.m"
            }
#line 35 "term_constr_errors.m"
          else
#line 35 "term_constr_errors.m"
            if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 35 "term_constr_errors.m"
              {
#line 35 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__V_7_7;
#line 35 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__V_8_8;

#line 35 "term_constr_errors.m"
                transform_hlds__term_constr_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 35 "term_constr_errors.m"
                if (transform_hlds__term_constr_errors__succeeded)
#line 35 "term_constr_errors.m"
                  {
#line 35 "term_constr_errors.m"
                    transform_hlds__term_constr_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "term_constr_errors.m"
                    transform_hlds__term_constr_errors__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 1725 "transform_hlds.term_constr_errors.c"
                    {
#line 1727 "transform_hlds.term_constr_errors.c"
                      transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_errors__V_5_5, transform_hlds__term_constr_errors__V_7_7);
                    }
#line 35 "term_constr_errors.m"
                    if (transform_hlds__term_constr_errors__succeeded)
#line 1732 "transform_hlds.term_constr_errors.c"
                      {
#line 1734 "transform_hlds.term_constr_errors.c"
                        return transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_errors__V_6_6, transform_hlds__term_constr_errors__V_8_8);
                      }
#line 35 "term_constr_errors.m"
                  }
#line 35 "term_constr_errors.m"
              }
#line 35 "term_constr_errors.m"
            else
#line 35 "term_constr_errors.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 35 "term_constr_errors.m"
                {
#line 35 "term_constr_errors.m"
                  MR_Word transform_hlds__term_constr_errors__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "term_constr_errors.m"
                  MR_Word transform_hlds__term_constr_errors__V_14_14;

#line 35 "term_constr_errors.m"
                  transform_hlds__term_constr_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 35 "term_constr_errors.m"
                  if (transform_hlds__term_constr_errors__succeeded)
#line 35 "term_constr_errors.m"
                    {
#line 35 "term_constr_errors.m"
                      transform_hlds__term_constr_errors__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 1760 "transform_hlds.term_constr_errors.c"
                      {
#line 1762 "transform_hlds.term_constr_errors.c"
                        return transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_constr_errors__V_13_13, transform_hlds__term_constr_errors__V_14_14);
                      }
#line 35 "term_constr_errors.m"
                    }
#line 35 "term_constr_errors.m"
                }
#line 35 "term_constr_errors.m"
              else
#line 35 "term_constr_errors.m"
                {
#line 35 "term_constr_errors.m"
                  MR_Word transform_hlds__term_constr_errors__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "term_constr_errors.m"
                  MR_Word transform_hlds__term_constr_errors__V_16_16;

#line 35 "term_constr_errors.m"
                  transform_hlds__term_constr_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 35 "term_constr_errors.m"
                  if (transform_hlds__term_constr_errors__succeeded)
#line 35 "term_constr_errors.m"
                    {
#line 35 "term_constr_errors.m"
                      transform_hlds__term_constr_errors__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 1786 "transform_hlds.term_constr_errors.c"
                      {
#line 1788 "transform_hlds.term_constr_errors.c"
                        return transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_errors__V_15_15, transform_hlds__term_constr_errors__V_16_16);
                      }
#line 35 "term_constr_errors.m"
                    }
#line 35 "term_constr_errors.m"
                }
#line 35 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 35 "term_constr_errors.m"
  }
#line 35 "term_constr_errors.m"
}

#line 63 "term_constr_errors.m"
void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_errors_0_0(
#line 63 "term_constr_errors.m"
  MR_Word * transform_hlds__term_constr_errors__HeadVar__1_1,
#line 63 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2,
#line 63 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__3_3)
#line 63 "term_constr_errors.m"
{
#line 63 "term_constr_errors.m"
  {
#line 63 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 63 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Cast_HeadVar1_4 = transform_hlds__term_constr_errors__HeadVar__2_2;
#line 63 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Cast_HeadVar2_5 = transform_hlds__term_constr_errors__HeadVar__3_3;

#line 63 "term_constr_errors.m"
    {
#line 63 "term_constr_errors.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_errors_scalar_common_2[0], transform_hlds__term_constr_errors__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_errors__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_errors__Cast_HeadVar2_5)));
#line 63 "term_constr_errors.m"
      return;
    }
#line 63 "term_constr_errors.m"
  }
#line 63 "term_constr_errors.m"
}

#line 63 "term_constr_errors.m"
MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_errors_0_0(
#line 63 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
#line 63 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2)
#line 63 "term_constr_errors.m"
{
#line 63 "term_constr_errors.m"
  {
#line 63 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 63 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Cast_HeadVar1_3 = transform_hlds__term_constr_errors__HeadVar__1_1;
#line 63 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Cast_HeadVar2_4 = transform_hlds__term_constr_errors__HeadVar__2_2;

#line 63 "term_constr_errors.m"
    {
#line 63 "term_constr_errors.m"
      return transform_hlds__term_constr_errors__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_errors_scalar_common_2[0], ((MR_Box) (transform_hlds__term_constr_errors__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_errors__Cast_HeadVar2_4)));
    }
#line 63 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 63 "term_constr_errors.m"
  }
#line 63 "term_constr_errors.m"
}

#line 61 "term_constr_errors.m"
void MR_CALL 
transform_hlds__term_constr_errors____Compare____error_0_0(
#line 61 "term_constr_errors.m"
  MR_Word * transform_hlds__term_constr_errors__HeadVar__1_1,
#line 61 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2,
#line 61 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__3_3)
#line 61 "term_constr_errors.m"
{
#line 61 "term_constr_errors.m"
  {
#line 61 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 61 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Cast_HeadVar1_4 = transform_hlds__term_constr_errors__HeadVar__2_2;
#line 61 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Cast_HeadVar2_5 = transform_hlds__term_constr_errors__HeadVar__3_3;

#line 61 "term_constr_errors.m"
    {
#line 61 "term_constr_errors.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_errors_scalar_common_1[0], transform_hlds__term_constr_errors__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_errors__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_errors__Cast_HeadVar2_5)));
#line 61 "term_constr_errors.m"
      return;
    }
#line 61 "term_constr_errors.m"
  }
#line 61 "term_constr_errors.m"
}

#line 61 "term_constr_errors.m"
MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____error_0_0(
#line 61 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
#line 61 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2)
#line 61 "term_constr_errors.m"
{
#line 61 "term_constr_errors.m"
  {
#line 61 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 61 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Cast_HeadVar1_3 = transform_hlds__term_constr_errors__HeadVar__1_1;
#line 61 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Cast_HeadVar2_4 = transform_hlds__term_constr_errors__HeadVar__2_2;

#line 61 "term_constr_errors.m"
    {
#line 61 "term_constr_errors.m"
      return transform_hlds__term_constr_errors__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_errors_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_errors__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_errors__Cast_HeadVar2_4)));
    }
#line 61 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 61 "term_constr_errors.m"
  }
#line 61 "term_constr_errors.m"
}

#line 258 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__description_5_p_0_2(
#line 258 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__closure_arg)
#line 258 "term_constr_errors.m"
{
#line 258 "term_constr_errors.m"
  {
#line 258 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 258 "term_constr_errors.m"
    MR_Box transform_hlds__term_constr_errors__closure = transform_hlds__term_constr_errors__closure_arg;

#line 258 "term_constr_errors.m"
    {
#line 258 "term_constr_errors.m"
      return transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__description__258__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 4))));
    }
#line 258 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 258 "term_constr_errors.m"
  }
#line 258 "term_constr_errors.m"
}

#line 234 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__description_5_p_0_1(
#line 234 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__closure_arg)
#line 234 "term_constr_errors.m"
{
#line 234 "term_constr_errors.m"
  {
#line 234 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 234 "term_constr_errors.m"
    MR_Box transform_hlds__term_constr_errors__closure = transform_hlds__term_constr_errors__closure_arg;

#line 234 "term_constr_errors.m"
    {
#line 234 "term_constr_errors.m"
      return transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__description__234__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 4))));
    }
#line 234 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 234 "term_constr_errors.m"
  }
#line 234 "term_constr_errors.m"
}

#line 213 "term_constr_errors.m"
static void MR_CALL 
transform_hlds__term_constr_errors__description_5_p_0(
#line 213 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
#line 213 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2,
#line 213 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Module_3,
#line 213 "term_constr_errors.m"
  MR_Word * transform_hlds__term_constr_errors__Pieces_4,
#line 213 "term_constr_errors.m"
  MR_Word * transform_hlds__term_constr_errors__HeadVar__5_5)
#line 213 "term_constr_errors.m"
{
#line 217 "term_constr_errors.m"
  {
#line 217 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;

#line 217 "term_constr_errors.m"
    if ((transform_hlds__term_constr_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 217 "term_constr_errors.m"
      {
#line 217 "term_constr_errors.m"
        *transform_hlds__term_constr_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 218 "term_constr_errors.m"
        *transform_hlds__term_constr_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[8]);
#line 217 "term_constr_errors.m"
      }
#line 217 "term_constr_errors.m"
    else
#line 217 "term_constr_errors.m"
      if ((transform_hlds__term_constr_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 249 "term_constr_errors.m"
        {
#line 249 "term_constr_errors.m"
          *transform_hlds__term_constr_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "term_constr_errors.m"
          *transform_hlds__term_constr_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[31]);
#line 249 "term_constr_errors.m"
        }
#line 217 "term_constr_errors.m"
      else
#line 217 "term_constr_errors.m"
        if ((transform_hlds__term_constr_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "term_constr_errors.m"
          {
#line 223 "term_constr_errors.m"
            *transform_hlds__term_constr_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 224 "term_constr_errors.m"
            *transform_hlds__term_constr_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[20]);
#line 223 "term_constr_errors.m"
          }
#line 217 "term_constr_errors.m"
        else
#line 217 "term_constr_errors.m"
          if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 231 "term_constr_errors.m"
            {
#line 231 "term_constr_errors.m"
              MR_Word transform_hlds__term_constr_errors__TypeCtorInfo_108_108;
#line 231 "term_constr_errors.m"
              MR_Word transform_hlds__term_constr_errors__CallerPPId_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "term_constr_errors.m"
              MR_Word transform_hlds__term_constr_errors__CalleePPId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 231 "term_constr_errors.m"
              MR_Word transform_hlds__term_constr_errors__Piece1_33;
#line 231 "term_constr_errors.m"
              MR_Word transform_hlds__term_constr_errors__CalleePiece_36;
#line 231 "term_constr_errors.m"
              MR_Word transform_hlds__term_constr_errors__V_51_51;
#line 231 "term_constr_errors.m"
              MR_Word transform_hlds__term_constr_errors__V_54_54;

#line 231 "term_constr_errors.m"
              *transform_hlds__term_constr_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 237 "term_constr_errors.m"
              if ((transform_hlds__term_constr_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "term_constr_errors.m"
                {
#line 239 "term_constr_errors.m"
                  {
#line 239 "term_constr_errors.m"
                    transform_hlds__term_constr_errors__Piece1_33 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_constr_errors__Module_3, (MR_Integer) 0, transform_hlds__term_constr_errors__CallerPPId_27);
                  }
#line 238 "term_constr_errors.m"
                }
#line 237 "term_constr_errors.m"
              else
#line 233 "term_constr_errors.m"
                {
#line 233 "term_constr_errors.m"
                  MR_Word transform_hlds__term_constr_errors__PPId_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 233 "term_constr_errors.m"
                  MR_Word transform_hlds__term_constr_errors__V_39_39;

#line 234 "term_constr_errors.m"
                  {
#line 234 "term_constr_errors.m"
                    transform_hlds__term_constr_errors__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 234 "term_constr_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__V_39_39, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_3[1]));
#line 234 "term_constr_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_errors__description_5_p_0_1));
#line 234 "term_constr_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 234 "term_constr_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__V_39_39, 3) = ((MR_Box) (transform_hlds__term_constr_errors__CallerPPId_27));
#line 234 "term_constr_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__V_39_39, 4) = ((MR_Box) (transform_hlds__term_constr_errors__PPId_32));
#line 234 "term_constr_errors.m"
                  }
#line 234 "term_constr_errors.m"
                  {
#line 234 "term_constr_errors.m"
                    mercury__require__expect_4_p_0(transform_hlds__term_constr_errors__V_39_39, (MR_String) "transform_hlds.term_constr_errors", (MR_String) "predicate \140transform_hlds.term_constr_errors.description\'/5", (MR_String) "caller outside this SCC");
                  }
#line 236 "term_constr_errors.m"
                  transform_hlds__term_constr_errors__Piece1_33 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[33]);
#line 233 "term_constr_errors.m"
                }
#line 244 "term_constr_errors.m"
              {
#line 244 "term_constr_errors.m"
                transform_hlds__term_constr_errors__CalleePiece_36 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_constr_errors__Module_3, (MR_Integer) 0, transform_hlds__term_constr_errors__CalleePPId_28);
              }
#line 2105 "transform_hlds.term_constr_errors.c"
              transform_hlds__term_constr_errors__TypeCtorInfo_108_108 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 247 "term_constr_errors.m"
              {
#line 247 "term_constr_errors.m"
                transform_hlds__term_constr_errors__V_54_54 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_108_108, transform_hlds__term_constr_errors__CalleePiece_36, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[36]));
              }
#line 247 "term_constr_errors.m"
              {
#line 247 "term_constr_errors.m"
                transform_hlds__term_constr_errors__V_51_51 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_108_108, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[37]), transform_hlds__term_constr_errors__V_54_54);
              }
#line 247 "term_constr_errors.m"
              {
#line 247 "term_constr_errors.m"
                *transform_hlds__term_constr_errors__Pieces_4 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_108_108, transform_hlds__term_constr_errors__Piece1_33, transform_hlds__term_constr_errors__V_51_51);
              }
#line 231 "term_constr_errors.m"
            }
#line 217 "term_constr_errors.m"
          else
#line 217 "term_constr_errors.m"
            if (((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 252 "term_constr_errors.m"
              {
#line 252 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__PredId_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__Piece2_69;

#line 252 "term_constr_errors.m"
                *transform_hlds__term_constr_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 261 "term_constr_errors.m"
                if ((transform_hlds__term_constr_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 262 "term_constr_errors.m"
                  {
#line 262 "term_constr_errors.m"
                    MR_Word transform_hlds__term_constr_errors__Piece2Nodot_70;

#line 263 "term_constr_errors.m"
                    {
#line 263 "term_constr_errors.m"
                      transform_hlds__term_constr_errors__Piece2Nodot_70 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(transform_hlds__term_constr_errors__Module_3, (MR_Integer) 0, transform_hlds__term_constr_errors__PredId_61);
                    }
#line 265 "term_constr_errors.m"
                    {
#line 265 "term_constr_errors.m"
                      transform_hlds__term_constr_errors__Piece2_69 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_constr_errors__Piece2Nodot_70, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[39]));
                    }
#line 262 "term_constr_errors.m"
                  }
#line 261 "term_constr_errors.m"
                else
#line 256 "term_constr_errors.m"
                  {
#line 256 "term_constr_errors.m"
                    MR_Word transform_hlds__term_constr_errors__PPId_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 256 "term_constr_errors.m"
                    MR_Word transform_hlds__term_constr_errors__SCCPredId_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__PPId_66, (MR_Integer) 0)));
#line 256 "term_constr_errors.m"
                    MR_Word transform_hlds__term_constr_errors__V_85_85;
#line 257 "term_constr_errors.m"
                    MR_Integer transform_hlds__term_constr_errors__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__PPId_66, (MR_Integer) 1)));

#line 258 "term_constr_errors.m"
                    {
#line 258 "term_constr_errors.m"
                      transform_hlds__term_constr_errors__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 258 "term_constr_errors.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__V_85_85, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_3[2]));
#line 258 "term_constr_errors.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__V_85_85, 1) = ((MR_Box) (transform_hlds__term_constr_errors__description_5_p_0_2));
#line 258 "term_constr_errors.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 258 "term_constr_errors.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__V_85_85, 3) = ((MR_Box) (transform_hlds__term_constr_errors__PredId_61));
#line 258 "term_constr_errors.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__V_85_85, 4) = ((MR_Box) (transform_hlds__term_constr_errors__SCCPredId_67));
#line 258 "term_constr_errors.m"
                    }
#line 258 "term_constr_errors.m"
                    {
#line 258 "term_constr_errors.m"
                      mercury__require__expect_4_p_0(transform_hlds__term_constr_errors__V_85_85, (MR_String) "transform_hlds.term_constr_errors", (MR_String) "predicate \140transform_hlds.term_constr_errors.description\'/5", (MR_String) "does not terminate pragma outside this SCC");
                    }
#line 260 "term_constr_errors.m"
                    transform_hlds__term_constr_errors__Piece2_69 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[41]);
#line 256 "term_constr_errors.m"
                  }
#line 267 "term_constr_errors.m"
                {
#line 267 "term_constr_errors.m"
                  *transform_hlds__term_constr_errors__Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[14]), transform_hlds__term_constr_errors__Piece2_69);
                }
#line 252 "term_constr_errors.m"
              }
#line 217 "term_constr_errors.m"
            else
#line 269 "term_constr_errors.m"
              {
#line 269 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__TypeCtorInfo_112_112;
#line 269 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__PPId_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__Name_96;
#line 269 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__V_102_102;

#line 269 "term_constr_errors.m"
                *transform_hlds__term_constr_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 270 "term_constr_errors.m"
                {
#line 270 "term_constr_errors.m"
                  transform_hlds__term_constr_errors__Name_96 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_constr_errors__Module_3, (MR_Integer) 0, transform_hlds__term_constr_errors__PPId_92);
                }
#line 2221 "transform_hlds.term_constr_errors.c"
                transform_hlds__term_constr_errors__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 272 "term_constr_errors.m"
                {
#line 272 "term_constr_errors.m"
                  transform_hlds__term_constr_errors__V_102_102 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_112_112, transform_hlds__term_constr_errors__Name_96, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[45]));
                }
#line 271 "term_constr_errors.m"
                {
#line 271 "term_constr_errors.m"
                  *transform_hlds__term_constr_errors__Pieces_4 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_112_112, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[43]), transform_hlds__term_constr_errors__V_102_102);
                }
#line 269 "term_constr_errors.m"
              }
#line 217 "term_constr_errors.m"
  }
#line 213 "term_constr_errors.m"
}

#line 196 "term_constr_errors.m"
static void MR_CALL 
transform_hlds__term_constr_errors__output_error_7_p_0(
#line 196 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
#line 196 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Single_10,
#line 196 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__ErrorNum_11,
#line 196 "term_constr_errors.m"
  MR_Integer transform_hlds__term_constr_errors__Indent_12,
#line 196 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Module_13)
#line 196 "term_constr_errors.m"
{
#line 199 "term_constr_errors.m"
  {
#line 199 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 199 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Pieces0_15;
#line 199 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Pieces_20;
#line 199 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Globals_21;
#line 200 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__V_16_16;

#line 200 "term_constr_errors.m"
    {
#line 200 "term_constr_errors.m"
      transform_hlds__term_constr_errors__description_5_p_0(transform_hlds__term_constr_errors__Error_9, transform_hlds__term_constr_errors__Single_10, transform_hlds__term_constr_errors__Module_13, &transform_hlds__term_constr_errors__Pieces0_15, &transform_hlds__term_constr_errors__V_16_16);
    }
#line 206 "term_constr_errors.m"
    if ((transform_hlds__term_constr_errors__ErrorNum_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "term_constr_errors.m"
      transform_hlds__term_constr_errors__Pieces_20 = transform_hlds__term_constr_errors__Pieces0_15;
#line 206 "term_constr_errors.m"
    else
#line 202 "term_constr_errors.m"
      {
#line 202 "term_constr_errors.m"
        MR_Integer transform_hlds__term_constr_errors__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__ErrorNum_11, (MR_Integer) 0)));
#line 202 "term_constr_errors.m"
        MR_String transform_hlds__term_constr_errors__Nstr_18;
#line 202 "term_constr_errors.m"
        MR_String transform_hlds__term_constr_errors__Preamble_19;
#line 202 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__V_24_24;
#line 202 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__V_26_26;
#line 202 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__V_30_30;

#line 203 "term_constr_errors.m"
        {
#line 203 "term_constr_errors.m"
          mercury__string__int_to_string_2_p_0(transform_hlds__term_constr_errors__N_17, &transform_hlds__term_constr_errors__Nstr_18);
        }
#line 204 "term_constr_errors.m"
        {
#line 204 "term_constr_errors.m"
          transform_hlds__term_constr_errors__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "term_constr_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_26_26, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Nstr_18));
#line 204 "term_constr_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[29])));
#line 204 "term_constr_errors.m"
        }
#line 204 "term_constr_errors.m"
        {
#line 204 "term_constr_errors.m"
          transform_hlds__term_constr_errors__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "term_constr_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_24_24, 0) = ((MR_Box) ((MR_String) "Reason "));
#line 204 "term_constr_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_24_24, 1) = ((MR_Box) (transform_hlds__term_constr_errors__V_26_26));
#line 204 "term_constr_errors.m"
        }
#line 204 "term_constr_errors.m"
        {
#line 204 "term_constr_errors.m"
          mercury__string__append_list_2_p_0(transform_hlds__term_constr_errors__V_24_24, &transform_hlds__term_constr_errors__Preamble_19);
        }
#line 205 "term_constr_errors.m"
        {
#line 205 "term_constr_errors.m"
          transform_hlds__term_constr_errors__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 205 "term_constr_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_30_30, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Preamble_19));
#line 205 "term_constr_errors.m"
        }
#line 205 "term_constr_errors.m"
        {
#line 205 "term_constr_errors.m"
          transform_hlds__term_constr_errors__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "term_constr_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Pieces_20, 0) = ((MR_Box) (transform_hlds__term_constr_errors__V_30_30));
#line 205 "term_constr_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Pieces_20, 1) = ((MR_Box) (transform_hlds__term_constr_errors__Pieces0_15));
#line 205 "term_constr_errors.m"
        }
#line 202 "term_constr_errors.m"
      }
#line 210 "term_constr_errors.m"
    {
#line 210 "term_constr_errors.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_errors__Module_13, &transform_hlds__term_constr_errors__Globals_21);
    }
#line 211 "term_constr_errors.m"
    {
#line 211 "term_constr_errors.m"
      parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_constr_errors__Globals_21, transform_hlds__term_constr_errors__Context_8, transform_hlds__term_constr_errors__Indent_12, transform_hlds__term_constr_errors__Pieces_20);
#line 211 "term_constr_errors.m"
      return;
    }
#line 199 "term_constr_errors.m"
  }
#line 196 "term_constr_errors.m"
}

#line 187 "term_constr_errors.m"
static void MR_CALL 
transform_hlds__term_constr_errors__output_errors_7_p_0(
#line 187 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
#line 187 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Single_2,
#line 187 "term_constr_errors.m"
  MR_Integer transform_hlds__term_constr_errors__ErrNum0_3,
#line 187 "term_constr_errors.m"
  MR_Integer transform_hlds__term_constr_errors__Indent_4,
#line 187 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Module_5)
#line 187 "term_constr_errors.m"
{
#line 191 "term_constr_errors.m"
  while (MR_TRUE)
#line 191 "term_constr_errors.m"
    {
#line 191 "term_constr_errors.m"
      /* tailcall optimized into a loop */
#line 191 "term_constr_errors.m"
      {
#line 191 "term_constr_errors.m"
        MR_bool transform_hlds__term_constr_errors__succeeded;

#line 191 "term_constr_errors.m"
        if ((transform_hlds__term_constr_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 191 "term_constr_errors.m"
          {
#line 191 "term_constr_errors.m"
          }
#line 191 "term_constr_errors.m"
        else
#line 192 "term_constr_errors.m"
          {
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__Errors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__V_24_24;
#line 192 "term_constr_errors.m"
            MR_Integer transform_hlds__term_constr_errors__V_26_26;
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__Context_35;
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__Error_36;
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__Pieces0_38;
#line 192 "term_constr_errors.m"
            MR_Integer transform_hlds__term_constr_errors__N_40;
#line 192 "term_constr_errors.m"
            MR_String transform_hlds__term_constr_errors__Nstr_41;
#line 192 "term_constr_errors.m"
            MR_String transform_hlds__term_constr_errors__Preamble_42;
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__Pieces_43;
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__Globals_44;
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__V_45_45;
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__V_47_47;
#line 192 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__V_51_51;
#line 200 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__V_39_39;

#line 193 "term_constr_errors.m"
            {
#line 193 "term_constr_errors.m"
              transform_hlds__term_constr_errors__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 193 "term_constr_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_24_24, 0) = ((MR_Box) (transform_hlds__term_constr_errors__ErrNum0_3));
#line 193 "term_constr_errors.m"
            }
#line 199 "term_constr_errors.m"
            transform_hlds__term_constr_errors__Context_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Error_15, (MR_Integer) 0)));
#line 199 "term_constr_errors.m"
            transform_hlds__term_constr_errors__Error_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Error_15, (MR_Integer) 1)));
#line 200 "term_constr_errors.m"
            {
#line 200 "term_constr_errors.m"
              transform_hlds__term_constr_errors__description_5_p_0(transform_hlds__term_constr_errors__Error_36, transform_hlds__term_constr_errors__Single_2, transform_hlds__term_constr_errors__Module_5, &transform_hlds__term_constr_errors__Pieces0_38, &transform_hlds__term_constr_errors__V_39_39);
            }
#line 202 "term_constr_errors.m"
            transform_hlds__term_constr_errors__N_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_24_24, (MR_Integer) 0)));
#line 203 "term_constr_errors.m"
            {
#line 203 "term_constr_errors.m"
              mercury__string__int_to_string_2_p_0(transform_hlds__term_constr_errors__N_40, &transform_hlds__term_constr_errors__Nstr_41);
            }
#line 204 "term_constr_errors.m"
            {
#line 204 "term_constr_errors.m"
              transform_hlds__term_constr_errors__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "term_constr_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_47_47, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Nstr_41));
#line 204 "term_constr_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[29])));
#line 204 "term_constr_errors.m"
            }
#line 204 "term_constr_errors.m"
            {
#line 204 "term_constr_errors.m"
              transform_hlds__term_constr_errors__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "term_constr_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_45_45, 0) = ((MR_Box) ((MR_String) "Reason "));
#line 204 "term_constr_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_45_45, 1) = ((MR_Box) (transform_hlds__term_constr_errors__V_47_47));
#line 204 "term_constr_errors.m"
            }
#line 204 "term_constr_errors.m"
            {
#line 204 "term_constr_errors.m"
              mercury__string__append_list_2_p_0(transform_hlds__term_constr_errors__V_45_45, &transform_hlds__term_constr_errors__Preamble_42);
            }
#line 205 "term_constr_errors.m"
            {
#line 205 "term_constr_errors.m"
              transform_hlds__term_constr_errors__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 205 "term_constr_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__V_51_51, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Preamble_42));
#line 205 "term_constr_errors.m"
            }
#line 205 "term_constr_errors.m"
            {
#line 205 "term_constr_errors.m"
              transform_hlds__term_constr_errors__Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "term_constr_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Pieces_43, 0) = ((MR_Box) (transform_hlds__term_constr_errors__V_51_51));
#line 205 "term_constr_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Pieces_43, 1) = ((MR_Box) (transform_hlds__term_constr_errors__Pieces0_38));
#line 205 "term_constr_errors.m"
            }
#line 210 "term_constr_errors.m"
            {
#line 210 "term_constr_errors.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_errors__Module_5, &transform_hlds__term_constr_errors__Globals_44);
            }
#line 211 "term_constr_errors.m"
            {
#line 211 "term_constr_errors.m"
              parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_constr_errors__Globals_44, transform_hlds__term_constr_errors__Context_35, transform_hlds__term_constr_errors__Indent_4, transform_hlds__term_constr_errors__Pieces_43);
            }
#line 194 "term_constr_errors.m"
            transform_hlds__term_constr_errors__V_26_26 = (transform_hlds__term_constr_errors__ErrNum0_3 + (MR_Integer) 1);
#line 194 "term_constr_errors.m"
            /* direct tailcall eliminated */
#line 194 "term_constr_errors.m"
            {
#line 194 "term_constr_errors.m"
              MR_Word transform_hlds__term_constr_errors__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_errors__Errors_16;
#line 194 "term_constr_errors.m"
              MR_Integer transform_hlds__term_constr_errors__ErrNum0__tmp_copy_3 = transform_hlds__term_constr_errors__V_26_26;

#line 194 "term_constr_errors.m"
              transform_hlds__term_constr_errors__ErrNum0_3 = transform_hlds__term_constr_errors__ErrNum0__tmp_copy_3;
#line 194 "term_constr_errors.m"
              transform_hlds__term_constr_errors__HeadVar__1_1 = transform_hlds__term_constr_errors__HeadVar__1__tmp_copy_1;
#line 194 "term_constr_errors.m"
            }
#line 194 "term_constr_errors.m"
            continue;
#line 192 "term_constr_errors.m"
          }
#line 191 "term_constr_errors.m"
      }
#line 191 "term_constr_errors.m"
      break;
#line 191 "term_constr_errors.m"
    }
#line 187 "term_constr_errors.m"
}

#line 149 "term_constr_errors.m"
static void MR_CALL 
transform_hlds__term_constr_errors__report_term_errors_5_p_0(
#line 149 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__SCC_6,
#line 149 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Errors_7,
#line 149 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Module_8)
#line 149 "term_constr_errors.m"
{
#line 152 "term_constr_errors.m"
  {
#line 152 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 152 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Context_10;
#line 152 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Pieces1_14;
#line 152 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Single_15;
#line 152 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Globals_17;
#line 160 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__PPId_11;
#line 154 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__V_25_25;

#line 153 "term_constr_errors.m"
    {
#line 153 "term_constr_errors.m"
      transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_constr_errors__SCC_6, transform_hlds__term_constr_errors__Module_8, &transform_hlds__term_constr_errors__Context_10);
    }
#line 154 "term_constr_errors.m"
    transform_hlds__term_constr_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_errors__SCC_6)) == (MR_mktag((MR_Integer) 1)));
#line 154 "term_constr_errors.m"
    if (transform_hlds__term_constr_errors__succeeded)
#line 154 "term_constr_errors.m"
      {
#line 154 "term_constr_errors.m"
        transform_hlds__term_constr_errors__PPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__SCC_6, (MR_Integer) 0)));
#line 154 "term_constr_errors.m"
        transform_hlds__term_constr_errors__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__SCC_6, (MR_Integer) 1)));
#line 154 "term_constr_errors.m"
        transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "term_constr_errors.m"
      }
#line 160 "term_constr_errors.m"
    if (transform_hlds__term_constr_errors__succeeded)
#line 155 "term_constr_errors.m"
      {
#line 155 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__ProcName_13;

#line 156 "term_constr_errors.m"
        {
#line 156 "term_constr_errors.m"
          transform_hlds__term_constr_errors__ProcName_13 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_constr_errors__Module_8, (MR_Integer) 0, transform_hlds__term_constr_errors__PPId_11);
        }
#line 158 "term_constr_errors.m"
        {
#line 158 "term_constr_errors.m"
          transform_hlds__term_constr_errors__Pieces1_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[22]), transform_hlds__term_constr_errors__ProcName_13);
        }
#line 159 "term_constr_errors.m"
        {
#line 159 "term_constr_errors.m"
          transform_hlds__term_constr_errors__Single_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 159 "term_constr_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Single_15, 0) = ((MR_Box) (transform_hlds__term_constr_errors__PPId_11));
#line 159 "term_constr_errors.m"
        }
#line 155 "term_constr_errors.m"
      }
#line 160 "term_constr_errors.m"
    else
#line 164 "term_constr_errors.m"
      {
#line 164 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__ProcNames_16;

#line 165 "term_constr_errors.m"
        {
#line 165 "term_constr_errors.m"
          transform_hlds__term_constr_errors__ProcNames_16 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(transform_hlds__term_constr_errors__Module_8, (MR_Integer) 0, transform_hlds__term_constr_errors__SCC_6);
        }
#line 167 "term_constr_errors.m"
        {
#line 167 "term_constr_errors.m"
          transform_hlds__term_constr_errors__Pieces1_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[4]), transform_hlds__term_constr_errors__ProcNames_16);
        }
#line 168 "term_constr_errors.m"
        transform_hlds__term_constr_errors__Single_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 164 "term_constr_errors.m"
      }
#line 170 "term_constr_errors.m"
    {
#line 170 "term_constr_errors.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_errors__Module_8, &transform_hlds__term_constr_errors__Globals_17);
    }
#line 175 "term_constr_errors.m"
    if ((transform_hlds__term_constr_errors__Errors_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 172 "term_constr_errors.m"
      {
#line 172 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__V_61_61;

#line 174 "term_constr_errors.m"
        {
#line 174 "term_constr_errors.m"
          transform_hlds__term_constr_errors__V_61_61 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_constr_errors__Pieces1_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[24]));
        }
#line 174 "term_constr_errors.m"
        {
#line 174 "term_constr_errors.m"
          parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_constr_errors__Globals_17, transform_hlds__term_constr_errors__Context_10, (MR_Integer) 0, transform_hlds__term_constr_errors__V_61_61);
#line 174 "term_constr_errors.m"
          return;
        }
#line 172 "term_constr_errors.m"
      }
#line 175 "term_constr_errors.m"
    else
#line 175 "term_constr_errors.m"
      {
#line 175 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Errors_7, (MR_Integer) 1)));
#line 175 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Errors_7, (MR_Integer) 0)));

#line 175 "term_constr_errors.m"
        if ((transform_hlds__term_constr_errors__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 176 "term_constr_errors.m"
          {
#line 176 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__V_52_52;

#line 178 "term_constr_errors.m"
            {
#line 178 "term_constr_errors.m"
              transform_hlds__term_constr_errors__V_52_52 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_constr_errors__Pieces1_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[26]));
            }
#line 178 "term_constr_errors.m"
            {
#line 178 "term_constr_errors.m"
              parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_constr_errors__Globals_17, transform_hlds__term_constr_errors__Context_10, (MR_Integer) 0, transform_hlds__term_constr_errors__V_52_52);
            }
#line 179 "term_constr_errors.m"
            {
#line 179 "term_constr_errors.m"
              transform_hlds__term_constr_errors__output_error_7_p_0(transform_hlds__term_constr_errors__V_72_72, transform_hlds__term_constr_errors__Single_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, transform_hlds__term_constr_errors__Module_8);
#line 179 "term_constr_errors.m"
              return;
            }
#line 176 "term_constr_errors.m"
          }
#line 175 "term_constr_errors.m"
        else
#line 181 "term_constr_errors.m"
          {
#line 181 "term_constr_errors.m"
            MR_Word transform_hlds__term_constr_errors__V_42_42;

#line 183 "term_constr_errors.m"
            {
#line 183 "term_constr_errors.m"
              transform_hlds__term_constr_errors__V_42_42 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_constr_errors__Pieces1_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_2[28]));
            }
#line 183 "term_constr_errors.m"
            {
#line 183 "term_constr_errors.m"
              parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_constr_errors__Globals_17, transform_hlds__term_constr_errors__Context_10, (MR_Integer) 0, transform_hlds__term_constr_errors__V_42_42);
            }
#line 184 "term_constr_errors.m"
            {
#line 184 "term_constr_errors.m"
              transform_hlds__term_constr_errors__output_errors_7_p_0(transform_hlds__term_constr_errors__Errors_7, transform_hlds__term_constr_errors__Single_15, (MR_Integer) 1, (MR_Integer) 0, transform_hlds__term_constr_errors__Module_8);
#line 184 "term_constr_errors.m"
              return;
            }
#line 181 "term_constr_errors.m"
          }
#line 175 "term_constr_errors.m"
      }
#line 152 "term_constr_errors.m"
  }
#line 149 "term_constr_errors.m"
}

#line 121 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__report_termination2_errors_6_p_0_3(
#line 121 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__closure_arg,
#line 121 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1)
#line 121 "term_constr_errors.m"
{
#line 121 "term_constr_errors.m"
  {
#line 121 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 121 "term_constr_errors.m"
    MR_Box transform_hlds__term_constr_errors__closure = transform_hlds__term_constr_errors__closure_arg;

#line 121 "term_constr_errors.m"
    {
#line 121 "term_constr_errors.m"
      return transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__report_termination2_errors__121__1_1_p_0(((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1));
    }
#line 121 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 121 "term_constr_errors.m"
  }
#line 121 "term_constr_errors.m"
}

#line 108 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__report_termination2_errors_6_p_0_2(
#line 108 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__closure_arg,
#line 108 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1)
#line 108 "term_constr_errors.m"
{
#line 108 "term_constr_errors.m"
  {
#line 108 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 108 "term_constr_errors.m"
    MR_Box transform_hlds__term_constr_errors__closure = transform_hlds__term_constr_errors__closure_arg;

#line 108 "term_constr_errors.m"
    {
#line 108 "term_constr_errors.m"
      return transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__report_termination2_errors__108__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1));
    }
#line 108 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 108 "term_constr_errors.m"
  }
#line 108 "term_constr_errors.m"
}

#line 95 "term_constr_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_errors__report_termination2_errors_6_p_0_1(
#line 95 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__closure_arg,
#line 95 "term_constr_errors.m"
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1)
#line 95 "term_constr_errors.m"
{
#line 95 "term_constr_errors.m"
  {
#line 95 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 95 "term_constr_errors.m"
    MR_Box transform_hlds__term_constr_errors__closure = transform_hlds__term_constr_errors__closure_arg;

#line 95 "term_constr_errors.m"
    {
#line 95 "term_constr_errors.m"
      return transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__report_termination2_errors__95__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1));
    }
#line 95 "term_constr_errors.m"
    return transform_hlds__term_constr_errors__succeeded;
#line 95 "term_constr_errors.m"
  }
#line 95 "term_constr_errors.m"
}

#line 67 "term_constr_errors.m"
void MR_CALL 
transform_hlds__term_constr_errors__report_termination2_errors_6_p_0(
#line 67 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__SCC_7,
#line 67 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__Errors_8,
#line 67 "term_constr_errors.m"
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31,
#line 67 "term_constr_errors.m"
  MR_Word * transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_32)
#line 67 "term_constr_errors.m"
{
#line 89 "term_constr_errors.m"
  {
#line 89 "term_constr_errors.m"
    MR_bool transform_hlds__term_constr_errors__succeeded;
#line 89 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__Globals_11;
#line 89 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__NormalErrors_12;
#line 89 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__VerboseErrors_13;
#line 100 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__TypeCtorInfo_55_55;
#line 100 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__IsCheckTerm_14;
#line 100 "term_constr_errors.m"
    MR_Word transform_hlds__term_constr_errors__CheckTermPPIds_19;

#line 90 "term_constr_errors.m"
    {
#line 90 "term_constr_errors.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__term_constr_errors__Globals_11);
    }
#line 91 "term_constr_errors.m"
    {
#line 91 "term_constr_errors.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_errors__Globals_11, (MR_Integer) 424, &transform_hlds__term_constr_errors__NormalErrors_12);
    }
#line 92 "term_constr_errors.m"
    {
#line 92 "term_constr_errors.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_errors__Globals_11, (MR_Integer) 425, &transform_hlds__term_constr_errors__VerboseErrors_13);
    }
#line 2859 "transform_hlds.term_constr_errors.c"
    transform_hlds__term_constr_errors__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 95 "term_constr_errors.m"
    {
#line 95 "term_constr_errors.m"
      transform_hlds__term_constr_errors__IsCheckTerm_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 95 "term_constr_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsCheckTerm_14, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_3[0]));
#line 95 "term_constr_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsCheckTerm_14, 1) = ((MR_Box) (transform_hlds__term_constr_errors__report_termination2_errors_6_p_0_1));
#line 95 "term_constr_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsCheckTerm_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 95 "term_constr_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsCheckTerm_14, 3) = ((MR_Box) (transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31));
#line 95 "term_constr_errors.m"
    }
#line 101 "term_constr_errors.m"
    {
#line 101 "term_constr_errors.m"
      transform_hlds__term_constr_errors__CheckTermPPIds_19 = mercury__list__filter_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_55_55, transform_hlds__term_constr_errors__IsCheckTerm_14, transform_hlds__term_constr_errors__SCC_7);
    }
#line 102 "term_constr_errors.m"
    {
#line 102 "term_constr_errors.m"
      transform_hlds__term_constr_errors__succeeded = mercury__list__is_not_empty_1_p_0(transform_hlds__term_constr_errors__TypeCtorInfo_55_55, transform_hlds__term_constr_errors__CheckTermPPIds_19);
    }
#line 107 "term_constr_errors.m"
    if (transform_hlds__term_constr_errors__succeeded)
#line 104 "term_constr_errors.m"
      {
#line 104 "term_constr_errors.m"
        {
#line 104 "term_constr_errors.m"
          transform_hlds__term_constr_errors__report_term_errors_5_p_0(transform_hlds__term_constr_errors__SCC_7, transform_hlds__term_constr_errors__Errors_8, transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31);
        }
#line 105 "term_constr_errors.m"
        {
#line 105 "term_constr_errors.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 106 "term_constr_errors.m"
        {
#line 106 "term_constr_errors.m"
          hlds__hlds_module__module_info_incr_errors_2_p_0(transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31, transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_32);
#line 106 "term_constr_errors.m"
          return;
        }
#line 104 "term_constr_errors.m"
      }
#line 107 "term_constr_errors.m"
    else
#line 143 "term_constr_errors.m"
      {
#line 143 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__PrintErrors_23;
#line 111 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 111 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__IsNonImported_20;
#line 111 "term_constr_errors.m"
        MR_Word transform_hlds__term_constr_errors__NonImportedPPIds_22;

#line 108 "term_constr_errors.m"
        {
#line 108 "term_constr_errors.m"
          transform_hlds__term_constr_errors__IsNonImported_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 108 "term_constr_errors.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsNonImported_20, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_3[0]));
#line 108 "term_constr_errors.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsNonImported_20, 1) = ((MR_Box) (transform_hlds__term_constr_errors__report_termination2_errors_6_p_0_2));
#line 108 "term_constr_errors.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsNonImported_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "term_constr_errors.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsNonImported_20, 3) = ((MR_Box) (transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31));
#line 108 "term_constr_errors.m"
        }
#line 112 "term_constr_errors.m"
        {
#line 112 "term_constr_errors.m"
          transform_hlds__term_constr_errors__NonImportedPPIds_22 = mercury__list__filter_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_56_56, transform_hlds__term_constr_errors__IsNonImported_20, transform_hlds__term_constr_errors__SCC_7);
        }
#line 113 "term_constr_errors.m"
        {
#line 113 "term_constr_errors.m"
          transform_hlds__term_constr_errors__succeeded = mercury__list__is_not_empty_1_p_0(transform_hlds__term_constr_errors__TypeCtorInfo_56_56, transform_hlds__term_constr_errors__NonImportedPPIds_22);
        }
#line 111 "term_constr_errors.m"
        if (transform_hlds__term_constr_errors__succeeded)
#line 117 "term_constr_errors.m"
          {
#line 117 "term_constr_errors.m"
            if ((transform_hlds__term_constr_errors__VerboseErrors_13 == (MR_Integer) 0))
#line 118 "term_constr_errors.m"
              {
#line 118 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__TypeInfo_57_57;
#line 118 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__IsNonSimple_24;
#line 118 "term_constr_errors.m"
                MR_Word transform_hlds__term_constr_errors__PrintErrors0_28;

#line 2960 "transform_hlds.term_constr_errors.c"
                transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__NormalErrors_12 == (MR_Integer) 1);
#line 118 "term_constr_errors.m"
                if (transform_hlds__term_constr_errors__succeeded)
#line 118 "term_constr_errors.m"
                  {
#line 121 "term_constr_errors.m"
                    transform_hlds__term_constr_errors__IsNonSimple_24 = (MR_Word) &transform_hlds__term_constr_errors_scalar_common_1[1];
#line 2968 "transform_hlds.term_constr_errors.c"
                    transform_hlds__term_constr_errors__TypeInfo_57_57 = (MR_Word) &transform_hlds__term_constr_errors_scalar_common_1[0];
#line 125 "term_constr_errors.m"
                    {
#line 125 "term_constr_errors.m"
                      transform_hlds__term_constr_errors__PrintErrors0_28 = mercury__list__filter_2_f_0(transform_hlds__term_constr_errors__TypeInfo_57_57, transform_hlds__term_constr_errors__IsNonSimple_24, transform_hlds__term_constr_errors__Errors_8);
                    }
#line 131 "term_constr_errors.m"
                    if ((transform_hlds__term_constr_errors__PrintErrors0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "term_constr_errors.m"
                      transform_hlds__term_constr_errors__PrintErrors_23 = transform_hlds__term_constr_errors__Errors_8;
#line 131 "term_constr_errors.m"
                    else
#line 133 "term_constr_errors.m"
                      transform_hlds__term_constr_errors__PrintErrors_23 = transform_hlds__term_constr_errors__PrintErrors0_28;
#line 131 "term_constr_errors.m"
                    transform_hlds__term_constr_errors__succeeded = MR_TRUE;
#line 118 "term_constr_errors.m"
                  }
#line 118 "term_constr_errors.m"
              }
#line 117 "term_constr_errors.m"
            else
#line 116 "term_constr_errors.m"
              {
#line 116 "term_constr_errors.m"
                transform_hlds__term_constr_errors__PrintErrors_23 = transform_hlds__term_constr_errors__Errors_8;
#line 116 "term_constr_errors.m"
                transform_hlds__term_constr_errors__succeeded = MR_TRUE;
#line 116 "term_constr_errors.m"
              }
#line 117 "term_constr_errors.m"
          }
#line 143 "term_constr_errors.m"
        if (transform_hlds__term_constr_errors__succeeded)
#line 141 "term_constr_errors.m"
          {
#line 141 "term_constr_errors.m"
            transform_hlds__term_constr_errors__report_term_errors_5_p_0(transform_hlds__term_constr_errors__SCC_7, transform_hlds__term_constr_errors__PrintErrors_23, transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31);
          }
#line 143 "term_constr_errors.m"
        else
#line 143 "term_constr_errors.m"
          {
#line 143 "term_constr_errors.m"
          }
#line 143 "term_constr_errors.m"
        *transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__term_constr_errors__STATE_VARIABLE_ModuleInfo_0_31;
#line 143 "term_constr_errors.m"
      }
#line 89 "term_constr_errors.m"
  }
#line 67 "term_constr_errors.m"
}

void mercury__transform_hlds__term_constr_errors__init(void)
{
}

void mercury__transform_hlds__term_constr_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_error_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_errors_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0);
}

void mercury__transform_hlds__term_constr_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_errors. */
