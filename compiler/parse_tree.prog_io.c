/*
** Automatically generated from `prog_io.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "set_tree234.mih"
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




#line 143 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 146 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 149 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0;

#line 152 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 155 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 158 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_1[2];

#line 161 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1;

#line 164 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_2[1];

#line 167 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2;

#line 170 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_0[1];

#line 173 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_1[1];

#line 176 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_2[1];

#line 179 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_item_result_0[3];

#line 182 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_item_result_0[3];

#line 185 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_item_result_0[3];

#line 188 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0_10001(
#line 191 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 193 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 196 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0_10001(
#line 199 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 201 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 203 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 467 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_115_95_108_111_111_112_95_95_91_52_93_95_48_14_p_0(
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_29,
#line 467 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_31,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_32,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_33,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_34,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_35,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_36,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38);

#line 196 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(
#line 196 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 196 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_15,
#line 196 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_16,
#line 196 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeOldTimestamp_17,
#line 196 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnTimestamp_18,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_19,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_20,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_21,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_22,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_23,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_24);

#line 504 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0(
#line 504 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 504 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 504 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 504 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0(
#line 504 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 504 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 766 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_include_module_decl_4_p_0(
#line 766 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 766 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 766 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 766 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8);

#line 758 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_use_module_decl_4_p_0(
#line 758 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 758 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 758 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 758 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8);

#line 750 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_import_module_decl_4_p_0(
#line 750 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 750 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 750 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 750 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8);

#line 682 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_3(
#line 682 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 682 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 682 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 678 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_2(
#line 678 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 678 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 678 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 674 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_1(
#line 674 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 674 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 674 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 542 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0(
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__Item_16,
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93,
#line 542 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleName_94,
#line 542 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95,
#line 542 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96,
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97,
#line 542 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_98,
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_99,
#line 542 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_100,
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_101,
#line 542 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_102);

#line 509 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_item_result_6_p_0(
#line 509 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 509 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 509 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 509 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23,
#line 509 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24,
#line 509 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadItemResult_11);

#line 469 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_14_p_1(
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_29,
#line 469 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeReadTermResult_18,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_31,
#line 469 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_32,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_33,
#line 469 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_34,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_35,
#line 469 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_36,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37,
#line 469 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38);

#line 448 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_module_decl_3_p_0(
#line 448 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_4,
#line 448 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 448 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_6);

#line 359 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_item_12_p_0(
#line 359 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 359 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39,
#line 359 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_40,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_15,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclItem_16,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeSecondTerm_17,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_18,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_19,
#line 359 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42);

#line 275 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_all_items_8_p_0(
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_9,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_10,
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_11,
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_12,
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_24,
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_25);

#line 167 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_opt_file_8_p_0_1(
#line 167 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 167 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 167 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 167 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[49][2];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[1][9];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[1][1];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_5[1][7];




static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[49][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not for the until-then-current module."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and the module qualifiers"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: source file"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "contains module named"))
  },
  /* row 32 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_4[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The module names do not match:"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "actual"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "vs"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "no qualification"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The module qualifiers"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "do not match:"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the module"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in this"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot be a submodule of the current module"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 48 */
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[10])))
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



#line 800 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 808 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 817 "parse_tree.prog_io.c"
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

#line 832 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 840 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 848 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0
};

#line 854 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1 = {
  (MR_String) "read_item_errors",
  (MR_Integer) 2,
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

#line 869 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
};

#line 874 "parse_tree.prog_io.c"
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

#line 889 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0
};

#line 894 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1
};

#line 899 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_2[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2
};

#line 904 "parse_tree.prog_io.c"
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

#line 923 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_item_result_0[3] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2
};

#line 930 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_item_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 937 "parse_tree.prog_io.c"
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

#line 958 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0_10001(
#line 961 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 963 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 965 "parse_tree.prog_io.c"
{
#line 967 "parse_tree.prog_io.c"
  {
#line 969 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 972 "parse_tree.prog_io.c"
    {
#line 974 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____read_item_result_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 977 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 979 "parse_tree.prog_io.c"
  }
#line 981 "parse_tree.prog_io.c"
}

#line 984 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0_10001(
#line 987 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 989 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 991 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 993 "parse_tree.prog_io.c"
{
#line 995 "parse_tree.prog_io.c"
  {
#line 997 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 1000 "parse_tree.prog_io.c"
    {
#line 1002 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____read_item_result_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 1005 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 1007 "parse_tree.prog_io.c"
  }
#line 1009 "parse_tree.prog_io.c"
}

#line 467 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_115_95_108_111_111_112_95_95_91_52_93_95_48_14_p_0(
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_29,
#line 467 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_31,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_32,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_33,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_34,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_35,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_36,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38)
#line 467 "prog_io.m"
{
#line 473 "prog_io.m"
  while (MR_TRUE)
#line 473 "prog_io.m"
    {
#line 473 "prog_io.m"
      /* tailcall optimized into a loop */
#line 473 "prog_io.m"
      {
#line 473 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 473 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadTermResult_24;
#line 473 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadItemResult_25;
#line 473 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42_42;

#line 476 "prog_io.m"
        {
#line 476 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30, &parse_tree__prog_io__ReadTermResult_24);
        }
#line 480 "prog_io.m"
        {
#line 480 "prog_io.m"
          parse_tree__prog_io__read_term_to_item_result_6_p_0(parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_29, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30, parse_tree__prog_io__ReadTermResult_24, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42_42, &parse_tree__prog_io__ReadItemResult_25);
        }
#line 485 "prog_io.m"
        if ((parse_tree__prog_io__ReadItemResult_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "prog_io.m"
          {
#line 483 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_RevItems_32 = parse_tree__prog_io__STATE_VARIABLE_RevItems_0_31;
#line 483 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_34 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_33;
#line 483 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_36 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_35;
#line 483 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42_42;
#line 483 "prog_io.m"
          }
#line 485 "prog_io.m"
        else
#line 485 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__ReadItemResult_25)) == (MR_mktag((MR_Integer) 1))))
#line 486 "prog_io.m"
            {
#line 486 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSpecs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadItemResult_25, (MR_Integer) 0)));
#line 486 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemErrors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadItemResult_25, (MR_Integer) 1)));
#line 486 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_55_55;
#line 486 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_56_56;

#line 490 "prog_io.m"
              {
#line 490 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_55_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_26, parse_tree__prog_io__STATE_VARIABLE_Specs_0_33);
              }
#line 491 "prog_io.m"
              {
#line 491 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_56_56 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_35, parse_tree__prog_io__ItemErrors_27);
              }
#line 492 "prog_io.m"
              /* direct tailcall eliminated */
#line 492 "prog_io.m"
              {
#line 492 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_33 = parse_tree__prog_io__STATE_VARIABLE_Specs_55_55;
#line 492 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_35 = parse_tree__prog_io__STATE_VARIABLE_Errors_56_56;
#line 492 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_37 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42_42;

#line 492 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_37;
#line 492 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_35 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_35;
#line 492 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_33 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_33;
#line 492 "prog_io.m"
              }
#line 492 "prog_io.m"
              continue;
#line 486 "prog_io.m"
            }
#line 485 "prog_io.m"
          else
#line 495 "prog_io.m"
            {
#line 495 "prog_io.m"
              MR_Word parse_tree__prog_io__Item_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadItemResult_25, (MR_Integer) 0)));
#line 495 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_45_45;
#line 495 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_46_46;
#line 495 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_47_47;
#line 495 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_43_67;
#line 495 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_44_68;

#line 496 "prog_io.m"
              {
#line 496 "prog_io.m"
                parse_tree__prog_io__process_one_item_in_loop_14_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__Item_28, parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_29, &parse_tree__prog_io__STATE_VARIABLE_ModuleName_43_67, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_44_68, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_31, &parse_tree__prog_io__STATE_VARIABLE_RevItems_45_45, parse_tree__prog_io__STATE_VARIABLE_Specs_0_33, &parse_tree__prog_io__STATE_VARIABLE_Specs_46_46, parse_tree__prog_io__STATE_VARIABLE_Errors_0_35, &parse_tree__prog_io__STATE_VARIABLE_Errors_47_47);
              }
#line 498 "prog_io.m"
              /* direct tailcall eliminated */
#line 498 "prog_io.m"
              {
#line 498 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0__tmp_copy_29 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_43_67;
#line 498 "prog_io.m"
                MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_30 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_44_68;
#line 498 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0__tmp_copy_31 = parse_tree__prog_io__STATE_VARIABLE_RevItems_45_45;
#line 498 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_33 = parse_tree__prog_io__STATE_VARIABLE_Specs_46_46;
#line 498 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_35 = parse_tree__prog_io__STATE_VARIABLE_Errors_47_47;
#line 498 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_37 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42_42;

#line 498 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_37;
#line 498 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_35 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_35;
#line 498 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_33 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_33;
#line 498 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_RevItems_0_31 = parse_tree__prog_io__STATE_VARIABLE_RevItems_0__tmp_copy_31;
#line 498 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_30;
#line 498 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_29 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0__tmp_copy_29;
#line 498 "prog_io.m"
              }
#line 498 "prog_io.m"
              continue;
#line 495 "prog_io.m"
            }
#line 473 "prog_io.m"
      }
#line 473 "prog_io.m"
      break;
#line 473 "prog_io.m"
    }
#line 467 "prog_io.m"
}

#line 196 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(
#line 196 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 196 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_15,
#line 196 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_16,
#line 196 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeOldTimestamp_17,
#line 196 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnTimestamp_18,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_19,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_20,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_21,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_22,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_23,
#line 196 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_24)
#line 196 "prog_io.m"
{
#line 205 "prog_io.m"
  {
#line 205 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 205 "prog_io.m"
    MR_Word parse_tree__prog_io__OldInputStream_26;
#line 205 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenResult_27;
#line 207 "prog_io.m"
    void MR_CALL (* parse_tree__prog_io__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 207 "prog_io.m"
    MR_Box parse_tree__prog_io__conv2_OpenResult_27;
#line 207 "prog_io.m"
    MR_Box parse_tree__prog_io__conv1_STATE_VARIABLE_IO_42_42;

#line 206 "prog_io.m"
    {
#line 206 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__OldInputStream_26);
    }
#line 207 "prog_io.m"
    parse_tree__prog_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_15, (MR_Integer) 1)));
#line 207 "prog_io.m"
    {
#line 207 "prog_io.m"
      parse_tree__prog_io__func_0(((MR_Box) parse_tree__prog_io__OpenFile_15), &parse_tree__prog_io__conv2_OpenResult_27, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_io__conv1_STATE_VARIABLE_IO_42_42);
    }
#line 207 "prog_io.m"
    parse_tree__prog_io__OpenResult_27 = ((MR_Word) parse_tree__prog_io__conv2_OpenResult_27);
#line 245 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__OpenResult_27)) == (MR_mktag((MR_Integer) 1))))
#line 246 "prog_io.m"
      {
#line 246 "prog_io.m"
        MR_String parse_tree__prog_io__ErrorMsg_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0)));
#line 246 "prog_io.m"
        MR_String parse_tree__prog_io__Progname_36;
#line 246 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_37;
#line 246 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_38;
#line 246 "prog_io.m"
        MR_Word parse_tree__prog_io__V_45_45;
#line 246 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 246 "prog_io.m"
        MR_Word parse_tree__prog_io__V_49_49;
#line 246 "prog_io.m"
        MR_Word parse_tree__prog_io__V_50_50;
#line 246 "prog_io.m"
        MR_Word parse_tree__prog_io__V_56_56;
#line 246 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 246 "prog_io.m"
        MR_Word parse_tree__prog_io__V_61_61;
#line 246 "prog_io.m"
        MR_Word parse_tree__prog_io__V_62_62;

#line 247 "prog_io.m"
        *parse_tree__prog_io__MaybeFileData_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 248 "prog_io.m"
        *parse_tree__prog_io__ModuleName_20 = parse_tree__prog_io__DefaultModuleName_16;
#line 249 "prog_io.m"
        *parse_tree__prog_io__Items_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "prog_io.m"
        *parse_tree__prog_io__MaybeModuleTimestamp_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "prog_io.m"
        {
#line 252 "prog_io.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io__Progname_36);
        }
#line 253 "prog_io.m"
        {
#line 253 "prog_io.m"
          parse_tree__prog_io__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io__Progname_36));
#line 253 "prog_io.m"
        }
#line 253 "prog_io.m"
        {
#line 253 "prog_io.m"
          parse_tree__prog_io__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 253 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_35));
#line 253 "prog_io.m"
        }
#line 253 "prog_io.m"
        {
#line 253 "prog_io.m"
          parse_tree__prog_io__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__V_50_50));
#line 253 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[2])));
#line 253 "prog_io.m"
        }
#line 253 "prog_io.m"
        {
#line 253 "prog_io.m"
          parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[48])));
#line 253 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 253 "prog_io.m"
        }
#line 253 "prog_io.m"
        {
#line 253 "prog_io.m"
          parse_tree__prog_io__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_37, 0) = ((MR_Box) (parse_tree__prog_io__V_45_45));
#line 253 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_37, 1) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 253 "prog_io.m"
        }
#line 255 "prog_io.m"
        {
#line 255 "prog_io.m"
          parse_tree__prog_io__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_37));
#line 255 "prog_io.m"
        }
#line 255 "prog_io.m"
        {
#line 255 "prog_io.m"
          parse_tree__prog_io__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "prog_io.m"
        }
#line 255 "prog_io.m"
        {
#line 255 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 2) = ((MR_Box) ((MR_Integer) 0));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 3) = ((MR_Box) (parse_tree__prog_io__V_61_61));
#line 255 "prog_io.m"
        }
#line 255 "prog_io.m"
        {
#line 255 "prog_io.m"
          parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 255 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "prog_io.m"
        }
#line 254 "prog_io.m"
        {
#line 254 "prog_io.m"
          parse_tree__prog_io__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 254 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 254 "prog_io.m"
        }
