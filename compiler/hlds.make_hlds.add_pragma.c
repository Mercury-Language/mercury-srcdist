/*
** Automatically generated from `add_pragma.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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


/* :- module hlds.make_hlds.add_pragma. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_pragma__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma.mih"


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
#include "transform_hlds.mih"
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
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_tags.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.fact_table.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_foreign_enum.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"



#line 487 "add_pragma.m"
struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s {
#line 487 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__ConflictList_3;
#line 490 "add_pragma.m"
  MR_bool hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded;
#line 491 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Markers_13;
#line 496 "add_pragma.m"
  jmp_buf hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__commit_0;
#line 496 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Marker_15;
#line 496 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__conv1_Marker_15;
#line 487 "add_pragma.m"
};


#line 173 "hlds.make_hlds.add_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 176 "hlds.make_hlds.add_pragma.c"
static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 179 "hlds.make_hlds.add_pragma.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
#line 182 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 184 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2);

#line 187 "hlds.make_hlds.add_pragma.c"
static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
#line 190 "hlds.make_hlds.add_pragma.c"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 192 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 194 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3);

#line 508 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__V_31_31,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_3,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_4,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5,
#line 508 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6,
#line 508 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__7_7);

#line 452 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_p_0(
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__V_43_43,
#line 452 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_13,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_14,
#line 452 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_15,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_16,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_17,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_18,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31,
#line 452 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32,
#line 452 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PredIds_21,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33,
#line 452 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);

#line 1199 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
#line 1199 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1199 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1199 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2);

#line 1143 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3(
#line 1143 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1143 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1143 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1143 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1143 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1143 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1143 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6);

#line 1139 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2(
#line 1139 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1139 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1139 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1139 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1139 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1139 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1139 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6);

#line 1135 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1(
#line 1135 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1135 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1135 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1135 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1135 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1135 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1135 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6);

#line 593 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1(
#line 593 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 593 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 593 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 593 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3);

#line 496 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_1(
#line 496 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

#line 496 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_3(
#line 496 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

#line 496 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_2(
#line 496 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

#line 496 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_4(
#line 496 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[190][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[27][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[1][13];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][6];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[190][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: illegal use of pragma"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[11])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[6])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[11])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[11])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Don\'t use --no-type-layout to disable them."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration requires type_ctor_layout structures."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "unknown predicate in"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Internal compiler error:"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "ambiguous predicate in"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[30])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "that supports concurrent execution."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled in a grade"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "that uses conservative garbage collection."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "that uses double precision floats."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "do not contain the grade modifier"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Grades that use double precision floats"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "that supports memoisation."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "that supports executing conjuntions in parallel."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "that uses single precision floats."))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "contain the grade modifier"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Grades that use single precision floats"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the strict sequential semantics."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled using"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "that supports trailing."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[78])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the grade modifiers"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Grades that support trailing contain"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[3])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate/function name."))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[87])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the same visibility as the type definition."))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration must have"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[92])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "reserve_tag"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[94])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[96])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not a discriminated union type."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declarations for the same type."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "reserved_tag"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "warning: multiple"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declarations must always be exported."))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration must always be abstract exported."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The type in a"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "expected arity is"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "structure_sharing."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 137 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 138 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 139 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 140 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 142 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 143 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration conflicts with previous pragma for"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for exported predicate or function"))
  },
  /* row 148 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 149 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 150 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[55])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 152 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[16])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[151])))
  },
  /* row 153 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 154 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[68])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 157 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[20])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 159 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[83])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 161 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[160])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[98])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[106])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: undefined type"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "reserve_tag"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 170 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[25])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 171 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[26])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Duplicate"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declarations for"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "predicate specification"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "within the"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: predicate"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "one of"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has the wrong arity."))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Actual arity is"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate name"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate name"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "structure_sharing"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[27][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "exceptions"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "mm_tabling_info"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "trailing_info"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "spf"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "trseg"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "tr"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[14])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[16])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[19])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[21])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[34])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[37])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[44])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[47])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[58])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[61])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[64])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[72])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[75])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "pragma fact_table"))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_1[164]))
  },
  /* row 24 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_1[166]))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[110])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[115])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_required_feature_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 1495 "hlds.make_hlds.add_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1503 "hlds.make_hlds.add_pragma.c"
static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1513 "hlds.make_hlds.add_pragma.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_add_marker_pred_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma",
  (MR_String) "add_marker_pred_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1530 "hlds.make_hlds.add_pragma.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
#line 1533 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1535 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2)
#line 1537 "hlds.make_hlds.add_pragma.c"
{
#line 1539 "hlds.make_hlds.add_pragma.c"
  {
#line 1541 "hlds.make_hlds.add_pragma.c"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 1544 "hlds.make_hlds.add_pragma.c"
    {
#line 1546 "hlds.make_hlds.add_pragma.c"
      hlds__make_hlds__add_pragma__succeeded = hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2));
    }
#line 1549 "hlds.make_hlds.add_pragma.c"
    return hlds__make_hlds__add_pragma__succeeded;
#line 1551 "hlds.make_hlds.add_pragma.c"
  }
#line 1553 "hlds.make_hlds.add_pragma.c"
}

#line 1556 "hlds.make_hlds.add_pragma.c"
static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
#line 1559 "hlds.make_hlds.add_pragma.c"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1561 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1563 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3)
#line 1565 "hlds.make_hlds.add_pragma.c"
{
#line 1567 "hlds.make_hlds.add_pragma.c"
  {
#line 1569 "hlds.make_hlds.add_pragma.c"
    MR_Word hlds__make_hlds__add_pragma__conv0_HeadVar__1_1;

#line 1572 "hlds.make_hlds.add_pragma.c"
    {
#line 1574 "hlds.make_hlds.add_pragma.c"
      hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(&hlds__make_hlds__add_pragma__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_3));
    }
#line 1577 "hlds.make_hlds.add_pragma.c"
    *hlds__make_hlds__add_pragma__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_HeadVar__1_1));
#line 1579 "hlds.make_hlds.add_pragma.c"
  }
#line 1581 "hlds.make_hlds.add_pragma.c"
}

#line 508 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__V_31_31,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_3,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_4,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5,
#line 508 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6,
#line 508 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__7_7)
#line 508 "add_pragma.m"
{
#line 512 "add_pragma.m"
  {
#line 512 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 512 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "add_pragma.m"
      {
#line 512 "add_pragma.m"
        *hlds__make_hlds__add_pragma__HeadVar__7_7 = (MR_Integer) 0;
#line 512 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6 = hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5;
#line 512 "add_pragma.m"
      }
#line 512 "add_pragma.m"
    else
#line 514 "add_pragma.m"
      {
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_21;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredInfo_22;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus0_23;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus1_24;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Markers0_36;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Markers_37;
#line 515 "add_pragma.m"
        MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_21;

#line 515 "add_pragma.m"
        {
#line 515 "add_pragma.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_29_29, hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
        }
#line 515 "add_pragma.m"
        hlds__make_hlds__add_pragma__PredInfo0_21 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
#line 534 "add_pragma.m"
        {
#line 534 "add_pragma.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_21, &hlds__make_hlds__add_pragma__Markers0_36);
        }
#line 535 "add_pragma.m"
        {
#line 535 "add_pragma.m"
          hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pragma__V_31_31, hlds__make_hlds__add_pragma__Markers0_36, &hlds__make_hlds__add_pragma__Markers_37);
        }
#line 536 "add_pragma.m"
        {
#line 536 "add_pragma.m"
          hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pragma__Markers_37, hlds__make_hlds__add_pragma__PredInfo0_21, &hlds__make_hlds__add_pragma__PredInfo_22);
        }
#line 518 "add_pragma.m"
        {
#line 518 "add_pragma.m"
          hlds__make_hlds__add_pragma__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(hlds__make_hlds__add_pragma__PredInfo_22);
        }
#line 518 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 518 "add_pragma.m"
          {
#line 519 "add_pragma.m"
            hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__MustBeExported_4 == (MR_Integer) 1);
#line 518 "add_pragma.m"
            if (hlds__make_hlds__add_pragma__succeeded)
#line 518 "add_pragma.m"
              {
#line 520 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 520 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 518 "add_pragma.m"
              }
#line 518 "add_pragma.m"
          }
#line 523 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 522 "add_pragma.m"
          hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 1;
#line 523 "add_pragma.m"
        else
#line 524 "add_pragma.m"
          hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 0;
#line 526 "add_pragma.m"
        {
#line 526 "add_pragma.m"
          mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_29_29, hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_22)), hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, &hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27);
        }
#line 527 "add_pragma.m"
        {
#line 527 "add_pragma.m"
          hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(hlds__make_hlds__add_pragma__V_31_31, hlds__make_hlds__add_pragma__PredIds_15, hlds__make_hlds__add_pragma__Status_3, hlds__make_hlds__add_pragma__MustBeExported_4, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6, &hlds__make_hlds__add_pragma__WrongStatus1_24);
        }
#line 529 "add_pragma.m"
        {
#line 529 "add_pragma.m"
          mercury__bool__or_3_p_0(hlds__make_hlds__add_pragma__WrongStatus0_23, hlds__make_hlds__add_pragma__WrongStatus1_24, hlds__make_hlds__add_pragma__HeadVar__7_7);
#line 529 "add_pragma.m"
          return;
        }
#line 514 "add_pragma.m"
      }
#line 512 "add_pragma.m"
  }
#line 508 "add_pragma.m"
}

#line 452 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_p_0(
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__V_43_43,
#line 452 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_13,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_14,
#line 452 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_15,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_16,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_17,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_18,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31,
#line 452 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32,
#line 452 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PredIds_21,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33,
#line 452 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34)
#line 452 "add_pragma.m"
{
#line 459 "add_pragma.m"
  {
#line 459 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 460 "add_pragma.m"
    {
#line 460 "add_pragma.m"
      hlds__make_hlds__add_pragma__get_matching_pred_ids_4_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__PredIds_21);
    }
#line 477 "add_pragma.m"
    if ((*hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "add_pragma.m"
      {
#line 478 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__DescPieces_30;
#line 478 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_35_35;

#line 479 "add_pragma.m"
        {
#line 479 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 479 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
#line 479 "add_pragma.m"
        }
#line 479 "add_pragma.m"
        {
#line 479 "add_pragma.m"
          hlds__make_hlds__add_pragma__DescPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_35_35));
#line 479 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[146])));
#line 479 "add_pragma.m"
        }
#line 480 "add_pragma.m"
        {
#line 480 "add_pragma.m"
          hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__Context_18, hlds__make_hlds__add_pragma__DescPieces_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);
        }
#line 478 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31;
#line 478 "add_pragma.m"
      }
#line 477 "add_pragma.m"
    else
#line 462 "add_pragma.m"
      {
#line 462 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredTable0_25;
#line 462 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds0_26;
#line 462 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds_27;
#line 462 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus_28;
#line 462 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredTable_29;

#line 463 "add_pragma.m"
        {
#line 463 "add_pragma.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pragma__PredTable0_25);
        }
#line 464 "add_pragma.m"
        {
#line 464 "add_pragma.m"
          hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__Preds0_26);
        }
#line 466 "add_pragma.m"
        {
#line 466 "add_pragma.m"
          hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(hlds__make_hlds__add_pragma__V_43_43, *hlds__make_hlds__add_pragma__PredIds_21, hlds__make_hlds__add_pragma__Status_16, hlds__make_hlds__add_pragma__MustBeExported_17, hlds__make_hlds__add_pragma__Preds0_26, &hlds__make_hlds__add_pragma__Preds_27, &hlds__make_hlds__add_pragma__WrongStatus_28);
        }
#line 471 "add_pragma.m"
#line 471 "add_pragma.m"
        switch (hlds__make_hlds__add_pragma__WrongStatus_28) {
#line 471 "add_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 471 "add_pragma.m"
          case (MR_Integer) 0:
#line 472 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33;
#line 471 "add_pragma.m"
            break;
#line 471 "add_pragma.m"
          case (MR_Integer) 1:
#line 556 "add_pragma.m"
            {
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Pieces_51;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Msg_52;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Spec_53;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_56_56;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_57_57;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_58_58;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_61_61;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_70_70;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_71_71;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_75_75;

#line 557 "add_pragma.m"
              {
#line 557 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
#line 557 "add_pragma.m"
              }
#line 559 "add_pragma.m"
              {
#line 559 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_14));
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_15));
#line 559 "add_pragma.m"
              }
#line 559 "add_pragma.m"
              {
#line 559 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 559 "add_pragma.m"
              }
#line 559 "add_pragma.m"
              {
#line 559 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[39])));
#line 559 "add_pragma.m"
              }
#line 558 "add_pragma.m"
              {
#line 558 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[147])));
#line 558 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_61_61));
#line 558 "add_pragma.m"
              }
#line 557 "add_pragma.m"
              {
#line 557 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_57_57));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_58_58));
#line 557 "add_pragma.m"
              }
#line 557 "add_pragma.m"
              {
#line 557 "add_pragma.m"
                hlds__make_hlds__add_pragma__Pieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_56_56));
#line 557 "add_pragma.m"
              }
#line 561 "add_pragma.m"
              {
#line 561 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 561 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_51));
#line 561 "add_pragma.m"
              }
#line 561 "add_pragma.m"
              {
#line 561 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_71_71));
#line 561 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "add_pragma.m"
              }
#line 561 "add_pragma.m"
              {
#line 561 "add_pragma.m"
                hlds__make_hlds__add_pragma__Msg_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_18));
#line 561 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 561 "add_pragma.m"
              }
#line 562 "add_pragma.m"
              {
#line 562 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_52));
#line 562 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "add_pragma.m"
              }
#line 562 "add_pragma.m"
              {
#line 562 "add_pragma.m"
                hlds__make_hlds__add_pragma__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 562 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 562 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_53, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_75_75));
#line 562 "add_pragma.m"
              }
#line 563 "add_pragma.m"
              {
#line 563 "add_pragma.m"
                MR_Word base;
#line 563 "add_pragma.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = base;
#line 563 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_53));
#line 563 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33));
#line 563 "add_pragma.m"
              }
#line 556 "add_pragma.m"
            }
#line 471 "add_pragma.m"
            break;
#line 471 "add_pragma.m"
        }
#line 475 "add_pragma.m"
        {
#line 475 "add_pragma.m"
          hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pragma__Preds_27, hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__PredTable_29);
        }
#line 476 "add_pragma.m"
        {
#line 476 "add_pragma.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pragma__PredTable_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32);
#line 476 "add_pragma.m"
          return;
        }
#line 462 "add_pragma.m"
      }
#line 459 "add_pragma.m"
  }
#line 452 "add_pragma.m"
}

#line 444 "add_pragma.m"
MR_bool MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_101_114_95_109_117_115_116_95_98_101_95_101_120_112_111_114_116_101_100_95_95_91_49_93_95_48_1_p_0(void)
#line 444 "add_pragma.m"
{
#line 447 "add_pragma.m"
  {
#line 447 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 447 "add_pragma.m"
    {
#line 447 "add_pragma.m"
      return hlds__make_hlds__add_pragma__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 447 "add_pragma.m"
    return hlds__make_hlds__add_pragma__succeeded;
#line 447 "add_pragma.m"
  }
#line 444 "add_pragma.m"
}

#line 382 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(
#line 382 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MMTablingInfo_7,
#line 382 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26,
#line 382 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27,
#line 382 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28,
#line 382 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29)
#line 382 "add_pragma.m"
{
#line 386 "add_pragma.m"
  {
#line 386 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 386 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__MMTablingInfo_7, (MR_Integer) 0)));
#line 386 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TablingStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__MMTablingInfo_7, (MR_Integer) 1)));
#line 386 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
#line 386 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
#line 386 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
#line 386 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
#line 386 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
#line 386 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

#line 391 "add_pragma.m"
    {
#line 391 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_pragma__Preds_17);
    }
#line 392 "add_pragma.m"
    {
#line 392 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
#line 401 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26;
#line 401 "add_pragma.m"
    else
#line 401 "add_pragma.m"
      {
#line 401 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
#line 401 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

#line 401 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "add_pragma.m"
          {
#line 395 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TablingInfo0_20;
#line 395 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_21;
#line 395 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TablingInfo_22;
#line 395 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_33_33;
#line 395 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_34_34;

#line 396 "add_pragma.m"
            {
#line 396 "add_pragma.m"
              hlds__hlds_module__module_info_get_mm_tabling_info_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_pragma__TablingInfo0_20);
            }
#line 397 "add_pragma.m"
            {
#line 397 "add_pragma.m"
              hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_21, hlds__make_hlds__add_pragma__ModeNum_16);
            }
#line 398 "add_pragma.m"
            {
#line 398 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_40_40));
#line 398 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_21));
#line 398 "add_pragma.m"
            }
#line 398 "add_pragma.m"
            {
#line 398 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TablingStatus_12));
#line 398 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 398 "add_pragma.m"
            }
#line 398 "add_pragma.m"
            {
#line 398 "add_pragma.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_mm_tabling_info_0, ((MR_Box) (hlds__make_hlds__add_pragma__V_33_33)), ((MR_Box) (hlds__make_hlds__add_pragma__V_34_34)), hlds__make_hlds__add_pragma__TablingInfo0_20, &hlds__make_hlds__add_pragma__TablingInfo_22);
            }
#line 400 "add_pragma.m"
            {
#line 400 "add_pragma.m"
              hlds__hlds_module__module_info_set_mm_tabling_info_3_p_0(hlds__make_hlds__add_pragma__TablingInfo_22, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27);
            }
#line 395 "add_pragma.m"
          }
#line 401 "add_pragma.m"
        else
#line 403 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26;
#line 401 "add_pragma.m"
      }
#line 386 "add_pragma.m"
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28;
#line 386 "add_pragma.m"
  }
#line 382 "add_pragma.m"
}

#line 352 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(
#line 352 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__TrailingInfo_7,
#line 352 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26,
#line 352 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27,
#line 352 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28,
#line 352 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29)
#line 352 "add_pragma.m"
{
#line 356 "add_pragma.m"
  {
#line 356 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 356 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TrailingInfo_7, (MR_Integer) 0)));
#line 356 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TrailingStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TrailingInfo_7, (MR_Integer) 1)));
#line 356 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
#line 356 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
#line 356 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
#line 356 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
#line 356 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
#line 356 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

#line 361 "add_pragma.m"
    {
#line 361 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_pragma__Preds_17);
    }
#line 362 "add_pragma.m"
    {
#line 362 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
#line 371 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26;
#line 371 "add_pragma.m"
    else
#line 371 "add_pragma.m"
      {
#line 371 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
#line 371 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

#line 371 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "add_pragma.m"
          {
#line 365 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TrailingMap0_20;
#line 365 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_21;
#line 365 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TrailingMap_22;
#line 365 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_33_33;
#line 365 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_34_34;

#line 366 "add_pragma.m"
            {
#line 366 "add_pragma.m"
              hlds__hlds_module__module_info_get_trailing_info_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_pragma__TrailingMap0_20);
            }
#line 367 "add_pragma.m"
            {
#line 367 "add_pragma.m"
              hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_21, hlds__make_hlds__add_pragma__ModeNum_16);
            }
#line 368 "add_pragma.m"
            {
#line 368 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 368 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_40_40));
#line 368 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_21));
#line 368 "add_pragma.m"
            }
#line 368 "add_pragma.m"
            {
#line 368 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 368 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TrailingStatus_12));
#line 368 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 368 "add_pragma.m"
            }
#line 368 "add_pragma.m"
            {
#line 368 "add_pragma.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_trailing_info_0, ((MR_Box) (hlds__make_hlds__add_pragma__V_33_33)), ((MR_Box) (hlds__make_hlds__add_pragma__V_34_34)), hlds__make_hlds__add_pragma__TrailingMap0_20, &hlds__make_hlds__add_pragma__TrailingMap_22);
            }
#line 370 "add_pragma.m"
            {
#line 370 "add_pragma.m"
              hlds__hlds_module__module_info_set_trailing_info_3_p_0(hlds__make_hlds__add_pragma__TrailingMap_22, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27);
            }
#line 365 "add_pragma.m"
          }
#line 371 "add_pragma.m"
        else
#line 373 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26;
#line 371 "add_pragma.m"
      }
#line 356 "add_pragma.m"
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28;
#line 356 "add_pragma.m"
  }
#line 352 "add_pragma.m"
}

#line 321 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(
#line 321 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ExceptionsInfo_7,
#line 321 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27,
#line 321 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28,
#line 321 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_29,
#line 321 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30)
#line 321 "add_pragma.m"
{
#line 325 "add_pragma.m"
  {
#line 325 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 325 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExceptionsInfo_7, (MR_Integer) 0)));
#line 325 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ThrowStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExceptionsInfo_7, (MR_Integer) 1)));
#line 325 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
#line 325 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
#line 325 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
#line 325 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
#line 325 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
#line 325 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

#line 329 "add_pragma.m"
    {
#line 329 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_pragma__Preds_17);
    }
#line 330 "add_pragma.m"
    {
#line 330 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
#line 341 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27;
#line 341 "add_pragma.m"
    else
#line 341 "add_pragma.m"
      {
#line 341 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
#line 341 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

#line 341 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "add_pragma.m"
          {
#line 333 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ExceptionInfo0_20;
#line 333 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_21;
#line 333 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcExceptionInfo_22;
#line 333 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ExceptionInfo_23;
#line 333 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_35_35;

#line 334 "add_pragma.m"
            {
#line 334 "add_pragma.m"
              hlds__hlds_module__module_info_get_exception_info_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_pragma__ExceptionInfo0_20);
            }
#line 336 "add_pragma.m"
            {
#line 336 "add_pragma.m"
              hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_21, hlds__make_hlds__add_pragma__ModeNum_16);
            }
#line 337 "add_pragma.m"
            {
#line 337 "add_pragma.m"
              hlds__make_hlds__add_pragma__ProcExceptionInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ProcExceptionInfo_22, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__ThrowStatus_12));
#line 337 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ProcExceptionInfo_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "add_pragma.m"
            }
#line 338 "add_pragma.m"
            {
#line 338 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_40_40));
#line 338 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_21));
#line 338 "add_pragma.m"
            }
#line 338 "add_pragma.m"
            {
#line 338 "add_pragma.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_exception_info_0, ((MR_Box) (hlds__make_hlds__add_pragma__V_35_35)), ((MR_Box) (hlds__make_hlds__add_pragma__ProcExceptionInfo_22)), hlds__make_hlds__add_pragma__ExceptionInfo0_20, &hlds__make_hlds__add_pragma__ExceptionInfo_23);
            }
#line 340 "add_pragma.m"
            {
#line 340 "add_pragma.m"
              hlds__hlds_module__module_info_set_exception_info_3_p_0(hlds__make_hlds__add_pragma__ExceptionInfo_23, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28);
            }
#line 333 "add_pragma.m"
          }
#line 341 "add_pragma.m"
        else
#line 343 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27;
#line 341 "add_pragma.m"
      }
#line 325 "add_pragma.m"
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_29;
#line 325 "add_pragma.m"
  }
#line 321 "add_pragma.m"
}

#line 449 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(
#line 449 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 449 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__2_2,
#line 449 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__3_3)
#line 449 "add_pragma.m"
{
#line 449 "add_pragma.m"
  {
#line 449 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 449 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar1_4 = hlds__make_hlds__add_pragma__HeadVar__2_2;
#line 449 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar2_5 = hlds__make_hlds__add_pragma__HeadVar__3_3;

#line 449 "add_pragma.m"
    {
#line 449 "add_pragma.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_pragma_scalar_common_2[0], hlds__make_hlds__add_pragma__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__add_pragma__Cast_HeadVar1_4)), ((MR_Box) (hlds__make_hlds__add_pragma__Cast_HeadVar2_5)));
#line 449 "add_pragma.m"
      return;
    }
#line 449 "add_pragma.m"
  }
#line 449 "add_pragma.m"
}

#line 449 "add_pragma.m"
MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(
#line 449 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 449 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__2_2)
#line 449 "add_pragma.m"
{
#line 449 "add_pragma.m"
  {
#line 449 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 449 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar1_3 = hlds__make_hlds__add_pragma__HeadVar__1_1;
#line 449 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar2_4 = hlds__make_hlds__add_pragma__HeadVar__2_2;

#line 449 "add_pragma.m"
    {
#line 449 "add_pragma.m"
      return hlds__make_hlds__add_pragma__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__make_hlds__add_pragma__Cast_HeadVar1_3, (MR_Word) hlds__make_hlds__add_pragma__Cast_HeadVar2_4);
    }
#line 449 "add_pragma.m"
    return hlds__make_hlds__add_pragma__succeeded;
#line 449 "add_pragma.m"
  }
#line 449 "add_pragma.m"
}

#line 1459 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_structure_reuse_6_p_0(
#line 1459 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ReuseInfo_7,
#line 1459 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_8,
#line 1459 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39,
#line 1459 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40,
#line 1459 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41,
#line 1459 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42)
#line 1459 "add_pragma.m"
{
#line 1463 "add_pragma.m"
  {
#line 1463 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1463 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 0)));
#line 1463 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 1)));
#line 1463 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 2)));
#line 1463 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybeReuseDomain_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 3)));

#line 1468 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__MaybeReuseDomain_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "add_pragma.m"
      {
#line 1467 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1467 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1467 "add_pragma.m"
      }
#line 1468 "add_pragma.m"
    else
#line 1469 "add_pragma.m"
      {
#line 1469 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ReuseDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeReuseDomain_14, (MR_Integer) 0)));
#line 1469 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 0)));
#line 1469 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ModeList_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 1)));
#line 1469 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 2)));
#line 1469 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds_19;
#line 1469 "add_pragma.m"
        MR_Integer hlds__make_hlds__add_pragma__Arity_20;
#line 1469 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredIds_21;

#line 1471 "add_pragma.m"
        {
#line 1471 "add_pragma.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__Preds_19);
        }
#line 1472 "add_pragma.m"
        {
#line 1472 "add_pragma.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_17, &hlds__make_hlds__add_pragma__Arity_20);
        }
#line 1473 "add_pragma.m"
        {
#line 1473 "add_pragma.m"
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_18, hlds__make_hlds__add_pragma__SymName_16, hlds__make_hlds__add_pragma__Arity_20, &hlds__make_hlds__add_pragma__PredIds_21);
        }
#line 1482 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1476 "add_pragma.m"
          {
#line 1476 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1476 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1476 "add_pragma.m"
          }
#line 1482 "add_pragma.m"
        else
#line 1482 "add_pragma.m"
          {
#line 1482 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 1)));
#line 1482 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 0)));

#line 1482 "add_pragma.m"
            if ((hlds__make_hlds__add_pragma__V_105_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1483 "add_pragma.m"
              {
#line 1483 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_101_101;
#line 1483 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_102_102;
#line 1483 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_103_103;
#line 1483 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_104_104;
#line 1483 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredTable0_23;
#line 1483 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredInfo0_24;
#line 1483 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcTable0_25;
#line 1483 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcList_26;
#line 1485 "add_pragma.m"
                MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_24;
#line 1499 "add_pragma.m"
                MR_Integer hlds__make_hlds__add_pragma__ProcId_27;

#line 1484 "add_pragma.m"
                {
#line 1484 "add_pragma.m"
                  hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__PredTable0_23);
                }
#line 2624 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2626 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1485 "add_pragma.m"
                {
#line 1485 "add_pragma.m"
                  mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, hlds__make_hlds__add_pragma__PredTable0_23, ((MR_Box) (hlds__make_hlds__add_pragma__V_106_106)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
                }
#line 1485 "add_pragma.m"
                hlds__make_hlds__add_pragma__PredInfo0_24 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
#line 1486 "add_pragma.m"
                {
#line 1486 "add_pragma.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__ProcTable0_25);
                }
#line 2640 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_103_103 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 2642 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1487 "add_pragma.m"
                {
#line 1487 "add_pragma.m"
                  mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcList_26);
                }
#line 1489 "add_pragma.m"
                {
#line 1489 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_26, hlds__make_hlds__add_pragma__ModeList_17, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__ProcId_27);
                }
#line 1499 "add_pragma.m"
                if (hlds__make_hlds__add_pragma__succeeded)
#line 1492 "add_pragma.m"
                  {
#line 1492 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcInfo0_28;
#line 1492 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcInfo_29;
#line 1492 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcTable_30;
#line 1492 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__PredInfo_31;
#line 1492 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__PredTable_32;
#line 1492 "add_pragma.m"
                    MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_28;

#line 1492 "add_pragma.m"
                    {
#line 1492 "add_pragma.m"
                      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_27)), &hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
                    }
#line 1492 "add_pragma.m"
                    hlds__make_hlds__add_pragma__ProcInfo0_28 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
#line 1493 "add_pragma.m"
                    {
#line 1493 "add_pragma.m"
                      hlds__hlds_pred__proc_info_set_imported_structure_reuse_5_p_0(hlds__make_hlds__add_pragma__HeadVars_12, hlds__make_hlds__add_pragma__Types_13, hlds__make_hlds__add_pragma__ReuseDomain_15, hlds__make_hlds__add_pragma__ProcInfo0_28, &hlds__make_hlds__add_pragma__ProcInfo_29);
                    }
#line 1495 "add_pragma.m"
                    {
#line 1495 "add_pragma.m"
                      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_27)), ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_29)), hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcTable_30);
                    }
#line 1496 "add_pragma.m"
                    {
#line 1496 "add_pragma.m"
                      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_30, hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__PredInfo_31);
                    }
#line 1497 "add_pragma.m"
                    {
#line 1497 "add_pragma.m"
                      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, ((MR_Box) (hlds__make_hlds__add_pragma__V_106_106)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_31)), hlds__make_hlds__add_pragma__PredTable0_23, &hlds__make_hlds__add_pragma__PredTable_32);
                    }
#line 1498 "add_pragma.m"
                    {
#line 1498 "add_pragma.m"
                      hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_32, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40);
                    }
#line 1492 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1492 "add_pragma.m"
                  }
#line 1499 "add_pragma.m"
                else
#line 1503 "add_pragma.m"
                  {
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Pieces_33;
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Msg_34;
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Spec_35;
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_74_74;
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_77_77;
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_80_80;
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_81_81;
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_82_82;
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_89_89;
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_90_90;
#line 1503 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_94_94;

#line 1502 "add_pragma.m"
                    {
#line 1502 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1502 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
#line 1502 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
#line 1502 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
#line 1502 "add_pragma.m"
                    }
#line 1502 "add_pragma.m"
                    {
#line 1502 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1502 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1502 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_82_82));
#line 1502 "add_pragma.m"
                    }
#line 1502 "add_pragma.m"
                    {
#line 1502 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1502 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_81_81));
#line 1502 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
#line 1502 "add_pragma.m"
                    }
#line 1501 "add_pragma.m"
                    {
#line 1501 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[185])));
#line 1501 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_80_80));
#line 1501 "add_pragma.m"
                    }
#line 1500 "add_pragma.m"
                    {
#line 1500 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[189])));
#line 1500 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1500 "add_pragma.m"
                    }
#line 1500 "add_pragma.m"
                    {
#line 1500 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
#line 1500 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_74_74));
#line 1500 "add_pragma.m"
                    }
#line 1504 "add_pragma.m"
                    {
#line 1504 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_33));
#line 1504 "add_pragma.m"
                    }
#line 1504 "add_pragma.m"
                    {
#line 1504 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_90_90));
#line 1504 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1504 "add_pragma.m"
                    }
#line 1504 "add_pragma.m"
                    {
#line 1504 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1504 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_89_89));
#line 1504 "add_pragma.m"
                    }
#line 1506 "add_pragma.m"
                    {
#line 1506 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_34));
#line 1506 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "add_pragma.m"
                    }
#line 1505 "add_pragma.m"
                    {
#line 1505 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1505 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1505 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_94_94));
#line 1505 "add_pragma.m"
                    }
#line 1507 "add_pragma.m"
                    {
#line 1507 "add_pragma.m"
                      MR_Word base;
#line 1507 "add_pragma.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "add_pragma.m"
                      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
#line 1507 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_35));
#line 1507 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
#line 1507 "add_pragma.m"
                    }
#line 1503 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1503 "add_pragma.m"
                  }
#line 1483 "add_pragma.m"
              }
#line 1482 "add_pragma.m"
            else
#line 1510 "add_pragma.m"
              {
#line 1510 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_47_47;
#line 1510 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 1510 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 1510 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 1510 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 1510 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_67_67;
#line 1510 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Pieces_97;
#line 1510 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_98;
#line 1510 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_99;

#line 1512 "add_pragma.m"
                {
#line 1512 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1512 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
#line 1512 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
#line 1512 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
#line 1512 "add_pragma.m"
                }
#line 1512 "add_pragma.m"
                {
#line 1512 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1512 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1512 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 1512 "add_pragma.m"
                }
#line 1512 "add_pragma.m"
                {
#line 1512 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1512 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 1512 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[134])));
#line 1512 "add_pragma.m"
                }
#line 1511 "add_pragma.m"
                {
#line 1511 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[186])));
#line 1511 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_47_47));
#line 1511 "add_pragma.m"
                }
#line 1515 "add_pragma.m"
                {
#line 1515 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_97));
#line 1515 "add_pragma.m"
                }
#line 1515 "add_pragma.m"
                {
#line 1515 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 1515 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1515 "add_pragma.m"
                }
#line 1515 "add_pragma.m"
                {
#line 1515 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1515 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 1515 "add_pragma.m"
                }
#line 1516 "add_pragma.m"
                {
#line 1516 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_98));
#line 1516 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1516 "add_pragma.m"
                }
#line 1516 "add_pragma.m"
                {
#line 1516 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1516 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1516 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1516 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_67_67));
#line 1516 "add_pragma.m"
                }
#line 1517 "add_pragma.m"
                {
#line 1517 "add_pragma.m"
                  MR_Word base;
#line 1517 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
#line 1517 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_99));
#line 1517 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
#line 1517 "add_pragma.m"
                }
#line 1510 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1510 "add_pragma.m"
              }
#line 1482 "add_pragma.m"
          }
#line 1469 "add_pragma.m"
      }
#line 1463 "add_pragma.m"
  }
#line 1459 "add_pragma.m"
}

#line 1394 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_structure_sharing_6_p_0(
#line 1394 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__SharingInfo_7,
#line 1394 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_8,
#line 1394 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39,
#line 1394 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40,
#line 1394 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41,
#line 1394 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42)
#line 1394 "add_pragma.m"
{
#line 1398 "add_pragma.m"
  {
#line 1398 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1398 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 0)));
#line 1398 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 1)));
#line 1398 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 2)));
#line 1398 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybeSharingDomain_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 3)));

#line 1403 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__MaybeSharingDomain_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1402 "add_pragma.m"
      {
#line 1402 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1402 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1402 "add_pragma.m"
      }
#line 1403 "add_pragma.m"
    else
#line 1404 "add_pragma.m"
      {
#line 1404 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__SharingDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeSharingDomain_14, (MR_Integer) 0)));
#line 1404 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 0)));
#line 1404 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ModeList_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 1)));
#line 1404 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 2)));
#line 1404 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds_19;
#line 1404 "add_pragma.m"
        MR_Integer hlds__make_hlds__add_pragma__Arity_20;
#line 1404 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredIds_21;

#line 1406 "add_pragma.m"
        {
#line 1406 "add_pragma.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__Preds_19);
        }
#line 1407 "add_pragma.m"
        {
#line 1407 "add_pragma.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_17, &hlds__make_hlds__add_pragma__Arity_20);
        }
#line 1408 "add_pragma.m"
        {
#line 1408 "add_pragma.m"
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_18, hlds__make_hlds__add_pragma__SymName_16, hlds__make_hlds__add_pragma__Arity_20, &hlds__make_hlds__add_pragma__PredIds_21);
        }
#line 1417 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1411 "add_pragma.m"
          {
#line 1411 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1411 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1411 "add_pragma.m"
          }
#line 1417 "add_pragma.m"
        else
#line 1417 "add_pragma.m"
          {
#line 1417 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 1)));
#line 1417 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 0)));

#line 1417 "add_pragma.m"
            if ((hlds__make_hlds__add_pragma__V_105_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1418 "add_pragma.m"
              {
#line 1418 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_101_101;
#line 1418 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_102_102;
#line 1418 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_103_103;
#line 1418 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_104_104;
#line 1418 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredTable0_23;
#line 1418 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredInfo0_24;
#line 1418 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcTable0_25;
#line 1418 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcList_26;
#line 1420 "add_pragma.m"
                MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_24;
#line 1434 "add_pragma.m"
                MR_Integer hlds__make_hlds__add_pragma__ProcId_27;

#line 1419 "add_pragma.m"
                {
#line 1419 "add_pragma.m"
                  hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__PredTable0_23);
                }
#line 3131 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3133 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1420 "add_pragma.m"
                {
#line 1420 "add_pragma.m"
                  mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, hlds__make_hlds__add_pragma__PredTable0_23, ((MR_Box) (hlds__make_hlds__add_pragma__V_106_106)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
                }
#line 1420 "add_pragma.m"
                hlds__make_hlds__add_pragma__PredInfo0_24 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
#line 1421 "add_pragma.m"
                {
#line 1421 "add_pragma.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__ProcTable0_25);
                }
#line 3147 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_103_103 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3149 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1422 "add_pragma.m"
                {
#line 1422 "add_pragma.m"
                  mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcList_26);
                }
#line 1424 "add_pragma.m"
                {
#line 1424 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_26, hlds__make_hlds__add_pragma__ModeList_17, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__ProcId_27);
                }
#line 1434 "add_pragma.m"
                if (hlds__make_hlds__add_pragma__succeeded)
#line 1427 "add_pragma.m"
                  {
#line 1427 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcInfo0_28;
#line 1427 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcInfo_29;
#line 1427 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcTable_30;
#line 1427 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__PredInfo_31;
#line 1427 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__PredTable_32;
#line 1427 "add_pragma.m"
                    MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_28;

#line 1427 "add_pragma.m"
                    {
#line 1427 "add_pragma.m"
                      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_27)), &hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
                    }
#line 1427 "add_pragma.m"
                    hlds__make_hlds__add_pragma__ProcInfo0_28 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
#line 1428 "add_pragma.m"
                    {
#line 1428 "add_pragma.m"
                      hlds__hlds_pred__proc_info_set_imported_structure_sharing_5_p_0(hlds__make_hlds__add_pragma__HeadVars_12, hlds__make_hlds__add_pragma__Types_13, hlds__make_hlds__add_pragma__SharingDomain_15, hlds__make_hlds__add_pragma__ProcInfo0_28, &hlds__make_hlds__add_pragma__ProcInfo_29);
                    }
#line 1430 "add_pragma.m"
                    {
#line 1430 "add_pragma.m"
                      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_27)), ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_29)), hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcTable_30);
                    }
#line 1431 "add_pragma.m"
                    {
#line 1431 "add_pragma.m"
                      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_30, hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__PredInfo_31);
                    }
#line 1432 "add_pragma.m"
                    {
#line 1432 "add_pragma.m"
                      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, ((MR_Box) (hlds__make_hlds__add_pragma__V_106_106)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_31)), hlds__make_hlds__add_pragma__PredTable0_23, &hlds__make_hlds__add_pragma__PredTable_32);
                    }
#line 1433 "add_pragma.m"
                    {
#line 1433 "add_pragma.m"
                      hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_32, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40);
                    }
#line 1427 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1427 "add_pragma.m"
                  }
#line 1434 "add_pragma.m"
                else
#line 1438 "add_pragma.m"
                  {
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Pieces_33;
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Msg_34;
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Spec_35;
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_74_74;
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_77_77;
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_80_80;
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_81_81;
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_82_82;
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_89_89;
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_90_90;
#line 1438 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_94_94;

#line 1437 "add_pragma.m"
                    {
#line 1437 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
#line 1437 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
#line 1437 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
#line 1437 "add_pragma.m"
                    }
#line 1437 "add_pragma.m"
                    {
#line 1437 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1437 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_82_82));
#line 1437 "add_pragma.m"
                    }
#line 1437 "add_pragma.m"
                    {
#line 1437 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_81_81));
#line 1437 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
#line 1437 "add_pragma.m"
                    }
#line 1436 "add_pragma.m"
                    {
#line 1436 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[185])));
#line 1436 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_80_80));
#line 1436 "add_pragma.m"
                    }
#line 1435 "add_pragma.m"
                    {
#line 1435 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[188])));
#line 1435 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1435 "add_pragma.m"
                    }
#line 1435 "add_pragma.m"
                    {
#line 1435 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
#line 1435 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_74_74));
#line 1435 "add_pragma.m"
                    }
#line 1439 "add_pragma.m"
                    {
#line 1439 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_33));
#line 1439 "add_pragma.m"
                    }
#line 1439 "add_pragma.m"
                    {
#line 1439 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_90_90));
#line 1439 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1439 "add_pragma.m"
                    }
#line 1439 "add_pragma.m"
                    {
#line 1439 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1439 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_89_89));
#line 1439 "add_pragma.m"
                    }
#line 1441 "add_pragma.m"
                    {
#line 1441 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_34));
#line 1441 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1441 "add_pragma.m"
                    }
#line 1440 "add_pragma.m"
                    {
#line 1440 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1440 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1440 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1440 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_94_94));
#line 1440 "add_pragma.m"
                    }
#line 1442 "add_pragma.m"
                    {
#line 1442 "add_pragma.m"
                      MR_Word base;
#line 1442 "add_pragma.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "add_pragma.m"
                      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
#line 1442 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_35));
#line 1442 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
#line 1442 "add_pragma.m"
                    }
#line 1438 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1438 "add_pragma.m"
                  }
#line 1418 "add_pragma.m"
              }
#line 1417 "add_pragma.m"
            else
#line 1445 "add_pragma.m"
              {
#line 1445 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_47_47;
#line 1445 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 1445 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 1445 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 1445 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 1445 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_67_67;
#line 1445 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Pieces_97;
#line 1445 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_98;
#line 1445 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_99;

#line 1447 "add_pragma.m"
                {
#line 1447 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1447 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
#line 1447 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
#line 1447 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
#line 1447 "add_pragma.m"
                }
#line 1447 "add_pragma.m"
                {
#line 1447 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1447 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 1447 "add_pragma.m"
                }
#line 1447 "add_pragma.m"
                {
#line 1447 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 1447 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[131])));
#line 1447 "add_pragma.m"
                }
#line 1446 "add_pragma.m"
                {
#line 1446 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[186])));
#line 1446 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_47_47));
#line 1446 "add_pragma.m"
                }
#line 1450 "add_pragma.m"
                {
#line 1450 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_97));
#line 1450 "add_pragma.m"
                }
#line 1450 "add_pragma.m"
                {
#line 1450 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 1450 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1450 "add_pragma.m"
                }
#line 1450 "add_pragma.m"
                {
#line 1450 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1450 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 1450 "add_pragma.m"
                }
#line 1452 "add_pragma.m"
                {
#line 1452 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_98));
#line 1452 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1452 "add_pragma.m"
                }
#line 1451 "add_pragma.m"
                {
#line 1451 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1451 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1451 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1451 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_67_67));
#line 1451 "add_pragma.m"
                }
#line 1453 "add_pragma.m"
                {
#line 1453 "add_pragma.m"
                  MR_Word base;
#line 1453 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
#line 1453 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_99));
#line 1453 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
#line 1453 "add_pragma.m"
                }
#line 1445 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1445 "add_pragma.m"
              }
#line 1417 "add_pragma.m"
          }
#line 1404 "add_pragma.m"
      }
#line 1398 "add_pragma.m"
  }
#line 1394 "add_pragma.m"
}

#line 1324 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination2_info_6_p_0(
#line 1324 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Term2Info_7,
#line 1324 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_8,
#line 1324 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40,
#line 1324 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41,
#line 1324 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42,
#line 1324 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43)
#line 1324 "add_pragma.m"
{
#line 1328 "add_pragma.m"
  {
#line 1328 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1328 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 0)));
#line 1328 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaSuccessArgSizeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 1)));
#line 1328 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaFailureArgSizeInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 2)));
#line 1328 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 3)));
#line 1328 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 0)));
#line 1328 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ModeList_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 1)));
#line 1328 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 2)));
#line 1328 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_18;
#line 1328 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_19;
#line 1328 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_20;

#line 1333 "add_pragma.m"
    {
#line 1333 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__Preds_18);
    }
#line 1334 "add_pragma.m"
    {
#line 1334 "add_pragma.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_16, &hlds__make_hlds__add_pragma__Arity_19);
    }
#line 1335 "add_pragma.m"
    {
#line 1335 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_18, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_17, hlds__make_hlds__add_pragma__SymName_15, hlds__make_hlds__add_pragma__Arity_19, &hlds__make_hlds__add_pragma__PredIds_20);
    }
#line 1344 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1338 "add_pragma.m"
      {
#line 1338 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
#line 1338 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
#line 1338 "add_pragma.m"
      }
#line 1344 "add_pragma.m"
    else
#line 1344 "add_pragma.m"
      {
#line 1344 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_20, (MR_Integer) 1)));
#line 1344 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_20, (MR_Integer) 0)));

#line 1344 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1345 "add_pragma.m"
          {
#line 1345 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_106_106;
#line 1345 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_107_107;
#line 1345 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_108_108;
#line 1345 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_109_109;
#line 1345 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredTable0_22;
#line 1345 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredInfo0_23;
#line 1345 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcTable0_24;
#line 1345 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcList_25;
#line 1347 "add_pragma.m"
            MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_23;
#line 1372 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_26;

#line 1346 "add_pragma.m"
            {
#line 1346 "add_pragma.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__PredTable0_22);
            }
#line 3621 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_106_106 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3623 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_107_107 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1347 "add_pragma.m"
            {
#line 1347 "add_pragma.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__TypeCtorInfo_107_107, hlds__make_hlds__add_pragma__PredTable0_22, ((MR_Box) (hlds__make_hlds__add_pragma__V_111_111)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_23);
            }
#line 1347 "add_pragma.m"
            hlds__make_hlds__add_pragma__PredInfo0_23 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_23);
#line 1348 "add_pragma.m"
            {
#line 1348 "add_pragma.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_23, &hlds__make_hlds__add_pragma__ProcTable0_24);
            }
#line 3637 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_108_108 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3639 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_109_109 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1349 "add_pragma.m"
            {
#line 1349 "add_pragma.m"
              mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_108_108, hlds__make_hlds__add_pragma__TypeCtorInfo_109_109, hlds__make_hlds__add_pragma__ProcTable0_24, &hlds__make_hlds__add_pragma__ProcList_25);
            }
#line 1351 "add_pragma.m"
            {
#line 1351 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_25, hlds__make_hlds__add_pragma__ModeList_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__ProcId_26);
            }
#line 1372 "add_pragma.m"
            if (hlds__make_hlds__add_pragma__succeeded)
#line 1354 "add_pragma.m"
              {
#line 1354 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcInfo0_27;
#line 1354 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__MaybeTerminationInfo_28;
#line 1354 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcInfo_30;
#line 1354 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcTable_31;
#line 1354 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredInfo_32;
#line 1354 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredTable_33;
#line 1354 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_72_72;
#line 1354 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_73_73;
#line 1354 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_74_74;
#line 1354 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_75_75;
#line 1354 "add_pragma.m"
                MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_27;

#line 1354 "add_pragma.m"
                {
#line 1354 "add_pragma.m"
                  mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_108_108, hlds__make_hlds__add_pragma__TypeCtorInfo_109_109, hlds__make_hlds__add_pragma__ProcTable0_24, ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_26)), &hlds__make_hlds__add_pragma__conv1_ProcInfo0_27);
                }
#line 1354 "add_pragma.m"
                hlds__make_hlds__add_pragma__ProcInfo0_27 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_27);
#line 1355 "add_pragma.m"
                {
#line 1355 "add_pragma.m"
                  transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_14, hlds__make_hlds__add_pragma__Context_8, &hlds__make_hlds__add_pragma__MaybeTerminationInfo_28);
                }
#line 1359 "add_pragma.m"
                {
#line 1359 "add_pragma.m"
                  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(hlds__make_hlds__add_pragma__ProcInfo0_27, &hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_72_72);
                }
#line 1361 "add_pragma.m"
                {
#line 1361 "add_pragma.m"
                  hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_73_73 = transform_hlds__term_constr_main__f_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_f_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_72_72, hlds__make_hlds__add_pragma__MaybePragmaSuccessArgSizeInfo_12);
                }
#line 1362 "add_pragma.m"
                {
#line 1362 "add_pragma.m"
                  hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_74_74 = transform_hlds__term_constr_main__f_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_f_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_73_73, hlds__make_hlds__add_pragma__MaybePragmaFailureArgSizeInfo_13);
                }
#line 1363 "add_pragma.m"
                {
#line 1363 "add_pragma.m"
                  hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_75_75 = transform_hlds__term_constr_main__f_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_f_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_74_74, hlds__make_hlds__add_pragma__MaybeTerminationInfo_28);
                }
#line 1365 "add_pragma.m"
                {
#line 1365 "add_pragma.m"
                  hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_75_75, hlds__make_hlds__add_pragma__ProcInfo0_27, &hlds__make_hlds__add_pragma__ProcInfo_30);
                }
#line 1368 "add_pragma.m"
                {
#line 1368 "add_pragma.m"
                  mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_108_108, hlds__make_hlds__add_pragma__TypeCtorInfo_109_109, ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_26)), ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_30)), hlds__make_hlds__add_pragma__ProcTable0_24, &hlds__make_hlds__add_pragma__ProcTable_31);
                }
#line 1369 "add_pragma.m"
                {
#line 1369 "add_pragma.m"
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_31, hlds__make_hlds__add_pragma__PredInfo0_23, &hlds__make_hlds__add_pragma__PredInfo_32);
                }
#line 1370 "add_pragma.m"
                {
#line 1370 "add_pragma.m"
                  mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__TypeCtorInfo_107_107, ((MR_Box) (hlds__make_hlds__add_pragma__V_111_111)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_32)), hlds__make_hlds__add_pragma__PredTable0_22, &hlds__make_hlds__add_pragma__PredTable_33);
                }
#line 1371 "add_pragma.m"
                {
#line 1371 "add_pragma.m"
                  hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1354 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
#line 1354 "add_pragma.m"
              }
#line 1372 "add_pragma.m"
            else
#line 1376 "add_pragma.m"
              {
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Pieces_34;
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_35;
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_36;
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_79_79;
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_82_82;
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_85_85;
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_86_86;
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_87_87;
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_94_94;
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_95_95;
#line 1376 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_99_99;

#line 1375 "add_pragma.m"
                {
#line 1375 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1375 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_17));
#line 1375 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_87_87, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_15));
#line 1375 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_87_87, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_19));
#line 1375 "add_pragma.m"
                }
#line 1375 "add_pragma.m"
                {
#line 1375 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1375 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_87_87));
#line 1375 "add_pragma.m"
                }
#line 1375 "add_pragma.m"
                {
#line 1375 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_86_86));
#line 1375 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
#line 1375 "add_pragma.m"
                }
#line 1374 "add_pragma.m"
                {
#line 1374 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1374 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[185])));
#line 1374 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_85_85));
#line 1374 "add_pragma.m"
                }
#line 1373 "add_pragma.m"
                {
#line 1373 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[187])));
#line 1373 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_82_82));
#line 1373 "add_pragma.m"
                }
#line 1373 "add_pragma.m"
                {
#line 1373 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
#line 1373 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_79_79));
#line 1373 "add_pragma.m"
                }
#line 1377 "add_pragma.m"
                {
#line 1377 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1377 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_34));
#line 1377 "add_pragma.m"
                }
#line 1377 "add_pragma.m"
                {
#line 1377 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_95_95));
#line 1377 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1377 "add_pragma.m"
                }
#line 1377 "add_pragma.m"
                {
#line 1377 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1377 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1377 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_94_94));
#line 1377 "add_pragma.m"
                }
#line 1378 "add_pragma.m"
                {
#line 1378 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_35));
#line 1378 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1378 "add_pragma.m"
                }
#line 1378 "add_pragma.m"
                {
#line 1378 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1378 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1378 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1378 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_99_99));
#line 1378 "add_pragma.m"
                }
#line 1379 "add_pragma.m"
                {
#line 1379 "add_pragma.m"
                  MR_Word base;
#line 1379 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
#line 1379 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_36));
#line 1379 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
#line 1379 "add_pragma.m"
                }
#line 1376 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
#line 1376 "add_pragma.m"
              }
#line 1345 "add_pragma.m"
          }
#line 1344 "add_pragma.m"
        else
#line 1382 "add_pragma.m"
          {
#line 1382 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 1382 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 1382 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_50_50;
#line 1382 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 1382 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_64_64;
#line 1382 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1382 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_102;
#line 1382 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_103;
#line 1382 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Spec_104;

#line 1384 "add_pragma.m"
            {
#line 1384 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1384 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_17));
#line 1384 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_15));
#line 1384 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_19));
#line 1384 "add_pragma.m"
            }
#line 1384 "add_pragma.m"
            {
#line 1384 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1384 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_50_50));
#line 1384 "add_pragma.m"
            }
#line 1384 "add_pragma.m"
            {
#line 1384 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 1384 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[128])));
#line 1384 "add_pragma.m"
            }
#line 1383 "add_pragma.m"
            {
#line 1383 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[186])));
#line 1383 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_102, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 1383 "add_pragma.m"
            }
#line 1387 "add_pragma.m"
            {
#line 1387 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1387 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_102));
#line 1387 "add_pragma.m"
            }
#line 1387 "add_pragma.m"
            {
#line 1387 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_64_64));
#line 1387 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1387 "add_pragma.m"
            }
#line 1387 "add_pragma.m"
            {
#line 1387 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1387 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_103, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1387 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_103, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 1387 "add_pragma.m"
            }
#line 1388 "add_pragma.m"
            {
#line 1388 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_103));
#line 1388 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1388 "add_pragma.m"
            }
#line 1388 "add_pragma.m"
            {
#line 1388 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1388 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1388 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1388 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_104, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1388 "add_pragma.m"
            }
#line 1389 "add_pragma.m"
            {
#line 1389 "add_pragma.m"
              MR_Word base;
#line 1389 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
#line 1389 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_104));
#line 1389 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
#line 1389 "add_pragma.m"
            }
#line 1382 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
#line 1382 "add_pragma.m"
          }
#line 1344 "add_pragma.m"
      }
#line 1328 "add_pragma.m"
  }
#line 1324 "add_pragma.m"
}

#line 1258 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(
#line 1258 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__TermInfo_7,
#line 1258 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_8,
#line 1258 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40,
#line 1258 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41,
#line 1258 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42,
#line 1258 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43)
#line 1258 "add_pragma.m"
{
#line 1262 "add_pragma.m"
  {
#line 1262 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1262 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TermInfo_7, (MR_Integer) 0)));
#line 1262 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaArgSizeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TermInfo_7, (MR_Integer) 1)));
#line 1262 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TermInfo_7, (MR_Integer) 2)));
#line 1262 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 0)));
#line 1262 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ModeList_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 1)));
#line 1262 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 2)));
#line 1262 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
#line 1262 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_18;
#line 1262 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_19;

#line 1266 "add_pragma.m"
    {
#line 1266 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__Preds_17);
    }
#line 1267 "add_pragma.m"
    {
#line 1267 "add_pragma.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_15, &hlds__make_hlds__add_pragma__Arity_18);
    }
#line 1268 "add_pragma.m"
    {
#line 1268 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_16, hlds__make_hlds__add_pragma__SymName_14, hlds__make_hlds__add_pragma__Arity_18, &hlds__make_hlds__add_pragma__PredIds_19);
    }
#line 1277 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1271 "add_pragma.m"
      {
#line 1271 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
#line 1271 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
#line 1271 "add_pragma.m"
      }
#line 1277 "add_pragma.m"
    else
#line 1277 "add_pragma.m"
      {
#line 1277 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_19, (MR_Integer) 1)));
#line 1277 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_19, (MR_Integer) 0)));

#line 1277 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_107_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "add_pragma.m"
          {
#line 1278 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_103_103;
#line 1278 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_104_104;
#line 1278 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_105_105;
#line 1278 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_106_106;
#line 1278 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredTable0_21;
#line 1278 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredInfo0_22;
#line 1278 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcTable0_23;
#line 1278 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcList_24;
#line 1280 "add_pragma.m"
            MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_22;
#line 1300 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_25;

#line 1279 "add_pragma.m"
            {
#line 1279 "add_pragma.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__PredTable0_21);
            }
#line 4142 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_103_103 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4144 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1280 "add_pragma.m"
            {
#line 1280 "add_pragma.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__PredTable0_21, ((MR_Box) (hlds__make_hlds__add_pragma__V_108_108)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_22);
            }
#line 1280 "add_pragma.m"
            hlds__make_hlds__add_pragma__PredInfo0_22 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_22);
#line 1281 "add_pragma.m"
            {
#line 1281 "add_pragma.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_22, &hlds__make_hlds__add_pragma__ProcTable0_23);
            }
#line 4158 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_105_105 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4160 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_106_106 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1282 "add_pragma.m"
            {
#line 1282 "add_pragma.m"
              mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_105_105, hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__ProcTable0_23, &hlds__make_hlds__add_pragma__ProcList_24);
            }
#line 1284 "add_pragma.m"
            {
#line 1284 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_24, hlds__make_hlds__add_pragma__ModeList_15, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__ProcId_25);
            }
#line 1300 "add_pragma.m"
            if (hlds__make_hlds__add_pragma__succeeded)
#line 1288 "add_pragma.m"
              {
#line 1288 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__MaybeArgSizeInfo_26;
#line 1288 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__MaybeTerminationInfo_27;
#line 1288 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcInfo0_28;
#line 1288 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcInfo1_29;
#line 1288 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcInfo_30;
#line 1288 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcTable_31;
#line 1288 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredInfo_32;
#line 1288 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredTable_33;
#line 1291 "add_pragma.m"
                MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_28;

#line 1287 "add_pragma.m"
                {
#line 1287 "add_pragma.m"
                  transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaArgSizeInfo_12, hlds__make_hlds__add_pragma__Context_8, &hlds__make_hlds__add_pragma__MaybeArgSizeInfo_26);
                }
#line 1289 "add_pragma.m"
                {
#line 1289 "add_pragma.m"
                  transform_hlds__term_util__add_context_to_termination_info_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_13, hlds__make_hlds__add_pragma__Context_8, &hlds__make_hlds__add_pragma__MaybeTerminationInfo_27);
                }
#line 1291 "add_pragma.m"
                {
#line 1291 "add_pragma.m"
                  mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_105_105, hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__ProcTable0_23, ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_25)), &hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
                }
#line 1291 "add_pragma.m"
                hlds__make_hlds__add_pragma__ProcInfo0_28 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
#line 1292 "add_pragma.m"
                {
#line 1292 "add_pragma.m"
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(hlds__make_hlds__add_pragma__MaybeArgSizeInfo_26, hlds__make_hlds__add_pragma__ProcInfo0_28, &hlds__make_hlds__add_pragma__ProcInfo1_29);
                }
#line 1294 "add_pragma.m"
                {
#line 1294 "add_pragma.m"
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(hlds__make_hlds__add_pragma__MaybeTerminationInfo_27, hlds__make_hlds__add_pragma__ProcInfo1_29, &hlds__make_hlds__add_pragma__ProcInfo_30);
                }
#line 1296 "add_pragma.m"
                {
#line 1296 "add_pragma.m"
                  mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_105_105, hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_25)), ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_30)), hlds__make_hlds__add_pragma__ProcTable0_23, &hlds__make_hlds__add_pragma__ProcTable_31);
                }
#line 1297 "add_pragma.m"
                {
#line 1297 "add_pragma.m"
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_31, hlds__make_hlds__add_pragma__PredInfo0_22, &hlds__make_hlds__add_pragma__PredInfo_32);
                }
#line 1298 "add_pragma.m"
                {
#line 1298 "add_pragma.m"
                  mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, ((MR_Box) (hlds__make_hlds__add_pragma__V_108_108)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_32)), hlds__make_hlds__add_pragma__PredTable0_21, &hlds__make_hlds__add_pragma__PredTable_33);
                }
#line 1299 "add_pragma.m"
                {
#line 1299 "add_pragma.m"
                  hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1288 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
#line 1288 "add_pragma.m"
              }
#line 1300 "add_pragma.m"
            else
#line 1301 "add_pragma.m"
              {
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Pieces_34;
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_35;
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_36;
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_76_76;
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_79_79;
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_82_82;
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_83_83;
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_84_84;
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_91_91;
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_92_92;
#line 1301 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_96_96;

#line 1301 "add_pragma.m"
                {
#line 1301 "add_pragma.m"
                  hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1304 "add_pragma.m"
                {
#line 1304 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1304 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_16));
#line 1304 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_14));
#line 1304 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_84_84, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_18));
#line 1304 "add_pragma.m"
                }
#line 1304 "add_pragma.m"
                {
#line 1304 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1304 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_84_84));
#line 1304 "add_pragma.m"
                }
#line 1304 "add_pragma.m"
                {
#line 1304 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_83_83));
#line 1304 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
#line 1304 "add_pragma.m"
                }
#line 1303 "add_pragma.m"
                {
#line 1303 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[185])));
#line 1303 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_82_82));
#line 1303 "add_pragma.m"
                }
#line 1302 "add_pragma.m"
                {
#line 1302 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[184])));
#line 1302 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_79_79));
#line 1302 "add_pragma.m"
                }
#line 1302 "add_pragma.m"
                {
#line 1302 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
#line 1302 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_76_76));
#line 1302 "add_pragma.m"
                }
#line 1306 "add_pragma.m"
                {
#line 1306 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_92_92, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_34));
#line 1306 "add_pragma.m"
                }
#line 1306 "add_pragma.m"
                {
#line 1306 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_92_92));
#line 1306 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "add_pragma.m"
                }
#line 1306 "add_pragma.m"
                {
#line 1306 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1306 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_91_91));
#line 1306 "add_pragma.m"
                }
#line 1308 "add_pragma.m"
                {
#line 1308 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_35));
#line 1308 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1308 "add_pragma.m"
                }
#line 1307 "add_pragma.m"
                {
#line 1307 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1307 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1307 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1307 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_96_96));
#line 1307 "add_pragma.m"
                }
#line 1309 "add_pragma.m"
                {
#line 1309 "add_pragma.m"
                  MR_Word base;
#line 1309 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
#line 1309 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_36));
#line 1309 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
#line 1309 "add_pragma.m"
                }
#line 1301 "add_pragma.m"
              }
#line 1278 "add_pragma.m"
          }
#line 1277 "add_pragma.m"
        else
#line 1312 "add_pragma.m"
          {
#line 1312 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 1312 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 1312 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_50_50;
#line 1312 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 1312 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_64_64;
#line 1312 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1312 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_99;
#line 1312 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_100;
#line 1312 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Spec_101;

#line 1314 "add_pragma.m"
            {
#line 1314 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_16));
#line 1314 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_14));
#line 1314 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_18));
#line 1314 "add_pragma.m"
            }
#line 1314 "add_pragma.m"
            {
#line 1314 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1314 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_50_50));
#line 1314 "add_pragma.m"
            }
#line 1314 "add_pragma.m"
            {
#line 1314 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 1314 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[125])));
#line 1314 "add_pragma.m"
            }
#line 1313 "add_pragma.m"
            {
#line 1313 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[186])));
#line 1313 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_99, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 1313 "add_pragma.m"
            }
#line 1317 "add_pragma.m"
            {
#line 1317 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1317 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_99));
#line 1317 "add_pragma.m"
            }
#line 1317 "add_pragma.m"
            {
#line 1317 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_64_64));
#line 1317 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1317 "add_pragma.m"
            }
#line 1317 "add_pragma.m"
            {
#line 1317 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1317 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1317 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_100, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 1317 "add_pragma.m"
            }
#line 1318 "add_pragma.m"
            {
#line 1318 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_100));
#line 1318 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1318 "add_pragma.m"
            }
#line 1318 "add_pragma.m"
            {
#line 1318 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1318 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1318 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1318 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_101, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1318 "add_pragma.m"
            }
#line 1319 "add_pragma.m"
            {
#line 1319 "add_pragma.m"
              MR_Word base;
#line 1319 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
#line 1319 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_101));
#line 1319 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
#line 1319 "add_pragma.m"
            }
#line 1312 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
#line 1312 "add_pragma.m"
          }
#line 1277 "add_pragma.m"
      }
#line 1262 "add_pragma.m"
  }
#line 1258 "add_pragma.m"
}

#line 1248 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(
#line 1248 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ModuleInfo_4,
#line 1248 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredId_5,
#line 1248 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__Piece_6)
#line 1248 "add_pragma.m"
{
#line 1251 "add_pragma.m"
  {
#line 1251 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1251 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredInfo_7;
#line 1251 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__OrigArity_8;

#line 1252 "add_pragma.m"
    {
#line 1252 "add_pragma.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pragma__ModuleInfo_4, hlds__make_hlds__add_pragma__PredId_5, &hlds__make_hlds__add_pragma__PredInfo_7);
    }
#line 1253 "add_pragma.m"
    {
#line 1253 "add_pragma.m"
      hlds__make_hlds__add_pragma__OrigArity_8 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__PredInfo_7);
    }
#line 1254 "add_pragma.m"
    {
#line 1254 "add_pragma.m"
      MR_Word base;
#line 1254 "add_pragma.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "add_pragma.m"
      *hlds__make_hlds__add_pragma__Piece_6 = base;
#line 1254 "add_pragma.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1254 "add_pragma.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__OrigArity_8));
#line 1254 "add_pragma.m"
    }
#line 1251 "add_pragma.m"
  }
#line 1248 "add_pragma.m"
}

#line 1199 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
#line 1199 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1199 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1199 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2)
#line 1199 "add_pragma.m"
{
#line 1199 "add_pragma.m"
  {
#line 1199 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 1199 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv0_Piece_6;

#line 1199 "add_pragma.m"
    {
#line 1199 "add_pragma.m"
      hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv0_Piece_6);
    }
#line 1199 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_Piece_6));
#line 1199 "add_pragma.m"
  }
#line 1199 "add_pragma.m"
}

#line 1170 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(
#line 1170 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ModuleInfo_11,
#line 1170 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_12,
#line 1170 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__TypeCtor_13,
#line 1170 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__Kind_14,
#line 1170 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredNameArity_15,
#line 1170 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PredId_16,
#line 1170 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41,
#line 1170 "add_pragma.m"
  MR_Integer * hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_42,
#line 1170 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43,
#line 1170 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44)
#line 1170 "add_pragma.m"
{
#line 1175 "add_pragma.m"
  {
#line 1175 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1175 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredicateTable_19;
#line 1175 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredName_20;
#line 1175 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__PredArity_21;
#line 1175 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_22;

#line 1176 "add_pragma.m"
    {
#line 1176 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__ModuleInfo_11, &hlds__make_hlds__add_pragma__PredicateTable_19);
    }
#line 1177 "add_pragma.m"
    hlds__make_hlds__add_pragma__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_15, (MR_Integer) 0)));
#line 1177 "add_pragma.m"
    hlds__make_hlds__add_pragma__PredArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_15, (MR_Integer) 1)));
#line 1178 "add_pragma.m"
    {
#line 1178 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_20, hlds__make_hlds__add_pragma__PredArity_21, &hlds__make_hlds__add_pragma__PredIds_22);
    }
#line 1229 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1181 "add_pragma.m"
      {
#line 1181 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__LooseArityPredIds_23;
#line 1181 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Spec_28;

#line 1182 "add_pragma.m"
        {
#line 1182 "add_pragma.m"
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(hlds__make_hlds__add_pragma__PredicateTable_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_20, &hlds__make_hlds__add_pragma__LooseArityPredIds_23);
        }
#line 1197 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__LooseArityPredIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1185 "add_pragma.m"
          {
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
#line 1185 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__TypeArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_26;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_27;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_168_168;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_169_169;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_170_170;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_171_171;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_172_172;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_175_175;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_178_178;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_181_181;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_184_184;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_185_185;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_186_186;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_187_187;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_190_190;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_192_192;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_195_195;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_196_196;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_197_197;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_204_204;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_205_205;
#line 1185 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_209_209;

#line 1187 "add_pragma.m"
            {
#line 1187 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1187 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_169_169, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41));
#line 1187 "add_pragma.m"
            }
#line 1188 "add_pragma.m"
            {
#line 1188 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_171_171, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Kind_14));
#line 1188 "add_pragma.m"
            }
#line 1191 "add_pragma.m"
            {
#line 1191 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_186_186, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_24));
#line 1191 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_186_186, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_25));
#line 1191 "add_pragma.m"
            }
#line 1191 "add_pragma.m"
            {
#line 1191 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_185_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_185_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1191 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_185_185, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_186_186));
#line 1191 "add_pragma.m"
            }
#line 1193 "add_pragma.m"
            {
#line 1193 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_197_197, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredName_20));
#line 1193 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_197_197, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
#line 1193 "add_pragma.m"
            }
#line 1193 "add_pragma.m"
            {
#line 1193 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_196_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_196_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1193 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_196_196, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_197_197));
#line 1193 "add_pragma.m"
            }
#line 1193 "add_pragma.m"
            {
#line 1193 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_195_195, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_196_196));
#line 1193 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_195_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[117])));
#line 1193 "add_pragma.m"
            }
#line 1192 "add_pragma.m"
            {
#line 1192 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_192_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[179])));
#line 1192 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_192_192, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_195_195));
#line 1192 "add_pragma.m"
            }
#line 1191 "add_pragma.m"
            {
#line 1191 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_190_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1191 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_190_190, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_192_192));
#line 1191 "add_pragma.m"
            }
#line 1191 "add_pragma.m"
            {
#line 1191 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_187_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[178])));
#line 1191 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_187_187, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_190_190));
#line 1191 "add_pragma.m"
            }
#line 1191 "add_pragma.m"
            {
#line 1191 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_184_184, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_185_185));
#line 1191 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_184_184, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_187_187));
#line 1191 "add_pragma.m"
            }
#line 1190 "add_pragma.m"
            {
#line 1190 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_181_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[169])));
#line 1190 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_181_181, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_184_184));
#line 1190 "add_pragma.m"
            }
#line 1189 "add_pragma.m"
            {
#line 1189 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[7])));
#line 1189 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_178_178, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_181_181));
#line 1189 "add_pragma.m"
            }
#line 1189 "add_pragma.m"
            {
#line 1189 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_175_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
#line 1189 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_175_175, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_178_178));
#line 1189 "add_pragma.m"
            }
#line 1188 "add_pragma.m"
            {
#line 1188 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_172_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
#line 1188 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_172_172, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_175_175));
#line 1188 "add_pragma.m"
            }
#line 1188 "add_pragma.m"
            {
#line 1188 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_170_170, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_171_171));
#line 1188 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_170_170, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_172_172));
#line 1188 "add_pragma.m"
            }
#line 1187 "add_pragma.m"
            {
#line 1187 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_168_168, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_169_169));
#line 1187 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_168_168, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_170_170));
#line 1187 "add_pragma.m"
            }
#line 1187 "add_pragma.m"
            {
#line 1187 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
#line 1187 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_168_168));
#line 1187 "add_pragma.m"
            }
#line 1195 "add_pragma.m"
            {
#line 1195 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_26));
#line 1195 "add_pragma.m"
            }
#line 1195 "add_pragma.m"
            {
#line 1195 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_205_205));
#line 1195 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1195 "add_pragma.m"
            }
#line 1195 "add_pragma.m"
            {
#line 1195 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_12));
#line 1195 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_204_204));
#line 1195 "add_pragma.m"
            }
#line 1196 "add_pragma.m"
            {
#line 1196 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_27));
#line 1196 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "add_pragma.m"
            }
#line 1196 "add_pragma.m"
            {
#line 1196 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1196 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1196 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_209_209));
#line 1196 "add_pragma.m"
            }
#line 1185 "add_pragma.m"
          }
#line 1197 "add_pragma.m"
        else
#line 1198 "add_pragma.m"
          {
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_226_226;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ArityPieces_31;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__SortedArityPieces_32;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ExpArities_34;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_95_95;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_104_104;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_107_107;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_108_108;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_109_109;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_110_110;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_111_111;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_114_114;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_117_117;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_120_120;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_123_123;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_124_124;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_125_125;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_126_126;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_129_129;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_131_131;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_134_134;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_135_135;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_136_136;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_137_137;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_140_140;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_143_143;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_144_144;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_152_152;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_159_159;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_160_160;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_164_164;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeName_214;
#line 1198 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__TypeArity_215;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_216;
#line 1198 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_217;

#line 1199 "add_pragma.m"
            {
#line 1199 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_95_95, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_6[0]));
#line 1199 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1));
#line 1199 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1199 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_95_95, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__ModuleInfo_11));
#line 1199 "add_pragma.m"
            }
#line 5065 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_226_226 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1199 "add_pragma.m"
            {
#line 1199 "add_pragma.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__make_hlds__add_pragma__TypeCtorInfo_226_226, hlds__make_hlds__add_pragma__V_95_95, hlds__make_hlds__add_pragma__LooseArityPredIds_23, &hlds__make_hlds__add_pragma__ArityPieces_31);
            }
#line 1201 "add_pragma.m"
            {
#line 1201 "add_pragma.m"
              mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_226_226, hlds__make_hlds__add_pragma__ArityPieces_31, &hlds__make_hlds__add_pragma__SortedArityPieces_32);
            }
#line 1205 "add_pragma.m"
            if ((hlds__make_hlds__add_pragma__SortedArityPieces_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1203 "add_pragma.m"
              {
#line 1204 "add_pragma.m"
                {
#line 1204 "add_pragma.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma", (MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10", (MR_String) "no arity pieces");
#line 1204 "add_pragma.m"
                  return;
                }
#line 1203 "add_pragma.m"
              }
#line 1205 "add_pragma.m"
            else
#line 1205 "add_pragma.m"
              {
#line 1205 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__SortedArityPieces_32, (MR_Integer) 1)));
#line 1206 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__SortedArityPieces_32, (MR_Integer) 0)));

#line 1205 "add_pragma.m"
                if ((hlds__make_hlds__add_pragma__V_227_227 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1207 "add_pragma.m"
                  hlds__make_hlds__add_pragma__ExpArities_34 = hlds__make_hlds__add_pragma__SortedArityPieces_32;
#line 1205 "add_pragma.m"
                else
#line 1209 "add_pragma.m"
                  {
#line 1209 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_99_99;

#line 1211 "add_pragma.m"
                    {
#line 1211 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_99_99 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_pragma__SortedArityPieces_32);
                    }
#line 1210 "add_pragma.m"
                    {
#line 1210 "add_pragma.m"
                      hlds__make_hlds__add_pragma__ExpArities_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ExpArities_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[180])));
#line 1210 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ExpArities_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_99_99));
#line 1210 "add_pragma.m"
                    }
#line 1209 "add_pragma.m"
                  }
#line 1205 "add_pragma.m"
              }
#line 1213 "add_pragma.m"
            hlds__make_hlds__add_pragma__TypeName_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
#line 1213 "add_pragma.m"
            hlds__make_hlds__add_pragma__TypeArity_215 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
#line 1214 "add_pragma.m"
            {
#line 1214 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1214 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41));
#line 1214 "add_pragma.m"
            }
#line 1215 "add_pragma.m"
            {
#line 1215 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_110_110, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Kind_14));
#line 1215 "add_pragma.m"
            }
#line 1218 "add_pragma.m"
            {
#line 1218 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_125_125, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_214));
#line 1218 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_215));
#line 1218 "add_pragma.m"
            }
#line 1218 "add_pragma.m"
            {
#line 1218 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1218 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_125_125));
#line 1218 "add_pragma.m"
            }
#line 1220 "add_pragma.m"
            {
#line 1220 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredName_20));
#line 1220 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
#line 1220 "add_pragma.m"
            }
#line 1220 "add_pragma.m"
            {
#line 1220 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1220 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_135_135, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_136_136));
#line 1220 "add_pragma.m"
            }
#line 1222 "add_pragma.m"
            {
#line 1222 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1222 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_144_144, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
#line 1222 "add_pragma.m"
            }
#line 1222 "add_pragma.m"
            {
#line 1222 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_144_144));
#line 1222 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[121])));
#line 1222 "add_pragma.m"
            }
#line 1222 "add_pragma.m"
            {
#line 1222 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[182])));
#line 1222 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_143_143));
#line 1222 "add_pragma.m"
            }
#line 1221 "add_pragma.m"
            {
#line 1221 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_137_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[181])));
#line 1221 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_137_137, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_140_140));
#line 1221 "add_pragma.m"
            }
#line 1220 "add_pragma.m"
            {
#line 1220 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_135_135));
#line 1220 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_134_134, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_137_137));
#line 1220 "add_pragma.m"
            }
#line 1219 "add_pragma.m"
            {
#line 1219 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_131_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[179])));
#line 1219 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_131_131, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_134_134));
#line 1219 "add_pragma.m"
            }
#line 1218 "add_pragma.m"
            {
#line 1218 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1218 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_129_129, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_131_131));
#line 1218 "add_pragma.m"
            }
#line 1218 "add_pragma.m"
            {
#line 1218 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_126_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[178])));
#line 1218 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_129_129));
#line 1218 "add_pragma.m"
            }
#line 1218 "add_pragma.m"
            {
#line 1218 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_123_123, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_124_124));
#line 1218 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_123_123, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_126_126));
#line 1218 "add_pragma.m"
            }
#line 1217 "add_pragma.m"
            {
#line 1217 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_120_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[169])));
#line 1217 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_123_123));
#line 1217 "add_pragma.m"
            }
#line 1216 "add_pragma.m"
            {
#line 1216 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_117_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[7])));
#line 1216 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_120_120));
#line 1216 "add_pragma.m"
            }
#line 1216 "add_pragma.m"
            {
#line 1216 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_114_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
#line 1216 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_117_117));
#line 1216 "add_pragma.m"
            }
#line 1215 "add_pragma.m"
            {
#line 1215 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_111_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
#line 1215 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_114_114));
#line 1215 "add_pragma.m"
            }
#line 1215 "add_pragma.m"
            {
#line 1215 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_110_110));
#line 1215 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_111_111));
#line 1215 "add_pragma.m"
            }
#line 1214 "add_pragma.m"
            {
#line 1214 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_108_108));
#line 1214 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_109_109));
#line 1214 "add_pragma.m"
            }
#line 1214 "add_pragma.m"
            {
#line 1214 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
#line 1214 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_104_104, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_107_107));
#line 1214 "add_pragma.m"
            }
#line 1223 "add_pragma.m"
            {
#line 1223 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_152_152 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__TypeCtorInfo_226_226, hlds__make_hlds__add_pragma__ExpArities_34, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40]));
            }
#line 1223 "add_pragma.m"
            {
#line 1223 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_216 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__TypeCtorInfo_226_226, hlds__make_hlds__add_pragma__V_104_104, hlds__make_hlds__add_pragma__V_152_152);
            }
#line 1224 "add_pragma.m"
            {
#line 1224 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_216));
#line 1224 "add_pragma.m"
            }
#line 1224 "add_pragma.m"
            {
#line 1224 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_160_160));
#line 1224 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1224 "add_pragma.m"
            }
#line 1224 "add_pragma.m"
            {
#line 1224 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_217, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_12));
#line 1224 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_217, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_159_159));
#line 1224 "add_pragma.m"
            }
#line 1225 "add_pragma.m"
            {
#line 1225 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_217));
#line 1225 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "add_pragma.m"
            }
#line 1225 "add_pragma.m"
            {
#line 1225 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1225 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_164_164));
#line 1225 "add_pragma.m"
            }
#line 1198 "add_pragma.m"
          }
#line 1227 "add_pragma.m"
        {
#line 1227 "add_pragma.m"
          MR_Word base;
#line 1227 "add_pragma.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44 = base;
#line 1227 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_28));
#line 1227 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43));
#line 1227 "add_pragma.m"
        }
#line 1228 "add_pragma.m"
        {
#line 1228 "add_pragma.m"
          *hlds__make_hlds__add_pragma__PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 1181 "add_pragma.m"
      }
#line 1229 "add_pragma.m"
    else
#line 1229 "add_pragma.m"
      {
#line 1229 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_22, (MR_Integer) 1)));
#line 1229 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_22, (MR_Integer) 0)));

#line 1229 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_229_229 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1230 "add_pragma.m"
          {
#line 1230 "add_pragma.m"
            *hlds__make_hlds__add_pragma__PredId_16 = hlds__make_hlds__add_pragma__V_230_230;
#line 1230 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43;
#line 1230 "add_pragma.m"
          }
#line 1229 "add_pragma.m"
        else
#line 1232 "add_pragma.m"
          {
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_50_50;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_51_51;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_52_52;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_53_53;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_56_56;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_59_59;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_65_65;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_66_66;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_67_67;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_71_71;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_73_73;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_76_76;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_77_77;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_78_78;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_85_85;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_86_86;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_90_90;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeName_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
#line 1232 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__TypeArity_219 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_220;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_221;
#line 1232 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Spec_222;

#line 1234 "add_pragma.m"
            {
#line 1234 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1234 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41));
#line 1234 "add_pragma.m"
            }
#line 1235 "add_pragma.m"
            {
#line 1235 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Kind_14));
#line 1235 "add_pragma.m"
            }
#line 1238 "add_pragma.m"
            {
#line 1238 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_218));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_219));
#line 1238 "add_pragma.m"
            }
#line 1238 "add_pragma.m"
            {
#line 1238 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_67_67));
#line 1238 "add_pragma.m"
            }
#line 1240 "add_pragma.m"
            {
#line 1240 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredName_20));
#line 1240 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
#line 1240 "add_pragma.m"
            }
#line 1240 "add_pragma.m"
            {
#line 1240 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1240 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_78_78));
#line 1240 "add_pragma.m"
            }
#line 1240 "add_pragma.m"
            {
#line 1240 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1240 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
#line 1240 "add_pragma.m"
            }
#line 1239 "add_pragma.m"
            {
#line 1239 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_73_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[183])));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_76_76));
#line 1239 "add_pragma.m"
            }
#line 1238 "add_pragma.m"
            {
#line 1238 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_73_73));
#line 1238 "add_pragma.m"
            }
#line 1238 "add_pragma.m"
            {
#line 1238 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[178])));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_71_71));
#line 1238 "add_pragma.m"
            }
#line 1238 "add_pragma.m"
            {
#line 1238 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_66_66));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1238 "add_pragma.m"
            }
#line 1237 "add_pragma.m"
            {
#line 1237 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[169])));
#line 1237 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_65_65));
#line 1237 "add_pragma.m"
            }
#line 1236 "add_pragma.m"
            {
#line 1236 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[173])));
#line 1236 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 1236 "add_pragma.m"
            }
#line 1236 "add_pragma.m"
            {
#line 1236 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
#line 1236 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_59_59));
#line 1236 "add_pragma.m"
            }
#line 1235 "add_pragma.m"
            {
#line 1235 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_56_56));
#line 1235 "add_pragma.m"
            }
#line 1235 "add_pragma.m"
            {
#line 1235 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_52_52));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_53_53));
#line 1235 "add_pragma.m"
            }
#line 1234 "add_pragma.m"
            {
#line 1234 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_50_50));
#line 1234 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_51_51));
#line 1234 "add_pragma.m"
            }
#line 1234 "add_pragma.m"
            {
#line 1234 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_220, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
#line 1234 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_220, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 1234 "add_pragma.m"
            }
#line 1241 "add_pragma.m"
            {
#line 1241 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_220));
#line 1241 "add_pragma.m"
            }
#line 1241 "add_pragma.m"
            {
#line 1241 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_86_86));
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "add_pragma.m"
            }
#line 1241 "add_pragma.m"
            {
#line 1241 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_221, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_12));
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_221, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_85_85));
#line 1241 "add_pragma.m"
            }
#line 1242 "add_pragma.m"
            {
#line 1242 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_221));
#line 1242 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1242 "add_pragma.m"
            }
#line 1242 "add_pragma.m"
            {
#line 1242 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_222 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_222, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1242 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1242 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_222, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_90_90));
#line 1242 "add_pragma.m"
            }
#line 1243 "add_pragma.m"
            {
#line 1243 "add_pragma.m"
              MR_Word base;
#line 1243 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44 = base;
#line 1243 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_222));
#line 1243 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43));
#line 1243 "add_pragma.m"
            }
#line 1244 "add_pragma.m"
            {
#line 1244 "add_pragma.m"
              *hlds__make_hlds__add_pragma__PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 1232 "add_pragma.m"
          }
#line 1229 "add_pragma.m"
      }
#line 1246 "add_pragma.m"
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_42 = (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41 + (MR_Integer) 1);
#line 1175 "add_pragma.m"
  }
#line 1170 "add_pragma.m"
}

#line 1143 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3(
#line 1143 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1143 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1143 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1143 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1143 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1143 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1143 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6)
#line 1143 "add_pragma.m"
{
#line 1143 "add_pragma.m"
  {
#line 1143 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 1143 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv12_PredId_16;
#line 1143 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__conv11_STATE_VARIABLE_SeqNum_42;
#line 1143 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv10_STATE_VARIABLE_Specs_44;

#line 1143 "add_pragma.m"
    {
#line 1143 "add_pragma.m"
      hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv12_PredId_16, ((MR_Integer) hlds__make_hlds__add_pragma__wrapper_arg_3), &hlds__make_hlds__add_pragma__conv11_STATE_VARIABLE_SeqNum_42, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_5), &hlds__make_hlds__add_pragma__conv10_STATE_VARIABLE_Specs_44);
    }
#line 1143 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv12_PredId_16));
#line 1143 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__conv11_STATE_VARIABLE_SeqNum_42));
#line 1143 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__conv10_STATE_VARIABLE_Specs_44));
#line 1143 "add_pragma.m"
  }
#line 1143 "add_pragma.m"
}

#line 1139 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2(
#line 1139 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1139 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1139 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1139 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1139 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1139 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1139 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6)
#line 1139 "add_pragma.m"
{
#line 1139 "add_pragma.m"
  {
#line 1139 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 1139 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv7_PredId_16;
#line 1139 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__conv6_STATE_VARIABLE_SeqNum_42;
#line 1139 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv5_STATE_VARIABLE_Specs_44;

#line 1139 "add_pragma.m"
    {
#line 1139 "add_pragma.m"
      hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv7_PredId_16, ((MR_Integer) hlds__make_hlds__add_pragma__wrapper_arg_3), &hlds__make_hlds__add_pragma__conv6_STATE_VARIABLE_SeqNum_42, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_5), &hlds__make_hlds__add_pragma__conv5_STATE_VARIABLE_Specs_44);
    }
#line 1139 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv7_PredId_16));
#line 1139 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__conv6_STATE_VARIABLE_SeqNum_42));
#line 1139 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__conv5_STATE_VARIABLE_Specs_44));
#line 1139 "add_pragma.m"
  }
#line 1139 "add_pragma.m"
}

#line 1135 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1(
#line 1135 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1135 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1135 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1135 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1135 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1135 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1135 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6)
#line 1135 "add_pragma.m"
{
#line 1135 "add_pragma.m"
  {
#line 1135 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 1135 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv2_PredId_16;
#line 1135 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_SeqNum_42;
#line 1135 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_44;

#line 1135 "add_pragma.m"
    {
#line 1135 "add_pragma.m"
      hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv2_PredId_16, ((MR_Integer) hlds__make_hlds__add_pragma__wrapper_arg_3), &hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_SeqNum_42, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_5), &hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_44);
    }
#line 1135 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv2_PredId_16));
#line 1135 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_SeqNum_42));
#line 1135 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_44));
#line 1135 "add_pragma.m"
  }
#line 1135 "add_pragma.m"
}

#line 1080 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(
#line 1080 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__OISUInfo_8,
#line 1080 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_9,
#line 1080 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_10,
#line 1080 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45,
#line 1080 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46,
#line 1080 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47,
#line 1080 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48)
#line 1080 "add_pragma.m"
{
#line 1084 "add_pragma.m"
  {
#line 1084 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_130_130;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_131_131;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_132_132;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeInfo_133_133;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 0)));
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Creators_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 1)));
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Mutators_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 2)));
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Destructors_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 3)));
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ThisModule_18;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__CreatorPredIds_29;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MutatorPredIds_31;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__DestructorPredIds_33;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_85_85;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_87_87;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_89_89;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_91_91;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_93_93;
#line 1084 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_95_95;
#line 1134 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__V_30_30;
#line 1134 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv4_V_30_30;
#line 1134 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv3_STATE_VARIABLE_OISUSpecs_87_87;
#line 1138 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__V_32_32;
#line 1138 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv9_V_32_32;
#line 1138 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv8_STATE_VARIABLE_OISUSpecs_91_91;
#line 1142 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__V_34_34;
#line 1142 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv14_V_34_34;
#line 1142 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv13_STATE_VARIABLE_OISUSpecs_95_95;

#line 1088 "add_pragma.m"
    {
#line 1088 "add_pragma.m"
      hlds__make_hlds__add_pragma__ThisModule_18 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_pragma__Status_9);
    }
#line 1091 "add_pragma.m"
#line 1091 "add_pragma.m"
    switch (hlds__make_hlds__add_pragma__ThisModule_18) {
#line 1091 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1091 "add_pragma.m"
      case (MR_Integer) 0:
#line 1090 "add_pragma.m"
        hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49;
#line 1091 "add_pragma.m"
        break;
#line 1091 "add_pragma.m"
      case (MR_Integer) 1:
#line 1092 "add_pragma.m"
        {
#line 1092 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Exported_19;
#line 1092 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__TypeTable_23;
#line 1092 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65;
#line 1120 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__TypeDefn_24;

#line 1093 "add_pragma.m"
          {
#line 1093 "add_pragma.m"
            hlds__make_hlds__add_pragma__Exported_19 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_pragma__Status_9);
          }
#line 1096 "add_pragma.m"
#line 1096 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__Exported_19) {
#line 1096 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1096 "add_pragma.m"
            case (MR_Integer) 0:
#line 1097 "add_pragma.m"
              {
#line 1097 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__StatusMsg_21;
#line 1097 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__StatusSpec_22;
#line 1097 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_63_63;

#line 1100 "add_pragma.m"
                {
#line 1100 "add_pragma.m"
                  hlds__make_hlds__add_pragma__StatusMsg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1100 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusMsg_21, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1100 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusMsg_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[170])));
#line 1100 "add_pragma.m"
                }
#line 1102 "add_pragma.m"
                {
#line 1102 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__StatusMsg_21));
#line 1102 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1102 "add_pragma.m"
                }
#line 1101 "add_pragma.m"
                {
#line 1101 "add_pragma.m"
                  hlds__make_hlds__add_pragma__StatusSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1101 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1101 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1101 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusSpec_22, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 1101 "add_pragma.m"
                }
#line 1103 "add_pragma.m"
                {
#line 1103 "add_pragma.m"
                  hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__StatusSpec_22));
#line 1103 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49));
#line 1103 "add_pragma.m"
                }
#line 1097 "add_pragma.m"
              }
#line 1096 "add_pragma.m"
              break;
#line 1096 "add_pragma.m"
            case (MR_Integer) 1:
#line 1095 "add_pragma.m"
              hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49;
#line 1096 "add_pragma.m"
              break;
#line 1096 "add_pragma.m"
          }
#line 1106 "add_pragma.m"
          {
#line 1106 "add_pragma.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_pragma__TypeTable_23);
          }
#line 1107 "add_pragma.m"
          {
#line 1107 "add_pragma.m"
            hlds__make_hlds__add_pragma__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__TypeTable_23, hlds__make_hlds__add_pragma__TypeCtor_13, &hlds__make_hlds__add_pragma__TypeDefn_24);
          }
#line 1120 "add_pragma.m"
          if (hlds__make_hlds__add_pragma__succeeded)
#line 1108 "add_pragma.m"
            {
#line 1108 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TypeStatus_25;

#line 1108 "add_pragma.m"
              {
#line 1108 "add_pragma.m"
                hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__TypeDefn_24, &hlds__make_hlds__add_pragma__TypeStatus_25);
              }
#line 1109 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__TypeStatus_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1111 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 1111 "add_pragma.m"
                hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65;
#line 1111 "add_pragma.m"
              else
#line 1114 "add_pragma.m"
                {
#line 1114 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__TypeMsg_27;
#line 1114 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__TypeSpec_28;
#line 1114 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__V_82_82;

#line 1115 "add_pragma.m"
                  {
#line 1115 "add_pragma.m"
                    hlds__make_hlds__add_pragma__TypeMsg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeMsg_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1115 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeMsg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[171])));
#line 1115 "add_pragma.m"
                  }
#line 1117 "add_pragma.m"
                  {
#line 1117 "add_pragma.m"
                    hlds__make_hlds__add_pragma__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeMsg_27));
#line 1117 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1117 "add_pragma.m"
                  }
#line 1116 "add_pragma.m"
                  {
#line 1116 "add_pragma.m"
                    hlds__make_hlds__add_pragma__TypeSpec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeSpec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1116 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeSpec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1116 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeSpec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_82_82));
#line 1116 "add_pragma.m"
                  }
#line 1118 "add_pragma.m"
                  {
#line 1118 "add_pragma.m"
                    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeSpec_28));
#line 1118 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65));
#line 1118 "add_pragma.m"
                  }
#line 1114 "add_pragma.m"
                }
#line 1108 "add_pragma.m"
            }
#line 1120 "add_pragma.m"
          else
#line 1120 "add_pragma.m"
            hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65;
#line 1092 "add_pragma.m"
        }
#line 1091 "add_pragma.m"
        break;
#line 1091 "add_pragma.m"
    }
#line 1135 "add_pragma.m"
    {
#line 1135 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_5[0]));
#line 1135 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1));
#line 1135 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1135 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45));
#line 1135 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1135 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13));
#line 1135 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 6) = ((MR_Box) ((MR_String) "creator"));
#line 1135 "add_pragma.m"
    }
#line 6205 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0;
#line 6207 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeCtorInfo_131_131 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6209 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeCtorInfo_132_132 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 6211 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeInfo_133_133 = (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_1[1];
#line 1134 "add_pragma.m"
    {
#line 1134 "add_pragma.m"
      mercury__list__map_foldl2_7_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_130_130, hlds__make_hlds__add_pragma__TypeCtorInfo_131_131, hlds__make_hlds__add_pragma__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__TypeInfo_133_133, hlds__make_hlds__add_pragma__V_85_85, hlds__make_hlds__add_pragma__Creators_14, &hlds__make_hlds__add_pragma__CreatorPredIds_29, ((MR_Box) ((MR_Integer) 1)), &hlds__make_hlds__add_pragma__conv4_V_30_30, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84)), &hlds__make_hlds__add_pragma__conv3_STATE_VARIABLE_OISUSpecs_87_87);
    }
#line 1134 "add_pragma.m"
    hlds__make_hlds__add_pragma__V_30_30 = ((MR_Integer) hlds__make_hlds__add_pragma__conv4_V_30_30);
#line 1134 "add_pragma.m"
    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_87_87 = ((MR_Word) hlds__make_hlds__add_pragma__conv3_STATE_VARIABLE_OISUSpecs_87_87);
#line 1139 "add_pragma.m"
    {
#line 1139 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_5[0]));
#line 1139 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2));
#line 1139 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1139 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45));
#line 1139 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1139 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13));
#line 1139 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 6) = ((MR_Box) ((MR_String) "mutator"));
#line 1139 "add_pragma.m"
    }
#line 1138 "add_pragma.m"
    {
#line 1138 "add_pragma.m"
      mercury__list__map_foldl2_7_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_130_130, hlds__make_hlds__add_pragma__TypeCtorInfo_131_131, hlds__make_hlds__add_pragma__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__TypeInfo_133_133, hlds__make_hlds__add_pragma__V_89_89, hlds__make_hlds__add_pragma__Mutators_15, &hlds__make_hlds__add_pragma__MutatorPredIds_31, ((MR_Box) ((MR_Integer) 1)), &hlds__make_hlds__add_pragma__conv9_V_32_32, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_87_87)), &hlds__make_hlds__add_pragma__conv8_STATE_VARIABLE_OISUSpecs_91_91);
    }
#line 1138 "add_pragma.m"
    hlds__make_hlds__add_pragma__V_32_32 = ((MR_Integer) hlds__make_hlds__add_pragma__conv9_V_32_32);
#line 1138 "add_pragma.m"
    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_91_91 = ((MR_Word) hlds__make_hlds__add_pragma__conv8_STATE_VARIABLE_OISUSpecs_91_91);
#line 1143 "add_pragma.m"
    {
#line 1143 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_5[0]));
#line 1143 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3));
#line 1143 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1143 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45));
#line 1143 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1143 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13));
#line 1143 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 6) = ((MR_Box) ((MR_String) "destructor"));
#line 1143 "add_pragma.m"
    }
#line 1142 "add_pragma.m"
    {
#line 1142 "add_pragma.m"
      mercury__list__map_foldl2_7_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_130_130, hlds__make_hlds__add_pragma__TypeCtorInfo_131_131, hlds__make_hlds__add_pragma__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__TypeInfo_133_133, hlds__make_hlds__add_pragma__V_93_93, hlds__make_hlds__add_pragma__Destructors_16, &hlds__make_hlds__add_pragma__DestructorPredIds_33, ((MR_Box) ((MR_Integer) 1)), &hlds__make_hlds__add_pragma__conv14_V_34_34, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_91_91)), &hlds__make_hlds__add_pragma__conv13_STATE_VARIABLE_OISUSpecs_95_95);
    }
#line 1142 "add_pragma.m"
    hlds__make_hlds__add_pragma__V_34_34 = ((MR_Integer) hlds__make_hlds__add_pragma__conv14_V_34_34);
#line 1142 "add_pragma.m"
    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_95_95 = ((MR_Word) hlds__make_hlds__add_pragma__conv13_STATE_VARIABLE_OISUSpecs_95_95);
#line 1164 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1148 "add_pragma.m"
      {
#line 1148 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__OISUPreds_35;
#line 1148 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__OISUMap0_36;
#line 1154 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__OISUMap_37;

#line 1149 "add_pragma.m"
        {
#line 1149 "add_pragma.m"
          hlds__make_hlds__add_pragma__OISUPreds_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUPreds_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__CreatorPredIds_29));
#line 1149 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUPreds_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__MutatorPredIds_31));
#line 1149 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUPreds_35, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__DestructorPredIds_33));
#line 1149 "add_pragma.m"
        }
#line 1151 "add_pragma.m"
        {
#line 1151 "add_pragma.m"
          hlds__hlds_module__module_info_get_oisu_map_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_pragma__OISUMap0_36);
        }
#line 1152 "add_pragma.m"
        {
#line 1152 "add_pragma.m"
          hlds__make_hlds__add_pragma__succeeded = mercury__map__insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13)), ((MR_Box) (hlds__make_hlds__add_pragma__OISUPreds_35)), hlds__make_hlds__add_pragma__OISUMap0_36, &hlds__make_hlds__add_pragma__OISUMap_37);
        }
#line 1154 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 1153 "add_pragma.m"
          {
#line 1153 "add_pragma.m"
            {
#line 1153 "add_pragma.m"
              hlds__hlds_module__module_info_set_oisu_map_3_p_0(hlds__make_hlds__add_pragma__OISUMap_37, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46);
            }
#line 1153 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47;
#line 1153 "add_pragma.m"
          }
#line 1154 "add_pragma.m"
        else
#line 1155 "add_pragma.m"
          {
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
#line 1155 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__TypeArity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__DupPieces_40;
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__DupMsg_41;
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__DupSpec_42;
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_101_101;
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_104_104;
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_107_107;
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_108_108;
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_109_109;
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_116_116;
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_117_117;
#line 1155 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_121_121;

#line 1158 "add_pragma.m"
            {
#line 1158 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_38));
#line 1158 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_39));
#line 1158 "add_pragma.m"
            }
#line 1158 "add_pragma.m"
            {
#line 1158 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1158 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_109_109));
#line 1158 "add_pragma.m"
            }
#line 1158 "add_pragma.m"
            {
#line 1158 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_108_108));
#line 1158 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
#line 1158 "add_pragma.m"
            }
#line 1157 "add_pragma.m"
            {
#line 1157 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[174])));
#line 1157 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_104_104, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_107_107));
#line 1157 "add_pragma.m"
            }
#line 1156 "add_pragma.m"
            {
#line 1156 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_101_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[173])));
#line 1156 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_104_104));
#line 1156 "add_pragma.m"
            }
#line 1156 "add_pragma.m"
            {
#line 1156 "add_pragma.m"
              hlds__make_hlds__add_pragma__DupPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DupPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[172])));
#line 1156 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DupPieces_40, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_101_101));
#line 1156 "add_pragma.m"
            }
#line 1159 "add_pragma.m"
            {
#line 1159 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_117_117, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__DupPieces_40));
#line 1159 "add_pragma.m"
            }
#line 1159 "add_pragma.m"
            {
#line 1159 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_117_117));
#line 1159 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1159 "add_pragma.m"
            }
#line 1159 "add_pragma.m"
            {
#line 1159 "add_pragma.m"
              hlds__make_hlds__add_pragma__DupMsg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupMsg_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1159 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupMsg_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_116_116));
#line 1159 "add_pragma.m"
            }
#line 1161 "add_pragma.m"
            {
#line 1161 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__DupMsg_41));
#line 1161 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1161 "add_pragma.m"
            }
#line 1160 "add_pragma.m"
            {
#line 1160 "add_pragma.m"
              hlds__make_hlds__add_pragma__DupSpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupSpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1160 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupSpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1160 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupSpec_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_121_121));
#line 1160 "add_pragma.m"
            }
#line 1162 "add_pragma.m"
            {
#line 1162 "add_pragma.m"
              MR_Word base;
#line 1162 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48 = base;
#line 1162 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__DupSpec_42));
#line 1162 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47));
#line 1162 "add_pragma.m"
            }
#line 1155 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45;
#line 1155 "add_pragma.m"
          }
#line 1148 "add_pragma.m"
      }
#line 1164 "add_pragma.m"
    else
#line 1165 "add_pragma.m"
      {
#line 1166 "add_pragma.m"
        {
#line 1166 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_95_95, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47);
        }
#line 1165 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45;
#line 1165 "add_pragma.m"
      }
#line 1084 "add_pragma.m"
  }
#line 1080 "add_pragma.m"
}

#line 993 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_reserve_tag_7_p_0(
#line 993 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__TypeCtor_8,
#line 993 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PragmaStatus_9,
#line 993 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_10,
#line 993 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48,
#line 993 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49,
#line 993 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_50,
#line 993 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_51)
#line 993 "add_pragma.m"
{
#line 997 "add_pragma.m"
  {
#line 997 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 997 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_8, (MR_Integer) 0)));
#line 997 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__TypeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_8, (MR_Integer) 1)));
#line 997 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeTable0_15;
#line 997 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybeError_20;
#line 1061 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeDefn0_16;

#line 999 "add_pragma.m"
    {
#line 999 "add_pragma.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48, &hlds__make_hlds__add_pragma__TypeTable0_15);
    }
#line 1000 "add_pragma.m"
    {
#line 1000 "add_pragma.m"
      hlds__make_hlds__add_pragma__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__TypeTable0_15, hlds__make_hlds__add_pragma__TypeCtor_8, &hlds__make_hlds__add_pragma__TypeDefn0_16);
    }
#line 1061 "add_pragma.m"
    if (hlds__make_hlds__add_pragma__succeeded)
#line 1001 "add_pragma.m"
      {
#line 1001 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeBody0_17;
#line 1001 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeStatus_18;

#line 1001 "add_pragma.m"
        {
#line 1001 "add_pragma.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__TypeDefn0_16, &hlds__make_hlds__add_pragma__TypeBody0_17);
        }
#line 1002 "add_pragma.m"
        {
#line 1002 "add_pragma.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__TypeDefn0_16, &hlds__make_hlds__add_pragma__TypeStatus_18);
        }
#line 1005 "add_pragma.m"
        {
#line 1005 "add_pragma.m"
          hlds__make_hlds__add_pragma__succeeded = hlds__hlds_pred____Unify____import_status_0_0(hlds__make_hlds__add_pragma__TypeStatus_18, hlds__make_hlds__add_pragma__PragmaStatus_9);
        }
#line 1006 "add_pragma.m"
        if (!(hlds__make_hlds__add_pragma__succeeded))
#line 1007 "add_pragma.m"
          {
#line 1007 "add_pragma.m"
            hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__TypeStatus_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1007 "add_pragma.m"
            if (hlds__make_hlds__add_pragma__succeeded)
#line 1009 "add_pragma.m"
              {
#line 1009 "add_pragma.m"
                if ((hlds__make_hlds__add_pragma__PragmaStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1009 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = MR_TRUE;
#line 1009 "add_pragma.m"
                else
#line 1009 "add_pragma.m"
                if ((hlds__make_hlds__add_pragma__PragmaStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 1008 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = MR_TRUE;
#line 1009 "add_pragma.m"
                else
#line 1009 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = MR_FALSE;
#line 1009 "add_pragma.m"
              }
#line 1007 "add_pragma.m"
          }
#line 1004 "add_pragma.m"
        hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 1017 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 1015 "add_pragma.m"
          {
#line 1016 "add_pragma.m"
            hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_3[23]);
#line 1015 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48;
#line 1015 "add_pragma.m"
          }
#line 1017 "add_pragma.m"
        else
#line 1049 "add_pragma.m"
#line 1049 "add_pragma.m"
          switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__TypeBody0_17)) {
#line 1049 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "add_pragma.m"
            case (MR_Integer) 0:
#line 1054 "add_pragma.m"
              {
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_69_69;
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_70_70;
#line 1054 "add_pragma.m"
                MR_Tuple hlds__make_hlds__add_pragma__V_77_77;
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ErrorPieces_136;

#line 1056 "add_pragma.m"
                {
#line 1056 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
#line 1056 "add_pragma.m"
                }
#line 1056 "add_pragma.m"
                {
#line 1056 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 1056 "add_pragma.m"
                }
#line 1056 "add_pragma.m"
                {
#line 1056 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_69_69));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[100])));
#line 1056 "add_pragma.m"
                }
#line 1055 "add_pragma.m"
                {
#line 1055 "add_pragma.m"
                  hlds__make_hlds__add_pragma__ErrorPieces_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[165])));
#line 1055 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1055 "add_pragma.m"
                }
#line 1058 "add_pragma.m"
                {
#line 1058 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_77_77 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_136));
#line 1058 "add_pragma.m"
                }
#line 1058 "add_pragma.m"
                {
#line 1058 "add_pragma.m"
                  hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1058 "add_pragma.m"
                }
#line 1054 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48;
#line 1054 "add_pragma.m"
              }
#line 1049 "add_pragma.m"
              break;
#line 1049 "add_pragma.m"
            case (MR_Integer) 1:
#line 1021 "add_pragma.m"
              {
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Body_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 0)));
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__MaybeUserEqComp_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 4)));
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__MaybeDirectArgCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 5)));
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ReservedTag0_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__IsForeign_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 7)));
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Globals_31;
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__CtorTags_32;
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ReservedAddr_33;
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__DuTypeKind_34;
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeBody_35;
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeDefn_36;
#line 1021 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeTable_37;
#line 1019 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma___CtorTags0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 1)));
#line 1019 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma___CheaperTagTest_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 2)));
#line 1019 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma___DuTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 3)));
#line 1019 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma___ReservedAddr_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1023 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ReservedTag0_27 == (MR_Integer) 0);
#line 1023 "add_pragma.m"
                if (hlds__make_hlds__add_pragma__succeeded)
#line 1023 "add_pragma.m"
                  {
#line 1026 "add_pragma.m"
                    hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__TypeStatus_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "add_pragma.m"
                    hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 1023 "add_pragma.m"
                  }
#line 1032 "add_pragma.m"
                if (hlds__make_hlds__add_pragma__succeeded)
#line 1030 "add_pragma.m"
                  {
#line 1031 "add_pragma.m"
                    hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_3[24]);
#line 1030 "add_pragma.m"
                  }
#line 1032 "add_pragma.m"
                else
#line 1033 "add_pragma.m"
                  hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1039 "add_pragma.m"
                {
#line 1039 "add_pragma.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48, &hlds__make_hlds__add_pragma__Globals_31);
                }
#line 1040 "add_pragma.m"
                {
#line 1040 "add_pragma.m"
                  hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_pragma__Body_21, hlds__make_hlds__add_pragma__MaybeUserEqComp_25, hlds__make_hlds__add_pragma__TypeCtor_8, (MR_Integer) 0, hlds__make_hlds__add_pragma__Globals_31, &hlds__make_hlds__add_pragma__CtorTags_32, &hlds__make_hlds__add_pragma__ReservedAddr_33, &hlds__make_hlds__add_pragma__DuTypeKind_34);
                }
#line 1042 "add_pragma.m"
                {
#line 1042 "add_pragma.m"
                  hlds__make_hlds__add_pragma__TypeBody_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Body_21));
#line 1042 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__CtorTags_32));
#line 1042 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__DuTypeKind_34));
#line 1042 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__MaybeUserEqComp_25));
#line 1042 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__MaybeDirectArgCtors_26));
#line 1042 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 6) = ((MR_Box) (((MR_Integer) 0 | ((hlds__make_hlds__add_pragma__ReservedAddr_33 << (MR_Integer) 1)))));
#line 1042 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__IsForeign_29));
#line 1042 "add_pragma.m"
                }
#line 1045 "add_pragma.m"
                {
#line 1045 "add_pragma.m"
                  hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_pragma__TypeBody_35, hlds__make_hlds__add_pragma__TypeDefn0_16, &hlds__make_hlds__add_pragma__TypeDefn_36);
                }
#line 1046 "add_pragma.m"
                {
#line 1046 "add_pragma.m"
                  hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_pragma__TypeCtor_8, hlds__make_hlds__add_pragma__TypeDefn_36, hlds__make_hlds__add_pragma__TypeTable0_15, &hlds__make_hlds__add_pragma__TypeTable_37);
                }
#line 1048 "add_pragma.m"
                {
#line 1048 "add_pragma.m"
                  hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_pragma__TypeTable_37, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49);
                }
#line 1021 "add_pragma.m"
              }
#line 1049 "add_pragma.m"
              break;
#line 1049 "add_pragma.m"
            case (MR_Integer) 2:
#line 1054 "add_pragma.m"
              {
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_69_69;
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_70_70;
#line 1054 "add_pragma.m"
                MR_Tuple hlds__make_hlds__add_pragma__V_77_77;
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ErrorPieces_136;

#line 1056 "add_pragma.m"
                {
#line 1056 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
#line 1056 "add_pragma.m"
                }
#line 1056 "add_pragma.m"
                {
#line 1056 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 1056 "add_pragma.m"
                }
#line 1056 "add_pragma.m"
                {
#line 1056 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_69_69));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[100])));
#line 1056 "add_pragma.m"
                }
#line 1055 "add_pragma.m"
                {
#line 1055 "add_pragma.m"
                  hlds__make_hlds__add_pragma__ErrorPieces_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[165])));
#line 1055 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1055 "add_pragma.m"
                }
#line 1058 "add_pragma.m"
                {
#line 1058 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_77_77 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_136));
#line 1058 "add_pragma.m"
                }
#line 1058 "add_pragma.m"
                {
#line 1058 "add_pragma.m"
                  hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1058 "add_pragma.m"
                }
#line 1054 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48;
#line 1054 "add_pragma.m"
              }
#line 1049 "add_pragma.m"
              break;
#line 1049 "add_pragma.m"
            case (MR_Integer) 3:
#line 1054 "add_pragma.m"
              {
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_69_69;
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_70_70;
#line 1054 "add_pragma.m"
                MR_Tuple hlds__make_hlds__add_pragma__V_77_77;
#line 1054 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ErrorPieces_136;

#line 1056 "add_pragma.m"
                {
#line 1056 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
#line 1056 "add_pragma.m"
                }
#line 1056 "add_pragma.m"
                {
#line 1056 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 1056 "add_pragma.m"
                }
#line 1056 "add_pragma.m"
                {
#line 1056 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_69_69));
#line 1056 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[100])));
#line 1056 "add_pragma.m"
                }
#line 1055 "add_pragma.m"
                {
#line 1055 "add_pragma.m"
                  hlds__make_hlds__add_pragma__ErrorPieces_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[165])));
#line 1055 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1055 "add_pragma.m"
                }
#line 1058 "add_pragma.m"
                {
#line 1058 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_77_77 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_136));
#line 1058 "add_pragma.m"
                }
#line 1058 "add_pragma.m"
                {
#line 1058 "add_pragma.m"
                  hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1058 "add_pragma.m"
                }
#line 1054 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48;
#line 1054 "add_pragma.m"
              }
#line 1049 "add_pragma.m"
              break;
#line 1049 "add_pragma.m"
          }
#line 1001 "add_pragma.m"
      }
#line 1061 "add_pragma.m"
    else
#line 1063 "add_pragma.m"
      {
#line 1063 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_96_96;
#line 1063 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_97_97;
#line 1063 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_98_98;
#line 1063 "add_pragma.m"
        MR_Tuple hlds__make_hlds__add_pragma__V_105_105;
#line 1063 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ErrorPieces_138;

#line 1063 "add_pragma.m"
        {
#line 1063 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
#line 1063 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_98_98, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
#line 1063 "add_pragma.m"
        }
#line 1063 "add_pragma.m"
        {
#line 1063 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1063 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_97_97, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_98_98));
#line 1063 "add_pragma.m"
        }
#line 1063 "add_pragma.m"
        {
#line 1063 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_97_97));
#line 1063 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
#line 1063 "add_pragma.m"
        }
#line 1062 "add_pragma.m"
        {
#line 1062 "add_pragma.m"
          hlds__make_hlds__add_pragma__ErrorPieces_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[167])));
#line 1062 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_138, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_96_96));
#line 1062 "add_pragma.m"
        }
#line 1064 "add_pragma.m"
        {
#line 1064 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_105_105 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1064 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1064 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_105_105, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_138));
#line 1064 "add_pragma.m"
        }
#line 1064 "add_pragma.m"
        {
#line 1064 "add_pragma.m"
          hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_105_105));
#line 1064 "add_pragma.m"
        }
#line 1063 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48;
#line 1063 "add_pragma.m"
      }
#line 1068 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__MaybeError_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1067 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_51 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_50;
#line 1068 "add_pragma.m"
    else
#line 1069 "add_pragma.m"
      {
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Severity_43;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__MaybeErrorPieces_44;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ContextPieces_45;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Msg_46;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Spec_47;
#line 1069 "add_pragma.m"
        MR_Tuple hlds__make_hlds__add_pragma__V_107_107 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_20, (MR_Integer) 0)));
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_110_110;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_113_113;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_116_116;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_117_117;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_118_118;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_125_125;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_126_126;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_127_127;
#line 1069 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_130_130;

#line 1069 "add_pragma.m"
        hlds__make_hlds__add_pragma__Severity_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_107_107, (MR_Integer) 0)));
#line 1069 "add_pragma.m"
        hlds__make_hlds__add_pragma__MaybeErrorPieces_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_107_107, (MR_Integer) 1)));
#line 1071 "add_pragma.m"
        {
#line 1071 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
#line 1071 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_118_118, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
#line 1071 "add_pragma.m"
        }
#line 1071 "add_pragma.m"
        {
#line 1071 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1071 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_118_118));
#line 1071 "add_pragma.m"
        }
#line 1071 "add_pragma.m"
        {
#line 1071 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_117_117));
#line 1071 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[107])));
#line 1071 "add_pragma.m"
        }
#line 1071 "add_pragma.m"
        {
#line 1071 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_113_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[169])));
#line 1071 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_113_113, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_116_116));
#line 1071 "add_pragma.m"
        }
#line 1070 "add_pragma.m"
        {
#line 1070 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_110_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[168])));
#line 1070 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_113_113));
#line 1070 "add_pragma.m"
        }
#line 1070 "add_pragma.m"
        {
#line 1070 "add_pragma.m"
          hlds__make_hlds__add_pragma__ContextPieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ContextPieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[162])));
#line 1070 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ContextPieces_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_110_110));
#line 1070 "add_pragma.m"
        }
#line 1073 "add_pragma.m"
        {
#line 1073 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_127_127 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__ContextPieces_45, hlds__make_hlds__add_pragma__MaybeErrorPieces_44);
        }
#line 1073 "add_pragma.m"
        {
#line 1073 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_127_127));
#line 1073 "add_pragma.m"
        }
#line 1073 "add_pragma.m"
        {
#line 1073 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_125_125, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_126_126));
#line 1073 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1073 "add_pragma.m"
        }
#line 1073 "add_pragma.m"
        {
#line 1073 "add_pragma.m"
          hlds__make_hlds__add_pragma__Msg_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1073 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_125_125));
#line 1073 "add_pragma.m"
        }
#line 1074 "add_pragma.m"
        {
#line 1074 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_46));
#line 1074 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1074 "add_pragma.m"
        }
#line 1074 "add_pragma.m"
        {
#line 1074 "add_pragma.m"
          hlds__make_hlds__add_pragma__Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Severity_43));
#line 1074 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1074 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_130_130));
#line 1074 "add_pragma.m"
        }
#line 1075 "add_pragma.m"
        {
#line 1075 "add_pragma.m"
          MR_Word base;
#line 1075 "add_pragma.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_51 = base;
#line 1075 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_47));
#line 1075 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_50));
#line 1075 "add_pragma.m"
        }
#line 1069 "add_pragma.m"
      }
#line 997 "add_pragma.m"
  }
#line 993 "add_pragma.m"
}

#line 975 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(
#line 975 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Vars0_5,
#line 975 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Modes0_6,
#line 975 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__VarSet_7,
#line 975 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PragmaVars0_8)
#line 975 "add_pragma.m"
{
#line 987 "add_pragma.m"
  {
#line 987 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Vars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 987 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Var_9;
#line 987 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__VarsTail_10;
#line 987 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Mode_11;
#line 987 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ModesTail_12;

#line 980 "add_pragma.m"
    if (hlds__make_hlds__add_pragma__succeeded)
#line 980 "add_pragma.m"
      {
#line 980 "add_pragma.m"
        hlds__make_hlds__add_pragma__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Vars0_5, (MR_Integer) 0)));
#line 980 "add_pragma.m"
        hlds__make_hlds__add_pragma__VarsTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Vars0_5, (MR_Integer) 1)));
#line 981 "add_pragma.m"
        hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Modes0_6)) == (MR_mktag((MR_Integer) 1)));
#line 981 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 981 "add_pragma.m"
          {
#line 981 "add_pragma.m"
            hlds__make_hlds__add_pragma__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Modes0_6, (MR_Integer) 0)));
#line 981 "add_pragma.m"
            hlds__make_hlds__add_pragma__ModesTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Modes0_6, (MR_Integer) 1)));
#line 981 "add_pragma.m"
          }
#line 980 "add_pragma.m"
      }
#line 987 "add_pragma.m"
    if (hlds__make_hlds__add_pragma__succeeded)
#line 983 "add_pragma.m"
      {
#line 983 "add_pragma.m"
        MR_String hlds__make_hlds__add_pragma__Name_13;
#line 983 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PragmaVar_14;
#line 983 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PragmaVarsTail_15;

#line 983 "add_pragma.m"
        {
#line 983 "add_pragma.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_pragma__VarSet_7, hlds__make_hlds__add_pragma__Var_9, &hlds__make_hlds__add_pragma__Name_13);
        }
#line 984 "add_pragma.m"
        {
#line 984 "add_pragma.m"
          hlds__make_hlds__add_pragma__PragmaVar_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 984 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_9));
#line 984 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_13));
#line 984 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Mode_11));
#line 984 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 3) = ((MR_Box) ((MR_Integer) 0));
#line 984 "add_pragma.m"
        }
#line 985 "add_pragma.m"
        {
#line 985 "add_pragma.m"
          hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(hlds__make_hlds__add_pragma__VarsTail_10, hlds__make_hlds__add_pragma__ModesTail_12, hlds__make_hlds__add_pragma__VarSet_7, &hlds__make_hlds__add_pragma__PragmaVarsTail_15);
        }
#line 986 "add_pragma.m"
        {
#line 986 "add_pragma.m"
          MR_Word base;
#line 986 "add_pragma.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "add_pragma.m"
          *hlds__make_hlds__add_pragma__PragmaVars0_8 = base;
#line 986 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaVar_14));
#line 986 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaVarsTail_15));
#line 986 "add_pragma.m"
        }
#line 983 "add_pragma.m"
      }
#line 987 "add_pragma.m"
    else
#line 988 "add_pragma.m"
      *hlds__make_hlds__add_pragma__PragmaVars0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 987 "add_pragma.m"
  }
#line 975 "add_pragma.m"
}

#line 919 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_proc_13_p_0(
#line 919 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__ProcId_14,
#line 919 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__PrimaryProcId_15,
#line 919 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ProcTable_16,
#line 919 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__SymName_17,
#line 919 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredOrFunc_18,
#line 919 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_19,
#line 919 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ArgTypes_20,
#line 919 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_21,
#line 919 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_22,
#line 919 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_43,
#line 919 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44,
#line 919 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_45,
#line 919 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_46)
#line 919 "add_pragma.m"
{
#line 925 "add_pragma.m"
  {
#line 925 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_68_68;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ProcInfo_25;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ProgVarSet0_26;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Vars_27;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ProgVarSet_28;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Modes_29;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__InstVarSet_30;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PragmaVars_31;
#line 925 "add_pragma.m"
    MR_String hlds__make_hlds__add_pragma__C_ProcCode_33;
#line 925 "add_pragma.m"
    MR_String hlds__make_hlds__add_pragma__C_ExtraCode_34;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Attrs0_35;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Attrs1_36;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Attrs2_37;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Attrs3_38;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Attrs_39;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__FCInfo_41;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_54_54;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57_57;
#line 925 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60;
#line 926 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv0_ProcInfo_25;

#line 926 "add_pragma.m"
    {
#line 926 "add_pragma.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_pragma__ProcTable_16, ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_14)), &hlds__make_hlds__add_pragma__conv0_ProcInfo_25);
    }
#line 926 "add_pragma.m"
    hlds__make_hlds__add_pragma__ProcInfo_25 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_ProcInfo_25);
#line 7422 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 927 "add_pragma.m"
    {
#line 927 "add_pragma.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_68_68, &hlds__make_hlds__add_pragma__ProgVarSet0_26);
    }
#line 928 "add_pragma.m"
    {
#line 928 "add_pragma.m"
      mercury__varset__new_vars_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_68_68, hlds__make_hlds__add_pragma__Arity_19, &hlds__make_hlds__add_pragma__Vars_27, hlds__make_hlds__add_pragma__ProgVarSet0_26, &hlds__make_hlds__add_pragma__ProgVarSet_28);
    }
#line 929 "add_pragma.m"
    {
#line 929 "add_pragma.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__make_hlds__add_pragma__ProcInfo_25, &hlds__make_hlds__add_pragma__Modes_29);
    }
#line 930 "add_pragma.m"
    {
#line 930 "add_pragma.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(hlds__make_hlds__add_pragma__ProcInfo_25, &hlds__make_hlds__add_pragma__InstVarSet_30);
    }
#line 931 "add_pragma.m"
    {
#line 931 "add_pragma.m"
      hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(hlds__make_hlds__add_pragma__Vars_27, hlds__make_hlds__add_pragma__Modes_29, hlds__make_hlds__add_pragma__ProgVarSet_28, &hlds__make_hlds__add_pragma__PragmaVars_31);
    }
#line 938 "add_pragma.m"
    {
#line 938 "add_pragma.m"
      ll_backend__fact_table__fact_table_generate_c_code_11_p_0(hlds__make_hlds__add_pragma__SymName_17, hlds__make_hlds__add_pragma__PragmaVars_31, hlds__make_hlds__add_pragma__ProcId_14, hlds__make_hlds__add_pragma__PrimaryProcId_15, hlds__make_hlds__add_pragma__ProcInfo_25, hlds__make_hlds__add_pragma__ArgTypes_20, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__add_pragma__C_ProcCode_33, &hlds__make_hlds__add_pragma__C_ExtraCode_34);
    }
#line 945 "add_pragma.m"
    {
#line 945 "add_pragma.m"
      hlds__make_hlds__add_pragma__Attrs0_35 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
    }
#line 946 "add_pragma.m"
    {
#line 946 "add_pragma.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__Attrs0_35, &hlds__make_hlds__add_pragma__Attrs1_36);
    }
#line 947 "add_pragma.m"
    {
#line 947 "add_pragma.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__Attrs1_36, &hlds__make_hlds__add_pragma__Attrs2_37);
    }
#line 949 "add_pragma.m"
    {
#line 949 "add_pragma.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__Attrs2_37, &hlds__make_hlds__add_pragma__Attrs3_38);
    }
#line 950 "add_pragma.m"
    {
#line 950 "add_pragma.m"
      parse_tree__prog_data__add_extra_attribute_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__Attrs3_38, &hlds__make_hlds__add_pragma__Attrs_39);
    }
#line 953 "add_pragma.m"
    {
#line 953 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 953 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__C_ProcCode_33));
#line 953 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 953 "add_pragma.m"
    }
#line 952 "add_pragma.m"
    {
#line 952 "add_pragma.m"
      hlds__make_hlds__add_pragma__FCInfo_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 952 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Attrs_39));
#line 952 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_17));
#line 952 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
#line 952 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaVars_31));
#line 952 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__ProgVarSet_28));
#line 952 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__InstVarSet_30));
#line 952 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__V_54_54));
#line 952 "add_pragma.m"
    }
#line 954 "add_pragma.m"
    {
#line 954 "add_pragma.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__FCInfo_41, hlds__make_hlds__add_pragma__Status_21, hlds__make_hlds__add_pragma__Context_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57_57);
    }
#line 956 "add_pragma.m"
    hlds__make_hlds__add_pragma__succeeded = (strcmp(hlds__make_hlds__add_pragma__C_ExtraCode_34, (MR_String) "") == 0);
#line 958 "add_pragma.m"
    if (hlds__make_hlds__add_pragma__succeeded)
#line 958 "add_pragma.m"
      hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56;
#line 958 "add_pragma.m"
    else
#line 960 "add_pragma.m"
      {
#line 960 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ForeignBodyCode_42;
#line 960 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_59_59;

#line 959 "add_pragma.m"
        {
#line 959 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 959 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__C_ExtraCode_34));
#line 959 "add_pragma.m"
        }
#line 959 "add_pragma.m"
        {
#line 959 "add_pragma.m"
          hlds__make_hlds__add_pragma__ForeignBodyCode_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 959 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_42, 0) = ((MR_Box) ((MR_Integer) 0));
#line 959 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_42, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_59_59));
#line 959 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_22));
#line 959 "add_pragma.m"
        }
#line 961 "add_pragma.m"
        {
#line 961 "add_pragma.m"
          hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_pragma__ForeignBodyCode_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60);
        }
#line 960 "add_pragma.m"
      }
#line 967 "add_pragma.m"
    {
#line 967 "add_pragma.m"
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "fact_table", hlds__make_hlds__add_pragma__SymName_17, hlds__make_hlds__add_pragma__Arity_19, hlds__make_hlds__add_pragma__Status_21, hlds__make_hlds__add_pragma__Context_22, (MR_Integer) 7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_46);
#line 967 "add_pragma.m"
      return;
    }
#line 925 "add_pragma.m"
  }
#line 919 "add_pragma.m"
}

#line 902 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_procedures_13_p_0(
#line 902 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 902 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__PrimaryProcId_2,
#line 902 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ProcTable_3,
#line 902 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__SymName_4,
#line 902 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredOrFunc_5,
#line 902 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_6,
#line 902 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ArgTypes_7,
#line 902 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_8,
#line 902 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_9,
#line 902 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10,
#line 902 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_11,
#line 902 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12,
#line 902 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_13)
#line 902 "add_pragma.m"
{
#line 908 "add_pragma.m"
  while (MR_TRUE)
#line 908 "add_pragma.m"
    {
#line 908 "add_pragma.m"
      /* tailcall optimized into a loop */
