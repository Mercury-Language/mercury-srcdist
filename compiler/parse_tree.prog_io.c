/*
** Automatically generated from `prog_io.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module parse_tree.prog_io. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io__init
ENDINIT
*/

#include "parse_tree.prog_io.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "lexer.mih"
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
#include "parser.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
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
#include "libs.file_util.mih"
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
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_item.mih"
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




#line 140 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 143 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 146 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0;

#line 149 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 152 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_1[1];

#line 155 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1;

#line 158 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_2[1];

#line 161 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2;

#line 164 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_0[1];

#line 167 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_1[1];

#line 170 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_2[1];

#line 173 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_item_result_0[3];

#line 176 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_item_result_0[3];

#line 179 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_item_result_0[3];

#line 182 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0_10001(
#line 185 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 187 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 190 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0_10001(
#line 193 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 195 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 197 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 468 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_115_95_108_111_111_112_95_95_91_52_93_95_48_14_p_0(
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_28,
#line 468 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29,
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_30,
#line 468 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_31,
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_32,
#line 468 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_33,
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_34,
#line 468 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_35,
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_36,
#line 468 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37);

#line 199 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_15,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_16,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeOldTimestamp_17,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnTimestamp_18,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_19,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_20,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_21,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_22,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_23,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_24);

#line 505 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0(
#line 505 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 505 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 505 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 505 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0(
#line 505 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 505 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 765 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_include_module_decl_4_p_0(
#line 765 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 765 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 765 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 765 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8);

#line 757 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_use_module_decl_4_p_0(
#line 757 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 757 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 757 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 757 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8);

#line 749 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_import_module_decl_4_p_0(
#line 749 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 749 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 749 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 749 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8);

#line 681 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_3(
#line 681 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 681 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 681 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 677 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_2(
#line 677 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 677 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 677 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 673 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_1(
#line 673 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 673 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 673 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 541 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0(
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__Item_16,
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93,
#line 541 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleName_94,
#line 541 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95,
#line 541 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96,
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97,
#line 541 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_98,
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_99,
#line 541 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_100,
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_101,
#line 541 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_102);

#line 510 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_item_result_6_p_0(
#line 510 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 510 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 510 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 510 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23,
#line 510 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24,
#line 510 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadItemResult_11);

#line 470 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_14_p_1(
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_28,
#line 470 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeReadTermResult_18,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_30,
#line 470 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_31,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_32,
#line 470 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_33,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_34,
#line 470 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_35,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_36,
#line 470 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37);

#line 449 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_module_decl_3_p_0(
#line 449 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_4,
#line 449 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 449 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_6);

#line 361 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_item_12_p_0(
#line 361 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 361 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39,
#line 361 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_40,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_15,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclItem_16,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeSecondTerm_17,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_18,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_19,
#line 361 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42);

#line 277 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_all_items_8_p_0(
#line 277 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_9,
#line 277 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_10,
#line 277 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_11,
#line 277 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_12,
#line 277 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_24,
#line 277 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_25);

#line 170 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_opt_file_8_p_0_1(
#line 170 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 170 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 170 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 170 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[48][2];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[1][9];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[1][1];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_5[1][7];




static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[48][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not for the until-then-current module."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and the module qualifiers"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: source file"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "contains module named"))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_4[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The module names do not match:"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "actual"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "vs"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "no qualification"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The module qualifiers"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "do not match:"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the module"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in this"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot be a submodule of the current module"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__file_util__libs__file_util__type_ctor_info_maybe_open_file_0)),
    ((MR_Box) (&parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[9])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
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



#line 789 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 797 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 806 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0 = {
  (MR_String) "read_item_eof",
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

#line 821 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 829 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 834 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1 = {
  (MR_String) "read_item_errors",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 849 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
};

#line 854 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2 = {
  (MR_String) "read_item_ok",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_2,
  NULL,
  NULL,
  NULL
};

#line 869 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0
};

#line 874 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1
};

#line 879 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_2[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2
};

#line 884 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_item_result_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_2
  }
};

#line 903 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_item_result_0[3] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2
};

#line 910 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_item_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 917 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_read_item_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io____Unify____read_item_result_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____read_item_result_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "read_item_result",
  {
    parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_item_result_0
  },
  {
    parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_item_result_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_item_result_0
};

#line 938 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0_10001(
#line 941 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 943 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 945 "parse_tree.prog_io.c"
{
#line 947 "parse_tree.prog_io.c"
  {
#line 949 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 952 "parse_tree.prog_io.c"
    {
#line 954 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____read_item_result_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 957 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 959 "parse_tree.prog_io.c"
  }
#line 961 "parse_tree.prog_io.c"
}

#line 964 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0_10001(
#line 967 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 969 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 971 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 973 "parse_tree.prog_io.c"
{
#line 975 "parse_tree.prog_io.c"
  {
#line 977 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 980 "parse_tree.prog_io.c"
    {
#line 982 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____read_item_result_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 985 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 987 "parse_tree.prog_io.c"
  }
#line 989 "parse_tree.prog_io.c"
}

#line 468 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_115_95_108_111_111_112_95_95_91_52_93_95_48_14_p_0(
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_28,
#line 468 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29,
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_30,
#line 468 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_31,
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_32,
#line 468 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_33,
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_34,
#line 468 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_35,
#line 468 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_36,
#line 468 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37)
#line 468 "prog_io.m"
{
#line 474 "prog_io.m"
  while (MR_TRUE)
#line 474 "prog_io.m"
    {
#line 474 "prog_io.m"
      /* tailcall optimized into a loop */
#line 474 "prog_io.m"
      {
#line 474 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 474 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadTermResult_24;
#line 474 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadItemResult_25;
#line 474 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41;

#line 477 "prog_io.m"
        {
#line 477 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29, &parse_tree__prog_io__ReadTermResult_24);
        }
#line 481 "prog_io.m"
        {
#line 481 "prog_io.m"
          parse_tree__prog_io__read_term_to_item_result_6_p_0(parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_28, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29, parse_tree__prog_io__ReadTermResult_24, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_36, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41, &parse_tree__prog_io__ReadItemResult_25);
        }
#line 486 "prog_io.m"
        if ((parse_tree__prog_io__ReadItemResult_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "prog_io.m"
          {
#line 484 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_RevItems_31 = parse_tree__prog_io__STATE_VARIABLE_RevItems_0_30;
#line 484 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_33 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_32;
#line 484 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Error_35 = parse_tree__prog_io__STATE_VARIABLE_Error_0_34;
#line 484 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41;
#line 484 "prog_io.m"
          }
#line 486 "prog_io.m"
        else
#line 486 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__ReadItemResult_25)) == (MR_mktag((MR_Integer) 1))))
#line 490 "prog_io.m"
            {
#line 490 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSpecs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadItemResult_25, (MR_Integer) 0)));
#line 490 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_54_54;

#line 491 "prog_io.m"
              {
#line 491 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_26, parse_tree__prog_io__STATE_VARIABLE_Specs_0_32);
              }
#line 493 "prog_io.m"
              /* direct tailcall eliminated */
#line 493 "prog_io.m"
              {
#line 493 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_32 = parse_tree__prog_io__STATE_VARIABLE_Specs_54_54;
#line 493 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_36 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41;

#line 493 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_36 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_36;
#line 493 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Error_0_34 = (MR_Integer) 1;
#line 493 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_32 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_32;
#line 493 "prog_io.m"
              }
#line 493 "prog_io.m"
              continue;
#line 490 "prog_io.m"
            }
#line 486 "prog_io.m"
          else
#line 496 "prog_io.m"
            {
#line 496 "prog_io.m"
              MR_Word parse_tree__prog_io__Item_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadItemResult_25, (MR_Integer) 0)));
#line 496 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_44_44;
#line 496 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_45_45;
#line 496 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_46_46;
#line 496 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_42_66;
#line 496 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_43_67;

#line 497 "prog_io.m"
              {
#line 497 "prog_io.m"
                parse_tree__prog_io__process_one_item_in_loop_14_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__Item_27, parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_28, &parse_tree__prog_io__STATE_VARIABLE_ModuleName_42_66, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_43_67, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_30, &parse_tree__prog_io__STATE_VARIABLE_RevItems_44_44, parse_tree__prog_io__STATE_VARIABLE_Specs_0_32, &parse_tree__prog_io__STATE_VARIABLE_Specs_45_45, parse_tree__prog_io__STATE_VARIABLE_Error_0_34, &parse_tree__prog_io__STATE_VARIABLE_Error_46_46);
              }
#line 499 "prog_io.m"
              /* direct tailcall eliminated */
#line 499 "prog_io.m"
              {
#line 499 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0__tmp_copy_28 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_42_66;
#line 499 "prog_io.m"
                MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_29 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_43_67;
#line 499 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0__tmp_copy_30 = parse_tree__prog_io__STATE_VARIABLE_RevItems_44_44;
#line 499 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_32 = parse_tree__prog_io__STATE_VARIABLE_Specs_45_45;
#line 499 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0__tmp_copy_34 = parse_tree__prog_io__STATE_VARIABLE_Error_46_46;
#line 499 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_36 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41;

#line 499 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_36 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_36;
#line 499 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Error_0_34 = parse_tree__prog_io__STATE_VARIABLE_Error_0__tmp_copy_34;
#line 499 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_32 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_32;
#line 499 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_RevItems_0_30 = parse_tree__prog_io__STATE_VARIABLE_RevItems_0__tmp_copy_30;
#line 499 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_29;
#line 499 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_28 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0__tmp_copy_28;
#line 499 "prog_io.m"
              }
#line 499 "prog_io.m"
              continue;
#line 496 "prog_io.m"
            }
#line 474 "prog_io.m"
      }
#line 474 "prog_io.m"
      break;
#line 474 "prog_io.m"
    }
#line 468 "prog_io.m"
}

#line 199 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_15,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_16,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeOldTimestamp_17,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnTimestamp_18,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_19,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_20,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_21,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_22,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_23,
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_24)
#line 199 "prog_io.m"
{
#line 207 "prog_io.m"
  {
#line 207 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 207 "prog_io.m"
    MR_Word parse_tree__prog_io__OldInputStream_26;
#line 207 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenResult_27;
#line 209 "prog_io.m"
    void MR_CALL (* parse_tree__prog_io__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 209 "prog_io.m"
    MR_Box parse_tree__prog_io__conv2_OpenResult_27;
#line 209 "prog_io.m"
    MR_Box parse_tree__prog_io__conv1_STATE_VARIABLE_IO_42_42;

#line 208 "prog_io.m"
    {
#line 208 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__OldInputStream_26);
    }
#line 209 "prog_io.m"
    parse_tree__prog_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_15, (MR_Integer) 1)));
#line 209 "prog_io.m"
    {
#line 209 "prog_io.m"
      parse_tree__prog_io__func_0(((MR_Box) parse_tree__prog_io__OpenFile_15), &parse_tree__prog_io__conv2_OpenResult_27, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_io__conv1_STATE_VARIABLE_IO_42_42);
    }
#line 209 "prog_io.m"
    parse_tree__prog_io__OpenResult_27 = ((MR_Word) parse_tree__prog_io__conv2_OpenResult_27);
#line 247 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__OpenResult_27)) == (MR_mktag((MR_Integer) 1))))
#line 248 "prog_io.m"
      {
#line 248 "prog_io.m"
        MR_String parse_tree__prog_io__ErrorMsg_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0)));
#line 248 "prog_io.m"
        MR_String parse_tree__prog_io__Progname_36;
#line 248 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_37;
#line 248 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_38;
#line 248 "prog_io.m"
        MR_Word parse_tree__prog_io__V_45_45;
#line 248 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 248 "prog_io.m"
        MR_Word parse_tree__prog_io__V_49_49;
#line 248 "prog_io.m"
        MR_Word parse_tree__prog_io__V_50_50;
#line 248 "prog_io.m"
        MR_Word parse_tree__prog_io__V_56_56;
#line 248 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 248 "prog_io.m"
        MR_Word parse_tree__prog_io__V_61_61;
#line 248 "prog_io.m"
        MR_Word parse_tree__prog_io__V_62_62;

#line 249 "prog_io.m"
        *parse_tree__prog_io__MaybeFileData_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "prog_io.m"
        *parse_tree__prog_io__ModuleName_20 = parse_tree__prog_io__DefaultModuleName_16;
#line 251 "prog_io.m"
        *parse_tree__prog_io__Items_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "prog_io.m"
        *parse_tree__prog_io__MaybeModuleTimestamp_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "prog_io.m"
        {
#line 254 "prog_io.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io__Progname_36);
        }
#line 255 "prog_io.m"
        {
#line 255 "prog_io.m"
          parse_tree__prog_io__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io__Progname_36));
#line 255 "prog_io.m"
        }
#line 255 "prog_io.m"
        {
#line 255 "prog_io.m"
          parse_tree__prog_io__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_35));
#line 255 "prog_io.m"
        }
#line 255 "prog_io.m"
        {
#line 255 "prog_io.m"
          parse_tree__prog_io__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__V_50_50));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[1])));
#line 255 "prog_io.m"
        }
#line 255 "prog_io.m"
        {
#line 255 "prog_io.m"
          parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[47])));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 255 "prog_io.m"
        }
#line 255 "prog_io.m"
        {
#line 255 "prog_io.m"
          parse_tree__prog_io__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_37, 0) = ((MR_Box) (parse_tree__prog_io__V_45_45));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_37, 1) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 255 "prog_io.m"
        }
#line 257 "prog_io.m"
        {
#line 257 "prog_io.m"
          parse_tree__prog_io__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 257 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_37));
#line 257 "prog_io.m"
        }
#line 257 "prog_io.m"
        {
#line 257 "prog_io.m"
          parse_tree__prog_io__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 257 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_io.m"
        }
#line 257 "prog_io.m"
        {
#line 257 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 257 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 2) = ((MR_Box) ((MR_Integer) 0));
#line 257 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 3) = ((MR_Box) (parse_tree__prog_io__V_61_61));
#line 257 "prog_io.m"
        }