#line 256 "prog_io.m"
        {
#line 256 "prog_io.m"
          MR_Word base;
#line 256 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_io.m"
          *parse_tree__prog_io__Specs_22 = base;
#line 256 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_38));
#line 256 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "prog_io.m"
        }
#line 257 "prog_io.m"
        {
#line 257 "prog_io.m"
          *parse_tree__prog_io__Errors_23 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 0)));
        }
#line 246 "prog_io.m"
      }
#line 245 "prog_io.m"
    else
#line 209 "prog_io.m"
      {
#line 209 "prog_io.m"
        MR_Box parse_tree__prog_io__FileData_28 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0));
#line 209 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleInputStream_34;
#line 227 "prog_io.m"
        MR_Word parse_tree__prog_io__OldTimestamp_33;
#line 227 "prog_io.m"
        MR_Word parse_tree__prog_io__V_72_72;
#line 227 "prog_io.m"
        MR_Word parse_tree__prog_io__V_79_79;

#line 210 "prog_io.m"
        {
#line 210 "prog_io.m"
          MR_Word base;
#line 210 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io.m"
          *parse_tree__prog_io__MaybeFileData_19 = base;
#line 210 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_io__FileData_28;
#line 210 "prog_io.m"
        }
#line 222 "prog_io.m"
        if ((parse_tree__prog_io__ReturnTimestamp_18 == (MR_Integer) 1))
#line 224 "prog_io.m"
          *parse_tree__prog_io__MaybeModuleTimestamp_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 222 "prog_io.m"
        else
#line 212 "prog_io.m"
          {
#line 212 "prog_io.m"
            MR_String parse_tree__prog_io__InputStreamName_29;
#line 212 "prog_io.m"
            MR_Word parse_tree__prog_io__TimestampResult_30;

#line 213 "prog_io.m"
            {
#line 213 "prog_io.m"
              mercury__io__input_stream_name_3_p_0(&parse_tree__prog_io__InputStreamName_29);
            }
#line 214 "prog_io.m"
            {
#line 214 "prog_io.m"
              mercury__io__file_modification_time_4_p_0(parse_tree__prog_io__InputStreamName_29, &parse_tree__prog_io__TimestampResult_30);
            }
#line 218 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__TimestampResult_30)) == (MR_mktag((MR_Integer) 1))))
#line 219 "prog_io.m"
              {
#line 219 "prog_io.m"
                MR_Word parse_tree__prog_io__V_69_69 = (MR_Word) parse_tree__prog_io__TimestampResult_30;

#line 220 "prog_io.m"
                {
#line 220 "prog_io.m"
                  MR_Word base;
#line 220 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 220 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestamp_24 = base;
#line 220 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_69_69));
#line 220 "prog_io.m"
                }
#line 219 "prog_io.m"
              }
#line 218 "prog_io.m"
            else
#line 216 "prog_io.m"
              {
#line 216 "prog_io.m"
                MR_Word parse_tree__prog_io__Timestamp_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__TimestampResult_30, (MR_Integer) 0)));
#line 216 "prog_io.m"
                MR_Word parse_tree__prog_io__V_70_70;
#line 216 "prog_io.m"
                MR_Word parse_tree__prog_io__V_71_71;

#line 217 "prog_io.m"
                {
#line 217 "prog_io.m"
                  parse_tree__prog_io__V_71_71 = libs__timestamp__time_t_to_timestamp_1_f_0(parse_tree__prog_io__Timestamp_31);
                }
#line 217 "prog_io.m"
                {
#line 217 "prog_io.m"
                  parse_tree__prog_io__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 217 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io__V_71_71));
#line 217 "prog_io.m"
                }
#line 217 "prog_io.m"
                {
#line 217 "prog_io.m"
                  MR_Word base;
#line 217 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestamp_24 = base;
#line 217 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_70_70));
#line 217 "prog_io.m"
                }
#line 216 "prog_io.m"
              }
#line 212 "prog_io.m"
          }
#line 227 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeOldTimestamp_17)) == (MR_mktag((MR_Integer) 1)));
#line 227 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 227 "prog_io.m"
          {
#line 227 "prog_io.m"
            parse_tree__prog_io__OldTimestamp_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeOldTimestamp_17, (MR_Integer) 0)));
#line 228 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_io__MaybeModuleTimestamp_24)) == (MR_mktag((MR_Integer) 1)));
#line 228 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 228 "prog_io.m"
              {
#line 228 "prog_io.m"
                parse_tree__prog_io__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io__MaybeModuleTimestamp_24, (MR_Integer) 0)));
#line 228 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_72_72)) == (MR_mktag((MR_Integer) 0)));
#line 228 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 228 "prog_io.m"
                  {
#line 228 "prog_io.m"
                    parse_tree__prog_io__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_72_72, (MR_Integer) 0)));
#line 228 "prog_io.m"
                    {
#line 228 "prog_io.m"
                      parse_tree__prog_io__succeeded = libs__timestamp____Unify____timestamp_0_0(parse_tree__prog_io__OldTimestamp_33, parse_tree__prog_io__V_79_79);
                    }
#line 228 "prog_io.m"
                  }
#line 228 "prog_io.m"
              }
#line 227 "prog_io.m"
          }
#line 239 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 235 "prog_io.m"
          {
#line 235 "prog_io.m"
            *parse_tree__prog_io__ModuleName_20 = parse_tree__prog_io__DefaultModuleName_16;
#line 236 "prog_io.m"
            *parse_tree__prog_io__Items_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 237 "prog_io.m"
            *parse_tree__prog_io__Specs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "prog_io.m"
            {
#line 238 "prog_io.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__Errors_23);
            }
#line 235 "prog_io.m"
          }
#line 239 "prog_io.m"
        else
#line 240 "prog_io.m"
          {
#line 240 "prog_io.m"
            parse_tree__prog_io__read_all_items_8_p_0(parse_tree__prog_io__Globals_14, parse_tree__prog_io__DefaultModuleName_16, parse_tree__prog_io__ModuleName_20, parse_tree__prog_io__Items_21, parse_tree__prog_io__Specs_22, parse_tree__prog_io__Errors_23);
          }
#line 243 "prog_io.m"
        {
#line 243 "prog_io.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io__OldInputStream_26, &parse_tree__prog_io__ModuleInputStream_34);
        }
#line 244 "prog_io.m"
        {
#line 244 "prog_io.m"
          mercury__io__close_input_3_p_0(parse_tree__prog_io__ModuleInputStream_34);
#line 244 "prog_io.m"
          return;
        }
#line 209 "prog_io.m"
      }
#line 205 "prog_io.m"
  }
#line 196 "prog_io.m"
}

#line 504 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0(
#line 504 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 504 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 504 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 504 "prog_io.m"
{
#line 504 "prog_io.m"
  {
#line 504 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 504 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_23 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 504 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_24 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 504 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_23 == parse_tree__prog_io__CastY_24);
#line 504 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1628 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 504 "prog_io.m"
    else
#line 504 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "prog_io.m"
        if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "prog_io.m"
          *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 504 "prog_io.m"
        else
#line 504 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1642 "parse_tree.prog_io.c"
            *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 504 "prog_io.m"
          else
#line 1646 "parse_tree.prog_io.c"
            *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 504 "prog_io.m"
      else
#line 504 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 504 "prog_io.m"
          {
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 504 "prog_io.m"
            if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1661 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 504 "prog_io.m"
            else
#line 504 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 504 "prog_io.m"
                {
#line 504 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 504 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 504 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_13_13;

#line 504 "prog_io.m"
                  {
#line 504 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], &parse_tree__prog_io__V_13_13, ((MR_Box) (parse_tree__prog_io__V_29_29)), ((MR_Box) (parse_tree__prog_io__V_11_11)));
                  }
#line 1681 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_13_13 == (MR_Integer) 0);
#line 504 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 504 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 504 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_13_13;
#line 504 "prog_io.m"
                  else
#line 504 "prog_io.m"
                    {
#line 504 "prog_io.m"
                      {
#line 504 "prog_io.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_28_28)), ((MR_Box) (parse_tree__prog_io__V_12_12)));
#line 504 "prog_io.m"
                        return;
                      }
#line 504 "prog_io.m"
                    }
#line 504 "prog_io.m"
                }
#line 504 "prog_io.m"
              else
#line 1706 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 504 "prog_io.m"
          }
#line 504 "prog_io.m"
        else
#line 504 "prog_io.m"
          {
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 504 "prog_io.m"
            if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1719 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 504 "prog_io.m"
            else
#line 504 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1725 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 504 "prog_io.m"
              else
#line 504 "prog_io.m"
                {
#line 504 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));

#line 504 "prog_io.m"
                  {
#line 504 "prog_io.m"
                    parse_tree__prog_item____Compare____item_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_30_30, parse_tree__prog_io__V_22_22);
#line 504 "prog_io.m"
                    return;
                  }
#line 504 "prog_io.m"
                }
#line 504 "prog_io.m"
          }
#line 504 "prog_io.m"
  }
#line 504 "prog_io.m"
}

#line 504 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0(
#line 504 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 504 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 504 "prog_io.m"
{
#line 504 "prog_io.m"
  {
#line 504 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 504 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_11 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 504 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_12 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 504 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_11 == parse_tree__prog_io__CastY_12);
#line 504 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 504 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 504 "prog_io.m"
    else
#line 504 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "prog_io.m"
        {
#line 504 "prog_io.m"
          MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 504 "prog_io.m"
          MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 504 "prog_io.m"
          parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 504 "prog_io.m"
        }
#line 504 "prog_io.m"
      else
#line 504 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 504 "prog_io.m"
          {
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_13_13;
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_14_14;
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7;
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8;

#line 504 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 504 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 504 "prog_io.m"
              {
#line 504 "prog_io.m"
                parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 504 "prog_io.m"
                parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1818 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_io_scalar_common_1[0];
#line 1820 "parse_tree.prog_io.c"
                {
#line 1822 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_13_13, ((MR_Box) (parse_tree__prog_io__V_5_5)), ((MR_Box) (parse_tree__prog_io__V_7_7)));
                }
#line 504 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 504 "prog_io.m"
                  {
#line 1829 "parse_tree.prog_io.c"
                    parse_tree__prog_io__TypeInfo_14_14 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 1831 "parse_tree.prog_io.c"
                    {
#line 1833 "parse_tree.prog_io.c"
                      return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_14_14, ((MR_Box) (parse_tree__prog_io__V_6_6)), ((MR_Box) (parse_tree__prog_io__V_8_8)));
                    }
#line 504 "prog_io.m"
                  }
#line 504 "prog_io.m"
              }
#line 504 "prog_io.m"
          }
#line 504 "prog_io.m"
        else
#line 504 "prog_io.m"
          {
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10;

#line 504 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 504 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 504 "prog_io.m"
              {
#line 504 "prog_io.m"
                parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1859 "parse_tree.prog_io.c"
                {
#line 1861 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__prog_item____Unify____item_0_0(parse_tree__prog_io__V_9_9, parse_tree__prog_io__V_10_10);
                }
#line 504 "prog_io.m"
              }
#line 504 "prog_io.m"
          }
#line 504 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 504 "prog_io.m"
  }
#line 504 "prog_io.m"
}

#line 766 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_include_module_decl_4_p_0(
#line 766 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 766 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 766 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 766 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8)
#line 766 "prog_io.m"
{
#line 769 "prog_io.m"
  {
#line 769 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 769 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDefn_9;
#line 769 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleDefn_10;
#line 769 "prog_io.m"
    MR_Word parse_tree__prog_io__V_11_11;

#line 770 "prog_io.m"
    {
#line 770 "prog_io.m"
      parse_tree__prog_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 0) = ((MR_Box) (parse_tree__prog_io__ModuleSpecifier_7));
#line 770 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "prog_io.m"
    }
#line 770 "prog_io.m"
    {
#line 770 "prog_io.m"
      parse_tree__prog_io__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 770 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 1) = ((MR_Box) (parse_tree__prog_io__V_11_11));
#line 770 "prog_io.m"
    }
#line 771 "prog_io.m"
    {
#line 771 "prog_io.m"
      parse_tree__prog_io__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 771 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_9));
#line 771 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 771 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_6));
#line 771 "prog_io.m"
    }
#line 772 "prog_io.m"
    *parse_tree__prog_io__Item_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_10);
#line 769 "prog_io.m"
  }
#line 766 "prog_io.m"
}

#line 758 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_use_module_decl_4_p_0(
#line 758 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 758 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 758 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 758 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8)
#line 758 "prog_io.m"
{
#line 761 "prog_io.m"
  {
#line 761 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 761 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDefn_9;
#line 761 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleDefn_10;
#line 761 "prog_io.m"
    MR_Word parse_tree__prog_io__V_11_11;

#line 762 "prog_io.m"
    {
#line 762 "prog_io.m"
      parse_tree__prog_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 0) = ((MR_Box) (parse_tree__prog_io__ModuleSpecifier_7));
#line 762 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 762 "prog_io.m"
    }
#line 762 "prog_io.m"
    {
#line 762 "prog_io.m"
      parse_tree__prog_io__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 762 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 1) = ((MR_Box) (parse_tree__prog_io__V_11_11));
#line 762 "prog_io.m"
    }
#line 763 "prog_io.m"
    {
#line 763 "prog_io.m"
      parse_tree__prog_io__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 763 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_9));
#line 763 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 763 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_6));
#line 763 "prog_io.m"
    }
#line 764 "prog_io.m"
    *parse_tree__prog_io__Item_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_10);
#line 761 "prog_io.m"
  }
#line 758 "prog_io.m"
}

#line 750 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_import_module_decl_4_p_0(
#line 750 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 750 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 750 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 750 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8)
#line 750 "prog_io.m"
{
#line 753 "prog_io.m"
  {
#line 753 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 753 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDefn_9;
#line 753 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleDefn_10;
#line 753 "prog_io.m"
    MR_Word parse_tree__prog_io__V_11_11;

#line 754 "prog_io.m"
    {
#line 754 "prog_io.m"
      parse_tree__prog_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 0) = ((MR_Box) (parse_tree__prog_io__ModuleSpecifier_7));
#line 754 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 754 "prog_io.m"
    }
#line 754 "prog_io.m"
    {
#line 754 "prog_io.m"
      parse_tree__prog_io__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 754 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 1) = ((MR_Box) (parse_tree__prog_io__V_11_11));
#line 754 "prog_io.m"
    }
