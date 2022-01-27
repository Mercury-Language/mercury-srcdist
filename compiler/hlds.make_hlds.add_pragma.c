/*
** Automatically generated from `add_pragma.m'
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
#include "hlds.special_pred.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_foreign_enum.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"



#line 535 "add_pragma.m"
struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s {
#line 535 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__ConflictList_3;
#line 538 "add_pragma.m"
  MR_bool hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded;
#line 539 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Markers_13;
#line 544 "add_pragma.m"
  jmp_buf hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__commit_0;
#line 544 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Marker_15;
#line 544 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__conv1_Marker_15;
#line 535 "add_pragma.m"
};


#line 175 "hlds.make_hlds.add_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 178 "hlds.make_hlds.add_pragma.c"
static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 181 "hlds.make_hlds.add_pragma.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
#line 184 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 186 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2);

#line 189 "hlds.make_hlds.add_pragma.c"
static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
#line 192 "hlds.make_hlds.add_pragma.c"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 194 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 196 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3);

#line 556 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__V_31_31,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_3,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_4,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5,
#line 556 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6,
#line 556 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__7_7);

#line 500 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_p_0(
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__V_43_43,
#line 500 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_13,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_14,
#line 500 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_15,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_16,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_17,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_18,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31,
#line 500 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32,
#line 500 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PredIds_21,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33,
#line 500 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);

#line 1247 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
#line 1247 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1247 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1247 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2);

#line 1191 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3(
#line 1191 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1191 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1191 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1191 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1191 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1191 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1191 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6);

#line 1187 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2(
#line 1187 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1187 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1187 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1187 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1187 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1187 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1187 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6);

#line 1183 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1(
#line 1183 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1183 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1183 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1183 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1183 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1183 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1183 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6);

#line 641 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1(
#line 641 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 641 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 641 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 641 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3);

#line 544 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_1(
#line 544 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

#line 544 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_3(
#line 544 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

#line 544 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_2(
#line 544 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

#line 544 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_4(
#line 544 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

#line 144 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0_1(
#line 144 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 144 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 144 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 144 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[206][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[18][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[1][13];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[206][2] = {
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
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "exceptions"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: illegal use of pragma"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "external"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "mm_tabling_info"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[7])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[2])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "trailing_info"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[7])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[7])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Don\'t use --no-type-layout to disable them."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration requires type_ctor_layout structures."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "unknown predicate in"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Internal compiler error:"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "ambiguous predicate in"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that supports concurrent execution."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled in a grade"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that uses conservative garbage collection."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that uses double precision floats."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "spf"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "do not contain the grade modifier"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Grades that use double precision floats"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that supports memoisation."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that supports executing conjuntions in parallel."))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[71])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that uses single precision floats."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contain the grade modifier"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[62])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Grades that use single precision floats"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the strict sequential semantics."))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled using"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that supports trailing."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[85])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "trseg"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "tr"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the grade modifiers"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[92])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Grades that support trailing contain"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[94])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[13])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate/function name."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the same visibility as the type definition."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration must have"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "reserve_tag"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a discriminated union type."))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations for the same type."))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "reserved_tag"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[115])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: multiple"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations must always be exported."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration must always be abstract exported."))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The type in a"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "expected arity is"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[38])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[38])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "structure_sharing."))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[38])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[144])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[38])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[147])))
  },
  /* row 149 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 150 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 151 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 153 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 154 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 156 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 157 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration conflicts with previous pragma for"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for exported predicate or function"))
  },
  /* row 162 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 163 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[66])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 166 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[165])))
  },
  /* row 167 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 168 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 169 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[79])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 171 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[170])))
  },
  /* row 172 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 173 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[96])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 175 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[174])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pragma fact_table"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[111])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[119])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: undefined type"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "reserve_tag"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 185 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 186 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_3[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Duplicate"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations for"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "predicate specification"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "within the"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: predicate"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "one of"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has the wrong arity."))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Actual arity is"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate name"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate name"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "structure_sharing"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[18][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[11])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[24])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[44])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[47])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[57])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[60])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[69])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[72])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[75])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[83])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[86])))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_1[179]))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_1[181]))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[124])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[129])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][8] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[1][13] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1565 "hlds.make_hlds.add_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1573 "hlds.make_hlds.add_pragma.c"
static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1583 "hlds.make_hlds.add_pragma.c"
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

#line 1600 "hlds.make_hlds.add_pragma.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
#line 1603 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1605 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2)
#line 1607 "hlds.make_hlds.add_pragma.c"
{
#line 1609 "hlds.make_hlds.add_pragma.c"
  {
#line 1611 "hlds.make_hlds.add_pragma.c"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 1614 "hlds.make_hlds.add_pragma.c"
    {
#line 1616 "hlds.make_hlds.add_pragma.c"
      hlds__make_hlds__add_pragma__succeeded = hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2));
    }
#line 1619 "hlds.make_hlds.add_pragma.c"
    return hlds__make_hlds__add_pragma__succeeded;
#line 1621 "hlds.make_hlds.add_pragma.c"
  }
#line 1623 "hlds.make_hlds.add_pragma.c"
}

#line 1626 "hlds.make_hlds.add_pragma.c"
static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
#line 1629 "hlds.make_hlds.add_pragma.c"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1631 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1633 "hlds.make_hlds.add_pragma.c"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3)
#line 1635 "hlds.make_hlds.add_pragma.c"
{
#line 1637 "hlds.make_hlds.add_pragma.c"
  {
#line 1639 "hlds.make_hlds.add_pragma.c"
    MR_Word hlds__make_hlds__add_pragma__conv0_HeadVar__1_1;

#line 1642 "hlds.make_hlds.add_pragma.c"
    {
#line 1644 "hlds.make_hlds.add_pragma.c"
      hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(&hlds__make_hlds__add_pragma__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_3));
    }
#line 1647 "hlds.make_hlds.add_pragma.c"
    *hlds__make_hlds__add_pragma__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_HeadVar__1_1));
#line 1649 "hlds.make_hlds.add_pragma.c"
  }
#line 1651 "hlds.make_hlds.add_pragma.c"
}

#line 556 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__V_31_31,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_3,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_4,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5,
#line 556 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6,
#line 556 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__7_7)
#line 556 "add_pragma.m"
{
#line 560 "add_pragma.m"
  {
#line 560 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 560 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "add_pragma.m"
      {
#line 560 "add_pragma.m"
        *hlds__make_hlds__add_pragma__HeadVar__7_7 = (MR_Integer) 0;
#line 560 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6 = hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5;
#line 560 "add_pragma.m"
      }
#line 560 "add_pragma.m"
    else
#line 562 "add_pragma.m"
      {
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_21;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredInfo_22;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus0_23;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus1_24;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Markers0_36;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Markers_37;
#line 563 "add_pragma.m"
        MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_21;

#line 563 "add_pragma.m"
        {
#line 563 "add_pragma.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_29_29, hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
        }
#line 563 "add_pragma.m"
        hlds__make_hlds__add_pragma__PredInfo0_21 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
#line 582 "add_pragma.m"
        {
#line 582 "add_pragma.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_21, &hlds__make_hlds__add_pragma__Markers0_36);
        }
#line 583 "add_pragma.m"
        {
#line 583 "add_pragma.m"
          hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pragma__V_31_31, hlds__make_hlds__add_pragma__Markers0_36, &hlds__make_hlds__add_pragma__Markers_37);
        }
#line 584 "add_pragma.m"
        {
#line 584 "add_pragma.m"
          hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pragma__Markers_37, hlds__make_hlds__add_pragma__PredInfo0_21, &hlds__make_hlds__add_pragma__PredInfo_22);
        }
#line 566 "add_pragma.m"
        {
#line 566 "add_pragma.m"
          hlds__make_hlds__add_pragma__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(hlds__make_hlds__add_pragma__PredInfo_22);
        }
#line 566 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 566 "add_pragma.m"
          {
#line 567 "add_pragma.m"
            hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__MustBeExported_4 == (MR_Integer) 1);
#line 566 "add_pragma.m"
            if (hlds__make_hlds__add_pragma__succeeded)
#line 566 "add_pragma.m"
              {
#line 568 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 568 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 566 "add_pragma.m"
              }
#line 566 "add_pragma.m"
          }
#line 571 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 570 "add_pragma.m"
          hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 1;
#line 571 "add_pragma.m"
        else
#line 572 "add_pragma.m"
          hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 0;
#line 574 "add_pragma.m"
        {
#line 574 "add_pragma.m"
          mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_29_29, hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_22)), hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, &hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27);
        }
#line 575 "add_pragma.m"
        {
#line 575 "add_pragma.m"
          hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(hlds__make_hlds__add_pragma__V_31_31, hlds__make_hlds__add_pragma__PredIds_15, hlds__make_hlds__add_pragma__Status_3, hlds__make_hlds__add_pragma__MustBeExported_4, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6, &hlds__make_hlds__add_pragma__WrongStatus1_24);
        }
#line 577 "add_pragma.m"
        {
#line 577 "add_pragma.m"
          mercury__bool__or_3_p_0(hlds__make_hlds__add_pragma__WrongStatus0_23, hlds__make_hlds__add_pragma__WrongStatus1_24, hlds__make_hlds__add_pragma__HeadVar__7_7);
#line 577 "add_pragma.m"
          return;
        }
#line 562 "add_pragma.m"
      }
#line 560 "add_pragma.m"
  }
#line 556 "add_pragma.m"
}

#line 500 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_p_0(
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__V_43_43,
#line 500 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_13,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_14,
#line 500 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_15,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_16,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_17,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_18,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31,
#line 500 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32,
#line 500 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PredIds_21,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33,
#line 500 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34)
#line 500 "add_pragma.m"
{
#line 507 "add_pragma.m"
  {
#line 507 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 508 "add_pragma.m"
    {
#line 508 "add_pragma.m"
      hlds__make_hlds__add_pragma__get_matching_pred_ids_4_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__PredIds_21);
    }
#line 525 "add_pragma.m"
    if ((*hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_pragma.m"
      {
#line 526 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__DescPieces_30;
#line 526 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_35_35;

#line 527 "add_pragma.m"
        {
#line 527 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 527 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
#line 527 "add_pragma.m"
        }
#line 527 "add_pragma.m"
        {
#line 527 "add_pragma.m"
          hlds__make_hlds__add_pragma__DescPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_35_35));
#line 527 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[160])));
#line 527 "add_pragma.m"
        }
#line 528 "add_pragma.m"
        {
#line 528 "add_pragma.m"
          hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__Context_18, hlds__make_hlds__add_pragma__DescPieces_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);
        }
#line 526 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31;
#line 526 "add_pragma.m"
      }
#line 525 "add_pragma.m"
    else
#line 510 "add_pragma.m"
      {
#line 510 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredTable0_25;
#line 510 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds0_26;
#line 510 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds_27;
#line 510 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus_28;
#line 510 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredTable_29;

#line 511 "add_pragma.m"
        {
#line 511 "add_pragma.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pragma__PredTable0_25);
        }
#line 512 "add_pragma.m"
        {
#line 512 "add_pragma.m"
          hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__Preds0_26);
        }
#line 514 "add_pragma.m"
        {
#line 514 "add_pragma.m"
          hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(hlds__make_hlds__add_pragma__V_43_43, *hlds__make_hlds__add_pragma__PredIds_21, hlds__make_hlds__add_pragma__Status_16, hlds__make_hlds__add_pragma__MustBeExported_17, hlds__make_hlds__add_pragma__Preds0_26, &hlds__make_hlds__add_pragma__Preds_27, &hlds__make_hlds__add_pragma__WrongStatus_28);
        }
#line 519 "add_pragma.m"
#line 519 "add_pragma.m"
        switch (hlds__make_hlds__add_pragma__WrongStatus_28) {
#line 519 "add_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 519 "add_pragma.m"
          case (MR_Integer) 0:
#line 520 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33;
#line 519 "add_pragma.m"
            break;
#line 519 "add_pragma.m"
          case (MR_Integer) 1:
#line 604 "add_pragma.m"
            {
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Pieces_51;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Msg_52;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Spec_53;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_56_56;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_57_57;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_58_58;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_61_61;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_70_70;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_71_71;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_75_75;

#line 605 "add_pragma.m"
              {
#line 605 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
#line 605 "add_pragma.m"
              }
#line 607 "add_pragma.m"
              {
#line 607 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_14));
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_15));
#line 607 "add_pragma.m"
              }
#line 607 "add_pragma.m"
              {
#line 607 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 607 "add_pragma.m"
              }
#line 607 "add_pragma.m"
              {
#line 607 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[49])));
#line 607 "add_pragma.m"
              }
#line 606 "add_pragma.m"
              {
#line 606 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
#line 606 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_61_61));
#line 606 "add_pragma.m"
              }
#line 605 "add_pragma.m"
              {
#line 605 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_57_57));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_58_58));
#line 605 "add_pragma.m"
              }
#line 605 "add_pragma.m"
              {
#line 605 "add_pragma.m"
                hlds__make_hlds__add_pragma__Pieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_56_56));
#line 605 "add_pragma.m"
              }
#line 609 "add_pragma.m"
              {
#line 609 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 609 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_51));
#line 609 "add_pragma.m"
              }
#line 609 "add_pragma.m"
              {
#line 609 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_71_71));
#line 609 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "add_pragma.m"
              }
#line 609 "add_pragma.m"
              {
#line 609 "add_pragma.m"
                hlds__make_hlds__add_pragma__Msg_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 609 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_18));
#line 609 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 609 "add_pragma.m"
              }
#line 610 "add_pragma.m"
              {
#line 610 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_52));
#line 610 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "add_pragma.m"
              }
#line 610 "add_pragma.m"
              {
#line 610 "add_pragma.m"
                hlds__make_hlds__add_pragma__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 610 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 610 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_53, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_75_75));
#line 610 "add_pragma.m"
              }
#line 611 "add_pragma.m"
              {
#line 611 "add_pragma.m"
                MR_Word base;
#line 611 "add_pragma.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = base;
#line 611 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_53));
#line 611 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33));
#line 611 "add_pragma.m"
              }
#line 604 "add_pragma.m"
            }
#line 519 "add_pragma.m"
            break;
#line 519 "add_pragma.m"
        }
#line 523 "add_pragma.m"
        {
#line 523 "add_pragma.m"
          hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pragma__Preds_27, hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__PredTable_29);
        }
#line 524 "add_pragma.m"
        {
#line 524 "add_pragma.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pragma__PredTable_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32);
#line 524 "add_pragma.m"
          return;
        }
#line 510 "add_pragma.m"
      }
#line 507 "add_pragma.m"
  }
#line 500 "add_pragma.m"
}

#line 492 "add_pragma.m"
MR_bool MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_101_114_95_109_117_115_116_95_98_101_95_101_120_112_111_114_116_101_100_95_95_91_49_93_95_48_1_p_0(void)
#line 492 "add_pragma.m"
{
#line 495 "add_pragma.m"
  {
#line 495 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 495 "add_pragma.m"
    {
#line 495 "add_pragma.m"
      return hlds__make_hlds__add_pragma__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 495 "add_pragma.m"
    return hlds__make_hlds__add_pragma__succeeded;
#line 495 "add_pragma.m"
  }
#line 492 "add_pragma.m"
}

#line 430 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(
#line 430 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MMTablingInfo_7,
#line 430 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26,
#line 430 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27,
#line 430 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28,
#line 430 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29)
#line 430 "add_pragma.m"
{
#line 434 "add_pragma.m"
  {
#line 434 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 434 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__MMTablingInfo_7, (MR_Integer) 0)));
#line 434 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TablingStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__MMTablingInfo_7, (MR_Integer) 1)));
#line 434 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
#line 434 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
#line 434 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
#line 434 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
#line 434 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
#line 434 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

#line 439 "add_pragma.m"
    {
#line 439 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_pragma__Preds_17);
    }
#line 440 "add_pragma.m"
    {
#line 440 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
#line 449 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 450 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26;
#line 449 "add_pragma.m"
    else
#line 449 "add_pragma.m"
      {
#line 449 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
#line 449 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

#line 449 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "add_pragma.m"
          {
#line 443 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TablingInfo0_20;
#line 443 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_21;
#line 443 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TablingInfo_22;
#line 443 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_33_33;
#line 443 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_34_34;

#line 444 "add_pragma.m"
            {
#line 444 "add_pragma.m"
              hlds__hlds_module__module_info_get_mm_tabling_info_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_pragma__TablingInfo0_20);
            }
#line 445 "add_pragma.m"
            {
#line 445 "add_pragma.m"
              hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_21, hlds__make_hlds__add_pragma__ModeNum_16);
            }
#line 446 "add_pragma.m"
            {
#line 446 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_40_40));
#line 446 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_21));
#line 446 "add_pragma.m"
            }
#line 446 "add_pragma.m"
            {
#line 446 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TablingStatus_12));
#line 446 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "add_pragma.m"
            }
#line 446 "add_pragma.m"
            {
#line 446 "add_pragma.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_mm_tabling_info_0, ((MR_Box) (hlds__make_hlds__add_pragma__V_33_33)), ((MR_Box) (hlds__make_hlds__add_pragma__V_34_34)), hlds__make_hlds__add_pragma__TablingInfo0_20, &hlds__make_hlds__add_pragma__TablingInfo_22);
            }
#line 448 "add_pragma.m"
            {
#line 448 "add_pragma.m"
              hlds__hlds_module__module_info_set_mm_tabling_info_3_p_0(hlds__make_hlds__add_pragma__TablingInfo_22, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27);
            }
#line 443 "add_pragma.m"
          }
#line 449 "add_pragma.m"
        else
#line 451 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26;
#line 449 "add_pragma.m"
      }
#line 434 "add_pragma.m"
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28;
#line 434 "add_pragma.m"
  }
#line 430 "add_pragma.m"
}

#line 400 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(
#line 400 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__TrailingInfo_7,
#line 400 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26,
#line 400 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27,
#line 400 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28,
#line 400 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29)
#line 400 "add_pragma.m"
{
#line 404 "add_pragma.m"
  {
#line 404 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 404 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TrailingInfo_7, (MR_Integer) 0)));
#line 404 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TrailingStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TrailingInfo_7, (MR_Integer) 1)));
#line 404 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
#line 404 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
#line 404 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
#line 404 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
#line 404 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
#line 404 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

#line 409 "add_pragma.m"
    {
#line 409 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_pragma__Preds_17);
    }
#line 410 "add_pragma.m"
    {
#line 410 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
#line 419 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26;
#line 419 "add_pragma.m"
    else
#line 419 "add_pragma.m"
      {
#line 419 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
#line 419 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

#line 419 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "add_pragma.m"
          {
#line 413 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TrailingMap0_20;
#line 413 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_21;
#line 413 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TrailingMap_22;
#line 413 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_33_33;
#line 413 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_34_34;

#line 414 "add_pragma.m"
            {
#line 414 "add_pragma.m"
              hlds__hlds_module__module_info_get_trailing_info_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_pragma__TrailingMap0_20);
            }
#line 415 "add_pragma.m"
            {
#line 415 "add_pragma.m"
              hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_21, hlds__make_hlds__add_pragma__ModeNum_16);
            }
#line 416 "add_pragma.m"
            {
#line 416 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_40_40));
#line 416 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_21));
#line 416 "add_pragma.m"
            }
#line 416 "add_pragma.m"
            {
#line 416 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TrailingStatus_12));
#line 416 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "add_pragma.m"
            }
#line 416 "add_pragma.m"
            {
#line 416 "add_pragma.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_trailing_info_0, ((MR_Box) (hlds__make_hlds__add_pragma__V_33_33)), ((MR_Box) (hlds__make_hlds__add_pragma__V_34_34)), hlds__make_hlds__add_pragma__TrailingMap0_20, &hlds__make_hlds__add_pragma__TrailingMap_22);
            }
#line 418 "add_pragma.m"
            {
#line 418 "add_pragma.m"
              hlds__hlds_module__module_info_set_trailing_info_3_p_0(hlds__make_hlds__add_pragma__TrailingMap_22, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27);
            }
#line 413 "add_pragma.m"
          }
#line 419 "add_pragma.m"
        else
#line 421 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26;
#line 419 "add_pragma.m"
      }
#line 404 "add_pragma.m"
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28;
#line 404 "add_pragma.m"
  }
#line 400 "add_pragma.m"
}

#line 369 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(
#line 369 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ExceptionsInfo_7,
#line 369 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27,
#line 369 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28,
#line 369 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_29,
#line 369 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30)
#line 369 "add_pragma.m"
{
#line 373 "add_pragma.m"
  {
#line 373 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 373 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExceptionsInfo_7, (MR_Integer) 0)));
#line 373 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ThrowStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExceptionsInfo_7, (MR_Integer) 1)));
#line 373 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
#line 373 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
#line 373 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
#line 373 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
#line 373 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
#line 373 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

#line 377 "add_pragma.m"
    {
#line 377 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_pragma__Preds_17);
    }
#line 378 "add_pragma.m"
    {
#line 378 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
#line 389 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27;
#line 389 "add_pragma.m"
    else
#line 389 "add_pragma.m"
      {
#line 389 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
#line 389 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

#line 389 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "add_pragma.m"
          {
#line 381 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ExceptionInfo0_20;
#line 381 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_21;
#line 381 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcExceptionInfo_22;
#line 381 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ExceptionInfo_23;
#line 381 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_35_35;

#line 382 "add_pragma.m"
            {
#line 382 "add_pragma.m"
              hlds__hlds_module__module_info_get_exception_info_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_pragma__ExceptionInfo0_20);
            }
#line 384 "add_pragma.m"
            {
#line 384 "add_pragma.m"
              hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_21, hlds__make_hlds__add_pragma__ModeNum_16);
            }
#line 385 "add_pragma.m"
            {
#line 385 "add_pragma.m"
              hlds__make_hlds__add_pragma__ProcExceptionInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ProcExceptionInfo_22, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__ThrowStatus_12));
#line 385 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ProcExceptionInfo_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "add_pragma.m"
            }
#line 386 "add_pragma.m"
            {
#line 386 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 386 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_40_40));
#line 386 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_21));
#line 386 "add_pragma.m"
            }
#line 386 "add_pragma.m"
            {
#line 386 "add_pragma.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_exception_info_0, ((MR_Box) (hlds__make_hlds__add_pragma__V_35_35)), ((MR_Box) (hlds__make_hlds__add_pragma__ProcExceptionInfo_22)), hlds__make_hlds__add_pragma__ExceptionInfo0_20, &hlds__make_hlds__add_pragma__ExceptionInfo_23);
            }
#line 388 "add_pragma.m"
            {
#line 388 "add_pragma.m"
              hlds__hlds_module__module_info_set_exception_info_3_p_0(hlds__make_hlds__add_pragma__ExceptionInfo_23, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28);
            }
#line 381 "add_pragma.m"
          }
#line 389 "add_pragma.m"
        else
#line 391 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27;
#line 389 "add_pragma.m"
      }
#line 373 "add_pragma.m"
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_29;
#line 373 "add_pragma.m"
  }
#line 369 "add_pragma.m"
}

#line 497 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(
#line 497 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 497 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__2_2,
#line 497 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__3_3)
#line 497 "add_pragma.m"
{
#line 497 "add_pragma.m"
  {
#line 497 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 497 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar1_4 = hlds__make_hlds__add_pragma__HeadVar__2_2;
#line 497 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar2_5 = hlds__make_hlds__add_pragma__HeadVar__3_3;

#line 497 "add_pragma.m"
    {
#line 497 "add_pragma.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_pragma_scalar_common_2[0], hlds__make_hlds__add_pragma__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__add_pragma__Cast_HeadVar1_4)), ((MR_Box) (hlds__make_hlds__add_pragma__Cast_HeadVar2_5)));
#line 497 "add_pragma.m"
      return;
    }
#line 497 "add_pragma.m"
  }
#line 497 "add_pragma.m"
}

#line 497 "add_pragma.m"
MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(
#line 497 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 497 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__2_2)
#line 497 "add_pragma.m"
{
#line 497 "add_pragma.m"
  {
#line 497 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 497 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar1_3 = hlds__make_hlds__add_pragma__HeadVar__1_1;
#line 497 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar2_4 = hlds__make_hlds__add_pragma__HeadVar__2_2;

#line 497 "add_pragma.m"
    {
#line 497 "add_pragma.m"
      return hlds__make_hlds__add_pragma__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__make_hlds__add_pragma__Cast_HeadVar1_3, (MR_Word) hlds__make_hlds__add_pragma__Cast_HeadVar2_4);
    }
#line 497 "add_pragma.m"
    return hlds__make_hlds__add_pragma__succeeded;
#line 497 "add_pragma.m"
  }
#line 497 "add_pragma.m"
}

#line 1507 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_structure_reuse_6_p_0(
#line 1507 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ReuseInfo_7,
#line 1507 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_8,
#line 1507 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39,
#line 1507 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40,
#line 1507 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41,
#line 1507 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42)
#line 1507 "add_pragma.m"
{
#line 1511 "add_pragma.m"
  {
#line 1511 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1511 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 0)));
#line 1511 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 1)));
#line 1511 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 2)));
#line 1511 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybeReuseDomain_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 3)));

#line 1516 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__MaybeReuseDomain_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1515 "add_pragma.m"
      {
#line 1515 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1515 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1515 "add_pragma.m"
      }
#line 1516 "add_pragma.m"
    else
#line 1517 "add_pragma.m"
      {
#line 1517 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ReuseDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeReuseDomain_14, (MR_Integer) 0)));
#line 1517 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 0)));
#line 1517 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ModeList_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 1)));
#line 1517 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 2)));
#line 1517 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds_19;
#line 1517 "add_pragma.m"
        MR_Integer hlds__make_hlds__add_pragma__Arity_20;
#line 1517 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredIds_21;

#line 1519 "add_pragma.m"
        {
#line 1519 "add_pragma.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__Preds_19);
        }
#line 1520 "add_pragma.m"
        {
#line 1520 "add_pragma.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_17, &hlds__make_hlds__add_pragma__Arity_20);
        }
#line 1521 "add_pragma.m"
        {
#line 1521 "add_pragma.m"
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_18, hlds__make_hlds__add_pragma__SymName_16, hlds__make_hlds__add_pragma__Arity_20, &hlds__make_hlds__add_pragma__PredIds_21);
        }
#line 1530 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1524 "add_pragma.m"
          {
#line 1524 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1524 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1524 "add_pragma.m"
          }
#line 1530 "add_pragma.m"
        else
#line 1530 "add_pragma.m"
          {
#line 1530 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 1)));
#line 1530 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 0)));

#line 1530 "add_pragma.m"
            if ((hlds__make_hlds__add_pragma__V_105_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1531 "add_pragma.m"
              {
#line 1531 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_101_101;
#line 1531 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_102_102;
#line 1531 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_104_104;
#line 1531 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredTable0_23;
#line 1531 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredInfo0_24;
#line 1531 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcTable0_25;
#line 1531 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcList_26;
#line 1533 "add_pragma.m"
                MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_24;
#line 1547 "add_pragma.m"
                MR_Integer hlds__make_hlds__add_pragma__ProcId_27;

#line 1532 "add_pragma.m"
                {
#line 1532 "add_pragma.m"
                  hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__PredTable0_23);
                }
#line 2692 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2694 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1533 "add_pragma.m"
                {
#line 1533 "add_pragma.m"
                  mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, hlds__make_hlds__add_pragma__PredTable0_23, ((MR_Box) (hlds__make_hlds__add_pragma__V_106_106)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
                }
#line 1533 "add_pragma.m"
                hlds__make_hlds__add_pragma__PredInfo0_24 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
#line 1534 "add_pragma.m"
                {
#line 1534 "add_pragma.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__ProcTable0_25);
                }
#line 2708 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1535 "add_pragma.m"
                {
#line 1535 "add_pragma.m"
                  mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcList_26);
                }
#line 1537 "add_pragma.m"
                {
#line 1537 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_26, hlds__make_hlds__add_pragma__ModeList_17, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__ProcId_27);
                }
#line 1547 "add_pragma.m"
                if (hlds__make_hlds__add_pragma__succeeded)
#line 1540 "add_pragma.m"
                  {
#line 1540 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcInfo0_28;
#line 1540 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcInfo_29;
#line 1540 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcTable_30;
#line 1540 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__PredInfo_31;
#line 1540 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__PredTable_32;
#line 1540 "add_pragma.m"
                    MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_28;

#line 1540 "add_pragma.m"
                    {
#line 1540 "add_pragma.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, hlds__make_hlds__add_pragma__ProcId_27, &hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
                    }
#line 1540 "add_pragma.m"
                    hlds__make_hlds__add_pragma__ProcInfo0_28 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
#line 1541 "add_pragma.m"
                    {
#line 1541 "add_pragma.m"
                      hlds__hlds_pred__proc_info_set_imported_structure_reuse_5_p_0(hlds__make_hlds__add_pragma__HeadVars_12, hlds__make_hlds__add_pragma__Types_13, hlds__make_hlds__add_pragma__ReuseDomain_15, hlds__make_hlds__add_pragma__ProcInfo0_28, &hlds__make_hlds__add_pragma__ProcInfo_29);
                    }
#line 1543 "add_pragma.m"
                    {
#line 1543 "add_pragma.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcId_27, ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_29)), hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcTable_30);
                    }
#line 1544 "add_pragma.m"
                    {
#line 1544 "add_pragma.m"
                      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_30, hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__PredInfo_31);
                    }
#line 1545 "add_pragma.m"
                    {
#line 1545 "add_pragma.m"
                      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, ((MR_Box) (hlds__make_hlds__add_pragma__V_106_106)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_31)), hlds__make_hlds__add_pragma__PredTable0_23, &hlds__make_hlds__add_pragma__PredTable_32);
                    }
#line 1546 "add_pragma.m"
                    {
#line 1546 "add_pragma.m"
                      hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_32, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40);
                    }
#line 1540 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1540 "add_pragma.m"
                  }
#line 1547 "add_pragma.m"
                else
#line 1551 "add_pragma.m"
                  {
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Pieces_33;
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Msg_34;
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Spec_35;
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_74_74;
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_77_77;
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_80_80;
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_81_81;
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_82_82;
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_89_89;
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_90_90;
#line 1551 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_94_94;

#line 1550 "add_pragma.m"
                    {
#line 1550 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
#line 1550 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
#line 1550 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
#line 1550 "add_pragma.m"
                    }
#line 1550 "add_pragma.m"
                    {
#line 1550 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1550 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_82_82));
#line 1550 "add_pragma.m"
                    }
#line 1550 "add_pragma.m"
                    {
#line 1550 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_81_81));
#line 1550 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
#line 1550 "add_pragma.m"
                    }
#line 1549 "add_pragma.m"
                    {
#line 1549 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[201])));
#line 1549 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_80_80));
#line 1549 "add_pragma.m"
                    }
#line 1548 "add_pragma.m"
                    {
#line 1548 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[205])));
#line 1548 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1548 "add_pragma.m"
                    }
#line 1548 "add_pragma.m"
                    {
#line 1548 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
#line 1548 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_74_74));
#line 1548 "add_pragma.m"
                    }
#line 1552 "add_pragma.m"
                    {
#line 1552 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1552 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_33));
#line 1552 "add_pragma.m"
                    }
#line 1552 "add_pragma.m"
                    {
#line 1552 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_90_90));
#line 1552 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1552 "add_pragma.m"
                    }
#line 1552 "add_pragma.m"
                    {
#line 1552 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1552 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1552 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_89_89));
#line 1552 "add_pragma.m"
                    }
#line 1554 "add_pragma.m"
                    {
#line 1554 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_34));
#line 1554 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1554 "add_pragma.m"
                    }
#line 1553 "add_pragma.m"
                    {
#line 1553 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1553 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1553 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1553 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_94_94));
#line 1553 "add_pragma.m"
                    }
#line 1555 "add_pragma.m"
                    {
#line 1555 "add_pragma.m"
                      MR_Word base;
#line 1555 "add_pragma.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1555 "add_pragma.m"
                      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
#line 1555 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_35));
#line 1555 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
#line 1555 "add_pragma.m"
                    }
#line 1551 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1551 "add_pragma.m"
                  }
#line 1531 "add_pragma.m"
              }
#line 1530 "add_pragma.m"
            else
#line 1558 "add_pragma.m"
              {
#line 1558 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_47_47;
#line 1558 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 1558 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 1558 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 1558 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 1558 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_67_67;
#line 1558 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Pieces_97;
#line 1558 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_98;
#line 1558 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_99;

#line 1560 "add_pragma.m"
                {
#line 1560 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1560 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
#line 1560 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
#line 1560 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
#line 1560 "add_pragma.m"
                }
#line 1560 "add_pragma.m"
                {
#line 1560 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1560 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 1560 "add_pragma.m"
                }
#line 1560 "add_pragma.m"
                {
#line 1560 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 1560 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[148])));
#line 1560 "add_pragma.m"
                }
#line 1559 "add_pragma.m"
                {
#line 1559 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[202])));
#line 1559 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_47_47));
#line 1559 "add_pragma.m"
                }
#line 1563 "add_pragma.m"
                {
#line 1563 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1563 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_97));
#line 1563 "add_pragma.m"
                }
#line 1563 "add_pragma.m"
                {
#line 1563 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1563 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 1563 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1563 "add_pragma.m"
                }
#line 1563 "add_pragma.m"
                {
#line 1563 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1563 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1563 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 1563 "add_pragma.m"
                }
#line 1564 "add_pragma.m"
                {
#line 1564 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1564 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_98));
#line 1564 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1564 "add_pragma.m"
                }
#line 1564 "add_pragma.m"
                {
#line 1564 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1564 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1564 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1564 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_67_67));
#line 1564 "add_pragma.m"
                }
#line 1565 "add_pragma.m"
                {
#line 1565 "add_pragma.m"
                  MR_Word base;
#line 1565 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1565 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
#line 1565 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_99));
#line 1565 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
#line 1565 "add_pragma.m"
                }
#line 1558 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1558 "add_pragma.m"
              }
#line 1530 "add_pragma.m"
          }
#line 1517 "add_pragma.m"
      }
#line 1511 "add_pragma.m"
  }
#line 1507 "add_pragma.m"
}

#line 1442 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_structure_sharing_6_p_0(
#line 1442 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__SharingInfo_7,
#line 1442 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_8,
#line 1442 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39,
#line 1442 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40,
#line 1442 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41,
#line 1442 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42)
#line 1442 "add_pragma.m"
{
#line 1446 "add_pragma.m"
  {
#line 1446 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1446 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 0)));
#line 1446 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 1)));
#line 1446 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 2)));
#line 1446 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybeSharingDomain_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 3)));

#line 1451 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__MaybeSharingDomain_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1450 "add_pragma.m"
      {
#line 1450 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1450 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1450 "add_pragma.m"
      }
#line 1451 "add_pragma.m"
    else
#line 1452 "add_pragma.m"
      {
#line 1452 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__SharingDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeSharingDomain_14, (MR_Integer) 0)));
#line 1452 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 0)));
#line 1452 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ModeList_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 1)));
#line 1452 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 2)));
#line 1452 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds_19;
#line 1452 "add_pragma.m"
        MR_Integer hlds__make_hlds__add_pragma__Arity_20;
#line 1452 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredIds_21;

#line 1454 "add_pragma.m"
        {
#line 1454 "add_pragma.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__Preds_19);
        }
#line 1455 "add_pragma.m"
        {
#line 1455 "add_pragma.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_17, &hlds__make_hlds__add_pragma__Arity_20);
        }
#line 1456 "add_pragma.m"
        {
#line 1456 "add_pragma.m"
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_18, hlds__make_hlds__add_pragma__SymName_16, hlds__make_hlds__add_pragma__Arity_20, &hlds__make_hlds__add_pragma__PredIds_21);
        }
#line 1465 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1459 "add_pragma.m"
          {
#line 1459 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1459 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1459 "add_pragma.m"
          }
#line 1465 "add_pragma.m"
        else
#line 1465 "add_pragma.m"
          {
#line 1465 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 1)));
#line 1465 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 0)));

#line 1465 "add_pragma.m"
            if ((hlds__make_hlds__add_pragma__V_105_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1466 "add_pragma.m"
              {
#line 1466 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_101_101;
#line 1466 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_102_102;
#line 1466 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_104_104;
#line 1466 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredTable0_23;
#line 1466 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredInfo0_24;
#line 1466 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcTable0_25;
#line 1466 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcList_26;
#line 1468 "add_pragma.m"
                MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_24;
#line 1482 "add_pragma.m"
                MR_Integer hlds__make_hlds__add_pragma__ProcId_27;

#line 1467 "add_pragma.m"
                {
#line 1467 "add_pragma.m"
                  hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__PredTable0_23);
                }
#line 3195 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3197 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1468 "add_pragma.m"
                {
#line 1468 "add_pragma.m"
                  mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, hlds__make_hlds__add_pragma__PredTable0_23, ((MR_Box) (hlds__make_hlds__add_pragma__V_106_106)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
                }
#line 1468 "add_pragma.m"
                hlds__make_hlds__add_pragma__PredInfo0_24 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
#line 1469 "add_pragma.m"
                {
#line 1469 "add_pragma.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__ProcTable0_25);
                }
#line 3211 "hlds.make_hlds.add_pragma.c"
                hlds__make_hlds__add_pragma__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1470 "add_pragma.m"
                {
#line 1470 "add_pragma.m"
                  mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcList_26);
                }
#line 1472 "add_pragma.m"
                {
#line 1472 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_26, hlds__make_hlds__add_pragma__ModeList_17, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__ProcId_27);
                }
#line 1482 "add_pragma.m"
                if (hlds__make_hlds__add_pragma__succeeded)
#line 1475 "add_pragma.m"
                  {
#line 1475 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcInfo0_28;
#line 1475 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcInfo_29;
#line 1475 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__ProcTable_30;
#line 1475 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__PredInfo_31;
#line 1475 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__PredTable_32;
#line 1475 "add_pragma.m"
                    MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_28;

#line 1475 "add_pragma.m"
                    {
#line 1475 "add_pragma.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, hlds__make_hlds__add_pragma__ProcId_27, &hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
                    }
#line 1475 "add_pragma.m"
                    hlds__make_hlds__add_pragma__ProcInfo0_28 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
#line 1476 "add_pragma.m"
                    {
#line 1476 "add_pragma.m"
                      hlds__hlds_pred__proc_info_set_imported_structure_sharing_5_p_0(hlds__make_hlds__add_pragma__HeadVars_12, hlds__make_hlds__add_pragma__Types_13, hlds__make_hlds__add_pragma__SharingDomain_15, hlds__make_hlds__add_pragma__ProcInfo0_28, &hlds__make_hlds__add_pragma__ProcInfo_29);
                    }
#line 1478 "add_pragma.m"
                    {
#line 1478 "add_pragma.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcId_27, ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_29)), hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcTable_30);
                    }
#line 1479 "add_pragma.m"
                    {
#line 1479 "add_pragma.m"
                      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_30, hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__PredInfo_31);
                    }
#line 1480 "add_pragma.m"
                    {
#line 1480 "add_pragma.m"
                      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, ((MR_Box) (hlds__make_hlds__add_pragma__V_106_106)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_31)), hlds__make_hlds__add_pragma__PredTable0_23, &hlds__make_hlds__add_pragma__PredTable_32);
                    }
#line 1481 "add_pragma.m"
                    {
#line 1481 "add_pragma.m"
                      hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_32, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40);
                    }
#line 1475 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
#line 1475 "add_pragma.m"
                  }
#line 1482 "add_pragma.m"
                else
#line 1486 "add_pragma.m"
                  {
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Pieces_33;
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Msg_34;
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Spec_35;
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_74_74;
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_77_77;
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_80_80;
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_81_81;
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_82_82;
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_89_89;
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_90_90;
#line 1486 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_94_94;

#line 1485 "add_pragma.m"
                    {
#line 1485 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1485 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
#line 1485 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
#line 1485 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_82_82, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
#line 1485 "add_pragma.m"
                    }
#line 1485 "add_pragma.m"
                    {
#line 1485 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1485 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_82_82));
#line 1485 "add_pragma.m"
                    }
#line 1485 "add_pragma.m"
                    {
#line 1485 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_81_81));
#line 1485 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
#line 1485 "add_pragma.m"
                    }
#line 1484 "add_pragma.m"
                    {
#line 1484 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[201])));
#line 1484 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_80_80));
#line 1484 "add_pragma.m"
                    }
#line 1483 "add_pragma.m"
                    {
#line 1483 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[204])));
#line 1483 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1483 "add_pragma.m"
                    }
#line 1483 "add_pragma.m"
                    {
#line 1483 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
#line 1483 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_74_74));
#line 1483 "add_pragma.m"
                    }
#line 1487 "add_pragma.m"
                    {
#line 1487 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1487 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_33));
#line 1487 "add_pragma.m"
                    }
#line 1487 "add_pragma.m"
                    {
#line 1487 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_90_90));
#line 1487 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1487 "add_pragma.m"
                    }
#line 1487 "add_pragma.m"
                    {
#line 1487 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1487 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1487 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_89_89));
#line 1487 "add_pragma.m"
                    }
#line 1489 "add_pragma.m"
                    {
#line 1489 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_34));
#line 1489 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1489 "add_pragma.m"
                    }
#line 1488 "add_pragma.m"
                    {
#line 1488 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1488 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1488 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1488 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_94_94));
#line 1488 "add_pragma.m"
                    }
#line 1490 "add_pragma.m"
                    {
#line 1490 "add_pragma.m"
                      MR_Word base;
#line 1490 "add_pragma.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "add_pragma.m"
                      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
#line 1490 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_35));
#line 1490 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
#line 1490 "add_pragma.m"
                    }
#line 1486 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1486 "add_pragma.m"
                  }
#line 1466 "add_pragma.m"
              }
#line 1465 "add_pragma.m"
            else
#line 1493 "add_pragma.m"
              {
#line 1493 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_47_47;
#line 1493 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 1493 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 1493 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 1493 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 1493 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_67_67;
#line 1493 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Pieces_97;
#line 1493 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_98;
#line 1493 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_99;

#line 1495 "add_pragma.m"
                {
#line 1495 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1495 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
#line 1495 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
#line 1495 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_49_49, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
#line 1495 "add_pragma.m"
                }
#line 1495 "add_pragma.m"
                {
#line 1495 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1495 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 1495 "add_pragma.m"
                }
#line 1495 "add_pragma.m"
                {
#line 1495 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 1495 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[145])));
#line 1495 "add_pragma.m"
                }
#line 1494 "add_pragma.m"
                {
#line 1494 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[202])));
#line 1494 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_47_47));
#line 1494 "add_pragma.m"
                }
#line 1498 "add_pragma.m"
                {
#line 1498 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1498 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_97));
#line 1498 "add_pragma.m"
                }
#line 1498 "add_pragma.m"
                {
#line 1498 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 1498 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1498 "add_pragma.m"
                }
#line 1498 "add_pragma.m"
                {
#line 1498 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1498 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1498 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 1498 "add_pragma.m"
                }
#line 1500 "add_pragma.m"
                {
#line 1500 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_98));
#line 1500 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1500 "add_pragma.m"
                }
#line 1499 "add_pragma.m"
                {
#line 1499 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1499 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1499 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1499 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_67_67));
#line 1499 "add_pragma.m"
                }
#line 1501 "add_pragma.m"
                {
#line 1501 "add_pragma.m"
                  MR_Word base;
#line 1501 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
#line 1501 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_99));
#line 1501 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
#line 1501 "add_pragma.m"
                }
#line 1493 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
#line 1493 "add_pragma.m"
              }
#line 1465 "add_pragma.m"
          }
#line 1452 "add_pragma.m"
      }
#line 1446 "add_pragma.m"
  }
#line 1442 "add_pragma.m"
}

#line 1372 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination2_info_6_p_0(
#line 1372 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Term2Info_7,
#line 1372 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_8,
#line 1372 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40,
#line 1372 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41,
#line 1372 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42,
#line 1372 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43)
#line 1372 "add_pragma.m"
{
#line 1376 "add_pragma.m"
  {
#line 1376 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1376 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 0)));
#line 1376 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaSuccessArgSizeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 1)));
#line 1376 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaFailureArgSizeInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 2)));
#line 1376 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 3)));
#line 1376 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 0)));
#line 1376 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ModeList_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 1)));
#line 1376 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 2)));
#line 1376 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_18;
#line 1376 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_19;
#line 1376 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_20;

#line 1381 "add_pragma.m"
    {
#line 1381 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__Preds_18);
    }
#line 1382 "add_pragma.m"
    {
#line 1382 "add_pragma.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_16, &hlds__make_hlds__add_pragma__Arity_19);
    }
#line 1383 "add_pragma.m"
    {
#line 1383 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_18, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_17, hlds__make_hlds__add_pragma__SymName_15, hlds__make_hlds__add_pragma__Arity_19, &hlds__make_hlds__add_pragma__PredIds_20);
    }
#line 1392 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1386 "add_pragma.m"
      {
#line 1386 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
#line 1386 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
#line 1386 "add_pragma.m"
      }
#line 1392 "add_pragma.m"
    else
#line 1392 "add_pragma.m"
      {
#line 1392 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_20, (MR_Integer) 1)));
#line 1392 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_20, (MR_Integer) 0)));

#line 1392 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1393 "add_pragma.m"
          {
#line 1393 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_106_106;
#line 1393 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_107_107;
#line 1393 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_109_109;
#line 1393 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredTable0_22;
#line 1393 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredInfo0_23;
#line 1393 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcTable0_24;
#line 1393 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcList_25;
#line 1395 "add_pragma.m"
            MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_23;
#line 1420 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_26;

#line 1394 "add_pragma.m"
            {
#line 1394 "add_pragma.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__PredTable0_22);
            }
#line 3681 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_106_106 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3683 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_107_107 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1395 "add_pragma.m"
            {
#line 1395 "add_pragma.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__TypeCtorInfo_107_107, hlds__make_hlds__add_pragma__PredTable0_22, ((MR_Box) (hlds__make_hlds__add_pragma__V_111_111)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_23);
            }
#line 1395 "add_pragma.m"
            hlds__make_hlds__add_pragma__PredInfo0_23 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_23);
#line 1396 "add_pragma.m"
            {
#line 1396 "add_pragma.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_23, &hlds__make_hlds__add_pragma__ProcTable0_24);
            }
#line 3697 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_109_109 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1397 "add_pragma.m"
            {
#line 1397 "add_pragma.m"
              mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__TypeCtorInfo_109_109, hlds__make_hlds__add_pragma__ProcTable0_24, &hlds__make_hlds__add_pragma__ProcList_25);
            }
#line 1399 "add_pragma.m"
            {
#line 1399 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_25, hlds__make_hlds__add_pragma__ModeList_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__ProcId_26);
            }
#line 1420 "add_pragma.m"
            if (hlds__make_hlds__add_pragma__succeeded)
#line 1402 "add_pragma.m"
              {
#line 1402 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcInfo0_27;
#line 1402 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__MaybeTerminationInfo_28;
#line 1402 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcInfo_30;
#line 1402 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcTable_31;
#line 1402 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredInfo_32;
#line 1402 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredTable_33;
#line 1402 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_72_72;
#line 1402 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_73_73;
#line 1402 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_74_74;
#line 1402 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_75_75;
#line 1402 "add_pragma.m"
                MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_27;

#line 1402 "add_pragma.m"
                {
#line 1402 "add_pragma.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_109_109, hlds__make_hlds__add_pragma__ProcTable0_24, hlds__make_hlds__add_pragma__ProcId_26, &hlds__make_hlds__add_pragma__conv1_ProcInfo0_27);
                }
#line 1402 "add_pragma.m"
                hlds__make_hlds__add_pragma__ProcInfo0_27 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_27);
#line 1403 "add_pragma.m"
                {
#line 1403 "add_pragma.m"
                  transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_14, hlds__make_hlds__add_pragma__Context_8, &hlds__make_hlds__add_pragma__MaybeTerminationInfo_28);
                }
#line 1407 "add_pragma.m"
                {
#line 1407 "add_pragma.m"
                  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(hlds__make_hlds__add_pragma__ProcInfo0_27, &hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_72_72);
                }
#line 1409 "add_pragma.m"
                {
#line 1409 "add_pragma.m"
                  hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_73_73 = transform_hlds__term_constr_main__f_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_f_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_72_72, hlds__make_hlds__add_pragma__MaybePragmaSuccessArgSizeInfo_12);
                }
#line 1410 "add_pragma.m"
                {
#line 1410 "add_pragma.m"
                  hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_74_74 = transform_hlds__term_constr_main__f_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_f_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_73_73, hlds__make_hlds__add_pragma__MaybePragmaFailureArgSizeInfo_13);
                }
#line 1411 "add_pragma.m"
                {
#line 1411 "add_pragma.m"
                  hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_75_75 = transform_hlds__term_constr_main__f_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_f_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_74_74, hlds__make_hlds__add_pragma__MaybeTerminationInfo_28);
                }
#line 1413 "add_pragma.m"
                {
#line 1413 "add_pragma.m"
                  hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_75_75, hlds__make_hlds__add_pragma__ProcInfo0_27, &hlds__make_hlds__add_pragma__ProcInfo_30);
                }
#line 1416 "add_pragma.m"
                {
#line 1416 "add_pragma.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_109_109, hlds__make_hlds__add_pragma__ProcId_26, ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_30)), hlds__make_hlds__add_pragma__ProcTable0_24, &hlds__make_hlds__add_pragma__ProcTable_31);
                }
#line 1417 "add_pragma.m"
                {
#line 1417 "add_pragma.m"
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_31, hlds__make_hlds__add_pragma__PredInfo0_23, &hlds__make_hlds__add_pragma__PredInfo_32);
                }
#line 1418 "add_pragma.m"
                {
#line 1418 "add_pragma.m"
                  mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__TypeCtorInfo_107_107, ((MR_Box) (hlds__make_hlds__add_pragma__V_111_111)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_32)), hlds__make_hlds__add_pragma__PredTable0_22, &hlds__make_hlds__add_pragma__PredTable_33);
                }
#line 1419 "add_pragma.m"
                {
#line 1419 "add_pragma.m"
                  hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1402 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
#line 1402 "add_pragma.m"
              }
#line 1420 "add_pragma.m"
            else
#line 1424 "add_pragma.m"
              {
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Pieces_34;
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_35;
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_36;
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_79_79;
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_82_82;
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_85_85;
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_86_86;
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_87_87;
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_94_94;
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_95_95;
#line 1424 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_99_99;

#line 1423 "add_pragma.m"
                {
#line 1423 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1423 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_17));
#line 1423 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_87_87, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_15));
#line 1423 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_87_87, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_19));
#line 1423 "add_pragma.m"
                }
#line 1423 "add_pragma.m"
                {
#line 1423 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1423 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_87_87));
#line 1423 "add_pragma.m"
                }
#line 1423 "add_pragma.m"
                {
#line 1423 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_86_86));
#line 1423 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
#line 1423 "add_pragma.m"
                }
#line 1422 "add_pragma.m"
                {
#line 1422 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[201])));
#line 1422 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_85_85));
#line 1422 "add_pragma.m"
                }
#line 1421 "add_pragma.m"
                {
#line 1421 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[203])));
#line 1421 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_82_82));
#line 1421 "add_pragma.m"
                }
#line 1421 "add_pragma.m"
                {
#line 1421 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
#line 1421 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_79_79));
#line 1421 "add_pragma.m"
                }
#line 1425 "add_pragma.m"
                {
#line 1425 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1425 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_34));
#line 1425 "add_pragma.m"
                }
#line 1425 "add_pragma.m"
                {
#line 1425 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_95_95));
#line 1425 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1425 "add_pragma.m"
                }
#line 1425 "add_pragma.m"
                {
#line 1425 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1425 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1425 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_94_94));
#line 1425 "add_pragma.m"
                }
#line 1426 "add_pragma.m"
                {
#line 1426 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_35));
#line 1426 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1426 "add_pragma.m"
                }
#line 1426 "add_pragma.m"
                {
#line 1426 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1426 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1426 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1426 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_99_99));
#line 1426 "add_pragma.m"
                }
#line 1427 "add_pragma.m"
                {
#line 1427 "add_pragma.m"
                  MR_Word base;
#line 1427 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
#line 1427 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_36));
#line 1427 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
#line 1427 "add_pragma.m"
                }
#line 1424 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
#line 1424 "add_pragma.m"
              }
#line 1393 "add_pragma.m"
          }
#line 1392 "add_pragma.m"
        else
#line 1430 "add_pragma.m"
          {
#line 1430 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 1430 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 1430 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_50_50;
#line 1430 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 1430 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_64_64;
#line 1430 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1430 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_102;
#line 1430 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_103;
#line 1430 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Spec_104;

#line 1432 "add_pragma.m"
            {
#line 1432 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1432 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_17));
#line 1432 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_15));
#line 1432 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_19));
#line 1432 "add_pragma.m"
            }
#line 1432 "add_pragma.m"
            {
#line 1432 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1432 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_50_50));
#line 1432 "add_pragma.m"
            }
#line 1432 "add_pragma.m"
            {
#line 1432 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 1432 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[142])));
#line 1432 "add_pragma.m"
            }
#line 1431 "add_pragma.m"
            {
#line 1431 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[202])));
#line 1431 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_102, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 1431 "add_pragma.m"
            }
#line 1435 "add_pragma.m"
            {
#line 1435 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1435 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_102));
#line 1435 "add_pragma.m"
            }
#line 1435 "add_pragma.m"
            {
#line 1435 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_64_64));
#line 1435 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1435 "add_pragma.m"
            }
#line 1435 "add_pragma.m"
            {
#line 1435 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1435 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_103, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1435 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_103, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 1435 "add_pragma.m"
            }
#line 1436 "add_pragma.m"
            {
#line 1436 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_103));
#line 1436 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1436 "add_pragma.m"
            }
#line 1436 "add_pragma.m"
            {
#line 1436 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1436 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1436 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1436 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_104, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1436 "add_pragma.m"
            }
#line 1437 "add_pragma.m"
            {
#line 1437 "add_pragma.m"
              MR_Word base;
#line 1437 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
#line 1437 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_104));
#line 1437 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
#line 1437 "add_pragma.m"
            }
#line 1430 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
#line 1430 "add_pragma.m"
          }
#line 1392 "add_pragma.m"
      }
#line 1376 "add_pragma.m"
  }
#line 1372 "add_pragma.m"
}

#line 1306 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(
#line 1306 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__TermInfo_7,
#line 1306 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_8,
#line 1306 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40,
#line 1306 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41,
#line 1306 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42,
#line 1306 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43)
#line 1306 "add_pragma.m"
{
#line 1310 "add_pragma.m"
  {
#line 1310 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1310 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TermInfo_7, (MR_Integer) 0)));
#line 1310 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaArgSizeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TermInfo_7, (MR_Integer) 1)));
#line 1310 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TermInfo_7, (MR_Integer) 2)));
#line 1310 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 0)));
#line 1310 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ModeList_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 1)));
#line 1310 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 2)));
#line 1310 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
#line 1310 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_18;
#line 1310 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_19;

#line 1314 "add_pragma.m"
    {
#line 1314 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__Preds_17);
    }
#line 1315 "add_pragma.m"
    {
#line 1315 "add_pragma.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_15, &hlds__make_hlds__add_pragma__Arity_18);
    }
#line 1316 "add_pragma.m"
    {
#line 1316 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_16, hlds__make_hlds__add_pragma__SymName_14, hlds__make_hlds__add_pragma__Arity_18, &hlds__make_hlds__add_pragma__PredIds_19);
    }
#line 1325 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "add_pragma.m"
      {
#line 1319 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
#line 1319 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
#line 1319 "add_pragma.m"
      }
#line 1325 "add_pragma.m"
    else
#line 1325 "add_pragma.m"
      {
#line 1325 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_19, (MR_Integer) 1)));
#line 1325 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_19, (MR_Integer) 0)));

#line 1325 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_107_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1326 "add_pragma.m"
          {
#line 1326 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_103_103;
#line 1326 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_104_104;
#line 1326 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_106_106;
#line 1326 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredTable0_21;
#line 1326 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredInfo0_22;
#line 1326 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcTable0_23;
#line 1326 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcList_24;
#line 1328 "add_pragma.m"
            MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_22;
#line 1348 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_25;

#line 1327 "add_pragma.m"
            {
#line 1327 "add_pragma.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__PredTable0_21);
            }
#line 4198 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_103_103 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4200 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 1328 "add_pragma.m"
            {
#line 1328 "add_pragma.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__PredTable0_21, ((MR_Box) (hlds__make_hlds__add_pragma__V_108_108)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_22);
            }
#line 1328 "add_pragma.m"
            hlds__make_hlds__add_pragma__PredInfo0_22 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_22);
#line 1329 "add_pragma.m"
            {
#line 1329 "add_pragma.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_22, &hlds__make_hlds__add_pragma__ProcTable0_23);
            }
#line 4214 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_106_106 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1330 "add_pragma.m"
            {
#line 1330 "add_pragma.m"
              mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__ProcTable0_23, &hlds__make_hlds__add_pragma__ProcList_24);
            }
#line 1332 "add_pragma.m"
            {
#line 1332 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_24, hlds__make_hlds__add_pragma__ModeList_15, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__ProcId_25);
            }
#line 1348 "add_pragma.m"
            if (hlds__make_hlds__add_pragma__succeeded)
#line 1336 "add_pragma.m"
              {
#line 1336 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__MaybeArgSizeInfo_26;
#line 1336 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__MaybeTerminationInfo_27;
#line 1336 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcInfo0_28;
#line 1336 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcInfo1_29;
#line 1336 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcInfo_30;
#line 1336 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ProcTable_31;
#line 1336 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredInfo_32;
#line 1336 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__PredTable_33;
#line 1339 "add_pragma.m"
                MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_28;

#line 1335 "add_pragma.m"
                {
#line 1335 "add_pragma.m"
                  transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaArgSizeInfo_12, hlds__make_hlds__add_pragma__Context_8, &hlds__make_hlds__add_pragma__MaybeArgSizeInfo_26);
                }
#line 1337 "add_pragma.m"
                {
#line 1337 "add_pragma.m"
                  transform_hlds__term_util__add_context_to_termination_info_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_13, hlds__make_hlds__add_pragma__Context_8, &hlds__make_hlds__add_pragma__MaybeTerminationInfo_27);
                }
#line 1339 "add_pragma.m"
                {
#line 1339 "add_pragma.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__ProcTable0_23, hlds__make_hlds__add_pragma__ProcId_25, &hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
                }
#line 1339 "add_pragma.m"
                hlds__make_hlds__add_pragma__ProcInfo0_28 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
#line 1340 "add_pragma.m"
                {
#line 1340 "add_pragma.m"
                  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(hlds__make_hlds__add_pragma__MaybeArgSizeInfo_26, hlds__make_hlds__add_pragma__ProcInfo0_28, &hlds__make_hlds__add_pragma__ProcInfo1_29);
                }
#line 1342 "add_pragma.m"
                {
#line 1342 "add_pragma.m"
                  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(hlds__make_hlds__add_pragma__MaybeTerminationInfo_27, hlds__make_hlds__add_pragma__ProcInfo1_29, &hlds__make_hlds__add_pragma__ProcInfo_30);
                }
#line 1344 "add_pragma.m"
                {
#line 1344 "add_pragma.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__ProcId_25, ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_30)), hlds__make_hlds__add_pragma__ProcTable0_23, &hlds__make_hlds__add_pragma__ProcTable_31);
                }
#line 1345 "add_pragma.m"
                {
#line 1345 "add_pragma.m"
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_31, hlds__make_hlds__add_pragma__PredInfo0_22, &hlds__make_hlds__add_pragma__PredInfo_32);
                }
#line 1346 "add_pragma.m"
                {
#line 1346 "add_pragma.m"
                  mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, ((MR_Box) (hlds__make_hlds__add_pragma__V_108_108)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_32)), hlds__make_hlds__add_pragma__PredTable0_21, &hlds__make_hlds__add_pragma__PredTable_33);
                }
#line 1347 "add_pragma.m"
                {
#line 1347 "add_pragma.m"
                  hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1336 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
#line 1336 "add_pragma.m"
              }
#line 1348 "add_pragma.m"
            else
#line 1349 "add_pragma.m"
              {
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Pieces_34;
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_35;
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_36;
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_76_76;
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_79_79;
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_82_82;
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_83_83;
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_84_84;
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_91_91;
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_92_92;
#line 1349 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_96_96;

#line 1349 "add_pragma.m"
                {
#line 1349 "add_pragma.m"
                  hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41);
                }
#line 1352 "add_pragma.m"
                {
#line 1352 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_16));
#line 1352 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_14));
#line 1352 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_84_84, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_18));
#line 1352 "add_pragma.m"
                }
#line 1352 "add_pragma.m"
                {
#line 1352 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1352 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_84_84));
#line 1352 "add_pragma.m"
                }
#line 1352 "add_pragma.m"
                {
#line 1352 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_83_83));
#line 1352 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
#line 1352 "add_pragma.m"
                }
#line 1351 "add_pragma.m"
                {
#line 1351 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1351 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[201])));
#line 1351 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_82_82));
#line 1351 "add_pragma.m"
                }
#line 1350 "add_pragma.m"
                {
#line 1350 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[200])));
#line 1350 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_79_79));
#line 1350 "add_pragma.m"
                }
#line 1350 "add_pragma.m"
                {
#line 1350 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
#line 1350 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_76_76));
#line 1350 "add_pragma.m"
                }
#line 1354 "add_pragma.m"
                {
#line 1354 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1354 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_92_92, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_34));
#line 1354 "add_pragma.m"
                }
#line 1354 "add_pragma.m"
                {
#line 1354 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1354 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_92_92));
#line 1354 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1354 "add_pragma.m"
                }
#line 1354 "add_pragma.m"
                {
#line 1354 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1354 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1354 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_91_91));
#line 1354 "add_pragma.m"
                }
#line 1356 "add_pragma.m"
                {
#line 1356 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_35));
#line 1356 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1356 "add_pragma.m"
                }
#line 1355 "add_pragma.m"
                {
#line 1355 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1355 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1355 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1355 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_96_96));
#line 1355 "add_pragma.m"
                }
#line 1357 "add_pragma.m"
                {
#line 1357 "add_pragma.m"
                  MR_Word base;
#line 1357 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
#line 1357 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_36));
#line 1357 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
#line 1357 "add_pragma.m"
                }
#line 1349 "add_pragma.m"
              }
#line 1326 "add_pragma.m"
          }
#line 1325 "add_pragma.m"
        else
#line 1360 "add_pragma.m"
          {
#line 1360 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 1360 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 1360 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_50_50;
#line 1360 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 1360 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_64_64;
#line 1360 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1360 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_99;
#line 1360 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_100;
#line 1360 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Spec_101;

#line 1362 "add_pragma.m"
            {
#line 1362 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_16));
#line 1362 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_14));
#line 1362 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_50_50, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_18));
#line 1362 "add_pragma.m"
            }
#line 1362 "add_pragma.m"
            {
#line 1362 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1362 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_50_50));
#line 1362 "add_pragma.m"
            }
#line 1362 "add_pragma.m"
            {
#line 1362 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 1362 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
#line 1362 "add_pragma.m"
            }
#line 1361 "add_pragma.m"
            {
#line 1361 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[202])));
#line 1361 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_99, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 1361 "add_pragma.m"
            }
#line 1365 "add_pragma.m"
            {
#line 1365 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_99));
#line 1365 "add_pragma.m"
            }
#line 1365 "add_pragma.m"
            {
#line 1365 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_64_64));
#line 1365 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1365 "add_pragma.m"
            }
#line 1365 "add_pragma.m"
            {
#line 1365 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 1365 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_100, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 1365 "add_pragma.m"
            }
#line 1366 "add_pragma.m"
            {
#line 1366 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_100));
#line 1366 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "add_pragma.m"
            }
#line 1366 "add_pragma.m"
            {
#line 1366 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1366 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_101, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1366 "add_pragma.m"
            }
#line 1367 "add_pragma.m"
            {
#line 1367 "add_pragma.m"
              MR_Word base;
#line 1367 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
#line 1367 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_101));
#line 1367 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
#line 1367 "add_pragma.m"
            }
#line 1360 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
#line 1360 "add_pragma.m"
          }
#line 1325 "add_pragma.m"
      }
#line 1310 "add_pragma.m"
  }
#line 1306 "add_pragma.m"
}

#line 1296 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(
#line 1296 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ModuleInfo_4,
#line 1296 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredId_5,
#line 1296 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__Piece_6)
#line 1296 "add_pragma.m"
{
#line 1299 "add_pragma.m"
  {
#line 1299 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1299 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredInfo_7;
#line 1299 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__OrigArity_8;

#line 1300 "add_pragma.m"
    {
#line 1300 "add_pragma.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pragma__ModuleInfo_4, hlds__make_hlds__add_pragma__PredId_5, &hlds__make_hlds__add_pragma__PredInfo_7);
    }
#line 1301 "add_pragma.m"
    {
#line 1301 "add_pragma.m"
      hlds__make_hlds__add_pragma__OrigArity_8 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__PredInfo_7);
    }
#line 1302 "add_pragma.m"
    {
#line 1302 "add_pragma.m"
      MR_Word base;
#line 1302 "add_pragma.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "add_pragma.m"
      *hlds__make_hlds__add_pragma__Piece_6 = base;
#line 1302 "add_pragma.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1302 "add_pragma.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__OrigArity_8));
#line 1302 "add_pragma.m"
    }
#line 1299 "add_pragma.m"
  }
#line 1296 "add_pragma.m"
}

#line 1247 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
#line 1247 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1247 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1247 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2)
#line 1247 "add_pragma.m"
{
#line 1247 "add_pragma.m"
  {
#line 1247 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 1247 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv0_Piece_6;

#line 1247 "add_pragma.m"
    {
#line 1247 "add_pragma.m"
      hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv0_Piece_6);
    }
#line 1247 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_Piece_6));
#line 1247 "add_pragma.m"
  }
#line 1247 "add_pragma.m"
}

#line 1218 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(
#line 1218 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ModuleInfo_11,
#line 1218 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_12,
#line 1218 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__TypeCtor_13,
#line 1218 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__Kind_14,
#line 1218 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredNameArity_15,
#line 1218 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PredId_16,
#line 1218 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41,
#line 1218 "add_pragma.m"
  MR_Integer * hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_42,
#line 1218 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43,
#line 1218 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44)
#line 1218 "add_pragma.m"
{
#line 1223 "add_pragma.m"
  {
#line 1223 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1223 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredicateTable_19;
#line 1223 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredName_20;
#line 1223 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__PredArity_21;
#line 1223 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_22;

#line 1224 "add_pragma.m"
    {
#line 1224 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__ModuleInfo_11, &hlds__make_hlds__add_pragma__PredicateTable_19);
    }
#line 1225 "add_pragma.m"
    hlds__make_hlds__add_pragma__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_15, (MR_Integer) 0)));
#line 1225 "add_pragma.m"
    hlds__make_hlds__add_pragma__PredArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_15, (MR_Integer) 1)));
#line 1226 "add_pragma.m"
    {
#line 1226 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_20, hlds__make_hlds__add_pragma__PredArity_21, &hlds__make_hlds__add_pragma__PredIds_22);
    }
#line 1277 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1229 "add_pragma.m"
      {
#line 1229 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__LooseArityPredIds_23;
#line 1229 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Spec_28;

#line 1230 "add_pragma.m"
        {
#line 1230 "add_pragma.m"
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(hlds__make_hlds__add_pragma__PredicateTable_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_20, &hlds__make_hlds__add_pragma__LooseArityPredIds_23);
        }
#line 1245 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__LooseArityPredIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1233 "add_pragma.m"
          {
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
#line 1233 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__TypeArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_26;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_27;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_168_168;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_169_169;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_170_170;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_171_171;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_172_172;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_175_175;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_178_178;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_181_181;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_184_184;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_185_185;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_186_186;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_187_187;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_190_190;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_192_192;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_195_195;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_196_196;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_197_197;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_204_204;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_205_205;
#line 1233 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_209_209;

#line 1235 "add_pragma.m"
            {
#line 1235 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_169_169, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41));
#line 1235 "add_pragma.m"
            }
#line 1236 "add_pragma.m"
            {
#line 1236 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_171_171 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "add_pragma.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__V_171_171, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Kind_14));
#line 1236 "add_pragma.m"
            }
#line 1239 "add_pragma.m"
            {
#line 1239 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_186_186, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_24));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_186_186, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_25));
#line 1239 "add_pragma.m"
            }
#line 1239 "add_pragma.m"
            {
#line 1239 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_185_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_185_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_185_185, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_186_186));
#line 1239 "add_pragma.m"
            }
#line 1241 "add_pragma.m"
            {
#line 1241 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_197_197, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredName_20));
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_197_197, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
#line 1241 "add_pragma.m"
            }
#line 1241 "add_pragma.m"
            {
#line 1241 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_196_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_196_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_196_196, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_197_197));
#line 1241 "add_pragma.m"
            }
#line 1241 "add_pragma.m"
            {
#line 1241 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_195_195, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_196_196));
#line 1241 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_195_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[131])));
#line 1241 "add_pragma.m"
            }
#line 1240 "add_pragma.m"
            {
#line 1240 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_192_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[195])));
#line 1240 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_192_192, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_195_195));
#line 1240 "add_pragma.m"
            }
#line 1239 "add_pragma.m"
            {
#line 1239 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_190_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_190_190, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_192_192));
#line 1239 "add_pragma.m"
            }
#line 1239 "add_pragma.m"
            {
#line 1239 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_187_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[194])));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_187_187, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_190_190));
#line 1239 "add_pragma.m"
            }
#line 1239 "add_pragma.m"
            {
#line 1239 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_184_184, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_185_185));
#line 1239 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_184_184, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_187_187));
#line 1239 "add_pragma.m"
            }
#line 1238 "add_pragma.m"
            {
#line 1238 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_181_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[184])));
#line 1238 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_181_181, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_184_184));
#line 1238 "add_pragma.m"
            }
#line 1237 "add_pragma.m"
            {
#line 1237 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[193])));
#line 1237 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_178_178, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_181_181));
#line 1237 "add_pragma.m"
            }
#line 1237 "add_pragma.m"
            {
#line 1237 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_175_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[192])));
#line 1237 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_175_175, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_178_178));
#line 1237 "add_pragma.m"
            }
#line 1236 "add_pragma.m"
            {
#line 1236 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_172_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[191])));
#line 1236 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_172_172, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_175_175));
#line 1236 "add_pragma.m"
            }
#line 1236 "add_pragma.m"
            {
#line 1236 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_170_170, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_171_171));
#line 1236 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_170_170, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_172_172));
#line 1236 "add_pragma.m"
            }
#line 1235 "add_pragma.m"
            {
#line 1235 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_168_168, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_169_169));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_168_168, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_170_170));
#line 1235 "add_pragma.m"
            }
#line 1235 "add_pragma.m"
            {
#line 1235 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[190])));
#line 1235 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_168_168));
#line 1235 "add_pragma.m"
            }
#line 1243 "add_pragma.m"
            {
#line 1243 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_26));
#line 1243 "add_pragma.m"
            }
#line 1243 "add_pragma.m"
            {
#line 1243 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_205_205));
#line 1243 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "add_pragma.m"
            }
#line 1243 "add_pragma.m"
            {
#line 1243 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_12));
#line 1243 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_204_204));
#line 1243 "add_pragma.m"
            }
#line 1244 "add_pragma.m"
            {
#line 1244 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_27));
#line 1244 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1244 "add_pragma.m"
            }
#line 1244 "add_pragma.m"
            {
#line 1244 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1244 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1244 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1244 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_209_209));
#line 1244 "add_pragma.m"
            }
#line 1233 "add_pragma.m"
          }
#line 1245 "add_pragma.m"
        else
#line 1246 "add_pragma.m"
          {
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_226_226;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ArityPieces_31;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__SortedArityPieces_32;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ExpArities_34;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_95_95;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_104_104;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_107_107;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_108_108;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_109_109;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_110_110;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_111_111;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_114_114;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_117_117;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_120_120;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_123_123;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_124_124;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_125_125;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_126_126;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_129_129;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_131_131;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_134_134;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_135_135;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_136_136;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_137_137;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_140_140;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_143_143;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_144_144;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_152_152;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_159_159;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_160_160;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_164_164;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeName_214;
#line 1246 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__TypeArity_215;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_216;
#line 1246 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_217;

#line 1247 "add_pragma.m"
            {
#line 1247 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_95_95, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1]));
#line 1247 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1));
#line 1247 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1247 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_95_95, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__ModuleInfo_11));
#line 1247 "add_pragma.m"
            }
#line 5119 "hlds.make_hlds.add_pragma.c"
            hlds__make_hlds__add_pragma__TypeCtorInfo_226_226 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1247 "add_pragma.m"
            {
#line 1247 "add_pragma.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__make_hlds__add_pragma__TypeCtorInfo_226_226, hlds__make_hlds__add_pragma__V_95_95, hlds__make_hlds__add_pragma__LooseArityPredIds_23, &hlds__make_hlds__add_pragma__ArityPieces_31);
            }
#line 1249 "add_pragma.m"
            {
#line 1249 "add_pragma.m"
              mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_226_226, hlds__make_hlds__add_pragma__ArityPieces_31, &hlds__make_hlds__add_pragma__SortedArityPieces_32);
            }
#line 1253 "add_pragma.m"
            if ((hlds__make_hlds__add_pragma__SortedArityPieces_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1251 "add_pragma.m"
              {
#line 1252 "add_pragma.m"
                {
#line 1252 "add_pragma.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma", (MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10", (MR_String) "no arity pieces");
#line 1252 "add_pragma.m"
                  return;
                }
#line 1251 "add_pragma.m"
              }
#line 1253 "add_pragma.m"
            else
#line 1253 "add_pragma.m"
              {
#line 1253 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__SortedArityPieces_32, (MR_Integer) 1)));
#line 1254 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__SortedArityPieces_32, (MR_Integer) 0)));

#line 1253 "add_pragma.m"
                if ((hlds__make_hlds__add_pragma__V_227_227 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1255 "add_pragma.m"
                  hlds__make_hlds__add_pragma__ExpArities_34 = hlds__make_hlds__add_pragma__SortedArityPieces_32;
#line 1253 "add_pragma.m"
                else
#line 1257 "add_pragma.m"
                  {
#line 1257 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_99_99;

#line 1259 "add_pragma.m"
                    {
#line 1259 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_99_99 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_pragma__SortedArityPieces_32);
                    }
#line 1258 "add_pragma.m"
                    {
#line 1258 "add_pragma.m"
                      hlds__make_hlds__add_pragma__ExpArities_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ExpArities_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[196])));
#line 1258 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ExpArities_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_99_99));
#line 1258 "add_pragma.m"
                    }
#line 1257 "add_pragma.m"
                  }
#line 1253 "add_pragma.m"
              }
#line 1261 "add_pragma.m"
            hlds__make_hlds__add_pragma__TypeName_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
#line 1261 "add_pragma.m"
            hlds__make_hlds__add_pragma__TypeArity_215 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
#line 1262 "add_pragma.m"
            {
#line 1262 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1262 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41));
#line 1262 "add_pragma.m"
            }
#line 1263 "add_pragma.m"
            {
#line 1263 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_110_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "add_pragma.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__V_110_110, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Kind_14));
#line 1263 "add_pragma.m"
            }
#line 1266 "add_pragma.m"
            {
#line 1266 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_125_125, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_214));
#line 1266 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_215));
#line 1266 "add_pragma.m"
            }
#line 1266 "add_pragma.m"
            {
#line 1266 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1266 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_125_125));
#line 1266 "add_pragma.m"
            }
#line 1268 "add_pragma.m"
            {
#line 1268 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredName_20));
#line 1268 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
#line 1268 "add_pragma.m"
            }
#line 1268 "add_pragma.m"
            {
#line 1268 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1268 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_135_135, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_136_136));
#line 1268 "add_pragma.m"
            }
#line 1270 "add_pragma.m"
            {
#line 1270 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1270 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_144_144, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
#line 1270 "add_pragma.m"
            }
#line 1270 "add_pragma.m"
            {
#line 1270 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_144_144));
#line 1270 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[135])));
#line 1270 "add_pragma.m"
            }
#line 1270 "add_pragma.m"
            {
#line 1270 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[198])));
#line 1270 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_143_143));
#line 1270 "add_pragma.m"
            }
#line 1269 "add_pragma.m"
            {
#line 1269 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_137_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[197])));
#line 1269 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_137_137, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_140_140));
#line 1269 "add_pragma.m"
            }
#line 1268 "add_pragma.m"
            {
#line 1268 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_135_135));
#line 1268 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_134_134, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_137_137));
#line 1268 "add_pragma.m"
            }
#line 1267 "add_pragma.m"
            {
#line 1267 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1267 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_131_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[195])));
#line 1267 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_131_131, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_134_134));
#line 1267 "add_pragma.m"
            }
#line 1266 "add_pragma.m"
            {
#line 1266 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1266 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_129_129, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_131_131));
#line 1266 "add_pragma.m"
            }
#line 1266 "add_pragma.m"
            {
#line 1266 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_126_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[194])));
#line 1266 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_129_129));
#line 1266 "add_pragma.m"
            }
#line 1266 "add_pragma.m"
            {
#line 1266 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_123_123, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_124_124));
#line 1266 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_123_123, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_126_126));
#line 1266 "add_pragma.m"
            }
#line 1265 "add_pragma.m"
            {
#line 1265 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_120_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[184])));
#line 1265 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_123_123));
#line 1265 "add_pragma.m"
            }
#line 1264 "add_pragma.m"
            {
#line 1264 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_117_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[193])));
#line 1264 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_120_120));
#line 1264 "add_pragma.m"
            }
#line 1264 "add_pragma.m"
            {
#line 1264 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_114_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[192])));
#line 1264 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_117_117));
#line 1264 "add_pragma.m"
            }
#line 1263 "add_pragma.m"
            {
#line 1263 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_111_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[191])));
#line 1263 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_114_114));
#line 1263 "add_pragma.m"
            }
#line 1263 "add_pragma.m"
            {
#line 1263 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_110_110));
#line 1263 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_111_111));
#line 1263 "add_pragma.m"
            }
#line 1262 "add_pragma.m"
            {
#line 1262 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_108_108));
#line 1262 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_109_109));
#line 1262 "add_pragma.m"
            }
#line 1262 "add_pragma.m"
            {
#line 1262 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[190])));
#line 1262 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_104_104, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_107_107));
#line 1262 "add_pragma.m"
            }
#line 1271 "add_pragma.m"
            {
#line 1271 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_152_152 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__TypeCtorInfo_226_226, hlds__make_hlds__add_pragma__ExpArities_34, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50]));
            }
#line 1271 "add_pragma.m"
            {
#line 1271 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_216 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__TypeCtorInfo_226_226, hlds__make_hlds__add_pragma__V_104_104, hlds__make_hlds__add_pragma__V_152_152);
            }
#line 1272 "add_pragma.m"
            {
#line 1272 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_216));
#line 1272 "add_pragma.m"
            }
#line 1272 "add_pragma.m"
            {
#line 1272 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_160_160));
#line 1272 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1272 "add_pragma.m"
            }
#line 1272 "add_pragma.m"
            {
#line 1272 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_217, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_12));
#line 1272 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_217, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_159_159));
#line 1272 "add_pragma.m"
            }
#line 1273 "add_pragma.m"
            {
#line 1273 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_217));
#line 1273 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1273 "add_pragma.m"
            }
#line 1273 "add_pragma.m"
            {
#line 1273 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1273 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1273 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_164_164));
#line 1273 "add_pragma.m"
            }
#line 1246 "add_pragma.m"
          }
#line 1275 "add_pragma.m"
        {
#line 1275 "add_pragma.m"
          MR_Word base;
#line 1275 "add_pragma.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1275 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44 = base;
#line 1275 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_28));
#line 1275 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43));
#line 1275 "add_pragma.m"
        }
#line 1276 "add_pragma.m"
        {
#line 1276 "add_pragma.m"
          *hlds__make_hlds__add_pragma__PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 1229 "add_pragma.m"
      }
#line 1277 "add_pragma.m"
    else
#line 1277 "add_pragma.m"
      {
#line 1277 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_22, (MR_Integer) 1)));
#line 1277 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_22, (MR_Integer) 0)));

#line 1277 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_229_229 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "add_pragma.m"
          {
#line 1278 "add_pragma.m"
            *hlds__make_hlds__add_pragma__PredId_16 = hlds__make_hlds__add_pragma__V_230_230;
#line 1278 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43;
#line 1278 "add_pragma.m"
          }
#line 1277 "add_pragma.m"
        else
#line 1280 "add_pragma.m"
          {
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_50_50;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_51_51;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_52_52;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_53_53;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_56_56;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_59_59;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_65_65;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_66_66;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_67_67;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_71_71;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_73_73;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_76_76;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_77_77;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_78_78;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_85_85;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_86_86;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_90_90;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeName_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
#line 1280 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__TypeArity_219 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_220;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_221;
#line 1280 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Spec_222;

#line 1282 "add_pragma.m"
            {
#line 1282 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1282 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1282 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41));
#line 1282 "add_pragma.m"
            }
#line 1283 "add_pragma.m"
            {
#line 1283 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "add_pragma.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Kind_14));
#line 1283 "add_pragma.m"
            }
#line 1286 "add_pragma.m"
            {
#line 1286 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1286 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_218));
#line 1286 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_219));
#line 1286 "add_pragma.m"
            }
#line 1286 "add_pragma.m"
            {
#line 1286 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1286 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_67_67));
#line 1286 "add_pragma.m"
            }
#line 1288 "add_pragma.m"
            {
#line 1288 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1288 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredName_20));
#line 1288 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
#line 1288 "add_pragma.m"
            }
#line 1288 "add_pragma.m"
            {
#line 1288 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1288 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_78_78));
#line 1288 "add_pragma.m"
            }
#line 1288 "add_pragma.m"
            {
#line 1288 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1288 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
#line 1288 "add_pragma.m"
            }
#line 1287 "add_pragma.m"
            {
#line 1287 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_73_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[199])));
#line 1287 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_76_76));
#line 1287 "add_pragma.m"
            }
#line 1286 "add_pragma.m"
            {
#line 1286 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1286 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_73_73));
#line 1286 "add_pragma.m"
            }
#line 1286 "add_pragma.m"
            {
#line 1286 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[194])));
#line 1286 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_71_71));
#line 1286 "add_pragma.m"
            }
#line 1286 "add_pragma.m"
            {
#line 1286 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_66_66));
#line 1286 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1286 "add_pragma.m"
            }
#line 1285 "add_pragma.m"
            {
#line 1285 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[184])));
#line 1285 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_65_65));
#line 1285 "add_pragma.m"
            }
#line 1284 "add_pragma.m"
            {
#line 1284 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[188])));
#line 1284 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 1284 "add_pragma.m"
            }
#line 1284 "add_pragma.m"
            {
#line 1284 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[192])));
#line 1284 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_59_59));
#line 1284 "add_pragma.m"
            }
#line 1283 "add_pragma.m"
            {
#line 1283 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[191])));
#line 1283 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_56_56));
#line 1283 "add_pragma.m"
            }
#line 1283 "add_pragma.m"
            {
#line 1283 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_52_52));
#line 1283 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_53_53));
#line 1283 "add_pragma.m"
            }
#line 1282 "add_pragma.m"
            {
#line 1282 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1282 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_50_50));
#line 1282 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_51_51));
#line 1282 "add_pragma.m"
            }
#line 1282 "add_pragma.m"
            {
#line 1282 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1282 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_220, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[190])));
#line 1282 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_220, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 1282 "add_pragma.m"
            }
#line 1289 "add_pragma.m"
            {
#line 1289 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_220));
#line 1289 "add_pragma.m"
            }
#line 1289 "add_pragma.m"
            {
#line 1289 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_86_86));
#line 1289 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1289 "add_pragma.m"
            }
#line 1289 "add_pragma.m"
            {
#line 1289 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_221, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_12));
#line 1289 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_221, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_85_85));
#line 1289 "add_pragma.m"
            }
#line 1290 "add_pragma.m"
            {
#line 1290 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_221));
#line 1290 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1290 "add_pragma.m"
            }
#line 1290 "add_pragma.m"
            {
#line 1290 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_222 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_222, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1290 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1290 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_222, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_90_90));
#line 1290 "add_pragma.m"
            }
#line 1291 "add_pragma.m"
            {
#line 1291 "add_pragma.m"
              MR_Word base;
#line 1291 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44 = base;
#line 1291 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_222));
#line 1291 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43));
#line 1291 "add_pragma.m"
            }
#line 1292 "add_pragma.m"
            {
#line 1292 "add_pragma.m"
              *hlds__make_hlds__add_pragma__PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 1280 "add_pragma.m"
          }
#line 1277 "add_pragma.m"
      }
#line 1294 "add_pragma.m"
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_42 = (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41 + (MR_Integer) 1);
#line 1223 "add_pragma.m"
  }
#line 1218 "add_pragma.m"
}

#line 1191 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3(
#line 1191 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1191 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1191 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1191 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1191 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1191 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1191 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6)
#line 1191 "add_pragma.m"
{
#line 1191 "add_pragma.m"
  {
#line 1191 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 1191 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv12_PredId_16;
#line 1191 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__conv11_STATE_VARIABLE_SeqNum_42;
#line 1191 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv10_STATE_VARIABLE_Specs_44;

#line 1191 "add_pragma.m"
    {
#line 1191 "add_pragma.m"
      hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv12_PredId_16, ((MR_Integer) hlds__make_hlds__add_pragma__wrapper_arg_3), &hlds__make_hlds__add_pragma__conv11_STATE_VARIABLE_SeqNum_42, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_5), &hlds__make_hlds__add_pragma__conv10_STATE_VARIABLE_Specs_44);
    }
#line 1191 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv12_PredId_16));
#line 1191 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__conv11_STATE_VARIABLE_SeqNum_42));
#line 1191 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__conv10_STATE_VARIABLE_Specs_44));
#line 1191 "add_pragma.m"
  }
#line 1191 "add_pragma.m"
}

#line 1187 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2(
#line 1187 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1187 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1187 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1187 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1187 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1187 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1187 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6)
#line 1187 "add_pragma.m"
{
#line 1187 "add_pragma.m"
  {
#line 1187 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 1187 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv7_PredId_16;
#line 1187 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__conv6_STATE_VARIABLE_SeqNum_42;
#line 1187 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv5_STATE_VARIABLE_Specs_44;

#line 1187 "add_pragma.m"
    {
#line 1187 "add_pragma.m"
      hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv7_PredId_16, ((MR_Integer) hlds__make_hlds__add_pragma__wrapper_arg_3), &hlds__make_hlds__add_pragma__conv6_STATE_VARIABLE_SeqNum_42, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_5), &hlds__make_hlds__add_pragma__conv5_STATE_VARIABLE_Specs_44);
    }
#line 1187 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv7_PredId_16));
#line 1187 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__conv6_STATE_VARIABLE_SeqNum_42));
#line 1187 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__conv5_STATE_VARIABLE_Specs_44));
#line 1187 "add_pragma.m"
  }
#line 1187 "add_pragma.m"
}

#line 1183 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1(
#line 1183 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 1183 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 1183 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 1183 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
#line 1183 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
#line 1183 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
#line 1183 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6)
#line 1183 "add_pragma.m"
{
#line 1183 "add_pragma.m"
  {
#line 1183 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 1183 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv2_PredId_16;
#line 1183 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_SeqNum_42;
#line 1183 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_44;

#line 1183 "add_pragma.m"
    {
#line 1183 "add_pragma.m"
      hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv2_PredId_16, ((MR_Integer) hlds__make_hlds__add_pragma__wrapper_arg_3), &hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_SeqNum_42, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_5), &hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_44);
    }
#line 1183 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv2_PredId_16));
#line 1183 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_SeqNum_42));
#line 1183 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_44));
#line 1183 "add_pragma.m"
  }
#line 1183 "add_pragma.m"
}

#line 1128 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(
#line 1128 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__OISUInfo_8,
#line 1128 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_9,
#line 1128 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_10,
#line 1128 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45,
#line 1128 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46,
#line 1128 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47,
#line 1128 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48)
#line 1128 "add_pragma.m"
{
#line 1132 "add_pragma.m"
  {
#line 1132 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_130_130;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_131_131;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_132_132;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeInfo_133_133;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 0)));
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Creators_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 1)));
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Mutators_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 2)));
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Destructors_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 3)));
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ThisModule_18;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__CreatorPredIds_29;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MutatorPredIds_31;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__DestructorPredIds_33;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_85_85;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_87_87;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_89_89;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_91_91;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_93_93;
#line 1132 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_95_95;
#line 1182 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__V_30_30;
#line 1182 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv4_V_30_30;
#line 1182 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv3_STATE_VARIABLE_OISUSpecs_87_87;
#line 1186 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__V_32_32;
#line 1186 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv9_V_32_32;
#line 1186 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv8_STATE_VARIABLE_OISUSpecs_91_91;
#line 1190 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__V_34_34;
#line 1190 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv14_V_34_34;
#line 1190 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv13_STATE_VARIABLE_OISUSpecs_95_95;

#line 1136 "add_pragma.m"
    {
#line 1136 "add_pragma.m"
      hlds__make_hlds__add_pragma__ThisModule_18 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_pragma__Status_9);
    }
#line 1139 "add_pragma.m"
#line 1139 "add_pragma.m"
    switch (hlds__make_hlds__add_pragma__ThisModule_18) {
#line 1139 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1139 "add_pragma.m"
      case (MR_Integer) 0:
#line 1138 "add_pragma.m"
        hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49;
#line 1139 "add_pragma.m"
        break;
#line 1139 "add_pragma.m"
      case (MR_Integer) 1:
#line 1140 "add_pragma.m"
        {
#line 1140 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Exported_19;
#line 1140 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__TypeTable_23;
#line 1140 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65;
#line 1168 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__TypeDefn_24;

#line 1141 "add_pragma.m"
          {
#line 1141 "add_pragma.m"
            hlds__make_hlds__add_pragma__Exported_19 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_pragma__Status_9);
          }
#line 1144 "add_pragma.m"
#line 1144 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__Exported_19) {
#line 1144 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1144 "add_pragma.m"
            case (MR_Integer) 0:
#line 1145 "add_pragma.m"
              {
#line 1145 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__StatusMsg_21;
#line 1145 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__StatusSpec_22;
#line 1145 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_63_63;

#line 1148 "add_pragma.m"
                {
#line 1148 "add_pragma.m"
                  hlds__make_hlds__add_pragma__StatusMsg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusMsg_21, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1148 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusMsg_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[185])));
#line 1148 "add_pragma.m"
                }
#line 1150 "add_pragma.m"
                {
#line 1150 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__StatusMsg_21));
#line 1150 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1150 "add_pragma.m"
                }
#line 1149 "add_pragma.m"
                {
#line 1149 "add_pragma.m"
                  hlds__make_hlds__add_pragma__StatusSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1149 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1149 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusSpec_22, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 1149 "add_pragma.m"
                }
#line 1151 "add_pragma.m"
                {
#line 1151 "add_pragma.m"
                  hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__StatusSpec_22));
#line 1151 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49));
#line 1151 "add_pragma.m"
                }
#line 1145 "add_pragma.m"
              }
#line 1144 "add_pragma.m"
              break;
#line 1144 "add_pragma.m"
            case (MR_Integer) 1:
#line 1143 "add_pragma.m"
              hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49;
#line 1144 "add_pragma.m"
              break;
#line 1144 "add_pragma.m"
          }
#line 1154 "add_pragma.m"
          {
#line 1154 "add_pragma.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_pragma__TypeTable_23);
          }
#line 1155 "add_pragma.m"
          {
#line 1155 "add_pragma.m"
            hlds__make_hlds__add_pragma__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__TypeTable_23, hlds__make_hlds__add_pragma__TypeCtor_13, &hlds__make_hlds__add_pragma__TypeDefn_24);
          }
#line 1168 "add_pragma.m"
          if (hlds__make_hlds__add_pragma__succeeded)
#line 1156 "add_pragma.m"
            {
#line 1156 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TypeStatus_25;

#line 1156 "add_pragma.m"
              {
#line 1156 "add_pragma.m"
                hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__TypeDefn_24, &hlds__make_hlds__add_pragma__TypeStatus_25);
              }
#line 1157 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__TypeStatus_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1159 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 1159 "add_pragma.m"
                hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65;
#line 1159 "add_pragma.m"
              else
#line 1162 "add_pragma.m"
                {
#line 1162 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__TypeMsg_27;
#line 1162 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__TypeSpec_28;
#line 1162 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__V_82_82;

#line 1163 "add_pragma.m"
                  {
#line 1163 "add_pragma.m"
                    hlds__make_hlds__add_pragma__TypeMsg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeMsg_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1163 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeMsg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[186])));
#line 1163 "add_pragma.m"
                  }
#line 1165 "add_pragma.m"
                  {
#line 1165 "add_pragma.m"
                    hlds__make_hlds__add_pragma__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeMsg_27));
#line 1165 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1165 "add_pragma.m"
                  }
#line 1164 "add_pragma.m"
                  {
#line 1164 "add_pragma.m"
                    hlds__make_hlds__add_pragma__TypeSpec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1164 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeSpec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1164 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeSpec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1164 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeSpec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_82_82));
#line 1164 "add_pragma.m"
                  }
#line 1166 "add_pragma.m"
                  {
#line 1166 "add_pragma.m"
                    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeSpec_28));
#line 1166 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65));
#line 1166 "add_pragma.m"
                  }
#line 1162 "add_pragma.m"
                }
#line 1156 "add_pragma.m"
            }
#line 1168 "add_pragma.m"
          else
#line 1168 "add_pragma.m"
            hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65;
#line 1140 "add_pragma.m"
        }
#line 1139 "add_pragma.m"
        break;
#line 1139 "add_pragma.m"
    }
#line 1183 "add_pragma.m"
    {
#line 1183 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
#line 1183 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1));
#line 1183 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1183 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45));
#line 1183 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1183 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13));
#line 1183 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_85_85, 6) = ((MR_Box) ((MR_String) "creator"));
#line 1183 "add_pragma.m"
    }
#line 6259 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0;
#line 6261 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeCtorInfo_131_131 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6263 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeCtorInfo_132_132 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 6265 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeInfo_133_133 = (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_1[1];
#line 1182 "add_pragma.m"
    {
#line 1182 "add_pragma.m"
      mercury__list__map_foldl2_7_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_130_130, hlds__make_hlds__add_pragma__TypeCtorInfo_131_131, hlds__make_hlds__add_pragma__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__TypeInfo_133_133, hlds__make_hlds__add_pragma__V_85_85, hlds__make_hlds__add_pragma__Creators_14, &hlds__make_hlds__add_pragma__CreatorPredIds_29, ((MR_Box) ((MR_Integer) 1)), &hlds__make_hlds__add_pragma__conv4_V_30_30, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_84_84)), &hlds__make_hlds__add_pragma__conv3_STATE_VARIABLE_OISUSpecs_87_87);
    }
#line 1182 "add_pragma.m"
    hlds__make_hlds__add_pragma__V_30_30 = ((MR_Integer) hlds__make_hlds__add_pragma__conv4_V_30_30);
#line 1182 "add_pragma.m"
    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_87_87 = ((MR_Word) hlds__make_hlds__add_pragma__conv3_STATE_VARIABLE_OISUSpecs_87_87);
#line 1187 "add_pragma.m"
    {
#line 1187 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
#line 1187 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2));
#line 1187 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1187 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45));
#line 1187 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1187 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13));
#line 1187 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_89_89, 6) = ((MR_Box) ((MR_String) "mutator"));
#line 1187 "add_pragma.m"
    }
#line 1186 "add_pragma.m"
    {
#line 1186 "add_pragma.m"
      mercury__list__map_foldl2_7_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_130_130, hlds__make_hlds__add_pragma__TypeCtorInfo_131_131, hlds__make_hlds__add_pragma__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__TypeInfo_133_133, hlds__make_hlds__add_pragma__V_89_89, hlds__make_hlds__add_pragma__Mutators_15, &hlds__make_hlds__add_pragma__MutatorPredIds_31, ((MR_Box) ((MR_Integer) 1)), &hlds__make_hlds__add_pragma__conv9_V_32_32, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_87_87)), &hlds__make_hlds__add_pragma__conv8_STATE_VARIABLE_OISUSpecs_91_91);
    }
#line 1186 "add_pragma.m"
    hlds__make_hlds__add_pragma__V_32_32 = ((MR_Integer) hlds__make_hlds__add_pragma__conv9_V_32_32);
#line 1186 "add_pragma.m"
    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_91_91 = ((MR_Word) hlds__make_hlds__add_pragma__conv8_STATE_VARIABLE_OISUSpecs_91_91);
#line 1191 "add_pragma.m"
    {
#line 1191 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
#line 1191 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3));
#line 1191 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1191 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45));
#line 1191 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1191 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13));
#line 1191 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_93_93, 6) = ((MR_Box) ((MR_String) "destructor"));
#line 1191 "add_pragma.m"
    }
#line 1190 "add_pragma.m"
    {
#line 1190 "add_pragma.m"
      mercury__list__map_foldl2_7_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_130_130, hlds__make_hlds__add_pragma__TypeCtorInfo_131_131, hlds__make_hlds__add_pragma__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__TypeInfo_133_133, hlds__make_hlds__add_pragma__V_93_93, hlds__make_hlds__add_pragma__Destructors_16, &hlds__make_hlds__add_pragma__DestructorPredIds_33, ((MR_Box) ((MR_Integer) 1)), &hlds__make_hlds__add_pragma__conv14_V_34_34, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_91_91)), &hlds__make_hlds__add_pragma__conv13_STATE_VARIABLE_OISUSpecs_95_95);
    }
#line 1190 "add_pragma.m"
    hlds__make_hlds__add_pragma__V_34_34 = ((MR_Integer) hlds__make_hlds__add_pragma__conv14_V_34_34);
#line 1190 "add_pragma.m"
    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_95_95 = ((MR_Word) hlds__make_hlds__add_pragma__conv13_STATE_VARIABLE_OISUSpecs_95_95);
#line 1212 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1196 "add_pragma.m"
      {
#line 1196 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__OISUPreds_35;
#line 1196 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__OISUMap0_36;
#line 1202 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__OISUMap_37;

#line 1197 "add_pragma.m"
        {
#line 1197 "add_pragma.m"
          hlds__make_hlds__add_pragma__OISUPreds_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1197 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUPreds_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__CreatorPredIds_29));
#line 1197 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUPreds_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__MutatorPredIds_31));
#line 1197 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUPreds_35, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__DestructorPredIds_33));
#line 1197 "add_pragma.m"
        }
#line 1199 "add_pragma.m"
        {
#line 1199 "add_pragma.m"
          hlds__hlds_module__module_info_get_oisu_map_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_pragma__OISUMap0_36);
        }
#line 1200 "add_pragma.m"
        {
#line 1200 "add_pragma.m"
          hlds__make_hlds__add_pragma__succeeded = mercury__map__insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13)), ((MR_Box) (hlds__make_hlds__add_pragma__OISUPreds_35)), hlds__make_hlds__add_pragma__OISUMap0_36, &hlds__make_hlds__add_pragma__OISUMap_37);
        }
#line 1202 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 1201 "add_pragma.m"
          {
#line 1201 "add_pragma.m"
            {
#line 1201 "add_pragma.m"
              hlds__hlds_module__module_info_set_oisu_map_3_p_0(hlds__make_hlds__add_pragma__OISUMap_37, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46);
            }
#line 1201 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47;
#line 1201 "add_pragma.m"
          }
#line 1202 "add_pragma.m"
        else
#line 1203 "add_pragma.m"
          {
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__TypeName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
#line 1203 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__TypeArity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__DupPieces_40;
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__DupMsg_41;
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__DupSpec_42;
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_101_101;
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_104_104;
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_107_107;
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_108_108;
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_109_109;
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_116_116;
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_117_117;
#line 1203 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_121_121;

#line 1206 "add_pragma.m"
            {
#line 1206 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_38));
#line 1206 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_39));
#line 1206 "add_pragma.m"
            }
#line 1206 "add_pragma.m"
            {
#line 1206 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1206 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_109_109));
#line 1206 "add_pragma.m"
            }
#line 1206 "add_pragma.m"
            {
#line 1206 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_108_108));
#line 1206 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
#line 1206 "add_pragma.m"
            }
#line 1205 "add_pragma.m"
            {
#line 1205 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[189])));
#line 1205 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_104_104, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_107_107));
#line 1205 "add_pragma.m"
            }
#line 1204 "add_pragma.m"
            {
#line 1204 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_101_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[188])));
#line 1204 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_104_104));
#line 1204 "add_pragma.m"
            }
#line 1204 "add_pragma.m"
            {
#line 1204 "add_pragma.m"
              hlds__make_hlds__add_pragma__DupPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DupPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[187])));
#line 1204 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DupPieces_40, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_101_101));
#line 1204 "add_pragma.m"
            }
#line 1207 "add_pragma.m"
            {
#line 1207 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_117_117, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__DupPieces_40));
#line 1207 "add_pragma.m"
            }
#line 1207 "add_pragma.m"
            {
#line 1207 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_117_117));
#line 1207 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1207 "add_pragma.m"
            }
#line 1207 "add_pragma.m"
            {
#line 1207 "add_pragma.m"
              hlds__make_hlds__add_pragma__DupMsg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupMsg_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1207 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupMsg_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_116_116));
#line 1207 "add_pragma.m"
            }
#line 1209 "add_pragma.m"
            {
#line 1209 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1209 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__DupMsg_41));
#line 1209 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1209 "add_pragma.m"
            }
#line 1208 "add_pragma.m"
            {
#line 1208 "add_pragma.m"
              hlds__make_hlds__add_pragma__DupSpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1208 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupSpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1208 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupSpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1208 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupSpec_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_121_121));
#line 1208 "add_pragma.m"
            }
#line 1210 "add_pragma.m"
            {
#line 1210 "add_pragma.m"
              MR_Word base;
#line 1210 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48 = base;
#line 1210 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__DupSpec_42));
#line 1210 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47));
#line 1210 "add_pragma.m"
            }
#line 1203 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45;
#line 1203 "add_pragma.m"
          }
#line 1196 "add_pragma.m"
      }
#line 1212 "add_pragma.m"
    else
#line 1213 "add_pragma.m"
      {
#line 1214 "add_pragma.m"
        {
#line 1214 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_95_95, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47);
        }
#line 1213 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45;
#line 1213 "add_pragma.m"
      }
#line 1132 "add_pragma.m"
  }
#line 1128 "add_pragma.m"
}

#line 1041 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_reserve_tag_7_p_0(
#line 1041 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__TypeCtor_8,
#line 1041 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PragmaStatus_9,
#line 1041 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_10,
#line 1041 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48,
#line 1041 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49,
#line 1041 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_50,
#line 1041 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_51)
#line 1041 "add_pragma.m"
{
#line 1045 "add_pragma.m"
  {
#line 1045 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 1045 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_8, (MR_Integer) 0)));
#line 1045 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__TypeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_8, (MR_Integer) 1)));
#line 1045 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeTable0_15;
#line 1045 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybeError_20;
#line 1109 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeDefn0_16;

#line 1047 "add_pragma.m"
    {
#line 1047 "add_pragma.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48, &hlds__make_hlds__add_pragma__TypeTable0_15);
    }
#line 1048 "add_pragma.m"
    {
#line 1048 "add_pragma.m"
      hlds__make_hlds__add_pragma__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__TypeTable0_15, hlds__make_hlds__add_pragma__TypeCtor_8, &hlds__make_hlds__add_pragma__TypeDefn0_16);
    }
#line 1109 "add_pragma.m"
    if (hlds__make_hlds__add_pragma__succeeded)
#line 1049 "add_pragma.m"
      {
#line 1049 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeBody0_17;
#line 1049 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeStatus_18;

#line 1049 "add_pragma.m"
        {
#line 1049 "add_pragma.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__TypeDefn0_16, &hlds__make_hlds__add_pragma__TypeBody0_17);
        }
#line 1050 "add_pragma.m"
        {
#line 1050 "add_pragma.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__TypeDefn0_16, &hlds__make_hlds__add_pragma__TypeStatus_18);
        }
#line 1053 "add_pragma.m"
        {
#line 1053 "add_pragma.m"
          hlds__make_hlds__add_pragma__succeeded = parse_tree__status____Unify____import_status_0_0(hlds__make_hlds__add_pragma__TypeStatus_18, hlds__make_hlds__add_pragma__PragmaStatus_9);
        }
#line 1054 "add_pragma.m"
        if (!(hlds__make_hlds__add_pragma__succeeded))
#line 1055 "add_pragma.m"
          {
#line 1055 "add_pragma.m"
            hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__TypeStatus_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1055 "add_pragma.m"
            if (hlds__make_hlds__add_pragma__succeeded)
#line 1057 "add_pragma.m"
              {
#line 1057 "add_pragma.m"
                if ((hlds__make_hlds__add_pragma__PragmaStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1057 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = MR_TRUE;
#line 1057 "add_pragma.m"
                else
#line 1057 "add_pragma.m"
                if ((hlds__make_hlds__add_pragma__PragmaStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 1056 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = MR_TRUE;
#line 1057 "add_pragma.m"
                else
#line 1057 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = MR_FALSE;
#line 1057 "add_pragma.m"
              }
#line 1055 "add_pragma.m"
          }
#line 1052 "add_pragma.m"
        hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 1065 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 1063 "add_pragma.m"
          {
#line 1064 "add_pragma.m"
            hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_3[14]);
#line 1063 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48;
#line 1063 "add_pragma.m"
          }
#line 1065 "add_pragma.m"
        else
#line 1097 "add_pragma.m"
#line 1097 "add_pragma.m"
          switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__TypeBody0_17)) {
#line 1097 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1097 "add_pragma.m"
            case (MR_Integer) 0:
#line 1102 "add_pragma.m"
              {
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_69_69;
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_70_70;
#line 1102 "add_pragma.m"
                MR_Tuple hlds__make_hlds__add_pragma__V_77_77;
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ErrorPieces_136;

#line 1104 "add_pragma.m"
                {
#line 1104 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
#line 1104 "add_pragma.m"
                }
#line 1104 "add_pragma.m"
                {
#line 1104 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 1104 "add_pragma.m"
                }
#line 1104 "add_pragma.m"
                {
#line 1104 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_69_69));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[113])));
#line 1104 "add_pragma.m"
                }
#line 1103 "add_pragma.m"
                {
#line 1103 "add_pragma.m"
                  hlds__make_hlds__add_pragma__ErrorPieces_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[180])));
#line 1103 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1103 "add_pragma.m"
                }
#line 1106 "add_pragma.m"
                {
#line 1106 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_77_77 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1106 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1106 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_136));
#line 1106 "add_pragma.m"
                }
#line 1106 "add_pragma.m"
                {
#line 1106 "add_pragma.m"
                  hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1106 "add_pragma.m"
                }
#line 1102 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48;
#line 1102 "add_pragma.m"
              }
#line 1097 "add_pragma.m"
              break;
#line 1097 "add_pragma.m"
            case (MR_Integer) 1:
#line 1069 "add_pragma.m"
              {
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Body_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 0)));
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__MaybeUserEqComp_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 4)));
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__MaybeDirectArgCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 5)));
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ReservedTag0_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__IsForeign_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 7)));
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Globals_31;
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__CtorTags_32;
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ReservedAddr_33;
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__DuTypeKind_34;
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeBody_35;
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeDefn_36;
#line 1069 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__TypeTable_37;
#line 1067 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma___CtorTags0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 1)));
#line 1067 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma___CheaperTagTest_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 2)));
#line 1067 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma___DuTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 3)));
#line 1067 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma___ReservedAddr_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1071 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ReservedTag0_27 == (MR_Integer) 0);
#line 1071 "add_pragma.m"
                if (hlds__make_hlds__add_pragma__succeeded)
#line 1071 "add_pragma.m"
                  {
#line 1074 "add_pragma.m"
                    hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__TypeStatus_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1074 "add_pragma.m"
                    hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 1071 "add_pragma.m"
                  }
#line 1080 "add_pragma.m"
                if (hlds__make_hlds__add_pragma__succeeded)
#line 1078 "add_pragma.m"
                  {
#line 1079 "add_pragma.m"
                    hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_3[15]);
#line 1078 "add_pragma.m"
                  }
#line 1080 "add_pragma.m"
                else
#line 1081 "add_pragma.m"
                  hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1087 "add_pragma.m"
                {
#line 1087 "add_pragma.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48, &hlds__make_hlds__add_pragma__Globals_31);
                }
#line 1088 "add_pragma.m"
                {
#line 1088 "add_pragma.m"
                  hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_pragma__Body_21, hlds__make_hlds__add_pragma__MaybeUserEqComp_25, hlds__make_hlds__add_pragma__TypeCtor_8, (MR_Integer) 0, hlds__make_hlds__add_pragma__Globals_31, &hlds__make_hlds__add_pragma__CtorTags_32, &hlds__make_hlds__add_pragma__ReservedAddr_33, &hlds__make_hlds__add_pragma__DuTypeKind_34);
                }
#line 1090 "add_pragma.m"
                {
#line 1090 "add_pragma.m"
                  hlds__make_hlds__add_pragma__TypeBody_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Body_21));
#line 1090 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__CtorTags_32));
#line 1090 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1090 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__DuTypeKind_34));
#line 1090 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__MaybeUserEqComp_25));
#line 1090 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__MaybeDirectArgCtors_26));
#line 1090 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 6) = ((MR_Box) (((MR_Integer) 0 | ((hlds__make_hlds__add_pragma__ReservedAddr_33 << (MR_Integer) 1)))));
#line 1090 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__IsForeign_29));
#line 1090 "add_pragma.m"
                }
#line 1093 "add_pragma.m"
                {
#line 1093 "add_pragma.m"
                  hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_pragma__TypeBody_35, hlds__make_hlds__add_pragma__TypeDefn0_16, &hlds__make_hlds__add_pragma__TypeDefn_36);
                }
#line 1094 "add_pragma.m"
                {
#line 1094 "add_pragma.m"
                  hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_pragma__TypeCtor_8, hlds__make_hlds__add_pragma__TypeDefn_36, hlds__make_hlds__add_pragma__TypeTable0_15, &hlds__make_hlds__add_pragma__TypeTable_37);
                }
#line 1096 "add_pragma.m"
                {
#line 1096 "add_pragma.m"
                  hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_pragma__TypeTable_37, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49);
                }
#line 1069 "add_pragma.m"
              }
#line 1097 "add_pragma.m"
              break;
#line 1097 "add_pragma.m"
            case (MR_Integer) 2:
#line 1102 "add_pragma.m"
              {
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_69_69;
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_70_70;
#line 1102 "add_pragma.m"
                MR_Tuple hlds__make_hlds__add_pragma__V_77_77;
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ErrorPieces_136;

#line 1104 "add_pragma.m"
                {
#line 1104 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
#line 1104 "add_pragma.m"
                }
#line 1104 "add_pragma.m"
                {
#line 1104 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 1104 "add_pragma.m"
                }
#line 1104 "add_pragma.m"
                {
#line 1104 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_69_69));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[113])));
#line 1104 "add_pragma.m"
                }
#line 1103 "add_pragma.m"
                {
#line 1103 "add_pragma.m"
                  hlds__make_hlds__add_pragma__ErrorPieces_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[180])));
#line 1103 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1103 "add_pragma.m"
                }
#line 1106 "add_pragma.m"
                {
#line 1106 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_77_77 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1106 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1106 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_136));
#line 1106 "add_pragma.m"
                }
#line 1106 "add_pragma.m"
                {
#line 1106 "add_pragma.m"
                  hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1106 "add_pragma.m"
                }
#line 1102 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48;
#line 1102 "add_pragma.m"
              }
#line 1097 "add_pragma.m"
              break;
#line 1097 "add_pragma.m"
            case (MR_Integer) 3:
#line 1102 "add_pragma.m"
              {
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_68_68;
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_69_69;
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_70_70;
#line 1102 "add_pragma.m"
                MR_Tuple hlds__make_hlds__add_pragma__V_77_77;
#line 1102 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__ErrorPieces_136;

#line 1104 "add_pragma.m"
                {
#line 1104 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
#line 1104 "add_pragma.m"
                }
#line 1104 "add_pragma.m"
                {
#line 1104 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 1104 "add_pragma.m"
                }
#line 1104 "add_pragma.m"
                {
#line 1104 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_69_69));
#line 1104 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[113])));
#line 1104 "add_pragma.m"
                }
#line 1103 "add_pragma.m"
                {
#line 1103 "add_pragma.m"
                  hlds__make_hlds__add_pragma__ErrorPieces_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[180])));
#line 1103 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_68_68));
#line 1103 "add_pragma.m"
                }
#line 1106 "add_pragma.m"
                {
#line 1106 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_77_77 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1106 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1106 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_136));
#line 1106 "add_pragma.m"
                }
#line 1106 "add_pragma.m"
                {
#line 1106 "add_pragma.m"
                  hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_77_77));
#line 1106 "add_pragma.m"
                }
#line 1102 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48;
#line 1102 "add_pragma.m"
              }
#line 1097 "add_pragma.m"
              break;
#line 1097 "add_pragma.m"
          }
#line 1049 "add_pragma.m"
      }
#line 1109 "add_pragma.m"
    else
#line 1111 "add_pragma.m"
      {
#line 1111 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_96_96;
#line 1111 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_97_97;
#line 1111 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_98_98;
#line 1111 "add_pragma.m"
        MR_Tuple hlds__make_hlds__add_pragma__V_105_105;
#line 1111 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ErrorPieces_138;

#line 1111 "add_pragma.m"
        {
#line 1111 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
#line 1111 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_98_98, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
#line 1111 "add_pragma.m"
        }
#line 1111 "add_pragma.m"
        {
#line 1111 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1111 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_97_97, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_98_98));
#line 1111 "add_pragma.m"
        }
#line 1111 "add_pragma.m"
        {
#line 1111 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_97_97));
#line 1111 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
#line 1111 "add_pragma.m"
        }
#line 1110 "add_pragma.m"
        {
#line 1110 "add_pragma.m"
          hlds__make_hlds__add_pragma__ErrorPieces_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[182])));
#line 1110 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_138, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_96_96));
#line 1110 "add_pragma.m"
        }
#line 1112 "add_pragma.m"
        {
#line 1112 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_105_105 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1112 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_105_105, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_138));
#line 1112 "add_pragma.m"
        }
#line 1112 "add_pragma.m"
        {
#line 1112 "add_pragma.m"
          hlds__make_hlds__add_pragma__MaybeError_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_105_105));
#line 1112 "add_pragma.m"
        }
#line 1111 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_48;
#line 1111 "add_pragma.m"
      }
#line 1116 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__MaybeError_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1115 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_51 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_50;
#line 1116 "add_pragma.m"
    else
#line 1117 "add_pragma.m"
      {
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Severity_43;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__MaybeErrorPieces_44;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ContextPieces_45;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Msg_46;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Spec_47;
#line 1117 "add_pragma.m"
        MR_Tuple hlds__make_hlds__add_pragma__V_107_107 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_20, (MR_Integer) 0)));
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_110_110;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_113_113;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_116_116;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_117_117;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_118_118;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_125_125;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_126_126;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_127_127;
#line 1117 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_130_130;

#line 1117 "add_pragma.m"
        hlds__make_hlds__add_pragma__Severity_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_107_107, (MR_Integer) 0)));
#line 1117 "add_pragma.m"
        hlds__make_hlds__add_pragma__MaybeErrorPieces_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_107_107, (MR_Integer) 1)));
#line 1119 "add_pragma.m"
        {
#line 1119 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1119 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
#line 1119 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_118_118, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
#line 1119 "add_pragma.m"
        }
#line 1119 "add_pragma.m"
        {
#line 1119 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1119 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_118_118));
#line 1119 "add_pragma.m"
        }
#line 1119 "add_pragma.m"
        {
#line 1119 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_117_117));
#line 1119 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[120])));
#line 1119 "add_pragma.m"
        }
#line 1119 "add_pragma.m"
        {
#line 1119 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_113_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[184])));
#line 1119 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_113_113, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_116_116));
#line 1119 "add_pragma.m"
        }
#line 1118 "add_pragma.m"
        {
#line 1118 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_110_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[183])));
#line 1118 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_113_113));
#line 1118 "add_pragma.m"
        }
#line 1118 "add_pragma.m"
        {
#line 1118 "add_pragma.m"
          hlds__make_hlds__add_pragma__ContextPieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ContextPieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
#line 1118 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ContextPieces_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_110_110));
#line 1118 "add_pragma.m"
        }
#line 1121 "add_pragma.m"
        {
#line 1121 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_127_127 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__ContextPieces_45, hlds__make_hlds__add_pragma__MaybeErrorPieces_44);
        }
#line 1121 "add_pragma.m"
        {
#line 1121 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_127_127));
#line 1121 "add_pragma.m"
        }
#line 1121 "add_pragma.m"
        {
#line 1121 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_125_125, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_126_126));
#line 1121 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1121 "add_pragma.m"
        }
#line 1121 "add_pragma.m"
        {
#line 1121 "add_pragma.m"
          hlds__make_hlds__add_pragma__Msg_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 1121 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_125_125));
#line 1121 "add_pragma.m"
        }
#line 1122 "add_pragma.m"
        {
#line 1122 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_46));
#line 1122 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "add_pragma.m"
        }
#line 1122 "add_pragma.m"
        {
#line 1122 "add_pragma.m"
          hlds__make_hlds__add_pragma__Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Severity_43));
#line 1122 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1122 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_130_130));
#line 1122 "add_pragma.m"
        }
#line 1123 "add_pragma.m"
        {
#line 1123 "add_pragma.m"
          MR_Word base;
#line 1123 "add_pragma.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_51 = base;
#line 1123 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_47));
#line 1123 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_50));
#line 1123 "add_pragma.m"
        }
#line 1117 "add_pragma.m"
      }
#line 1045 "add_pragma.m"
  }
#line 1041 "add_pragma.m"
}

#line 1023 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(
#line 1023 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Vars0_5,
#line 1023 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Modes0_6,
#line 1023 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__VarSet_7,
#line 1023 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PragmaVars0_8)
#line 1023 "add_pragma.m"
{
#line 1035 "add_pragma.m"
  {
#line 1035 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Vars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1035 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Var_9;
#line 1035 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__VarsTail_10;
#line 1035 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Mode_11;
#line 1035 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ModesTail_12;

#line 1028 "add_pragma.m"
    if (hlds__make_hlds__add_pragma__succeeded)
#line 1028 "add_pragma.m"
      {
#line 1028 "add_pragma.m"
        hlds__make_hlds__add_pragma__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Vars0_5, (MR_Integer) 0)));
#line 1028 "add_pragma.m"
        hlds__make_hlds__add_pragma__VarsTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Vars0_5, (MR_Integer) 1)));
#line 1029 "add_pragma.m"
        hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Modes0_6)) == (MR_mktag((MR_Integer) 1)));
#line 1029 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 1029 "add_pragma.m"
          {
#line 1029 "add_pragma.m"
            hlds__make_hlds__add_pragma__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Modes0_6, (MR_Integer) 0)));
#line 1029 "add_pragma.m"
            hlds__make_hlds__add_pragma__ModesTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Modes0_6, (MR_Integer) 1)));
#line 1029 "add_pragma.m"
          }
#line 1028 "add_pragma.m"
      }
#line 1035 "add_pragma.m"
    if (hlds__make_hlds__add_pragma__succeeded)
#line 1031 "add_pragma.m"
      {
#line 1031 "add_pragma.m"
        MR_String hlds__make_hlds__add_pragma__Name_13;
#line 1031 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PragmaVar_14;
#line 1031 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PragmaVarsTail_15;

#line 1031 "add_pragma.m"
        {
#line 1031 "add_pragma.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_pragma__VarSet_7, hlds__make_hlds__add_pragma__Var_9, &hlds__make_hlds__add_pragma__Name_13);
        }
#line 1032 "add_pragma.m"
        {
#line 1032 "add_pragma.m"
          hlds__make_hlds__add_pragma__PragmaVar_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1032 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_9));
#line 1032 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_13));
#line 1032 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Mode_11));
#line 1032 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1032 "add_pragma.m"
        }
#line 1033 "add_pragma.m"
        {
#line 1033 "add_pragma.m"
          hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(hlds__make_hlds__add_pragma__VarsTail_10, hlds__make_hlds__add_pragma__ModesTail_12, hlds__make_hlds__add_pragma__VarSet_7, &hlds__make_hlds__add_pragma__PragmaVarsTail_15);
        }
#line 1034 "add_pragma.m"
        {
#line 1034 "add_pragma.m"
          MR_Word base;
#line 1034 "add_pragma.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "add_pragma.m"
          *hlds__make_hlds__add_pragma__PragmaVars0_8 = base;
#line 1034 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaVar_14));
#line 1034 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaVarsTail_15));
#line 1034 "add_pragma.m"
        }
#line 1031 "add_pragma.m"
      }
#line 1035 "add_pragma.m"
    else
#line 1036 "add_pragma.m"
      *hlds__make_hlds__add_pragma__PragmaVars0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1035 "add_pragma.m"
  }
#line 1023 "add_pragma.m"
}

#line 967 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_proc_13_p_0(
#line 967 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__ProcId_14,
#line 967 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__PrimaryProcId_15,
#line 967 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ProcTable_16,
#line 967 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__SymName_17,
#line 967 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredOrFunc_18,
#line 967 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_19,
#line 967 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ArgTypes_20,
#line 967 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_21,
#line 967 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_22,
#line 967 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_43,
#line 967 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44,
#line 967 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_45,
#line 967 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_46)
#line 967 "add_pragma.m"
{
#line 973 "add_pragma.m"
  {
#line 973 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_68_68;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ProcInfo_25;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ProgVarSet0_26;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Vars_27;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ProgVarSet_28;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Modes_29;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__InstVarSet_30;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PragmaVars_31;
#line 973 "add_pragma.m"
    MR_String hlds__make_hlds__add_pragma__C_ProcCode_33;
#line 973 "add_pragma.m"
    MR_String hlds__make_hlds__add_pragma__C_ExtraCode_34;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Attrs0_35;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Attrs1_36;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Attrs2_37;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Attrs3_38;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Attrs_39;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__FCInfo_41;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_54_54;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57_57;
#line 973 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60;
#line 974 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv0_ProcInfo_25;

#line 974 "add_pragma.m"
    {
#line 974 "add_pragma.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_pragma__ProcTable_16, hlds__make_hlds__add_pragma__ProcId_14, &hlds__make_hlds__add_pragma__conv0_ProcInfo_25);
    }
#line 974 "add_pragma.m"
    hlds__make_hlds__add_pragma__ProcInfo_25 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_ProcInfo_25);
#line 7476 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 975 "add_pragma.m"
    {
#line 975 "add_pragma.m"
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_68_68, &hlds__make_hlds__add_pragma__ProgVarSet0_26);
    }
#line 976 "add_pragma.m"
    {
#line 976 "add_pragma.m"
      mercury__varset__new_vars_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_68_68, hlds__make_hlds__add_pragma__Arity_19, &hlds__make_hlds__add_pragma__Vars_27, hlds__make_hlds__add_pragma__ProgVarSet0_26, &hlds__make_hlds__add_pragma__ProgVarSet_28);
    }
#line 977 "add_pragma.m"
    {
#line 977 "add_pragma.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__make_hlds__add_pragma__ProcInfo_25, &hlds__make_hlds__add_pragma__Modes_29);
    }
#line 978 "add_pragma.m"
    {
#line 978 "add_pragma.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(hlds__make_hlds__add_pragma__ProcInfo_25, &hlds__make_hlds__add_pragma__InstVarSet_30);
    }
#line 979 "add_pragma.m"
    {
#line 979 "add_pragma.m"
      hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(hlds__make_hlds__add_pragma__Vars_27, hlds__make_hlds__add_pragma__Modes_29, hlds__make_hlds__add_pragma__ProgVarSet_28, &hlds__make_hlds__add_pragma__PragmaVars_31);
    }
#line 986 "add_pragma.m"
    {
#line 986 "add_pragma.m"
      ll_backend__fact_table__fact_table_generate_c_code_11_p_0(hlds__make_hlds__add_pragma__SymName_17, hlds__make_hlds__add_pragma__PragmaVars_31, hlds__make_hlds__add_pragma__ProcId_14, hlds__make_hlds__add_pragma__PrimaryProcId_15, hlds__make_hlds__add_pragma__ProcInfo_25, hlds__make_hlds__add_pragma__ArgTypes_20, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__add_pragma__C_ProcCode_33, &hlds__make_hlds__add_pragma__C_ExtraCode_34);
    }
#line 993 "add_pragma.m"
    {
#line 993 "add_pragma.m"
      hlds__make_hlds__add_pragma__Attrs0_35 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
    }
#line 994 "add_pragma.m"
    {
#line 994 "add_pragma.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__Attrs0_35, &hlds__make_hlds__add_pragma__Attrs1_36);
    }
#line 995 "add_pragma.m"
    {
#line 995 "add_pragma.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__Attrs1_36, &hlds__make_hlds__add_pragma__Attrs2_37);
    }
#line 997 "add_pragma.m"
    {
#line 997 "add_pragma.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__Attrs2_37, &hlds__make_hlds__add_pragma__Attrs3_38);
    }
#line 998 "add_pragma.m"
    {
#line 998 "add_pragma.m"
      parse_tree__prog_data__add_extra_attribute_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__Attrs3_38, &hlds__make_hlds__add_pragma__Attrs_39);
    }
#line 1001 "add_pragma.m"
    {
#line 1001 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__C_ProcCode_33));
#line 1001 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1001 "add_pragma.m"
    }
#line 1000 "add_pragma.m"
    {
#line 1000 "add_pragma.m"
      hlds__make_hlds__add_pragma__FCInfo_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Attrs_39));
#line 1000 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_17));
#line 1000 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
#line 1000 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaVars_31));
#line 1000 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__ProgVarSet_28));
#line 1000 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__InstVarSet_30));
#line 1000 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__V_54_54));
#line 1000 "add_pragma.m"
    }
#line 1002 "add_pragma.m"
    {
#line 1002 "add_pragma.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__FCInfo_41, hlds__make_hlds__add_pragma__Status_21, hlds__make_hlds__add_pragma__Context_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57_57);
    }
#line 1004 "add_pragma.m"
    hlds__make_hlds__add_pragma__succeeded = (strcmp(hlds__make_hlds__add_pragma__C_ExtraCode_34, (MR_String) "") == 0);
#line 1006 "add_pragma.m"
    if (hlds__make_hlds__add_pragma__succeeded)
#line 1006 "add_pragma.m"
      hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56;
#line 1006 "add_pragma.m"
    else
#line 1008 "add_pragma.m"
      {
#line 1008 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__ForeignBodyCode_42;
#line 1008 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_59_59;

#line 1007 "add_pragma.m"
        {
#line 1007 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__C_ExtraCode_34));
#line 1007 "add_pragma.m"
        }
#line 1007 "add_pragma.m"
        {
#line 1007 "add_pragma.m"
          hlds__make_hlds__add_pragma__ForeignBodyCode_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_42, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1007 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_42, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_59_59));
#line 1007 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_22));
#line 1007 "add_pragma.m"
        }
#line 1009 "add_pragma.m"
        {
#line 1009 "add_pragma.m"
          hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_pragma__ForeignBodyCode_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60);
        }
#line 1008 "add_pragma.m"
      }
#line 1015 "add_pragma.m"
    {
#line 1015 "add_pragma.m"
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "fact_table", hlds__make_hlds__add_pragma__SymName_17, hlds__make_hlds__add_pragma__Arity_19, hlds__make_hlds__add_pragma__Status_21, hlds__make_hlds__add_pragma__Context_22, (MR_Integer) 7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_46);
#line 1015 "add_pragma.m"
      return;
    }
#line 973 "add_pragma.m"
  }
#line 967 "add_pragma.m"
}

#line 950 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_procedures_13_p_0(
#line 950 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 950 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__PrimaryProcId_2,
#line 950 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ProcTable_3,
#line 950 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__SymName_4,
#line 950 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredOrFunc_5,
#line 950 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_6,
#line 950 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ArgTypes_7,
#line 950 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_8,
#line 950 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_9,
#line 950 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10,
#line 950 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_11,
#line 950 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12,
#line 950 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_13)
#line 950 "add_pragma.m"
{
#line 956 "add_pragma.m"
  while (MR_TRUE)
#line 956 "add_pragma.m"
    {
#line 956 "add_pragma.m"
      /* tailcall optimized into a loop */