#line 257 "prog_io.m"
        {
#line 257 "prog_io.m"
          parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 257 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_io.m"
        }
#line 256 "prog_io.m"
        {
#line 256 "prog_io.m"
          parse_tree__prog_io__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 256 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 256 "prog_io.m"
        }
#line 258 "prog_io.m"
        {
#line 258 "prog_io.m"
          MR_Word base;
#line 258 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "prog_io.m"
          *parse_tree__prog_io__Specs_22 = base;
#line 258 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_38));
#line 258 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "prog_io.m"
        }
#line 259 "prog_io.m"
        *parse_tree__prog_io__Error_23 = (MR_Integer) 2;
#line 248 "prog_io.m"
      }
#line 247 "prog_io.m"
    else
#line 211 "prog_io.m"
      {
#line 211 "prog_io.m"
        MR_Box parse_tree__prog_io__FileData_28 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0));
#line 211 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleInputStream_34;
#line 229 "prog_io.m"
        MR_Word parse_tree__prog_io__OldTimestamp_33;
#line 229 "prog_io.m"
        MR_Word parse_tree__prog_io__V_71_71;
#line 229 "prog_io.m"
        MR_Word parse_tree__prog_io__V_76_76;

#line 212 "prog_io.m"
        {
#line 212 "prog_io.m"
          MR_Word base;
#line 212 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_io.m"
          *parse_tree__prog_io__MaybeFileData_19 = base;
#line 212 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_io__FileData_28;
#line 212 "prog_io.m"
        }
#line 224 "prog_io.m"
        if ((parse_tree__prog_io__ReturnTimestamp_18 == (MR_Integer) 1))
#line 226 "prog_io.m"
          *parse_tree__prog_io__MaybeModuleTimestamp_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 224 "prog_io.m"
        else
#line 214 "prog_io.m"
          {
#line 214 "prog_io.m"
            MR_String parse_tree__prog_io__InputStreamName_29;
#line 214 "prog_io.m"
            MR_Word parse_tree__prog_io__TimestampResult_30;

#line 215 "prog_io.m"
            {
#line 215 "prog_io.m"
              mercury__io__input_stream_name_3_p_0(&parse_tree__prog_io__InputStreamName_29);
            }
#line 216 "prog_io.m"
            {
#line 216 "prog_io.m"
              mercury__io__file_modification_time_4_p_0(parse_tree__prog_io__InputStreamName_29, &parse_tree__prog_io__TimestampResult_30);
            }
#line 220 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__TimestampResult_30)) == (MR_mktag((MR_Integer) 1))))
#line 221 "prog_io.m"
              {
#line 221 "prog_io.m"
                MR_Word parse_tree__prog_io__V_68_68 = (MR_Word) parse_tree__prog_io__TimestampResult_30;

#line 222 "prog_io.m"
                {
#line 222 "prog_io.m"
                  MR_Word base;
#line 222 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 222 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestamp_24 = base;
#line 222 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 222 "prog_io.m"
                }
#line 221 "prog_io.m"
              }
#line 220 "prog_io.m"
            else
#line 218 "prog_io.m"
              {
#line 218 "prog_io.m"
                MR_Word parse_tree__prog_io__Timestamp_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__TimestampResult_30, (MR_Integer) 0)));
#line 218 "prog_io.m"
                MR_Word parse_tree__prog_io__V_69_69;
#line 218 "prog_io.m"
                MR_Word parse_tree__prog_io__V_70_70;

#line 219 "prog_io.m"
                {
#line 219 "prog_io.m"
                  parse_tree__prog_io__V_70_70 = libs__timestamp__time_t_to_timestamp_1_f_0(parse_tree__prog_io__Timestamp_31);
                }
#line 219 "prog_io.m"
                {
#line 219 "prog_io.m"
                  parse_tree__prog_io__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 219 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io__V_70_70));
#line 219 "prog_io.m"
                }
#line 219 "prog_io.m"
                {
#line 219 "prog_io.m"
                  MR_Word base;
#line 219 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 219 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestamp_24 = base;
#line 219 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_69_69));
#line 219 "prog_io.m"
                }
#line 218 "prog_io.m"
              }
#line 214 "prog_io.m"
          }
#line 229 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeOldTimestamp_17)) == (MR_mktag((MR_Integer) 1)));
#line 229 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 229 "prog_io.m"
          {
#line 229 "prog_io.m"
            parse_tree__prog_io__OldTimestamp_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeOldTimestamp_17, (MR_Integer) 0)));
#line 230 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_io__MaybeModuleTimestamp_24)) == (MR_mktag((MR_Integer) 1)));
#line 230 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 230 "prog_io.m"
              {
#line 230 "prog_io.m"
                parse_tree__prog_io__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io__MaybeModuleTimestamp_24, (MR_Integer) 0)));
#line 230 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_71_71)) == (MR_mktag((MR_Integer) 0)));
#line 230 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 230 "prog_io.m"
                  {
#line 230 "prog_io.m"
                    parse_tree__prog_io__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_71_71, (MR_Integer) 0)));
#line 230 "prog_io.m"
                    {
#line 230 "prog_io.m"
                      parse_tree__prog_io__succeeded = libs__timestamp____Unify____timestamp_0_0(parse_tree__prog_io__OldTimestamp_33, parse_tree__prog_io__V_76_76);
                    }
#line 230 "prog_io.m"
                  }
#line 230 "prog_io.m"
              }
#line 229 "prog_io.m"
          }
#line 241 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 237 "prog_io.m"
          {
#line 237 "prog_io.m"
            *parse_tree__prog_io__ModuleName_20 = parse_tree__prog_io__DefaultModuleName_16;
#line 238 "prog_io.m"
            *parse_tree__prog_io__Items_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 239 "prog_io.m"
            *parse_tree__prog_io__Specs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 240 "prog_io.m"
            *parse_tree__prog_io__Error_23 = (MR_Integer) 0;
#line 237 "prog_io.m"
          }
#line 241 "prog_io.m"
        else
#line 242 "prog_io.m"
          {
#line 242 "prog_io.m"
            parse_tree__prog_io__read_all_items_8_p_0(parse_tree__prog_io__Globals_14, parse_tree__prog_io__DefaultModuleName_16, parse_tree__prog_io__ModuleName_20, parse_tree__prog_io__Items_21, parse_tree__prog_io__Specs_22, parse_tree__prog_io__Error_23);
          }
#line 245 "prog_io.m"
        {
#line 245 "prog_io.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io__OldInputStream_26, &parse_tree__prog_io__ModuleInputStream_34);
        }
#line 246 "prog_io.m"
        {
#line 246 "prog_io.m"
          mercury__io__close_input_3_p_0(parse_tree__prog_io__ModuleInputStream_34);
#line 246 "prog_io.m"
          return;
        }
#line 211 "prog_io.m"
      }
#line 207 "prog_io.m"
  }
#line 199 "prog_io.m"
}

#line 505 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0(
#line 505 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 505 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 505 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 505 "prog_io.m"
{
#line 505 "prog_io.m"
  {
#line 505 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 505 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_16 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 505 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_17 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 505 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_16 == parse_tree__prog_io__CastY_17);
#line 505 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1591 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 505 "prog_io.m"
    else
#line 505 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "prog_io.m"
        if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "prog_io.m"
          *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 505 "prog_io.m"
        else
#line 505 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1605 "parse_tree.prog_io.c"
            *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 505 "prog_io.m"
          else
#line 1609 "parse_tree.prog_io.c"
            *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 505 "prog_io.m"
      else
#line 505 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 505 "prog_io.m"
          {
#line 505 "prog_io.m"
            MR_Word parse_tree__prog_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 505 "prog_io.m"
            if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1622 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 505 "prog_io.m"
            else
#line 505 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 505 "prog_io.m"
                {
#line 505 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));

#line 505 "prog_io.m"
                  {
#line 505 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_20_20)), ((MR_Box) (parse_tree__prog_io__V_8_8)));
#line 505 "prog_io.m"
                    return;
                  }
#line 505 "prog_io.m"
                }
#line 505 "prog_io.m"
              else
#line 1644 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 505 "prog_io.m"
          }
#line 505 "prog_io.m"
        else
#line 505 "prog_io.m"
          {
#line 505 "prog_io.m"
            MR_Word parse_tree__prog_io__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 505 "prog_io.m"
            if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1657 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 505 "prog_io.m"
            else
#line 505 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1663 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 505 "prog_io.m"
              else
#line 505 "prog_io.m"
                {
#line 505 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));

#line 505 "prog_io.m"
                  {
#line 505 "prog_io.m"
                    parse_tree__prog_item____Compare____item_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_21_21, parse_tree__prog_io__V_15_15);
#line 505 "prog_io.m"
                    return;
                  }
#line 505 "prog_io.m"
                }
#line 505 "prog_io.m"
          }
#line 505 "prog_io.m"
  }
#line 505 "prog_io.m"
}

#line 505 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0(
#line 505 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 505 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 505 "prog_io.m"
{
#line 505 "prog_io.m"
  {
#line 505 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 505 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_9 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 505 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 505 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_9 == parse_tree__prog_io__CastY_10);
#line 505 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 505 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 505 "prog_io.m"
    else
#line 505 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "prog_io.m"
        {
#line 505 "prog_io.m"
          MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 505 "prog_io.m"
          MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 505 "prog_io.m"
          parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 505 "prog_io.m"
        }
#line 505 "prog_io.m"
      else
#line 505 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 505 "prog_io.m"
          {
#line 505 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_11_11;
#line 505 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 505 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6;

#line 505 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 505 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 505 "prog_io.m"
              {
#line 505 "prog_io.m"
                parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1748 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_io_scalar_common_1[0];
#line 1750 "parse_tree.prog_io.c"
                {
#line 1752 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_11_11, ((MR_Box) (parse_tree__prog_io__V_5_5)), ((MR_Box) (parse_tree__prog_io__V_6_6)));
                }
#line 505 "prog_io.m"
              }
#line 505 "prog_io.m"
          }
#line 505 "prog_io.m"
        else
#line 505 "prog_io.m"
          {
#line 505 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 505 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8;

#line 505 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 505 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 505 "prog_io.m"
              {
#line 505 "prog_io.m"
                parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1776 "parse_tree.prog_io.c"
                {
#line 1778 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__prog_item____Unify____item_0_0(parse_tree__prog_io__V_7_7, parse_tree__prog_io__V_8_8);
                }
#line 505 "prog_io.m"
              }
#line 505 "prog_io.m"
          }
#line 505 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 505 "prog_io.m"
  }
#line 505 "prog_io.m"
}

#line 765 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_include_module_decl_4_p_0(
#line 765 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 765 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 765 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 765 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8)
#line 765 "prog_io.m"
{
#line 768 "prog_io.m"
  {
#line 768 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 768 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDefn_9;
#line 768 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleDefn_10;
#line 768 "prog_io.m"
    MR_Word parse_tree__prog_io__V_11_11;

#line 769 "prog_io.m"
    {
#line 769 "prog_io.m"
      parse_tree__prog_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 0) = ((MR_Box) (parse_tree__prog_io__ModuleSpecifier_7));
#line 769 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "prog_io.m"
    }
#line 769 "prog_io.m"
    {
#line 769 "prog_io.m"
      parse_tree__prog_io__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 769 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 1) = ((MR_Box) (parse_tree__prog_io__V_11_11));
#line 769 "prog_io.m"
    }
#line 770 "prog_io.m"
    {
#line 770 "prog_io.m"
      parse_tree__prog_io__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 770 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_9));
#line 770 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 770 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_6));
#line 770 "prog_io.m"
    }
#line 771 "prog_io.m"
    *parse_tree__prog_io__Item_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_10);
#line 768 "prog_io.m"
  }
#line 765 "prog_io.m"
}

#line 757 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_use_module_decl_4_p_0(
#line 757 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 757 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 757 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 757 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8)
#line 757 "prog_io.m"
{
#line 760 "prog_io.m"
  {
#line 760 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 760 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDefn_9;
#line 760 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleDefn_10;
#line 760 "prog_io.m"
    MR_Word parse_tree__prog_io__V_11_11;

#line 761 "prog_io.m"
    {
#line 761 "prog_io.m"
      parse_tree__prog_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 0) = ((MR_Box) (parse_tree__prog_io__ModuleSpecifier_7));
#line 761 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "prog_io.m"
    }
#line 761 "prog_io.m"
    {
#line 761 "prog_io.m"
      parse_tree__prog_io__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 761 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 1) = ((MR_Box) (parse_tree__prog_io__V_11_11));
#line 761 "prog_io.m"
    }
#line 762 "prog_io.m"
    {
#line 762 "prog_io.m"
      parse_tree__prog_io__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 762 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_9));
#line 762 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 762 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_6));
#line 762 "prog_io.m"
    }
#line 763 "prog_io.m"
    *parse_tree__prog_io__Item_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_10);
#line 760 "prog_io.m"
  }
#line 757 "prog_io.m"
}

#line 749 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_import_module_decl_4_p_0(
#line 749 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 749 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 749 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 749 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8)
#line 749 "prog_io.m"
{
#line 752 "prog_io.m"
  {
#line 752 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 752 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDefn_9;
#line 752 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleDefn_10;
#line 752 "prog_io.m"
    MR_Word parse_tree__prog_io__V_11_11;

#line 753 "prog_io.m"
    {
#line 753 "prog_io.m"
      parse_tree__prog_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 0) = ((MR_Box) (parse_tree__prog_io__ModuleSpecifier_7));
#line 753 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "prog_io.m"
    }
#line 753 "prog_io.m"
    {
#line 753 "prog_io.m"
      parse_tree__prog_io__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 753 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 1) = ((MR_Box) (parse_tree__prog_io__V_11_11));
#line 753 "prog_io.m"
    }
#line 754 "prog_io.m"
    {
#line 754 "prog_io.m"
      parse_tree__prog_io__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 754 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_9));
#line 754 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 754 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_6));
#line 754 "prog_io.m"
    }
#line 755 "prog_io.m"
    *parse_tree__prog_io__Item_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_10);
#line 752 "prog_io.m"
  }