#line 755 "prog_io.m"
    {
#line 755 "prog_io.m"
      parse_tree__prog_io__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 755 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_9));
#line 755 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 755 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_6));
#line 755 "prog_io.m"
    }
#line 756 "prog_io.m"
    *parse_tree__prog_io__Item_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_10);
#line 753 "prog_io.m"
  }
#line 750 "prog_io.m"
}

#line 682 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_3(
#line 682 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 682 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 682 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 682 "prog_io.m"
{
#line 682 "prog_io.m"
  {
#line 682 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 682 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_Item_8;

#line 682 "prog_io.m"
    {
#line 682 "prog_io.m"
      parse_tree__prog_io__make_pseudo_include_module_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv2_Item_8);
    }
#line 682 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv2_Item_8));
#line 682 "prog_io.m"
  }
#line 682 "prog_io.m"
}

#line 678 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_2(
#line 678 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 678 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 678 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 678 "prog_io.m"
{
#line 678 "prog_io.m"
  {
#line 678 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 678 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_Item_8;

#line 678 "prog_io.m"
    {
#line 678 "prog_io.m"
      parse_tree__prog_io__make_pseudo_use_module_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv1_Item_8);
    }
#line 678 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv1_Item_8));
#line 678 "prog_io.m"
  }
#line 678 "prog_io.m"
}

#line 674 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0_1(
#line 674 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 674 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 674 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 674 "prog_io.m"
{
#line 674 "prog_io.m"
  {
#line 674 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 674 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_Item_8;

#line 674 "prog_io.m"
    {
#line 674 "prog_io.m"
      parse_tree__prog_io__make_pseudo_import_module_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_Item_8);
    }
#line 674 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_Item_8));
#line 674 "prog_io.m"
  }
#line 674 "prog_io.m"
}

#line 542 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_one_item_in_loop_14_p_0(
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__Item_16,
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93,
#line 542 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleName_94,
#line 542 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95,
#line 542 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96,
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97,
#line 542 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_98,
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_99,
#line 542 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_100,
#line 542 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_101,
#line 542 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_102)
#line 542 "prog_io.m"
{
#line 549 "prog_io.m"
  {
#line 549 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 589 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 2))))
#line 671 "prog_io.m"
      {
#line 671 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemModuleDefn_55 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_16), (MR_Integer) 2);
#line 671 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleDefn_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_55, (MR_Integer) 0)));
#line 671 "prog_io.m"
        MR_Word parse_tree__prog_io__Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_55, (MR_Integer) 1)));
#line 671 "prog_io.m"
        MR_Integer parse_tree__prog_io__SeqNum_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_55, (MR_Integer) 2)));
#line 677 "prog_io.m"
        MR_Word parse_tree__prog_io__Modules_59;

#line 673 "prog_io.m"
        parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__ModuleDefn_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 673 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 673 "prog_io.m"
          {
#line 673 "prog_io.m"
            parse_tree__prog_io__Modules_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 1)));
#line 675 "prog_io.m"
            {
#line 675 "prog_io.m"
              MR_Word parse_tree__prog_io__TypeCtorInfo_295_295;
#line 675 "prog_io.m"
              MR_Word parse_tree__prog_io__ImportItems_60;
#line 675 "prog_io.m"
              MR_Word parse_tree__prog_io__V_131_131;

#line 674 "prog_io.m"
              {
#line 674 "prog_io.m"
                parse_tree__prog_io__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 674 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_131_131, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_5[0]));
#line 674 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_131_131, 1) = ((MR_Box) (parse_tree__prog_io__process_one_item_in_loop_14_p_0_1));
#line 674 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_131_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 674 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_131_131, 3) = ((MR_Box) (parse_tree__prog_io__Context_57));
#line 674 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_131_131, 4) = ((MR_Box) (parse_tree__prog_io__SeqNum_58));
#line 674 "prog_io.m"
              }
#line 2236 "parse_tree.prog_io.c"
              parse_tree__prog_io__TypeCtorInfo_295_295 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 674 "prog_io.m"
              {
#line 674 "prog_io.m"
                mercury__list__map_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io__TypeCtorInfo_295_295, parse_tree__prog_io__V_131_131, parse_tree__prog_io__Modules_59, &parse_tree__prog_io__ImportItems_60);
              }
#line 676 "prog_io.m"
              {
#line 676 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_295_295, parse_tree__prog_io__ImportItems_60, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97);
              }
#line 675 "prog_io.m"
            }
#line 673 "prog_io.m"
          }
#line 673 "prog_io.m"
        else
#line 681 "prog_io.m"
          {
#line 681 "prog_io.m"
            MR_Word parse_tree__prog_io__Modules_273;

#line 677 "prog_io.m"
            parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__ModuleDefn_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 677 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 677 "prog_io.m"
              {
#line 677 "prog_io.m"
                parse_tree__prog_io__Modules_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 1)));
#line 679 "prog_io.m"
                {
#line 679 "prog_io.m"
                  MR_Word parse_tree__prog_io__TypeCtorInfo_299_299;
#line 679 "prog_io.m"
                  MR_Word parse_tree__prog_io__UseItems_61;
#line 679 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_133_133;

#line 678 "prog_io.m"
                  {
#line 678 "prog_io.m"
                    parse_tree__prog_io__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 678 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_133_133, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_5[0]));
#line 678 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_133_133, 1) = ((MR_Box) (parse_tree__prog_io__process_one_item_in_loop_14_p_0_2));
#line 678 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_133_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 678 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_133_133, 3) = ((MR_Box) (parse_tree__prog_io__Context_57));
#line 678 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_133_133, 4) = ((MR_Box) (parse_tree__prog_io__SeqNum_58));
#line 678 "prog_io.m"
                  }
#line 2292 "parse_tree.prog_io.c"
                  parse_tree__prog_io__TypeCtorInfo_299_299 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 678 "prog_io.m"
                  {
#line 678 "prog_io.m"
                    mercury__list__map_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io__TypeCtorInfo_299_299, parse_tree__prog_io__V_133_133, parse_tree__prog_io__Modules_273, &parse_tree__prog_io__UseItems_61);
                  }
#line 680 "prog_io.m"
                  {
#line 680 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_299_299, parse_tree__prog_io__UseItems_61, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97);
                  }
#line 679 "prog_io.m"
                }
#line 677 "prog_io.m"
              }
#line 677 "prog_io.m"
            else
#line 685 "prog_io.m"
              {
#line 685 "prog_io.m"
                MR_Word parse_tree__prog_io__Modules_272;

#line 681 "prog_io.m"
                parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__ModuleDefn_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 681 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 681 "prog_io.m"
                  {
#line 681 "prog_io.m"
                    parse_tree__prog_io__Modules_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_56, (MR_Integer) 1)));
#line 683 "prog_io.m"
                    {
#line 683 "prog_io.m"
                      MR_Word parse_tree__prog_io__TypeCtorInfo_303_303;
#line 683 "prog_io.m"
                      MR_Word parse_tree__prog_io__IncludeItems_62;
#line 683 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_135_135;

#line 682 "prog_io.m"
                      {
#line 682 "prog_io.m"
                        parse_tree__prog_io__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 682 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_5[0]));
#line 682 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io__process_one_item_in_loop_14_p_0_3));
#line 682 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 682 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 3) = ((MR_Box) (parse_tree__prog_io__Context_57));
#line 682 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 4) = ((MR_Box) (parse_tree__prog_io__SeqNum_58));
#line 682 "prog_io.m"
                      }
#line 2348 "parse_tree.prog_io.c"
                      parse_tree__prog_io__TypeCtorInfo_303_303 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 682 "prog_io.m"
                      {
#line 682 "prog_io.m"
                        mercury__list__map_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io__TypeCtorInfo_303_303, parse_tree__prog_io__V_135_135, parse_tree__prog_io__Modules_272, &parse_tree__prog_io__IncludeItems_62);
                      }
#line 684 "prog_io.m"
                      {
#line 684 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_303_303, parse_tree__prog_io__IncludeItems_62, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97);
                      }
#line 683 "prog_io.m"
                    }
#line 681 "prog_io.m"
                  }
#line 681 "prog_io.m"
                else
#line 686 "prog_io.m"
                  {
#line 686 "prog_io.m"
                    MR_Word base;
#line 686 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 686 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 686 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 686 "prog_io.m"
                  }
#line 685 "prog_io.m"
              }
#line 681 "prog_io.m"
          }
#line 671 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93;
#line 671 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 671 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 671 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_102 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_101;
#line 671 "prog_io.m"
      }
#line 589 "prog_io.m"
    else
#line 589 "prog_io.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 1))))
#line 590 "prog_io.m"
        {
#line 590 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemModuleEnd_33 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_16), (MR_Integer) 1);
#line 590 "prog_io.m"
          MR_Word parse_tree__prog_io__EndModuleSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_33, (MR_Integer) 0)));
#line 590 "prog_io.m"
          MR_Word parse_tree__prog_io__EndQualifierList_36;
#line 590 "prog_io.m"
          MR_String parse_tree__prog_io__EndModuleName_37;
#line 590 "prog_io.m"
          MR_Word parse_tree__prog_io__CurQualifierList_38;
#line 590 "prog_io.m"
          MR_String parse_tree__prog_io__CurModuleName_39;
#line 590 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemContext_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_33, (MR_Integer) 1)));
#line 591 "prog_io.m"
          MR_Integer parse_tree__prog_io__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_33, (MR_Integer) 2)));
#line 599 "prog_io.m"
          MR_Word parse_tree__prog_io__TypeCtorInfo_287_287;

#line 592 "prog_io.m"
          {
#line 592 "prog_io.m"
            mdbcomp__sym_name__sym_name_to_qualifier_list_and_name_3_p_0(parse_tree__prog_io__EndModuleSymName_34, &parse_tree__prog_io__EndQualifierList_36, &parse_tree__prog_io__EndModuleName_37);
          }
#line 594 "prog_io.m"
          {
#line 594 "prog_io.m"
            mdbcomp__sym_name__sym_name_to_qualifier_list_and_name_3_p_0(parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93, &parse_tree__prog_io__CurQualifierList_38, &parse_tree__prog_io__CurModuleName_39);
          }
#line 599 "prog_io.m"
          parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__EndModuleName_37, parse_tree__prog_io__CurModuleName_39) == 0);
#line 599 "prog_io.m"
          if (parse_tree__prog_io__succeeded)
#line 599 "prog_io.m"
            {
#line 2435 "parse_tree.prog_io.c"
              parse_tree__prog_io__TypeCtorInfo_287_287 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 600 "prog_io.m"
              {
#line 600 "prog_io.m"
                parse_tree__prog_io__succeeded = mercury__list__sublist_2_p_0(parse_tree__prog_io__TypeCtorInfo_287_287, parse_tree__prog_io__EndQualifierList_36, parse_tree__prog_io__CurQualifierList_38);
              }
#line 599 "prog_io.m"
            }
#line 605 "prog_io.m"
          if (parse_tree__prog_io__succeeded)
#line 603 "prog_io.m"
            {
#line 603 "prog_io.m"
              MR_Word parse_tree__prog_io__V_138_138;

#line 603 "prog_io.m"
              {
#line 603 "prog_io.m"
                parse_tree__prog_io__V_138_138 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
              }
#line 602 "prog_io.m"
              {
#line 602 "prog_io.m"
                mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io__EndModuleSymName_34, parse_tree__prog_io__V_138_138, parse_tree__prog_io__STATE_VARIABLE_ModuleName_94);
              }
#line 603 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_102 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_101;
#line 603 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 603 "prog_io.m"
            }
#line 605 "prog_io.m"
          else
#line 608 "prog_io.m"
            {
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__TypeCtorInfo_290_290;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__NamePieces_42;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__QualifierPieces_43;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__V_205_205;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__V_206_206;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__V_209_209;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__V_210_210;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__V_211_211;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__V_212_212;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__V_218_218;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__Pieces_264;
#line 608 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_265;

#line 609 "prog_io.m"
              parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__EndModuleName_37, parse_tree__prog_io__CurModuleName_39) == 0);
#line 611 "prog_io.m"
              if (parse_tree__prog_io__succeeded)
#line 610 "prog_io.m"
                parse_tree__prog_io__NamePieces_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 611 "prog_io.m"
              else
#line 612 "prog_io.m"
                {
#line 612 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_157_157;
#line 612 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_160_160;
#line 612 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_161_161;
#line 612 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_162_162;
#line 612 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_165_165;
#line 612 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_168_168;
#line 612 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_169_169;

#line 613 "prog_io.m"
                  {
#line 613 "prog_io.m"
                    parse_tree__prog_io__V_161_161 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_161_161, 0) = ((MR_Box) (parse_tree__prog_io__EndModuleName_37));
#line 613 "prog_io.m"
                  }
#line 614 "prog_io.m"
                  {
#line 614 "prog_io.m"
                    parse_tree__prog_io__V_169_169 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 614 "prog_io.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_169_169, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_39));
#line 614 "prog_io.m"
                  }
#line 614 "prog_io.m"
                  {
#line 614 "prog_io.m"
                    parse_tree__prog_io__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_168_168, 0) = ((MR_Box) (parse_tree__prog_io__V_169_169));
#line 614 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_168_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "prog_io.m"
                  }
#line 614 "prog_io.m"
                  {
#line 614 "prog_io.m"
                    parse_tree__prog_io__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_165_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[36])));
#line 614 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io__V_168_168));
#line 614 "prog_io.m"
                  }
#line 613 "prog_io.m"
                  {
#line 613 "prog_io.m"
                    parse_tree__prog_io__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_162_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[35])));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_162_162, 1) = ((MR_Box) (parse_tree__prog_io__V_165_165));