#line 908 "add_pragma.m"
      {
#line 908 "add_pragma.m"
        MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 908 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "add_pragma.m"
          {
#line 908 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12;
#line 908 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10;
#line 908 "add_pragma.m"
          }
#line 908 "add_pragma.m"
        else
#line 911 "add_pragma.m"
          {
#line 911 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 911 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 911 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44_44;
#line 911 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_45_45;

#line 912 "add_pragma.m"
            {
#line 912 "add_pragma.m"
              hlds__make_hlds__add_pragma__add_fact_table_proc_13_p_0(hlds__make_hlds__add_pragma__ProcId_28, hlds__make_hlds__add_pragma__PrimaryProcId_2, hlds__make_hlds__add_pragma__ProcTable_3, hlds__make_hlds__add_pragma__SymName_4, hlds__make_hlds__add_pragma__PredOrFunc_5, hlds__make_hlds__add_pragma__Arity_6, hlds__make_hlds__add_pragma__ArgTypes_7, hlds__make_hlds__add_pragma__Status_8, hlds__make_hlds__add_pragma__Context_9, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44_44, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_45_45);
            }
#line 915 "add_pragma.m"
            /* direct tailcall eliminated */
#line 915 "add_pragma.m"
            {
#line 915 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__ProcIds_29;
#line 915 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44_44;
#line 915 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0__tmp_copy_12 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_45_45;

#line 915 "add_pragma.m"
              hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 915 "add_pragma.m"
              hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 915 "add_pragma.m"
              hlds__make_hlds__add_pragma__HeadVar__1_1 = hlds__make_hlds__add_pragma__HeadVar__1__tmp_copy_1;
#line 915 "add_pragma.m"
            }
#line 915 "add_pragma.m"
            continue;
#line 911 "add_pragma.m"
          }
#line 908 "add_pragma.m"
      }