#line 749 "prog_io.m"
}

#line 681 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_3(
#line 681 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 681 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 681 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 681 "prog_io.m"
{
#line 681 "prog_io.m"
  {
#line 681 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 681 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_Item_8;

#line 681 "prog_io.m"
    {
#line 681 "prog_io.m"
      parse_tree__prog_io__make_pseudo_include_module_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv2_Item_8);
    }
#line 681 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv2_Item_8));
#line 681 "prog_io.m"
  }
#line 681 "prog_io.m"
}

#line 677 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_2(
#line 677 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 677 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 677 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 677 "prog_io.m"
{
#line 677 "prog_io.m"
  {
#line 677 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 677 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_Item_8;

#line 677 "prog_io.m"
    {
#line 677 "prog_io.m"
      parse_tree__prog_io__make_pseudo_use_module_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv1_Item_8);
    }
#line 677 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv1_Item_8));
#line 677 "prog_io.m"
  }
#line 677 "prog_io.m"
}

#line 673 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_1(
#line 673 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 673 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 673 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 673 "prog_io.m"
{
#line 673 "prog_io.m"
  {
#line 673 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 673 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_Item_8;

#line 673 "prog_io.m"
    {
#line 673 "prog_io.m"
      parse_tree__prog_io__make_pseudo_import_module_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_Item_8);
    }
#line 673 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_Item_8));
#line 673 "prog_io.m"
  }
#line 673 "prog_io.m"
}

#line 541 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0(
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__Item_16,
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93,
#line 541 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleName_94,
#line 541 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95,
#line 541 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96,
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97,
#line 541 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_98,
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_99,
#line 541 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_100,
#line 541 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_101,
#line 541 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_102)
#line 541 "prog_io.m"
{
#line 548 "prog_io.m"
  {
#line 548 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 588 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 2))))
#line 670 "prog_io.m"
      {
#line 670 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemModuleDefn_55 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_16), (MR_Integer) 2);
#line 670 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleDefn_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_55, (MR_Integer) 0)));
#line 670 "prog_io.m"
        MR_Word parse_tree__prog_io__Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_55, (MR_Integer) 1)));
#line 670 "prog_io.m"
        MR_Integer parse_tree__prog_io__SeqNum_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_55, (MR_Integer) 2)));
#line 676 "prog_io.m"
        MR_Word parse_tree__prog_io__Modules_59;

#line 672 "prog_io.m"
        parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__ModuleDefn_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 672 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 672 "prog_io.m"
          {
#line 672 "prog_io.m"
            parse_tree__prog_io__Modules_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 1)));
#line 674 "prog_io.m"
            {
#line 674 "prog_io.m"
              MR_Word parse_tree__prog_io__TypeCtorInfo_290_290;
#line 674 "prog_io.m"
              MR_Word parse_tree__prog_io__ImportItems_60;
#line 674 "prog_io.m"
              MR_Word parse_tree__prog_io__V_130_130;

#line 673 "prog_io.m"
              {
#line 673 "prog_io.m"
                parse_tree__prog_io__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 673 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_130_130, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_5[0]));
#line 673 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_130_130, 1) = ((MR_Box) (parse_tree__prog_io__process_one_item_in_loop_14_p_0_1));
#line 673 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_130_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 673 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_130_130, 3) = ((MR_Box) (parse_tree__prog_io__Context_57));
#line 673 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_130_130, 4) = ((MR_Box) (parse_tree__prog_io__SeqNum_58));
#line 673 "prog_io.m"
              }
#line 2153 "parse_tree.prog_io.c"
              parse_tree__prog_io__TypeCtorInfo_290_290 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 673 "prog_io.m"
              {
#line 673 "prog_io.m"
                mercury__list__map_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io__TypeCtorInfo_290_290, parse_tree__prog_io__V_130_130, parse_tree__prog_io__Modules_59, &parse_tree__prog_io__ImportItems_60);
              }
#line 675 "prog_io.m"
              {
#line 675 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_290_290, parse_tree__prog_io__ImportItems_60, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97);
              }
#line 674 "prog_io.m"
            }
#line 672 "prog_io.m"
          }
#line 672 "prog_io.m"
        else
#line 680 "prog_io.m"
          {
#line 680 "prog_io.m"
            MR_Word parse_tree__prog_io__Modules_270;

#line 676 "prog_io.m"
            parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__ModuleDefn_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 676 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 676 "prog_io.m"
              {
#line 676 "prog_io.m"
                parse_tree__prog_io__Modules_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 1)));
#line 678 "prog_io.m"
                {
#line 678 "prog_io.m"
                  MR_Word parse_tree__prog_io__TypeCtorInfo_294_294;
#line 678 "prog_io.m"
                  MR_Word parse_tree__prog_io__UseItems_61;
#line 678 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_132_132;

#line 677 "prog_io.m"
                  {
#line 677 "prog_io.m"
                    parse_tree__prog_io__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 677 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_132_132, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_5[0]));
#line 677 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_132_132, 1) = ((MR_Box) (parse_tree__prog_io__process_one_item_in_loop_14_p_0_2));
#line 677 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_132_132, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 677 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_132_132, 3) = ((MR_Box) (parse_tree__prog_io__Context_57));
#line 677 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_132_132, 4) = ((MR_Box) (parse_tree__prog_io__SeqNum_58));
#line 677 "prog_io.m"
                  }
#line 2209 "parse_tree.prog_io.c"
                  parse_tree__prog_io__TypeCtorInfo_294_294 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 677 "prog_io.m"
                  {
#line 677 "prog_io.m"
                    mercury__list__map_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io__TypeCtorInfo_294_294, parse_tree__prog_io__V_132_132, parse_tree__prog_io__Modules_270, &parse_tree__prog_io__UseItems_61);
                  }
#line 679 "prog_io.m"
                  {
#line 679 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_294_294, parse_tree__prog_io__UseItems_61, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97);
                  }
#line 678 "prog_io.m"
                }
#line 676 "prog_io.m"
              }
#line 676 "prog_io.m"
            else
#line 684 "prog_io.m"
              {
#line 684 "prog_io.m"
                MR_Word parse_tree__prog_io__Modules_269;

#line 680 "prog_io.m"
                parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__ModuleDefn_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 680 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 680 "prog_io.m"
                  {
#line 680 "prog_io.m"
                    parse_tree__prog_io__Modules_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 1)));
#line 682 "prog_io.m"
                    {
#line 682 "prog_io.m"
                      MR_Word parse_tree__prog_io__TypeCtorInfo_298_298;
#line 682 "prog_io.m"
                      MR_Word parse_tree__prog_io__IncludeItems_62;
#line 682 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_134_134;

#line 681 "prog_io.m"
                      {
#line 681 "prog_io.m"
                        parse_tree__prog_io__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 681 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_134_134, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_5[0]));
#line 681 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_134_134, 1) = ((MR_Box) (parse_tree__prog_io__process_one_item_in_loop_14_p_0_3));
#line 681 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_134_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 681 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_134_134, 3) = ((MR_Box) (parse_tree__prog_io__Context_57));
#line 681 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_134_134, 4) = ((MR_Box) (parse_tree__prog_io__SeqNum_58));
#line 681 "prog_io.m"
                      }
#line 2265 "parse_tree.prog_io.c"
                      parse_tree__prog_io__TypeCtorInfo_298_298 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 681 "prog_io.m"
                      {
#line 681 "prog_io.m"
                        mercury__list__map_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io__TypeCtorInfo_298_298, parse_tree__prog_io__V_134_134, parse_tree__prog_io__Modules_269, &parse_tree__prog_io__IncludeItems_62);
                      }
#line 683 "prog_io.m"
                      {
#line 683 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_298_298, parse_tree__prog_io__IncludeItems_62, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97);
                      }
#line 682 "prog_io.m"
                    }
#line 680 "prog_io.m"
                  }
#line 680 "prog_io.m"
                else
#line 685 "prog_io.m"
                  {
#line 685 "prog_io.m"
                    MR_Word base;
#line 685 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 685 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 685 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 685 "prog_io.m"
                  }
#line 684 "prog_io.m"
              }
#line 680 "prog_io.m"
          }
#line 685 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93;
#line 685 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 685 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 685 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Error_102 = parse_tree__prog_io__STATE_VARIABLE_Error_0_101;
#line 670 "prog_io.m"
      }
#line 588 "prog_io.m"
    else
#line 588 "prog_io.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 1))))
#line 589 "prog_io.m"
        {
#line 589 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemModuleEnd_33 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_16), (MR_Integer) 1);
#line 589 "prog_io.m"
          MR_Word parse_tree__prog_io__EndModuleSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_33, (MR_Integer) 0)));
#line 589 "prog_io.m"
          MR_Word parse_tree__prog_io__EndQualifierList_36;
#line 589 "prog_io.m"
          MR_String parse_tree__prog_io__EndModuleName_37;
#line 589 "prog_io.m"
          MR_Word parse_tree__prog_io__CurQualifierList_38;
#line 589 "prog_io.m"
          MR_String parse_tree__prog_io__CurModuleName_39;
#line 589 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemContext_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_33, (MR_Integer) 1)));
#line 590 "prog_io.m"
          MR_Integer parse_tree__prog_io__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_33, (MR_Integer) 2)));
#line 598 "prog_io.m"
          MR_Word parse_tree__prog_io__TypeCtorInfo_283_283;

#line 591 "prog_io.m"
          {
#line 591 "prog_io.m"
            mdbcomp__sym_name__sym_name_to_qualifier_list_and_name_3_p_0(parse_tree__prog_io__EndModuleSymName_34, &parse_tree__prog_io__EndQualifierList_36, &parse_tree__prog_io__EndModuleName_37);
          }
#line 593 "prog_io.m"
          {
#line 593 "prog_io.m"
            mdbcomp__sym_name__sym_name_to_qualifier_list_and_name_3_p_0(parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93, &parse_tree__prog_io__CurQualifierList_38, &parse_tree__prog_io__CurModuleName_39);
          }
#line 598 "prog_io.m"
          parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__EndModuleName_37, parse_tree__prog_io__CurModuleName_39) == 0);
#line 598 "prog_io.m"
          if (parse_tree__prog_io__succeeded)
#line 598 "prog_io.m"
            {
#line 2352 "parse_tree.prog_io.c"
              parse_tree__prog_io__TypeCtorInfo_283_283 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 599 "prog_io.m"
              {
#line 599 "prog_io.m"
                parse_tree__prog_io__succeeded = mercury__list__sublist_2_p_0(parse_tree__prog_io__TypeCtorInfo_283_283, parse_tree__prog_io__EndQualifierList_36, parse_tree__prog_io__CurQualifierList_38);
              }
#line 598 "prog_io.m"
            }
#line 604 "prog_io.m"
          if (parse_tree__prog_io__succeeded)
#line 602 "prog_io.m"
            {
#line 602 "prog_io.m"
              MR_Word parse_tree__prog_io__V_137_137;

#line 602 "prog_io.m"
              {
#line 602 "prog_io.m"
                parse_tree__prog_io__V_137_137 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
              }
#line 601 "prog_io.m"
              {
#line 601 "prog_io.m"
                mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io__EndModuleSymName_34, parse_tree__prog_io__V_137_137, parse_tree__prog_io__STATE_VARIABLE_ModuleName_94);
              }
#line 603 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Error_102 = parse_tree__prog_io__STATE_VARIABLE_Error_0_101;
#line 603 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 602 "prog_io.m"
            }
#line 604 "prog_io.m"
          else
#line 607 "prog_io.m"
            {
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__TypeCtorInfo_286_286;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__NamePieces_42;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__QualifierPieces_43;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__V_204_204;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__V_205_205;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__V_208_208;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__V_209_209;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__V_210_210;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__V_211_211;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__V_216_216;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__Pieces_261;
#line 607 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_262;

#line 608 "prog_io.m"
              parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__EndModuleName_37, parse_tree__prog_io__CurModuleName_39) == 0);
#line 610 "prog_io.m"
              if (parse_tree__prog_io__succeeded)
#line 609 "prog_io.m"
                parse_tree__prog_io__NamePieces_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "prog_io.m"
              else
#line 611 "prog_io.m"
                {
#line 611 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_156_156;
#line 611 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_159_159;
#line 611 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_160_160;
#line 611 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_161_161;
#line 611 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_164_164;
#line 611 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_167_167;
#line 611 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_168_168;

#line 612 "prog_io.m"
                  {
#line 612 "prog_io.m"
                    parse_tree__prog_io__V_160_160 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "prog_io.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_160_160, 0) = ((MR_Box) (parse_tree__prog_io__EndModuleName_37));
#line 612 "prog_io.m"
                  }
#line 613 "prog_io.m"
                  {
#line 613 "prog_io.m"
                    parse_tree__prog_io__V_168_168 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_168_168, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_39));
#line 613 "prog_io.m"
                  }
#line 613 "prog_io.m"
                  {
#line 613 "prog_io.m"
                    parse_tree__prog_io__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_167_167, 0) = ((MR_Box) (parse_tree__prog_io__V_168_168));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "prog_io.m"
                  }
#line 613 "prog_io.m"
                  {
#line 613 "prog_io.m"
                    parse_tree__prog_io__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_164_164, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[35])));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_164_164, 1) = ((MR_Box) (parse_tree__prog_io__V_167_167));
#line 613 "prog_io.m"
                  }
#line 612 "prog_io.m"
                  {
#line 612 "prog_io.m"
                    parse_tree__prog_io__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_161_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[34])));
#line 612 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_161_161, 1) = ((MR_Box) (parse_tree__prog_io__V_164_164));
#line 612 "prog_io.m"
                  }
#line 612 "prog_io.m"
                  {
#line 612 "prog_io.m"
                    parse_tree__prog_io__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_159_159, 0) = ((MR_Box) (parse_tree__prog_io__V_160_160));
#line 612 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_159_159, 1) = ((MR_Box) (parse_tree__prog_io__V_161_161));
#line 612 "prog_io.m"
                  }
#line 612 "prog_io.m"
                  {
#line 612 "prog_io.m"
                    parse_tree__prog_io__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_156_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[33])));