#line 613 "prog_io.m"
                  }
#line 613 "prog_io.m"
                  {
#line 613 "prog_io.m"
                    parse_tree__prog_io__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_160_160, 0) = ((MR_Box) (parse_tree__prog_io__V_161_161));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_160_160, 1) = ((MR_Box) (parse_tree__prog_io__V_162_162));
#line 613 "prog_io.m"
                  }
#line 613 "prog_io.m"
                  {
#line 613 "prog_io.m"
                    parse_tree__prog_io__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_157_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[34])));
#line 613 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_157_157, 1) = ((MR_Box) (parse_tree__prog_io__V_160_160));
#line 613 "prog_io.m"
                  }
#line 612 "prog_io.m"
                  {
#line 612 "prog_io.m"
                    parse_tree__prog_io__NamePieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__NamePieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[33])));
#line 612 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__NamePieces_42, 1) = ((MR_Box) (parse_tree__prog_io__V_157_157));
#line 612 "prog_io.m"
                  }
#line 612 "prog_io.m"
                }
#line 616 "prog_io.m"
              {
#line 616 "prog_io.m"
                parse_tree__prog_io__succeeded = mercury__list__sublist_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io__EndQualifierList_36, parse_tree__prog_io__CurQualifierList_38);
              }
#line 618 "prog_io.m"
              if (parse_tree__prog_io__succeeded)
#line 617 "prog_io.m"
                parse_tree__prog_io__QualifierPieces_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "prog_io.m"
              else
#line 628 "prog_io.m"
                {
#line 628 "prog_io.m"
                  MR_Word parse_tree__prog_io__EndQualifier_44;
#line 628 "prog_io.m"
                  MR_Word parse_tree__prog_io__CurQualifierPiece_49;
#line 628 "prog_io.m"
                  MR_Word parse_tree__prog_io__LinkPieces_51;
#line 628 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_184_184;
#line 628 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_187_187;
#line 628 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_190_190;
#line 628 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_191_191;
#line 628 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_192_192;
#line 628 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_195_195;
#line 628 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_198_198;

#line 621 "prog_io.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io__EndModuleSymName_34)) == (MR_mktag((MR_Integer) 1))))
#line 620 "prog_io.m"
                    {
#line 620 "prog_io.m"
                      MR_String parse_tree__prog_io__V_45_45;

#line 620 "prog_io.m"
                      parse_tree__prog_io__EndQualifier_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__EndModuleSymName_34, (MR_Integer) 0)));
#line 620 "prog_io.m"
                      parse_tree__prog_io__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__EndModuleSymName_34, (MR_Integer) 1)));
#line 620 "prog_io.m"
                    }
#line 621 "prog_io.m"
                  else
#line 622 "prog_io.m"
                    {
#line 626 "prog_io.m"
                      {
#line 626 "prog_io.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.process_one_item_in_loop\'/14", (MR_String) "unqualified symname does not pass sublist test");
#line 626 "prog_io.m"
                        return;
                      }
#line 622 "prog_io.m"
                    }
#line 632 "prog_io.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93)) == (MR_mktag((MR_Integer) 1))))
#line 630 "prog_io.m"
                    {
#line 630 "prog_io.m"
                      MR_Word parse_tree__prog_io__CurQualifier_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93, (MR_Integer) 0)));
#line 630 "prog_io.m"
                      MR_String parse_tree__prog_io__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93, (MR_Integer) 1)));

#line 631 "prog_io.m"
                      {
#line 631 "prog_io.m"
                        parse_tree__prog_io__CurQualifierPiece_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "prog_io.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io__CurQualifierPiece_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 631 "prog_io.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io__CurQualifierPiece_49, 1) = ((MR_Box) (parse_tree__prog_io__CurQualifier_47));
#line 631 "prog_io.m"
                      }
#line 630 "prog_io.m"
                    }
#line 632 "prog_io.m"
                  else
#line 633 "prog_io.m"
                    {
#line 634 "prog_io.m"
                      parse_tree__prog_io__CurQualifierPiece_49 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[37]);
#line 633 "prog_io.m"
                    }
#line 639 "prog_io.m"
                  if ((parse_tree__prog_io__NamePieces_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "prog_io.m"
                    {
#line 638 "prog_io.m"
                      parse_tree__prog_io__LinkPieces_51 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[39]);
#line 637 "prog_io.m"
                    }
#line 639 "prog_io.m"
                  else
#line 641 "prog_io.m"
                    parse_tree__prog_io__LinkPieces_51 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[24]);
#line 645 "prog_io.m"
                  {
#line 645 "prog_io.m"
                    parse_tree__prog_io__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_191_191, 1) = ((MR_Box) (parse_tree__prog_io__EndQualifier_44));
#line 645 "prog_io.m"
                  }
#line 646 "prog_io.m"
                  {
#line 646 "prog_io.m"
                    parse_tree__prog_io__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_198_198, 0) = ((MR_Box) (parse_tree__prog_io__CurQualifierPiece_49));
#line 646 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_198_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "prog_io.m"
                  }
#line 646 "prog_io.m"
                  {
#line 646 "prog_io.m"
                    parse_tree__prog_io__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_195_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[36])));
#line 646 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_195_195, 1) = ((MR_Box) (parse_tree__prog_io__V_198_198));
#line 646 "prog_io.m"
                  }
#line 645 "prog_io.m"
                  {
#line 645 "prog_io.m"
                    parse_tree__prog_io__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_192_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[35])));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_192_192, 1) = ((MR_Box) (parse_tree__prog_io__V_195_195));
#line 645 "prog_io.m"
                  }
#line 645 "prog_io.m"
                  {
#line 645 "prog_io.m"
                    parse_tree__prog_io__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_190_190, 0) = ((MR_Box) (parse_tree__prog_io__V_191_191));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_190_190, 1) = ((MR_Box) (parse_tree__prog_io__V_192_192));
#line 645 "prog_io.m"
                  }
#line 645 "prog_io.m"
                  {
#line 645 "prog_io.m"
                    parse_tree__prog_io__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_187_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[34])));
#line 645 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_187_187, 1) = ((MR_Box) (parse_tree__prog_io__V_190_190));
#line 645 "prog_io.m"
                  }
#line 644 "prog_io.m"
                  {
#line 644 "prog_io.m"
                    parse_tree__prog_io__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_184_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[40])));
#line 644 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_184_184, 1) = ((MR_Box) (parse_tree__prog_io__V_187_187));
#line 644 "prog_io.m"
                  }
#line 644 "prog_io.m"
                  {
#line 644 "prog_io.m"
                    parse_tree__prog_io__QualifierPieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io__LinkPieces_51, parse_tree__prog_io__V_184_184);
                  }
#line 628 "prog_io.m"
                }
#line 2777 "parse_tree.prog_io.c"
              parse_tree__prog_io__TypeCtorInfo_290_290 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 651 "prog_io.m"
              {
#line 651 "prog_io.m"
                parse_tree__prog_io__V_206_206 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_290_290, parse_tree__prog_io__QualifierPieces_43, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4]));
              }
#line 650 "prog_io.m"
              {
#line 650 "prog_io.m"
                parse_tree__prog_io__V_205_205 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_290_290, parse_tree__prog_io__NamePieces_42, parse_tree__prog_io__V_206_206);
              }
#line 650 "prog_io.m"
              {
#line 650 "prog_io.m"
                parse_tree__prog_io__Pieces_264 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_290_290, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[20]), parse_tree__prog_io__V_205_205);
              }
#line 653 "prog_io.m"
              {
#line 653 "prog_io.m"
                parse_tree__prog_io__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 653 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_212_212, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_264));
#line 653 "prog_io.m"
              }
#line 653 "prog_io.m"
              {
#line 653 "prog_io.m"
                parse_tree__prog_io__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_211_211, 0) = ((MR_Box) (parse_tree__prog_io__V_212_212));
#line 653 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "prog_io.m"
              }
#line 653 "prog_io.m"
              {
#line 653 "prog_io.m"
                parse_tree__prog_io__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 653 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_210_210, 0) = ((MR_Box) (parse_tree__prog_io__ItemContext_269));
#line 653 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_210_210, 1) = ((MR_Box) (parse_tree__prog_io__V_211_211));
#line 653 "prog_io.m"
              }
#line 653 "prog_io.m"
              {
#line 653 "prog_io.m"
                parse_tree__prog_io__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_209_209, 0) = ((MR_Box) (parse_tree__prog_io__V_210_210));
#line 653 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "prog_io.m"
              }
#line 652 "prog_io.m"
              {
#line 652 "prog_io.m"
                parse_tree__prog_io__Spec_265 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 652 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_265, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_265, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 652 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_265, 2) = ((MR_Box) (parse_tree__prog_io__V_209_209));
#line 652 "prog_io.m"
              }
#line 654 "prog_io.m"
              {
#line 654 "prog_io.m"
                MR_Word base;
#line 654 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = base;
#line 654 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_265));
#line 654 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_99));
#line 654 "prog_io.m"
              }
#line 655 "prog_io.m"
              {
#line 655 "prog_io.m"
                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_101, parse_tree__prog_io__STATE_VARIABLE_Errors_102);
              }
#line 666 "prog_io.m"
              {
#line 666 "prog_io.m"
                parse_tree__prog_io__V_218_218 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
              }
#line 665 "prog_io.m"
              {
#line 665 "prog_io.m"
                mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io__EndModuleSymName_34, parse_tree__prog_io__V_218_218, parse_tree__prog_io__STATE_VARIABLE_ModuleName_94);
              }
#line 608 "prog_io.m"
            }
#line 669 "prog_io.m"
          {
#line 669 "prog_io.m"
            MR_Word base;
#line 669 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 669 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 669 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 669 "prog_io.m"
          }
#line 590 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 590 "prog_io.m"
        }
#line 589 "prog_io.m"
      else
#line 589 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 0))))
#line 557 "prog_io.m"
          {
#line 557 "prog_io.m"
            MR_Word parse_tree__prog_io__ItemModuleStart_23 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_16), (MR_Integer) 0);
#line 557 "prog_io.m"
            MR_Word parse_tree__prog_io__NewModuleSymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_23, (MR_Integer) 0)));
#line 557 "prog_io.m"
            MR_Word parse_tree__prog_io__ItemContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_23, (MR_Integer) 1)));
#line 558 "prog_io.m"
            MR_Integer parse_tree__prog_io__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_23, (MR_Integer) 2)));

#line 563 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__NewModuleSymName_24)) == (MR_mktag((MR_Integer) 1))))
#line 564 "prog_io.m"
              {
#line 564 "prog_io.m"
                MR_Word parse_tree__prog_io__NewQualifier_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__NewModuleSymName_24, (MR_Integer) 0)));
#line 564 "prog_io.m"
                MR_Word parse_tree__prog_io__OldQualifiersList_29;
#line 564 "prog_io.m"
                MR_Word parse_tree__prog_io__NewQualifiersList_30;
#line 564 "prog_io.m"
                MR_String parse_tree__prog_io__NewModuleName_263 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__NewModuleSymName_24, (MR_Integer) 1)));

#line 565 "prog_io.m"
                {
#line 565 "prog_io.m"
                  parse_tree__prog_io__OldQualifiersList_29 = mdbcomp__sym_name__sym_name_to_list_1_f_0(parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93);
                }
#line 566 "prog_io.m"
                {
#line 566 "prog_io.m"
                  parse_tree__prog_io__NewQualifiersList_30 = mdbcomp__sym_name__sym_name_to_list_1_f_0(parse_tree__prog_io__NewQualifier_28);
                }
#line 567 "prog_io.m"
                {
#line 567 "prog_io.m"
                  parse_tree__prog_io__succeeded = mercury__list__sublist_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io__NewQualifiersList_30, parse_tree__prog_io__OldQualifiersList_29);
                }
#line 569 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 568 "prog_io.m"
                  {
#line 568 "prog_io.m"
                    {
#line 568 "prog_io.m"
                      MR_Word base;
#line 568 "prog_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = base;
#line 568 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93));
#line 568 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__NewModuleName_263));
#line 568 "prog_io.m"
                    }
#line 568 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_Errors_102 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_101;
#line 568 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 568 "prog_io.m"
                  }
#line 569 "prog_io.m"
                else
#line 574 "prog_io.m"
                  {
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__Pieces_31;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__Spec_32;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_224_224;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_227_227;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_228_228;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_229_229;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_232_232;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_235_235;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_238_238;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_241_241;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_242_242;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_251_251;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_252_252;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_253_253;
#line 574 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_254_254;

#line 571 "prog_io.m"
                    {
#line 571 "prog_io.m"
                      parse_tree__prog_io__V_228_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_228_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_228_228, 1) = ((MR_Box) (parse_tree__prog_io__NewModuleSymName_24));
#line 571 "prog_io.m"
                    }
#line 574 "prog_io.m"
                    {
#line 574 "prog_io.m"
                      parse_tree__prog_io__V_242_242 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_242_242, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 574 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_242_242, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93));
#line 574 "prog_io.m"
                    }
#line 574 "prog_io.m"
                    {
#line 574 "prog_io.m"
                      parse_tree__prog_io__V_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_241_241, 0) = ((MR_Box) (parse_tree__prog_io__V_242_242));
#line 574 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_241_241, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])));
#line 574 "prog_io.m"
                    }
#line 573 "prog_io.m"
                    {
#line 573 "prog_io.m"
                      parse_tree__prog_io__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_238_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[46])));
#line 573 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_238_238, 1) = ((MR_Box) (parse_tree__prog_io__V_241_241));
#line 573 "prog_io.m"
                    }
#line 572 "prog_io.m"
                    {
#line 572 "prog_io.m"
                      parse_tree__prog_io__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_235_235, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[45])));
#line 572 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_235_235, 1) = ((MR_Box) (parse_tree__prog_io__V_238_238));
#line 572 "prog_io.m"
                    }
#line 572 "prog_io.m"
                    {
#line 572 "prog_io.m"
                      parse_tree__prog_io__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_232_232, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[44])));