#line 908 "add_pragma.m"
      break;
#line 908 "add_pragma.m"
    }
#line 902 "add_pragma.m"
}

#line 832 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(
#line 832 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__FTInfo_8,
#line 832 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_9,
#line 832 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_10,
#line 832 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38,
#line 832 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39,
#line 832 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40,
#line 832 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41)
#line 832 "add_pragma.m"
{
#line 836 "add_pragma.m"
  {
#line 836 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 836 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredArity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FTInfo_8, (MR_Integer) 0)));
#line 836 "add_pragma.m"
    MR_String hlds__make_hlds__add_pragma__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FTInfo_8, (MR_Integer) 1)));
#line 836 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Pred_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredArity_13, (MR_Integer) 0)));
#line 836 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredArity_13, (MR_Integer) 1)));
#line 836 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredicateTable_17;
#line 836 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

#line 839 "add_pragma.m"
    {
#line 839 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_pragma__PredicateTable_17);
    }
#line 840 "add_pragma.m"
    {
#line 840 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__Arity_16, &hlds__make_hlds__add_pragma__PredIds_18);
    }
#line 846 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "add_pragma.m"
      {
#line 844 "add_pragma.m"
        {
#line 844 "add_pragma.m"
          hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__Arity_16, hlds__make_hlds__add_pragma__Context_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[85]), hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41);
        }