#line 612 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_156_156, 1) = ((MR_Box) (parse_tree__prog_io__V_159_159));
#line 612 "prog_io.m"
                  }
#line 611 "prog_io.m"
                  {
#line 611 "prog_io.m"
                    parse_tree__prog_io__NamePieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__NamePieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[32])));
#line 611 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__NamePieces_42, 1) = ((MR_Box) (parse_tree__prog_io__V_156_156));
#line 611 "prog_io.m"
                  }
#line 611 "prog_io.m"
                }
#line 615 "prog_io.m"
              {
#line 615 "prog_io.m"
                parse_tree__prog_io__succeeded = mercury__list__sublist_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io__EndQualifierList_36, parse_tree__prog_io__CurQualifierList_38);
              }
#line 617 "prog_io.m"
              if (parse_tree__prog_io__succeeded)
#line 616 "prog_io.m"
                parse_tree__prog_io__QualifierPieces_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "prog_io.m"
              else
#line 627 "prog_io.m"
                {
#line 627 "prog_io.m"
                  MR_Word parse_tree__prog_io__EndQualifier_44;
#line 627 "prog_io.m"
                  MR_Word parse_tree__prog_io__CurQualifierPiece_49;
#line 627 "prog_io.m"
                  MR_Word parse_tree__prog_io__LinkPieces_51;
#line 627 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_183_183;
#line 627 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_186_186;
#line 627 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_189_189;
#line 627 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_190_190;
#line 627 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_191_191;
#line 627 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_194_194;
#line 627 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_197_197;

#line 620 "prog_io.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io__EndModuleSymName_34)) == (MR_mktag((MR_Integer) 1))))
#line 619 "prog_io.m"
                    {
#line 619 "prog_io.m"
                      MR_String parse_tree__prog_io__V_45_45;

#line 619 "prog_io.m"
                      parse_tree__prog_io__EndQualifier_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__EndModuleSymName_34, (MR_Integer) 0)));
#line 619 "prog_io.m"
                      parse_tree__prog_io__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__EndModuleSymName_34, (MR_Integer) 1)));
#line 619 "prog_io.m"
                    }
#line 620 "prog_io.m"
                  else
#line 621 "prog_io.m"
                    {
#line 625 "prog_io.m"
                      {
#line 625 "prog_io.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.process_one_item_in_loop\'/14", (MR_String) "unqualified symname does not pass sublist test");
#line 625 "prog_io.m"
                        return;
                      }
#line 621 "prog_io.m"
                    }
#line 631 "prog_io.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93)) == (MR_mktag((MR_Integer) 1))))
#line 629 "prog_io.m"
                    {
#line 629 "prog_io.m"
                      MR_Word parse_tree__prog_io__CurQualifier_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93, (MR_Integer) 0)));
#line 629 "prog_io.m"
                      MR_String parse_tree__prog_io__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93, (MR_Integer) 1)));

#line 630 "prog_io.m"
                      {
#line 630 "prog_io.m"
                        parse_tree__prog_io__CurQualifierPiece_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "prog_io.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io__CurQualifierPiece_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 630 "prog_io.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io__CurQualifierPiece_49, 1) = ((MR_Box) (parse_tree__prog_io__CurQualifier_47));
#line 630 "prog_io.m"
                      }
#line 629 "prog_io.m"
                    }
#line 631 "prog_io.m"
                  else
#line 632 "prog_io.m"
                    {
#line 633 "prog_io.m"
                      parse_tree__prog_io__CurQualifierPiece_49 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[36]);
#line 632 "prog_io.m"
                    }
#line 638 "prog_io.m"
                  if ((parse_tree__prog_io__NamePieces_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "prog_io.m"
                    {
#line 637 "prog_io.m"
                      parse_tree__prog_io__LinkPieces_51 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[38]);
#line 636 "prog_io.m"
                    }
#line 638 "prog_io.m"
                  else
#line 640 "prog_io.m"
                    parse_tree__prog_io__LinkPieces_51 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[23]);
#line 644 "prog_io.m"
                  {
#line 644 "prog_io.m"
                    parse_tree__prog_io__V_190_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_190_190, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 644 "prog_io.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_190_190, 1) = ((MR_Box) (parse_tree__prog_io__EndQualifier_44));
#line 644 "prog_io.m"
                  }
#line 645 "prog_io.m"
                  {
#line 645 "prog_io.m"
                    parse_tree__prog_io__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_197_197, 0) = ((MR_Box) (parse_tree__prog_io__CurQualifierPiece_49));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_197_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "prog_io.m"
                  }
#line 645 "prog_io.m"
                  {
#line 645 "prog_io.m"
                    parse_tree__prog_io__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_194_194, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[35])));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_194_194, 1) = ((MR_Box) (parse_tree__prog_io__V_197_197));
#line 645 "prog_io.m"
                  }
#line 644 "prog_io.m"
                  {
#line 644 "prog_io.m"
                    parse_tree__prog_io__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_191_191, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[34])));
#line 644 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_191_191, 1) = ((MR_Box) (parse_tree__prog_io__V_194_194));
#line 644 "prog_io.m"
                  }
#line 644 "prog_io.m"
                  {
#line 644 "prog_io.m"
                    parse_tree__prog_io__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_189_189, 0) = ((MR_Box) (parse_tree__prog_io__V_190_190));
#line 644 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_189_189, 1) = ((MR_Box) (parse_tree__prog_io__V_191_191));
#line 644 "prog_io.m"
                  }
#line 644 "prog_io.m"
                  {
#line 644 "prog_io.m"
                    parse_tree__prog_io__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_186_186, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[33])));
#line 644 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_186_186, 1) = ((MR_Box) (parse_tree__prog_io__V_189_189));
#line 644 "prog_io.m"
                  }
#line 643 "prog_io.m"
                  {
#line 643 "prog_io.m"
                    parse_tree__prog_io__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_183_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[39])));
#line 643 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_183_183, 1) = ((MR_Box) (parse_tree__prog_io__V_186_186));
#line 643 "prog_io.m"
                  }
#line 643 "prog_io.m"
                  {
#line 643 "prog_io.m"
                    parse_tree__prog_io__QualifierPieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io__LinkPieces_51, parse_tree__prog_io__V_183_183);
                  }
#line 627 "prog_io.m"
                }
#line 2694 "parse_tree.prog_io.c"
              parse_tree__prog_io__TypeCtorInfo_286_286 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 650 "prog_io.m"
              {
#line 650 "prog_io.m"
                parse_tree__prog_io__V_205_205 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_286_286, parse_tree__prog_io__QualifierPieces_43, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[3]));
              }
#line 649 "prog_io.m"
              {
#line 649 "prog_io.m"
                parse_tree__prog_io__V_204_204 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_286_286, parse_tree__prog_io__NamePieces_42, parse_tree__prog_io__V_205_205);
              }
#line 649 "prog_io.m"
              {
#line 649 "prog_io.m"
                parse_tree__prog_io__Pieces_261 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_286_286, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[19]), parse_tree__prog_io__V_204_204);
              }
#line 652 "prog_io.m"
              {
#line 652 "prog_io.m"
                parse_tree__prog_io__V_211_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 652 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_211_211, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_261));
#line 652 "prog_io.m"
              }
#line 652 "prog_io.m"
              {
#line 652 "prog_io.m"
                parse_tree__prog_io__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_210_210, 0) = ((MR_Box) (parse_tree__prog_io__V_211_211));
#line 652 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "prog_io.m"
              }
#line 652 "prog_io.m"
              {
#line 652 "prog_io.m"
                parse_tree__prog_io__V_209_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_209_209, 0) = ((MR_Box) (parse_tree__prog_io__ItemContext_266));
#line 652 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_209_209, 1) = ((MR_Box) (parse_tree__prog_io__V_210_210));
#line 652 "prog_io.m"
              }
#line 652 "prog_io.m"
              {
#line 652 "prog_io.m"
                parse_tree__prog_io__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_208_208, 0) = ((MR_Box) (parse_tree__prog_io__V_209_209));
#line 652 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_208_208, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "prog_io.m"
              }
#line 651 "prog_io.m"
              {
#line 651 "prog_io.m"
                parse_tree__prog_io__Spec_262 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 651 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_262, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_262, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 651 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_262, 2) = ((MR_Box) (parse_tree__prog_io__V_208_208));
#line 651 "prog_io.m"
              }
#line 653 "prog_io.m"
              {
#line 653 "prog_io.m"
                MR_Word base;
#line 653 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = base;
#line 653 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_262));
#line 653 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_99));
#line 653 "prog_io.m"
              }
#line 654 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Error_102 = (MR_Integer) 2;
#line 665 "prog_io.m"
              {
#line 665 "prog_io.m"
                parse_tree__prog_io__V_216_216 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
              }
#line 664 "prog_io.m"
              {
#line 664 "prog_io.m"
                mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io__EndModuleSymName_34, parse_tree__prog_io__V_216_216, parse_tree__prog_io__STATE_VARIABLE_ModuleName_94);
              }
#line 607 "prog_io.m"
            }
#line 668 "prog_io.m"
          {
#line 668 "prog_io.m"
            MR_Word base;
#line 668 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 668 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 668 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 668 "prog_io.m"
          }
#line 668 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 589 "prog_io.m"
        }
#line 588 "prog_io.m"
      else
#line 588 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 0))))
#line 556 "prog_io.m"
          {
#line 556 "prog_io.m"
            MR_Word parse_tree__prog_io__ItemModuleStart_23 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_16), (MR_Integer) 0);
#line 556 "prog_io.m"
            MR_Word parse_tree__prog_io__NewModuleSymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_23, (MR_Integer) 0)));
#line 556 "prog_io.m"
            MR_Word parse_tree__prog_io__ItemContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_23, (MR_Integer) 1)));
#line 557 "prog_io.m"
            MR_Integer parse_tree__prog_io__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_23, (MR_Integer) 2)));

#line 562 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__NewModuleSymName_24)) == (MR_mktag((MR_Integer) 1))))
#line 563 "prog_io.m"
              {
#line 563 "prog_io.m"
                MR_Word parse_tree__prog_io__NewQualifier_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__NewModuleSymName_24, (MR_Integer) 0)));
#line 563 "prog_io.m"
                MR_Word parse_tree__prog_io__OldQualifiersList_29;
#line 563 "prog_io.m"
                MR_Word parse_tree__prog_io__NewQualifiersList_30;
#line 563 "prog_io.m"
                MR_String parse_tree__prog_io__NewModuleName_260 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__NewModuleSymName_24, (MR_Integer) 1)));

#line 564 "prog_io.m"
                {
#line 564 "prog_io.m"
                  parse_tree__prog_io__OldQualifiersList_29 = mdbcomp__sym_name__sym_name_to_list_1_f_0(parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93);
                }
#line 565 "prog_io.m"
                {
#line 565 "prog_io.m"
                  parse_tree__prog_io__NewQualifiersList_30 = mdbcomp__sym_name__sym_name_to_list_1_f_0(parse_tree__prog_io__NewQualifier_28);
                }
#line 566 "prog_io.m"
                {
#line 566 "prog_io.m"
                  parse_tree__prog_io__succeeded = mercury__list__sublist_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io__NewQualifiersList_30, parse_tree__prog_io__OldQualifiersList_29);
                }
#line 568 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 567 "prog_io.m"
                  {
#line 567 "prog_io.m"
                    {
#line 567 "prog_io.m"
                      MR_Word base;
#line 567 "prog_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = base;
#line 567 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93));
#line 567 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__NewModuleName_260));
#line 567 "prog_io.m"
                    }
#line 567 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_Error_102 = parse_tree__prog_io__STATE_VARIABLE_Error_0_101;
#line 567 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 567 "prog_io.m"
                  }
#line 568 "prog_io.m"
                else
#line 573 "prog_io.m"
                  {
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__Pieces_31;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__Spec_32;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_222_222;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_225_225;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_226_226;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_227_227;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_230_230;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_233_233;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_236_236;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_239_239;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_240_240;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_249_249;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_250_250;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_251_251;
#line 573 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_252_252;

#line 570 "prog_io.m"
                    {
#line 570 "prog_io.m"
                      parse_tree__prog_io__V_226_226 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_226_226, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 570 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_226_226, 1) = ((MR_Box) (parse_tree__prog_io__NewModuleSymName_24));
#line 570 "prog_io.m"
                    }
#line 573 "prog_io.m"
                    {
#line 573 "prog_io.m"
                      parse_tree__prog_io__V_240_240 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_240_240, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 573 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_240_240, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93));
#line 573 "prog_io.m"
                    }
#line 573 "prog_io.m"
                    {
#line 573 "prog_io.m"
                      parse_tree__prog_io__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_239_239, 0) = ((MR_Box) (parse_tree__prog_io__V_240_240));
#line 573 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_239_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[3])));
#line 573 "prog_io.m"
                    }
#line 572 "prog_io.m"
                    {
#line 572 "prog_io.m"
                      parse_tree__prog_io__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_236_236, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[45])));
#line 572 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_236_236, 1) = ((MR_Box) (parse_tree__prog_io__V_239_239));
#line 572 "prog_io.m"
                    }
#line 571 "prog_io.m"
                    {
#line 571 "prog_io.m"
                      parse_tree__prog_io__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_233_233, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[44])));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_233_233, 1) = ((MR_Box) (parse_tree__prog_io__V_236_236));
#line 571 "prog_io.m"
                    }
#line 571 "prog_io.m"
                    {
#line 571 "prog_io.m"
                      parse_tree__prog_io__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_230_230, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[43])));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_230_230, 1) = ((MR_Box) (parse_tree__prog_io__V_233_233));
#line 571 "prog_io.m"
                    }
#line 571 "prog_io.m"
                    {
#line 571 "prog_io.m"
                      parse_tree__prog_io__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_227_227, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[42])));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_227_227, 1) = ((MR_Box) (parse_tree__prog_io__V_230_230));
#line 571 "prog_io.m"
                    }
#line 570 "prog_io.m"
                    {
#line 570 "prog_io.m"
                      parse_tree__prog_io__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_225_225, 0) = ((MR_Box) (parse_tree__prog_io__V_226_226));