#line 572 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_232_232, 1) = ((MR_Box) (parse_tree__prog_io__V_235_235));
#line 572 "prog_io.m"
                    }
#line 572 "prog_io.m"
                    {
#line 572 "prog_io.m"
                      parse_tree__prog_io__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_229_229, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[43])));
#line 572 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_229_229, 1) = ((MR_Box) (parse_tree__prog_io__V_232_232));
#line 572 "prog_io.m"
                    }
#line 571 "prog_io.m"
                    {
#line 571 "prog_io.m"
                      parse_tree__prog_io__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_227_227, 0) = ((MR_Box) (parse_tree__prog_io__V_228_228));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_227_227, 1) = ((MR_Box) (parse_tree__prog_io__V_229_229));
#line 571 "prog_io.m"
                    }
#line 571 "prog_io.m"
                    {
#line 571 "prog_io.m"
                      parse_tree__prog_io__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_224_224, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[42])));
#line 571 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_224_224, 1) = ((MR_Box) (parse_tree__prog_io__V_227_227));
#line 571 "prog_io.m"
                    }
#line 570 "prog_io.m"
                    {
#line 570 "prog_io.m"
                      parse_tree__prog_io__Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[41])));
#line 570 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_31, 1) = ((MR_Box) (parse_tree__prog_io__V_224_224));
#line 570 "prog_io.m"
                    }
#line 576 "prog_io.m"
                    {
#line 576 "prog_io.m"
                      parse_tree__prog_io__V_254_254 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 576 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_254_254, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_31));
#line 576 "prog_io.m"
                    }
#line 576 "prog_io.m"
                    {
#line 576 "prog_io.m"
                      parse_tree__prog_io__V_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_253_253, 0) = ((MR_Box) (parse_tree__prog_io__V_254_254));
#line 576 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_253_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "prog_io.m"
                    }
#line 576 "prog_io.m"
                    {
#line 576 "prog_io.m"
                      parse_tree__prog_io__V_252_252 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_252_252, 0) = ((MR_Box) (parse_tree__prog_io__ItemContext_25));
#line 576 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_252_252, 1) = ((MR_Box) (parse_tree__prog_io__V_253_253));
#line 576 "prog_io.m"
                    }
#line 576 "prog_io.m"
                    {
#line 576 "prog_io.m"
                      parse_tree__prog_io__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_251_251, 0) = ((MR_Box) (parse_tree__prog_io__V_252_252));
#line 576 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_251_251, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "prog_io.m"
                    }
#line 575 "prog_io.m"
                    {
#line 575 "prog_io.m"
                      parse_tree__prog_io__Spec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 575 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 575 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 575 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_32, 2) = ((MR_Box) (parse_tree__prog_io__V_251_251));
#line 575 "prog_io.m"
                    }
#line 577 "prog_io.m"
                    {
#line 577 "prog_io.m"
                      MR_Word base;
#line 577 "prog_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = base;
#line 577 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_32));
#line 577 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_99));
#line 577 "prog_io.m"
                    }
#line 578 "prog_io.m"
                    {
#line 578 "prog_io.m"
                      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 5)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_101, parse_tree__prog_io__STATE_VARIABLE_Errors_102);
                    }
#line 585 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = parse_tree__prog_io__NewModuleSymName_24;
#line 574 "prog_io.m"
                  }
#line 564 "prog_io.m"
              }
#line 563 "prog_io.m"
            else
#line 561 "prog_io.m"
              {
#line 561 "prog_io.m"
                MR_String parse_tree__prog_io__NewModuleName_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__NewModuleSymName_24, (MR_Integer) 0)));

#line 562 "prog_io.m"
                {
#line 562 "prog_io.m"
                  MR_Word base;
#line 562 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = base;
#line 562 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93));
#line 562 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__NewModuleName_27));
#line 562 "prog_io.m"
                }
#line 561 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 561 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Errors_102 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_101;
#line 561 "prog_io.m"
              }
#line 588 "prog_io.m"
            {
#line 588 "prog_io.m"
              MR_Word base;
#line 588 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 588 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 588 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 588 "prog_io.m"
            }
#line 557 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 557 "prog_io.m"
          }
#line 589 "prog_io.m"
        else
#line 589 "prog_io.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 712 "prog_io.m"
            {
#line 712 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemNothing_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 1)));
#line 712 "prog_io.m"
              MR_Word parse_tree__prog_io__MaybeWarning_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_81, (MR_Integer) 0)));
#line 712 "prog_io.m"
              MR_Integer parse_tree__prog_io__NothingSeqNum_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_81, (MR_Integer) 2)));
#line 712 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_81, (MR_Integer) 1)));

#line 717 "prog_io.m"
              if ((parse_tree__prog_io__MaybeWarning_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "prog_io.m"
                {
#line 716 "prog_io.m"
                  {
#line 716 "prog_io.m"
                    MR_Word base;
#line 716 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 716 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 716 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 716 "prog_io.m"
                  }
#line 715 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 715 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Errors_102 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_101;
#line 715 "prog_io.m"
                }
#line 717 "prog_io.m"
              else
#line 718 "prog_io.m"
                {
#line 718 "prog_io.m"
                  MR_Word parse_tree__prog_io__Warning_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWarning_82, (MR_Integer) 0)));
#line 718 "prog_io.m"
                  MR_Word parse_tree__prog_io__MaybeOption_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_84, (MR_Integer) 0)));
#line 718 "prog_io.m"
                  MR_String parse_tree__prog_io__Msg_86 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_84, (MR_Integer) 1)));
#line 718 "prog_io.m"
                  MR_Word parse_tree__prog_io__Term_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_84, (MR_Integer) 2)));
#line 718 "prog_io.m"
                  MR_Word parse_tree__prog_io__Warn_89;
#line 718 "prog_io.m"
                  MR_Word parse_tree__prog_io__NoWarnItemNothing_91;
#line 718 "prog_io.m"
                  MR_Word parse_tree__prog_io__NoWarnItem_92;

#line 723 "prog_io.m"
                  if ((parse_tree__prog_io__MaybeOption_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "prog_io.m"
                    parse_tree__prog_io__Warn_89 = (MR_Integer) 1;
#line 723 "prog_io.m"
                  else
#line 721 "prog_io.m"
                    {
#line 721 "prog_io.m"
                      MR_Word parse_tree__prog_io__Option_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeOption_85, (MR_Integer) 0)));

#line 722 "prog_io.m"
                      {
#line 722 "prog_io.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__Option_88, &parse_tree__prog_io__Warn_89);
                      }
#line 721 "prog_io.m"
                    }
#line 741 "prog_io.m"
                  if ((parse_tree__prog_io__Warn_89 == (MR_Integer) 0))
#line 742 "prog_io.m"
                    {
#line 742 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 742 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_Errors_102 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_101;
#line 742 "prog_io.m"
                    }
#line 741 "prog_io.m"
                  else
#line 728 "prog_io.m"
                    {
#line 728 "prog_io.m"
                      MR_Word parse_tree__prog_io__Halt_90;
#line 728 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_107_107;
#line 728 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_108_108;
#line 728 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_114_114;
#line 728 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_115_115;
#line 728 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_116_116;
#line 728 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_117_117;
#line 728 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_118_118;
#line 728 "prog_io.m"
                      MR_Word parse_tree__prog_io__Pieces_274;
#line 728 "prog_io.m"
                      MR_Word parse_tree__prog_io__Spec_275;

#line 729 "prog_io.m"
                      {
#line 729 "prog_io.m"
                        parse_tree__prog_io__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "prog_io.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 729 "prog_io.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_108_108, 1) = ((MR_Box) (parse_tree__prog_io__Msg_86));
#line 729 "prog_io.m"
                      }
#line 729 "prog_io.m"
                      {
#line 729 "prog_io.m"
                        parse_tree__prog_io__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io__V_108_108));
#line 729 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[2])));
#line 729 "prog_io.m"
                      }
#line 729 "prog_io.m"
                      {
#line 729 "prog_io.m"
                        parse_tree__prog_io__Pieces_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_274, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[47])));
#line 729 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_274, 1) = ((MR_Box) (parse_tree__prog_io__V_107_107));
#line 729 "prog_io.m"
                      }
#line 731 "prog_io.m"
                      {
#line 731 "prog_io.m"
                        parse_tree__prog_io__V_116_116 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_87);
                      }
#line 731 "prog_io.m"
                      {
#line 731 "prog_io.m"
                        parse_tree__prog_io__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 731 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_274));
#line 731 "prog_io.m"
                      }
#line 731 "prog_io.m"
                      {
#line 731 "prog_io.m"
                        parse_tree__prog_io__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_117_117, 0) = ((MR_Box) (parse_tree__prog_io__V_118_118));
#line 731 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "prog_io.m"
                      }
#line 731 "prog_io.m"
                      {
#line 731 "prog_io.m"
                        parse_tree__prog_io__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 731 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io__V_116_116));
#line 731 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_115_115, 1) = ((MR_Box) (parse_tree__prog_io__V_117_117));
#line 731 "prog_io.m"
                      }
#line 731 "prog_io.m"
                      {
#line 731 "prog_io.m"
                        parse_tree__prog_io__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_114_114, 0) = ((MR_Box) (parse_tree__prog_io__V_115_115));
#line 731 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "prog_io.m"
                      }
#line 730 "prog_io.m"
                      {
#line 730 "prog_io.m"
                        parse_tree__prog_io__Spec_275 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 730 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_275, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_275, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 730 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_275, 2) = ((MR_Box) (parse_tree__prog_io__V_114_114));
#line 730 "prog_io.m"
                      }
#line 732 "prog_io.m"
                      {
#line 732 "prog_io.m"
                        MR_Word base;
#line 732 "prog_io.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = base;
#line 732 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_275));
#line 732 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_99));
#line 732 "prog_io.m"
                      }
#line 734 "prog_io.m"
                      {
#line 734 "prog_io.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_15, (MR_Integer) 2, &parse_tree__prog_io__Halt_90);
                      }
#line 738 "prog_io.m"
                      if ((parse_tree__prog_io__Halt_90 == (MR_Integer) 0))
#line 739 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Errors_102 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_101;
#line 738 "prog_io.m"
                      else
#line 736 "prog_io.m"
                        {
#line 737 "prog_io.m"
                          {
#line 737 "prog_io.m"
                            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_101, parse_tree__prog_io__STATE_VARIABLE_Errors_102);
                          }
#line 736 "prog_io.m"
                        }
#line 728 "prog_io.m"
                    }
#line 744 "prog_io.m"
                  {
#line 744 "prog_io.m"
                    parse_tree__prog_io__NoWarnItemNothing_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 744 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothing_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 744 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothing_91, 1) = ((MR_Box) (parse_tree__prog_io__Context_284));
#line 744 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothing_91, 2) = ((MR_Box) (parse_tree__prog_io__NothingSeqNum_83));
#line 744 "prog_io.m"
                  }
#line 745 "prog_io.m"
                  {
#line 745 "prog_io.m"
                    parse_tree__prog_io__NoWarnItem_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "prog_io.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io__NoWarnItem_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 745 "prog_io.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io__NoWarnItem_92, 1) = ((MR_Box) (parse_tree__prog_io__NoWarnItemNothing_91));
#line 745 "prog_io.m"
                  }
#line 746 "prog_io.m"
                  {
#line 746 "prog_io.m"
                    MR_Word base;
#line 746 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 746 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__NoWarnItem_92));
#line 746 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 746 "prog_io.m"
                  }
#line 718 "prog_io.m"
                }
#line 712 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93;
#line 712 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 712 "prog_io.m"
            }
#line 589 "prog_io.m"
          else
#line 589 "prog_io.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 689 "prog_io.m"
              {
#line 689 "prog_io.m"
                MR_Word parse_tree__prog_io__ItemPragma_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 1)));
#line 689 "prog_io.m"
                MR_Word parse_tree__prog_io__Pragma_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_63, (MR_Integer) 0)));
#line 690 "prog_io.m"
                MR_Word parse_tree__prog_io__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_63, (MR_Integer) 1)));
#line 690 "prog_io.m"
                MR_Word parse_tree__prog_io__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_63, (MR_Integer) 2)));
#line 690 "prog_io.m"
                MR_Integer parse_tree__prog_io__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_63, (MR_Integer) 3)));
#line 693 "prog_io.m"
                MR_Word parse_tree__prog_io__SFNInfo_68;

#line 691 "prog_io.m"
                parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__Pragma_64)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_64, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 691 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 691 "prog_io.m"
                  {
#line 691 "prog_io.m"
                    parse_tree__prog_io__SFNInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_64, (MR_Integer) 1)));
#line 692 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = (MR_String) parse_tree__prog_io__SFNInfo_68;
#line 692 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97;
#line 691 "prog_io.m"
                  }
#line 691 "prog_io.m"
                else
#line 694 "prog_io.m"
                  {
#line 694 "prog_io.m"
                    {
#line 694 "prog_io.m"
                      MR_Word base;
#line 694 "prog_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 694 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 694 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 694 "prog_io.m"
                    }
#line 694 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 694 "prog_io.m"
                  }
#line 689 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93;
#line 689 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 689 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Errors_102 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_101;
#line 689 "prog_io.m"
              }
#line 589 "prog_io.m"
            else
#line 709 "prog_io.m"
              {
#line 710 "prog_io.m"
                {
#line 710 "prog_io.m"
                  MR_Word base;
#line 710 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_RevItems_98 = base;
#line 710 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 710 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_RevItems_0_97));
#line 710 "prog_io.m"
                }
#line 709 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_ModuleName_94 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_93;
#line 709 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_96 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_95;
#line 709 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_100 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_99;
#line 709 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Errors_102 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_101;
#line 709 "prog_io.m"
              }
#line 549 "prog_io.m"
  }
#line 542 "prog_io.m"
}