#line 843 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38;
#line 843 "add_pragma.m"
      }
#line 846 "add_pragma.m"
    else
#line 847 "add_pragma.m"
      {
#line 847 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__HeadPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));
#line 847 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TailPredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));

#line 885 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__TailPredIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 849 "add_pragma.m"
          {
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredInfo0_22;
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredInfo_24;
#line 849 "add_pragma.m"
            MR_String hlds__make_hlds__add_pragma__C_HeaderCode_25;
#line 849 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__PrimaryProcId_26;
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcTable_27;
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ArgTypes_28;
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcIds_29;
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredOrFunc_30;
#line 849 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__NumArgs_31;
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ForeignDeclCode_32;
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_75_75;
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_78_78;
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_79_79;
#line 849 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_80_80;

#line 851 "add_pragma.m"
            {
#line 851 "add_pragma.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__HeadPredId_19, &hlds__make_hlds__add_pragma__PredInfo0_22);
            }
#line 860 "add_pragma.m"
            {
#line 860 "add_pragma.m"
              ll_backend__fact_table__fact_table_compile_facts_11_p_0(hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__Arity_16, hlds__make_hlds__add_pragma__FileName_14, hlds__make_hlds__add_pragma__PredInfo0_22, &hlds__make_hlds__add_pragma__PredInfo_24, hlds__make_hlds__add_pragma__Context_10, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_pragma__C_HeaderCode_25, &hlds__make_hlds__add_pragma__PrimaryProcId_26);
            }
#line 867 "add_pragma.m"
            {
#line 867 "add_pragma.m"
              hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_pragma__HeadPredId_19, hlds__make_hlds__add_pragma__PredInfo_24, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_75_75);
            }
#line 868 "add_pragma.m"
            {
#line 868 "add_pragma.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo_24, &hlds__make_hlds__add_pragma__ProcTable_27);
            }
#line 869 "add_pragma.m"
            {
#line 869 "add_pragma.m"
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pragma__PredInfo_24, &hlds__make_hlds__add_pragma__ArgTypes_28);
            }