#line 570 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_225_225, 1) = ((MR_Box) (parse_tree__prog_io__V_227_227));
#line 570 "prog_io.m"
                    }
#line 570 "prog_io.m"
                    {
#line 570 "prog_io.m"
                      parse_tree__prog_io__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_222_222, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[41])));
#line 570 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_222_222, 1) = ((MR_Box) (parse_tree__prog_io__V_225_225));
#line 570 "prog_io.m"
                    }
#line 569 "prog_io.m"
                    {
#line 569 "prog_io.m"
                      parse_tree__prog_io__Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[40])));
#line 569 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_31, 1) = ((MR_Box) (parse_tree__prog_io__V_222_222));
#line 569 "prog_io.m"
                    }
#line 575 "prog_io.m"
                    {
#line 575 "prog_io.m"
                      parse_tree__prog_io__V_252_252 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 575 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_252_252, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_31));
#line 575 "prog_io.m"
                    }
#line 575 "prog_io.m"
                    {
#line 575 "prog_io.m"
                      parse_tree__prog_io__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_251_251, 0) = ((MR_Box) (parse_tree__prog_io__V_252_252));
#line 575 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_251_251, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 575 "prog_io.m"
                    }
#line 575 "prog_io.m"
                    {
#line 575 "prog_io.m"
                      parse_tree__prog_io__V_250_250 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 575 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_250_250, 0) = ((MR_Box) (parse_tree__prog_io__ItemContext_25));
#line 575 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_250_250, 1) = ((MR_Box) (parse_tree__prog_io__V_251_251));
#line 575 "prog_io.m"
                    }
#line 575 "prog_io.m"
                    {
#line 575 "prog_io.m"
                      parse_tree__prog_io__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_249_249, 0) = ((MR_Box) (parse_tree__prog_io__V_250_250));
#line 575 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_249_249, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 575 "prog_io.m"
                    }
#line 574 "prog_io.m"
                    {
#line 574 "prog_io.m"
                      parse_tree__prog_io__Spec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 574 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 574 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_32, 2) = ((MR_Box) (parse_tree__prog_io__V_249_249));
#line 574 "prog_io.m"
                    }
#line 576 "prog_io.m"
                    {
#line 576 "prog_io.m"
                      MR_Word base;
#line 576 "prog_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = base;
#line 576 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_32));
#line 576 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_99));
#line 576 "prog_io.m"
                    }
#line 577 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_Error_102 = (MR_Integer) 2;
#line 584 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = parse_tree__prog_io__NewModuleSymName_24;
#line 573 "prog_io.m"
                  }
#line 563 "prog_io.m"
              }
#line 562 "prog_io.m"
            else
#line 560 "prog_io.m"
              {
#line 560 "prog_io.m"
                MR_String parse_tree__prog_io__NewModuleName_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__NewModuleSymName_24, (MR_Integer) 0)));

#line 561 "prog_io.m"
                {
#line 561 "prog_io.m"
                  MR_Word base;
#line 561 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = base;
#line 561 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93));
#line 561 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__NewModuleName_27));
#line 561 "prog_io.m"
                }
#line 561 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 561 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Error_102 = parse_tree__prog_io__STATE_VARIABLE_Error_0_101;
#line 560 "prog_io.m"
              }
#line 587 "prog_io.m"
            {
#line 587 "prog_io.m"
              MR_Word base;
#line 587 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 587 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 587 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 587 "prog_io.m"
            }
#line 587 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 556 "prog_io.m"
          }
#line 588 "prog_io.m"
        else
#line 588 "prog_io.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 711 "prog_io.m"
            {
#line 711 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemNothing_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 1)));
#line 711 "prog_io.m"
              MR_Word parse_tree__prog_io__MaybeWarning_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_81, (MR_Integer) 0)));
#line 711 "prog_io.m"
              MR_Integer parse_tree__prog_io__NothingSeqNum_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_81, (MR_Integer) 2)));
#line 711 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_81, (MR_Integer) 1)));

#line 716 "prog_io.m"
              if ((parse_tree__prog_io__MaybeWarning_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "prog_io.m"
                {
#line 715 "prog_io.m"
                  {
#line 715 "prog_io.m"
                    MR_Word base;
#line 715 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 715 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 715 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 715 "prog_io.m"
                  }
#line 715 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 715 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Error_102 = parse_tree__prog_io__STATE_VARIABLE_Error_0_101;
#line 714 "prog_io.m"
                }
#line 716 "prog_io.m"
              else
#line 717 "prog_io.m"
                {
#line 717 "prog_io.m"
                  MR_Word parse_tree__prog_io__Warning_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWarning_82, (MR_Integer) 0)));
#line 717 "prog_io.m"
                  MR_Word parse_tree__prog_io__MaybeOption_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_84, (MR_Integer) 0)));
#line 717 "prog_io.m"
                  MR_String parse_tree__prog_io__Msg_86 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_84, (MR_Integer) 1)));
#line 717 "prog_io.m"
                  MR_Word parse_tree__prog_io__Term_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_84, (MR_Integer) 2)));
#line 717 "prog_io.m"
                  MR_Word parse_tree__prog_io__Warn_89;
#line 717 "prog_io.m"
                  MR_Word parse_tree__prog_io__NoWarnItemNothing_91;
#line 717 "prog_io.m"
                  MR_Word parse_tree__prog_io__NoWarnItem_92;

#line 722 "prog_io.m"
                  if ((parse_tree__prog_io__MaybeOption_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 724 "prog_io.m"
                    parse_tree__prog_io__Warn_89 = (MR_Integer) 1;
#line 722 "prog_io.m"
                  else
#line 720 "prog_io.m"
                    {
#line 720 "prog_io.m"
                      MR_Word parse_tree__prog_io__Option_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeOption_85, (MR_Integer) 0)));

#line 721 "prog_io.m"
                      {
#line 721 "prog_io.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__Option_88, &parse_tree__prog_io__Warn_89);
                      }
#line 720 "prog_io.m"
                    }
#line 740 "prog_io.m"
                  if ((parse_tree__prog_io__Warn_89 == (MR_Integer) 0))
#line 741 "prog_io.m"
                    {
#line 741 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 741 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_Error_102 = parse_tree__prog_io__STATE_VARIABLE_Error_0_101;
#line 741 "prog_io.m"
                    }
#line 740 "prog_io.m"
                  else
#line 727 "prog_io.m"
                    {
#line 727 "prog_io.m"
                      MR_Word parse_tree__prog_io__Halt_90;
#line 727 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_107_107;
#line 727 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_108_108;
#line 727 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_114_114;
#line 727 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_115_115;
#line 727 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_116_116;
#line 727 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_117_117;
#line 727 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_118_118;
#line 727 "prog_io.m"
                      MR_Word parse_tree__prog_io__Pieces_271;
#line 727 "prog_io.m"
                      MR_Word parse_tree__prog_io__Spec_272;

#line 728 "prog_io.m"
                      {
#line 728 "prog_io.m"
                        parse_tree__prog_io__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "prog_io.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 728 "prog_io.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_108_108, 1) = ((MR_Box) (parse_tree__prog_io__Msg_86));
#line 728 "prog_io.m"
                      }
#line 728 "prog_io.m"
                      {
#line 728 "prog_io.m"
                        parse_tree__prog_io__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io__V_108_108));
#line 728 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[1])));
#line 728 "prog_io.m"
                      }
#line 728 "prog_io.m"
                      {
#line 728 "prog_io.m"
                        parse_tree__prog_io__Pieces_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_271, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[46])));
#line 728 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_271, 1) = ((MR_Box) (parse_tree__prog_io__V_107_107));
#line 728 "prog_io.m"
                      }
#line 730 "prog_io.m"
                      {
#line 730 "prog_io.m"
                        parse_tree__prog_io__V_116_116 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_87);
                      }
#line 730 "prog_io.m"
                      {
#line 730 "prog_io.m"
                        parse_tree__prog_io__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 730 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_271));
#line 730 "prog_io.m"
                      }
#line 730 "prog_io.m"
                      {
#line 730 "prog_io.m"
                        parse_tree__prog_io__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_117_117, 0) = ((MR_Box) (parse_tree__prog_io__V_118_118));
#line 730 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "prog_io.m"
                      }
#line 730 "prog_io.m"
                      {
#line 730 "prog_io.m"
                        parse_tree__prog_io__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 730 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io__V_116_116));
#line 730 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_115_115, 1) = ((MR_Box) (parse_tree__prog_io__V_117_117));
#line 730 "prog_io.m"
                      }
#line 730 "prog_io.m"
                      {
#line 730 "prog_io.m"
                        parse_tree__prog_io__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_114_114, 0) = ((MR_Box) (parse_tree__prog_io__V_115_115));
#line 730 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "prog_io.m"
                      }
#line 729 "prog_io.m"
                      {
#line 729 "prog_io.m"
                        parse_tree__prog_io__Spec_272 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 729 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_272, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 729 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_272, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 729 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_272, 2) = ((MR_Box) (parse_tree__prog_io__V_114_114));
#line 729 "prog_io.m"
                      }
#line 731 "prog_io.m"
                      {
#line 731 "prog_io.m"
                        MR_Word base;
#line 731 "prog_io.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = base;
#line 731 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_272));
#line 731 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_99));
#line 731 "prog_io.m"
                      }
#line 733 "prog_io.m"
                      {
#line 733 "prog_io.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_15, (MR_Integer) 2, &parse_tree__prog_io__Halt_90);
                      }
#line 737 "prog_io.m"
                      if ((parse_tree__prog_io__Halt_90 == (MR_Integer) 0))
#line 738 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Error_102 = parse_tree__prog_io__STATE_VARIABLE_Error_0_101;
#line 737 "prog_io.m"
                      else
#line 736 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Error_102 = (MR_Integer) 1;
#line 727 "prog_io.m"
                    }
#line 743 "prog_io.m"
                  {
#line 743 "prog_io.m"
                    parse_tree__prog_io__NoWarnItemNothing_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 743 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothing_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 743 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothing_91, 1) = ((MR_Box) (parse_tree__prog_io__Context_281));
#line 743 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothing_91, 2) = ((MR_Box) (parse_tree__prog_io__NothingSeqNum_83));
#line 743 "prog_io.m"
                  }
#line 744 "prog_io.m"
                  {
#line 744 "prog_io.m"
                    parse_tree__prog_io__NoWarnItem_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "prog_io.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io__NoWarnItem_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 744 "prog_io.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io__NoWarnItem_92, 1) = ((MR_Box) (parse_tree__prog_io__NoWarnItemNothing_91));
#line 744 "prog_io.m"
                  }
#line 745 "prog_io.m"
                  {
#line 745 "prog_io.m"
                    MR_Word base;
#line 745 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 745 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__NoWarnItem_92));
#line 745 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 745 "prog_io.m"
                  }
#line 717 "prog_io.m"
                }
#line 745 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93;
#line 745 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 711 "prog_io.m"
            }
#line 588 "prog_io.m"
          else
#line 588 "prog_io.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 688 "prog_io.m"
              {
#line 688 "prog_io.m"
                MR_Word parse_tree__prog_io__ItemPragma_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 1)));
#line 688 "prog_io.m"
                MR_Word parse_tree__prog_io__Pragma_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_63, (MR_Integer) 1)));
#line 689 "prog_io.m"
                MR_Word parse_tree__prog_io__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_63, (MR_Integer) 0)));
#line 689 "prog_io.m"
                MR_Word parse_tree__prog_io__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_63, (MR_Integer) 2)));
#line 689 "prog_io.m"
                MR_Integer parse_tree__prog_io__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_63, (MR_Integer) 3)));
#line 692 "prog_io.m"
                MR_Word parse_tree__prog_io__SFNInfo_68;

#line 690 "prog_io.m"
                parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__Pragma_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_65, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 690 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 690 "prog_io.m"
                  {
#line 690 "prog_io.m"
                    parse_tree__prog_io__SFNInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_65, (MR_Integer) 1)));
#line 691 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = (MR_String) parse_tree__prog_io__SFNInfo_68;
#line 691 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97;
#line 690 "prog_io.m"
                  }
#line 690 "prog_io.m"
                else
#line 693 "prog_io.m"
                  {
#line 693 "prog_io.m"
                    {
#line 693 "prog_io.m"
                      MR_Word base;
#line 693 "prog_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 693 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 693 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 693 "prog_io.m"
                    }
#line 693 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 693 "prog_io.m"
                  }
#line 693 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93;
#line 693 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 693 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Error_102 = parse_tree__prog_io__STATE_VARIABLE_Error_0_101;
#line 688 "prog_io.m"
              }
#line 588 "prog_io.m"
            else
#line 708 "prog_io.m"
              {
#line 709 "prog_io.m"
                {
#line 709 "prog_io.m"
                  MR_Word base;
#line 709 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 709 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 709 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 709 "prog_io.m"
                }
#line 709 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93;
#line 709 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 709 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 709 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Error_102 = parse_tree__prog_io__STATE_VARIABLE_Error_0_101;
#line 708 "prog_io.m"
              }
#line 548 "prog_io.m"
  }
#line 541 "prog_io.m"
}