#line 956 "add_pragma.m"
      {
#line 956 "add_pragma.m"
        MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 956 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 956 "add_pragma.m"
          {
#line 956 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12;
#line 956 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10;
#line 956 "add_pragma.m"
          }
#line 956 "add_pragma.m"
        else
#line 959 "add_pragma.m"
          {
#line 959 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 959 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 959 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44_44;
#line 959 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_45_45;

#line 960 "add_pragma.m"
            {
#line 960 "add_pragma.m"
              hlds__make_hlds__add_pragma__add_fact_table_proc_13_p_0(hlds__make_hlds__add_pragma__ProcId_28, hlds__make_hlds__add_pragma__PrimaryProcId_2, hlds__make_hlds__add_pragma__ProcTable_3, hlds__make_hlds__add_pragma__SymName_4, hlds__make_hlds__add_pragma__PredOrFunc_5, hlds__make_hlds__add_pragma__Arity_6, hlds__make_hlds__add_pragma__ArgTypes_7, hlds__make_hlds__add_pragma__Status_8, hlds__make_hlds__add_pragma__Context_9, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44_44, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_45_45);
            }
#line 963 "add_pragma.m"
            /* direct tailcall eliminated */
#line 963 "add_pragma.m"
            {
#line 963 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_pragma__ProcIds_29;
#line 963 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44_44;
#line 963 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0__tmp_copy_12 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_45_45;

#line 963 "add_pragma.m"
              hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 963 "add_pragma.m"
              hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 963 "add_pragma.m"
              hlds__make_hlds__add_pragma__HeadVar__1_1 = hlds__make_hlds__add_pragma__HeadVar__1__tmp_copy_1;
#line 963 "add_pragma.m"
            }
#line 963 "add_pragma.m"
            continue;
#line 959 "add_pragma.m"
          }
#line 956 "add_pragma.m"
      }