#line 870 "add_pragma.m"
            {
#line 870 "add_pragma.m"
              hlds__make_hlds__add_pragma__ProcIds_29 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__make_hlds__add_pragma__PredInfo_24);
            }
#line 871 "add_pragma.m"
            {
#line 871 "add_pragma.m"
              hlds__make_hlds__add_pragma__PredOrFunc_30 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__PredInfo_24);
            }
#line 872 "add_pragma.m"
            {
#line 872 "add_pragma.m"
              parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__add_pragma__PredOrFunc_30, hlds__make_hlds__add_pragma__Arity_16, &hlds__make_hlds__add_pragma__NumArgs_31);
            }
#line 876 "add_pragma.m"
            {
#line 876 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 876 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__C_HeaderCode_25));
#line 876 "add_pragma.m"
            }
#line 875 "add_pragma.m"
            {
#line 875 "add_pragma.m"
              hlds__make_hlds__add_pragma__ForeignDeclCode_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 875 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 0) = ((MR_Box) ((MR_Integer) 0));
#line 875 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 875 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_78_78));
#line 875 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 875 "add_pragma.m"
            }
#line 877 "add_pragma.m"
            {
#line 877 "add_pragma.m"
              hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_pragma__ForeignDeclCode_32, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_75_75, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_79_79);
            }
#line 879 "add_pragma.m"
            {
#line 879 "add_pragma.m"
              hlds__hlds_module__module_add_fact_table_file_3_p_0(hlds__make_hlds__add_pragma__FileName_14, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_79_79, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_80_80);
            }