#line 510 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_item_result_6_p_0(
#line 510 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 510 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 510 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 510 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23,
#line 510 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24,
#line 510 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadItemResult_11)
#line 510 "prog_io.m"
{
#line 516 "prog_io.m"
  {
#line 516 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 516 "prog_io.m"
    if ((parse_tree__prog_io__ReadTermResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "prog_io.m"
      {
#line 517 "prog_io.m"
        *parse_tree__prog_io__ReadItemResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23;
#line 516 "prog_io.m"
      }
#line 516 "prog_io.m"
    else
#line 516 "prog_io.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_9)) == (MR_mktag((MR_Integer) 1))))
#line 519 "prog_io.m"
        {
#line 519 "prog_io.m"
          MR_String parse_tree__prog_io__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 519 "prog_io.m"
          MR_Integer parse_tree__prog_io__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 519 "prog_io.m"
          MR_Word parse_tree__prog_io__Pieces_14;
#line 519 "prog_io.m"
          MR_Word parse_tree__prog_io__Context_15;
#line 519 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_16;
#line 519 "prog_io.m"
          MR_Word parse_tree__prog_io__V_26_26;
#line 519 "prog_io.m"
          MR_Word parse_tree__prog_io__V_35_35;
#line 519 "prog_io.m"
          MR_Word parse_tree__prog_io__V_36_36;
#line 519 "prog_io.m"
          MR_Word parse_tree__prog_io__V_37_37;
#line 519 "prog_io.m"
          MR_Word parse_tree__prog_io__V_38_38;
#line 519 "prog_io.m"
          MR_Word parse_tree__prog_io__V_41_41;

#line 521 "prog_io.m"
          {
#line 521 "prog_io.m"
            parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 521 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_12));
#line 521 "prog_io.m"
          }
#line 521 "prog_io.m"
          {
#line 521 "prog_io.m"
            parse_tree__prog_io__Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 0) = ((MR_Box) (parse_tree__prog_io__V_26_26));
#line 521 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[3])));
#line 521 "prog_io.m"
          }
#line 522 "prog_io.m"
          {
#line 522 "prog_io.m"
            parse_tree__prog_io__Context_15 = mercury__term__context_init_2_f_0(parse_tree__prog_io__FileName_8, parse_tree__prog_io__LineNumber_13);
          }
#line 524 "prog_io.m"
          {
#line 524 "prog_io.m"
            parse_tree__prog_io__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_14));
#line 524 "prog_io.m"
          }
#line 524 "prog_io.m"
          {
#line 524 "prog_io.m"
            parse_tree__prog_io__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "prog_io.m"
          }
#line 524 "prog_io.m"
          {
#line 524 "prog_io.m"
            parse_tree__prog_io__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io__Context_15));
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io__V_37_37));
#line 524 "prog_io.m"
          }
#line 524 "prog_io.m"
          {
#line 524 "prog_io.m"
            parse_tree__prog_io__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io__V_36_36));
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "prog_io.m"
          }
#line 523 "prog_io.m"
          {
#line 523 "prog_io.m"
            parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 523 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 523 "prog_io.m"
          }
#line 525 "prog_io.m"
          {
#line 525 "prog_io.m"
            parse_tree__prog_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io__Spec_16));
#line 525 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "prog_io.m"
          }
#line 525 "prog_io.m"
          {
#line 525 "prog_io.m"
            MR_Word base;
#line 525 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "prog_io.m"
            *parse_tree__prog_io__ReadItemResult_11 = base;
#line 525 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 525 "prog_io.m"
          }
#line 525 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23;
#line 519 "prog_io.m"
        }
#line 516 "prog_io.m"
      else
#line 527 "prog_io.m"
        {
#line 527 "prog_io.m"
          MR_Word parse_tree__prog_io__VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 527 "prog_io.m"
          MR_Word parse_tree__prog_io__Term_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 527 "prog_io.m"
          MR_Integer parse_tree__prog_io__SeqNum_19;
#line 527 "prog_io.m"
          MR_Word parse_tree__prog_io__MaybeItem_20;

#line 528 "prog_io.m"
          {
#line 528 "prog_io.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_19, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24);
          }
#line 529 "prog_io.m"
          {
#line 529 "prog_io.m"
            parse_tree__prog_io_item__parse_item_5_p_0(parse_tree__prog_io__ModuleName_7, parse_tree__prog_io__VarSet_17, parse_tree__prog_io__Term_18, parse_tree__prog_io__SeqNum_19, &parse_tree__prog_io__MaybeItem_20);
          }
#line 533 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItem_20)) == (MR_mktag((MR_Integer) 0))))
#line 534 "prog_io.m"
            {
#line 534 "prog_io.m"
              MR_Word parse_tree__prog_io__Specs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItem_20, (MR_Integer) 0)));

#line 535 "prog_io.m"
              {
#line 535 "prog_io.m"
                MR_Word base;
#line 535 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 535 "prog_io.m"
                *parse_tree__prog_io__ReadItemResult_11 = base;
#line 535 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_22));
#line 535 "prog_io.m"
              }
#line 534 "prog_io.m"
            }
#line 533 "prog_io.m"
          else
#line 531 "prog_io.m"
            {
#line 531 "prog_io.m"
              MR_Word parse_tree__prog_io__Item_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem_20, (MR_Integer) 0)));

#line 532 "prog_io.m"
              {
#line 532 "prog_io.m"
                MR_Word base;
#line 532 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_io.m"
                *parse_tree__prog_io__ReadItemResult_11 = base;
#line 532 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_21));
#line 532 "prog_io.m"
              }
#line 531 "prog_io.m"
            }
#line 527 "prog_io.m"
        }
#line 516 "prog_io.m"
  }
#line 510 "prog_io.m"
}

#line 470 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_14_p_1(
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_28,
#line 470 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeReadTermResult_18,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_30,
#line 470 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_31,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_32,
#line 470 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_33,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_34,
#line 470 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_35,
#line 470 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_36,
#line 470 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37)
#line 470 "prog_io.m"
{
#line 474 "prog_io.m"
  {
#line 474 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 474 "prog_io.m"
    MR_Word parse_tree__prog_io__ReadTermResult_24;
#line 474 "prog_io.m"
    MR_Word parse_tree__prog_io__ReadItemResult_25;
#line 474 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41;

#line 478 "prog_io.m"
    if ((parse_tree__prog_io__MaybeReadTermResult_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "prog_io.m"
      {
#line 477 "prog_io.m"
        {
#line 477 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29, &parse_tree__prog_io__ReadTermResult_24);
        }
#line 476 "prog_io.m"
      }
#line 478 "prog_io.m"
    else
#line 479 "prog_io.m"
      parse_tree__prog_io__ReadTermResult_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeReadTermResult_18, (MR_Integer) 0)));
#line 481 "prog_io.m"
    {
#line 481 "prog_io.m"
      parse_tree__prog_io__read_term_to_item_result_6_p_0(parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_28, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29, parse_tree__prog_io__ReadTermResult_24, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_36, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41, &parse_tree__prog_io__ReadItemResult_25);
    }
#line 486 "prog_io.m"
    if ((parse_tree__prog_io__ReadItemResult_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "prog_io.m"
      {
#line 484 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_RevItems_31 = parse_tree__prog_io__STATE_VARIABLE_RevItems_0_30;
#line 484 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_33 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_32;
#line 484 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Error_35 = parse_tree__prog_io__STATE_VARIABLE_Error_0_34;
#line 484 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41;
#line 484 "prog_io.m"
      }
#line 486 "prog_io.m"
    else
#line 486 "prog_io.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io__ReadItemResult_25)) == (MR_mktag((MR_Integer) 1))))
#line 490 "prog_io.m"
        {
#line 490 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpecs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadItemResult_25, (MR_Integer) 0)));
#line 490 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_54_54;

#line 491 "prog_io.m"
          {
#line 491 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_26, parse_tree__prog_io__STATE_VARIABLE_Specs_0_32);
          }
#line 493 "prog_io.m"
          {
#line 493 "prog_io.m"
            parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_115_95_108_111_111_112_95_95_91_52_93_95_48_14_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_28, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_30, parse_tree__prog_io__STATE_VARIABLE_RevItems_31, parse_tree__prog_io__STATE_VARIABLE_Specs_54_54, parse_tree__prog_io__STATE_VARIABLE_Specs_33, (MR_Integer) 1, parse_tree__prog_io__STATE_VARIABLE_Error_35, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37);
#line 493 "prog_io.m"
            return;
          }
#line 490 "prog_io.m"
        }
#line 486 "prog_io.m"
      else
#line 496 "prog_io.m"
        {
#line 496 "prog_io.m"
          MR_Word parse_tree__prog_io__Item_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadItemResult_25, (MR_Integer) 0)));
#line 496 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_44_44;
#line 496 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_45_45;
#line 496 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_46_46;
#line 496 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_42_66;
#line 496 "prog_io.m"
          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_43_67;

#line 497 "prog_io.m"
          {
#line 497 "prog_io.m"
            parse_tree__prog_io__process_one_item_in_loop_14_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__Item_27, parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_28, &parse_tree__prog_io__STATE_VARIABLE_ModuleName_42_66, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_29, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_43_67, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_30, &parse_tree__prog_io__STATE_VARIABLE_RevItems_44_44, parse_tree__prog_io__STATE_VARIABLE_Specs_0_32, &parse_tree__prog_io__STATE_VARIABLE_Specs_45_45, parse_tree__prog_io__STATE_VARIABLE_Error_0_34, &parse_tree__prog_io__STATE_VARIABLE_Error_46_46);
          }
#line 499 "prog_io.m"
          {
#line 499 "prog_io.m"
            parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_115_95_108_111_111_112_95_95_91_52_93_95_48_14_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__STATE_VARIABLE_ModuleName_42_66, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_43_67, parse_tree__prog_io__STATE_VARIABLE_RevItems_44_44, parse_tree__prog_io__STATE_VARIABLE_RevItems_31, parse_tree__prog_io__STATE_VARIABLE_Specs_45_45, parse_tree__prog_io__STATE_VARIABLE_Specs_33, parse_tree__prog_io__STATE_VARIABLE_Error_46_46, parse_tree__prog_io__STATE_VARIABLE_Error_35, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37);
#line 499 "prog_io.m"
            return;
          }
#line 496 "prog_io.m"
        }
#line 474 "prog_io.m"
  }
#line 470 "prog_io.m"
}

#line 449 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_module_decl_3_p_0(
#line 449 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_4,
#line 449 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 449 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_6)
#line 449 "prog_io.m"
{
#line 451 "prog_io.m"
  {
#line 451 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 451 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemInfo_7;

#line 452 "prog_io.m"
    {
#line 452 "prog_io.m"
      parse_tree__prog_io__ItemInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 452 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemInfo_7, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_4));
#line 452 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemInfo_7, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 452 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemInfo_7, 2) = ((MR_Box) ((MR_Integer) -1));
#line 452 "prog_io.m"
    }
#line 453 "prog_io.m"
    *parse_tree__prog_io__Item_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io__ItemInfo_7);
#line 451 "prog_io.m"
  }
#line 449 "prog_io.m"
}

#line 361 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_item_12_p_0(
#line 361 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 361 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39,
#line 361 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_40,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_15,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclItem_16,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeSecondTerm_17,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_18,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_19,
#line 361 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41,
#line 361 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42)
#line 361 "prog_io.m"
{
#line 367 "prog_io.m"
  while (MR_TRUE)
#line 367 "prog_io.m"
    {
#line 367 "prog_io.m"
      /* tailcall optimized into a loop */
#line 367 "prog_io.m"
      {
#line 367 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFirstTerm_22;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFirstItem_23;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;
#line 385 "prog_io.m"
        MR_Word parse_tree__prog_io__SFNInfo_30;
#line 377 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstItem_24;
#line 377 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstItemPragma_25;
#line 377 "prog_io.m"
        MR_Word parse_tree__prog_io__Pragma_27;
#line 379 "prog_io.m"
        MR_Word parse_tree__prog_io__V_26_26;
#line 379 "prog_io.m"
        MR_Word parse_tree__prog_io__V_28_28;
#line 379 "prog_io.m"
        MR_Integer parse_tree__prog_io__V_29_29;

#line 371 "prog_io.m"
        {
#line 371 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39, &parse_tree__prog_io__MaybeFirstTerm_22);
        }
#line 372 "prog_io.m"
        {
#line 372 "prog_io.m"
          parse_tree__prog_io__V_46_46 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
        }
#line 372 "prog_io.m"
        {
#line 372 "prog_io.m"
          parse_tree__prog_io__read_term_to_item_result_6_p_0(parse_tree__prog_io__V_46_46, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39, parse_tree__prog_io__MaybeFirstTerm_22, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, &parse_tree__prog_io__MaybeFirstItem_23);
        }
#line 377 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstItem_23)) == (MR_mktag((MR_Integer) 2)));
#line 377 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 377 "prog_io.m"
          {
#line 377 "prog_io.m"
            parse_tree__prog_io__FirstItem_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstItem_23, (MR_Integer) 0)));
#line 378 "prog_io.m"
            parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__FirstItem_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstItem_24, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 378 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 378 "prog_io.m"
              {
#line 378 "prog_io.m"
                parse_tree__prog_io__FirstItemPragma_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstItem_24, (MR_Integer) 1)));
#line 379 "prog_io.m"
                parse_tree__prog_io__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 0)));
#line 379 "prog_io.m"
                parse_tree__prog_io__Pragma_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 1)));
#line 379 "prog_io.m"
                parse_tree__prog_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 2)));
#line 379 "prog_io.m"
                parse_tree__prog_io__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 3)));
#line 380 "prog_io.m"
                parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__Pragma_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_27, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 380 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 380 "prog_io.m"
                  parse_tree__prog_io__SFNInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_27, (MR_Integer) 1)));
#line 378 "prog_io.m"
              }
#line 377 "prog_io.m"
          }
#line 385 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 382 "prog_io.m"
          {
#line 382 "prog_io.m"
            MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_48_48 = (MR_String) parse_tree__prog_io__SFNInfo_30;

#line 383 "prog_io.m"
            /* direct tailcall eliminated */
#line 383 "prog_io.m"
            {
#line 383 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_39 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_48_48;
#line 383 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_41 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;

#line 383 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_41;
#line 383 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_39;
#line 383 "prog_io.m"
            }
#line 383 "prog_io.m"
            continue;
#line 382 "prog_io.m"
          }
#line 385 "prog_io.m"
        else
#line 423 "prog_io.m"
          {
#line 423 "prog_io.m"
            MR_Word parse_tree__prog_io__StartModuleName_32;
#line 423 "prog_io.m"
            MR_Word parse_tree__prog_io__FirstContext_33;
#line 387 "prog_io.m"
            MR_Word parse_tree__prog_io__FirstItemModuleStart_31;
#line 387 "prog_io.m"
            MR_Word parse_tree__prog_io__FirstItem_102;
#line 389 "prog_io.m"
            MR_Integer parse_tree__prog_io___FirstItemSeqNum_34;

#line 387 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstItem_23)) == (MR_mktag((MR_Integer) 2)));
#line 387 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 387 "prog_io.m"
              {
#line 387 "prog_io.m"
                parse_tree__prog_io__FirstItem_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstItem_23, (MR_Integer) 0)));