#line 509 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_item_result_6_p_0(
#line 509 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 509 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 509 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 509 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23,
#line 509 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24,
#line 509 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadItemResult_11)
#line 509 "prog_io.m"
{
#line 515 "prog_io.m"
  {
#line 515 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 515 "prog_io.m"
    if ((parse_tree__prog_io__ReadTermResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "prog_io.m"
      {
#line 516 "prog_io.m"
        *parse_tree__prog_io__ReadItemResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23;
#line 515 "prog_io.m"
      }
#line 515 "prog_io.m"
    else
#line 515 "prog_io.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_9)) == (MR_mktag((MR_Integer) 1))))
#line 518 "prog_io.m"
        {
#line 518 "prog_io.m"
          MR_String parse_tree__prog_io__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 518 "prog_io.m"
          MR_Integer parse_tree__prog_io__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 518 "prog_io.m"
          MR_Word parse_tree__prog_io__Pieces_14;
#line 518 "prog_io.m"
          MR_Word parse_tree__prog_io__Context_15;
#line 518 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_16;
#line 518 "prog_io.m"
          MR_Word parse_tree__prog_io__V_28_28;
#line 518 "prog_io.m"
          MR_Word parse_tree__prog_io__V_37_37;
#line 518 "prog_io.m"
          MR_Word parse_tree__prog_io__V_38_38;
#line 518 "prog_io.m"
          MR_Word parse_tree__prog_io__V_39_39;
#line 518 "prog_io.m"
          MR_Word parse_tree__prog_io__V_40_40;
#line 518 "prog_io.m"
          MR_Word parse_tree__prog_io__V_43_43;
#line 518 "prog_io.m"
          MR_Word parse_tree__prog_io__V_45_45;

#line 520 "prog_io.m"
          {
#line 520 "prog_io.m"
            parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 520 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_12));
#line 520 "prog_io.m"
          }
#line 520 "prog_io.m"
          {
#line 520 "prog_io.m"
            parse_tree__prog_io__Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 0) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 520 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])));
#line 520 "prog_io.m"
          }
#line 521 "prog_io.m"
          {
#line 521 "prog_io.m"
            parse_tree__prog_io__Context_15 = mercury__term__context_init_2_f_0(parse_tree__prog_io__FileName_8, parse_tree__prog_io__LineNumber_13);
          }
#line 523 "prog_io.m"
          {
#line 523 "prog_io.m"
            parse_tree__prog_io__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_14));
#line 523 "prog_io.m"
          }
#line 523 "prog_io.m"
          {
#line 523 "prog_io.m"
            parse_tree__prog_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io__V_40_40));
#line 523 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "prog_io.m"
          }
#line 523 "prog_io.m"
          {
#line 523 "prog_io.m"
            parse_tree__prog_io__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io__Context_15));
#line 523 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 523 "prog_io.m"
          }
#line 523 "prog_io.m"
          {
#line 523 "prog_io.m"
            parse_tree__prog_io__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 523 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "prog_io.m"
          }
#line 522 "prog_io.m"
          {
#line 522 "prog_io.m"
            parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 522 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 522 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_37_37));
#line 522 "prog_io.m"
          }
#line 524 "prog_io.m"
          {
#line 524 "prog_io.m"
            parse_tree__prog_io__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__Spec_16));
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "prog_io.m"
          }
#line 525 "prog_io.m"
          {
#line 525 "prog_io.m"
            parse_tree__prog_io__V_45_45 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 3)));
          }
#line 524 "prog_io.m"
          {
#line 524 "prog_io.m"
            MR_Word base;
#line 524 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "prog_io.m"
            *parse_tree__prog_io__ReadItemResult_11 = base;
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 524 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__V_45_45));
#line 524 "prog_io.m"
          }
#line 518 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23;
#line 518 "prog_io.m"
        }
#line 515 "prog_io.m"
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
#line 534 "prog_io.m"
              MR_Word parse_tree__prog_io__V_26_26;

#line 536 "prog_io.m"
              {
#line 536 "prog_io.m"
                parse_tree__prog_io__V_26_26 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 4)));
              }
#line 535 "prog_io.m"
              {
#line 535 "prog_io.m"
                MR_Word base;
#line 535 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "prog_io.m"
                *parse_tree__prog_io__ReadItemResult_11 = base;
#line 535 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_22));
#line 535 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__V_26_26));
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
#line 515 "prog_io.m"
  }
#line 509 "prog_io.m"
}

#line 469 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_14_p_1(
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_29,
#line 469 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeReadTermResult_18,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_0_31,
#line 469 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_RevItems_32,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_33,
#line 469 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_34,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_35,
#line 469 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_36,
#line 469 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37,
#line 469 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38)
#line 469 "prog_io.m"
{
#line 473 "prog_io.m"
  {
#line 473 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 473 "prog_io.m"
    MR_Word parse_tree__prog_io__ReadTermResult_24;
#line 473 "prog_io.m"
    MR_Word parse_tree__prog_io__ReadItemResult_25;
#line 473 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42_42;

#line 477 "prog_io.m"
    if ((parse_tree__prog_io__MaybeReadTermResult_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "prog_io.m"
      {
#line 476 "prog_io.m"
        {
#line 476 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30, &parse_tree__prog_io__ReadTermResult_24);
        }
#line 475 "prog_io.m"
      }
#line 477 "prog_io.m"
    else
#line 478 "prog_io.m"
      parse_tree__prog_io__ReadTermResult_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeReadTermResult_18, (MR_Integer) 0)));
#line 480 "prog_io.m"
    {
#line 480 "prog_io.m"
      parse_tree__prog_io__read_term_to_item_result_6_p_0(parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_29, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30, parse_tree__prog_io__ReadTermResult_24, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42_42, &parse_tree__prog_io__ReadItemResult_25);
    }
#line 485 "prog_io.m"
    if ((parse_tree__prog_io__ReadItemResult_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "prog_io.m"
      {
#line 483 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_RevItems_32 = parse_tree__prog_io__STATE_VARIABLE_RevItems_0_31;
#line 483 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_34 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_33;
#line 483 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_36 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_35;
#line 483 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42_42;
#line 483 "prog_io.m"
      }
#line 485 "prog_io.m"
    else
#line 485 "prog_io.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io__ReadItemResult_25)) == (MR_mktag((MR_Integer) 1))))
#line 486 "prog_io.m"
        {
#line 486 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpecs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadItemResult_25, (MR_Integer) 0)));
#line 486 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemErrors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadItemResult_25, (MR_Integer) 1)));
#line 486 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_55_55;
#line 486 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_56_56;

#line 490 "prog_io.m"
          {
#line 490 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Specs_55_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_26, parse_tree__prog_io__STATE_VARIABLE_Specs_0_33);
          }
#line 491 "prog_io.m"
          {
#line 491 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Errors_56_56 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_35, parse_tree__prog_io__ItemErrors_27);
          }
#line 492 "prog_io.m"
          {
#line 492 "prog_io.m"
            parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_115_95_108_111_111_112_95_95_91_52_93_95_48_14_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_29, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_31, parse_tree__prog_io__STATE_VARIABLE_RevItems_32, parse_tree__prog_io__STATE_VARIABLE_Specs_55_55, parse_tree__prog_io__STATE_VARIABLE_Specs_34, parse_tree__prog_io__STATE_VARIABLE_Errors_56_56, parse_tree__prog_io__STATE_VARIABLE_Errors_36, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42_42, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38);
#line 492 "prog_io.m"
            return;
          }
#line 486 "prog_io.m"
        }
#line 485 "prog_io.m"
      else
#line 495 "prog_io.m"
        {
#line 495 "prog_io.m"
          MR_Word parse_tree__prog_io__Item_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadItemResult_25, (MR_Integer) 0)));
#line 495 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_45_45;
#line 495 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_46_46;
#line 495 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_47_47;
#line 495 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_43_67;
#line 495 "prog_io.m"
          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_44_68;

#line 496 "prog_io.m"
          {
#line 496 "prog_io.m"
            parse_tree__prog_io__process_one_item_in_loop_14_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__Item_28, parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_29, &parse_tree__prog_io__STATE_VARIABLE_ModuleName_43_67, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_30, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_44_68, parse_tree__prog_io__STATE_VARIABLE_RevItems_0_31, &parse_tree__prog_io__STATE_VARIABLE_RevItems_45_45, parse_tree__prog_io__STATE_VARIABLE_Specs_0_33, &parse_tree__prog_io__STATE_VARIABLE_Specs_46_46, parse_tree__prog_io__STATE_VARIABLE_Errors_0_35, &parse_tree__prog_io__STATE_VARIABLE_Errors_47_47);
          }
#line 498 "prog_io.m"
          {
#line 498 "prog_io.m"
            parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_105_116_101_109_115_95_108_111_111_112_95_95_91_52_93_95_48_14_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__STATE_VARIABLE_ModuleName_43_67, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_44_68, parse_tree__prog_io__STATE_VARIABLE_RevItems_45_45, parse_tree__prog_io__STATE_VARIABLE_RevItems_32, parse_tree__prog_io__STATE_VARIABLE_Specs_46_46, parse_tree__prog_io__STATE_VARIABLE_Specs_34, parse_tree__prog_io__STATE_VARIABLE_Errors_47_47, parse_tree__prog_io__STATE_VARIABLE_Errors_36, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42_42, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38);
#line 498 "prog_io.m"
            return;
          }
#line 495 "prog_io.m"
        }
#line 473 "prog_io.m"
  }
#line 469 "prog_io.m"
}

#line 448 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_module_decl_3_p_0(
#line 448 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_4,
#line 448 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 448 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_6)
#line 448 "prog_io.m"
{
#line 450 "prog_io.m"
  {
#line 450 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 450 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemInfo_7;

#line 451 "prog_io.m"
    {
#line 451 "prog_io.m"
      parse_tree__prog_io__ItemInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 451 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemInfo_7, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_4));
#line 451 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemInfo_7, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 451 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemInfo_7, 2) = ((MR_Box) ((MR_Integer) -1));
#line 451 "prog_io.m"
    }
#line 452 "prog_io.m"
    *parse_tree__prog_io__Item_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io__ItemInfo_7);
#line 450 "prog_io.m"
  }
#line 448 "prog_io.m"
}

#line 359 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_item_12_p_0(
#line 359 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 359 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39,
#line 359 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_40,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_15,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclItem_16,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeSecondTerm_17,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_18,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_19,
#line 359 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41,
#line 359 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42)
#line 359 "prog_io.m"
{
#line 365 "prog_io.m"
  while (MR_TRUE)
#line 365 "prog_io.m"
    {
#line 365 "prog_io.m"
      /* tailcall optimized into a loop */
#line 365 "prog_io.m"
      {
#line 365 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFirstTerm_22;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFirstItem_23;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;
#line 384 "prog_io.m"
        MR_Word parse_tree__prog_io__SFNInfo_30;
#line 375 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstItem_24;
#line 375 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstItemPragma_25;
#line 375 "prog_io.m"
        MR_Word parse_tree__prog_io__Pragma_26;
#line 377 "prog_io.m"
        MR_Word parse_tree__prog_io__V_27_27;
#line 377 "prog_io.m"
        MR_Word parse_tree__prog_io__V_28_28;
#line 377 "prog_io.m"
        MR_Integer parse_tree__prog_io__V_29_29;

#line 369 "prog_io.m"
        {
#line 369 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39, &parse_tree__prog_io__MaybeFirstTerm_22);
        }
#line 370 "prog_io.m"
        {
#line 370 "prog_io.m"
          parse_tree__prog_io__V_46_46 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
        }
#line 370 "prog_io.m"
        {
#line 370 "prog_io.m"
          parse_tree__prog_io__read_term_to_item_result_6_p_0(parse_tree__prog_io__V_46_46, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39, parse_tree__prog_io__MaybeFirstTerm_22, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, &parse_tree__prog_io__MaybeFirstItem_23);
        }
#line 375 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstItem_23)) == (MR_mktag((MR_Integer) 2)));
#line 375 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 375 "prog_io.m"
          {
#line 375 "prog_io.m"
            parse_tree__prog_io__FirstItem_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstItem_23, (MR_Integer) 0)));
#line 376 "prog_io.m"
            parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__FirstItem_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstItem_24, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 376 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 376 "prog_io.m"
              {
#line 376 "prog_io.m"
                parse_tree__prog_io__FirstItemPragma_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstItem_24, (MR_Integer) 1)));
#line 377 "prog_io.m"
                parse_tree__prog_io__Pragma_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 0)));
#line 377 "prog_io.m"
                parse_tree__prog_io__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 1)));
#line 377 "prog_io.m"
                parse_tree__prog_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 2)));
#line 377 "prog_io.m"
                parse_tree__prog_io__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 3)));
#line 378 "prog_io.m"
                parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__Pragma_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_26, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 378 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 378 "prog_io.m"
                  parse_tree__prog_io__SFNInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_26, (MR_Integer) 1)));
#line 376 "prog_io.m"
              }
#line 375 "prog_io.m"
          }
#line 384 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 380 "prog_io.m"
          {
#line 380 "prog_io.m"
            MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_48_48 = (MR_String) parse_tree__prog_io__SFNInfo_30;

#line 381 "prog_io.m"
            /* direct tailcall eliminated */
#line 381 "prog_io.m"
            {
#line 381 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_39 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_48_48;
#line 381 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_41 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;

#line 381 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_41;
#line 381 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_39;
#line 381 "prog_io.m"
            }
#line 381 "prog_io.m"
            continue;
#line 380 "prog_io.m"
          }
#line 384 "prog_io.m"
        else
#line 422 "prog_io.m"
          {
#line 422 "prog_io.m"
            MR_Word parse_tree__prog_io__StartModuleName_32;
#line 422 "prog_io.m"
            MR_Word parse_tree__prog_io__FirstContext_33;
#line 386 "prog_io.m"
            MR_Word parse_tree__prog_io__FirstItemModuleStart_31;
#line 386 "prog_io.m"
            MR_Word parse_tree__prog_io__FirstItem_104;
#line 388 "prog_io.m"
            MR_Integer parse_tree__prog_io___FirstItemSeqNum_34;

#line 386 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstItem_23)) == (MR_mktag((MR_Integer) 2)));
#line 386 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 386 "prog_io.m"
              {
#line 386 "prog_io.m"
                parse_tree__prog_io__FirstItem_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstItem_23, (MR_Integer) 0)));