#line 956 "add_pragma.m"
      break;
#line 956 "add_pragma.m"
    }
#line 950 "add_pragma.m"
}

#line 880 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(
#line 880 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__FTInfo_8,
#line 880 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_9,
#line 880 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_10,
#line 880 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38,
#line 880 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39,
#line 880 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40,
#line 880 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41)
#line 880 "add_pragma.m"
{
#line 884 "add_pragma.m"
  {
#line 884 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 884 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredArity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FTInfo_8, (MR_Integer) 0)));
#line 884 "add_pragma.m"
    MR_String hlds__make_hlds__add_pragma__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FTInfo_8, (MR_Integer) 1)));
#line 884 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Pred_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredArity_13, (MR_Integer) 0)));
#line 884 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredArity_13, (MR_Integer) 1)));
#line 884 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredicateTable_17;
#line 884 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

#line 887 "add_pragma.m"
    {
#line 887 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_pragma__PredicateTable_17);
    }
#line 888 "add_pragma.m"
    {
#line 888 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__Arity_16, &hlds__make_hlds__add_pragma__PredIds_18);
    }
#line 894 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 891 "add_pragma.m"
      {
#line 892 "add_pragma.m"
        {
#line 892 "add_pragma.m"
          hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__Arity_16, hlds__make_hlds__add_pragma__Context_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[98]), hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41);
        }