#line 388 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__FirstItem_102)) == (MR_mktag((MR_Integer) 0)));
#line 388 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 388 "prog_io.m"
                  {
#line 388 "prog_io.m"
                    parse_tree__prog_io__FirstItemModuleStart_31 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__FirstItem_102), (MR_Integer) 0);
#line 389 "prog_io.m"
                    parse_tree__prog_io__StartModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemModuleStart_31, (MR_Integer) 0)));
#line 389 "prog_io.m"
                    parse_tree__prog_io__FirstContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemModuleStart_31, (MR_Integer) 1)));
#line 389 "prog_io.m"
                    parse_tree__prog_io___FirstItemSeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemModuleStart_31, (MR_Integer) 2)));
#line 389 "prog_io.m"
                    parse_tree__prog_io__succeeded = MR_TRUE;
#line 388 "prog_io.m"
                  }
#line 387 "prog_io.m"
              }
#line 423 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 420 "prog_io.m"
              {
#line 394 "prog_io.m"
                {
#line 394 "prog_io.m"
                  parse_tree__prog_io__succeeded = mdbcomp__sym_name__match_sym_name_2_p_0(parse_tree__prog_io__StartModuleName_32, parse_tree__prog_io__DefaultModuleName_13);
                }
#line 398 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 395 "prog_io.m"
                  {
#line 395 "prog_io.m"
                    *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__DefaultModuleName_13;
#line 396 "prog_io.m"
                    *parse_tree__prog_io__Specs_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 397 "prog_io.m"
                    *parse_tree__prog_io__Error_19 = (MR_Integer) 0;
#line 395 "prog_io.m"
                  }
#line 398 "prog_io.m"
                else
#line 402 "prog_io.m"
                  {
#line 398 "prog_io.m"
                    {
#line 398 "prog_io.m"
                      parse_tree__prog_io__succeeded = mdbcomp__sym_name__match_sym_name_2_p_0(parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__StartModuleName_32);
                    }
#line 402 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 399 "prog_io.m"
                      {
#line 399 "prog_io.m"
                        *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__StartModuleName_32;
#line 400 "prog_io.m"
                        *parse_tree__prog_io__Specs_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "prog_io.m"
                        *parse_tree__prog_io__Error_19 = (MR_Integer) 0;
#line 399 "prog_io.m"
                      }
#line 402 "prog_io.m"
                    else
#line 406 "prog_io.m"
                      {
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__Pieces_35;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__Msgs_37;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__Spec_38;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_54_54;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_55_55;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_56_56;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_59_59;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_60_60;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_71_71;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_74_74;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_75_75;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_79_79;
#line 406 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_80_80;

#line 404 "prog_io.m"
                        {
#line 404 "prog_io.m"
                          parse_tree__prog_io__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39));
#line 404 "prog_io.m"
                        }
#line 405 "prog_io.m"
                        {
#line 405 "prog_io.m"
                          parse_tree__prog_io__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_io.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 405 "prog_io.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io__StartModuleName_32));
#line 405 "prog_io.m"
                        }
#line 405 "prog_io.m"
                        {
#line 405 "prog_io.m"
                          parse_tree__prog_io__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io__V_60_60));
#line 405 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[3])));
#line 405 "prog_io.m"
                        }
#line 405 "prog_io.m"
                        {
#line 405 "prog_io.m"
                          parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[30])));
#line 405 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io__V_59_59));
#line 405 "prog_io.m"
                        }
#line 404 "prog_io.m"
                        {
#line 404 "prog_io.m"
                          parse_tree__prog_io__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io__V_55_55));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 404 "prog_io.m"
                        }
#line 404 "prog_io.m"
                        {
#line 404 "prog_io.m"
                          parse_tree__prog_io__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[29])));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_35, 1) = ((MR_Box) (parse_tree__prog_io__V_54_54));
#line 404 "prog_io.m"
                        }
#line 410 "prog_io.m"
                        {
#line 410 "prog_io.m"
                          parse_tree__prog_io__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 410 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_35));
#line 410 "prog_io.m"
                        }
#line 410 "prog_io.m"
                        {
#line 410 "prog_io.m"
                          parse_tree__prog_io__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io__V_75_75));
#line 410 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "prog_io.m"
                        }
#line 409 "prog_io.m"
                        {
#line 409 "prog_io.m"
                          parse_tree__prog_io__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 0) = ((MR_Box) (((MR_Integer) 22 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 409 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io__V_74_74));
#line 409 "prog_io.m"
                        }
#line 410 "prog_io.m"
                        {
#line 410 "prog_io.m"
                          parse_tree__prog_io__Msgs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_37, 0) = ((MR_Box) (parse_tree__prog_io__V_71_71));
#line 410 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "prog_io.m"
                        }
#line 412 "prog_io.m"
                        {
#line 412 "prog_io.m"
                          parse_tree__prog_io__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 412 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_33));
#line 412 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io__Msgs_37));
#line 412 "prog_io.m"
                        }
#line 412 "prog_io.m"
                        {
#line 412 "prog_io.m"
                          parse_tree__prog_io__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io__V_80_80));
#line 412 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "prog_io.m"
                        }
#line 411 "prog_io.m"
                        {
#line 411 "prog_io.m"
                          parse_tree__prog_io__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 411 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_2[0])));
#line 411 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 411 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io__V_79_79));
#line 411 "prog_io.m"
                        }
#line 413 "prog_io.m"
                        {
#line 413 "prog_io.m"
                          MR_Word base;
#line 413 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "prog_io.m"
                          *parse_tree__prog_io__Specs_18 = base;
#line 413 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_38));
#line 413 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "prog_io.m"
                        }
#line 418 "prog_io.m"
                        *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__StartModuleName_32;
#line 419 "prog_io.m"
                        *parse_tree__prog_io__Error_19 = (MR_Integer) 1;
#line 406 "prog_io.m"
                      }
#line 402 "prog_io.m"
                  }
#line 421 "prog_io.m"
                {
#line 421 "prog_io.m"
                  parse_tree__prog_io__make_module_decl_3_p_0(*parse_tree__prog_io__ModuleName_15, parse_tree__prog_io__FirstContext_33, parse_tree__prog_io__ModuleDeclItem_16);
                }
#line 422 "prog_io.m"
                *parse_tree__prog_io__MaybeSecondTerm_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "prog_io.m"
              }
#line 423 "prog_io.m"
            else
#line 430 "prog_io.m"
              {
#line 430 "prog_io.m"
                MR_Word parse_tree__prog_io__V_98_98;
#line 430 "prog_io.m"
                MR_Word parse_tree__prog_io__V_99_99;
#line 430 "prog_io.m"
                MR_Word parse_tree__prog_io__FirstContext_105;
#line 430 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_109;
#line 428 "prog_io.m"
                MR_Word parse_tree__prog_io__FirstItem_103;

#line 426 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstItem_23)) == (MR_mktag((MR_Integer) 2)));
#line 426 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 426 "prog_io.m"
                  {
#line 426 "prog_io.m"
                    parse_tree__prog_io__FirstItem_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstItem_23, (MR_Integer) 0)));
#line 427 "prog_io.m"
                    {
#line 427 "prog_io.m"
                      parse_tree__prog_io__FirstContext_105 = parse_tree__prog_item__get_item_context_1_f_0(parse_tree__prog_io__FirstItem_103);
                    }
#line 426 "prog_io.m"
                  }
#line 426 "prog_io.m"
                else
#line 429 "prog_io.m"
                  {
#line 429 "prog_io.m"
                    {
#line 429 "prog_io.m"
                      mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_105);
                    }
#line 429 "prog_io.m"
                  }
#line 436 "prog_io.m"
                {
#line 436 "prog_io.m"
                  parse_tree__prog_io__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_105));
#line 436 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[31])));
#line 436 "prog_io.m"
                }
#line 436 "prog_io.m"
                {
#line 436 "prog_io.m"
                  parse_tree__prog_io__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io__V_99_99));
#line 436 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "prog_io.m"
                }
#line 435 "prog_io.m"
                {
#line 435 "prog_io.m"
                  parse_tree__prog_io__Spec_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 435 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_109, 2) = ((MR_Box) (parse_tree__prog_io__V_98_98));
#line 435 "prog_io.m"
                }
#line 437 "prog_io.m"
                {
#line 437 "prog_io.m"
                  MR_Word base;
#line 437 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io.m"
                  *parse_tree__prog_io__Specs_18 = base;
#line 437 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_109));
#line 437 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_io.m"
                }
#line 438 "prog_io.m"
                *parse_tree__prog_io__Error_19 = (MR_Integer) 1;
#line 440 "prog_io.m"
                *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__DefaultModuleName_13;
#line 441 "prog_io.m"
                {
#line 441 "prog_io.m"
                  parse_tree__prog_io__make_module_decl_3_p_0(*parse_tree__prog_io__ModuleName_15, parse_tree__prog_io__FirstContext_105, parse_tree__prog_io__ModuleDeclItem_16);
                }
#line 446 "prog_io.m"
                {
#line 446 "prog_io.m"
                  MR_Word base;
#line 446 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "prog_io.m"
                  *parse_tree__prog_io__MaybeSecondTerm_17 = base;
#line 446 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__MaybeFirstTerm_22));
#line 446 "prog_io.m"
                }
#line 430 "prog_io.m"
              }
#line 446 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;
#line 446 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_40 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39;
#line 423 "prog_io.m"
          }
#line 367 "prog_io.m"
      }
#line 367 "prog_io.m"
      break;
#line 367 "prog_io.m"
    }
#line 361 "prog_io.m"
}

#line 277 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_all_items_8_p_0(
#line 277 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_9,
#line 277 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_10,
#line 277 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_11,
#line 277 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_12,
#line 277 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_24,
#line 277 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_25)
#line 277 "prog_io.m"
{
#line 284 "prog_io.m"
  {
#line 284 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_18;
#line 284 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName0_19;
#line 284 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName_20;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclItem_21;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeSecondTermResult_22;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_29_29;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_32_32;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_33_33;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_34_34;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_36_36;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__RevItems_51;
#line 284 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_18_56;
#line 294 "prog_io.m"
    MR_Word parse_tree__prog_io__V_23_23;
#line 321 "prog_io.m"
    MR_Word parse_tree__prog_io__RevItems1_47;
#line 316 "prog_io.m"
    MR_Word parse_tree__prog_io__LastItem_46;
#line 316 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleEnd_48;
#line 316 "prog_io.m"
    MR_Word parse_tree__prog_io__V_63_63;
#line 318 "prog_io.m"
    MR_Word parse_tree__prog_io___Context_49;
#line 318 "prog_io.m"
    MR_Integer parse_tree__prog_io___SeqNum_50;
#line 334 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_19_57;
#line 329 "prog_io.m"
    MR_Word parse_tree__prog_io__Item_52;
#line 329 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleStart_53;
#line 329 "prog_io.m"
    MR_Word parse_tree__prog_io__V_64_64;
#line 331 "prog_io.m"
    MR_Word parse_tree__prog_io__V_54_54;
#line 331 "prog_io.m"
    MR_Integer parse_tree__prog_io__V_55_55;

#line 284 "prog_io.m"
    {
#line 284 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_29_29);
    }
#line 286 "prog_io.m"
    {
#line 286 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_18);
    }
#line 287 "prog_io.m"
    {
#line 287 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_18, &parse_tree__prog_io__SourceFileName0_19);
    }
#line 290 "prog_io.m"
    {
#line 290 "prog_io.m"
      parse_tree__prog_io__read_first_item_12_p_0(parse_tree__prog_io__DefaultModuleName_10, parse_tree__prog_io__SourceFileName0_19, &parse_tree__prog_io__SourceFileName_20, parse_tree__prog_io__ModuleName_11, &parse_tree__prog_io__ModuleDeclItem_21, &parse_tree__prog_io__MaybeSecondTermResult_22, &parse_tree__prog_io__STATE_VARIABLE_Specs_32_32, &parse_tree__prog_io__STATE_VARIABLE_Error_33_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_29_29, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_34_34);
    }
#line 293 "prog_io.m"
    {
#line 293 "prog_io.m"
      parse_tree__prog_io__STATE_VARIABLE_RevItems_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_RevItems_36_36, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDeclItem_21));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_RevItems_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io.m"
    }
#line 294 "prog_io.m"
    {
#line 294 "prog_io.m"
      parse_tree__prog_io__read_items_loop_14_p_1(parse_tree__prog_io__Globals_9, *parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__SourceFileName_20, parse_tree__prog_io__MaybeSecondTermResult_22, parse_tree__prog_io__STATE_VARIABLE_RevItems_36_36, &parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38, parse_tree__prog_io__STATE_VARIABLE_Specs_32_32, parse_tree__prog_io__STATE_VARIABLE_Specs_24, parse_tree__prog_io__STATE_VARIABLE_Error_33_33, parse_tree__prog_io__STATE_VARIABLE_Error_25, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_34_34, &parse_tree__prog_io__V_23_23);
    }
#line 316 "prog_io.m"
    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 316 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 316 "prog_io.m"
      {
#line 316 "prog_io.m"
        parse_tree__prog_io__LastItem_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38, (MR_Integer) 0)));
#line 316 "prog_io.m"
        parse_tree__prog_io__RevItems1_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38, (MR_Integer) 1)));
#line 317 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__LastItem_46)) == (MR_mktag((MR_Integer) 1)));
#line 317 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 317 "prog_io.m"
          {
#line 317 "prog_io.m"
            parse_tree__prog_io__ItemModuleEnd_48 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__LastItem_46), (MR_Integer) 1);
#line 318 "prog_io.m"
            parse_tree__prog_io__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_48, (MR_Integer) 0)));