#line 387 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__FirstItem_104)) == (MR_mktag((MR_Integer) 0)));
#line 387 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 387 "prog_io.m"
                  {
#line 387 "prog_io.m"
                    parse_tree__prog_io__FirstItemModuleStart_31 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__FirstItem_104), (MR_Integer) 0);
#line 388 "prog_io.m"
                    parse_tree__prog_io__StartModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemModuleStart_31, (MR_Integer) 0)));
#line 388 "prog_io.m"
                    parse_tree__prog_io__FirstContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemModuleStart_31, (MR_Integer) 1)));
#line 388 "prog_io.m"
                    parse_tree__prog_io___FirstItemSeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemModuleStart_31, (MR_Integer) 2)));
#line 388 "prog_io.m"
                    parse_tree__prog_io__succeeded = MR_TRUE;
#line 387 "prog_io.m"
                  }
#line 386 "prog_io.m"
              }
#line 422 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 419 "prog_io.m"
              {
#line 393 "prog_io.m"
                {
#line 393 "prog_io.m"
                  parse_tree__prog_io__succeeded = mdbcomp__sym_name__match_sym_name_2_p_0(parse_tree__prog_io__StartModuleName_32, parse_tree__prog_io__DefaultModuleName_13);
                }
#line 397 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 394 "prog_io.m"
                  {
#line 394 "prog_io.m"
                    *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__DefaultModuleName_13;
#line 395 "prog_io.m"
                    *parse_tree__prog_io__Specs_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 396 "prog_io.m"
                    {
#line 396 "prog_io.m"
                      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__Errors_19);
                    }
#line 394 "prog_io.m"
                  }
#line 397 "prog_io.m"
                else
#line 401 "prog_io.m"
                  {
#line 397 "prog_io.m"
                    {
#line 397 "prog_io.m"
                      parse_tree__prog_io__succeeded = mdbcomp__sym_name__match_sym_name_2_p_0(parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__StartModuleName_32);
                    }
#line 401 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 398 "prog_io.m"
                      {
#line 398 "prog_io.m"
                        *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__StartModuleName_32;
#line 399 "prog_io.m"
                        *parse_tree__prog_io__Specs_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "prog_io.m"
                        {
#line 400 "prog_io.m"
                          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__Errors_19);
                        }
#line 398 "prog_io.m"
                      }
#line 401 "prog_io.m"
                    else
#line 405 "prog_io.m"
                      {
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__Pieces_35;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__Msgs_37;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__Spec_38;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_54_54;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_55_55;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_56_56;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_59_59;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_60_60;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_71_71;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_74_74;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_75_75;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_79_79;
#line 405 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_80_80;

#line 403 "prog_io.m"
                        {
#line 403 "prog_io.m"
                          parse_tree__prog_io__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "prog_io.m"
                          MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39));
#line 403 "prog_io.m"
                        }
#line 404 "prog_io.m"
                        {
#line 404 "prog_io.m"
                          parse_tree__prog_io__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io__StartModuleName_32));
#line 404 "prog_io.m"
                        }
#line 404 "prog_io.m"
                        {
#line 404 "prog_io.m"
                          parse_tree__prog_io__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io__V_60_60));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])));
#line 404 "prog_io.m"
                        }
#line 404 "prog_io.m"
                        {
#line 404 "prog_io.m"
                          parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[31])));
#line 404 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io__V_59_59));
#line 404 "prog_io.m"
                        }
#line 403 "prog_io.m"
                        {
#line 403 "prog_io.m"
                          parse_tree__prog_io__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io__V_55_55));
#line 403 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 403 "prog_io.m"
                        }
#line 403 "prog_io.m"
                        {
#line 403 "prog_io.m"
                          parse_tree__prog_io__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[30])));
#line 403 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_35, 1) = ((MR_Box) (parse_tree__prog_io__V_54_54));
#line 403 "prog_io.m"
                        }
#line 409 "prog_io.m"
                        {
#line 409 "prog_io.m"
                          parse_tree__prog_io__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 409 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_35));
#line 409 "prog_io.m"
                        }
#line 409 "prog_io.m"
                        {
#line 409 "prog_io.m"
                          parse_tree__prog_io__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io__V_75_75));
#line 409 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "prog_io.m"
                        }
#line 408 "prog_io.m"
                        {
#line 408 "prog_io.m"
                          parse_tree__prog_io__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 0) = ((MR_Box) (((MR_Integer) 22 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 408 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io__V_74_74));
#line 408 "prog_io.m"
                        }
#line 409 "prog_io.m"
                        {
#line 409 "prog_io.m"
                          parse_tree__prog_io__Msgs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_37, 0) = ((MR_Box) (parse_tree__prog_io__V_71_71));
#line 409 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "prog_io.m"
                        }
#line 411 "prog_io.m"
                        {
#line 411 "prog_io.m"
                          parse_tree__prog_io__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 411 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_33));
#line 411 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io__Msgs_37));
#line 411 "prog_io.m"
                        }
#line 411 "prog_io.m"
                        {
#line 411 "prog_io.m"
                          parse_tree__prog_io__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io__V_80_80));
#line 411 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "prog_io.m"
                        }
#line 410 "prog_io.m"
                        {
#line 410 "prog_io.m"
                          parse_tree__prog_io__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 410 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_2[0])));
#line 410 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 410 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io__V_79_79));
#line 410 "prog_io.m"
                        }
#line 412 "prog_io.m"
                        {
#line 412 "prog_io.m"
                          MR_Word base;
#line 412 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "prog_io.m"
                          *parse_tree__prog_io__Specs_18 = base;
#line 412 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_38));
#line 412 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "prog_io.m"
                        }
#line 417 "prog_io.m"
                        *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__StartModuleName_32;
#line 418 "prog_io.m"
                        {
#line 418 "prog_io.m"
                          *parse_tree__prog_io__Errors_19 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 1)));
                        }
#line 405 "prog_io.m"
                      }
#line 401 "prog_io.m"
                  }
#line 420 "prog_io.m"
                {
#line 420 "prog_io.m"
                  parse_tree__prog_io__make_module_decl_3_p_0(*parse_tree__prog_io__ModuleName_15, parse_tree__prog_io__FirstContext_33, parse_tree__prog_io__ModuleDeclItem_16);
                }
#line 421 "prog_io.m"
                *parse_tree__prog_io__MaybeSecondTerm_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "prog_io.m"
              }
#line 422 "prog_io.m"
            else
#line 429 "prog_io.m"
              {
#line 429 "prog_io.m"
                MR_Word parse_tree__prog_io__V_99_99;
#line 429 "prog_io.m"
                MR_Word parse_tree__prog_io__V_100_100;
#line 429 "prog_io.m"
                MR_Word parse_tree__prog_io__FirstContext_107;
#line 429 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_111;
#line 427 "prog_io.m"
                MR_Word parse_tree__prog_io__FirstItem_105;

#line 425 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstItem_23)) == (MR_mktag((MR_Integer) 2)));
#line 425 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 425 "prog_io.m"
                  {
#line 425 "prog_io.m"
                    parse_tree__prog_io__FirstItem_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstItem_23, (MR_Integer) 0)));
#line 426 "prog_io.m"
                    {
#line 426 "prog_io.m"
                      parse_tree__prog_io__FirstContext_107 = parse_tree__prog_item__get_item_context_1_f_0(parse_tree__prog_io__FirstItem_105);
                    }
#line 425 "prog_io.m"
                  }
#line 425 "prog_io.m"
                else
#line 428 "prog_io.m"
                  {
#line 428 "prog_io.m"
                    {
#line 428 "prog_io.m"
                      mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_107);
                    }
#line 428 "prog_io.m"
                  }
#line 435 "prog_io.m"
                {
#line 435 "prog_io.m"
                  parse_tree__prog_io__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_107));
#line 435 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[32])));
#line 435 "prog_io.m"
                }
#line 435 "prog_io.m"
                {
#line 435 "prog_io.m"
                  parse_tree__prog_io__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io__V_100_100));
#line 435 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "prog_io.m"
                }
#line 434 "prog_io.m"
                {
#line 434 "prog_io.m"
                  parse_tree__prog_io__Spec_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 434 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 434 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_111, 2) = ((MR_Box) (parse_tree__prog_io__V_99_99));
#line 434 "prog_io.m"
                }
#line 436 "prog_io.m"
                {
#line 436 "prog_io.m"
                  MR_Word base;
#line 436 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "prog_io.m"
                  *parse_tree__prog_io__Specs_18 = base;
#line 436 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_111));
#line 436 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "prog_io.m"
                }
#line 437 "prog_io.m"
                {
#line 437 "prog_io.m"
                  *parse_tree__prog_io__Errors_19 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 2)));
                }
#line 439 "prog_io.m"
                *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__DefaultModuleName_13;
#line 440 "prog_io.m"
                {
#line 440 "prog_io.m"
                  parse_tree__prog_io__make_module_decl_3_p_0(*parse_tree__prog_io__ModuleName_15, parse_tree__prog_io__FirstContext_107, parse_tree__prog_io__ModuleDeclItem_16);
                }
#line 445 "prog_io.m"
                {
#line 445 "prog_io.m"
                  MR_Word base;
#line 445 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 445 "prog_io.m"
                  *parse_tree__prog_io__MaybeSecondTerm_17 = base;
#line 445 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__MaybeFirstTerm_22));
#line 445 "prog_io.m"
                }
#line 429 "prog_io.m"
              }
#line 422 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;
#line 422 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_40 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39;
#line 422 "prog_io.m"
          }
#line 365 "prog_io.m"
      }
#line 365 "prog_io.m"
      break;
#line 365 "prog_io.m"
    }
#line 359 "prog_io.m"
}

#line 275 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_all_items_8_p_0(
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_9,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_10,
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_11,
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_12,
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_24,
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_25)
#line 275 "prog_io.m"
{
#line 282 "prog_io.m"
  {
#line 282 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_18;
#line 282 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName0_19;
#line 282 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName_20;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclItem_21;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeSecondTermResult_22;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_29_29;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_32_32;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_33_33;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_34_34;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_36_36;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__RevItems_51;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_18_56;
#line 292 "prog_io.m"
    MR_Word parse_tree__prog_io__V_23_23;
#line 319 "prog_io.m"
    MR_Word parse_tree__prog_io__RevItems1_47;
#line 314 "prog_io.m"
    MR_Word parse_tree__prog_io__LastItem_46;
#line 314 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleEnd_48;
#line 314 "prog_io.m"
    MR_Word parse_tree__prog_io__V_63_63;
#line 316 "prog_io.m"
    MR_Word parse_tree__prog_io___Context_49;
#line 316 "prog_io.m"
    MR_Integer parse_tree__prog_io___SeqNum_50;
#line 332 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_19_57;
#line 327 "prog_io.m"
    MR_Word parse_tree__prog_io__Item_52;
#line 327 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleStart_53;
#line 327 "prog_io.m"
    MR_Word parse_tree__prog_io__V_64_64;
#line 329 "prog_io.m"
    MR_Word parse_tree__prog_io__V_54_54;
#line 329 "prog_io.m"
    MR_Integer parse_tree__prog_io__V_55_55;

#line 282 "prog_io.m"
    {
#line 282 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_29_29);
    }
#line 284 "prog_io.m"
    {
#line 284 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_18);
    }
#line 285 "prog_io.m"
    {
#line 285 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_18, &parse_tree__prog_io__SourceFileName0_19);
    }
#line 288 "prog_io.m"
    {
#line 288 "prog_io.m"
      parse_tree__prog_io__read_first_item_12_p_0(parse_tree__prog_io__DefaultModuleName_10, parse_tree__prog_io__SourceFileName0_19, &parse_tree__prog_io__SourceFileName_20, parse_tree__prog_io__ModuleName_11, &parse_tree__prog_io__ModuleDeclItem_21, &parse_tree__prog_io__MaybeSecondTermResult_22, &parse_tree__prog_io__STATE_VARIABLE_Specs_32_32, &parse_tree__prog_io__STATE_VARIABLE_Errors_33_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_29_29, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_34_34);
    }
#line 291 "prog_io.m"
    {
#line 291 "prog_io.m"
      parse_tree__prog_io__STATE_VARIABLE_RevItems_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_RevItems_36_36, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDeclItem_21));
#line 291 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_RevItems_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "prog_io.m"
    }
#line 292 "prog_io.m"
    {
#line 292 "prog_io.m"
      parse_tree__prog_io__read_items_loop_14_p_1(parse_tree__prog_io__Globals_9, *parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__SourceFileName_20, parse_tree__prog_io__MaybeSecondTermResult_22, parse_tree__prog_io__STATE_VARIABLE_RevItems_36_36, &parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38, parse_tree__prog_io__STATE_VARIABLE_Specs_32_32, parse_tree__prog_io__STATE_VARIABLE_Specs_24, parse_tree__prog_io__STATE_VARIABLE_Errors_33_33, parse_tree__prog_io__STATE_VARIABLE_Errors_25, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_34_34, &parse_tree__prog_io__V_23_23);
    }
#line 314 "prog_io.m"
    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 314 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 314 "prog_io.m"
      {
#line 314 "prog_io.m"
        parse_tree__prog_io__LastItem_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38, (MR_Integer) 0)));
#line 314 "prog_io.m"
        parse_tree__prog_io__RevItems1_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38, (MR_Integer) 1)));
#line 315 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__LastItem_46)) == (MR_mktag((MR_Integer) 1)));
#line 315 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 315 "prog_io.m"
          {
#line 315 "prog_io.m"
            parse_tree__prog_io__ItemModuleEnd_48 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__LastItem_46), (MR_Integer) 1);
#line 316 "prog_io.m"
            parse_tree__prog_io__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_48, (MR_Integer) 0)));