#line 891 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38;
#line 891 "add_pragma.m"
      }
#line 894 "add_pragma.m"
    else
#line 895 "add_pragma.m"
      {
#line 895 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__HeadPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));
#line 895 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TailPredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));

#line 933 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__TailPredIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "add_pragma.m"
          {
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredInfo0_22;
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredInfo_24;
#line 897 "add_pragma.m"
            MR_String hlds__make_hlds__add_pragma__C_HeaderCode_25;
#line 897 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__PrimaryProcId_26;
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcTable_27;
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ArgTypes_28;
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ProcIds_29;
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredOrFunc_30;
#line 897 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__NumArgs_31;
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ForeignDeclCode_32;
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_75_75;
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_78_78;
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_79_79;
#line 897 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_80_80;

#line 899 "add_pragma.m"
            {
#line 899 "add_pragma.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__HeadPredId_19, &hlds__make_hlds__add_pragma__PredInfo0_22);
            }
#line 908 "add_pragma.m"
            {
#line 908 "add_pragma.m"
              ll_backend__fact_table__fact_table_compile_facts_11_p_0(hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__Arity_16, hlds__make_hlds__add_pragma__FileName_14, hlds__make_hlds__add_pragma__PredInfo0_22, &hlds__make_hlds__add_pragma__PredInfo_24, hlds__make_hlds__add_pragma__Context_10, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_pragma__C_HeaderCode_25, &hlds__make_hlds__add_pragma__PrimaryProcId_26);
            }
#line 915 "add_pragma.m"
            {
#line 915 "add_pragma.m"
              hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_pragma__HeadPredId_19, hlds__make_hlds__add_pragma__PredInfo_24, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_75_75);
            }
#line 916 "add_pragma.m"
            {
#line 916 "add_pragma.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo_24, &hlds__make_hlds__add_pragma__ProcTable_27);
            }
#line 917 "add_pragma.m"
            {
#line 917 "add_pragma.m"
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pragma__PredInfo_24, &hlds__make_hlds__add_pragma__ArgTypes_28);
            }