#line 318 "prog_io.m"
            parse_tree__prog_io___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_48, (MR_Integer) 1)));
#line 318 "prog_io.m"
            parse_tree__prog_io___SeqNum_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_48, (MR_Integer) 2)));
#line 318 "prog_io.m"
            {
#line 318 "prog_io.m"
              parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__V_63_63);
            }
#line 317 "prog_io.m"
          }
#line 316 "prog_io.m"
      }
#line 321 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 320 "prog_io.m"
      parse_tree__prog_io__RevItems_51 = parse_tree__prog_io__RevItems1_47;
#line 321 "prog_io.m"
    else
#line 322 "prog_io.m"
      parse_tree__prog_io__RevItems_51 = parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38;
#line 324 "prog_io.m"
    {
#line 324 "prog_io.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__RevItems_51, &parse_tree__prog_io__STATE_VARIABLE_Items_18_56);
    }
#line 329 "prog_io.m"
    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_Items_18_56)) == (MR_mktag((MR_Integer) 1)));
#line 329 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 329 "prog_io.m"
      {
#line 329 "prog_io.m"
        parse_tree__prog_io__Item_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Items_18_56, (MR_Integer) 0)));
#line 329 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Items_19_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Items_18_56, (MR_Integer) 1)));
#line 330 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Item_52)) == (MR_mktag((MR_Integer) 0)));
#line 330 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 330 "prog_io.m"
          {
#line 330 "prog_io.m"
            parse_tree__prog_io__ItemModuleStart_53 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_52), (MR_Integer) 0);
#line 331 "prog_io.m"
            parse_tree__prog_io__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_53, (MR_Integer) 0)));
#line 331 "prog_io.m"
            parse_tree__prog_io__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_53, (MR_Integer) 1)));
#line 331 "prog_io.m"
            parse_tree__prog_io__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_53, (MR_Integer) 2)));
#line 331 "prog_io.m"
            {
#line 331 "prog_io.m"
              parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__V_64_64);
            }
#line 330 "prog_io.m"
          }
#line 329 "prog_io.m"
      }
#line 334 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 331 "prog_io.m"
      *parse_tree__prog_io__Items_12 = parse_tree__prog_io__STATE_VARIABLE_Items_19_57;
#line 334 "prog_io.m"
    else
#line 337 "prog_io.m"
      {
#line 337 "prog_io.m"
        {
#line 337 "prog_io.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.remove_main_module_start_end_wrappers\'/3", (MR_String) "module does not start with \140:- module\' declaration");
#line 337 "prog_io.m"
          return;
        }
#line 337 "prog_io.m"
      }
#line 284 "prog_io.m"
  }
#line 277 "prog_io.m"
}

#line 127 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__peek_at_file_6_p_0(
#line 127 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_7,
#line 127 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName0_8,
#line 127 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_9,
#line 127 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_10)
#line 127 "prog_io.m"
{
#line 343 "prog_io.m"
  {
#line 343 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 343 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_12;
#line 345 "prog_io.m"
    MR_String parse_tree__prog_io___SourceFileName_13;
#line 345 "prog_io.m"
    MR_Word parse_tree__prog_io___ModuleDeclItem_14;
#line 345 "prog_io.m"
    MR_Word parse_tree__prog_io___MaybeSecondTerm_15;
#line 345 "prog_io.m"
    MR_Word parse_tree__prog_io___Error_16;
#line 345 "prog_io.m"
    MR_Word parse_tree__prog_io__V_17_17;

#line 344 "prog_io.m"
    {
#line 344 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_12);
    }
#line 345 "prog_io.m"
    {
#line 345 "prog_io.m"
      parse_tree__prog_io__read_first_item_12_p_0(parse_tree__prog_io__DefaultModuleName_7, parse_tree__prog_io__SourceFileName0_8, &parse_tree__prog_io___SourceFileName_13, parse_tree__prog_io__ModuleName_9, &parse_tree__prog_io___ModuleDeclItem_14, &parse_tree__prog_io___MaybeSecondTerm_15, parse_tree__prog_io__Specs_10, &parse_tree__prog_io___Error_16, parse_tree__prog_io__SeqNumCounter0_12, &parse_tree__prog_io__V_17_17);
    }
#line 343 "prog_io.m"
  }
#line 127 "prog_io.m"
}

#line 119 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__check_module_has_expected_name_4_p_0(
#line 119 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_5,
#line 119 "prog_io.m"
  MR_Word parse_tree__prog_io__ExpectedName_6,
#line 119 "prog_io.m"
  MR_Word parse_tree__prog_io__ActualName_7,
#line 119 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_8)
#line 119 "prog_io.m"
{
#line 186 "prog_io.m"
  {
#line 186 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 178 "prog_io.m"
    {
#line 178 "prog_io.m"
      parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__ActualName_7, parse_tree__prog_io__ExpectedName_6);
    }
#line 178 "prog_io.m"
    parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 186 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 182 "prog_io.m"
      {
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_9;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__Msg_10;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_11;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_14_14;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_15_15;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_16_16;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_19_19;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_21_21;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_25_25;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_26_26;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_29_29;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_32_32;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_33_33;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_43_43;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_44_44;
#line 182 "prog_io.m"
        MR_Word parse_tree__prog_io__V_48_48;

#line 179 "prog_io.m"
        {
#line 179 "prog_io.m"
          parse_tree__prog_io__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_15_15, 0) = ((MR_Box) (parse_tree__prog_io__FileName_5));
#line 179 "prog_io.m"
        }
#line 181 "prog_io.m"
        {
#line 181 "prog_io.m"
          parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__ExpectedName_6));
#line 181 "prog_io.m"
        }
#line 182 "prog_io.m"
        {
#line 182 "prog_io.m"
          parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 182 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__ActualName_7));
#line 182 "prog_io.m"
        }
#line 182 "prog_io.m"
        {
#line 182 "prog_io.m"
          parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 182 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[3])));
#line 182 "prog_io.m"
        }
#line 182 "prog_io.m"
        {
#line 182 "prog_io.m"
          parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[28])));
#line 182 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 182 "prog_io.m"
        }
#line 181 "prog_io.m"
        {
#line 181 "prog_io.m"
          parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[27])));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 181 "prog_io.m"
        }
#line 181 "prog_io.m"
        {
#line 181 "prog_io.m"
          parse_tree__prog_io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io__V_26_26));
#line 181 "prog_io.m"
        }
#line 181 "prog_io.m"
        {
#line 181 "prog_io.m"
          parse_tree__prog_io__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[26])));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io__V_24_24));
#line 181 "prog_io.m"
        }
#line 180 "prog_io.m"
        {
#line 180 "prog_io.m"
          parse_tree__prog_io__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io__V_21_21));
#line 180 "prog_io.m"
        }
#line 180 "prog_io.m"
        {
#line 180 "prog_io.m"
          parse_tree__prog_io__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[25])));
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io__V_19_19));
#line 180 "prog_io.m"
        }
#line 179 "prog_io.m"
        {
#line 179 "prog_io.m"
          parse_tree__prog_io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io__V_15_15));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io__V_16_16));
#line 179 "prog_io.m"
        }
#line 179 "prog_io.m"
        {
#line 179 "prog_io.m"
          parse_tree__prog_io__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[24])));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io__V_14_14));
#line 179 "prog_io.m"
        }
#line 183 "prog_io.m"
        {
#line 183 "prog_io.m"
          parse_tree__prog_io__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 183 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_9));
#line 183 "prog_io.m"
        }
#line 183 "prog_io.m"
        {
#line 183 "prog_io.m"
          parse_tree__prog_io__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 183 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "prog_io.m"
        }
#line 183 "prog_io.m"
        {
#line 183 "prog_io.m"
          parse_tree__prog_io__Msg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 183 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 183 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 2) = ((MR_Box) ((MR_Integer) 0));
#line 183 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 3) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 183 "prog_io.m"
        }
#line 184 "prog_io.m"
        {
#line 184 "prog_io.m"
          parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__Msg_10));
#line 184 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "prog_io.m"
        }
#line 184 "prog_io.m"
        {
#line 184 "prog_io.m"
          parse_tree__prog_io__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 184 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 184 "prog_io.m"
        }
#line 185 "prog_io.m"
        {
#line 185 "prog_io.m"
          MR_Word base;
#line 185 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "prog_io.m"
          *parse_tree__prog_io__Specs_8 = base;
#line 185 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_11));
#line 185 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "prog_io.m"
        }
#line 182 "prog_io.m"
      }
#line 186 "prog_io.m"
    else
#line 187 "prog_io.m"
      *parse_tree__prog_io__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 186 "prog_io.m"
  }
#line 119 "prog_io.m"
}

#line 170 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_opt_file_8_p_0_1(
#line 170 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 170 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 170 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 170 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3)
#line 170 "prog_io.m"
{
#line 170 "prog_io.m"
  {
#line 170 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 170 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__4_4;

#line 170 "prog_io.m"
    {
#line 170 "prog_io.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 5))), &parse_tree__prog_io__conv0_HeadVar__4_4);
    }
#line 170 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__4_4));
#line 170 "prog_io.m"
  }
#line 170 "prog_io.m"
}

#line 101 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_opt_file_8_p_0(
#line 101 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_9,
#line 101 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_10,
#line 101 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 101 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_12,
#line 101 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_13,
#line 101 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_14)
#line 101 "prog_io.m"
{
#line 167 "prog_io.m"
  {
#line 167 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 167 "prog_io.m"
    MR_Word parse_tree__prog_io__Dirs_16;
#line 167 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_18;
#line 167 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSpecs_19;
#line 167 "prog_io.m"
    MR_Word parse_tree__prog_io__NameSpecs_21;
#line 167 "prog_io.m"
    MR_Word parse_tree__prog_io__V_25_25;
#line 169 "prog_io.m"
    MR_Word parse_tree__prog_io__V_17_17;
#line 169 "prog_io.m"
    MR_Word parse_tree__prog_io__V_20_20;

#line 168 "prog_io.m"
    {
#line 168 "prog_io.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__prog_io__Globals_9, (MR_Integer) 643, &parse_tree__prog_io__Dirs_16);
    }
#line 170 "prog_io.m"
    {
#line 170 "prog_io.m"
      parse_tree__prog_io__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 170 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_3[0]));
#line 170 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_opt_file_8_p_0_1));
#line 170 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 170 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 3) = ((MR_Box) ((MR_Integer) 0));
#line 170 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 4) = ((MR_Box) (parse_tree__prog_io__Dirs_16));
#line 170 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 5) = ((MR_Box) (parse_tree__prog_io__FileName_10));
#line 170 "prog_io.m"
    }
#line 169 "prog_io.m"
    {
#line 169 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(parse_tree__prog_io__Globals_9, parse_tree__prog_io__V_25_25, parse_tree__prog_io__DefaultModuleName_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, &parse_tree__prog_io__V_17_17, &parse_tree__prog_io__ModuleName_18, parse_tree__prog_io__Items_12, &parse_tree__prog_io__ItemSpecs_19, parse_tree__prog_io__Error_14, &parse_tree__prog_io__V_20_20);
    }
#line 173 "prog_io.m"
    {
#line 173 "prog_io.m"
      parse_tree__prog_io__check_module_has_expected_name_4_p_0(parse_tree__prog_io__FileName_10, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_18, &parse_tree__prog_io__NameSpecs_21);
    }
#line 175 "prog_io.m"
    {
#line 175 "prog_io.m"
      *parse_tree__prog_io__Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_19, parse_tree__prog_io__NameSpecs_21);
    }
#line 167 "prog_io.m"
  }
#line 101 "prog_io.m"
}

#line 90 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_if_changed_12_p_0(
#line 90 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_29,
#line 90 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_13,
#line 90 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_14,
#line 90 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 90 "prog_io.m"
  MR_Word parse_tree__prog_io__OldTimestamp_16,
#line 90 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_17,
#line 90 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_18,
#line 90 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_19,
#line 90 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_20,
#line 90 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_21,
#line 90 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_22)
#line 90 "prog_io.m"
{
#line 161 "prog_io.m"
  {
#line 161 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 161 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;

#line 163 "prog_io.m"
    {
#line 163 "prog_io.m"
      parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 163 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io__OldTimestamp_16));
#line 163 "prog_io.m"
    }
#line 162 "prog_io.m"
    {
#line 162 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(parse_tree__prog_io__Globals_13, parse_tree__prog_io__OpenFile_14, parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__V_26_26, (MR_Integer) 0, parse_tree__prog_io__FileData_17, parse_tree__prog_io__ModuleName_18, parse_tree__prog_io__Items_19, parse_tree__prog_io__Specs_20, parse_tree__prog_io__Error_21, parse_tree__prog_io__MaybeModuleTimestamp_22);
#line 162 "prog_io.m"
      return;
    }
#line 161 "prog_io.m"
  }
#line 90 "prog_io.m"
}

#line 84 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_12_p_0(
#line 84 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_28,
#line 84 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_13,
#line 84 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_14,
#line 84 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 84 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnTimestamp_16,
#line 84 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_17,
#line 84 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_18,
#line 84 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_19,
#line 84 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_20,
#line 84 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_21,
#line 84 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_22)
#line 84 "prog_io.m"
{
#line 154 "prog_io.m"
  {
#line 154 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 155 "prog_io.m"
    {
#line 155 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(parse_tree__prog_io__Globals_13, parse_tree__prog_io__OpenFile_14, parse_tree__prog_io__DefaultModuleName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__ReturnTimestamp_16, parse_tree__prog_io__FileData_17, parse_tree__prog_io__ModuleName_18, parse_tree__prog_io__Items_19, parse_tree__prog_io__Specs_20, parse_tree__prog_io__Error_21, parse_tree__prog_io__MaybeModuleTimestamp_22);
#line 155 "prog_io.m"
      return;
    }
#line 154 "prog_io.m"
  }
#line 84 "prog_io.m"
}

void mercury__parse_tree__prog_io__init(void)
{
}

void mercury__parse_tree__prog_io__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_read_item_result_0);
}

void mercury__parse_tree__prog_io__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io. */