#line 882 "add_pragma.m"
            {
#line 882 "add_pragma.m"
              hlds__make_hlds__add_pragma__add_fact_table_procedures_13_p_0(hlds__make_hlds__add_pragma__ProcIds_29, hlds__make_hlds__add_pragma__PrimaryProcId_26, hlds__make_hlds__add_pragma__ProcTable_27, hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__PredOrFunc_30, hlds__make_hlds__add_pragma__NumArgs_31, hlds__make_hlds__add_pragma__ArgTypes_28, hlds__make_hlds__add_pragma__Status_9, hlds__make_hlds__add_pragma__Context_10, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_80_80, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41);
#line 882 "add_pragma.m"
              return;
            }
#line 849 "add_pragma.m"
          }
#line 885 "add_pragma.m"
        else
#line 886 "add_pragma.m"
          {
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_35;
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_36;
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Spec_37;
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_45_45;
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_51_51;
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_52_52;
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_53_53;
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_65_65;
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_66_66;
#line 886 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_70_70;

#line 888 "add_pragma.m"
            {
#line 888 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 888 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pred_15));
#line 888 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_16));
#line 888 "add_pragma.m"
            }
#line 888 "add_pragma.m"
            {
#line 888 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 888 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_53_53));
#line 888 "add_pragma.m"
            }
#line 888 "add_pragma.m"
            {
#line 888 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_52_52));
#line 888 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[90])));
#line 888 "add_pragma.m"
            }
#line 887 "add_pragma.m"
            {
#line 887 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[163])));
#line 887 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_51_51));
#line 887 "add_pragma.m"
            }
#line 887 "add_pragma.m"
            {
#line 887 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_3[22])));
#line 887 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 887 "add_pragma.m"
            }
#line 887 "add_pragma.m"
            {
#line 887 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[162])));
#line 887 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_45_45));
#line 887 "add_pragma.m"
            }
#line 890 "add_pragma.m"
            {
#line 890 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 890 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_35));
#line 890 "add_pragma.m"
            }
#line 890 "add_pragma.m"
            {
#line 890 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_66_66));
#line 890 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 890 "add_pragma.m"
            }
#line 890 "add_pragma.m"
            {
#line 890 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 890 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_65_65));
#line 890 "add_pragma.m"
            }
#line 891 "add_pragma.m"
            {
#line 891 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_36));
#line 891 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 891 "add_pragma.m"
            }
#line 891 "add_pragma.m"
            {
#line 891 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 891 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 891 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 891 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_37, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 891 "add_pragma.m"
            }
#line 892 "add_pragma.m"
            {
#line 892 "add_pragma.m"
              MR_Word base;
#line 892 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41 = base;
#line 892 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_37));
#line 892 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40));
#line 892 "add_pragma.m"
            }
#line 886 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38;
#line 886 "add_pragma.m"
          }
#line 847 "add_pragma.m"
      }
#line 836 "add_pragma.m"
  }
#line 832 "add_pragma.m"
}

#line 596 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_5_p_0(
#line 596 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Globals_6,
#line 596 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_7,
#line 596 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Feature_8,
#line 596 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23,
#line 596 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24)
#line 596 "add_pragma.m"
{
#line 602 "add_pragma.m"
  {
#line 602 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 602 "add_pragma.m"
#line 602 "add_pragma.m"
    switch (hlds__make_hlds__add_pragma__Feature_8) {
#line 602 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 602 "add_pragma.m"
      case (MR_Integer) 0:
#line 602 "add_pragma.m"
        {
#line 602 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__IsConcurrencySupported_10;

#line 603 "add_pragma.m"
          {
#line 603 "add_pragma.m"
            libs__globals__current_grade_supports_concurrency_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__IsConcurrencySupported_10);
          }
#line 611 "add_pragma.m"
#line 611 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__IsConcurrencySupported_10) {
#line 611 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 611 "add_pragma.m"
            case (MR_Integer) 0:
#line 605 "add_pragma.m"
              {
#line 605 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_12;
#line 605 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_13;
#line 605 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_211_211;

#line 608 "add_pragma.m"
                {
#line 608 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 608 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 608 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[148])));
#line 608 "add_pragma.m"
                }
#line 609 "add_pragma.m"
                {
#line 609 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_211_211, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_12));
#line 609 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "add_pragma.m"
                }
#line 609 "add_pragma.m"
                {
#line 609 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 609 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 609 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_211_211));
#line 609 "add_pragma.m"
                }
#line 610 "add_pragma.m"
                {
#line 610 "add_pragma.m"
                  MR_Word base;
#line 610 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 610 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_13));
#line 610 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 610 "add_pragma.m"
                }
#line 605 "add_pragma.m"
              }
#line 611 "add_pragma.m"
              break;
#line 611 "add_pragma.m"
            case (MR_Integer) 1:
#line 612 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 611 "add_pragma.m"
              break;
#line 611 "add_pragma.m"
          }
#line 602 "add_pragma.m"
        }
#line 602 "add_pragma.m"
        break;
#line 602 "add_pragma.m"
      case (MR_Integer) 7:
#line 712 "add_pragma.m"
        {
#line 712 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__GC_Method_22;

#line 713 "add_pragma.m"
          {
#line 713 "add_pragma.m"
            libs__globals__get_gc_method_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__GC_Method_22);
          }
#line 724 "add_pragma.m"
#line 724 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__GC_Method_22) {
#line 724 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 724 "add_pragma.m"
            case (MR_Integer) 5:
#line 724 "add_pragma.m"
            case (MR_Integer) 1:
#line 727 "add_pragma.m"
              {
#line 727 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_38_38;
#line 727 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_276;
#line 727 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_277;

#line 730 "add_pragma.m"
                {
#line 730 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 730 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_276, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 730 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[149])));
#line 730 "add_pragma.m"
                }
#line 731 "add_pragma.m"
                {
#line 731 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_276));
#line 731 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "add_pragma.m"
                }
#line 731 "add_pragma.m"
                {
#line 731 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_277 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 731 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_277, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_277, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 731 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_277, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_38_38));
#line 731 "add_pragma.m"
                }
#line 732 "add_pragma.m"
                {
#line 732 "add_pragma.m"
                  MR_Word base;
#line 732 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 732 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_277));
#line 732 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 732 "add_pragma.m"
                }
#line 727 "add_pragma.m"
              }
#line 724 "add_pragma.m"
              break;
#line 724 "add_pragma.m"
            case (MR_Integer) 0:
#line 719 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 724 "add_pragma.m"
              break;
#line 724 "add_pragma.m"
            case (MR_Integer) 2:
#line 720 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 724 "add_pragma.m"
              break;
#line 724 "add_pragma.m"
            case (MR_Integer) 3:
#line 721 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 724 "add_pragma.m"
              break;
#line 724 "add_pragma.m"
            case (MR_Integer) 4:
#line 722 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 724 "add_pragma.m"
              break;
#line 724 "add_pragma.m"
          }
#line 712 "add_pragma.m"
        }
#line 602 "add_pragma.m"
        break;
#line 602 "add_pragma.m"
      case (MR_Integer) 2:
#line 633 "add_pragma.m"
        {
#line 633 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__SinglePrecFloat_234;

#line 634 "add_pragma.m"
          {
#line 634 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 225, &hlds__make_hlds__add_pragma__SinglePrecFloat_234);
          }
#line 647 "add_pragma.m"
#line 647 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__SinglePrecFloat_234) {
#line 647 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 647 "add_pragma.m"
            case (MR_Integer) 0:
#line 648 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 647 "add_pragma.m"
              break;
#line 647 "add_pragma.m"
            case (MR_Integer) 1:
#line 637 "add_pragma.m"
              {
#line 637 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_161_161;
#line 637 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_224;
#line 637 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_225;

#line 643 "add_pragma.m"
                {
#line 643 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 643 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_224, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 643 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_224, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[152])));
#line 643 "add_pragma.m"
                }
#line 645 "add_pragma.m"
                {
#line 645 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_224));
#line 645 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "add_pragma.m"
                }
#line 645 "add_pragma.m"
                {
#line 645 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 645 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 645 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_225, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_161_161));
#line 645 "add_pragma.m"
                }
#line 646 "add_pragma.m"
                {
#line 646 "add_pragma.m"
                  MR_Word base;
#line 646 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 646 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_225));
#line 646 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 646 "add_pragma.m"
                }
#line 637 "add_pragma.m"
              }
#line 647 "add_pragma.m"
              break;
#line 647 "add_pragma.m"
          }
#line 633 "add_pragma.m"
        }
#line 602 "add_pragma.m"
        break;
#line 602 "add_pragma.m"
      case (MR_Integer) 3:
#line 651 "add_pragma.m"
        {
#line 651 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__IsTablingSupported_16;

#line 652 "add_pragma.m"
          {
#line 652 "add_pragma.m"
            libs__globals__current_grade_supports_tabling_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__IsTablingSupported_16);
          }
#line 660 "add_pragma.m"
#line 660 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__IsTablingSupported_16) {
#line 660 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 660 "add_pragma.m"
            case (MR_Integer) 0:
#line 654 "add_pragma.m"
              {
#line 654 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_127_127;
#line 654 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_237;
#line 654 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_238;

#line 657 "add_pragma.m"
                {
#line 657 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_237 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 657 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_237, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 657 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_237, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[153])));
#line 657 "add_pragma.m"
                }
#line 658 "add_pragma.m"
                {
#line 658 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_237));
#line 658 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "add_pragma.m"
                }
#line 658 "add_pragma.m"
                {
#line 658 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_238 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 658 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 658 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_127_127));
#line 658 "add_pragma.m"
                }
#line 659 "add_pragma.m"
                {
#line 659 "add_pragma.m"
                  MR_Word base;
#line 659 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 659 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_238));
#line 659 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 659 "add_pragma.m"
                }
#line 654 "add_pragma.m"
              }
#line 660 "add_pragma.m"
              break;
#line 660 "add_pragma.m"
            case (MR_Integer) 1:
#line 661 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 660 "add_pragma.m"
              break;
#line 660 "add_pragma.m"
          }
#line 651 "add_pragma.m"
        }
#line 602 "add_pragma.m"
        break;
#line 602 "add_pragma.m"
      case (MR_Integer) 4:
#line 664 "add_pragma.m"
        {
#line 664 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__IsParConjSupported_17;

#line 665 "add_pragma.m"
          {
#line 665 "add_pragma.m"
            libs__globals__current_grade_supports_par_conj_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__IsParConjSupported_17);
          }
#line 673 "add_pragma.m"
#line 673 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__IsParConjSupported_17) {
#line 673 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 673 "add_pragma.m"
            case (MR_Integer) 0:
#line 667 "add_pragma.m"
              {
#line 667 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_111_111;
#line 667 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_246;
#line 667 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_247;

#line 670 "add_pragma.m"
                {
#line 670 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_246 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 670 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_246, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 670 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[154])));
#line 670 "add_pragma.m"
                }
#line 671 "add_pragma.m"
                {
#line 671 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_246));
#line 671 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "add_pragma.m"
                }
#line 671 "add_pragma.m"
                {
#line 671 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_247 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 671 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 671 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_111_111));
#line 671 "add_pragma.m"
                }
#line 672 "add_pragma.m"
                {
#line 672 "add_pragma.m"
                  MR_Word base;
#line 672 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 672 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_247));
#line 672 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 672 "add_pragma.m"
                }
#line 667 "add_pragma.m"
              }
#line 673 "add_pragma.m"
              break;
#line 673 "add_pragma.m"
            case (MR_Integer) 1:
#line 674 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 673 "add_pragma.m"
              break;
#line 673 "add_pragma.m"
          }
#line 664 "add_pragma.m"
        }
#line 602 "add_pragma.m"
        break;
#line 602 "add_pragma.m"
      case (MR_Integer) 1:
#line 615 "add_pragma.m"
        {
#line 615 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__SinglePrecFloat_14;

#line 616 "add_pragma.m"
          {
#line 616 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 225, &hlds__make_hlds__add_pragma__SinglePrecFloat_14);
          }
#line 629 "add_pragma.m"
#line 629 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__SinglePrecFloat_14) {
#line 629 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 629 "add_pragma.m"
            case (MR_Integer) 0:
#line 619 "add_pragma.m"
              {
#line 619 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_195_195;
#line 619 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_215;
#line 619 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_216;

#line 625 "add_pragma.m"
                {
#line 625 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 625 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_215, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 625 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[157])));
#line 625 "add_pragma.m"
                }
#line 627 "add_pragma.m"
                {
#line 627 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_195_195, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_215));
#line 627 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_195_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "add_pragma.m"
                }
#line 627 "add_pragma.m"
                {
#line 627 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 627 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_216, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_195_195));
#line 627 "add_pragma.m"
                }
#line 628 "add_pragma.m"
                {
#line 628 "add_pragma.m"
                  MR_Word base;
#line 628 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 628 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_216));
#line 628 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 628 "add_pragma.m"
                }
#line 619 "add_pragma.m"
              }
#line 629 "add_pragma.m"
              break;
#line 629 "add_pragma.m"
            case (MR_Integer) 1:
#line 630 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 629 "add_pragma.m"
              break;
#line 629 "add_pragma.m"
          }
#line 615 "add_pragma.m"
        }
#line 602 "add_pragma.m"
        break;
#line 602 "add_pragma.m"
      case (MR_Integer) 6:
#line 694 "add_pragma.m"
        {
#line 694 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__ReorderConj_19;
#line 694 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__ReorderDisj_20;
#line 694 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__FullyStrict_21;

#line 695 "add_pragma.m"
          {
#line 695 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 164, &hlds__make_hlds__add_pragma__ReorderConj_19);
          }
#line 696 "add_pragma.m"
          {
#line 696 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 165, &hlds__make_hlds__add_pragma__ReorderDisj_20);
          }
#line 697 "add_pragma.m"
          {
#line 697 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 166, &hlds__make_hlds__add_pragma__FullyStrict_21);
          }
#line 699 "add_pragma.m"
          hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ReorderConj_19 == (MR_Integer) 0);
#line 699 "add_pragma.m"
          if (hlds__make_hlds__add_pragma__succeeded)
#line 699 "add_pragma.m"
            {
#line 700 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ReorderDisj_20 == (MR_Integer) 0);
#line 699 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 701 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__FullyStrict_21 == (MR_Integer) 1);
#line 699 "add_pragma.m"
            }
#line 704 "add_pragma.m"
          if (hlds__make_hlds__add_pragma__succeeded)
#line 704 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 704 "add_pragma.m"
          else
#line 706 "add_pragma.m"
            {
#line 706 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_57_57;
#line 706 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Msg_267;
#line 706 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Spec_268;

#line 707 "add_pragma.m"
              {
#line 707 "add_pragma.m"
                hlds__make_hlds__add_pragma__Msg_267 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 707 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_267, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 707 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_267, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[158])));
#line 707 "add_pragma.m"
              }
#line 708 "add_pragma.m"
              {
#line 708 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_267));
#line 708 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "add_pragma.m"
              }
#line 708 "add_pragma.m"
              {
#line 708 "add_pragma.m"
                hlds__make_hlds__add_pragma__Spec_268 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 708 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_268, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_268, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 708 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_268, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_57_57));
#line 708 "add_pragma.m"
              }
#line 709 "add_pragma.m"
              {
#line 709 "add_pragma.m"
                MR_Word base;
#line 709 "add_pragma.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 709 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_268));
#line 709 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 709 "add_pragma.m"
              }
#line 706 "add_pragma.m"
            }
#line 694 "add_pragma.m"
        }
#line 602 "add_pragma.m"
        break;
#line 602 "add_pragma.m"
      case (MR_Integer) 5:
#line 677 "add_pragma.m"
        {
#line 677 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__UseTrail_18;

#line 678 "add_pragma.m"
          {
#line 678 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 219, &hlds__make_hlds__add_pragma__UseTrail_18);
          }
#line 690 "add_pragma.m"
#line 690 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__UseTrail_18) {
#line 690 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 690 "add_pragma.m"
            case (MR_Integer) 0:
#line 680 "add_pragma.m"
              {
#line 680 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_95_95;
#line 680 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_255;
#line 680 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_256;

#line 686 "add_pragma.m"
                {
#line 686 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_255 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 686 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_255, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 686 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_255, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
#line 686 "add_pragma.m"
                }
#line 688 "add_pragma.m"
                {
#line 688 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_255));
#line 688 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "add_pragma.m"
                }
#line 688 "add_pragma.m"
                {
#line 688 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 688 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 688 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_95_95));
#line 688 "add_pragma.m"
                }
#line 689 "add_pragma.m"
                {
#line 689 "add_pragma.m"
                  MR_Word base;
#line 689 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 689 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_256));
#line 689 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 689 "add_pragma.m"
                }
#line 680 "add_pragma.m"
              }
#line 690 "add_pragma.m"
              break;
#line 690 "add_pragma.m"
            case (MR_Integer) 1:
#line 691 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 690 "add_pragma.m"
              break;
#line 690 "add_pragma.m"
          }
#line 677 "add_pragma.m"
        }
#line 602 "add_pragma.m"
        break;
#line 602 "add_pragma.m"
    }
#line 602 "add_pragma.m"
  }
#line 596 "add_pragma.m"
}

#line 593 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1(
#line 593 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 593 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 593 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 593 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3)
#line 593 "add_pragma.m"
{
#line 593 "add_pragma.m"
  {
#line 593 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 593 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_24;

#line 593 "add_pragma.m"
    {
#line 593 "add_pragma.m"
      hlds__make_hlds__add_pragma__check_required_feature_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2), &hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_24);
    }
#line 593 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_24));
#line 593 "add_pragma.m"
  }
#line 593 "add_pragma.m"
}

#line 578 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0(
#line 578 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__FeatureSet_8,
#line 578 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ImportStatus_9,
#line 578 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_10,
#line 578 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_15,
#line 578 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_16,
#line 578 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_17,
#line 578 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_18)
#line 578 "add_pragma.m"
{
#line 583 "add_pragma.m"
  {
#line 583 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 583 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Globals_13;
#line 583 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__IsImported_14;

#line 584 "add_pragma.m"
    {
#line 584 "add_pragma.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_15, &hlds__make_hlds__add_pragma__Globals_13);
    }
#line 585 "add_pragma.m"
    {
#line 585 "add_pragma.m"
      hlds__make_hlds__add_pragma__IsImported_14 = hlds__hlds_pred__status_is_imported_1_f_0(hlds__make_hlds__add_pragma__ImportStatus_9);
    }
#line 591 "add_pragma.m"
#line 591 "add_pragma.m"
    switch (hlds__make_hlds__add_pragma__IsImported_14) {
#line 591 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 591 "add_pragma.m"
      case (MR_Integer) 0:
#line 592 "add_pragma.m"
        {
#line 592 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_19_19;
#line 593 "add_pragma.m"
          MR_Box hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_Specs_18;

#line 593 "add_pragma.m"
          {
#line 593 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 593 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_19_19, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[0]));
#line 593 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1));
#line 593 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 593 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_19_19, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__Globals_13));
#line 593 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_19_19, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 593 "add_pragma.m"
          }
#line 593 "add_pragma.m"
          {
#line 593 "add_pragma.m"
            mercury__set__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_required_feature_0, (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_1[1], hlds__make_hlds__add_pragma__V_19_19, hlds__make_hlds__add_pragma__FeatureSet_8, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_17)), &hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_Specs_18);
          }
#line 593 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_18 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_Specs_18);
#line 592 "add_pragma.m"
        }
#line 591 "add_pragma.m"
        break;
#line 591 "add_pragma.m"
      case (MR_Integer) 1:
#line 589 "add_pragma.m"
        {
#line 590 "add_pragma.m"
          {
#line 590 "add_pragma.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma", (MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature_set\'/7", (MR_String) "imported require_feature_set pragma");
#line 590 "add_pragma.m"
            return;
          }
#line 589 "add_pragma.m"
        }
#line 591 "add_pragma.m"
        break;
#line 591 "add_pragma.m"
    }
#line 583 "add_pragma.m"
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_16 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_15;
#line 583 "add_pragma.m"
  }
#line 578 "add_pragma.m"
}

#line 565 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__pragma_conflict_error_6_p_0(
#line 565 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_7,
#line 565 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_8,
#line 565 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_9,
#line 565 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_10,
#line 565 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15,
#line 565 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16)
#line 565 "add_pragma.m"
{
#line 568 "add_pragma.m"
  {
#line 568 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Pieces_12;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Msg_13;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Spec_14;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_19_19;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_20_20;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_21_21;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_24_24;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_25_25;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_26_26;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_33_33;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_34_34;
#line 568 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_38_38;

#line 569 "add_pragma.m"
    {
#line 569 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 569 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_10));
#line 569 "add_pragma.m"
    }
#line 571 "add_pragma.m"
    {
#line 571 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 571 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_7));
#line 571 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_8));
#line 571 "add_pragma.m"
    }
#line 571 "add_pragma.m"
    {
#line 571 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 571 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_26_26));
#line 571 "add_pragma.m"
    }
#line 571 "add_pragma.m"
    {
#line 571 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_25_25));
#line 571 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
#line 571 "add_pragma.m"
    }
#line 570 "add_pragma.m"
    {
#line 570 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[144])));
#line 570 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_24_24));
#line 570 "add_pragma.m"
    }
#line 569 "add_pragma.m"
    {
#line 569 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_20_20));
#line 569 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_21_21));
#line 569 "add_pragma.m"
    }
#line 569 "add_pragma.m"
    {
#line 569 "add_pragma.m"
      hlds__make_hlds__add_pragma__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
#line 569 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_19_19));
#line 569 "add_pragma.m"
    }
#line 572 "add_pragma.m"
    {
#line 572 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 572 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_12));
#line 572 "add_pragma.m"
    }
#line 572 "add_pragma.m"
    {
#line 572 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_34_34));
#line 572 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "add_pragma.m"
    }
#line 572 "add_pragma.m"
    {
#line 572 "add_pragma.m"
      hlds__make_hlds__add_pragma__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 572 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_9));
#line 572 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_33_33));
#line 572 "add_pragma.m"
    }
#line 573 "add_pragma.m"
    {
#line 573 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_13));
#line 573 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "add_pragma.m"
    }
#line 573 "add_pragma.m"
    {
#line 573 "add_pragma.m"
      hlds__make_hlds__add_pragma__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 573 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 573 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_38_38));
#line 573 "add_pragma.m"
    }
#line 574 "add_pragma.m"
    {
#line 574 "add_pragma.m"
      MR_Word base;
#line 574 "add_pragma.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16 = base;
#line 574 "add_pragma.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_14));
#line 574 "add_pragma.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15));
#line 574 "add_pragma.m"
    }
#line 568 "add_pragma.m"
  }
#line 565 "add_pragma.m"
}

#line 553 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__pragma_status_error_6_p_0(
#line 553 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_7,
#line 553 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_8,
#line 553 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_9,
#line 553 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_10,
#line 553 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15,
#line 553 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16)
#line 553 "add_pragma.m"
{
#line 556 "add_pragma.m"
  {
#line 556 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Pieces_12;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Msg_13;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Spec_14;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_19_19;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_20_20;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_21_21;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_24_24;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_25_25;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_26_26;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_33_33;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_34_34;
#line 556 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_38_38;

#line 557 "add_pragma.m"
    {
#line 557 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 557 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_10));
#line 557 "add_pragma.m"
    }
#line 559 "add_pragma.m"
    {
#line 559 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 559 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_7));
#line 559 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_8));
#line 559 "add_pragma.m"
    }
#line 559 "add_pragma.m"
    {
#line 559 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 559 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_26_26));
#line 559 "add_pragma.m"
    }
#line 559 "add_pragma.m"
    {
#line 559 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_25_25));
#line 559 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[39])));
#line 559 "add_pragma.m"
    }
#line 558 "add_pragma.m"
    {
#line 558 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[147])));
#line 558 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_24_24));
#line 558 "add_pragma.m"
    }
#line 557 "add_pragma.m"
    {
#line 557 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_20_20));
#line 557 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_21_21));
#line 557 "add_pragma.m"
    }
#line 557 "add_pragma.m"
    {
#line 557 "add_pragma.m"
      hlds__make_hlds__add_pragma__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
#line 557 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_19_19));
#line 557 "add_pragma.m"
    }
#line 561 "add_pragma.m"
    {
#line 561 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 561 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_12));
#line 561 "add_pragma.m"
    }
#line 561 "add_pragma.m"
    {
#line 561 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_34_34));
#line 561 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "add_pragma.m"
    }
#line 561 "add_pragma.m"
    {
#line 561 "add_pragma.m"
      hlds__make_hlds__add_pragma__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_9));
#line 561 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_33_33));
#line 561 "add_pragma.m"
    }
#line 562 "add_pragma.m"
    {
#line 562 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_13));
#line 562 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "add_pragma.m"
    }
#line 562 "add_pragma.m"
    {
#line 562 "add_pragma.m"
      hlds__make_hlds__add_pragma__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 562 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 562 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_38_38));
#line 562 "add_pragma.m"
    }
#line 563 "add_pragma.m"
    {
#line 563 "add_pragma.m"
      MR_Word base;
#line 563 "add_pragma.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16 = base;
#line 563 "add_pragma.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_14));
#line 563 "add_pragma.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15));
#line 563 "add_pragma.m"
    }
#line 556 "add_pragma.m"
  }
#line 553 "add_pragma.m"
}

#line 538 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__get_matching_pred_ids_4_p_0(
#line 538 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Module0_5,
#line 538 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_6,
#line 538 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_7,
#line 538 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PredIds_8)
#line 538 "add_pragma.m"
{
#line 541 "add_pragma.m"
  {
#line 541 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 541 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredTable0_9;

#line 542 "add_pragma.m"
    {
#line 542 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__Module0_5, &hlds__make_hlds__add_pragma__PredTable0_9);
    }
#line 547 "add_pragma.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Name_6)) == (MR_mktag((MR_Integer) 1))))
#line 548 "add_pragma.m"
      {
#line 549 "add_pragma.m"
        {
#line 549 "add_pragma.m"
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredTable0_9, (MR_Integer) 0, hlds__make_hlds__add_pragma__Name_6, hlds__make_hlds__add_pragma__Arity_7, hlds__make_hlds__add_pragma__PredIds_8);
#line 549 "add_pragma.m"
          return;
        }
#line 548 "add_pragma.m"
      }
#line 547 "add_pragma.m"
    else
#line 545 "add_pragma.m"
      {
#line 546 "add_pragma.m"
        {
#line 546 "add_pragma.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma", (MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/4", (MR_String) "unqualified name");
#line 546 "add_pragma.m"
          return;
        }
#line 545 "add_pragma.m"
      }
#line 541 "add_pragma.m"
  }
#line 538 "add_pragma.m"
}

#line 531 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_marker_pred_info_3_p_0(
#line 531 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Marker_4,
#line 531 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_8,
#line 531 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_9)
#line 531 "add_pragma.m"
{
#line 533 "add_pragma.m"
  {
#line 533 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 533 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Markers0_6;
#line 533 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Markers_7;

#line 534 "add_pragma.m"
    {
#line 534 "add_pragma.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_8, &hlds__make_hlds__add_pragma__Markers0_6);
    }
#line 535 "add_pragma.m"
    {
#line 535 "add_pragma.m"
      hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pragma__Marker_4, hlds__make_hlds__add_pragma__Markers0_6, &hlds__make_hlds__add_pragma__Markers_7);
    }
#line 536 "add_pragma.m"
    {
#line 536 "add_pragma.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pragma__Markers_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_8, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_9);
#line 536 "add_pragma.m"
      return;
    }
#line 533 "add_pragma.m"
  }