#line 918 "add_pragma.m"
            {
#line 918 "add_pragma.m"
              hlds__make_hlds__add_pragma__ProcIds_29 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__make_hlds__add_pragma__PredInfo_24);
            }
#line 919 "add_pragma.m"
            {
#line 919 "add_pragma.m"
              hlds__make_hlds__add_pragma__PredOrFunc_30 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__PredInfo_24);
            }
#line 920 "add_pragma.m"
            {
#line 920 "add_pragma.m"
              parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__add_pragma__PredOrFunc_30, hlds__make_hlds__add_pragma__Arity_16, &hlds__make_hlds__add_pragma__NumArgs_31);
            }
#line 924 "add_pragma.m"
            {
#line 924 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 924 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__C_HeaderCode_25));
#line 924 "add_pragma.m"
            }
#line 923 "add_pragma.m"
            {
#line 923 "add_pragma.m"
              hlds__make_hlds__add_pragma__ForeignDeclCode_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 923 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 0) = ((MR_Box) ((MR_Integer) 0));
#line 923 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 923 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_78_78));
#line 923 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 923 "add_pragma.m"
            }
#line 925 "add_pragma.m"
            {
#line 925 "add_pragma.m"
              hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_pragma__ForeignDeclCode_32, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_75_75, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_79_79);
            }
#line 927 "add_pragma.m"
            {
#line 927 "add_pragma.m"
              hlds__hlds_module__module_add_fact_table_file_3_p_0(hlds__make_hlds__add_pragma__FileName_14, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_79_79, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_80_80);
            }
#line 930 "add_pragma.m"
            {
#line 930 "add_pragma.m"
              hlds__make_hlds__add_pragma__add_fact_table_procedures_13_p_0(hlds__make_hlds__add_pragma__ProcIds_29, hlds__make_hlds__add_pragma__PrimaryProcId_26, hlds__make_hlds__add_pragma__ProcTable_27, hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__PredOrFunc_30, hlds__make_hlds__add_pragma__NumArgs_31, hlds__make_hlds__add_pragma__ArgTypes_28, hlds__make_hlds__add_pragma__Status_9, hlds__make_hlds__add_pragma__Context_10, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_80_80, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41);
#line 930 "add_pragma.m"
              return;
            }
#line 897 "add_pragma.m"
          }
#line 933 "add_pragma.m"
        else
#line 934 "add_pragma.m"
          {
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Pieces_35;
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_36;
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Spec_37;
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_45_45;
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_51_51;
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_52_52;
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_53_53;
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_65_65;
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_66_66;
#line 934 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_70_70;

#line 936 "add_pragma.m"
            {
#line 936 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 936 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pred_15));
#line 936 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_16));
#line 936 "add_pragma.m"
            }
#line 936 "add_pragma.m"
            {
#line 936 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 936 "add_pragma.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_53_53));
#line 936 "add_pragma.m"
            }
#line 936 "add_pragma.m"
            {
#line 936 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_52_52));
#line 936 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[103])));
#line 936 "add_pragma.m"
            }
#line 935 "add_pragma.m"
            {
#line 935 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[178])));
#line 935 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_51_51));
#line 935 "add_pragma.m"
            }
#line 935 "add_pragma.m"
            {
#line 935 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
#line 935 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 935 "add_pragma.m"
            }
#line 935 "add_pragma.m"
            {
#line 935 "add_pragma.m"
              hlds__make_hlds__add_pragma__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
#line 935 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_45_45));
#line 935 "add_pragma.m"
            }
#line 938 "add_pragma.m"
            {
#line 938 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 938 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_35));
#line 938 "add_pragma.m"
            }
#line 938 "add_pragma.m"
            {
#line 938 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_66_66));
#line 938 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "add_pragma.m"
            }
#line 938 "add_pragma.m"
            {
#line 938 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 938 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 938 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_65_65));
#line 938 "add_pragma.m"
            }
#line 939 "add_pragma.m"
            {
#line 939 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_36));
#line 939 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "add_pragma.m"
            }
#line 939 "add_pragma.m"
            {
#line 939 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 939 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_37, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 939 "add_pragma.m"
            }
#line 940 "add_pragma.m"
            {
#line 940 "add_pragma.m"
              MR_Word base;
#line 940 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41 = base;
#line 940 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_37));
#line 940 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40));
#line 940 "add_pragma.m"
            }
#line 934 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38;
#line 934 "add_pragma.m"
          }
#line 895 "add_pragma.m"
      }
#line 884 "add_pragma.m"
  }
#line 880 "add_pragma.m"
}

#line 644 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_5_p_0(
#line 644 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Globals_6,
#line 644 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_7,
#line 644 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Feature_8,
#line 644 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23,
#line 644 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24)
#line 644 "add_pragma.m"
{
#line 650 "add_pragma.m"
  {
#line 650 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 650 "add_pragma.m"
#line 650 "add_pragma.m"
    switch (hlds__make_hlds__add_pragma__Feature_8) {
#line 650 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 650 "add_pragma.m"
      case (MR_Integer) 0:
#line 650 "add_pragma.m"
        {
#line 650 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__IsConcurrencySupported_10;

#line 651 "add_pragma.m"
          {
#line 651 "add_pragma.m"
            libs__globals__current_grade_supports_concurrency_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__IsConcurrencySupported_10);
          }
#line 659 "add_pragma.m"
#line 659 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__IsConcurrencySupported_10) {
#line 659 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 659 "add_pragma.m"
            case (MR_Integer) 0:
#line 653 "add_pragma.m"
              {
#line 653 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_12;
#line 653 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_13;
#line 653 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_211_211;

#line 656 "add_pragma.m"
                {
#line 656 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 656 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 656 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[162])));
#line 656 "add_pragma.m"
                }
#line 657 "add_pragma.m"
                {
#line 657 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_211_211, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_12));
#line 657 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "add_pragma.m"
                }
#line 657 "add_pragma.m"
                {
#line 657 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 657 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 657 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_211_211));
#line 657 "add_pragma.m"
                }
#line 658 "add_pragma.m"
                {
#line 658 "add_pragma.m"
                  MR_Word base;
#line 658 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 658 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_13));
#line 658 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 658 "add_pragma.m"
                }
#line 653 "add_pragma.m"
              }
#line 659 "add_pragma.m"
              break;
#line 659 "add_pragma.m"
            case (MR_Integer) 1:
#line 660 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 659 "add_pragma.m"
              break;
#line 659 "add_pragma.m"
          }
#line 650 "add_pragma.m"
        }
#line 650 "add_pragma.m"
        break;
#line 650 "add_pragma.m"
      case (MR_Integer) 7:
#line 760 "add_pragma.m"
        {
#line 760 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__GC_Method_22;

#line 761 "add_pragma.m"
          {
#line 761 "add_pragma.m"
            libs__globals__get_gc_method_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__GC_Method_22);
          }
#line 772 "add_pragma.m"
#line 772 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__GC_Method_22) {
#line 772 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 772 "add_pragma.m"
            case (MR_Integer) 5:
#line 772 "add_pragma.m"
            case (MR_Integer) 1:
#line 775 "add_pragma.m"
              {
#line 775 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_38_38;
#line 775 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_276;
#line 775 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_277;

#line 778 "add_pragma.m"
                {
#line 778 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_276, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 778 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[163])));
#line 778 "add_pragma.m"
                }
#line 779 "add_pragma.m"
                {
#line 779 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_276));
#line 779 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "add_pragma.m"
                }
#line 779 "add_pragma.m"
                {
#line 779 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_277 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 779 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_277, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_277, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 779 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_277, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_38_38));
#line 779 "add_pragma.m"
                }
#line 780 "add_pragma.m"
                {
#line 780 "add_pragma.m"
                  MR_Word base;
#line 780 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 780 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_277));
#line 780 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 780 "add_pragma.m"
                }
#line 775 "add_pragma.m"
              }
#line 772 "add_pragma.m"
              break;
#line 772 "add_pragma.m"
            case (MR_Integer) 0:
#line 767 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 772 "add_pragma.m"
              break;
#line 772 "add_pragma.m"
            case (MR_Integer) 2:
#line 768 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 772 "add_pragma.m"
              break;
#line 772 "add_pragma.m"
            case (MR_Integer) 3:
#line 769 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 772 "add_pragma.m"
              break;
#line 772 "add_pragma.m"
            case (MR_Integer) 4:
#line 770 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 772 "add_pragma.m"
              break;
#line 772 "add_pragma.m"
          }
#line 760 "add_pragma.m"
        }
#line 650 "add_pragma.m"
        break;
#line 650 "add_pragma.m"
      case (MR_Integer) 2:
#line 681 "add_pragma.m"
        {
#line 681 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__SinglePrecFloat_234;

#line 682 "add_pragma.m"
          {
#line 682 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 225, &hlds__make_hlds__add_pragma__SinglePrecFloat_234);
          }
#line 695 "add_pragma.m"
#line 695 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__SinglePrecFloat_234) {
#line 695 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 695 "add_pragma.m"
            case (MR_Integer) 0:
#line 696 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 695 "add_pragma.m"
              break;
#line 695 "add_pragma.m"
            case (MR_Integer) 1:
#line 685 "add_pragma.m"
              {
#line 685 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_161_161;
#line 685 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_224;
#line 685 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_225;

#line 691 "add_pragma.m"
                {
#line 691 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 691 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_224, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 691 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_224, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[166])));
#line 691 "add_pragma.m"
                }
#line 693 "add_pragma.m"
                {
#line 693 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_224));
#line 693 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "add_pragma.m"
                }
#line 693 "add_pragma.m"
                {
#line 693 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 693 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 693 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_225, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_161_161));
#line 693 "add_pragma.m"
                }
#line 694 "add_pragma.m"
                {
#line 694 "add_pragma.m"
                  MR_Word base;
#line 694 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 694 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_225));
#line 694 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 694 "add_pragma.m"
                }
#line 685 "add_pragma.m"
              }
#line 695 "add_pragma.m"
              break;
#line 695 "add_pragma.m"
          }
#line 681 "add_pragma.m"
        }
#line 650 "add_pragma.m"
        break;
#line 650 "add_pragma.m"
      case (MR_Integer) 3:
#line 699 "add_pragma.m"
        {
#line 699 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__IsTablingSupported_16;

#line 700 "add_pragma.m"
          {
#line 700 "add_pragma.m"
            libs__globals__current_grade_supports_tabling_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__IsTablingSupported_16);
          }
#line 708 "add_pragma.m"
#line 708 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__IsTablingSupported_16) {
#line 708 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 708 "add_pragma.m"
            case (MR_Integer) 0:
#line 702 "add_pragma.m"
              {
#line 702 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_127_127;
#line 702 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_237;
#line 702 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_238;

#line 705 "add_pragma.m"
                {
#line 705 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_237 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 705 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_237, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 705 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_237, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[167])));
#line 705 "add_pragma.m"
                }
#line 706 "add_pragma.m"
                {
#line 706 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_237));
#line 706 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "add_pragma.m"
                }
#line 706 "add_pragma.m"
                {
#line 706 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_238 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 706 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 706 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_127_127));
#line 706 "add_pragma.m"
                }
#line 707 "add_pragma.m"
                {
#line 707 "add_pragma.m"
                  MR_Word base;
#line 707 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 707 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_238));
#line 707 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 707 "add_pragma.m"
                }
#line 702 "add_pragma.m"
              }
#line 708 "add_pragma.m"
              break;
#line 708 "add_pragma.m"
            case (MR_Integer) 1:
#line 709 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 708 "add_pragma.m"
              break;
#line 708 "add_pragma.m"
          }
#line 699 "add_pragma.m"
        }
#line 650 "add_pragma.m"
        break;
#line 650 "add_pragma.m"
      case (MR_Integer) 4:
#line 712 "add_pragma.m"
        {
#line 712 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__IsParConjSupported_17;

#line 713 "add_pragma.m"
          {
#line 713 "add_pragma.m"
            libs__globals__current_grade_supports_par_conj_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__IsParConjSupported_17);
          }
#line 721 "add_pragma.m"
#line 721 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__IsParConjSupported_17) {
#line 721 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 721 "add_pragma.m"
            case (MR_Integer) 0:
#line 715 "add_pragma.m"
              {
#line 715 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_111_111;
#line 715 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_246;
#line 715 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_247;

#line 718 "add_pragma.m"
                {
#line 718 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_246 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 718 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_246, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 718 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[168])));
#line 718 "add_pragma.m"
                }
#line 719 "add_pragma.m"
                {
#line 719 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_246));
#line 719 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 719 "add_pragma.m"
                }
#line 719 "add_pragma.m"
                {
#line 719 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_247 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 719 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 719 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 719 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_111_111));
#line 719 "add_pragma.m"
                }
#line 720 "add_pragma.m"
                {
#line 720 "add_pragma.m"
                  MR_Word base;
#line 720 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 720 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_247));
#line 720 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 720 "add_pragma.m"
                }
#line 715 "add_pragma.m"
              }
#line 721 "add_pragma.m"
              break;
#line 721 "add_pragma.m"
            case (MR_Integer) 1:
#line 722 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 721 "add_pragma.m"
              break;
#line 721 "add_pragma.m"
          }
#line 712 "add_pragma.m"
        }
#line 650 "add_pragma.m"
        break;
#line 650 "add_pragma.m"
      case (MR_Integer) 1:
#line 663 "add_pragma.m"
        {
#line 663 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__SinglePrecFloat_14;

#line 664 "add_pragma.m"
          {
#line 664 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 225, &hlds__make_hlds__add_pragma__SinglePrecFloat_14);
          }
#line 677 "add_pragma.m"
#line 677 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__SinglePrecFloat_14) {
#line 677 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 677 "add_pragma.m"
            case (MR_Integer) 0:
#line 667 "add_pragma.m"
              {
#line 667 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_195_195;
#line 667 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_215;
#line 667 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_216;

#line 673 "add_pragma.m"
                {
#line 673 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 673 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_215, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 673 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[171])));
#line 673 "add_pragma.m"
                }
#line 675 "add_pragma.m"
                {
#line 675 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_195_195, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_215));
#line 675 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_195_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "add_pragma.m"
                }
#line 675 "add_pragma.m"
                {
#line 675 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 675 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 675 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_216, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_195_195));
#line 675 "add_pragma.m"
                }
#line 676 "add_pragma.m"
                {
#line 676 "add_pragma.m"
                  MR_Word base;
#line 676 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 676 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_216));
#line 676 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 676 "add_pragma.m"
                }
#line 667 "add_pragma.m"
              }
#line 677 "add_pragma.m"
              break;
#line 677 "add_pragma.m"
            case (MR_Integer) 1:
#line 678 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 677 "add_pragma.m"
              break;
#line 677 "add_pragma.m"
          }
#line 663 "add_pragma.m"
        }
#line 650 "add_pragma.m"
        break;
#line 650 "add_pragma.m"
      case (MR_Integer) 6:
#line 742 "add_pragma.m"
        {
#line 742 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__ReorderConj_19;
#line 742 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__ReorderDisj_20;
#line 742 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__FullyStrict_21;

#line 743 "add_pragma.m"
          {
#line 743 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 164, &hlds__make_hlds__add_pragma__ReorderConj_19);
          }
#line 744 "add_pragma.m"
          {
#line 744 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 165, &hlds__make_hlds__add_pragma__ReorderDisj_20);
          }
#line 745 "add_pragma.m"
          {
#line 745 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 166, &hlds__make_hlds__add_pragma__FullyStrict_21);
          }
#line 747 "add_pragma.m"
          hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ReorderConj_19 == (MR_Integer) 0);
#line 747 "add_pragma.m"
          if (hlds__make_hlds__add_pragma__succeeded)
#line 747 "add_pragma.m"
            {
#line 748 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ReorderDisj_20 == (MR_Integer) 0);
#line 747 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 749 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__FullyStrict_21 == (MR_Integer) 1);
#line 747 "add_pragma.m"
            }
#line 752 "add_pragma.m"
          if (hlds__make_hlds__add_pragma__succeeded)
#line 752 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 752 "add_pragma.m"
          else
#line 754 "add_pragma.m"
            {
#line 754 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_57_57;
#line 754 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Msg_267;
#line 754 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Spec_268;

#line 755 "add_pragma.m"
              {
#line 755 "add_pragma.m"
                hlds__make_hlds__add_pragma__Msg_267 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 755 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_267, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 755 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_267, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[172])));
#line 755 "add_pragma.m"
              }
#line 756 "add_pragma.m"
              {
#line 756 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_267));
#line 756 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 756 "add_pragma.m"
              }
#line 756 "add_pragma.m"
              {
#line 756 "add_pragma.m"
                hlds__make_hlds__add_pragma__Spec_268 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 756 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_268, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 756 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_268, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 756 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_268, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_57_57));
#line 756 "add_pragma.m"
              }
#line 757 "add_pragma.m"
              {
#line 757 "add_pragma.m"
                MR_Word base;
#line 757 "add_pragma.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 757 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_268));
#line 757 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 757 "add_pragma.m"
              }
#line 754 "add_pragma.m"
            }
#line 742 "add_pragma.m"
        }
#line 650 "add_pragma.m"
        break;
#line 650 "add_pragma.m"
      case (MR_Integer) 5:
#line 725 "add_pragma.m"
        {
#line 725 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__UseTrail_18;

#line 726 "add_pragma.m"
          {
#line 726 "add_pragma.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 219, &hlds__make_hlds__add_pragma__UseTrail_18);
          }
#line 738 "add_pragma.m"
#line 738 "add_pragma.m"
          switch (hlds__make_hlds__add_pragma__UseTrail_18) {
#line 738 "add_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 738 "add_pragma.m"
            case (MR_Integer) 0:
#line 728 "add_pragma.m"
              {
#line 728 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__V_95_95;
#line 728 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Msg_255;
#line 728 "add_pragma.m"
                MR_Word hlds__make_hlds__add_pragma__Spec_256;

#line 734 "add_pragma.m"
                {
#line 734 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Msg_255 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 734 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_255, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
#line 734 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_255, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
#line 734 "add_pragma.m"
                }
#line 736 "add_pragma.m"
                {
#line 736 "add_pragma.m"
                  hlds__make_hlds__add_pragma__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_255));
#line 736 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "add_pragma.m"
                }
#line 736 "add_pragma.m"
                {
#line 736 "add_pragma.m"
                  hlds__make_hlds__add_pragma__Spec_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 736 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 736 "add_pragma.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_95_95));
#line 736 "add_pragma.m"
                }
#line 737 "add_pragma.m"
                {
#line 737 "add_pragma.m"
                  MR_Word base;
#line 737 "add_pragma.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
#line 737 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_256));
#line 737 "add_pragma.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
#line 737 "add_pragma.m"
                }
#line 728 "add_pragma.m"
              }
#line 738 "add_pragma.m"
              break;
#line 738 "add_pragma.m"
            case (MR_Integer) 1:
#line 739 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
#line 738 "add_pragma.m"
              break;
#line 738 "add_pragma.m"
          }
#line 725 "add_pragma.m"
        }
#line 650 "add_pragma.m"
        break;
#line 650 "add_pragma.m"
    }
#line 650 "add_pragma.m"
  }
#line 644 "add_pragma.m"
}

#line 641 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1(
#line 641 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 641 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 641 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 641 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3)
#line 641 "add_pragma.m"
{
#line 641 "add_pragma.m"
  {
#line 641 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 641 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_24;

#line 641 "add_pragma.m"
    {
#line 641 "add_pragma.m"
      hlds__make_hlds__add_pragma__check_required_feature_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2), &hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_24);
    }
#line 641 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_24));
#line 641 "add_pragma.m"
  }
#line 641 "add_pragma.m"
}

#line 626 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0(
#line 626 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__FeatureSet_8,
#line 626 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ImportStatus_9,
#line 626 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_10,
#line 626 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_15,
#line 626 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_16,
#line 626 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_17,
#line 626 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_18)
#line 626 "add_pragma.m"
{
#line 631 "add_pragma.m"
  {
#line 631 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 631 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Globals_13;
#line 631 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__IsImported_14;

#line 632 "add_pragma.m"
    {
#line 632 "add_pragma.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_15, &hlds__make_hlds__add_pragma__Globals_13);
    }
#line 633 "add_pragma.m"
    {
#line 633 "add_pragma.m"
      hlds__make_hlds__add_pragma__IsImported_14 = parse_tree__status__status_is_imported_1_f_0(hlds__make_hlds__add_pragma__ImportStatus_9);
    }
#line 639 "add_pragma.m"
#line 639 "add_pragma.m"
    switch (hlds__make_hlds__add_pragma__IsImported_14) {
#line 639 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 639 "add_pragma.m"
      case (MR_Integer) 0:
#line 640 "add_pragma.m"
        {
#line 640 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_19_19;
#line 641 "add_pragma.m"
          MR_Box hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_Specs_18;

#line 641 "add_pragma.m"
          {
#line 641 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 641 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_19_19, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_6[0]));
#line 641 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1));
#line 641 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 641 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_19_19, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__Globals_13));
#line 641 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_19_19, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
#line 641 "add_pragma.m"
          }
#line 641 "add_pragma.m"
          {
#line 641 "add_pragma.m"
            mercury__set__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_required_feature_0, (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_1[1], hlds__make_hlds__add_pragma__V_19_19, hlds__make_hlds__add_pragma__FeatureSet_8, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_17)), &hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_Specs_18);
          }
#line 641 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_18 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_Specs_18);
#line 640 "add_pragma.m"
        }
#line 639 "add_pragma.m"
        break;
#line 639 "add_pragma.m"
      case (MR_Integer) 1:
#line 637 "add_pragma.m"
        {
#line 638 "add_pragma.m"
          {
#line 638 "add_pragma.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma", (MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature_set\'/7", (MR_String) "imported require_feature_set pragma");
#line 638 "add_pragma.m"
            return;
          }
#line 637 "add_pragma.m"
        }
#line 639 "add_pragma.m"
        break;
#line 639 "add_pragma.m"
    }
#line 631 "add_pragma.m"
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_16 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_15;
#line 631 "add_pragma.m"
  }
#line 626 "add_pragma.m"
}

#line 613 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__pragma_conflict_error_6_p_0(
#line 613 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_7,
#line 613 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_8,
#line 613 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_9,
#line 613 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_10,
#line 613 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15,
#line 613 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16)
#line 613 "add_pragma.m"
{
#line 616 "add_pragma.m"
  {
#line 616 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Pieces_12;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Msg_13;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Spec_14;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_19_19;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_20_20;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_21_21;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_24_24;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_25_25;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_26_26;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_33_33;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_34_34;
#line 616 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_38_38;

#line 617 "add_pragma.m"
    {
#line 617 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 617 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_10));
#line 617 "add_pragma.m"
    }
#line 619 "add_pragma.m"
    {
#line 619 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_7));
#line 619 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_8));
#line 619 "add_pragma.m"
    }
#line 619 "add_pragma.m"
    {
#line 619 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 619 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_26_26));
#line 619 "add_pragma.m"
    }
#line 619 "add_pragma.m"
    {
#line 619 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_25_25));
#line 619 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
#line 619 "add_pragma.m"
    }
#line 618 "add_pragma.m"
    {
#line 618 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[158])));
#line 618 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_24_24));
#line 618 "add_pragma.m"
    }
#line 617 "add_pragma.m"
    {
#line 617 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_20_20));
#line 617 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_21_21));
#line 617 "add_pragma.m"
    }
#line 617 "add_pragma.m"
    {
#line 617 "add_pragma.m"
      hlds__make_hlds__add_pragma__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
#line 617 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_19_19));
#line 617 "add_pragma.m"
    }
#line 620 "add_pragma.m"
    {
#line 620 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_12));
#line 620 "add_pragma.m"
    }
#line 620 "add_pragma.m"
    {
#line 620 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_34_34));
#line 620 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_pragma.m"
    }
#line 620 "add_pragma.m"
    {
#line 620 "add_pragma.m"
      hlds__make_hlds__add_pragma__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_9));
#line 620 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_33_33));
#line 620 "add_pragma.m"
    }
#line 621 "add_pragma.m"
    {
#line 621 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_13));
#line 621 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "add_pragma.m"
    }
#line 621 "add_pragma.m"
    {
#line 621 "add_pragma.m"
      hlds__make_hlds__add_pragma__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 621 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_38_38));
#line 621 "add_pragma.m"
    }
#line 622 "add_pragma.m"
    {
#line 622 "add_pragma.m"
      MR_Word base;
#line 622 "add_pragma.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16 = base;
#line 622 "add_pragma.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_14));
#line 622 "add_pragma.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15));
#line 622 "add_pragma.m"
    }
#line 616 "add_pragma.m"
  }
#line 613 "add_pragma.m"
}

#line 601 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__pragma_status_error_6_p_0(
#line 601 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_7,
#line 601 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_8,
#line 601 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_9,
#line 601 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_10,
#line 601 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15,
#line 601 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16)
#line 601 "add_pragma.m"
{
#line 604 "add_pragma.m"
  {
#line 604 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Pieces_12;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Msg_13;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Spec_14;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_19_19;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_20_20;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_21_21;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_24_24;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_25_25;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_26_26;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_33_33;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_34_34;
#line 604 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_38_38;

#line 605 "add_pragma.m"
    {
#line 605 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 605 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_10));
#line 605 "add_pragma.m"
    }
#line 607 "add_pragma.m"
    {
#line 607 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 607 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_7));
#line 607 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_8));
#line 607 "add_pragma.m"
    }
#line 607 "add_pragma.m"
    {
#line 607 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 607 "add_pragma.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_26_26));
#line 607 "add_pragma.m"
    }
#line 607 "add_pragma.m"
    {
#line 607 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_25_25));
#line 607 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[49])));
#line 607 "add_pragma.m"
    }
#line 606 "add_pragma.m"
    {
#line 606 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
#line 606 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_24_24));
#line 606 "add_pragma.m"
    }
#line 605 "add_pragma.m"
    {
#line 605 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_20_20));
#line 605 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_21_21));
#line 605 "add_pragma.m"
    }
#line 605 "add_pragma.m"
    {
#line 605 "add_pragma.m"
      hlds__make_hlds__add_pragma__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
#line 605 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_19_19));
#line 605 "add_pragma.m"
    }
#line 609 "add_pragma.m"
    {
#line 609 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 609 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_12));
#line 609 "add_pragma.m"
    }
#line 609 "add_pragma.m"
    {
#line 609 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_34_34));
#line 609 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "add_pragma.m"
    }
#line 609 "add_pragma.m"
    {
#line 609 "add_pragma.m"
      hlds__make_hlds__add_pragma__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 609 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_9));
#line 609 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_33_33));
#line 609 "add_pragma.m"
    }
#line 610 "add_pragma.m"
    {
#line 610 "add_pragma.m"
      hlds__make_hlds__add_pragma__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_13));
#line 610 "add_pragma.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "add_pragma.m"
    }
#line 610 "add_pragma.m"
    {
#line 610 "add_pragma.m"
      hlds__make_hlds__add_pragma__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 610 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 610 "add_pragma.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_38_38));
#line 610 "add_pragma.m"
    }
#line 611 "add_pragma.m"
    {
#line 611 "add_pragma.m"
      MR_Word base;
#line 611 "add_pragma.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "add_pragma.m"
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16 = base;
#line 611 "add_pragma.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_14));
#line 611 "add_pragma.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15));
#line 611 "add_pragma.m"
    }
#line 604 "add_pragma.m"
  }
#line 601 "add_pragma.m"
}

#line 586 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__get_matching_pred_ids_4_p_0(
#line 586 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Module0_5,
#line 586 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_6,
#line 586 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_7,
#line 586 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PredIds_8)
#line 586 "add_pragma.m"
{
#line 589 "add_pragma.m"
  {
#line 589 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 589 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredTable0_9;

#line 590 "add_pragma.m"
    {
#line 590 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__Module0_5, &hlds__make_hlds__add_pragma__PredTable0_9);
    }
#line 595 "add_pragma.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Name_6)) == (MR_mktag((MR_Integer) 1))))
#line 596 "add_pragma.m"
      {
#line 597 "add_pragma.m"
        {
#line 597 "add_pragma.m"
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredTable0_9, (MR_Integer) 0, hlds__make_hlds__add_pragma__Name_6, hlds__make_hlds__add_pragma__Arity_7, hlds__make_hlds__add_pragma__PredIds_8);
#line 597 "add_pragma.m"
          return;
        }
#line 596 "add_pragma.m"
      }
#line 595 "add_pragma.m"
    else
#line 593 "add_pragma.m"
      {
#line 594 "add_pragma.m"
        {
#line 594 "add_pragma.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma", (MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/4", (MR_String) "unqualified name");
#line 594 "add_pragma.m"
          return;
        }
#line 593 "add_pragma.m"
      }
#line 589 "add_pragma.m"
  }
#line 586 "add_pragma.m"
}

#line 579 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_marker_pred_info_3_p_0(
#line 579 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Marker_4,
#line 579 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_8,
#line 579 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_9)
#line 579 "add_pragma.m"
{
#line 581 "add_pragma.m"
  {
#line 581 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 581 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Markers0_6;
#line 581 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Markers_7;

#line 582 "add_pragma.m"
    {
#line 582 "add_pragma.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_8, &hlds__make_hlds__add_pragma__Markers0_6);
    }
#line 583 "add_pragma.m"
    {
#line 583 "add_pragma.m"
      hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pragma__Marker_4, hlds__make_hlds__add_pragma__Markers0_6, &hlds__make_hlds__add_pragma__Markers_7);
    }
#line 584 "add_pragma.m"
    {
#line 584 "add_pragma.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pragma__Markers_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_8, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_9);
#line 584 "add_pragma.m"
      return;
    }
#line 581 "add_pragma.m"
  }
#line 579 "add_pragma.m"
}

#line 556 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__UpdatePredInfo_2,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_3,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_4,
#line 556 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5,
#line 556 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6,
#line 556 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__7_7)
#line 556 "add_pragma.m"
{
#line 560 "add_pragma.m"
  {
#line 560 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 560 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "add_pragma.m"
      {
#line 560 "add_pragma.m"
        *hlds__make_hlds__add_pragma__HeadVar__7_7 = (MR_Integer) 0;
#line 560 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6 = hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5;
#line 560 "add_pragma.m"
      }
#line 560 "add_pragma.m"
    else
#line 562 "add_pragma.m"
      {
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_21;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredInfo_22;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus0_23;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus1_24;
#line 562 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27;
#line 563 "add_pragma.m"
        MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_21;
#line 564 "add_pragma.m"
        void MR_CALL (* hlds__make_hlds__add_pragma__func_1)(MR_Box, MR_Box, MR_Box *);
#line 564 "add_pragma.m"
        MR_Box hlds__make_hlds__add_pragma__conv2_PredInfo_22;

#line 563 "add_pragma.m"
        {
#line 563 "add_pragma.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_29_29, hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
        }
#line 563 "add_pragma.m"
        hlds__make_hlds__add_pragma__PredInfo0_21 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
#line 564 "add_pragma.m"
        hlds__make_hlds__add_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__UpdatePredInfo_2, (MR_Integer) 1)));
#line 564 "add_pragma.m"
        {
#line 564 "add_pragma.m"
          hlds__make_hlds__add_pragma__func_1(((MR_Box) hlds__make_hlds__add_pragma__UpdatePredInfo_2), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo0_21)), &hlds__make_hlds__add_pragma__conv2_PredInfo_22);
        }
#line 564 "add_pragma.m"
        hlds__make_hlds__add_pragma__PredInfo_22 = ((MR_Word) hlds__make_hlds__add_pragma__conv2_PredInfo_22);
#line 566 "add_pragma.m"
        {
#line 566 "add_pragma.m"
          hlds__make_hlds__add_pragma__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(hlds__make_hlds__add_pragma__PredInfo_22);
        }
#line 566 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 566 "add_pragma.m"
          {
#line 567 "add_pragma.m"
            hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__MustBeExported_4 == (MR_Integer) 1);
#line 566 "add_pragma.m"
            if (hlds__make_hlds__add_pragma__succeeded)
#line 566 "add_pragma.m"
              {
#line 568 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 568 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 566 "add_pragma.m"
              }
#line 566 "add_pragma.m"
          }
#line 571 "add_pragma.m"
        if (hlds__make_hlds__add_pragma__succeeded)
#line 570 "add_pragma.m"
          hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 1;
#line 571 "add_pragma.m"
        else
#line 572 "add_pragma.m"
          hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 0;
#line 574 "add_pragma.m"
        {
#line 574 "add_pragma.m"
          mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_29_29, hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_22)), hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, &hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27);
        }
#line 575 "add_pragma.m"
        {
#line 575 "add_pragma.m"
          hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(hlds__make_hlds__add_pragma__PredIds_15, hlds__make_hlds__add_pragma__UpdatePredInfo_2, hlds__make_hlds__add_pragma__Status_3, hlds__make_hlds__add_pragma__MustBeExported_4, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_27_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6, &hlds__make_hlds__add_pragma__WrongStatus1_24);
        }
#line 577 "add_pragma.m"
        {
#line 577 "add_pragma.m"
          mercury__bool__or_3_p_0(hlds__make_hlds__add_pragma__WrongStatus0_23, hlds__make_hlds__add_pragma__WrongStatus1_24, hlds__make_hlds__add_pragma__HeadVar__7_7);
#line 577 "add_pragma.m"
          return;
        }
#line 562 "add_pragma.m"
      }
#line 560 "add_pragma.m"
  }
#line 556 "add_pragma.m"
}