#line 316 "prog_io.m"
            parse_tree__prog_io___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_48, (MR_Integer) 1)));
#line 316 "prog_io.m"
            parse_tree__prog_io___SeqNum_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_48, (MR_Integer) 2)));
#line 316 "prog_io.m"
            {
#line 316 "prog_io.m"
              parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__V_63_63);
            }
#line 315 "prog_io.m"
          }
#line 314 "prog_io.m"
      }
#line 319 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 318 "prog_io.m"
      parse_tree__prog_io__RevItems_51 = parse_tree__prog_io__RevItems1_47;
#line 319 "prog_io.m"
    else
#line 320 "prog_io.m"
      parse_tree__prog_io__RevItems_51 = parse_tree__prog_io__STATE_VARIABLE_RevItems_38_38;
#line 322 "prog_io.m"
    {
#line 322 "prog_io.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__RevItems_51, &parse_tree__prog_io__STATE_VARIABLE_Items_18_56);
    }
#line 327 "prog_io.m"
    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_Items_18_56)) == (MR_mktag((MR_Integer) 1)));
#line 327 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 327 "prog_io.m"
      {
#line 327 "prog_io.m"
        parse_tree__prog_io__Item_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Items_18_56, (MR_Integer) 0)));
#line 327 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Items_19_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Items_18_56, (MR_Integer) 1)));
#line 328 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Item_52)) == (MR_mktag((MR_Integer) 0)));
#line 328 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 328 "prog_io.m"
          {
#line 328 "prog_io.m"
            parse_tree__prog_io__ItemModuleStart_53 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_52), (MR_Integer) 0);
#line 329 "prog_io.m"
            parse_tree__prog_io__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_53, (MR_Integer) 0)));
#line 329 "prog_io.m"
            parse_tree__prog_io__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_53, (MR_Integer) 1)));
#line 329 "prog_io.m"
            parse_tree__prog_io__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_53, (MR_Integer) 2)));
#line 329 "prog_io.m"
            {
#line 329 "prog_io.m"
              parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__V_64_64);
            }
#line 328 "prog_io.m"
          }
#line 327 "prog_io.m"
      }
#line 332 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 332 "prog_io.m"
      *parse_tree__prog_io__Items_12 = parse_tree__prog_io__STATE_VARIABLE_Items_19_57;
#line 332 "prog_io.m"
    else
#line 335 "prog_io.m"
      {
#line 335 "prog_io.m"
        {
#line 335 "prog_io.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.remove_main_module_start_end_wrappers\'/3", (MR_String) "module does not start with \140:- module\' declaration");
#line 335 "prog_io.m"
          return;
        }
#line 335 "prog_io.m"
      }
#line 282 "prog_io.m"
  }
#line 275 "prog_io.m"
}

#line 123 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__peek_at_file_6_p_0(
#line 123 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_7,
#line 123 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName0_8,
#line 123 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_9,
#line 123 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_10)
#line 123 "prog_io.m"
{
#line 341 "prog_io.m"
  {
#line 341 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 341 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_12;
#line 343 "prog_io.m"
    MR_String parse_tree__prog_io___SourceFileName_13;
#line 343 "prog_io.m"
    MR_Word parse_tree__prog_io___ModuleDeclItem_14;
#line 343 "prog_io.m"
    MR_Word parse_tree__prog_io___MaybeSecondTerm_15;
#line 343 "prog_io.m"
    MR_Word parse_tree__prog_io___Errors_16;
#line 343 "prog_io.m"
    MR_Word parse_tree__prog_io__V_17_17;

#line 342 "prog_io.m"
    {
#line 342 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_12);
    }
#line 343 "prog_io.m"
    {
#line 343 "prog_io.m"
      parse_tree__prog_io__read_first_item_12_p_0(parse_tree__prog_io__DefaultModuleName_7, parse_tree__prog_io__SourceFileName0_8, &parse_tree__prog_io___SourceFileName_13, parse_tree__prog_io__ModuleName_9, &parse_tree__prog_io___ModuleDeclItem_14, &parse_tree__prog_io___MaybeSecondTerm_15, parse_tree__prog_io__Specs_10, &parse_tree__prog_io___Errors_16, parse_tree__prog_io__SeqNumCounter0_12, &parse_tree__prog_io__V_17_17);
    }
#line 341 "prog_io.m"
  }
#line 123 "prog_io.m"
}

#line 115 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__check_module_has_expected_name_4_p_0(
#line 115 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_5,
#line 115 "prog_io.m"
  MR_Word parse_tree__prog_io__ExpectedName_6,
#line 115 "prog_io.m"
  MR_Word parse_tree__prog_io__ActualName_7,
#line 115 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_8)
#line 115 "prog_io.m"
{
#line 183 "prog_io.m"
  {
#line 183 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 175 "prog_io.m"
    {
#line 175 "prog_io.m"
      parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__ActualName_7, parse_tree__prog_io__ExpectedName_6);
    }
#line 175 "prog_io.m"
    parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 183 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 179 "prog_io.m"
      {
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_9;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__Msg_10;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_11;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_14_14;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_15_15;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_16_16;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_19_19;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_21_21;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_25_25;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_26_26;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_29_29;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_32_32;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_33_33;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_43_43;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_44_44;
#line 179 "prog_io.m"
        MR_Word parse_tree__prog_io__V_48_48;

#line 176 "prog_io.m"
        {
#line 176 "prog_io.m"
          parse_tree__prog_io__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 176 "prog_io.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_15_15, 0) = ((MR_Box) (parse_tree__prog_io__FileName_5));
#line 176 "prog_io.m"
        }
#line 178 "prog_io.m"
        {
#line 178 "prog_io.m"
          parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 178 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__ExpectedName_6));
#line 178 "prog_io.m"
        }
#line 179 "prog_io.m"
        {
#line 179 "prog_io.m"
          parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__ActualName_7));
#line 179 "prog_io.m"
        }
#line 179 "prog_io.m"
        {
#line 179 "prog_io.m"
          parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])));
#line 179 "prog_io.m"
        }
#line 179 "prog_io.m"
        {
#line 179 "prog_io.m"
          parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[29])));
#line 179 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 179 "prog_io.m"
        }
#line 178 "prog_io.m"
        {
#line 178 "prog_io.m"
          parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[28])));
#line 178 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 178 "prog_io.m"
        }
#line 178 "prog_io.m"
        {
#line 178 "prog_io.m"
          parse_tree__prog_io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 178 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io__V_26_26));
#line 178 "prog_io.m"
        }
#line 178 "prog_io.m"
        {
#line 178 "prog_io.m"
          parse_tree__prog_io__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[27])));
#line 178 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io__V_24_24));
#line 178 "prog_io.m"
        }
#line 177 "prog_io.m"
        {
#line 177 "prog_io.m"
          parse_tree__prog_io__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 177 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io__V_21_21));
#line 177 "prog_io.m"
        }
#line 177 "prog_io.m"
        {
#line 177 "prog_io.m"
          parse_tree__prog_io__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[26])));
#line 177 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io__V_19_19));
#line 177 "prog_io.m"
        }
#line 176 "prog_io.m"
        {
#line 176 "prog_io.m"
          parse_tree__prog_io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io__V_15_15));
#line 176 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io__V_16_16));
#line 176 "prog_io.m"
        }
#line 176 "prog_io.m"
        {
#line 176 "prog_io.m"
          parse_tree__prog_io__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[25])));
#line 176 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io__V_14_14));
#line 176 "prog_io.m"
        }
#line 180 "prog_io.m"
        {
#line 180 "prog_io.m"
          parse_tree__prog_io__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_9));
#line 180 "prog_io.m"
        }
#line 180 "prog_io.m"
        {
#line 180 "prog_io.m"
          parse_tree__prog_io__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "prog_io.m"
        }
#line 180 "prog_io.m"
        {
#line 180 "prog_io.m"
          parse_tree__prog_io__Msg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 2) = ((MR_Box) ((MR_Integer) 0));
#line 180 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 3) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 180 "prog_io.m"
        }
#line 181 "prog_io.m"
        {
#line 181 "prog_io.m"
          parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__Msg_10));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "prog_io.m"
        }
#line 181 "prog_io.m"
        {
#line 181 "prog_io.m"
          parse_tree__prog_io__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 181 "prog_io.m"
        }
#line 182 "prog_io.m"
        {
#line 182 "prog_io.m"
          MR_Word base;
#line 182 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "prog_io.m"
          *parse_tree__prog_io__Specs_8 = base;
#line 182 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_11));
#line 182 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "prog_io.m"
        }
#line 179 "prog_io.m"
      }
#line 183 "prog_io.m"
    else
#line 184 "prog_io.m"
      *parse_tree__prog_io__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "prog_io.m"
  }
#line 115 "prog_io.m"
}

#line 167 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_opt_file_8_p_0_1(
#line 167 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 167 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 167 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 167 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3)
#line 167 "prog_io.m"
{
#line 167 "prog_io.m"
  {
#line 167 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 167 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__4_4;

#line 167 "prog_io.m"
    {
#line 167 "prog_io.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 5))), &parse_tree__prog_io__conv0_HeadVar__4_4);
    }
#line 167 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__4_4));
#line 167 "prog_io.m"
  }
#line 167 "prog_io.m"
}

#line 97 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_opt_file_8_p_0(
#line 97 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_9,
#line 97 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_10,
#line 97 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 97 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_12,
#line 97 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_13,
#line 97 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_14)
#line 97 "prog_io.m"
{
#line 164 "prog_io.m"
  {
#line 164 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 164 "prog_io.m"
    MR_Word parse_tree__prog_io__Dirs_16;
#line 164 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_18;
#line 164 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSpecs_19;
#line 164 "prog_io.m"
    MR_Word parse_tree__prog_io__NameSpecs_21;
#line 164 "prog_io.m"
    MR_Word parse_tree__prog_io__V_25_25;
#line 166 "prog_io.m"
    MR_Word parse_tree__prog_io__V_17_17;
#line 166 "prog_io.m"
    MR_Word parse_tree__prog_io__V_20_20;

#line 165 "prog_io.m"
    {
#line 165 "prog_io.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__prog_io__Globals_9, (MR_Integer) 648, &parse_tree__prog_io__Dirs_16);
    }
#line 167 "prog_io.m"
    {
#line 167 "prog_io.m"
      parse_tree__prog_io__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 167 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_3[0]));
#line 167 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_opt_file_8_p_0_1));
#line 167 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 167 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 3) = ((MR_Box) ((MR_Integer) 0));
#line 167 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 4) = ((MR_Box) (parse_tree__prog_io__Dirs_16));
#line 167 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 5) = ((MR_Box) (parse_tree__prog_io__FileName_10));
#line 167 "prog_io.m"
    }
#line 166 "prog_io.m"
    {
#line 166 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(parse_tree__prog_io__Globals_9, parse_tree__prog_io__V_25_25, parse_tree__prog_io__DefaultModuleName_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, &parse_tree__prog_io__V_17_17, &parse_tree__prog_io__ModuleName_18, parse_tree__prog_io__Items_12, &parse_tree__prog_io__ItemSpecs_19, parse_tree__prog_io__Errors_14, &parse_tree__prog_io__V_20_20);
    }
#line 170 "prog_io.m"
    {
#line 170 "prog_io.m"
      parse_tree__prog_io__check_module_has_expected_name_4_p_0(parse_tree__prog_io__FileName_10, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_18, &parse_tree__prog_io__NameSpecs_21);
    }
#line 172 "prog_io.m"
    {
#line 172 "prog_io.m"
      *parse_tree__prog_io__Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_19, parse_tree__prog_io__NameSpecs_21);
    }
#line 164 "prog_io.m"
  }
#line 97 "prog_io.m"
}

#line 86 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_if_changed_12_p_0(
#line 86 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_29,
#line 86 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_13,
#line 86 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_14,
#line 86 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 86 "prog_io.m"
  MR_Word parse_tree__prog_io__OldTimestamp_16,
#line 86 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_17,
#line 86 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_18,
#line 86 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_19,
#line 86 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_20,
#line 86 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_21,
#line 86 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_22)
#line 86 "prog_io.m"
{
#line 158 "prog_io.m"
  {
#line 158 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 158 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;

#line 160 "prog_io.m"
    {
#line 160 "prog_io.m"
      parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 160 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io__OldTimestamp_16));
#line 160 "prog_io.m"
    }
#line 159 "prog_io.m"
    {
#line 159 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(parse_tree__prog_io__Globals_13, parse_tree__prog_io__OpenFile_14, parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__V_26_26, (MR_Integer) 0, parse_tree__prog_io__FileData_17, parse_tree__prog_io__ModuleName_18, parse_tree__prog_io__Items_19, parse_tree__prog_io__Specs_20, parse_tree__prog_io__Errors_21, parse_tree__prog_io__MaybeModuleTimestamp_22);
#line 159 "prog_io.m"
      return;
    }
#line 158 "prog_io.m"
  }
#line 86 "prog_io.m"
}

#line 79 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_12_p_0(
#line 79 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_28,
#line 79 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_13,
#line 79 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_14,
#line 79 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 79 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnTimestamp_16,
#line 79 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_17,
#line 79 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_18,
#line 79 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_19,
#line 79 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_20,
#line 79 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_21,
#line 79 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_22)
#line 79 "prog_io.m"
{
#line 151 "prog_io.m"
  {
#line 151 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 152 "prog_io.m"
    {
#line 152 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(parse_tree__prog_io__Globals_13, parse_tree__prog_io__OpenFile_14, parse_tree__prog_io__DefaultModuleName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__ReturnTimestamp_16, parse_tree__prog_io__FileData_17, parse_tree__prog_io__ModuleName_18, parse_tree__prog_io__Items_19, parse_tree__prog_io__Specs_20, parse_tree__prog_io__Errors_21, parse_tree__prog_io__MaybeModuleTimestamp_22);
#line 152 "prog_io.m"
      return;
    }
#line 151 "prog_io.m"
  }
#line 79 "prog_io.m"
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