#line 531 "add_pragma.m"
}

#line 508 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__UpdatePredInfo_2,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_3,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_4,
#line 508 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5,
#line 508 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6,
#line 508 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__7_7)
#line 508 "add_pragma.m"
{
#line 512 "add_pragma.m"
  {
#line 512 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 512 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "add_pragma.m"
      {
#line 512 "add_pragma.m"
        *hlds__make_hlds__add_pragma__HeadVar__7_7 = (MR_Integer) 0;
#line 512 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6 = hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5;
#line 512 "add_pragma.m"
      }
#line 512 "add_pragma.m"
    else
#line 514 "add_pragma.m"
      {
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_21;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredInfo_22;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus0_23;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus1_24;
#line 514 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27;
#line 515 "add_pragma.m"
        MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_21;
#line 516 "add_pragma.m"
        void MR_CALL (* hlds__make_hlds__add_pragma__func_1)(MR_Box, MR_Box, MR_Box *);
#line 516 "add_pragma.m"
        MR_Box hlds__make_hlds__add_pragma__conv2_PredInfo_22;

#line 515 "add_pragma.m"
        {
#line 515 "add_pragma.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_29_29, hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
        }
#line 515 "add_pragma.m"
        hlds__make_hlds__add_pragma__PredInfo0_21 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
#line 516 "add_pragma.m"
        hlds__make_hlds__add_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__UpdatePredInfo_2, (MR_Integer) 1)));
#line 516 "add_pragma.m"
        {
#line 516 "add_pragma.m"
          hlds__make_hlds__add_pragma__func_1(((MR_Box) hlds__make_hlds__add_pragma__UpdatePredInfo_2), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo0_21)), &hlds__make_hlds__add_pragma__conv2_PredInfo_22);
        }
#line 516 "add_pragma.m"
        hlds__make_hlds__add_pragma__PredInfo_22 = ((MR_Word) hlds__make_hlds__add_pragma__conv2_PredInfo_22);
#line 518 "add_pragma.m"
        {
#line 518 "add_pragma.m"
          hlds__make_hlds__add_pragma__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(hlds__make_hlds__add_pragma__PredInfo_22);
        }
#line 518 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 518 "add_pragma.m"
          {
#line 519 "add_pragma.m"
            hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__MustBeExported_4 == (MR_Integer) 1);
#line 518 "add_pragma.m"
            if (hlds__make_hlds__add_pragma__succeeded)
#line 518 "add_pragma.m"
              {
#line 520 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 520 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 518 "add_pragma.m"
              }
#line 518 "add_pragma.m"
          }
#line 523 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 522 "add_pragma.m"
          hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 1;
#line 523 "add_pragma.m"
        else
#line 524 "add_pragma.m"
          hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 0;
#line 526 "add_pragma.m"
        {
#line 526 "add_pragma.m"
          mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_29_29, hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_22)), hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, &hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27);
        }
#line 527 "add_pragma.m"
        {
#line 527 "add_pragma.m"
          hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(hlds__make_hlds__add_pragma__PredIds_15, hlds__make_hlds__add_pragma__UpdatePredInfo_2, hlds__make_hlds__add_pragma__Status_3, hlds__make_hlds__add_pragma__MustBeExported_4, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6, &hlds__make_hlds__add_pragma__WrongStatus1_24);
        }
#line 529 "add_pragma.m"
        {
#line 529 "add_pragma.m"
          mercury__bool__or_3_p_0(hlds__make_hlds__add_pragma__WrongStatus0_23, hlds__make_hlds__add_pragma__WrongStatus1_24, hlds__make_hlds__add_pragma__HeadVar__7_7);
#line 529 "add_pragma.m"
          return;
        }
#line 514 "add_pragma.m"
      }
#line 512 "add_pragma.m"
  }
#line 508 "add_pragma.m"
}

#line 496 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_1(
#line 496 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
#line 496 "add_pragma.m"
{
#line 496 "add_pragma.m"
  {
#line 496 "add_pragma.m"
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

#line 496 "add_pragma.m"
    MR_builtin_longjmp((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__commit_0, 1);
#line 496 "add_pragma.m"
  }
#line 496 "add_pragma.m"
}

#line 496 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_3(
#line 496 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
#line 496 "add_pragma.m"
{
#line 496 "add_pragma.m"
  {
#line 496 "add_pragma.m"
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

#line 496 "add_pragma.m"
    (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Marker_15 = ((MR_Word) (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__conv1_Marker_15);
#line 496 "add_pragma.m"
    {
#line 496 "add_pragma.m"
      hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_2(hlds__make_hlds__add_pragma__env_ptr);
#line 496 "add_pragma.m"
      return;
    }
#line 496 "add_pragma.m"
  }
#line 496 "add_pragma.m"
}

#line 496 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_2(
#line 496 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
#line 496 "add_pragma.m"
{
#line 496 "add_pragma.m"
  {
#line 496 "add_pragma.m"
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

#line 497 "add_pragma.m"
    {
#line 497 "add_pragma.m"
      (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Markers_13, (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Marker_15);
    }
#line 497 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded)
#line 497 "add_pragma.m"
      {
#line 497 "add_pragma.m"
        hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_1(hlds__make_hlds__add_pragma__env_ptr);
#line 497 "add_pragma.m"
        return;
      }
#line 496 "add_pragma.m"
  }
#line 496 "add_pragma.m"
}

#line 496 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_4(
#line 496 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
#line 496 "add_pragma.m"
{
#line 496 "add_pragma.m"
  {
#line 496 "add_pragma.m"
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

#line 496 "add_pragma.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__commit_0) == 0)
#line 496 "add_pragma.m"
      {
#line 496 "add_pragma.m"
        {
#line 496 "add_pragma.m"
          {
#line 496 "add_pragma.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0, &(hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__conv1_Marker_15, (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__ConflictList_3, hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_3, hlds__make_hlds__add_pragma__env_ptr);
          }
#line 496 "add_pragma.m"
        }
#line 496 "add_pragma.m"
        (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded = MR_FALSE;
#line 496 "add_pragma.m"
      }
#line 496 "add_pragma.m"
    else
#line 496 "add_pragma.m"
      (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded = MR_TRUE;
#line 496 "add_pragma.m"
  }
#line 496 "add_pragma.m"
}

#line 487 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0(
#line 487 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredTable_1,
#line 487 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__2_2,
#line 487 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ConflictList_3,
#line 487 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__4_4)
#line 487 "add_pragma.m"
{
#line 487 "add_pragma.m"
  {
#line 487 "add_pragma.m"
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s hlds__make_hlds__add_pragma__env;

#line 487 "add_pragma.m"
    (hlds__make_hlds__add_pragma__env).hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__ConflictList_3 = hlds__make_hlds__add_pragma__ConflictList_3;
#line 490 "add_pragma.m"
    while (MR_TRUE)
#line 490 "add_pragma.m"
      {
#line 490 "add_pragma.m"
        /* tailcall optimized into a loop */
#line 490 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "add_pragma.m"
          *hlds__make_hlds__add_pragma__HeadVar__4_4 = (MR_Integer) 0;
#line 490 "add_pragma.m"
        else
#line 491 "add_pragma.m"
          {
#line 491 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__2_2, (MR_Integer) 0)));
#line 491 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__2_2, (MR_Integer) 1)));
#line 491 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredInfo_12;
#line 492 "add_pragma.m"
            MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo_12;

#line 492 "add_pragma.m"
            {
#line 492 "add_pragma.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__make_hlds__add_pragma__PredTable_1, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_8)), &hlds__make_hlds__add_pragma__conv0_PredInfo_12);
            }
#line 492 "add_pragma.m"
            hlds__make_hlds__add_pragma__PredInfo_12 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo_12);
#line 493 "add_pragma.m"
            {
#line 493 "add_pragma.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__PredInfo_12, &(hlds__make_hlds__add_pragma__env).hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Markers_13);
            }
#line 496 "add_pragma.m"
            {
#line 496 "add_pragma.m"
              hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_4(&hlds__make_hlds__add_pragma__env);
            }
#line 501 "add_pragma.m"
            if ((hlds__make_hlds__add_pragma__env).hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded)
#line 500 "add_pragma.m"
              *hlds__make_hlds__add_pragma__HeadVar__4_4 = (MR_Integer) 1;
#line 501 "add_pragma.m"
            else
#line 502 "add_pragma.m"
              {
#line 502 "add_pragma.m"
                /* direct tailcall eliminated */
#line 502 "add_pragma.m"
                {
#line 502 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_pragma__PredIds_9;

#line 502 "add_pragma.m"
                  hlds__make_hlds__add_pragma__HeadVar__2_2 = hlds__make_hlds__add_pragma__HeadVar__2__tmp_copy_2;
#line 502 "add_pragma.m"
                }
#line 502 "add_pragma.m"
                continue;
#line 502 "add_pragma.m"
              }
#line 491 "add_pragma.m"
          }
#line 490 "add_pragma.m"
        break;
#line 490 "add_pragma.m"
      }
#line 487 "add_pragma.m"
  }
#line 487 "add_pragma.m"
}

#line 452 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__do_add_pred_marker_12_p_0(
#line 452 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_13,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_14,
#line 452 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_15,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_16,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_17,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_18,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__UpdatePredInfo_19,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31,
#line 452 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32,
#line 452 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PredIds_21,
#line 452 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33,
#line 452 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34)
#line 452 "add_pragma.m"
{
#line 459 "add_pragma.m"
  {
#line 459 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 460 "add_pragma.m"
    {
#line 460 "add_pragma.m"
      hlds__make_hlds__add_pragma__get_matching_pred_ids_4_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__PredIds_21);
    }
#line 477 "add_pragma.m"
    if ((*hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "add_pragma.m"
      {
#line 478 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__DescPieces_30;
#line 478 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_35_35;

#line 479 "add_pragma.m"
        {
#line 479 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 479 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
#line 479 "add_pragma.m"
        }
#line 479 "add_pragma.m"
        {
#line 479 "add_pragma.m"
          hlds__make_hlds__add_pragma__DescPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_35_35));
#line 479 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[146])));
#line 479 "add_pragma.m"
        }
#line 480 "add_pragma.m"
        {
#line 480 "add_pragma.m"
          hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__Context_18, hlds__make_hlds__add_pragma__DescPieces_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);
        }
#line 478 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31;
#line 478 "add_pragma.m"
      }
#line 477 "add_pragma.m"
    else
#line 462 "add_pragma.m"
      {
#line 462 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredTable0_25;
#line 462 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds0_26;
#line 462 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds_27;
#line 462 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus_28;
#line 462 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredTable_29;

#line 463 "add_pragma.m"
        {
#line 463 "add_pragma.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pragma__PredTable0_25);
        }
#line 464 "add_pragma.m"
        {
#line 464 "add_pragma.m"
          hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__Preds0_26);
        }
#line 466 "add_pragma.m"
        {
#line 466 "add_pragma.m"
          hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(*hlds__make_hlds__add_pragma__PredIds_21, hlds__make_hlds__add_pragma__UpdatePredInfo_19, hlds__make_hlds__add_pragma__Status_16, hlds__make_hlds__add_pragma__MustBeExported_17, hlds__make_hlds__add_pragma__Preds0_26, &hlds__make_hlds__add_pragma__Preds_27, &hlds__make_hlds__add_pragma__WrongStatus_28);
        }
#line 471 "add_pragma.m"
#line 471 "add_pragma.m"
        switch (hlds__make_hlds__add_pragma__WrongStatus_28) {
#line 471 "add_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 471 "add_pragma.m"
          case (MR_Integer) 0:
#line 472 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33;
#line 471 "add_pragma.m"
            break;
#line 471 "add_pragma.m"
          case (MR_Integer) 1:
#line 556 "add_pragma.m"
            {
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Pieces_50;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Msg_51;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Spec_52;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_55_55;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_56_56;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_57_57;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_60_60;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_61_61;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_69_69;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_70_70;
#line 556 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_74_74;

#line 557 "add_pragma.m"
              {
#line 557 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
#line 557 "add_pragma.m"
              }
#line 559 "add_pragma.m"
              {
#line 559 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_14));
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_15));
#line 559 "add_pragma.m"
              }
#line 559 "add_pragma.m"
              {
#line 559 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 559 "add_pragma.m"
              }
#line 559 "add_pragma.m"
              {
#line 559 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_61_61));
#line 559 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[39])));
#line 559 "add_pragma.m"
              }
#line 558 "add_pragma.m"
              {
#line 558 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[147])));
#line 558 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_60_60));
#line 558 "add_pragma.m"
              }
#line 557 "add_pragma.m"
              {
#line 557 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_56_56));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_57_57));
#line 557 "add_pragma.m"
              }
#line 557 "add_pragma.m"
              {
#line 557 "add_pragma.m"
                hlds__make_hlds__add_pragma__Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
#line 557 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_55_55));
#line 557 "add_pragma.m"
              }
#line 561 "add_pragma.m"
              {
#line 561 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 561 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_50));
#line 561 "add_pragma.m"
              }
#line 561 "add_pragma.m"
              {
#line 561 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 561 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "add_pragma.m"
              }
#line 561 "add_pragma.m"
              {
#line 561 "add_pragma.m"
                hlds__make_hlds__add_pragma__Msg_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_18));
#line 561 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_69_69));
#line 561 "add_pragma.m"
              }
#line 562 "add_pragma.m"
              {
#line 562 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_51));
#line 562 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "add_pragma.m"
              }
#line 562 "add_pragma.m"
              {
#line 562 "add_pragma.m"
                hlds__make_hlds__add_pragma__Spec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 562 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 562 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_52, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_74_74));
#line 562 "add_pragma.m"
              }
#line 563 "add_pragma.m"
              {
#line 563 "add_pragma.m"
                MR_Word base;
#line 563 "add_pragma.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = base;
#line 563 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_52));
#line 563 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33));
#line 563 "add_pragma.m"
              }
#line 556 "add_pragma.m"
            }
#line 471 "add_pragma.m"
            break;
#line 471 "add_pragma.m"
        }
#line 475 "add_pragma.m"
        {
#line 475 "add_pragma.m"
          hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pragma__Preds_27, hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__PredTable_29);
        }
#line 476 "add_pragma.m"
        {
#line 476 "add_pragma.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pragma__PredTable_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32);
#line 476 "add_pragma.m"
          return;
        }
#line 462 "add_pragma.m"
      }
#line 459 "add_pragma.m"
  }
#line 452 "add_pragma.m"
}

#line 444 "add_pragma.m"
MR_bool MR_CALL 
hlds__make_hlds__add_pragma__marker_must_be_exported_1_p_0(
#line 444 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_2)
#line 444 "add_pragma.m"
{
#line 447 "add_pragma.m"
  {
#line 447 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 447 "add_pragma.m"
    {
#line 447 "add_pragma.m"
      return hlds__make_hlds__add_pragma__succeeded = hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_101_114_95_109_117_115_116_95_98_101_95_101_120_112_111_114_116_101_100_95_95_91_49_93_95_48_1_p_0();
    }
#line 447 "add_pragma.m"
    return hlds__make_hlds__add_pragma__succeeded;
#line 447 "add_pragma.m"
  }
#line 444 "add_pragma.m"
}

#line 419 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(
#line 419 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_12,
#line 419 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_13,
#line 419 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_14,
#line 419 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_15,
#line 419 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_16,
#line 419 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Marker_17,
#line 419 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ConflictMarkers_18,
#line 419 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_25,
#line 419 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_26,
#line 419 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_27,
#line 419 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28)
#line 419 "add_pragma.m"
{
#line 425 "add_pragma.m"
  {
#line 425 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 425 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MustBeExported_21;
#line 425 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_22;
#line 425 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_23;
#line 425 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Conflict_24;
#line 425 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31;

#line 447 "add_pragma.m"
    {
#line 447 "add_pragma.m"
      hlds__make_hlds__add_pragma__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 428 "add_pragma.m"
    if (hlds__make_hlds__add_pragma__succeeded)
#line 427 "add_pragma.m"
      hlds__make_hlds__add_pragma__MustBeExported_21 = (MR_Integer) 1;
#line 428 "add_pragma.m"
    else
#line 429 "add_pragma.m"
      hlds__make_hlds__add_pragma__MustBeExported_21 = (MR_Integer) 0;
#line 431 "add_pragma.m"
    {
#line 431 "add_pragma.m"
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_p_0(hlds__make_hlds__add_pragma__Marker_17, hlds__make_hlds__add_pragma__PragmaName_12, hlds__make_hlds__add_pragma__Name_13, hlds__make_hlds__add_pragma__Arity_14, hlds__make_hlds__add_pragma__Status_15, hlds__make_hlds__add_pragma__MustBeExported_21, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_26, &hlds__make_hlds__add_pragma__PredIds_22, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_27, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31);
    }
#line 433 "add_pragma.m"
    {
#line 433 "add_pragma.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(*hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_26, &hlds__make_hlds__add_pragma__Preds_23);
    }
#line 434 "add_pragma.m"
    {
#line 434 "add_pragma.m"
      hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0(hlds__make_hlds__add_pragma__Preds_23, hlds__make_hlds__add_pragma__PredIds_22, hlds__make_hlds__add_pragma__ConflictMarkers_18, &hlds__make_hlds__add_pragma__Conflict_24);
    }
#line 438 "add_pragma.m"
#line 438 "add_pragma.m"
    switch (hlds__make_hlds__add_pragma__Conflict_24) {
#line 438 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 438 "add_pragma.m"
      case (MR_Integer) 0:
#line 439 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31;
#line 438 "add_pragma.m"
        break;
#line 438 "add_pragma.m"
      case (MR_Integer) 1:
#line 568 "add_pragma.m"
        {
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Pieces_43;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Msg_44;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Spec_45;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_50_50;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_53_53;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_54_54;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_55_55;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 568 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_67_67;

#line 569 "add_pragma.m"
          {
#line 569 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "add_pragma.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 569 "add_pragma.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_12));
#line 569 "add_pragma.m"
          }
#line 571 "add_pragma.m"
          {
#line 571 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 571 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_13));
#line 571 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_14));
#line 571 "add_pragma.m"
          }
#line 571 "add_pragma.m"
          {
#line 571 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "add_pragma.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 571 "add_pragma.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_55_55));
#line 571 "add_pragma.m"
          }
#line 571 "add_pragma.m"
          {
#line 571 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_54_54));
#line 571 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
#line 571 "add_pragma.m"
          }
#line 570 "add_pragma.m"
          {
#line 570 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[144])));
#line 570 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_53_53));
#line 570 "add_pragma.m"
          }
#line 569 "add_pragma.m"
          {
#line 569 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 569 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_50_50));
#line 569 "add_pragma.m"
          }
#line 569 "add_pragma.m"
          {
#line 569 "add_pragma.m"
            hlds__make_hlds__add_pragma__Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
#line 569 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 569 "add_pragma.m"
          }
#line 572 "add_pragma.m"
          {
#line 572 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 572 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_43));
#line 572 "add_pragma.m"
          }
#line 572 "add_pragma.m"
          {
#line 572 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 572 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "add_pragma.m"
          }
#line 572 "add_pragma.m"
          {
#line 572 "add_pragma.m"
            hlds__make_hlds__add_pragma__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 572 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_16));
#line 572 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 572 "add_pragma.m"
          }
#line 573 "add_pragma.m"
          {
#line 573 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_44));
#line 573 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "add_pragma.m"
          }
#line 573 "add_pragma.m"
          {
#line 573 "add_pragma.m"
            hlds__make_hlds__add_pragma__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 573 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 573 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_67_67));
#line 573 "add_pragma.m"
          }
#line 574 "add_pragma.m"
          {
#line 574 "add_pragma.m"
            MR_Word base;
#line 574 "add_pragma.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28 = base;
#line 574 "add_pragma.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_45));
#line 574 "add_pragma.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31));
#line 574 "add_pragma.m"
          }
#line 568 "add_pragma.m"
        }
#line 438 "add_pragma.m"
        break;
#line 438 "add_pragma.m"
    }
#line 425 "add_pragma.m"
  }
#line 419 "add_pragma.m"
}

#line 382 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_mm_tabling_info_6_p_0(
#line 382 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MMTablingInfo_7,
#line 382 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma___Context_8,
#line 382 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26,
#line 382 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27,
#line 382 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28,
#line 382 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29)
#line 382 "add_pragma.m"
{
#line 386 "add_pragma.m"
  {
#line 386 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 386 "add_pragma.m"
    {
#line 386 "add_pragma.m"
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__MMTablingInfo_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29);
#line 386 "add_pragma.m"
      return;
    }
#line 386 "add_pragma.m"
  }
#line 382 "add_pragma.m"
}

#line 352 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_trailing_info_6_p_0(
#line 352 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__TrailingInfo_7,
#line 352 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma___Context_8,
#line 352 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26,
#line 352 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27,
#line 352 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28,
#line 352 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29)
#line 352 "add_pragma.m"
{
#line 356 "add_pragma.m"
  {
#line 356 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 356 "add_pragma.m"
    {
#line 356 "add_pragma.m"
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__TrailingInfo_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29);
#line 356 "add_pragma.m"
      return;
    }
#line 356 "add_pragma.m"
  }
#line 352 "add_pragma.m"
}

#line 321 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_exceptions_6_p_0(
#line 321 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ExceptionsInfo_7,
#line 321 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma___Context_8,
#line 321 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27,
#line 321 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28,
#line 321 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_29,
#line 321 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30)
#line 321 "add_pragma.m"
{
#line 325 "add_pragma.m"
  {
#line 325 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 325 "add_pragma.m"
    {
#line 325 "add_pragma.m"
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__ExceptionsInfo_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30);
#line 325 "add_pragma.m"
      return;
    }
#line 325 "add_pragma.m"
  }
#line 321 "add_pragma.m"
}

#line 282 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_unused_args_6_p_0(
#line 282 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__UnusedArgsInfo_7,
#line 282 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_8,
#line 282 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29,
#line 282 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30,
#line 282 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31,
#line 282 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32)
#line 282 "add_pragma.m"
{
#line 286 "add_pragma.m"
  {
#line 286 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 286 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__UnusedArgsInfo_7, (MR_Integer) 0)));
#line 286 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__UnusedArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__UnusedArgsInfo_7, (MR_Integer) 1)));
#line 286 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
#line 286 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
#line 286 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
#line 286 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
#line 286 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
#line 286 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

#line 290 "add_pragma.m"
    {
#line 290 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_pragma__Preds_17);
    }
#line 291 "add_pragma.m"
    {
#line 291 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
#line 301 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "add_pragma.m"
      {
#line 294 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Msg_20;
#line 294 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Spec_21;
#line 294 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_79_79;

#line 298 "add_pragma.m"
        {
#line 298 "add_pragma.m"
          hlds__make_hlds__add_pragma__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 298 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 298 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[142])));
#line 298 "add_pragma.m"
        }
#line 299 "add_pragma.m"
        {
#line 299 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_20));
#line 299 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "add_pragma.m"
        }
#line 299 "add_pragma.m"
        {
#line 299 "add_pragma.m"
          hlds__make_hlds__add_pragma__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 299 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 299 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_21, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_79_79));
#line 299 "add_pragma.m"
        }
#line 300 "add_pragma.m"
        {
#line 300 "add_pragma.m"
          MR_Word base;
#line 300 "add_pragma.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32 = base;
#line 300 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_21));
#line 300 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31));
#line 300 "add_pragma.m"
        }
#line 294 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29;
#line 294 "add_pragma.m"
      }
#line 301 "add_pragma.m"
    else
#line 301 "add_pragma.m"
      {
#line 301 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
#line 301 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

#line 301 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "add_pragma.m"
          {
#line 302 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__UnusedArgInfo0_23;
#line 302 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_24;
#line 302 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__UnusedArgInfo_25;
#line 302 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_58_58;

#line 303 "add_pragma.m"
            {
#line 303 "add_pragma.m"
              hlds__hlds_module__module_info_get_unused_arg_info_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_pragma__UnusedArgInfo0_23);
            }
#line 305 "add_pragma.m"
            {
#line 305 "add_pragma.m"
              hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_24, hlds__make_hlds__add_pragma__ModeNum_16);
            }
#line 306 "add_pragma.m"
            {
#line 306 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 306 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_88_88));
#line 306 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_24));
#line 306 "add_pragma.m"
            }
#line 306 "add_pragma.m"
            {
#line 306 "add_pragma.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__add_pragma__V_58_58)), ((MR_Box) (hlds__make_hlds__add_pragma__UnusedArgs_12)), hlds__make_hlds__add_pragma__UnusedArgInfo0_23, &hlds__make_hlds__add_pragma__UnusedArgInfo_25);
            }
#line 308 "add_pragma.m"
            {
#line 308 "add_pragma.m"
              hlds__hlds_module__module_info_set_unused_arg_info_3_p_0(hlds__make_hlds__add_pragma__UnusedArgInfo_25, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30);
            }
#line 302 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31;
#line 302 "add_pragma.m"
          }
#line 301 "add_pragma.m"
        else
#line 310 "add_pragma.m"
          {
#line 310 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_54_54;
#line 310 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_83;
#line 310 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Spec_84;

#line 314 "add_pragma.m"
            {
#line 314 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_83, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 314 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[143])));
#line 314 "add_pragma.m"
            }
#line 315 "add_pragma.m"
            {
#line 315 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_83));
#line 315 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "add_pragma.m"
            }
#line 315 "add_pragma.m"
            {
#line 315 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 315 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 315 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_84, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_54_54));
#line 315 "add_pragma.m"
            }
#line 316 "add_pragma.m"
            {
#line 316 "add_pragma.m"
              MR_Word base;
#line 316 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32 = base;
#line 316 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_84));
#line 316 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31));
#line 316 "add_pragma.m"
            }
#line 310 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29;
#line 310 "add_pragma.m"
          }
#line 301 "add_pragma.m"
      }
#line 286 "add_pragma.m"
  }
#line 282 "add_pragma.m"
}