#line 544 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_1(
#line 544 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
#line 544 "add_pragma.m"
{
#line 544 "add_pragma.m"
  {
#line 544 "add_pragma.m"
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

#line 544 "add_pragma.m"
    MR_builtin_longjmp((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__commit_0, 1);
#line 544 "add_pragma.m"
  }
#line 544 "add_pragma.m"
}

#line 544 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_3(
#line 544 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
#line 544 "add_pragma.m"
{
#line 544 "add_pragma.m"
  {
#line 544 "add_pragma.m"
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

#line 544 "add_pragma.m"
    (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Marker_15 = ((MR_Word) (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__conv1_Marker_15);
#line 544 "add_pragma.m"
    {
#line 544 "add_pragma.m"
      hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_2(hlds__make_hlds__add_pragma__env_ptr);
#line 544 "add_pragma.m"
      return;
    }
#line 544 "add_pragma.m"
  }
#line 544 "add_pragma.m"
}

#line 544 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_2(
#line 544 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
#line 544 "add_pragma.m"
{
#line 544 "add_pragma.m"
  {
#line 544 "add_pragma.m"
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

#line 545 "add_pragma.m"
    {
#line 545 "add_pragma.m"
      (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Markers_13, (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Marker_15);
    }
#line 545 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded)
#line 545 "add_pragma.m"
      {
#line 545 "add_pragma.m"
        hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_1(hlds__make_hlds__add_pragma__env_ptr);
#line 545 "add_pragma.m"
        return;
      }
#line 544 "add_pragma.m"
  }
#line 544 "add_pragma.m"
}

#line 544 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_4(
#line 544 "add_pragma.m"
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
#line 544 "add_pragma.m"
{
#line 544 "add_pragma.m"
  {
#line 544 "add_pragma.m"
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

#line 544 "add_pragma.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__commit_0) == 0)
#line 544 "add_pragma.m"
      {
#line 544 "add_pragma.m"
        {
#line 544 "add_pragma.m"
          {
#line 544 "add_pragma.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0, &(hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__conv1_Marker_15, (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__ConflictList_3, hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_3, hlds__make_hlds__add_pragma__env_ptr);
          }
#line 544 "add_pragma.m"
        }
#line 544 "add_pragma.m"
        (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded = MR_FALSE;
#line 544 "add_pragma.m"
      }
#line 544 "add_pragma.m"
    else
#line 544 "add_pragma.m"
      (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded = MR_TRUE;
#line 544 "add_pragma.m"
  }
#line 544 "add_pragma.m"
}

#line 535 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0(
#line 535 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredTable_1,
#line 535 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__2_2,
#line 535 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ConflictList_3,
#line 535 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__4_4)
#line 535 "add_pragma.m"
{
#line 535 "add_pragma.m"
  {
#line 535 "add_pragma.m"
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s hlds__make_hlds__add_pragma__env;

#line 535 "add_pragma.m"
    (hlds__make_hlds__add_pragma__env).hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__ConflictList_3 = hlds__make_hlds__add_pragma__ConflictList_3;
#line 538 "add_pragma.m"
    while (MR_TRUE)
#line 538 "add_pragma.m"
      {
#line 538 "add_pragma.m"
        /* tailcall optimized into a loop */
#line 538 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "add_pragma.m"
          *hlds__make_hlds__add_pragma__HeadVar__4_4 = (MR_Integer) 0;
#line 538 "add_pragma.m"
        else
#line 539 "add_pragma.m"
          {
#line 539 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__2_2, (MR_Integer) 0)));
#line 539 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__2_2, (MR_Integer) 1)));
#line 539 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__PredInfo_12;
#line 540 "add_pragma.m"
            MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo_12;

#line 540 "add_pragma.m"
            {
#line 540 "add_pragma.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__make_hlds__add_pragma__PredTable_1, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_8)), &hlds__make_hlds__add_pragma__conv0_PredInfo_12);
            }
#line 540 "add_pragma.m"
            hlds__make_hlds__add_pragma__PredInfo_12 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo_12);
#line 541 "add_pragma.m"
            {
#line 541 "add_pragma.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__PredInfo_12, &(hlds__make_hlds__add_pragma__env).hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Markers_13);
            }
#line 544 "add_pragma.m"
            {
#line 544 "add_pragma.m"
              hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_4(&hlds__make_hlds__add_pragma__env);
            }
#line 549 "add_pragma.m"
            if ((hlds__make_hlds__add_pragma__env).hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded)
#line 548 "add_pragma.m"
              *hlds__make_hlds__add_pragma__HeadVar__4_4 = (MR_Integer) 1;
#line 549 "add_pragma.m"
            else
#line 550 "add_pragma.m"
              {
#line 550 "add_pragma.m"
                /* direct tailcall eliminated */
#line 550 "add_pragma.m"
                {
#line 550 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_pragma__PredIds_9;

#line 550 "add_pragma.m"
                  hlds__make_hlds__add_pragma__HeadVar__2_2 = hlds__make_hlds__add_pragma__HeadVar__2__tmp_copy_2;
#line 550 "add_pragma.m"
                }
#line 550 "add_pragma.m"
                continue;
#line 550 "add_pragma.m"
              }
#line 539 "add_pragma.m"
          }
#line 538 "add_pragma.m"
        break;
#line 538 "add_pragma.m"
      }
#line 535 "add_pragma.m"
  }
#line 535 "add_pragma.m"
}

#line 500 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__do_add_pred_marker_12_p_0(
#line 500 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_13,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_14,
#line 500 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_15,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_16,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_17,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_18,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__UpdatePredInfo_19,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31,
#line 500 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32,
#line 500 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__PredIds_21,
#line 500 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33,
#line 500 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34)
#line 500 "add_pragma.m"
{
#line 507 "add_pragma.m"
  {
#line 507 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 508 "add_pragma.m"
    {
#line 508 "add_pragma.m"
      hlds__make_hlds__add_pragma__get_matching_pred_ids_4_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__PredIds_21);
    }
#line 525 "add_pragma.m"
    if ((*hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_pragma.m"
      {
#line 526 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__DescPieces_30;
#line 526 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_35_35;

#line 527 "add_pragma.m"
        {
#line 527 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 527 "add_pragma.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
#line 527 "add_pragma.m"
        }
#line 527 "add_pragma.m"
        {
#line 527 "add_pragma.m"
          hlds__make_hlds__add_pragma__DescPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_35_35));
#line 527 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[160])));
#line 527 "add_pragma.m"
        }
#line 528 "add_pragma.m"
        {
#line 528 "add_pragma.m"
          hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__Context_18, hlds__make_hlds__add_pragma__DescPieces_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);
        }
#line 526 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31;
#line 526 "add_pragma.m"
      }
#line 525 "add_pragma.m"
    else
#line 510 "add_pragma.m"
      {
#line 510 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredTable0_25;
#line 510 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds0_26;
#line 510 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Preds_27;
#line 510 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__WrongStatus_28;
#line 510 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__PredTable_29;

#line 511 "add_pragma.m"
        {
#line 511 "add_pragma.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pragma__PredTable0_25);
        }
#line 512 "add_pragma.m"
        {
#line 512 "add_pragma.m"
          hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__Preds0_26);
        }
#line 514 "add_pragma.m"
        {
#line 514 "add_pragma.m"
          hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(*hlds__make_hlds__add_pragma__PredIds_21, hlds__make_hlds__add_pragma__UpdatePredInfo_19, hlds__make_hlds__add_pragma__Status_16, hlds__make_hlds__add_pragma__MustBeExported_17, hlds__make_hlds__add_pragma__Preds0_26, &hlds__make_hlds__add_pragma__Preds_27, &hlds__make_hlds__add_pragma__WrongStatus_28);
        }
#line 519 "add_pragma.m"
#line 519 "add_pragma.m"
        switch (hlds__make_hlds__add_pragma__WrongStatus_28) {
#line 519 "add_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 519 "add_pragma.m"
          case (MR_Integer) 0:
#line 520 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33;
#line 519 "add_pragma.m"
            break;
#line 519 "add_pragma.m"
          case (MR_Integer) 1:
#line 604 "add_pragma.m"
            {
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Pieces_50;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Msg_51;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Spec_52;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_55_55;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_56_56;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_57_57;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_60_60;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_61_61;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_69_69;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_70_70;
#line 604 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__V_74_74;

#line 605 "add_pragma.m"
              {
#line 605 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
#line 605 "add_pragma.m"
              }
#line 607 "add_pragma.m"
              {
#line 607 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_14));
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_15));
#line 607 "add_pragma.m"
              }
#line 607 "add_pragma.m"
              {
#line 607 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 607 "add_pragma.m"
              }
#line 607 "add_pragma.m"
              {
#line 607 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_61_61));
#line 607 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[49])));
#line 607 "add_pragma.m"
              }
#line 606 "add_pragma.m"
              {
#line 606 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
#line 606 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_60_60));
#line 606 "add_pragma.m"
              }
#line 605 "add_pragma.m"
              {
#line 605 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_56_56));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_57_57));
#line 605 "add_pragma.m"
              }
#line 605 "add_pragma.m"
              {
#line 605 "add_pragma.m"
                hlds__make_hlds__add_pragma__Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
#line 605 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_55_55));
#line 605 "add_pragma.m"
              }
#line 609 "add_pragma.m"
              {
#line 609 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 609 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_50));
#line 609 "add_pragma.m"
              }
#line 609 "add_pragma.m"
              {
#line 609 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_70_70));
#line 609 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "add_pragma.m"
              }
#line 609 "add_pragma.m"
              {
#line 609 "add_pragma.m"
                hlds__make_hlds__add_pragma__Msg_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 609 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_18));
#line 609 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_69_69));
#line 609 "add_pragma.m"
              }
#line 610 "add_pragma.m"
              {
#line 610 "add_pragma.m"
                hlds__make_hlds__add_pragma__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_51));
#line 610 "add_pragma.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "add_pragma.m"
              }
#line 610 "add_pragma.m"
              {
#line 610 "add_pragma.m"
                hlds__make_hlds__add_pragma__Spec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 610 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 610 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_52, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_74_74));
#line 610 "add_pragma.m"
              }
#line 611 "add_pragma.m"
              {
#line 611 "add_pragma.m"
                MR_Word base;
#line 611 "add_pragma.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "add_pragma.m"
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = base;
#line 611 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_52));
#line 611 "add_pragma.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33));
#line 611 "add_pragma.m"
              }
#line 604 "add_pragma.m"
            }
#line 519 "add_pragma.m"
            break;
#line 519 "add_pragma.m"
        }
#line 523 "add_pragma.m"
        {
#line 523 "add_pragma.m"
          hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pragma__Preds_27, hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__PredTable_29);
        }
#line 524 "add_pragma.m"
        {
#line 524 "add_pragma.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pragma__PredTable_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32);
#line 524 "add_pragma.m"
          return;
        }
#line 510 "add_pragma.m"
      }
#line 507 "add_pragma.m"
  }
#line 500 "add_pragma.m"
}

#line 492 "add_pragma.m"
MR_bool MR_CALL 
hlds__make_hlds__add_pragma__marker_must_be_exported_1_p_0(
#line 492 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_2)
#line 492 "add_pragma.m"
{
#line 495 "add_pragma.m"
  {
#line 495 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 495 "add_pragma.m"
    {
#line 495 "add_pragma.m"
      return hlds__make_hlds__add_pragma__succeeded = hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_101_114_95_109_117_115_116_95_98_101_95_101_120_112_111_114_116_101_100_95_95_91_49_93_95_48_1_p_0();
    }
#line 495 "add_pragma.m"
    return hlds__make_hlds__add_pragma__succeeded;
#line 495 "add_pragma.m"
  }
#line 492 "add_pragma.m"
}

#line 467 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(
#line 467 "add_pragma.m"
  MR_String hlds__make_hlds__add_pragma__PragmaName_12,
#line 467 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Name_13,
#line 467 "add_pragma.m"
  MR_Integer hlds__make_hlds__add_pragma__Arity_14,
#line 467 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_15,
#line 467 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_16,
#line 467 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Marker_17,
#line 467 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ConflictMarkers_18,
#line 467 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_25,
#line 467 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_26,
#line 467 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_27,
#line 467 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28)
#line 467 "add_pragma.m"
{
#line 473 "add_pragma.m"
  {
#line 473 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 473 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MustBeExported_21;
#line 473 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_22;
#line 473 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_23;
#line 473 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Conflict_24;
#line 473 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31;

#line 495 "add_pragma.m"
    {
#line 495 "add_pragma.m"
      hlds__make_hlds__add_pragma__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 476 "add_pragma.m"
    if (hlds__make_hlds__add_pragma__succeeded)
#line 475 "add_pragma.m"
      hlds__make_hlds__add_pragma__MustBeExported_21 = (MR_Integer) 1;
#line 476 "add_pragma.m"
    else
#line 477 "add_pragma.m"
      hlds__make_hlds__add_pragma__MustBeExported_21 = (MR_Integer) 0;
#line 479 "add_pragma.m"
    {
#line 479 "add_pragma.m"
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_p_0(hlds__make_hlds__add_pragma__Marker_17, hlds__make_hlds__add_pragma__PragmaName_12, hlds__make_hlds__add_pragma__Name_13, hlds__make_hlds__add_pragma__Arity_14, hlds__make_hlds__add_pragma__Status_15, hlds__make_hlds__add_pragma__MustBeExported_21, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_26, &hlds__make_hlds__add_pragma__PredIds_22, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_27, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31);
    }
#line 481 "add_pragma.m"
    {
#line 481 "add_pragma.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(*hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_26, &hlds__make_hlds__add_pragma__Preds_23);
    }
#line 482 "add_pragma.m"
    {
#line 482 "add_pragma.m"
      hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0(hlds__make_hlds__add_pragma__Preds_23, hlds__make_hlds__add_pragma__PredIds_22, hlds__make_hlds__add_pragma__ConflictMarkers_18, &hlds__make_hlds__add_pragma__Conflict_24);
    }
#line 486 "add_pragma.m"
#line 486 "add_pragma.m"
    switch (hlds__make_hlds__add_pragma__Conflict_24) {
#line 486 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 486 "add_pragma.m"
      case (MR_Integer) 0:
#line 487 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31;
#line 486 "add_pragma.m"
        break;
#line 486 "add_pragma.m"
      case (MR_Integer) 1:
#line 616 "add_pragma.m"
        {
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Pieces_43;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Msg_44;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Spec_45;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_48_48;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_49_49;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_50_50;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_53_53;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_54_54;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_55_55;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_62_62;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_63_63;
#line 616 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_67_67;

#line 617 "add_pragma.m"
          {
#line 617 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "add_pragma.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 617 "add_pragma.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_12));
#line 617 "add_pragma.m"
          }
#line 619 "add_pragma.m"
          {
#line 619 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_13));
#line 619 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_14));
#line 619 "add_pragma.m"
          }
#line 619 "add_pragma.m"
          {
#line 619 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "add_pragma.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 619 "add_pragma.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_55_55));
#line 619 "add_pragma.m"
          }
#line 619 "add_pragma.m"
          {
#line 619 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_54_54));
#line 619 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
#line 619 "add_pragma.m"
          }
#line 618 "add_pragma.m"
          {
#line 618 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[158])));
#line 618 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_53_53));
#line 618 "add_pragma.m"
          }
#line 617 "add_pragma.m"
          {
#line 617 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_49_49));
#line 617 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_50_50));
#line 617 "add_pragma.m"
          }
#line 617 "add_pragma.m"
          {
#line 617 "add_pragma.m"
            hlds__make_hlds__add_pragma__Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
#line 617 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_48_48));
#line 617 "add_pragma.m"
          }
#line 620 "add_pragma.m"
          {
#line 620 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_43));
#line 620 "add_pragma.m"
          }
#line 620 "add_pragma.m"
          {
#line 620 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_63_63));
#line 620 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_pragma.m"
          }
#line 620 "add_pragma.m"
          {
#line 620 "add_pragma.m"
            hlds__make_hlds__add_pragma__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_16));
#line 620 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_62_62));
#line 620 "add_pragma.m"
          }
#line 621 "add_pragma.m"
          {
#line 621 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_44));
#line 621 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "add_pragma.m"
          }
#line 621 "add_pragma.m"
          {
#line 621 "add_pragma.m"
            hlds__make_hlds__add_pragma__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 621 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_67_67));
#line 621 "add_pragma.m"
          }
#line 622 "add_pragma.m"
          {
#line 622 "add_pragma.m"
            MR_Word base;
#line 622 "add_pragma.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28 = base;
#line 622 "add_pragma.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_45));
#line 622 "add_pragma.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31));
#line 622 "add_pragma.m"
          }
#line 616 "add_pragma.m"
        }
#line 486 "add_pragma.m"
        break;
#line 486 "add_pragma.m"
    }
#line 473 "add_pragma.m"
  }
#line 467 "add_pragma.m"
}

#line 430 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_mm_tabling_info_6_p_0(
#line 430 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__MMTablingInfo_7,
#line 430 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma___Context_8,
#line 430 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26,
#line 430 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27,
#line 430 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28,
#line 430 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29)
#line 430 "add_pragma.m"
{
#line 434 "add_pragma.m"
  {
#line 434 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 434 "add_pragma.m"
    {
#line 434 "add_pragma.m"
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__MMTablingInfo_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29);
#line 434 "add_pragma.m"
      return;
    }
#line 434 "add_pragma.m"
  }
#line 430 "add_pragma.m"
}

#line 400 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_trailing_info_6_p_0(
#line 400 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__TrailingInfo_7,
#line 400 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma___Context_8,
#line 400 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26,
#line 400 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27,
#line 400 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28,
#line 400 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29)
#line 400 "add_pragma.m"
{
#line 404 "add_pragma.m"
  {
#line 404 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 404 "add_pragma.m"
    {
#line 404 "add_pragma.m"
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__TrailingInfo_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_29);
#line 404 "add_pragma.m"
      return;
    }
#line 404 "add_pragma.m"
  }
#line 400 "add_pragma.m"
}

#line 369 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_exceptions_6_p_0(
#line 369 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ExceptionsInfo_7,
#line 369 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma___Context_8,
#line 369 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27,
#line 369 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28,
#line 369 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_29,
#line 369 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30)
#line 369 "add_pragma.m"
{
#line 373 "add_pragma.m"
  {
#line 373 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;

#line 373 "add_pragma.m"
    {
#line 373 "add_pragma.m"
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__ExceptionsInfo_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30);
#line 373 "add_pragma.m"
      return;
    }
#line 373 "add_pragma.m"
  }
#line 369 "add_pragma.m"
}

#line 330 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_unused_args_6_p_0(
#line 330 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__UnusedArgsInfo_7,
#line 330 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Context_8,
#line 330 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29,
#line 330 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30,
#line 330 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31,
#line 330 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32)
#line 330 "add_pragma.m"
{
#line 334 "add_pragma.m"
  {
#line 334 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 334 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__UnusedArgsInfo_7, (MR_Integer) 0)));
#line 334 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__UnusedArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__UnusedArgsInfo_7, (MR_Integer) 1)));
#line 334 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
#line 334 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
#line 334 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
#line 334 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
#line 334 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
#line 334 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

#line 338 "add_pragma.m"
    {
#line 338 "add_pragma.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_pragma__Preds_17);
    }
#line 339 "add_pragma.m"
    {
#line 339 "add_pragma.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
#line 349 "add_pragma.m"
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "add_pragma.m"
      {
#line 342 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Msg_20;
#line 342 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__Spec_21;
#line 342 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_79_79;

#line 346 "add_pragma.m"
        {
#line 346 "add_pragma.m"
          hlds__make_hlds__add_pragma__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 346 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[156])));
#line 346 "add_pragma.m"
        }
#line 347 "add_pragma.m"
        {
#line 347 "add_pragma.m"
          hlds__make_hlds__add_pragma__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_20));
#line 347 "add_pragma.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "add_pragma.m"
        }
#line 347 "add_pragma.m"
        {
#line 347 "add_pragma.m"
          hlds__make_hlds__add_pragma__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 347 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 347 "add_pragma.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_21, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_79_79));
#line 347 "add_pragma.m"
        }
#line 348 "add_pragma.m"
        {
#line 348 "add_pragma.m"
          MR_Word base;
#line 348 "add_pragma.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32 = base;
#line 348 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_21));
#line 348 "add_pragma.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31));
#line 348 "add_pragma.m"
        }
#line 342 "add_pragma.m"
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29;
#line 342 "add_pragma.m"
      }
#line 349 "add_pragma.m"
    else
#line 349 "add_pragma.m"
      {
#line 349 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
#line 349 "add_pragma.m"
        MR_Word hlds__make_hlds__add_pragma__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

#line 349 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 350 "add_pragma.m"
          {
#line 350 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__UnusedArgInfo0_23;
#line 350 "add_pragma.m"
            MR_Integer hlds__make_hlds__add_pragma__ProcId_24;
#line 350 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__UnusedArgInfo_25;
#line 350 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_58_58;

#line 351 "add_pragma.m"
            {
#line 351 "add_pragma.m"
              hlds__hlds_module__module_info_get_unused_arg_info_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_pragma__UnusedArgInfo0_23);
            }
#line 353 "add_pragma.m"
            {
#line 353 "add_pragma.m"
              hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_24, hlds__make_hlds__add_pragma__ModeNum_16);
            }
#line 354 "add_pragma.m"
            {
#line 354 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 354 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_88_88));
#line 354 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_24));
#line 354 "add_pragma.m"
            }
#line 354 "add_pragma.m"
            {
#line 354 "add_pragma.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__add_pragma__V_58_58)), ((MR_Box) (hlds__make_hlds__add_pragma__UnusedArgs_12)), hlds__make_hlds__add_pragma__UnusedArgInfo0_23, &hlds__make_hlds__add_pragma__UnusedArgInfo_25);
            }
#line 356 "add_pragma.m"
            {
#line 356 "add_pragma.m"
              hlds__hlds_module__module_info_set_unused_arg_info_3_p_0(hlds__make_hlds__add_pragma__UnusedArgInfo_25, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30);
            }
#line 350 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31;
#line 350 "add_pragma.m"
          }
#line 349 "add_pragma.m"
        else
#line 358 "add_pragma.m"
          {
#line 358 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__V_54_54;
#line 358 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Msg_83;
#line 358 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__Spec_84;

#line 362 "add_pragma.m"
            {
#line 362 "add_pragma.m"
              hlds__make_hlds__add_pragma__Msg_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 362 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_83, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
#line 362 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[157])));
#line 362 "add_pragma.m"
            }
#line 363 "add_pragma.m"
            {
#line 363 "add_pragma.m"
              hlds__make_hlds__add_pragma__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_83));
#line 363 "add_pragma.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 363 "add_pragma.m"
            }
#line 363 "add_pragma.m"
            {
#line 363 "add_pragma.m"
              hlds__make_hlds__add_pragma__Spec_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 363 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 363 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 363 "add_pragma.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_84, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_54_54));
#line 363 "add_pragma.m"
            }
#line 364 "add_pragma.m"
            {
#line 364 "add_pragma.m"
              MR_Word base;
#line 364 "add_pragma.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32 = base;
#line 364 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_84));
#line 364 "add_pragma.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31));
#line 364 "add_pragma.m"
            }
#line 358 "add_pragma.m"
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29;
#line 358 "add_pragma.m"
          }
#line 349 "add_pragma.m"
      }
#line 334 "add_pragma.m"
  }
#line 330 "add_pragma.m"
}

#line 318 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_external_3_p_0(
#line 318 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__PredId_4,
#line 318 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10,
#line 318 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_11)
#line 318 "add_pragma.m"
{
#line 321 "add_pragma.m"
  {
#line 321 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 321 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_13_13;
#line 321 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_14_14;
#line 321 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds0_6;
#line 321 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredInfo0_7;
#line 321 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__PredInfo_8;
#line 321 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Preds_9;
#line 323 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_7;

#line 322 "add_pragma.m"
    {
#line 322 "add_pragma.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__add_pragma__Preds0_6);
    }
#line 10757 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 10759 "hlds.make_hlds.add_pragma.c"
    hlds__make_hlds__add_pragma__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 323 "add_pragma.m"
    {
#line 323 "add_pragma.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_13_13, hlds__make_hlds__add_pragma__TypeCtorInfo_14_14, hlds__make_hlds__add_pragma__Preds0_6, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_4)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_7);
    }
#line 323 "add_pragma.m"
    hlds__make_hlds__add_pragma__PredInfo0_7 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_7);
#line 324 "add_pragma.m"
    {
#line 324 "add_pragma.m"
      hlds__hlds_pred__pred_info_mark_as_external_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_7, &hlds__make_hlds__add_pragma__PredInfo_8);
    }
#line 325 "add_pragma.m"
    {
#line 325 "add_pragma.m"
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_13_13, hlds__make_hlds__add_pragma__TypeCtorInfo_14_14, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_4)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_8)), hlds__make_hlds__add_pragma__Preds0_6, &hlds__make_hlds__add_pragma__Preds_9);
    }
#line 326 "add_pragma.m"
    {
#line 326 "add_pragma.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__Preds_9, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_11);
#line 326 "add_pragma.m"
      return;
    }
#line 321 "add_pragma.m"
  }
#line 318 "add_pragma.m"
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
#line 787 "add_pragma.m"
  {
#line 787 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 787 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Pragma_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_9, (MR_Integer) 0)));
#line 787 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybeAttrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_9, (MR_Integer) 1)));
#line 787 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_9, (MR_Integer) 2)));
#line 787 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma__SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_9, (MR_Integer) 3)));

#line 793 "add_pragma.m"
#line 793 "add_pragma.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__Pragma_14)) {
#line 793 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 793 "add_pragma.m"
      case (MR_Integer) 0:
#line 844 "add_pragma.m"
        {
#line 844 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 844 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 844 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 844 "add_pragma.m"
        }
#line 793 "add_pragma.m"
        break;
#line 793 "add_pragma.m"
      case (MR_Integer) 1:
#line 845 "add_pragma.m"
        {
#line 845 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 845 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 845 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 845 "add_pragma.m"
        }
#line 793 "add_pragma.m"
        break;
#line 793 "add_pragma.m"
      case (MR_Integer) 2:
#line 790 "add_pragma.m"
        {
#line 790 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__FPInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 0)));
#line 790 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__V_111_111;

#line 791 "add_pragma.m"
          {
#line 791 "add_pragma.m"
            hlds__make_hlds__add_pragma__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 791 "add_pragma.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__SeqNum_17));
#line 791 "add_pragma.m"
          }
#line 791 "add_pragma.m"
          {
#line 791 "add_pragma.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__FPInfo_18, hlds__make_hlds__add_pragma__Status_10, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__V_111_111, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
          }
#line 790 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 790 "add_pragma.m"
        }
#line 793 "add_pragma.m"
        break;
#line 793 "add_pragma.m"
      case (MR_Integer) 3:
#line 793 "add_pragma.m"
#line 793 "add_pragma.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 0)))) {
#line 793 "add_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 793 "add_pragma.m"
          case (MR_Integer) 0:
#line 846 "add_pragma.m"
            {
#line 846 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 846 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 846 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 846 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 1:
#line 794 "add_pragma.m"
            {
#line 794 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FEInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 795 "add_pragma.m"
              {
#line 795 "add_pragma.m"
                hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0(hlds__make_hlds__add_pragma__MaybeAttrs_15, hlds__make_hlds__add_pragma__FEInfo_19, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 794 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 794 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 2:
#line 847 "add_pragma.m"
            {
#line 847 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 847 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 847 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 847 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 3:
#line 848 "add_pragma.m"
            {
#line 848 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 848 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 848 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 848 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 4:
#line 849 "add_pragma.m"
            {
#line 849 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 849 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 849 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 849 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 5:
#line 798 "add_pragma.m"
            {
#line 798 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TypeSpecInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 799 "add_pragma.m"
              {
#line 799 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0(hlds__make_hlds__add_pragma__TypeSpecInfo_20, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
#line 799 "add_pragma.m"
                return;
              }
#line 798 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 6:
#line 850 "add_pragma.m"
            {
#line 850 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 850 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 850 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 850 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 7:
#line 851 "add_pragma.m"
            {
#line 851 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 851 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 851 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 851 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 8:
#line 852 "add_pragma.m"
            {
#line 852 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 852 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 852 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 852 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 9:
#line 853 "add_pragma.m"
            {
#line 853 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 853 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 853 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 853 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 10:
#line 854 "add_pragma.m"
            {
#line 854 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 854 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 854 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 854 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 11:
#line 855 "add_pragma.m"
            {
#line 855 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 855 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 855 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 855 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 12:
#line 856 "add_pragma.m"
            {
#line 856 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 856 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 856 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 856 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 13:
#line 857 "add_pragma.m"
            {
#line 857 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 857 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 857 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 857 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 14:
#line 802 "add_pragma.m"
            {
#line 802 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TabledInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));
#line 802 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Globals_22;
#line 802 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TypeLayout_23;

#line 803 "add_pragma.m"
              {
#line 803 "add_pragma.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_pragma__Globals_22);
              }
#line 804 "add_pragma.m"
              {
#line 804 "add_pragma.m"
                libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_22, (MR_Integer) 226, &hlds__make_hlds__add_pragma__TypeLayout_23);
              }
#line 809 "add_pragma.m"
#line 809 "add_pragma.m"
              switch (hlds__make_hlds__add_pragma__TypeLayout_23) {
#line 809 "add_pragma.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 809 "add_pragma.m"
                case (MR_Integer) 0:
#line 810 "add_pragma.m"
                  {
#line 810 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__EvalMethod_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_21, (MR_Integer) 0)));
#line 810 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Pieces_28;
#line 810 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Msg_29;
#line 810 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__Spec_30;
#line 810 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_83_83;
#line 810 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_84_84;
#line 810 "add_pragma.m"
                    MR_String hlds__make_hlds__add_pragma__V_85_85;
#line 810 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_95_95;
#line 810 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_96_96;
#line 810 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_100_100;
#line 811 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_21, (MR_Integer) 1)));
#line 811 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_21, (MR_Integer) 2)));
#line 811 "add_pragma.m"
                    MR_Word hlds__make_hlds__add_pragma__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_21, (MR_Integer) 3)));

#line 813 "add_pragma.m"
                    {
#line 813 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_85_85 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__EvalMethod_24);
                    }
#line 813 "add_pragma.m"
                    {
#line 813 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 813 "add_pragma.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_85_85));
#line 813 "add_pragma.m"
                    }
#line 813 "add_pragma.m"
                    {
#line 813 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_84_84));
#line 813 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[36])));
#line 813 "add_pragma.m"
                    }
#line 812 "add_pragma.m"
                    {
#line 812 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
#line 812 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_28, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_83_83));
#line 812 "add_pragma.m"
                    }
#line 816 "add_pragma.m"
                    {
#line 816 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 816 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_28));
#line 816 "add_pragma.m"
                    }
#line 816 "add_pragma.m"
                    {
#line 816 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__V_96_96));
#line 816 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "add_pragma.m"
                    }
#line 816 "add_pragma.m"
                    {
#line 816 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_16));
#line 816 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_29, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__V_95_95));
#line 816 "add_pragma.m"
                    }
#line 817 "add_pragma.m"
                    {
#line 817 "add_pragma.m"
                      hlds__make_hlds__add_pragma__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_29));
#line 817 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "add_pragma.m"
                    }
#line 817 "add_pragma.m"
                    {
#line 817 "add_pragma.m"
                      hlds__make_hlds__add_pragma__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 817 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 817 "add_pragma.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_100_100));
#line 817 "add_pragma.m"
                    }
#line 818 "add_pragma.m"
                    {
#line 818 "add_pragma.m"
                      MR_Word base;
#line 818 "add_pragma.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "add_pragma.m"
                      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = base;
#line 818 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_30));
#line 818 "add_pragma.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64));
#line 818 "add_pragma.m"
                    }
#line 810 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 810 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 810 "add_pragma.m"
                  }
#line 809 "add_pragma.m"
                  break;
#line 809 "add_pragma.m"
                case (MR_Integer) 1:
#line 807 "add_pragma.m"
                  {
#line 807 "add_pragma.m"
                    hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0(hlds__make_hlds__add_pragma__TabledInfo_21, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__Status_10, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
#line 807 "add_pragma.m"
                    return;
                  }
#line 809 "add_pragma.m"
                  break;
#line 809 "add_pragma.m"
              }
#line 802 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 15:
#line 821 "add_pragma.m"
            {
#line 821 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FTInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 822 "add_pragma.m"
              {
#line 822 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(hlds__make_hlds__add_pragma__FTInfo_31, hlds__make_hlds__add_pragma__Status_10, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 821 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 821 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 16:
#line 827 "add_pragma.m"
            {
#line 827 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__OISUInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 828 "add_pragma.m"
              {
#line 828 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(hlds__make_hlds__add_pragma__OISUInfo_33, hlds__make_hlds__add_pragma__Status_10, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 827 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 827 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 17:
#line 858 "add_pragma.m"
            {
#line 858 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 858 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 858 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 858 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 18:
#line 859 "add_pragma.m"
            {
#line 859 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 859 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 859 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 859 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 19:
#line 860 "add_pragma.m"
            {
#line 860 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 860 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 860 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 860 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 20:
#line 830 "add_pragma.m"
            {
#line 830 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TermInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 831 "add_pragma.m"
              {
#line 831 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(hlds__make_hlds__add_pragma__TermInfo_34, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 830 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 830 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 21:
#line 833 "add_pragma.m"
            {
#line 833 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Term2Info_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 834 "add_pragma.m"
              {
#line 834 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_termination2_info_6_p_0(hlds__make_hlds__add_pragma__Term2Info_35, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 833 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 833 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 22:
#line 861 "add_pragma.m"
            {
#line 861 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 861 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 861 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 861 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 23:
#line 862 "add_pragma.m"
            {
#line 862 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 862 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 862 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 862 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 24:
#line 863 "add_pragma.m"
            {
#line 863 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 863 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 863 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 863 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 25:
#line 864 "add_pragma.m"
            {
#line 864 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 864 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 864 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 864 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 26:
#line 836 "add_pragma.m"
            {
#line 836 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__SharingInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 837 "add_pragma.m"
              {
#line 837 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_structure_sharing_6_p_0(hlds__make_hlds__add_pragma__SharingInfo_36, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 836 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 836 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 27:
#line 839 "add_pragma.m"
            {
#line 839 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__ReuseInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 840 "add_pragma.m"
              {
#line 840 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_structure_reuse_6_p_0(hlds__make_hlds__add_pragma__ReuseInfo_37, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 839 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 839 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 28:
#line 824 "add_pragma.m"
            {
#line 824 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TypeCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

#line 825 "add_pragma.m"
              {
#line 825 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pragma_reserve_tag_7_p_0(hlds__make_hlds__add_pragma__TypeCtor_32, hlds__make_hlds__add_pragma__Status_10, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65);
              }
#line 824 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 824 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
          case (MR_Integer) 29:
#line 865 "add_pragma.m"
            {
#line 865 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_60;
#line 865 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_62;
#line 865 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_64;
#line 865 "add_pragma.m"
            }
#line 793 "add_pragma.m"
            break;
#line 793 "add_pragma.m"
        }
#line 793 "add_pragma.m"
        break;
#line 793 "add_pragma.m"
    }
#line 787 "add_pragma.m"
  }
#line 27 "add_pragma.m"
}

#line 144 "add_pragma.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0_1(
#line 144 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
#line 144 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
#line 144 "add_pragma.m"
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
#line 144 "add_pragma.m"
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3)
#line 144 "add_pragma.m"
{
#line 144 "add_pragma.m"
  {
#line 144 "add_pragma.m"
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
#line 144 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_ModuleInfo_11;

#line 144 "add_pragma.m"
    {
#line 144 "add_pragma.m"
      hlds__make_hlds__add_pragma__mark_pred_as_external_3_p_0(((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2), &hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_ModuleInfo_11);
    }
#line 144 "add_pragma.m"
    *hlds__make_hlds__add_pragma__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_ModuleInfo_11));
#line 144 "add_pragma.m"
  }
#line 144 "add_pragma.m"
}

#line 23 "add_pragma.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0(
#line 23 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__ItemPragma_7,
#line 23 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__Status_8,
#line 23 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68,
#line 23 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69,
#line 23 "add_pragma.m"
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_70,
#line 23 "add_pragma.m"
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71)
#line 23 "add_pragma.m"
{
#line 72 "add_pragma.m"
  {
#line 72 "add_pragma.m"
    MR_bool hlds__make_hlds__add_pragma__succeeded;
#line 72 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_7, (MR_Integer) 0)));
#line 72 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__MaybeAttrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_7, (MR_Integer) 1)));
#line 72 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_7, (MR_Integer) 2)));
#line 72 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__ImportStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Status_8, (MR_Integer) 0)));
#line 72 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__Allowed_17;
#line 72 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 73 "add_pragma.m"
    MR_Integer hlds__make_hlds__add_pragma___SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragma_7, (MR_Integer) 3)));
#line 75 "add_pragma.m"
    MR_Word hlds__make_hlds__add_pragma__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Status_8, (MR_Integer) 1)));

#line 76 "add_pragma.m"
    {
#line 76 "add_pragma.m"
      hlds__make_hlds__add_pragma__Allowed_17 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(hlds__make_hlds__add_pragma__Pragma_11);
    }
#line 90 "add_pragma.m"
#line 90 "add_pragma.m"
    switch (hlds__make_hlds__add_pragma__Allowed_17) {
#line 90 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 90 "add_pragma.m"
      case (MR_Integer) 0:
#line 78 "add_pragma.m"
        if ((hlds__make_hlds__add_pragma__MaybeAttrs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 80 "add_pragma.m"
          {
#line 80 "add_pragma.m"
            MR_Word hlds__make_hlds__add_pragma__ContextPieces_18;

#line 81 "add_pragma.m"
            {
#line 81 "add_pragma.m"
              hlds__make_hlds__add_pragma__ContextPieces_18 = parse_tree__prog_item__pragma_context_pieces_1_f_0(hlds__make_hlds__add_pragma__Pragma_11);
            }
#line 82 "add_pragma.m"
            {
#line 82 "add_pragma.m"
              hlds__make_hlds__make_hlds_error__error_if_exported_5_p_0(hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__ContextPieces_18, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_70, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72);
            }
#line 80 "add_pragma.m"
          }
#line 78 "add_pragma.m"
        else
#line 88 "add_pragma.m"
          hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_70;
#line 90 "add_pragma.m"
        break;
#line 90 "add_pragma.m"
      case (MR_Integer) 1:
#line 91 "add_pragma.m"
        hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_70;
#line 90 "add_pragma.m"
        break;
#line 90 "add_pragma.m"
    }
#line 98 "add_pragma.m"
#line 98 "add_pragma.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__Pragma_11)) {
#line 98 "add_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 98 "add_pragma.m"
      case (MR_Integer) 0:
#line 94 "add_pragma.m"
        {
#line 94 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__FDInfo_20 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_pragma__Pragma_11), (MR_Integer) 0);
#line 94 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Lang_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FDInfo_20, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 94 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__IsLocal_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FDInfo_20, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 94 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__CHeader_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FDInfo_20, (MR_Integer) 1)));
#line 94 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__ForeignDeclCode_24;

#line 96 "add_pragma.m"
          {
#line 96 "add_pragma.m"
            hlds__make_hlds__add_pragma__ForeignDeclCode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 96 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Lang_21));
#line 96 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__IsLocal_22));
#line 96 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_24, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__CHeader_23));
#line 96 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_24, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 96 "add_pragma.m"
          }
#line 97 "add_pragma.m"
          {
#line 97 "add_pragma.m"
            hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_pragma__ForeignDeclCode_24, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69);
          }
#line 94 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 94 "add_pragma.m"
        }
#line 98 "add_pragma.m"
        break;
#line 98 "add_pragma.m"
      case (MR_Integer) 1:
#line 99 "add_pragma.m"
        {
#line 99 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__FCInfo_25 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_pragma__Pragma_11), (MR_Integer) 1);
#line 99 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__BodyCode_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_25, (MR_Integer) 1)));
#line 99 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__ForeignBodyCode_27;
#line 99 "add_pragma.m"
          MR_Word hlds__make_hlds__add_pragma__Lang_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_25, (MR_Integer) 0)));

#line 101 "add_pragma.m"
          {
#line 101 "add_pragma.m"
            hlds__make_hlds__add_pragma__ForeignBodyCode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 101 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Lang_262));
#line 101 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__BodyCode_26));
#line 101 "add_pragma.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_27, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 101 "add_pragma.m"
          }
#line 102 "add_pragma.m"
          {
#line 102 "add_pragma.m"
            hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_pragma__ForeignBodyCode_27, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69);
          }
#line 99 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 99 "add_pragma.m"
        }
#line 98 "add_pragma.m"
        break;
#line 98 "add_pragma.m"
      case (MR_Integer) 2:
#line 290 "add_pragma.m"
        {
#line 290 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 290 "add_pragma.m"
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 290 "add_pragma.m"
        }
#line 98 "add_pragma.m"
        break;
#line 98 "add_pragma.m"
      case (MR_Integer) 3:
#line 98 "add_pragma.m"
#line 98 "add_pragma.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 0)))) {
#line 98 "add_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 98 "add_pragma.m"
          case (MR_Integer) 0:
#line 104 "add_pragma.m"
            {
#line 104 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FIMInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 104 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Import_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FIMInfo_28, (MR_Integer) 1)));
#line 104 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__ForeignImportModule_30;
#line 104 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Lang_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FIMInfo_28, (MR_Integer) 0)));

#line 106 "add_pragma.m"
              {
#line 106 "add_pragma.m"
                hlds__make_hlds__add_pragma__ForeignImportModule_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 106 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignImportModule_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Lang_263));
#line 106 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignImportModule_30, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Import_29));
#line 106 "add_pragma.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignImportModule_30, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 106 "add_pragma.m"
              }
#line 108 "add_pragma.m"
              {
#line 108 "add_pragma.m"
                hlds__hlds_module__module_add_foreign_import_module_3_p_0(hlds__make_hlds__add_pragma__ForeignImportModule_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69);
              }
#line 104 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 104 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 1:
#line 304 "add_pragma.m"
            {
#line 304 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 304 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 304 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 2:
#line 280 "add_pragma.m"
            {
#line 280 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FEEInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 281 "add_pragma.m"
              {
#line 281 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_export_enum_7_p_0(hlds__make_hlds__add_pragma__FEEInfo_55, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 281 "add_pragma.m"
                return;
              }
#line 280 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 3:
#line 284 "add_pragma.m"
            {
#line 284 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FEInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 285 "add_pragma.m"
              {
#line 285 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0(hlds__make_hlds__add_pragma__FEInfo_56, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 285 "add_pragma.m"
                return;
              }
#line 284 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 4:
#line 110 "add_pragma.m"
            {
#line 110 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__ExternalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 110 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExternalInfo_31, (MR_Integer) 0)));
#line 110 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExternalInfo_31, (MR_Integer) 1)));
#line 110 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__MaybePorF_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExternalInfo_31, (MR_Integer) 2)));
#line 110 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__MaybeBackend_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExternalInfo_31, (MR_Integer) 3)));
#line 110 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Globals_36;
#line 110 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__CurrentBackend_37;

#line 113 "add_pragma.m"
              {
#line 113 "add_pragma.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, &hlds__make_hlds__add_pragma__Globals_36);
              }
#line 114 "add_pragma.m"
              {
#line 114 "add_pragma.m"
                hlds__make_hlds__add_pragma__CurrentBackend_37 = parse_tree__prog_data__lookup_current_backend_1_f_0(hlds__make_hlds__add_pragma__Globals_36);
              }
#line 118 "add_pragma.m"
              if ((hlds__make_hlds__add_pragma__MaybeBackend_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 117 "add_pragma.m"
                hlds__make_hlds__add_pragma__succeeded = MR_TRUE;
#line 118 "add_pragma.m"
              else
#line 119 "add_pragma.m"
                {
#line 119 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Backend_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeBackend_35, (MR_Integer) 0)));

#line 120 "add_pragma.m"
                  hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Backend_38 == hlds__make_hlds__add_pragma__CurrentBackend_37);
#line 119 "add_pragma.m"
                }
#line 150 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 125 "add_pragma.m"
                {
#line 125 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__PredicateTable0_39;
#line 125 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__PredIds_40;
#line 125 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__MissingPieces_41;

#line 125 "add_pragma.m"
                  {
#line 125 "add_pragma.m"
                    hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, &hlds__make_hlds__add_pragma__PredicateTable0_39);
                  }
#line 131 "add_pragma.m"
                  if ((hlds__make_hlds__add_pragma__MaybePorF_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 127 "add_pragma.m"
                    {
#line 128 "add_pragma.m"
                      {
#line 128 "add_pragma.m"
                        hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable0_39, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_32, hlds__make_hlds__add_pragma__Arity_33, &hlds__make_hlds__add_pragma__PredIds_40);
                      }
#line 130 "add_pragma.m"
                      hlds__make_hlds__add_pragma__MissingPieces_41 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[15]);
#line 127 "add_pragma.m"
                    }
#line 131 "add_pragma.m"
                  else
#line 131 "add_pragma.m"
                    {
#line 131 "add_pragma.m"
                      MR_Word hlds__make_hlds__add_pragma__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybePorF_34, (MR_Integer) 0)));

#line 131 "add_pragma.m"
#line 131 "add_pragma.m"
                      switch (hlds__make_hlds__add_pragma__V_327_327) {
#line 131 "add_pragma.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 131 "add_pragma.m"
                        case (MR_Integer) 1:
#line 137 "add_pragma.m"
                          {
#line 138 "add_pragma.m"
                            {
#line 138 "add_pragma.m"
                              hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable0_39, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_32, hlds__make_hlds__add_pragma__Arity_33, &hlds__make_hlds__add_pragma__PredIds_40);
                            }
#line 140 "add_pragma.m"
                            hlds__make_hlds__add_pragma__MissingPieces_41 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[19]);
#line 137 "add_pragma.m"
                          }
#line 131 "add_pragma.m"
                          break;
#line 131 "add_pragma.m"
                        case (MR_Integer) 0:
#line 132 "add_pragma.m"
                          {
#line 133 "add_pragma.m"
                            {
#line 133 "add_pragma.m"
                              hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable0_39, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_32, hlds__make_hlds__add_pragma__Arity_33, &hlds__make_hlds__add_pragma__PredIds_40);
                            }
#line 135 "add_pragma.m"
                            hlds__make_hlds__add_pragma__MissingPieces_41 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[21]);
#line 132 "add_pragma.m"
                          }
#line 131 "add_pragma.m"
                          break;
#line 131 "add_pragma.m"
                      }
#line 131 "add_pragma.m"
                    }
#line 145 "add_pragma.m"
                  if ((hlds__make_hlds__add_pragma__PredIds_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 146 "add_pragma.m"
                    {
#line 147 "add_pragma.m"
                      {
#line 147 "add_pragma.m"
                        hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__PredName_32, hlds__make_hlds__add_pragma__Arity_33, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__MissingPieces_41, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
                      }
#line 146 "add_pragma.m"
                      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 146 "add_pragma.m"
                    }
#line 145 "add_pragma.m"
                  else
#line 143 "add_pragma.m"
                    {
#line 144 "add_pragma.m"
                      MR_Box hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_ModuleInfo_69;

#line 144 "add_pragma.m"
                      {
#line 144 "add_pragma.m"
                        mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_5[0], hlds__make_hlds__add_pragma__PredIds_40, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68)), &hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_ModuleInfo_69);
                      }
#line 144 "add_pragma.m"
                      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_ModuleInfo_69);
#line 143 "add_pragma.m"
                      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 143 "add_pragma.m"
                    }
#line 125 "add_pragma.m"
                }
#line 150 "add_pragma.m"
              else
#line 151 "add_pragma.m"
                {
#line 151 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 151 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 151 "add_pragma.m"
                }
#line 110 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 5:
#line 291 "add_pragma.m"
            {
#line 291 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 291 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 291 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 6:
#line 154 "add_pragma.m"
            {
#line 154 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 154 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_44, (MR_Integer) 0)));
#line 154 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_264 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_44, (MR_Integer) 1)));

#line 156 "add_pragma.m"
              {
#line 156 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "inline", hlds__make_hlds__add_pragma__Name_45, hlds__make_hlds__add_pragma__Arity_264, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[150]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 156 "add_pragma.m"
                return;
              }
#line 154 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 7:
#line 160 "add_pragma.m"
            {
#line 160 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_265;
#line 160 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_266 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 160 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_266, (MR_Integer) 0)));

#line 161 "add_pragma.m"
              hlds__make_hlds__add_pragma__Arity_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_266, (MR_Integer) 1)));
#line 162 "add_pragma.m"
              {
#line 162 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "no_inline", hlds__make_hlds__add_pragma__Name_267, hlds__make_hlds__add_pragma__Arity_265, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 7, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[152]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 162 "add_pragma.m"
                return;
              }
#line 160 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 8:
#line 168 "add_pragma.m"
            {
#line 168 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__UnusedArgsInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 169 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ImportStatus_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 169 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 175 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 171 "add_pragma.m"
                {
#line 171 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Msg_48;
#line 171 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Spec_49;
#line 171 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__V_214_214;

#line 172 "add_pragma.m"
                  {
#line 172 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 172 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 172 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[154])));
#line 172 "add_pragma.m"
                  }
#line 173 "add_pragma.m"
                  {
#line 173 "add_pragma.m"
                    hlds__make_hlds__add_pragma__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_214_214, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_48));
#line 173 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_214_214, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 173 "add_pragma.m"
                  }
#line 173 "add_pragma.m"
                  {
#line 173 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 173 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 173 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 173 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_49, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_214_214));
#line 173 "add_pragma.m"
                  }
#line 174 "add_pragma.m"
                  {
#line 174 "add_pragma.m"
                    MR_Word base;
#line 174 "add_pragma.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = base;
#line 174 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_49));
#line 174 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72));
#line 174 "add_pragma.m"
                  }
#line 171 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 171 "add_pragma.m"
                }
#line 175 "add_pragma.m"
              else
#line 176 "add_pragma.m"
                {
#line 176 "add_pragma.m"
                  hlds__make_hlds__add_pragma__add_pragma_unused_args_6_p_0(hlds__make_hlds__add_pragma__UnusedArgsInfo_46, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 176 "add_pragma.m"
                  return;
                }
#line 168 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 9:
#line 180 "add_pragma.m"
            {
#line 180 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__ExceptionsInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 181 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ImportStatus_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 187 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 183 "add_pragma.m"
                {
#line 183 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__V_195_195;
#line 183 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Msg_269;
#line 183 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Spec_270;

#line 184 "add_pragma.m"
                  {
#line 184 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Msg_269 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 184 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_269, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 184 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_269, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[149])));
#line 184 "add_pragma.m"
                  }
#line 185 "add_pragma.m"
                  {
#line 185 "add_pragma.m"
                    hlds__make_hlds__add_pragma__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_195_195, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_269));
#line 185 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_195_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "add_pragma.m"
                  }
#line 185 "add_pragma.m"
                  {
#line 185 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Spec_270 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 185 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_270, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_270, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 185 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_270, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_195_195));
#line 185 "add_pragma.m"
                  }
#line 186 "add_pragma.m"
                  {
#line 186 "add_pragma.m"
                    MR_Word base;
#line 186 "add_pragma.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = base;
#line 186 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_270));
#line 186 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72));
#line 186 "add_pragma.m"
                  }
#line 183 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 183 "add_pragma.m"
                }
#line 187 "add_pragma.m"
              else
#line 188 "add_pragma.m"
                {
#line 188 "add_pragma.m"
                  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__ExceptionsInfo_50, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 188 "add_pragma.m"
                  return;
                }
#line 180 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 10:
#line 191 "add_pragma.m"
            {
#line 191 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__TrailingInfo_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 192 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ImportStatus_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 198 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 194 "add_pragma.m"
                {
#line 194 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__V_176_176;
#line 194 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Msg_278;
#line 194 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Spec_279;

#line 195 "add_pragma.m"
                  {
#line 195 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Msg_278 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 195 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_278, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 195 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_278, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[153])));
#line 195 "add_pragma.m"
                  }
#line 196 "add_pragma.m"
                  {
#line 196 "add_pragma.m"
                    hlds__make_hlds__add_pragma__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_176_176, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_278));
#line 196 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_176_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "add_pragma.m"
                  }
#line 196 "add_pragma.m"
                  {
#line 196 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Spec_279 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 196 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_279, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 196 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_279, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_176_176));
#line 196 "add_pragma.m"
                  }
#line 197 "add_pragma.m"
                  {
#line 197 "add_pragma.m"
                    MR_Word base;
#line 197 "add_pragma.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = base;
#line 197 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_279));
#line 197 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72));
#line 197 "add_pragma.m"
                  }
#line 194 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 194 "add_pragma.m"
                }
#line 198 "add_pragma.m"
              else
#line 199 "add_pragma.m"
                {
#line 199 "add_pragma.m"
                  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__TrailingInfo_51, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 199 "add_pragma.m"
                  return;
                }
#line 191 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 11:
#line 203 "add_pragma.m"
            {
#line 203 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__MMTablingInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

#line 204 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ImportStatus_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "add_pragma.m"
              hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
#line 210 "add_pragma.m"
              if (hlds__make_hlds__add_pragma__succeeded)
#line 206 "add_pragma.m"
                {
#line 206 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__V_157_157;
#line 206 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Msg_287;
#line 206 "add_pragma.m"
                  MR_Word hlds__make_hlds__add_pragma__Spec_288;

#line 207 "add_pragma.m"
                  {
#line 207 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Msg_287 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_287, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
#line 207 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_287, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[151])));
#line 207 "add_pragma.m"
                  }
#line 208 "add_pragma.m"
                  {
#line 208 "add_pragma.m"
                    hlds__make_hlds__add_pragma__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_287));
#line 208 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "add_pragma.m"
                  }
#line 208 "add_pragma.m"
                  {
#line 208 "add_pragma.m"
                    hlds__make_hlds__add_pragma__Spec_288 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 208 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_288, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_288, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 208 "add_pragma.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_288, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__V_157_157));
#line 208 "add_pragma.m"
                  }
#line 209 "add_pragma.m"
                  {
#line 209 "add_pragma.m"
                    MR_Word base;
#line 209 "add_pragma.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "add_pragma.m"
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = base;
#line 209 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_288));
#line 209 "add_pragma.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72));
#line 209 "add_pragma.m"
                  }
#line 206 "add_pragma.m"
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 206 "add_pragma.m"
                }
#line 210 "add_pragma.m"
              else
#line 211 "add_pragma.m"
                {
#line 211 "add_pragma.m"
                  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__MMTablingInfo_52, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 211 "add_pragma.m"
                  return;
                }
#line 203 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 12:
#line 215 "add_pragma.m"
            {
#line 215 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_295;
#line 215 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_296 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 215 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_296, (MR_Integer) 0)));

#line 216 "add_pragma.m"
              hlds__make_hlds__add_pragma__Arity_295 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_296, (MR_Integer) 1)));
#line 217 "add_pragma.m"
              {
#line 217 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "obsolete", hlds__make_hlds__add_pragma__Name_297, hlds__make_hlds__add_pragma__Arity_295, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 217 "add_pragma.m"
                return;
              }
#line 215 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 13:
#line 220 "add_pragma.m"
            {
#line 220 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_298;
#line 220 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_299 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 220 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_299, (MR_Integer) 0)));

#line 221 "add_pragma.m"
              hlds__make_hlds__add_pragma__Arity_298 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_299, (MR_Integer) 1)));
#line 222 "add_pragma.m"
              {
#line 222 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "no_determinism_warning", hlds__make_hlds__add_pragma__Name_300, hlds__make_hlds__add_pragma__Arity_298, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 222 "add_pragma.m"
                return;
              }
#line 220 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 14:
#line 292 "add_pragma.m"
            {
#line 292 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 292 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 292 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 15:
#line 293 "add_pragma.m"
            {
#line 293 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 293 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 293 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 16:
#line 299 "add_pragma.m"
            {
#line 299 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 299 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 299 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 17:
#line 225 "add_pragma.m"
            {
#line 225 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_301;
#line 225 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_302 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 225 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_302, (MR_Integer) 0)));

#line 226 "add_pragma.m"
              hlds__make_hlds__add_pragma__Arity_301 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_302, (MR_Integer) 1)));
#line 227 "add_pragma.m"
              {
#line 227 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "promise_equivalent_clauses", hlds__make_hlds__add_pragma__Name_303, hlds__make_hlds__add_pragma__Arity_301, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 227 "add_pragma.m"
                return;
              }
#line 225 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 18:
#line 231 "add_pragma.m"
            {
#line 231 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_304;
#line 231 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_305 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 231 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_305, (MR_Integer) 0)));

#line 232 "add_pragma.m"
              hlds__make_hlds__add_pragma__Arity_304 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_305, (MR_Integer) 1)));
#line 233 "add_pragma.m"
              {
#line 233 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "promise_pure", hlds__make_hlds__add_pragma__Name_306, hlds__make_hlds__add_pragma__Arity_304, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 233 "add_pragma.m"
                return;
              }
#line 231 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 19:
#line 236 "add_pragma.m"
            {
#line 236 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_307;
#line 236 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_308 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 236 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_308, (MR_Integer) 0)));

#line 237 "add_pragma.m"
              hlds__make_hlds__add_pragma__Arity_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_308, (MR_Integer) 1)));
#line 238 "add_pragma.m"
              {
#line 238 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "promise_semipure", hlds__make_hlds__add_pragma__Name_309, hlds__make_hlds__add_pragma__Arity_307, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 238 "add_pragma.m"
                return;
              }
#line 236 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 20:
#line 305 "add_pragma.m"
            {
#line 305 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 305 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 305 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 21:
#line 306 "add_pragma.m"
            {
#line 306 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 306 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 306 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 22:
#line 241 "add_pragma.m"
            {
#line 241 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_310;
#line 241 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_311 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 241 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_311, (MR_Integer) 0)));

#line 242 "add_pragma.m"
              hlds__make_hlds__add_pragma__Arity_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_311, (MR_Integer) 1)));
#line 243 "add_pragma.m"
              {
#line 243 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "terminates", hlds__make_hlds__add_pragma__Name_312, hlds__make_hlds__add_pragma__Arity_310, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 17, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[25]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 243 "add_pragma.m"
                return;
              }
#line 241 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 23:
#line 248 "add_pragma.m"
            {
#line 248 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_313;
#line 248 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 248 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_314, (MR_Integer) 0)));

#line 249 "add_pragma.m"
              hlds__make_hlds__add_pragma__Arity_313 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_314, (MR_Integer) 1)));
#line 250 "add_pragma.m"
              {
#line 250 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "does_not_terminate", hlds__make_hlds__add_pragma__Name_315, hlds__make_hlds__add_pragma__Arity_313, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[5]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 250 "add_pragma.m"
                return;
              }
#line 248 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 24:
#line 254 "add_pragma.m"
            {
#line 254 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_316;
#line 254 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_317 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 254 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_317, (MR_Integer) 0)));

#line 255 "add_pragma.m"
              hlds__make_hlds__add_pragma__Arity_316 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_317, (MR_Integer) 1)));
#line 256 "add_pragma.m"
              {
#line 256 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "check_termination", hlds__make_hlds__add_pragma__Name_318, hlds__make_hlds__add_pragma__Arity_316, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[3]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 256 "add_pragma.m"
                return;
              }
#line 254 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 25:
#line 261 "add_pragma.m"
            {
#line 261 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_82_82;
#line 261 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_83_83;
#line 261 "add_pragma.m"
              MR_Integer hlds__make_hlds__add_pragma__Arity_319;
#line 261 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_320 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 261 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__Name_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_320, (MR_Integer) 0)));

#line 262 "add_pragma.m"
              hlds__make_hlds__add_pragma__Arity_319 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_320, (MR_Integer) 1)));
#line 263 "add_pragma.m"
              {
#line 263 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "mode_check_clauses", hlds__make_hlds__add_pragma__Name_321, hlds__make_hlds__add_pragma__Arity_319, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_83_83);
              }
#line 271 "add_pragma.m"
              {
#line 271 "add_pragma.m"
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "mode_check_clauses", hlds__make_hlds__add_pragma__Name_321, hlds__make_hlds__add_pragma__Arity_319, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 7, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[152]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_83_83, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 271 "add_pragma.m"
                return;
              }
#line 261 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 26:
#line 311 "add_pragma.m"
            {
#line 311 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 311 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 311 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 27:
#line 312 "add_pragma.m"
            {
#line 312 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 312 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 312 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 28:
#line 298 "add_pragma.m"
            {
#line 298 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68;
#line 298 "add_pragma.m"
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72;
#line 298 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
          case (MR_Integer) 29:
#line 275 "add_pragma.m"
            {
#line 275 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__RFSInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
#line 275 "add_pragma.m"
              MR_Word hlds__make_hlds__add_pragma__FeatureSet_54 = (MR_Word) hlds__make_hlds__add_pragma__RFSInfo_53;

#line 277 "add_pragma.m"
              {
#line 277 "add_pragma.m"
                hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0(hlds__make_hlds__add_pragma__FeatureSet_54, hlds__make_hlds__add_pragma__ImportStatus_15, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_68, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_69, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_72_72, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_71);
#line 277 "add_pragma.m"
                return;
              }
#line 275 "add_pragma.m"
            }
#line 98 "add_pragma.m"
            break;
#line 98 "add_pragma.m"
        }
#line 98 "add_pragma.m"
        break;
#line 98 "add_pragma.m"
    }
#line 72 "add_pragma.m"
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