#line 27 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_3_pragma_8_p_0(
#line 27 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ItemPragma_9,
#line 27 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_10,
#line 27 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60,
#line 27 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61,
#line 27 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62,
#line 27 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63,
#line 27 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64,
#line 27 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65)
#line 27 "add_pragma.m"
{
#line 739 "add_pragma.m"
  {
#line 739 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 739 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Pragma_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_9, (MR_Integer) 0)));
#line 739 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybeAttrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_9, (MR_Integer) 1)));
#line 739 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_9, (MR_Integer) 2)));
#line 739 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_9, (MR_Integer) 3)));

#line 745 "add_pragma.m"
#line 745 "add_pragma.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__Pragma_14)) {
#line 745 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 745 "add_pragma.m"
      case (MR_Integer) 0:
#line 796 "add_pragma.m"
        {
#line 796 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 796 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 796 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 796 "add_pragma.m"
        }
#line 745 "add_pragma.m"
        break;
#line 745 "add_pragma.m"
      case (MR_Integer) 1:
#line 797 "add_pragma.m"
        {
#line 797 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 797 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 797 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 797 "add_pragma.m"
        }
#line 745 "add_pragma.m"
        break;
#line 745 "add_pragma.m"
      case (MR_Integer) 2:
#line 742 "add_pragma.m"
        {
#line 742 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__FPInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 0)));
#line 742 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_111_111;

#line 743 "add_pragma.m"
          {
#line 743 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 743 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__SeqNum_17));
#line 743 "add_pragma.m"
          }
#line 743 "add_pragma.m"
          {
#line 743 "add_pragma.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__FPInfo_18, hlds__make_hlds__add_pragma__Status_10, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__V_111_111, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
          }
#line 742 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 742 "add_pragma.m"
        }
#line 745 "add_pragma.m"
        break;
#line 745 "add_pragma.m"
      case (MR_Integer) 3:
#line 745 "add_pragma.m"
#line 745 "add_pragma.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 0)))) {
#line 745 "add_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 745 "add_pragma.m"
          case (MR_Integer) 0:
#line 798 "add_pragma.m"
            {
#line 798 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 798 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 798 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 798 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 1:
#line 746 "add_pragma.m"
            {
#line 746 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FEInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 747 "add_pragma.m"
              {
#line 747 "add_pragma.m"
                hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0(hlds__make_hlds__add_pragma__MaybeAttrs_15, hlds__make_hlds__add_pragma__FEInfo_19, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 746 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 746 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 2:
#line 799 "add_pragma.m"
            {
#line 799 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 799 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 799 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 799 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 3:
#line 800 "add_pragma.m"
            {
#line 800 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 800 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 800 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 800 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 4:
#line 750 "add_pragma.m"
            {
#line 750 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TypeSpecInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 751 "add_pragma.m"
              {
#line 751 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0(hlds__make_hlds__add_pragma__TypeSpecInfo_20, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
#line 751 "add_pragma.m"
                return;
              }
#line 750 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 5:
#line 801 "add_pragma.m"
            {
#line 801 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 801 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 801 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 801 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 6:
#line 802 "add_pragma.m"
            {
#line 802 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 802 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 802 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 802 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 7:
#line 803 "add_pragma.m"
            {
#line 803 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 803 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 803 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 803 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 8:
#line 804 "add_pragma.m"
            {
#line 804 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 804 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 804 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 804 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 9:
#line 805 "add_pragma.m"
            {
#line 805 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 805 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 805 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 805 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 10:
#line 806 "add_pragma.m"
            {
#line 806 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 806 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 806 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 806 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 11:
#line 807 "add_pragma.m"
            {
#line 807 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 807 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 807 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 807 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 12:
#line 808 "add_pragma.m"
            {
#line 808 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 808 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 808 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 808 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 13:
#line 754 "add_pragma.m"
            {
#line 754 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TabledInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));
#line 754 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Globals_22;
#line 754 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TypeLayout_23;

#line 755 "add_pragma.m"
              {
#line 755 "add_pragma.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pragma__Globals_22);
              }
#line 756 "add_pragma.m"
              {
#line 756 "add_pragma.m"
                libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_22, (MR_Integer) 226, &hlds__make_hlds__add_pragma__TypeLayout_23);
              }
#line 761 "add_pragma.m"
#line 761 "add_pragma.m"
              switch (hlds__make_hlds__add_pragma__TypeLayout_23) {
#line 761 "add_pragma.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 761 "add_pragma.m"
                case (MR_Integer) 0:
#line 762 "add_pragma.m"
                  {
#line 762 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__EvalMethod_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_21, (MR_Integer) 0)));
#line 762 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Pieces_28;
#line 762 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Msg_29;
#line 762 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Spec_30;
#line 762 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_83_83;
#line 762 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_84_84;
#line 762 "add_pragma.m"
                    MR_String hlds__make_hlds__add_pragma__V_85_85;
#line 762 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_95_95;
#line 762 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_96_96;
#line 762 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_100_100;
#line 763 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_21, (MR_Integer) 1)));
#line 763 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_21, (MR_Integer) 2)));
#line 763 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_21, (MR_Integer) 3)));

#line 765 "add_pragma.m"
                    {
#line 765 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_85_85 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__EvalMethod_24);
                    }
#line 765 "add_pragma.m"
                    {
#line 765 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 765 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_85_85));
#line 765 "add_pragma.m"
                    }
#line 765 "add_pragma.m"
                    {
#line 765 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_84_84));
#line 765 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[26])));
#line 765 "add_pragma.m"
                    }
#line 764 "add_pragma.m"
                    {
#line 764 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
#line 764 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_28, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_83_83));
#line 764 "add_pragma.m"
                    }
#line 768 "add_pragma.m"
                    {
#line 768 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 768 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_28));
#line 768 "add_pragma.m"
                    }
#line 768 "add_pragma.m"
                    {
#line 768 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_96_96));
#line 768 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "add_pragma.m"
                    }
#line 768 "add_pragma.m"
                    {
#line 768 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 768 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_16));
#line 768 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_29, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_95_95));
#line 768 "add_pragma.m"
                    }
#line 769 "add_pragma.m"
                    {
#line 769 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_29));
#line 769 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "add_pragma.m"
                    }
#line 769 "add_pragma.m"
                    {
#line 769 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 769 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 769 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_100_100));
#line 769 "add_pragma.m"
                    }
#line 770 "add_pragma.m"
                    {
#line 770 "add_pragma.m"
                      MR_Word base;
#line 770 "add_pragma.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "add_pragma.m"
                      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = base;
#line 770 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_30));
#line 770 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64));
#line 770 "add_pragma.m"
                    }
#line 762 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 762 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 762 "add_pragma.m"
                  }
#line 761 "add_pragma.m"
                  break;
#line 761 "add_pragma.m"
                case (MR_Integer) 1:
#line 759 "add_pragma.m"
                  {
#line 759 "add_pragma.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0(hlds__make_hlds__add_pragma__TabledInfo_21, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__Status_10, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
#line 759 "add_pragma.m"
                    return;
                  }
#line 761 "add_pragma.m"
                  break;
#line 761 "add_pragma.m"
              }
#line 754 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 14:
#line 773 "add_pragma.m"
            {
#line 773 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FTInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 774 "add_pragma.m"
              {
#line 774 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(hlds__make_hlds__add_pragma__FTInfo_31, hlds__make_hlds__add_pragma__Status_10, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 773 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 773 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 15:
#line 779 "add_pragma.m"
            {
#line 779 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__OISUInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 780 "add_pragma.m"
              {
#line 780 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(hlds__make_hlds__add_pragma__OISUInfo_33, hlds__make_hlds__add_pragma__Status_10, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 779 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 779 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 16:
#line 810 "add_pragma.m"
            {
#line 810 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 810 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 810 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 810 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 17:
#line 811 "add_pragma.m"
            {
#line 811 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 811 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 811 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 811 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 18:
#line 812 "add_pragma.m"
            {
#line 812 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 812 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 812 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 812 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 19:
#line 782 "add_pragma.m"
            {
#line 782 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TermInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 783 "add_pragma.m"
              {
#line 783 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(hlds__make_hlds__add_pragma__TermInfo_34, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 782 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 782 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 20:
#line 785 "add_pragma.m"
            {
#line 785 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Term2Info_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 786 "add_pragma.m"
              {
#line 786 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_termination2_info_6_p_0(hlds__make_hlds__add_pragma__Term2Info_35, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 785 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 785 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 21:
#line 813 "add_pragma.m"
            {
#line 813 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 813 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 813 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 813 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 22:
#line 814 "add_pragma.m"
            {
#line 814 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 814 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 814 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 814 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 23:
#line 815 "add_pragma.m"
            {
#line 815 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 815 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 815 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 815 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 24:
#line 816 "add_pragma.m"
            {
#line 816 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 816 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 816 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 816 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 25:
#line 788 "add_pragma.m"
            {
#line 788 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__SharingInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 789 "add_pragma.m"
              {
#line 789 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_structure_sharing_6_p_0(hlds__make_hlds__add_pragma__SharingInfo_36, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 788 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 788 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 26:
#line 791 "add_pragma.m"
            {
#line 791 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__ReuseInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 792 "add_pragma.m"
              {
#line 792 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_structure_reuse_6_p_0(hlds__make_hlds__add_pragma__ReuseInfo_37, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 791 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 791 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 27:
#line 809 "add_pragma.m"
            {
#line 809 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 809 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 809 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 809 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 28:
#line 776 "add_pragma.m"
            {
#line 776 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TypeCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 777 "add_pragma.m"
              {
#line 777 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_reserve_tag_7_p_0(hlds__make_hlds__add_pragma__TypeCtor_32, hlds__make_hlds__add_pragma__Status_10, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 776 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 776 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
          case (MR_Integer) 29:
#line 817 "add_pragma.m"
            {
#line 817 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 817 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 817 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 817 "add_pragma.m"
            }
#line 745 "add_pragma.m"
            break;
#line 745 "add_pragma.m"
        }
#line 745 "add_pragma.m"
        break;
#line 745 "add_pragma.m"
    }
#line 739 "add_pragma.m"
  }
#line 27 "add_pragma.m"
}

#line 23 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0(
#line 23 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ItemPragma_7,
#line 23 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_8,
#line 23 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56,
#line 23 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57,
#line 23 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_58,
#line 23 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59)
#line 23 "add_pragma.m"
{
#line 77 "add_pragma.m"
  {
#line 77 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 77 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_7, (MR_Integer) 0)));
#line 77 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybeAttrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_7, (MR_Integer) 1)));
#line 77 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_7, (MR_Integer) 2)));
#line 77 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ImportStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Status_8, (MR_Integer) 0)));
#line 77 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Allowed_17;
#line 77 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 78 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma___SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_7, (MR_Integer) 3)));
#line 80 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Status_8, (MR_Integer) 1)));

#line 81 "add_pragma.m"
    {
#line 81 "add_pragma.m"
      hlds__make_hlds__add_pragma__Allowed_17 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(hlds__make_hlds__add_pragma__Pragma_11);
    }
#line 94 "add_pragma.m"
#line 94 "add_pragma.m"
    switch (hlds__make_hlds__add_pragma__Allowed_17) {
#line 94 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 94 "add_pragma.m"
      case (MR_Integer) 0:
#line 88 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__MaybeAttrs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 85 "add_pragma.m"
          {
#line 86 "add_pragma.m"
            {
#line 86 "add_pragma.m"
              hlds__make_hlds__make_hlds_error__error_if_exported_5_p_0(hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[5]), hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_58, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61);
            }
#line 85 "add_pragma.m"
          }
#line 88 "add_pragma.m"
        else
#line 92 "add_pragma.m"
          hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_58;
#line 94 "add_pragma.m"
        break;
#line 94 "add_pragma.m"
      case (MR_Integer) 1:
#line 95 "add_pragma.m"
        hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_58;
#line 94 "add_pragma.m"
        break;
#line 94 "add_pragma.m"
    }
#line 102 "add_pragma.m"
#line 102 "add_pragma.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__Pragma_11)) {
#line 102 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 102 "add_pragma.m"
      case (MR_Integer) 0:
#line 98 "add_pragma.m"
        {
#line 98 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__FDInfo_19 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_pragma__Pragma_11), (MR_Integer) 0);
#line 98 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Lang_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FDInfo_19, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 98 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__IsLocal_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FDInfo_19, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 98 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__CHeader_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FDInfo_19, (MR_Integer) 1)));
#line 98 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__ForeignDeclCode_23;

#line 100 "add_pragma.m"
          {
#line 100 "add_pragma.m"
            hlds__make_hlds__add_pragma__ForeignDeclCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 100 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Lang_20));
#line 100 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__IsLocal_21));
#line 100 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_23, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__CHeader_22));
#line 100 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_23, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 100 "add_pragma.m"
          }
#line 101 "add_pragma.m"
          {
#line 101 "add_pragma.m"
            hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_pragma__ForeignDeclCode_23, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57);
          }
#line 98 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 98 "add_pragma.m"
        }
#line 102 "add_pragma.m"
        break;
#line 102 "add_pragma.m"
      case (MR_Integer) 1:
#line 103 "add_pragma.m"
        {
#line 103 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__FCInfo_24 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_pragma__Pragma_11), (MR_Integer) 1);
#line 103 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__BodyCode_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_24, (MR_Integer) 1)));
#line 103 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__ForeignBodyCode_26;
#line 103 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Lang_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_24, (MR_Integer) 0)));

#line 105 "add_pragma.m"
          {
#line 105 "add_pragma.m"
            hlds__make_hlds__add_pragma__ForeignBodyCode_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 105 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Lang_231));
#line 105 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__BodyCode_25));
#line 105 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_26, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 105 "add_pragma.m"
          }
#line 106 "add_pragma.m"
          {
#line 106 "add_pragma.m"
            hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_pragma__ForeignBodyCode_26, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57);
          }
#line 103 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 103 "add_pragma.m"
        }
#line 102 "add_pragma.m"
        break;
#line 102 "add_pragma.m"
      case (MR_Integer) 2:
#line 254 "add_pragma.m"
        {
#line 254 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 254 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 254 "add_pragma.m"
        }
#line 102 "add_pragma.m"
        break;
#line 102 "add_pragma.m"
      case (MR_Integer) 3:
#line 102 "add_pragma.m"
#line 102 "add_pragma.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 0)))) {
#line 102 "add_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 102 "add_pragma.m"
          case (MR_Integer) 0:
#line 108 "add_pragma.m"
            {
#line 108 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FIMInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 108 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Import_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FIMInfo_27, (MR_Integer) 1)));
#line 108 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__ForeignImportModule_29;
#line 108 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Lang_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FIMInfo_27, (MR_Integer) 0)));

#line 110 "add_pragma.m"
              {
#line 110 "add_pragma.m"
                hlds__make_hlds__add_pragma__ForeignImportModule_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 110 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignImportModule_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Lang_232));
#line 110 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignImportModule_29, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Import_28));
#line 110 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignImportModule_29, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 110 "add_pragma.m"
              }
#line 112 "add_pragma.m"
              {
#line 112 "add_pragma.m"
                hlds__hlds_module__module_add_foreign_import_module_3_p_0(hlds__make_hlds__add_pragma__ForeignImportModule_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57);
              }
#line 108 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 108 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 1:
#line 268 "add_pragma.m"
            {
#line 268 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 268 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 268 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 2:
#line 240 "add_pragma.m"
            {
#line 240 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FEEInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 241 "add_pragma.m"
              {
#line 241 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_export_enum_7_p_0(hlds__make_hlds__add_pragma__FEEInfo_42, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 241 "add_pragma.m"
                return;
              }
#line 240 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 3:
#line 244 "add_pragma.m"
            {
#line 244 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FEInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 245 "add_pragma.m"
              {
#line 245 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0(hlds__make_hlds__add_pragma__FEInfo_43, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 245 "add_pragma.m"
                return;
              }
#line 244 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 4:
#line 255 "add_pragma.m"
            {
#line 255 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 255 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 255 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 5:
#line 114 "add_pragma.m"
            {
#line 114 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 114 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_30, (MR_Integer) 0)));
#line 114 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_30, (MR_Integer) 1)));

#line 116 "add_pragma.m"
              {
#line 116 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "inline", hlds__make_hlds__add_pragma__Name_31, hlds__make_hlds__add_pragma__Arity_32, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[136]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 116 "add_pragma.m"
                return;
              }
#line 114 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 6:
#line 120 "add_pragma.m"
            {
#line 120 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 120 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_233, (MR_Integer) 0)));
#line 120 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_235 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_233, (MR_Integer) 1)));

#line 122 "add_pragma.m"
              {
#line 122 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "no_inline", hlds__make_hlds__add_pragma__Name_234, hlds__make_hlds__add_pragma__Arity_235, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 7, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[138]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 122 "add_pragma.m"
                return;
              }
#line 120 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 7:
#line 128 "add_pragma.m"
            {
#line 128 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__UnusedArgsInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 129 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ImportStatus_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 135 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 131 "add_pragma.m"
                {
#line 131 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Msg_35;
#line 131 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Spec_36;
#line 131 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__V_209_209;

#line 132 "add_pragma.m"
                  {
#line 132 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 132 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 132 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[140])));
#line 132 "add_pragma.m"
                  }
#line 133 "add_pragma.m"
                  {
#line 133 "add_pragma.m"
                    hlds__make_hlds__add_pragma__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_35));
#line 133 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "add_pragma.m"
                  }
#line 133 "add_pragma.m"
                  {
#line 133 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 133 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 133 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_209_209));
#line 133 "add_pragma.m"
                  }
#line 134 "add_pragma.m"
                  {
#line 134 "add_pragma.m"
                    MR_Word base;
#line 134 "add_pragma.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = base;
#line 134 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_36));
#line 134 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61));
#line 134 "add_pragma.m"
                  }
#line 131 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 131 "add_pragma.m"
                }
#line 135 "add_pragma.m"
              else
#line 136 "add_pragma.m"
                {
#line 136 "add_pragma.m"
                  hlds__make_hlds__add_pragma__add_pragma_unused_args_6_p_0(hlds__make_hlds__add_pragma__UnusedArgsInfo_33, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 136 "add_pragma.m"
                  return;
                }
#line 128 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 8:
#line 140 "add_pragma.m"
            {
#line 140 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__ExceptionsInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 141 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ImportStatus_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 141 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 147 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 143 "add_pragma.m"
                {
#line 143 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__V_190_190;
#line 143 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Msg_237;
#line 143 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Spec_238;

#line 144 "add_pragma.m"
                  {
#line 144 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Msg_237 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_237, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 144 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_237, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[135])));
#line 144 "add_pragma.m"
                  }
#line 145 "add_pragma.m"
                  {
#line 145 "add_pragma.m"
                    hlds__make_hlds__add_pragma__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_190_190, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_237));
#line 145 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "add_pragma.m"
                  }
#line 145 "add_pragma.m"
                  {
#line 145 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Spec_238 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 145 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 145 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_190_190));
#line 145 "add_pragma.m"
                  }
#line 146 "add_pragma.m"
                  {
#line 146 "add_pragma.m"
                    MR_Word base;
#line 146 "add_pragma.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = base;
#line 146 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_238));
#line 146 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61));
#line 146 "add_pragma.m"
                  }
#line 143 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 143 "add_pragma.m"
                }
#line 147 "add_pragma.m"
              else
#line 148 "add_pragma.m"
                {
#line 148 "add_pragma.m"
                  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__ExceptionsInfo_37, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 148 "add_pragma.m"
                  return;
                }
#line 140 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 9:
#line 151 "add_pragma.m"
            {
#line 151 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TrailingInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 152 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ImportStatus_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 158 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 154 "add_pragma.m"
                {
#line 154 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__V_171_171;
#line 154 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Msg_246;
#line 154 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Spec_247;

#line 155 "add_pragma.m"
                  {
#line 155 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Msg_246 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 155 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_246, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 155 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
#line 155 "add_pragma.m"
                  }
#line 156 "add_pragma.m"
                  {
#line 156 "add_pragma.m"
                    hlds__make_hlds__add_pragma__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_171_171, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_246));
#line 156 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 156 "add_pragma.m"
                  }
#line 156 "add_pragma.m"
                  {
#line 156 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Spec_247 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 156 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 156 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 156 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_171_171));
#line 156 "add_pragma.m"
                  }
#line 157 "add_pragma.m"
                  {
#line 157 "add_pragma.m"
                    MR_Word base;
#line 157 "add_pragma.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = base;
#line 157 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_247));
#line 157 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61));
#line 157 "add_pragma.m"
                  }
#line 154 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 154 "add_pragma.m"
                }
#line 158 "add_pragma.m"
              else
#line 159 "add_pragma.m"
                {
#line 159 "add_pragma.m"
                  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__TrailingInfo_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 159 "add_pragma.m"
                  return;
                }
#line 151 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 10:
#line 163 "add_pragma.m"
            {
#line 163 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__MMTablingInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 164 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ImportStatus_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 170 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 166 "add_pragma.m"
                {
#line 166 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__V_152_152;
#line 166 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Msg_255;
#line 166 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Spec_256;

#line 167 "add_pragma.m"
                  {
#line 167 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Msg_255 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 167 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_255, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 167 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_255, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[137])));
#line 167 "add_pragma.m"
                  }
#line 168 "add_pragma.m"
                  {
#line 168 "add_pragma.m"
                    hlds__make_hlds__add_pragma__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_152_152, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_255));
#line 168 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "add_pragma.m"
                  }
#line 168 "add_pragma.m"
                  {
#line 168 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Spec_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 168 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 168 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_152_152));
#line 168 "add_pragma.m"
                  }
#line 169 "add_pragma.m"
                  {
#line 169 "add_pragma.m"
                    MR_Word base;
#line 169 "add_pragma.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = base;
#line 169 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_256));
#line 169 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61));
#line 169 "add_pragma.m"
                  }
#line 166 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 166 "add_pragma.m"
                }
#line 170 "add_pragma.m"
              else
#line 171 "add_pragma.m"
                {
#line 171 "add_pragma.m"
                  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__MMTablingInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 171 "add_pragma.m"
                  return;
                }
#line 163 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 11:
#line 175 "add_pragma.m"
            {
#line 175 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 175 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_263, (MR_Integer) 0)));
#line 175 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_263, (MR_Integer) 1)));

#line 177 "add_pragma.m"
              {
#line 177 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "obsolete", hlds__make_hlds__add_pragma__Name_264, hlds__make_hlds__add_pragma__Arity_265, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 177 "add_pragma.m"
                return;
              }
#line 175 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 12:
#line 180 "add_pragma.m"
            {
#line 180 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_266 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 180 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_266, (MR_Integer) 0)));
#line 180 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_268 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_266, (MR_Integer) 1)));

#line 182 "add_pragma.m"
              {
#line 182 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "no_determinism_warning", hlds__make_hlds__add_pragma__Name_267, hlds__make_hlds__add_pragma__Arity_268, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 182 "add_pragma.m"
                return;
              }
#line 180 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 13:
#line 256 "add_pragma.m"
            {
#line 256 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 256 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 256 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 14:
#line 257 "add_pragma.m"
            {
#line 257 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 257 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 257 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 15:
#line 263 "add_pragma.m"
            {
#line 263 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 263 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 263 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 16:
#line 185 "add_pragma.m"
            {
#line 185 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 185 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_269, (MR_Integer) 0)));
#line 185 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_271 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_269, (MR_Integer) 1)));

#line 187 "add_pragma.m"
              {
#line 187 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "promise_equivalent_clauses", hlds__make_hlds__add_pragma__Name_270, hlds__make_hlds__add_pragma__Arity_271, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 187 "add_pragma.m"
                return;
              }
#line 185 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 17:
#line 191 "add_pragma.m"
            {
#line 191 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 191 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_272, (MR_Integer) 0)));
#line 191 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_274 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_272, (MR_Integer) 1)));

#line 193 "add_pragma.m"
              {
#line 193 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "promise_pure", hlds__make_hlds__add_pragma__Name_273, hlds__make_hlds__add_pragma__Arity_274, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 193 "add_pragma.m"
                return;
              }
#line 191 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 18:
#line 196 "add_pragma.m"
            {
#line 196 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 196 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_275, (MR_Integer) 0)));
#line 196 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_277 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_275, (MR_Integer) 1)));

#line 198 "add_pragma.m"
              {
#line 198 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "promise_semipure", hlds__make_hlds__add_pragma__Name_276, hlds__make_hlds__add_pragma__Arity_277, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 198 "add_pragma.m"
                return;
              }
#line 196 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 19:
#line 269 "add_pragma.m"
            {
#line 269 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 269 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 269 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 20:
#line 270 "add_pragma.m"
            {
#line 270 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 270 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 270 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 21:
#line 201 "add_pragma.m"
            {
#line 201 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_278 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 201 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_278, (MR_Integer) 0)));
#line 201 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_280 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_278, (MR_Integer) 1)));

#line 203 "add_pragma.m"
              {
#line 203 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "terminates", hlds__make_hlds__add_pragma__Name_279, hlds__make_hlds__add_pragma__Arity_280, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 17, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 203 "add_pragma.m"
                return;
              }
#line 201 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 22:
#line 208 "add_pragma.m"
            {
#line 208 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_281 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 208 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_281, (MR_Integer) 0)));
#line 208 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_283 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_281, (MR_Integer) 1)));

#line 210 "add_pragma.m"
              {
#line 210 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "does_not_terminate", hlds__make_hlds__add_pragma__Name_282, hlds__make_hlds__add_pragma__Arity_283, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[9]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 210 "add_pragma.m"
                return;
              }
#line 208 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 23:
#line 214 "add_pragma.m"
            {
#line 214 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 214 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_284, (MR_Integer) 0)));
#line 214 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_286 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_284, (MR_Integer) 1)));

#line 216 "add_pragma.m"
              {
#line 216 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "check_termination", hlds__make_hlds__add_pragma__Name_285, hlds__make_hlds__add_pragma__Arity_286, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[7]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 216 "add_pragma.m"
                return;
              }
#line 214 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 24:
#line 221 "add_pragma.m"
            {
#line 221 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_77_77;
#line 221 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_78_78;
#line 221 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_287 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 221 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_287, (MR_Integer) 0)));
#line 221 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_289 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_287, (MR_Integer) 1)));

#line 223 "add_pragma.m"
              {
#line 223 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "mode_check_clauses", hlds__make_hlds__add_pragma__Name_288, hlds__make_hlds__add_pragma__Arity_289, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_77_77, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_78_78);
              }
#line 231 "add_pragma.m"
              {
#line 231 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "mode_check_clauses", hlds__make_hlds__add_pragma__Name_288, hlds__make_hlds__add_pragma__Arity_289, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 7, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[138]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_77_77, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_78_78, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 231 "add_pragma.m"
                return;
              }
#line 221 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 25:
#line 275 "add_pragma.m"
            {
#line 275 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 275 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 275 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 26:
#line 276 "add_pragma.m"
            {
#line 276 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 276 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 276 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 27:
#line 250 "add_pragma.m"
            {
#line 250 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 250 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 250 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 28:
#line 262 "add_pragma.m"
            {
#line 262 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56;
#line 262 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61;
#line 262 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
          case (MR_Integer) 29:
#line 235 "add_pragma.m"
            {
#line 235 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__RFSInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 235 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FeatureSet_41 = (MR_Word) hlds__make_hlds__add_pragma__RFSInfo_40;

#line 237 "add_pragma.m"
              {
#line 237 "add_pragma.m"
                hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0(hlds__make_hlds__add_pragma__FeatureSet_41, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_61_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_59);
#line 237 "add_pragma.m"
                return;
              }
#line 235 "add_pragma.m"
            }
#line 102 "add_pragma.m"
            break;
#line 102 "add_pragma.m"
        }
#line 102 "add_pragma.m"
        break;
#line 102 "add_pragma.m"
    }
#line 77 "add_pragma.m"
  }
#line 23 "add_pragma.m"
}

void mercury__hlds__make_hlds__add_pragma__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_add_marker_pred_info_0);
}

void mercury__hlds__make_hlds__add_pragma__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_pragma. */
