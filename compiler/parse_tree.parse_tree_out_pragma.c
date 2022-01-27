/*
** Automatically generated from `parse_tree_out_pragma.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module parse_tree.parse_tree_out_pragma. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_tree_out_pragma__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_pragma.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 106 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 109 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 112 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 115 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 118 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 121 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 124 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_arg_tabling_method_0;

#line 490 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(
#line 490 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35,
#line 490 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_1,
#line 490 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_3,
#line 490 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4_4,
#line 490 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5,
#line 490 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6);

#line 1649 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(
#line 1649 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44,
#line 1649 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1649 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1649 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);

#line 1646 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1(
#line 1646 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1646 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1646 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1646 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1639 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0(
#line 1639 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17,
#line 1639 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_4,
#line 1639 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8,
#line 1639 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9);

#line 1493 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(
#line 1493 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ArgSizeTerm_4);

#line 1488 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1(
#line 1488 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1488 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1488 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1488 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1476 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(
#line 1476 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Constraint_4);

#line 1473 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_2(
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1473 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_1(
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1439 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0(
#line 1439 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_6,
#line 1439 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Context_7,
#line 1439 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Term2Info_8);

#line 1395 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(
#line 1395 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1);

#line 1331 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_5_p_0(
#line 1331 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_6,
#line 1331 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Context_7,
#line 1331 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TermInfo_8);

#line 1301 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(
#line 1301 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20,
#line 1301 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_5,
#line 1301 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_6,
#line 1301 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1301 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);

#line 1264 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(
#line 1264 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_4);

#line 1247 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(
#line 1247 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_4);

#line 1228 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0(
#line 1228 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24,
#line 1228 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_4,
#line 1228 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1228 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);

#line 1175 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1(
#line 1175 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1175 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 1154 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(
#line 1154 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_4);

#line 1041 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(
#line 1041 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16,
#line 1041 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1041 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1041 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);

#line 1004 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(
#line 1004 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_6,
#line 1004 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarNamePrint_7,
#line 1004 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3);

#line 901 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0(
#line 901 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47,
#line 901 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_4,
#line 901 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13,
#line 901 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14);

#line 888 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(
#line 888 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14,
#line 888 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 888 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 888 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);

#line 885 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1(
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 885 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 853 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0(
#line 853 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28,
#line 853 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEInfo_4,
#line 853 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11,
#line 853 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12);

#line 885 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1(
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 885 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 813 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0(
#line 813 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32,
#line 813 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_4,
#line 813 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12,
#line 813 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13);

#line 778 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0(
#line 778 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42,
#line 778 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 778 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_6,
#line 778 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_18,
#line 778 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19);

#line 762 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
#line 762 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1);

#line 751 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
#line 751 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_4,
#line 751 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__UnitSelector_5);

#line 748 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
#line 748 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 748 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 731 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
#line 731 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 731 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_6,
#line 731 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3);

#line 724 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
#line 724 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 724 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 715 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
#line 715 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 715 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 700 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
#line 700 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 700 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Sharing_6,
#line 700 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_7);

#line 698 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
#line 698 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 698 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 526 "parse_tree_out_pragma.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
#line 526 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Attrs_4,
#line 526 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5);

#line 377 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2(
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 377 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 518 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1(
#line 518 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 518 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 518 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 518 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 443 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0(
#line 443 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50,
#line 443 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 443 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_6,
#line 443 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23,
#line 443 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24);

#line 379 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(
#line 379 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15,
#line 379 "parse_tree_out_pragma.m"
  MR_Char parse_tree__parse_tree_out_pragma__Char_4,
#line 379 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 379 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);

#line 377 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1(
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 377 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 334 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(
#line 334 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FCInfo_4);

#line 1630 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_7_p_0_1(
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1630 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_7_p_0_1(
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 998 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
#line 998 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 998 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 998 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 998 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 377 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 377 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 377 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1(
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 377 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[28][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[8][3];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[6][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[3][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_6[2][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_9[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_10[3][6];


#line 566 "parse_tree_out_pragma.m"
/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s {
#line 566 "parse_tree_out_pragma.m"
  const MR_String parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
#line 566 "parse_tree_out_pragma.m"
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s parse_tree__parse_tree_out_pragma_vector_common_7[4];

#line 655 "parse_tree_out_pragma.m"
/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s {
#line 655 "parse_tree_out_pragma.m"
  const MR_Word parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
#line 655 "parse_tree_out_pragma.m"
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s parse_tree__parse_tree_out_pragma_vector_common_8[8];



static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[28][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_inst__inst_info__arity1__parse_tree__parse_tree_out_inst__simple_inst_info__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_inst__parse_tree__parse_tree_out_inst__type_ctor_info_simple_inst_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_tabling_method_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "promise_pure")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "promise_semipure")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "does_not_terminate")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "terminates")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "will_not_throw_exception")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "ordinary_despite_detism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "may_modify_trail")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "will_not_modify_trail")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "may_call_mm_tabled")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "will_not_call_mm_tabled")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "always_boxed")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "affects_liveness")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "doesnt_affect_liveness")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "allocates_bounded_memory")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "allocates_unbounded_memory")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "doesnt_allocate_memory")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "doesnt_have_roots")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "doesnt_register_roots")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "registers_roots")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "may_duplicate")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "may_not_duplicate")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "])")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "fast_loose")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_9[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_9[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[2])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_required_feature_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_6[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_9[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_extra_attribute_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_10[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_term_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s parse_tree__parse_tree_out_pragma_vector_common_7[4] = {
  /* row 0 */   {     (MR_String) "not_tabled_for_io" },
  /* row 1 */   {     (MR_String) "tabled_for_io" },
  /* row 2 */   {     (MR_String) "tabled_for_io_unitize" },
  /* row 3 */   {     (MR_String) "tabled_for_descendant_io" },
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s parse_tree__parse_tree_out_pragma_vector_common_8[8] = {
  /* row 0 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[20]) },
  /* row 1 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[18]) },
  /* row 2 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[19]) },
  /* row 3 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 4 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[23]) },
  /* row 5 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[22]) },
  /* row 6 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[21]) },
  /* row 7 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1043 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1051 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1059 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1068 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1076 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1085 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1094 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_tabling_method_0
  }
};

#line 490 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(
#line 490 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35,
#line 490 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_1,
#line 490 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_3,
#line 490 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4_4,
#line 490 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5,
#line 490 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6)
#line 490 "parse_tree_out_pragma.m"
{
#line 494 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 494 "parse_tree_out_pragma.m"
    {
#line 494 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 494 "parse_tree_out_pragma.m"
      {
#line 494 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 494 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "parse_tree_out_pragma.m"
          *parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5;
#line 494 "parse_tree_out_pragma.m"
        else
#line 496 "parse_tree_out_pragma.m"
          {
#line 496 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__4_4, (MR_Integer) 0)));
#line 496 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__4_4, (MR_Integer) 1)));
#line 496 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__VarName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 1)));
#line 496 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Mode_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 2)));
#line 496 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 496 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 496 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__V_30_30;
#line 496 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31;
#line 496 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 497 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma___Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 0)));
#line 497 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma___BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 3)));
#line 1160 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1162 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1165 "parse_tree.parse_tree_out_pragma.c"
            {
#line 1167 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35), ((MR_Box) (parse_tree__parse_tree_out_pragma__VarName_20)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
            }
#line 1170 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1172 "parse_tree.parse_tree_out_pragma.c"
            {
#line 1174 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35), ((MR_Box) ((MR_String) " :: ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
            }
#line 500 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_30_30 = (MR_Word) parse_tree__parse_tree_out_pragma__InstVarSet_3;
#line 500 "parse_tree_out_pragma.m"
            {
#line 500 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[3], parse_tree__parse_tree_out_pragma__Lang_1, ((MR_Box) (parse_tree__parse_tree_out_pragma__V_30_30)), parse_tree__parse_tree_out_pragma__Mode_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31);
            }
#line 503 "parse_tree_out_pragma.m"
            if ((parse_tree__parse_tree_out_pragma__Vars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31;
#line 503 "parse_tree_out_pragma.m"
            else
#line 504 "parse_tree_out_pragma.m"
              {
#line 1192 "parse_tree.parse_tree_out_pragma.c"
                void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1195 "parse_tree.parse_tree_out_pragma.c"
                {
#line 1197 "parse_tree.parse_tree_out_pragma.c"
                  parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
                }
#line 504 "parse_tree_out_pragma.m"
              }
#line 507 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 507 "parse_tree_out_pragma.m"
            {
#line 507 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4__tmp_copy_4 = parse_tree__parse_tree_out_pragma__Vars_17;
#line 507 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_5 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;

#line 507 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_5;
#line 507 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__4_4 = parse_tree__parse_tree_out_pragma__HeadVar__4__tmp_copy_4;
#line 507 "parse_tree_out_pragma.m"
            }
#line 507 "parse_tree_out_pragma.m"
            continue;
#line 496 "parse_tree_out_pragma.m"
          }
#line 494 "parse_tree_out_pragma.m"
      }
#line 494 "parse_tree_out_pragma.m"
      break;
#line 494 "parse_tree_out_pragma.m"
    }
#line 490 "parse_tree_out_pragma.m"
}

#line 1649 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(
#line 1649 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44,
#line 1649 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1649 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1649 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3)
#line 1649 "parse_tree_out_pragma.m"
{
#line 1652 "parse_tree_out_pragma.m"
  {
#line 1652 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1652 "parse_tree_out_pragma.m"
#line 1652 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__HeadVar__1_1) {
#line 1652 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1652 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1652 "parse_tree_out_pragma.m"
        {
#line 1257 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1260 "parse_tree.parse_tree_out_pragma.c"
          {
#line 1262 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "concurrency")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
#line 1264 "parse_tree.parse_tree_out_pragma.c"
            return;
          }
#line 1652 "parse_tree_out_pragma.m"
        }
#line 1652 "parse_tree_out_pragma.m"
        break;
#line 1652 "parse_tree_out_pragma.m"
      case (MR_Integer) 7:
#line 1666 "parse_tree_out_pragma.m"
        {
#line 1275 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1278 "parse_tree.parse_tree_out_pragma.c"
          {
#line 1280 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "conservative_gc")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
#line 1282 "parse_tree.parse_tree_out_pragma.c"
            return;
          }
#line 1666 "parse_tree_out_pragma.m"
        }
#line 1652 "parse_tree_out_pragma.m"
        break;
#line 1652 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 1656 "parse_tree_out_pragma.m"
        {
#line 1293 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1296 "parse_tree.parse_tree_out_pragma.c"
          {
#line 1298 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "double_prec_float")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
#line 1300 "parse_tree.parse_tree_out_pragma.c"
            return;
          }
#line 1656 "parse_tree_out_pragma.m"
        }
#line 1652 "parse_tree_out_pragma.m"
        break;
#line 1652 "parse_tree_out_pragma.m"
      case (MR_Integer) 3:
#line 1658 "parse_tree_out_pragma.m"
        {
#line 1311 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1314 "parse_tree.parse_tree_out_pragma.c"
          {
#line 1316 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "memo")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
#line 1318 "parse_tree.parse_tree_out_pragma.c"
            return;
          }
#line 1658 "parse_tree_out_pragma.m"
        }
#line 1652 "parse_tree_out_pragma.m"
        break;
#line 1652 "parse_tree_out_pragma.m"
      case (MR_Integer) 4:
#line 1660 "parse_tree_out_pragma.m"
        {
#line 1329 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1332 "parse_tree.parse_tree_out_pragma.c"
          {
#line 1334 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "parallel_conj")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
#line 1336 "parse_tree.parse_tree_out_pragma.c"
            return;
          }
#line 1660 "parse_tree_out_pragma.m"
        }
#line 1652 "parse_tree_out_pragma.m"
        break;
#line 1652 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1654 "parse_tree_out_pragma.m"
        {
#line 1347 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1350 "parse_tree.parse_tree_out_pragma.c"
          {
#line 1352 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "single_prec_float")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
#line 1354 "parse_tree.parse_tree_out_pragma.c"
            return;
          }
#line 1654 "parse_tree_out_pragma.m"
        }
#line 1652 "parse_tree_out_pragma.m"
        break;
#line 1652 "parse_tree_out_pragma.m"
      case (MR_Integer) 6:
#line 1664 "parse_tree_out_pragma.m"
        {
#line 1365 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1368 "parse_tree.parse_tree_out_pragma.c"
          {
#line 1370 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "strict_sequential")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
#line 1372 "parse_tree.parse_tree_out_pragma.c"
            return;
          }
#line 1664 "parse_tree_out_pragma.m"
        }
#line 1652 "parse_tree_out_pragma.m"
        break;
#line 1652 "parse_tree_out_pragma.m"
      case (MR_Integer) 5:
#line 1662 "parse_tree_out_pragma.m"
        {
#line 1383 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1386 "parse_tree.parse_tree_out_pragma.c"
          {
#line 1388 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "trailing")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
#line 1390 "parse_tree.parse_tree_out_pragma.c"
            return;
          }
#line 1662 "parse_tree_out_pragma.m"
        }
#line 1652 "parse_tree_out_pragma.m"
        break;
#line 1652 "parse_tree_out_pragma.m"
    }
#line 1652 "parse_tree_out_pragma.m"
  }
#line 1649 "parse_tree_out_pragma.m"
}

#line 1646 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1(
#line 1646 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1646 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1646 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1646 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1646 "parse_tree_out_pragma.m"
{
#line 1646 "parse_tree_out_pragma.m"
  {
#line 1646 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1646 "parse_tree_out_pragma.m"
    {
#line 1646 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
#line 1646 "parse_tree_out_pragma.m"
      return;
    }
#line 1646 "parse_tree_out_pragma.m"
  }
#line 1646 "parse_tree_out_pragma.m"
}

#line 1639 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0(
#line 1639 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17,
#line 1639 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_4,
#line 1639 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8,
#line 1639 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9)
#line 1639 "parse_tree_out_pragma.m"
{
#line 1642 "parse_tree_out_pragma.m"
  {
#line 1642 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1642 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_required_feature_0;
#line 1642 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Features0_6 = (MR_Word) parse_tree__parse_tree_out_pragma__RFSInfo_4;
#line 1642 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Features_7;
#line 1642 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11;
#line 1642 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_13_13;
#line 1642 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 1463 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1465 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1467 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1644 "parse_tree_out_pragma.m"
    {
#line 1644 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Features_7 = mercury__set__to_sorted_list_1_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18, parse_tree__parse_tree_out_pragma__Features0_6);
    }
#line 1475 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1477 "parse_tree.parse_tree_out_pragma.c"
    {
#line 1479 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ":- pragma require_feature_set(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11);
    }
#line 1646 "parse_tree_out_pragma.m"
    {
#line 1646 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1646 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[5]));
#line 1646 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1));
#line 1646 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1646 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17));
#line 1646 "parse_tree_out_pragma.m"
    }
#line 1496 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 18)));
#line 1498 "parse_tree.parse_tree_out_pragma.c"
    {
#line 1500 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18)), ((MR_Box) (parse_tree__parse_tree_out_pragma__Features_7)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_13_13)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
    }
#line 1503 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1505 "parse_tree.parse_tree_out_pragma.c"
    {
#line 1507 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9);
#line 1509 "parse_tree.parse_tree_out_pragma.c"
      return;
    }
#line 1642 "parse_tree_out_pragma.m"
  }
#line 1639 "parse_tree_out_pragma.m"
}

#line 1493 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(
#line 1493 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ArgSizeTerm_4)
#line 1493 "parse_tree_out_pragma.m"
{
#line 1495 "parse_tree_out_pragma.m"
  {
#line 1495 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1495 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__VarId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ArgSizeTerm_4, (MR_Integer) 0)));
#line 1495 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Coefficient_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ArgSizeTerm_4, (MR_Integer) 1)));

#line 1497 "parse_tree_out_pragma.m"
    {
#line 1497 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "term(");
    }
#line 1498 "parse_tree_out_pragma.m"
    {
#line 1498 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__VarId_6);
    }
#line 1499 "parse_tree_out_pragma.m"
    {
#line 1499 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1500 "parse_tree_out_pragma.m"
    {
#line 1500 "parse_tree_out_pragma.m"
      libs__rat__write_rat_3_p_0(parse_tree__parse_tree_out_pragma__Coefficient_7);
    }
#line 1501 "parse_tree_out_pragma.m"
    {
#line 1501 "parse_tree_out_pragma.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
#line 1501 "parse_tree_out_pragma.m"
      return;
    }
#line 1495 "parse_tree_out_pragma.m"
  }
#line 1493 "parse_tree_out_pragma.m"
}

#line 1488 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1(
#line 1488 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1488 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1488 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1488 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1488 "parse_tree_out_pragma.m"
{
#line 1488 "parse_tree_out_pragma.m"
  {
#line 1488 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1488 "parse_tree_out_pragma.m"
    {
#line 1488 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
#line 1488 "parse_tree_out_pragma.m"
      return;
    }
#line 1488 "parse_tree_out_pragma.m"
  }
#line 1488 "parse_tree_out_pragma.m"
}

#line 1476 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(
#line 1476 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Constraint_4)
#line 1476 "parse_tree_out_pragma.m"
{
#line 1478 "parse_tree_out_pragma.m"
  {
#line 1478 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1478 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Terms_6;
#line 1478 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Constant_7;
#line 1478 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__OpStr_8;

#line 1482 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Constraint_4)) == (MR_mktag((MR_Integer) 1))))
#line 1483 "parse_tree_out_pragma.m"
      {
#line 1483 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Terms_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 0)));
#line 1483 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Constant_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 1)));
#line 1484 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__OpStr_8 = (MR_String) "eq(";
#line 1483 "parse_tree_out_pragma.m"
      }
#line 1482 "parse_tree_out_pragma.m"
    else
#line 1480 "parse_tree_out_pragma.m"
      {
#line 1480 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Terms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 0)));
#line 1480 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Constant_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 1)));
#line 1481 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__OpStr_8 = (MR_String) "le(";
#line 1480 "parse_tree_out_pragma.m"
      }
#line 1486 "parse_tree_out_pragma.m"
    {
#line 1486 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__OpStr_8);
    }
#line 1487 "parse_tree_out_pragma.m"
    {
#line 1487 "parse_tree_out_pragma.m"
      mercury__io__write_char_3_p_0((MR_Char) 91);
    }
#line 1488 "parse_tree_out_pragma.m"
    {
#line 1488 "parse_tree_out_pragma.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_term_0, parse_tree__parse_tree_out_pragma__Terms_6, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[7]);
    }
#line 1489 "parse_tree_out_pragma.m"
    {
#line 1489 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "], ");
    }
#line 1490 "parse_tree_out_pragma.m"
    {
#line 1490 "parse_tree_out_pragma.m"
      libs__rat__write_rat_3_p_0(parse_tree__parse_tree_out_pragma__Constant_7);
    }
#line 1491 "parse_tree_out_pragma.m"
    {
#line 1491 "parse_tree_out_pragma.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
#line 1491 "parse_tree_out_pragma.m"
      return;
    }
#line 1478 "parse_tree_out_pragma.m"
  }
#line 1476 "parse_tree_out_pragma.m"
}

#line 1473 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_2(
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1473 "parse_tree_out_pragma.m"
{
#line 1473 "parse_tree_out_pragma.m"
  {
#line 1473 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1473 "parse_tree_out_pragma.m"
    {
#line 1473 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
#line 1473 "parse_tree_out_pragma.m"
      return;
    }
#line 1473 "parse_tree_out_pragma.m"
  }
#line 1473 "parse_tree_out_pragma.m"
}

#line 1473 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_1(
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1473 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1473 "parse_tree_out_pragma.m"
{
#line 1473 "parse_tree_out_pragma.m"
  {
#line 1473 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1473 "parse_tree_out_pragma.m"
    {
#line 1473 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
#line 1473 "parse_tree_out_pragma.m"
      return;
    }
#line 1473 "parse_tree_out_pragma.m"
  }
#line 1473 "parse_tree_out_pragma.m"
}

#line 1439 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0(
#line 1439 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_6,
#line 1439 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Context_7,
#line 1439 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Term2Info_8)
#line 1439 "parse_tree_out_pragma.m"
{
#line 1442 "parse_tree_out_pragma.m"
  {
#line 1442 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1442 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredModesPF_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_8, (MR_Integer) 0)));
#line 1442 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeSuccess_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_8, (MR_Integer) 1)));
#line 1442 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeFailure_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_8, (MR_Integer) 2)));
#line 1442 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_8, (MR_Integer) 3)));
#line 1442 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_10, (MR_Integer) 0)));
#line 1442 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_10, (MR_Integer) 1)));
#line 1442 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_10, (MR_Integer) 2)));

#line 1446 "parse_tree_out_pragma.m"
    {
#line 1446 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination2_info(");
    }
#line 1451 "parse_tree_out_pragma.m"
#line 1451 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_16) {
#line 1451 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1451 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1452 "parse_tree_out_pragma.m"
        {
#line 1452 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_17;
#line 1452 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_18;
#line 1452 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_23_23;
#line 1453 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_18;

#line 1453 "parse_tree_out_pragma.m"
          {
#line 1453 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_15, &parse_tree__parse_tree_out_pragma__FuncModeList_17, &parse_tree__parse_tree_out_pragma__conv0_RetMode_18);
          }
#line 1453 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_18 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_18);
#line 1454 "parse_tree_out_pragma.m"
          {
#line 1454 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_23_23 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
          }
#line 1454 "parse_tree_out_pragma.m"
          {
#line 1454 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_9_p_0(parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__V_23_23, parse_tree__parse_tree_out_pragma__PredName_14, parse_tree__parse_tree_out_pragma__FuncModeList_17, parse_tree__parse_tree_out_pragma__RetMode_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__Context_7);
          }
#line 1452 "parse_tree_out_pragma.m"
        }
#line 1451 "parse_tree_out_pragma.m"
        break;
#line 1451 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1448 "parse_tree_out_pragma.m"
        {
#line 1448 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_26_26;

#line 1449 "parse_tree_out_pragma.m"
          {
#line 1449 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_26_26 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
          }
#line 1449 "parse_tree_out_pragma.m"
          {
#line 1449 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__V_26_26, parse_tree__parse_tree_out_pragma__PredName_14, parse_tree__parse_tree_out_pragma__ModeList_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__Context_7);
          }
#line 1448 "parse_tree_out_pragma.m"
        }
#line 1451 "parse_tree_out_pragma.m"
        break;
#line 1451 "parse_tree_out_pragma.m"
    }
#line 1457 "parse_tree_out_pragma.m"
    {
#line 1457 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1468 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeSuccess_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1468 "parse_tree_out_pragma.m"
      {
#line 1469 "parse_tree_out_pragma.m"
        {
#line 1469 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1468 "parse_tree_out_pragma.m"
      }
#line 1468 "parse_tree_out_pragma.m"
    else
#line 1470 "parse_tree_out_pragma.m"
      {
#line 1470 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__ArgSizeInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeSuccess_11, (MR_Integer) 0)));

#line 1471 "parse_tree_out_pragma.m"
        {
#line 1471 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "constaints(");
        }
#line 1472 "parse_tree_out_pragma.m"
        {
#line 1472 "parse_tree_out_pragma.m"
          mercury__io__write_char_3_p_0((MR_Char) 91);
        }
#line 1473 "parse_tree_out_pragma.m"
        {
#line 1473 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0, parse_tree__parse_tree_out_pragma__ArgSizeInfo_48, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[5]);
        }
#line 1474 "parse_tree_out_pragma.m"
        {
#line 1474 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
#line 1470 "parse_tree_out_pragma.m"
      }
#line 1459 "parse_tree_out_pragma.m"
    {
#line 1459 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1468 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeFailure_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1468 "parse_tree_out_pragma.m"
      {
#line 1469 "parse_tree_out_pragma.m"
        {
#line 1469 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1468 "parse_tree_out_pragma.m"
      }
#line 1468 "parse_tree_out_pragma.m"
    else
#line 1470 "parse_tree_out_pragma.m"
      {
#line 1470 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__ArgSizeInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeFailure_12, (MR_Integer) 0)));

#line 1471 "parse_tree_out_pragma.m"
        {
#line 1471 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "constaints(");
        }
#line 1472 "parse_tree_out_pragma.m"
        {
#line 1472 "parse_tree_out_pragma.m"
          mercury__io__write_char_3_p_0((MR_Char) 91);
        }
#line 1473 "parse_tree_out_pragma.m"
        {
#line 1473 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0, parse_tree__parse_tree_out_pragma__ArgSizeInfo_70, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[6]);
        }
#line 1474 "parse_tree_out_pragma.m"
        {
#line 1474 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
#line 1470 "parse_tree_out_pragma.m"
      }
#line 1461 "parse_tree_out_pragma.m"
    {
#line 1461 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1508 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTermination_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1508 "parse_tree_out_pragma.m"
      {
#line 1509 "parse_tree_out_pragma.m"
        {
#line 1509 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1508 "parse_tree_out_pragma.m"
      }
#line 1508 "parse_tree_out_pragma.m"
    else
#line 1511 "parse_tree_out_pragma.m"
      {
#line 1511 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Termination_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTermination_13, (MR_Integer) 0)));
#line 1511 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__TerminationStr_93;

#line 1515 "parse_tree_out_pragma.m"
        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Termination_91)) == (MR_mktag((MR_Integer) 1))))
#line 1514 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminationStr_93 = (MR_String) "can_loop";
#line 1515 "parse_tree_out_pragma.m"
        else
#line 1517 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminationStr_93 = (MR_String) "cannot_loop";
#line 1519 "parse_tree_out_pragma.m"
        {
#line 1519 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__TerminationStr_93);
        }
#line 1511 "parse_tree_out_pragma.m"
      }
#line 1463 "parse_tree_out_pragma.m"
    {
#line 1463 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1463 "parse_tree_out_pragma.m"
      return;
    }
#line 1442 "parse_tree_out_pragma.m"
  }
#line 1439 "parse_tree_out_pragma.m"
}

#line 1395 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(
#line 1395 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1)
#line 1395 "parse_tree_out_pragma.m"
{
#line 1397 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 1397 "parse_tree_out_pragma.m"
    {
#line 1397 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 1397 "parse_tree_out_pragma.m"
      {
#line 1397 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1397 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1397 "parse_tree_out_pragma.m"
          {
#line 1397 "parse_tree_out_pragma.m"
          }
#line 1397 "parse_tree_out_pragma.m"
        else
#line 1398 "parse_tree_out_pragma.m"
          {
#line 1398 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__UsedArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 1398 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));

#line 1399 "parse_tree_out_pragma.m"
            {
#line 1399 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1407 "parse_tree_out_pragma.m"
#line 1407 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__UsedArg_7) {
#line 1407 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1407 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1407 "parse_tree_out_pragma.m"
                {
#line 1408 "parse_tree_out_pragma.m"
                  {
#line 1408 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "no");
                  }
#line 1407 "parse_tree_out_pragma.m"
                }
#line 1407 "parse_tree_out_pragma.m"
                break;
#line 1407 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1410 "parse_tree_out_pragma.m"
                {
#line 1411 "parse_tree_out_pragma.m"
                  {
#line 1411 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "yes");
                  }
#line 1410 "parse_tree_out_pragma.m"
                }
#line 1407 "parse_tree_out_pragma.m"
                break;
#line 1407 "parse_tree_out_pragma.m"
            }
#line 1401 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 1401 "parse_tree_out_pragma.m"
            {
#line 1401 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1 = parse_tree__parse_tree_out_pragma__UsedArgs_8;

#line 1401 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__1_1 = parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1;
#line 1401 "parse_tree_out_pragma.m"
            }
#line 1401 "parse_tree_out_pragma.m"
            continue;
#line 1398 "parse_tree_out_pragma.m"
          }
#line 1397 "parse_tree_out_pragma.m"
      }
#line 1397 "parse_tree_out_pragma.m"
      break;
#line 1397 "parse_tree_out_pragma.m"
    }
#line 1395 "parse_tree_out_pragma.m"
}

#line 1331 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_5_p_0(
#line 1331 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_6,
#line 1331 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Context_7,
#line 1331 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TermInfo_8)
#line 1331 "parse_tree_out_pragma.m"
{
#line 1334 "parse_tree_out_pragma.m"
  {
#line 1334 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1334 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_19_19 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1334 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_8, (MR_Integer) 0)));
#line 1334 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeArgSize_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_8, (MR_Integer) 1)));
#line 1334 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_8, (MR_Integer) 2)));
#line 1334 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_10, (MR_Integer) 0)));
#line 1334 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_10, (MR_Integer) 1)));
#line 1334 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_10, (MR_Integer) 2)));

#line 1338 "parse_tree_out_pragma.m"
    {
#line 1338 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_pragma_termination_info_components_9_p_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_19_19, parse_tree__parse_tree_out_pragma__TypeCtorInfo_19_19, parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__PredOrFunc_15, parse_tree__parse_tree_out_pragma__SymName_13, parse_tree__parse_tree_out_pragma__ModeList_14, parse_tree__parse_tree_out_pragma__MaybeArgSize_11, parse_tree__parse_tree_out_pragma__MaybeTermination_12, parse_tree__parse_tree_out_pragma__Context_7);
#line 1338 "parse_tree_out_pragma.m"
      return;
    }
#line 1334 "parse_tree_out_pragma.m"
  }
#line 1331 "parse_tree_out_pragma.m"
}

#line 1301 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(
#line 1301 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20,
#line 1301 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_5,
#line 1301 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_6,
#line 1301 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1301 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11)
#line 1301 "parse_tree_out_pragma.m"
{
#line 1304 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 1304 "parse_tree_out_pragma.m"
    {
#line 1304 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 1304 "parse_tree_out_pragma.m"
      {
#line 1304 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1304 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
#line 1304 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 1304 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredName_25;
#line 1304 "parse_tree_out_pragma.m"
        MR_Integer parse_tree__parse_tree_out_pragma__Arity_26;
#line 1304 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28;
#line 1304 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30;
#line 2147 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2149 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2151 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 2154 "parse_tree.parse_tree_out_pragma.c"
        {
#line 2156 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "\t\t")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
        }
#line 1321 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_5, (MR_Integer) 0)));
#line 1321 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_5, (MR_Integer) 1)));
#line 1322 "parse_tree_out_pragma.m"
        {
#line 1322 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_25, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28);
        }
#line 2168 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2170 "parse_tree.parse_tree_out_pragma.c"
        {
#line 2172 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30);
        }
#line 2175 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 8)));
#line 2177 "parse_tree.parse_tree_out_pragma.c"
        {
#line 2179 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_26)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
        }
#line 1310 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__PredNameArities_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1308 "parse_tree_out_pragma.m"
          {
#line 2186 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 2189 "parse_tree.parse_tree_out_pragma.c"
            {
#line 2191 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);
#line 2193 "parse_tree.parse_tree_out_pragma.c"
              return;
            }
#line 1308 "parse_tree_out_pragma.m"
          }
#line 1310 "parse_tree_out_pragma.m"
        else
#line 1311 "parse_tree_out_pragma.m"
          {
#line 1311 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__HeadPredNameArity_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__PredNameArities_6, (MR_Integer) 0)));
#line 1311 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__TailPredNameArities_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__PredNameArities_6, (MR_Integer) 1)));
#line 1311 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
#line 2208 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 2211 "parse_tree.parse_tree_out_pragma.c"
            {
#line 2213 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ",\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
            }
#line 1313 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 1313 "parse_tree_out_pragma.m"
            {
#line 1313 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity__tmp_copy_5 = parse_tree__parse_tree_out_pragma__HeadPredNameArity_8;
#line 1313 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArities__tmp_copy_6 = parse_tree__parse_tree_out_pragma__TailPredNameArities_9;
#line 1313 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_10 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;

#line 1313 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_10;
#line 1313 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__PredNameArities_6 = parse_tree__parse_tree_out_pragma__PredNameArities__tmp_copy_6;
#line 1313 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__PredNameArity_5 = parse_tree__parse_tree_out_pragma__PredNameArity__tmp_copy_5;
#line 1313 "parse_tree_out_pragma.m"
            }
#line 1313 "parse_tree_out_pragma.m"
            continue;
#line 1311 "parse_tree_out_pragma.m"
          }
#line 1304 "parse_tree_out_pragma.m"
      }
#line 1304 "parse_tree_out_pragma.m"
      break;
#line 1304 "parse_tree_out_pragma.m"
    }
#line 1301 "parse_tree_out_pragma.m"
}

#line 1264 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(
#line 1264 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_4)
#line 1264 "parse_tree_out_pragma.m"
{
#line 1268 "parse_tree_out_pragma.m"
  {
#line 1268 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1268 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 1268 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 0)));
#line 1268 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__CreatorPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 1)));
#line 1268 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MutatorPreds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 2)));
#line 1268 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__DestructorPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 3)));
#line 1268 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_18;
#line 1268 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_19;
#line 2273 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2275 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_15_21;
#line 1278 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_17_23;
#line 2279 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2281 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_19_25;
#line 2283 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2285 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_20_26;
#line 2287 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2289 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_22_28;
#line 2291 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2293 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_24_30;
#line 2295 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2297 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv13_STATE_VARIABLE_U_27_33;
#line 2299 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2301 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv15_STATE_VARIABLE_U_29_35;
#line 2303 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2305 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_32_38;
#line 2307 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_19)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2309 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv20_STATE_VARIABLE_U_34_40;
#line 2311 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2313 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_U_37_43;
#line 2315 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_24)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2317 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv25_STATE_VARIABLE_IO_7;

#line 2320 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2322 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ":- pragma oisu(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_15_21);
    }
#line 1277 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_14, (MR_Integer) 0)));
#line 1277 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_14, (MR_Integer) 1)));
#line 1278 "parse_tree_out_pragma.m"
    {
#line 1278 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_17_23);
    }
#line 2334 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2336 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2338 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_19_25);
    }
#line 2341 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 8)));
#line 2343 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2345 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_19)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_20_26);
    }
#line 2348 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2350 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2352 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ",\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_22_28);
    }
#line 2355 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2357 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2359 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tcreators([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_24_30);
    }
#line 1296 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__CreatorPreds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1296 "parse_tree_out_pragma.m"
      {
#line 1296 "parse_tree_out_pragma.m"
      }
#line 1296 "parse_tree_out_pragma.m"
    else
#line 1297 "parse_tree_out_pragma.m"
      {
#line 1297 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__CreatorPreds_15, (MR_Integer) 0)));
#line 1297 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__CreatorPreds_15, (MR_Integer) 1)));
#line 1298 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_U_25_31;

#line 1298 "parse_tree_out_pragma.m"
        {
#line 1298 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_49, parse_tree__parse_tree_out_pragma__PredNameArities_50, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_U_25_31);
        }
#line 1297 "parse_tree_out_pragma.m"
      }
#line 2386 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2388 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2390 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv13_STATE_VARIABLE_U_27_33);
    }
#line 2393 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2395 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2397 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tmutators([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv15_STATE_VARIABLE_U_29_35);
    }
#line 1296 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MutatorPreds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1296 "parse_tree_out_pragma.m"
      {
#line 1296 "parse_tree_out_pragma.m"
      }
#line 1296 "parse_tree_out_pragma.m"
    else
#line 1297 "parse_tree_out_pragma.m"
      {
#line 1297 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MutatorPreds_16, (MR_Integer) 0)));
#line 1297 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MutatorPreds_16, (MR_Integer) 1)));
#line 1298 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_30_36;

#line 1298 "parse_tree_out_pragma.m"
        {
#line 1298 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_58, parse_tree__parse_tree_out_pragma__PredNameArities_59, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_30_36);
        }
#line 1297 "parse_tree_out_pragma.m"
      }
#line 2424 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2426 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2428 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_32_38);
    }
#line 2431 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2433 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2435 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_19(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tdestructors([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv20_STATE_VARIABLE_U_34_40);
    }
#line 1296 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__DestructorPreds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1296 "parse_tree_out_pragma.m"
      {
#line 1296 "parse_tree_out_pragma.m"
      }
#line 1296 "parse_tree_out_pragma.m"
    else
#line 1297 "parse_tree_out_pragma.m"
      {
#line 1297 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__DestructorPreds_17, (MR_Integer) 0)));
#line 1297 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__DestructorPreds_17, (MR_Integer) 1)));
#line 1298 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_35_41;

#line 1298 "parse_tree_out_pragma.m"
        {
#line 1298 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_67, parse_tree__parse_tree_out_pragma__PredNameArities_68, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_35_41);
        }
#line 1297 "parse_tree_out_pragma.m"
      }
#line 2462 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2464 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2466 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t])\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_U_37_43);
    }
#line 2469 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2471 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2473 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_24(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv25_STATE_VARIABLE_IO_7);
    }
#line 1268 "parse_tree_out_pragma.m"
  }
#line 1264 "parse_tree_out_pragma.m"
}

#line 1247 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(
#line 1247 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_4)
#line 1247 "parse_tree_out_pragma.m"
{
#line 1250 "parse_tree_out_pragma.m"
  {
#line 1250 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1250 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_4, (MR_Integer) 0)));
#line 1250 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_4, (MR_Integer) 1)));

#line 1252 "parse_tree_out_pragma.m"
    {
#line 1252 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma reserve_tag(");
    }
#line 1253 "parse_tree_out_pragma.m"
    {
#line 1253 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_6);
    }
#line 1255 "parse_tree_out_pragma.m"
    {
#line 1255 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 1256 "parse_tree_out_pragma.m"
    {
#line 1256 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__TypeArity_7);
    }
#line 1257 "parse_tree_out_pragma.m"
    {
#line 1257 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1257 "parse_tree_out_pragma.m"
      return;
    }
#line 1250 "parse_tree_out_pragma.m"
  }
#line 1247 "parse_tree_out_pragma.m"
}

#line 1228 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0(
#line 1228 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24,
#line 1228 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_4,
#line 1228 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1228 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11)
#line 1228 "parse_tree_out_pragma.m"
{
#line 1231 "parse_tree_out_pragma.m"
  {
#line 1231 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1231 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FactTableInfo_4, (MR_Integer) 0)));
#line 1231 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FactTableInfo_4, (MR_Integer) 1)));
#line 1231 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_6, (MR_Integer) 0)));
#line 1231 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_6, (MR_Integer) 1)));
#line 1231 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
#line 1231 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
#line 1231 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
#line 1231 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18;
#line 1231 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
#line 1231 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
#line 2566 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2568 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2570 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2572 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2574 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2576 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 2579 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2581 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ":- pragma fact_table(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
    }
#line 1235 "parse_tree_out_pragma.m"
    {
#line 1235 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_8, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
#line 2589 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2591 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2593 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
    }
#line 2596 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 8)));
#line 2598 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2600 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_9)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18);
    }
#line 2603 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2605 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2607 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
    }
#line 2610 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 2612 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2614 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
#line 2617 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2619 "parse_tree.parse_tree_out_pragma.c"
    {
#line 2621 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);
#line 2623 "parse_tree.parse_tree_out_pragma.c"
      return;
    }
#line 1231 "parse_tree_out_pragma.m"
  }
#line 1228 "parse_tree_out_pragma.m"
}

#line 1175 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1(
#line 1175 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1175 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 1175 "parse_tree_out_pragma.m"
{
#line 1175 "parse_tree_out_pragma.m"
  {
#line 1175 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 1175 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 1175 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2;

#line 1175 "parse_tree_out_pragma.m"
    {
#line 1175 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1175 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2));
#line 1175 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 1175 "parse_tree_out_pragma.m"
  }
#line 1175 "parse_tree_out_pragma.m"
}

#line 1154 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(
#line 1154 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_4)
#line 1154 "parse_tree_out_pragma.m"
{
#line 1157 "parse_tree_out_pragma.m"
  {
#line 1157 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1157 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__EvalMethod_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 0)));
#line 1157 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityMPF_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 1)));
#line 1157 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeAttributes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 3)));
#line 1157 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 0)));
#line 1157 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 1)));
#line 1157 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__PragmaName_13;
#line 1157 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeAfter_28;
#line 1158 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma___Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 2)));
#line 1160 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma___MaybePorF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 2)));

#line 1161 "parse_tree_out_pragma.m"
    {
#line 1161 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__PragmaName_13 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(parse_tree__parse_tree_out_pragma__EvalMethod_6);
    }
#line 1216 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeAttributes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1218 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1216 "parse_tree_out_pragma.m"
    else
#line 1163 "parse_tree_out_pragma.m"
      {
#line 1163 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Attributes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAttributes_9, (MR_Integer) 0)));
#line 1163 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Strictness_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 0)));
#line 1163 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 1)));
#line 1163 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Stats_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 2)));
#line 1163 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__AllowReset_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 3)));
#line 1163 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1163 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43;
#line 1163 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49;
#line 1163 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50;
#line 1163 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52;

#line 1170 "parse_tree_out_pragma.m"
#line 1170 "parse_tree_out_pragma.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Strictness_15)) {
#line 1170 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1170 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1170 "parse_tree_out_pragma.m"
#line 1170 "parse_tree_out_pragma.m"
            switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__Strictness_15)) {
#line 1170 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1170 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1169 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33;
#line 1170 "parse_tree_out_pragma.m"
                break;
#line 1170 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1171 "parse_tree_out_pragma.m"
                {
#line 1172 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[27]);
#line 1171 "parse_tree_out_pragma.m"
                }
#line 1170 "parse_tree_out_pragma.m"
                break;
#line 1170 "parse_tree_out_pragma.m"
            }
#line 1170 "parse_tree_out_pragma.m"
            break;
#line 1170 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1174 "parse_tree_out_pragma.m"
            {
#line 1174 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Strictness_15, (MR_Integer) 0)));
#line 1174 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HiddenArgMethod_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Strictness_15, (MR_Integer) 1)));
#line 1174 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__ArgStrs_22;
#line 1174 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__ArgsStr_23;
#line 1174 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__HiddenArgStr_24;
#line 1174 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__SpecifiedStr_25;
#line 1174 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_37_37;
#line 1174 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_38_38;
#line 1174 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_40_40;

#line 1175 "parse_tree_out_pragma.m"
              {
#line 1175 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__ArgStrs_22 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[4], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[4], parse_tree__parse_tree_out_pragma__Args_20);
              }
#line 1176 "parse_tree_out_pragma.m"
              {
#line 1176 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__ArgsStr_23 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__ArgStrs_22);
              }
#line 1180 "parse_tree_out_pragma.m"
#line 1180 "parse_tree_out_pragma.m"
              switch (parse_tree__parse_tree_out_pragma__HiddenArgMethod_21) {
#line 1180 "parse_tree_out_pragma.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1180 "parse_tree_out_pragma.m"
                case (MR_Integer) 1:
#line 1182 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__HiddenArgStr_24 = (MR_String) "hidden_arg_addr";
#line 1180 "parse_tree_out_pragma.m"
                  break;
#line 1180 "parse_tree_out_pragma.m"
                case (MR_Integer) 0:
#line 1179 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__HiddenArgStr_24 = (MR_String) "hidden_arg_value";
#line 1180 "parse_tree_out_pragma.m"
                  break;
#line 1180 "parse_tree_out_pragma.m"
              }
#line 1185 "parse_tree_out_pragma.m"
              {
#line 1185 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_40_40 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__HiddenArgStr_24, (MR_String) ")");
              }
#line 1184 "parse_tree_out_pragma.m"
              {
#line 1184 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "], ", parse_tree__parse_tree_out_pragma__V_40_40);
              }
#line 1184 "parse_tree_out_pragma.m"
              {
#line 1184 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_37_37 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__ArgsStr_23, parse_tree__parse_tree_out_pragma__V_38_38);
              }
#line 1184 "parse_tree_out_pragma.m"
              {
#line 1184 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__SpecifiedStr_25 = mercury__string__f_43_43_2_f_0((MR_String) "specified([", parse_tree__parse_tree_out_pragma__V_37_37);
              }
#line 1186 "parse_tree_out_pragma.m"
              {
#line 1186 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__SpecifiedStr_25));
#line 1186 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33));
#line 1186 "parse_tree_out_pragma.m"
              }
#line 1174 "parse_tree_out_pragma.m"
            }
#line 1170 "parse_tree_out_pragma.m"
            break;
#line 1170 "parse_tree_out_pragma.m"
        }
#line 1192 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1193 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43;
#line 1192 "parse_tree_out_pragma.m"
        else
#line 1189 "parse_tree_out_pragma.m"
          {
#line 1189 "parse_tree_out_pragma.m"
            MR_Integer parse_tree__parse_tree_out_pragma__SizeLimit_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16, (MR_Integer) 0)));
#line 1189 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__LimitStr_27;
#line 1189 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_46_46;
#line 1189 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_47_47;

#line 1190 "parse_tree_out_pragma.m"
            {
#line 1190 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_47_47 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_out_pragma__SizeLimit_26);
            }
#line 1190 "parse_tree_out_pragma.m"
            {
#line 1190 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_46_46 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__V_47_47, (MR_String) ")");
            }
#line 1190 "parse_tree_out_pragma.m"
            {
#line 1190 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__LimitStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "limit(", parse_tree__parse_tree_out_pragma__V_46_46);
            }
#line 1191 "parse_tree_out_pragma.m"
            {
#line 1191 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "parse_tree_out_pragma.m"
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__LimitStr_27));
#line 1191 "parse_tree_out_pragma.m"
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43));
#line 1191 "parse_tree_out_pragma.m"
            }
#line 1189 "parse_tree_out_pragma.m"
          }
#line 1198 "parse_tree_out_pragma.m"
#line 1198 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__Stats_17) {
#line 1198 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1198 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1199 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49;
#line 1198 "parse_tree_out_pragma.m"
            break;
#line 1198 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1196 "parse_tree_out_pragma.m"
            {
#line 1197 "parse_tree_out_pragma.m"
              {
#line 1197 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50, 0) = ((MR_Box) ((MR_String) "statistics"));
#line 1197 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49));
#line 1197 "parse_tree_out_pragma.m"
              }
#line 1196 "parse_tree_out_pragma.m"
            }
#line 1198 "parse_tree_out_pragma.m"
            break;
#line 1198 "parse_tree_out_pragma.m"
        }
#line 1204 "parse_tree_out_pragma.m"
#line 1204 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__AllowReset_18) {
#line 1204 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1204 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1202 "parse_tree_out_pragma.m"
            {
#line 1203 "parse_tree_out_pragma.m"
              {
#line 1203 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52, 0) = ((MR_Box) ((MR_String) "allow_reset"));
#line 1203 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50));
#line 1203 "parse_tree_out_pragma.m"
              }
#line 1202 "parse_tree_out_pragma.m"
            }
#line 1204 "parse_tree_out_pragma.m"
            break;
#line 1204 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1205 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50;
#line 1204 "parse_tree_out_pragma.m"
            break;
#line 1204 "parse_tree_out_pragma.m"
        }
#line 1210 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1210 "parse_tree_out_pragma.m"
        else
#line 1211 "parse_tree_out_pragma.m"
          {
#line 1211 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_54_54;
#line 1211 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_56_56;
#line 1211 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_57_57;

#line 1213 "parse_tree_out_pragma.m"
            {
#line 1213 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_57_57 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52);
            }
#line 1213 "parse_tree_out_pragma.m"
            {
#line 1213 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_56_56 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__V_57_57, (MR_String) "]");
            }
#line 1213 "parse_tree_out_pragma.m"
            {
#line 1213 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "[", parse_tree__parse_tree_out_pragma__V_56_56);
            }
#line 1213 "parse_tree_out_pragma.m"
            {
#line 1213 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "parse_tree_out_pragma.m"
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_28, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_54_54));
#line 1213 "parse_tree_out_pragma.m"
            }
#line 1211 "parse_tree_out_pragma.m"
          }
#line 1163 "parse_tree_out_pragma.m"
      }
#line 1220 "parse_tree_out_pragma.m"
    {
#line 1220 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__PredName_10, parse_tree__parse_tree_out_pragma__Arity_11, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PragmaName_13, parse_tree__parse_tree_out_pragma__MaybeAfter_28);
#line 1220 "parse_tree_out_pragma.m"
      return;
    }
#line 1157 "parse_tree_out_pragma.m"
  }
#line 1154 "parse_tree_out_pragma.m"
}

#line 1041 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(
#line 1041 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16,
#line 1041 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1041 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1041 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3)
#line 1041 "parse_tree_out_pragma.m"
{
#line 1044 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 1044 "parse_tree_out_pragma.m"
    {
#line 1044 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 1044 "parse_tree_out_pragma.m"
      {
#line 1044 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1044 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "parse_tree_out_pragma.m"
          *parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2;
#line 1044 "parse_tree_out_pragma.m"
        else
#line 1045 "parse_tree_out_pragma.m"
          {
#line 1045 "parse_tree_out_pragma.m"
            MR_Integer parse_tree__parse_tree_out_pragma__First_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 1045 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 1045 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
#line 1045 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 3047 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3049 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 3052 "parse_tree.parse_tree_out_pragma.c"
            {
#line 3054 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
            }
#line 3057 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 8)));
#line 3059 "parse_tree.parse_tree_out_pragma.c"
            {
#line 3061 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16), ((MR_Box) (parse_tree__parse_tree_out_pragma__First_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
            }
#line 1048 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 1048 "parse_tree_out_pragma.m"
            {
#line 1048 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1 = parse_tree__parse_tree_out_pragma__Rest_8;
#line 1048 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_2 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;

#line 1048 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_2;
#line 1048 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__1_1 = parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1;
#line 1048 "parse_tree_out_pragma.m"
            }
#line 1048 "parse_tree_out_pragma.m"
            continue;
#line 1045 "parse_tree_out_pragma.m"
          }
#line 1044 "parse_tree_out_pragma.m"
      }
#line 1044 "parse_tree_out_pragma.m"
      break;
#line 1044 "parse_tree_out_pragma.m"
    }
#line 1041 "parse_tree_out_pragma.m"
}

#line 1004 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(
#line 1004 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_6,
#line 1004 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarNamePrint_7,
#line 1004 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3)
#line 1004 "parse_tree_out_pragma.m"
{
#line 1007 "parse_tree_out_pragma.m"
  {
#line 1007 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1007 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 0)));
#line 1007 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 1)));

#line 1008 "parse_tree_out_pragma.m"
    {
#line 1008 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out_pragma__VarSet_6, parse_tree__parse_tree_out_pragma__VarNamePrint_7, parse_tree__parse_tree_out_pragma__Var_8);
    }
#line 1009 "parse_tree_out_pragma.m"
    {
#line 1009 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
#line 1010 "parse_tree_out_pragma.m"
    {
#line 1010 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_6, parse_tree__parse_tree_out_pragma__VarNamePrint_7, parse_tree__parse_tree_out_pragma__Type_9);
#line 1010 "parse_tree_out_pragma.m"
      return;
    }
#line 1007 "parse_tree_out_pragma.m"
  }
#line 1004 "parse_tree_out_pragma.m"
}

#line 901 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0(
#line 901 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47,
#line 901 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_4,
#line 901 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13,
#line 901 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14)
#line 901 "parse_tree_out_pragma.m"
{
#line 904 "parse_tree_out_pragma.m"
  {
#line 904 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 904 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 0)));
#line 904 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 1)));
#line 904 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybePorF_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 2)));
#line 904 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeBackend_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 3)));

#line 923 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybePorF_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "parse_tree_out_pragma.m"
      {
#line 910 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 910 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37;
#line 910 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
#line 910 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_40_40;
#line 910 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41;
#line 3174 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3176 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3178 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3180 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 3183 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3185 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ":- external(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
        }
#line 914 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybeBackend_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 914 "parse_tree_out_pragma.m"
        else
#line 915 "parse_tree_out_pragma.m"
          {
#line 915 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Backend_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeBackend_9, (MR_Integer) 0)));
#line 915 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_34_34;
#line 915 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35;
#line 3202 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3204 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 947 "parse_tree_out_pragma.m"
#line 947 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Backend_10) {
#line 947 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 947 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 951 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_34_34 = (MR_String) "high_level_backend";
#line 947 "parse_tree_out_pragma.m"
                break;
#line 947 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 948 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_34_34 = (MR_String) "low_level_backend";
#line 947 "parse_tree_out_pragma.m"
                break;
#line 947 "parse_tree_out_pragma.m"
            }
#line 3226 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3228 "parse_tree.parse_tree_out_pragma.c"
            {
#line 3230 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_34_34)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35);
            }
#line 3233 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3235 "parse_tree.parse_tree_out_pragma.c"
            {
#line 3237 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37);
            }
#line 915 "parse_tree_out_pragma.m"
          }
#line 919 "parse_tree_out_pragma.m"
        {
#line 919 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, parse_tree__parse_tree_out_pragma__PredName_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
        }
#line 3247 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3249 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3251 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_40_40);
        }
#line 3254 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 8)));
#line 3256 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3258 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_40_40, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
        }
#line 3261 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3263 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3265 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14);
#line 3267 "parse_tree.parse_tree_out_pragma.c"
          return;
        }
#line 910 "parse_tree_out_pragma.m"
      }
#line 923 "parse_tree_out_pragma.m"
    else
#line 924 "parse_tree_out_pragma.m"
      {
#line 924 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PorF_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePorF_8, (MR_Integer) 0)));
#line 924 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__PorFStr_12;
#line 924 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
#line 924 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
#line 924 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19;
#line 924 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
#line 924 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 924 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
#line 924 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 3294 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3296 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3298 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3300 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3302 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3304 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 925 "parse_tree_out_pragma.m"
        {
#line 925 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PorFStr_12 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__parse_tree_out_pragma__PorF_11);
        }
#line 3312 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3314 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3316 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ":- pragma external_")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
        }
#line 3319 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3321 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3323 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__PorFStr_12)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
        }
#line 3326 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3328 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3330 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19);
        }
#line 929 "parse_tree_out_pragma.m"
        {
#line 929 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, parse_tree__parse_tree_out_pragma__PredName_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
        }
#line 3338 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3340 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3342 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
        }
#line 3345 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 8)));
#line 3347 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3349 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23);
        }
#line 934 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybeBackend_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 933 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
#line 934 "parse_tree_out_pragma.m"
        else
#line 935 "parse_tree_out_pragma.m"
          {
#line 935 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 935 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_26_26;
#line 935 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 935 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Backend_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeBackend_9, (MR_Integer) 0)));
#line 3368 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3370 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3372 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 3375 "parse_tree.parse_tree_out_pragma.c"
            {
#line 3377 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ", [")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
            }
#line 947 "parse_tree_out_pragma.m"
#line 947 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Backend_44) {
#line 947 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 947 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 951 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_26_26 = (MR_String) "high_level_backend";
#line 947 "parse_tree_out_pragma.m"
                break;
#line 947 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 948 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_26_26 = (MR_String) "low_level_backend";
#line 947 "parse_tree_out_pragma.m"
                break;
#line 947 "parse_tree_out_pragma.m"
            }
#line 3399 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3401 "parse_tree.parse_tree_out_pragma.c"
            {
#line 3403 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_26_26)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
            }
#line 3406 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3408 "parse_tree.parse_tree_out_pragma.c"
            {
#line 3410 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
            }
#line 935 "parse_tree_out_pragma.m"
          }
#line 3415 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3417 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3419 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14);
#line 3421 "parse_tree.parse_tree_out_pragma.c"
          return;
        }
#line 924 "parse_tree_out_pragma.m"
      }
#line 904 "parse_tree_out_pragma.m"
  }
#line 901 "parse_tree_out_pragma.m"
}

#line 888 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(
#line 888 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14,
#line 888 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 888 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 888 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8)
#line 888 "parse_tree_out_pragma.m"
{
#line 891 "parse_tree_out_pragma.m"
  {
#line 891 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 891 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 891 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 891 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10;
#line 891 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12;
#line 3456 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3458 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 892 "parse_tree_out_pragma.m"
    {
#line 892 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__SymName_4, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10);
    }
#line 3466 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3468 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3470 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) " - ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12);
    }
#line 3473 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 3475 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3477 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__String_5)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
#line 3479 "parse_tree.parse_tree_out_pragma.c"
      return;
    }
#line 891 "parse_tree_out_pragma.m"
  }
#line 888 "parse_tree_out_pragma.m"
}

#line 885 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1(
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 885 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 885 "parse_tree_out_pragma.m"
{
#line 885 "parse_tree_out_pragma.m"
  {
#line 885 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 885 "parse_tree_out_pragma.m"
    {
#line 885 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
#line 885 "parse_tree_out_pragma.m"
      return;
    }
#line 885 "parse_tree_out_pragma.m"
  }
#line 885 "parse_tree_out_pragma.m"
}

#line 853 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0(
#line 853 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28,
#line 853 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEInfo_4,
#line 853 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11,
#line 853 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12)
#line 853 "parse_tree_out_pragma.m"
{
#line 856 "parse_tree_out_pragma.m"
  {
#line 856 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 856 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 0)));
#line 856 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 1)));
#line 856 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Values_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 2)));
#line 856 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_9;
#line 856 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_10;
#line 856 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 856 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
#line 856 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
#line 856 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19;
#line 856 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
#line 856 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 856 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24;
#line 856 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 856 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34;
#line 856 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_36_36;
#line 856 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37;
#line 3566 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3568 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3570 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3572 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3574 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3576 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3578 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3580 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3582 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 3585 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3587 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ":- pragma foreign_enum(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
    }
#line 859 "parse_tree_out_pragma.m"
    {
#line 859 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
#line 3595 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3597 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3599 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
    }
#line 861 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 0)));
#line 861 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 1)));
#line 862 "parse_tree_out_pragma.m"
    {
#line 862 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_9, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19);
    }
#line 3611 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3613 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3615 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
#line 3618 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 8)));
#line 3620 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3622 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_10)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
#line 3625 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3627 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3629 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24);
    }
#line 3632 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3634 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3636 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (MR_Word) ((MR_Char) 91)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34);
    }
#line 885 "parse_tree_out_pragma.m"
    {
#line 885 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 885 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
#line 885 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1));
#line 885 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 885 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28));
#line 885 "parse_tree_out_pragma.m"
    }
#line 3653 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 18)));
#line 3655 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3657 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])), ((MR_Box) (parse_tree__parse_tree_out_pragma__Values_8)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_36_36)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37);
    }
#line 3660 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3662 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3664 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (MR_Word) ((MR_Char) 93)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
#line 3667 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3669 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3671 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12);
#line 3673 "parse_tree.parse_tree_out_pragma.c"
      return;
    }
#line 856 "parse_tree_out_pragma.m"
  }
#line 853 "parse_tree_out_pragma.m"
}

#line 885 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1(
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 885 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 885 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 885 "parse_tree_out_pragma.m"
{
#line 885 "parse_tree_out_pragma.m"
  {
#line 885 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 885 "parse_tree_out_pragma.m"
    {
#line 885 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
#line 885 "parse_tree_out_pragma.m"
      return;
    }
#line 885 "parse_tree_out_pragma.m"
  }
#line 885 "parse_tree_out_pragma.m"
}

#line 813 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0(
#line 813 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32,
#line 813 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_4,
#line 813 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12,
#line 813 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13)
#line 813 "parse_tree_out_pragma.m"
{
#line 816 "parse_tree_out_pragma.m"
  {
#line 816 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 816 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 0)));
#line 816 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 1)));
#line 816 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Attributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 2)));
#line 816 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Overrides_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 3)));
#line 816 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_10;
#line 816 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_11;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 816 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybePrefix_37;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54;
#line 816 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_56_56;
#line 816 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57;
#line 3772 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3774 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3776 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3778 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3780 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 836 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_48_48;
#line 3784 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3786 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3788 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3790 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3792 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3794 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3796 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 3799 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3801 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ":- pragma foreign_export_enum(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
#line 820 "parse_tree_out_pragma.m"
    {
#line 820 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
    }
#line 3809 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3811 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3813 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18);
    }
#line 822 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 0)));
#line 822 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeArity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 1)));
#line 823 "parse_tree_out_pragma.m"
    {
#line 823 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_10, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
    }
#line 3825 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3827 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3829 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
#line 3832 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 8)));
#line 3834 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3836 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_11)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23);
    }
#line 3839 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3841 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3843 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
#line 836 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__MaybePrefix_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_8, (MR_Integer) 0)));
#line 836 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_8, (MR_Integer) 1)));
#line 3850 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3852 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3854 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "[")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40);
    }
#line 840 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybePrefix_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40;
#line 840 "parse_tree_out_pragma.m"
    else
#line 841 "parse_tree_out_pragma.m"
      {
#line 841 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Prefix_38 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePrefix_37, (MR_Integer) 0)));
#line 841 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42;
#line 841 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43;
#line 3871 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3873 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3875 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 3878 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3880 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "prefix(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42);
        }
#line 3883 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 12)));
#line 3885 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3887 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (parse_tree__parse_tree_out_pragma__Prefix_38)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43);
        }
#line 3890 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3892 "parse_tree.parse_tree_out_pragma.c"
        {
#line 3894 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 41)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45);
        }
#line 841 "parse_tree_out_pragma.m"
      }
#line 3899 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3901 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3903 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26);
    }
#line 3906 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3908 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3910 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28);
    }
#line 3913 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3915 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3917 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 91)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54);
    }
#line 885 "parse_tree_out_pragma.m"
    {
#line 885 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 885 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
#line 885 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1));
#line 885 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 885 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32));
#line 885 "parse_tree_out_pragma.m"
    }
#line 3934 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 18)));
#line 3936 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3938 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])), ((MR_Box) (parse_tree__parse_tree_out_pragma__Overrides_9)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_56_56)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57);
    }
#line 3941 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3943 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3945 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 93)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
    }
#line 3948 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3950 "parse_tree.parse_tree_out_pragma.c"
    {
#line 3952 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13);
#line 3954 "parse_tree.parse_tree_out_pragma.c"
      return;
    }
#line 816 "parse_tree_out_pragma.m"
  }
#line 813 "parse_tree_out_pragma.m"
}

#line 778 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0(
#line 778 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42,
#line 778 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 778 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_6,
#line 778 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_18,
#line 778 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19)
#line 778 "parse_tree_out_pragma.m"
{
#line 781 "parse_tree_out_pragma.m"
  {
#line 781 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 781 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ForeignLang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 0)));
#line 781 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 1)));
#line 781 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__ExportName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 2)));
#line 781 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 0)));
#line 781 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 1)));
#line 781 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 2)));
#line 781 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_14;
#line 781 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InstInfo_15;
#line 781 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
#line 781 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 781 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24;
#line 781 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 781 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36;
#line 781 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
#line 781 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39;
#line 4011 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4013 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4015 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4017 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4019 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 785 "parse_tree_out_pragma.m"
    {
#line 785 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_14);
    }
#line 786 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__InstInfo_15 = (MR_Word) parse_tree__parse_tree_out_pragma__VarSet_14;
#line 4029 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4031 "parse_tree.parse_tree_out_pragma.c"
    {
#line 4033 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ":- pragma foreign_export(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
#line 788 "parse_tree_out_pragma.m"
    {
#line 788 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__ForeignLang_8, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
#line 4041 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4043 "parse_tree.parse_tree_out_pragma.c"
    {
#line 4045 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24);
    }
#line 790 "parse_tree_out_pragma.m"
    {
#line 790 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__Name_11, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
#line 798 "parse_tree_out_pragma.m"
#line 798 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_13) {
#line 798 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 798 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 792 "parse_tree_out_pragma.m"
        {
#line 792 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45;
#line 792 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__ArgModes_16;
#line 792 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_17;
#line 792 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32;
#line 792 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 792 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35;
#line 793 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv2_RetMode_17;
#line 4076 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4078 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 793 "parse_tree_out_pragma.m"
          {
#line 793 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_12, &parse_tree__parse_tree_out_pragma__ArgModes_16, &parse_tree__parse_tree_out_pragma__conv2_RetMode_17);
          }
#line 793 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_17 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv2_RetMode_17);
#line 4088 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4090 "parse_tree.parse_tree_out_pragma.c"
          {
#line 4092 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32);
          }
#line 4095 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[3];
#line 795 "parse_tree_out_pragma.m"
          {
#line 795 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45, parse_tree__parse_tree_out_pragma__Lang_5, ((MR_Box) (parse_tree__parse_tree_out_pragma__InstInfo_15)), parse_tree__parse_tree_out_pragma__ArgModes_16, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
          }
#line 4102 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4104 "parse_tree.parse_tree_out_pragma.c"
          {
#line 4106 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ") = ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35);
          }
#line 797 "parse_tree_out_pragma.m"
          {
#line 797 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45, parse_tree__parse_tree_out_pragma__Lang_5, ((MR_Box) (parse_tree__parse_tree_out_pragma__InstInfo_15)), parse_tree__parse_tree_out_pragma__RetMode_17, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36);
          }
#line 792 "parse_tree_out_pragma.m"
        }
#line 798 "parse_tree_out_pragma.m"
        break;
#line 798 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 799 "parse_tree_out_pragma.m"
        {
#line 799 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 799 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28;
#line 4126 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4128 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 4131 "parse_tree.parse_tree_out_pragma.c"
          {
#line 4133 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
          }
#line 801 "parse_tree_out_pragma.m"
          {
#line 801 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[3], parse_tree__parse_tree_out_pragma__Lang_5, ((MR_Box) (parse_tree__parse_tree_out_pragma__InstInfo_15)), parse_tree__parse_tree_out_pragma__ModeList_12, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28);
          }
#line 4141 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4143 "parse_tree.parse_tree_out_pragma.c"
          {
#line 4145 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36);
          }
#line 799 "parse_tree_out_pragma.m"
        }
#line 798 "parse_tree_out_pragma.m"
        break;
#line 798 "parse_tree_out_pragma.m"
    }
#line 4154 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4156 "parse_tree.parse_tree_out_pragma.c"
    {
#line 4158 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
    }
#line 4161 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4163 "parse_tree.parse_tree_out_pragma.c"
    {
#line 4165 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) (parse_tree__parse_tree_out_pragma__ExportName_10)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39);
    }
#line 4168 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4170 "parse_tree.parse_tree_out_pragma.c"
    {
#line 4172 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19);
#line 4174 "parse_tree.parse_tree_out_pragma.c"
      return;
    }
#line 781 "parse_tree_out_pragma.m"
  }
#line 778 "parse_tree_out_pragma.m"
}

#line 762 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
#line 762 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1)
#line 762 "parse_tree_out_pragma.m"
{
#line 765 "parse_tree_out_pragma.m"
  {
#line 765 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 765 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__HeadVar__2_2;

#line 765 "parse_tree_out_pragma.m"
#line 765 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__HeadVar__1_1)) {
#line 765 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 765 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 765 "parse_tree_out_pragma.m"
#line 765 "parse_tree_out_pragma.m"
        switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__HeadVar__1_1)) {
#line 765 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 765 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 765 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "refers_to_llds_stack";
#line 765 "parse_tree_out_pragma.m"
            break;
#line 765 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 770 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "needs_call_standard_output_registers";
#line 765 "parse_tree_out_pragma.m"
            break;
#line 765 "parse_tree_out_pragma.m"
        }
#line 765 "parse_tree_out_pragma.m"
        break;
#line 765 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 768 "parse_tree_out_pragma.m"
        {
#line 768 "parse_tree_out_pragma.m"
          MR_Integer parse_tree__parse_tree_out_pragma__Size_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 768 "parse_tree_out_pragma.m"
          MR_String parse_tree__parse_tree_out_pragma__V_7_7;
#line 768 "parse_tree_out_pragma.m"
          MR_String parse_tree__parse_tree_out_pragma__V_8_8;

#line 769 "parse_tree_out_pragma.m"
          {
#line 769 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_8_8 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_out_pragma__Size_5);
          }
#line 769 "parse_tree_out_pragma.m"
          {
#line 769 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__V_8_8, (MR_String) ")");
          }
#line 769 "parse_tree_out_pragma.m"
          {
#line 769 "parse_tree_out_pragma.m"
            return parse_tree__parse_tree_out_pragma__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "max_stack_size(", parse_tree__parse_tree_out_pragma__V_7_7);
          }
#line 768 "parse_tree_out_pragma.m"
        }
#line 765 "parse_tree_out_pragma.m"
        break;
#line 765 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 765 "parse_tree_out_pragma.m"
        {
#line 765 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));

#line 765 "parse_tree_out_pragma.m"
#line 765 "parse_tree_out_pragma.m"
          switch (parse_tree__parse_tree_out_pragma__V_10_10) {
#line 765 "parse_tree_out_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 765 "parse_tree_out_pragma.m"
            case (MR_Integer) 0:
#line 767 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "high_level_backend";
#line 765 "parse_tree_out_pragma.m"
              break;
#line 765 "parse_tree_out_pragma.m"
            case (MR_Integer) 1:
#line 766 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "low_level_backend";
#line 765 "parse_tree_out_pragma.m"
              break;
#line 765 "parse_tree_out_pragma.m"
          }
#line 765 "parse_tree_out_pragma.m"
        }
#line 765 "parse_tree_out_pragma.m"
        break;
#line 765 "parse_tree_out_pragma.m"
    }
#line 765 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__HeadVar__2_2;
#line 765 "parse_tree_out_pragma.m"
  }
#line 762 "parse_tree_out_pragma.m"
}

#line 751 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
#line 751 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_4,
#line 751 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__UnitSelector_5)
#line 751 "parse_tree_out_pragma.m"
{
#line 755 "parse_tree_out_pragma.m"
  {
#line 755 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 755 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_6;

#line 755 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__UnitSelector_5)) == (MR_mktag((MR_Integer) 0))))
#line 758 "parse_tree_out_pragma.m"
      {
#line 759 "parse_tree_out_pragma.m"
        {
#line 759 "parse_tree_out_pragma.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_pragma", (MR_String) "function \140parse_tree.parse_tree_out_pragma.unit_selector_to_string\'/2", (MR_String) "termsel in user-annotated sharing");
        }
#line 758 "parse_tree_out_pragma.m"
      }
#line 755 "parse_tree_out_pragma.m"
    else
#line 755 "parse_tree_out_pragma.m"
      {
#line 755 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnitSelector_5, (MR_Integer) 0)));

#line 756 "parse_tree_out_pragma.m"
        {
#line 756 "parse_tree_out_pragma.m"
          return parse_tree__parse_tree_out_pragma__String_6 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeVarSet_4, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__Type_7);
        }
#line 755 "parse_tree_out_pragma.m"
      }
#line 755 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_6;
#line 755 "parse_tree_out_pragma.m"
  }
#line 751 "parse_tree_out_pragma.m"
}

#line 748 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
#line 748 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 748 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 748 "parse_tree_out_pragma.m"
{
#line 748 "parse_tree_out_pragma.m"
  {
#line 748 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 748 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 748 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_String_6;

#line 748 "parse_tree_out_pragma.m"
    {
#line 748 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_String_6 = parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 748 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_String_6));
#line 748 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 748 "parse_tree_out_pragma.m"
  }
#line 748 "parse_tree_out_pragma.m"
}

#line 731 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
#line 731 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 731 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_6,
#line 731 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3)
#line 731 "parse_tree_out_pragma.m"
{
#line 734 "parse_tree_out_pragma.m"
  {
#line 734 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__Str_9;
#line 734 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 734 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__DataA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 0)));
#line 734 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__DataB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 1)));
#line 734 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataA_7, (MR_Integer) 0)));
#line 734 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SelectorA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataA_7, (MR_Integer) 1)));
#line 734 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataB_8, (MR_Integer) 0)));
#line 734 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SelectorB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataB_8, (MR_Integer) 1)));
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__VarStrA_14;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__VarStrB_15;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__SelectorStrA_16;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__SelectorStrB_17;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__StrA_18;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__StrB_19;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_23_23;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_24_24;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_26_26;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_29_29;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_30_30;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_32_32;
#line 734 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_34_34;
#line 734 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UnitStrs_40;
#line 734 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_41_41;
#line 734 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UnitStrs_50;

#line 737 "parse_tree_out_pragma.m"
    {
#line 737 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarStrA_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36, parse_tree__parse_tree_out_pragma__VarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__VarA_10);
    }
#line 738 "parse_tree_out_pragma.m"
    {
#line 738 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarStrB_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36, parse_tree__parse_tree_out_pragma__VarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__VarB_12);
    }
#line 748 "parse_tree_out_pragma.m"
    {
#line 748 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 748 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[0]));
#line 748 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1));
#line 748 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 748 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_6));
#line 748 "parse_tree_out_pragma.m"
    }
#line 748 "parse_tree_out_pragma.m"
    {
#line 748 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UnitStrs_40 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_41_41, parse_tree__parse_tree_out_pragma__SelectorA_11);
    }
#line 749 "parse_tree_out_pragma.m"
    {
#line 749 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__SelectorStrA_16 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__UnitStrs_40);
    }
#line 748 "parse_tree_out_pragma.m"
    {
#line 748 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UnitStrs_50 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_41_41, parse_tree__parse_tree_out_pragma__SelectorB_13);
    }
#line 749 "parse_tree_out_pragma.m"
    {
#line 749 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__SelectorStrB_17 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__UnitStrs_50);
    }
#line 741 "parse_tree_out_pragma.m"
    {
#line 741 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_26_26 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__SelectorStrA_16, (MR_String) "])");
    }
#line 741 "parse_tree_out_pragma.m"
    {
#line 741 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) ", [", parse_tree__parse_tree_out_pragma__V_26_26);
    }
#line 741 "parse_tree_out_pragma.m"
    {
#line 741 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_23_23 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__VarStrA_14, parse_tree__parse_tree_out_pragma__V_24_24);
    }
#line 741 "parse_tree_out_pragma.m"
    {
#line 741 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__StrA_18 = mercury__string__f_43_43_2_f_0((MR_String) "cel(", parse_tree__parse_tree_out_pragma__V_23_23);
    }
#line 742 "parse_tree_out_pragma.m"
    {
#line 742 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_32_32 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__SelectorStrB_17, (MR_String) "])");
    }
#line 742 "parse_tree_out_pragma.m"
    {
#line 742 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ", [", parse_tree__parse_tree_out_pragma__V_32_32);
    }
#line 742 "parse_tree_out_pragma.m"
    {
#line 742 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__VarStrB_15, parse_tree__parse_tree_out_pragma__V_30_30);
    }
#line 742 "parse_tree_out_pragma.m"
    {
#line 742 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__StrB_19 = mercury__string__f_43_43_2_f_0((MR_String) "cel(", parse_tree__parse_tree_out_pragma__V_29_29);
    }
#line 743 "parse_tree_out_pragma.m"
    {
#line 743 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " - ", parse_tree__parse_tree_out_pragma__StrB_19);
    }
#line 743 "parse_tree_out_pragma.m"
    {
#line 743 "parse_tree_out_pragma.m"
      return parse_tree__parse_tree_out_pragma__Str_9 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__StrA_18, parse_tree__parse_tree_out_pragma__V_34_34);
    }
#line 734 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__Str_9;
#line 734 "parse_tree_out_pragma.m"
  }
#line 731 "parse_tree_out_pragma.m"
}

#line 724 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
#line 724 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 724 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 724 "parse_tree_out_pragma.m"
{
#line 724 "parse_tree_out_pragma.m"
  {
#line 724 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 724 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 724 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv1_Str_9;

#line 724 "parse_tree_out_pragma.m"
    {
#line 724 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv1_Str_9 = parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 724 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv1_Str_9));
#line 724 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 724 "parse_tree_out_pragma.m"
  }
#line 724 "parse_tree_out_pragma.m"
}

#line 715 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
#line 715 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 715 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 715 "parse_tree_out_pragma.m"
{
#line 715 "parse_tree_out_pragma.m"
  {
#line 715 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 715 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 715 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4;

#line 715 "parse_tree_out_pragma.m"
    {
#line 715 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 715 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4));
#line 715 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 715 "parse_tree_out_pragma.m"
  }
#line 715 "parse_tree_out_pragma.m"
}

#line 700 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
#line 700 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 700 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Sharing_6,
#line 700 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_7)
#line 700 "parse_tree_out_pragma.m"
{
#line 705 "parse_tree_out_pragma.m"
  {
#line 705 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 705 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_8;

#line 705 "parse_tree_out_pragma.m"
#line 705 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Sharing_6)) {
#line 705 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 705 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 706 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__String_8 = (MR_String) "no_sharing";
#line 705 "parse_tree_out_pragma.m"
        break;
#line 705 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 711 "parse_tree_out_pragma.m"
        {
#line 711 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__SharingPairs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Sharing_6, (MR_Integer) 0)));
#line 711 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_12;
#line 711 "parse_tree_out_pragma.m"
          MR_String parse_tree__parse_tree_out_pragma__MaybeTypesStr_15;
#line 711 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__SharingPairStrs_16;
#line 711 "parse_tree_out_pragma.m"
          MR_String parse_tree__parse_tree_out_pragma__SharingPairListStr_17;
#line 711 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_25_25;
#line 711 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_27_27;
#line 711 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_29_29;
#line 711 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_30_30;
#line 711 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_32_32;

#line 719 "parse_tree_out_pragma.m"
          if ((parse_tree__parse_tree_out_pragma__MaybeTypes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "parse_tree_out_pragma.m"
            {
#line 721 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MaybeTypesStr_15 = (MR_String) "no";
#line 722 "parse_tree_out_pragma.m"
              {
#line 722 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__TypeVarSet_12 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
              }
#line 720 "parse_tree_out_pragma.m"
            }
#line 719 "parse_tree_out_pragma.m"
          else
#line 713 "parse_tree_out_pragma.m"
            {
#line 713 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Types_11;
#line 713 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TypeStrs_13;
#line 713 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__TypeListStr_14;
#line 713 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTypes_7, (MR_Integer) 0)));
#line 713 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__V_19_19;
#line 713 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_23_23;

#line 713 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_18_18, (MR_Integer) 0)));
#line 713 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_18_18, (MR_Integer) 1)));
#line 715 "parse_tree_out_pragma.m"
              {
#line 715 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 715 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[2]));
#line 715 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1));
#line 715 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 715 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_12));
#line 715 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 4) = ((MR_Box) ((MR_Integer) 0));
#line 715 "parse_tree_out_pragma.m"
              }
#line 714 "parse_tree_out_pragma.m"
              {
#line 714 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__TypeStrs_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_19_19, parse_tree__parse_tree_out_pragma__Types_11);
              }
#line 717 "parse_tree_out_pragma.m"
              {
#line 717 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__TypeListStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__TypeStrs_13);
              }
#line 718 "parse_tree_out_pragma.m"
              {
#line 718 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_23_23 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeListStr_14, (MR_String) ")");
              }
#line 718 "parse_tree_out_pragma.m"
              {
#line 718 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__MaybeTypesStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "yes(", parse_tree__parse_tree_out_pragma__V_23_23);
              }
#line 713 "parse_tree_out_pragma.m"
            }
#line 724 "parse_tree_out_pragma.m"
          {
#line 724 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 724 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[3]));
#line 724 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2));
#line 724 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 724 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarSet_5));
#line 724 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 4) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_12));
#line 724 "parse_tree_out_pragma.m"
          }
#line 724 "parse_tree_out_pragma.m"
          {
#line 724 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__SharingPairStrs_16 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_25_25, parse_tree__parse_tree_out_pragma__SharingPairs_10);
          }
#line 726 "parse_tree_out_pragma.m"
          {
#line 726 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__SharingPairListStr_17 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__SharingPairStrs_16);
          }
#line 728 "parse_tree_out_pragma.m"
          {
#line 728 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_32_32, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__SharingPairListStr_17));
#line 728 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[26])));
#line 728 "parse_tree_out_pragma.m"
          }
#line 728 "parse_tree_out_pragma.m"
          {
#line 728 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_30_30, 0) = ((MR_Box) ((MR_String) ", ["));
#line 728 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_30_30, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_32_32));
#line 728 "parse_tree_out_pragma.m"
          }
#line 728 "parse_tree_out_pragma.m"
          {
#line 728 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_29_29, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__MaybeTypesStr_15));
#line 728 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_29_29, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_30_30));
#line 728 "parse_tree_out_pragma.m"
          }
#line 728 "parse_tree_out_pragma.m"
          {
#line 728 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, 0) = ((MR_Box) ((MR_String) "sharing("));
#line 728 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_29_29));
#line 728 "parse_tree_out_pragma.m"
          }
#line 727 "parse_tree_out_pragma.m"
          {
#line 727 "parse_tree_out_pragma.m"
            return parse_tree__parse_tree_out_pragma__String_8 = mercury__string__append_list_1_f_0(parse_tree__parse_tree_out_pragma__V_27_27);
          }
#line 711 "parse_tree_out_pragma.m"
        }
#line 705 "parse_tree_out_pragma.m"
        break;
#line 705 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 709 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__String_8 = (MR_String) "unknown_sharing";
#line 705 "parse_tree_out_pragma.m"
        break;
#line 705 "parse_tree_out_pragma.m"
    }
#line 705 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_8;
#line 705 "parse_tree_out_pragma.m"
  }
#line 700 "parse_tree_out_pragma.m"
}

#line 698 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
#line 698 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 698 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 698 "parse_tree_out_pragma.m"
{
#line 698 "parse_tree_out_pragma.m"
  {
#line 698 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 698 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 698 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2;

#line 698 "parse_tree_out_pragma.m"
    {
#line 698 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2 = parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 698 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2));
#line 698 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 698 "parse_tree_out_pragma.m"
  }
#line 698 "parse_tree_out_pragma.m"
}

#line 526 "parse_tree_out_pragma.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
#line 526 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Attrs_4,
#line 526 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5)
#line 526 "parse_tree_out_pragma.m"
{
#line 529 "parse_tree_out_pragma.m"
  {
#line 529 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__StringList_6;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMercury_7;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ThreadSafe_8;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TabledForIO_9;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Purity_10;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Terminates_11;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UserSharing_12;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Exceptions_13;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayModifyTrail_15;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__BoxPolicy_17;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AffectsLiveness_18;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AllocatesMemory_19;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__RegistersRoots_20;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ExtraAttributes_22;
#line 529 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23;
#line 529 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__ThreadSafeStr_24;
#line 529 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__TabledForIOStr_25;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PurityStrList_26;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TerminatesStrList_27;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UserSharingStrList_31;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ExceptionsStrList_32;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_85_85;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_86_86;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_87_87;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_88_88;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_89_89;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_90_90;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_91_91;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_92_92;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_93_93;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_94_94;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_95_95;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_96_96;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_97_97;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_98_98;
#line 529 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_99_99;

#line 530 "parse_tree_out_pragma.m"
    {
#line 530 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayCallMercury_7 = parse_tree__prog_data__get_may_call_mercury_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 531 "parse_tree_out_pragma.m"
    {
#line 531 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__ThreadSafe_8 = parse_tree__prog_data__get_thread_safe_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 532 "parse_tree_out_pragma.m"
    {
#line 532 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__TabledForIO_9 = parse_tree__prog_data__get_tabled_for_io_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 533 "parse_tree_out_pragma.m"
    {
#line 533 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Purity_10 = parse_tree__prog_data__get_purity_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 534 "parse_tree_out_pragma.m"
    {
#line 534 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Terminates_11 = parse_tree__prog_data__get_terminates_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 535 "parse_tree_out_pragma.m"
    {
#line 535 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UserSharing_12 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 536 "parse_tree_out_pragma.m"
    {
#line 536 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Exceptions_13 = parse_tree__prog_data__get_may_throw_exception_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 537 "parse_tree_out_pragma.m"
    {
#line 537 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14 = parse_tree__prog_data__get_ordinary_despite_detism_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 538 "parse_tree_out_pragma.m"
    {
#line 538 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayModifyTrail_15 = parse_tree__prog_data__get_may_modify_trail_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 539 "parse_tree_out_pragma.m"
    {
#line 539 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16 = parse_tree__prog_data__get_may_call_mm_tabled_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 540 "parse_tree_out_pragma.m"
    {
#line 540 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__BoxPolicy_17 = parse_tree__prog_data__get_box_policy_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 541 "parse_tree_out_pragma.m"
    {
#line 541 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__AffectsLiveness_18 = parse_tree__prog_data__get_affects_liveness_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 542 "parse_tree_out_pragma.m"
    {
#line 542 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__AllocatesMemory_19 = parse_tree__prog_data__get_allocates_memory_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 543 "parse_tree_out_pragma.m"
    {
#line 543 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__RegistersRoots_20 = parse_tree__prog_data__get_registers_roots_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 544 "parse_tree_out_pragma.m"
    {
#line 544 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21 = parse_tree__prog_data__get_may_duplicate_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 545 "parse_tree_out_pragma.m"
    {
#line 545 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__ExtraAttributes_22 = parse_tree__prog_data__get_extra_attributes_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 549 "parse_tree_out_pragma.m"
#line 549 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MayCallMercury_7) {
#line 549 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 549 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 548 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23 = (MR_String) "may_call_mercury";
#line 549 "parse_tree_out_pragma.m"
        break;
#line 549 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 551 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23 = (MR_String) "will_not_call_mercury";
#line 549 "parse_tree_out_pragma.m"
        break;
#line 549 "parse_tree_out_pragma.m"
    }
#line 556 "parse_tree_out_pragma.m"
#line 556 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__ThreadSafe_8) {
#line 556 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 556 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 561 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "maybe_thread_safe";
#line 556 "parse_tree_out_pragma.m"
        break;
#line 556 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 555 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "not_thread_safe";
#line 556 "parse_tree_out_pragma.m"
        break;
#line 556 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 558 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "thread_safe";
#line 556 "parse_tree_out_pragma.m"
        break;
#line 556 "parse_tree_out_pragma.m"
    }
#line 566 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TabledForIOStr_25 = ((&parse_tree__parse_tree_out_pragma_vector_common_7[0 + parse_tree__parse_tree_out_pragma__TabledForIO_9]))->parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
#line 579 "parse_tree_out_pragma.m"
#line 579 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Purity_10) {
#line 579 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 579 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 584 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 579 "parse_tree_out_pragma.m"
        break;
#line 579 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 577 "parse_tree_out_pragma.m"
        {
#line 578 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[5]);
#line 577 "parse_tree_out_pragma.m"
        }
#line 579 "parse_tree_out_pragma.m"
        break;
#line 579 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 580 "parse_tree_out_pragma.m"
        {
#line 581 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[6]);
#line 580 "parse_tree_out_pragma.m"
        }
#line 579 "parse_tree_out_pragma.m"
        break;
#line 579 "parse_tree_out_pragma.m"
    }
#line 589 "parse_tree_out_pragma.m"
#line 589 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Terminates_11) {
#line 589 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 589 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 594 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 589 "parse_tree_out_pragma.m"
        break;
#line 589 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 590 "parse_tree_out_pragma.m"
        {
#line 591 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[7]);
#line 590 "parse_tree_out_pragma.m"
        }
#line 589 "parse_tree_out_pragma.m"
        break;
#line 589 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 587 "parse_tree_out_pragma.m"
        {
#line 588 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[8]);
#line 587 "parse_tree_out_pragma.m"
        }
#line 589 "parse_tree_out_pragma.m"
        break;
#line 589 "parse_tree_out_pragma.m"
    }
#line 600 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__UserSharing_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UserSharingStrList_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "parse_tree_out_pragma.m"
    else
#line 597 "parse_tree_out_pragma.m"
      {
#line 597 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Sharing_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharing_12, (MR_Integer) 0)));
#line 597 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharing_12, (MR_Integer) 1)));
#line 597 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__String_30;

#line 598 "parse_tree_out_pragma.m"
        {
#line 598 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__String_30 = parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(parse_tree__parse_tree_out_pragma__VarSet_5, parse_tree__parse_tree_out_pragma__Sharing_28, parse_tree__parse_tree_out_pragma__MaybeTypes_29);
        }
#line 599 "parse_tree_out_pragma.m"
        {
#line 599 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__UserSharingStrList_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharingStrList_31, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__String_30));
#line 599 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharingStrList_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 599 "parse_tree_out_pragma.m"
        }
#line 597 "parse_tree_out_pragma.m"
      }
#line 607 "parse_tree_out_pragma.m"
#line 607 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Exceptions_13) {
#line 607 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 607 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 609 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ExceptionsStrList_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 607 "parse_tree_out_pragma.m"
        break;
#line 607 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 605 "parse_tree_out_pragma.m"
        {
#line 606 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__ExceptionsStrList_32 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[9]);
#line 605 "parse_tree_out_pragma.m"
        }
#line 607 "parse_tree_out_pragma.m"
        break;
#line 607 "parse_tree_out_pragma.m"
    }
#line 614 "parse_tree_out_pragma.m"
#line 614 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14) {
#line 614 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 614 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 616 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "parse_tree_out_pragma.m"
        break;
#line 614 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 612 "parse_tree_out_pragma.m"
        {
#line 613 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[10]);
#line 612 "parse_tree_out_pragma.m"
        }
#line 614 "parse_tree_out_pragma.m"
        break;
#line 614 "parse_tree_out_pragma.m"
    }
#line 621 "parse_tree_out_pragma.m"
#line 621 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MayModifyTrail_15) {
#line 621 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 621 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 619 "parse_tree_out_pragma.m"
        {
#line 620 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[11]);
#line 619 "parse_tree_out_pragma.m"
        }
#line 621 "parse_tree_out_pragma.m"
        break;
#line 621 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 622 "parse_tree_out_pragma.m"
        {
#line 623 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[12]);
#line 622 "parse_tree_out_pragma.m"
        }
#line 621 "parse_tree_out_pragma.m"
        break;
#line 621 "parse_tree_out_pragma.m"
    }
#line 628 "parse_tree_out_pragma.m"
#line 628 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16) {
#line 628 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 628 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 633 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "parse_tree_out_pragma.m"
        break;
#line 628 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 626 "parse_tree_out_pragma.m"
        {
#line 627 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[13]);
#line 626 "parse_tree_out_pragma.m"
        }
#line 628 "parse_tree_out_pragma.m"
        break;
#line 628 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 629 "parse_tree_out_pragma.m"
        {
#line 630 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[14]);
#line 629 "parse_tree_out_pragma.m"
        }
#line 628 "parse_tree_out_pragma.m"
        break;
#line 628 "parse_tree_out_pragma.m"
    }
#line 638 "parse_tree_out_pragma.m"
#line 638 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__BoxPolicy_17) {
#line 638 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 638 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 639 "parse_tree_out_pragma.m"
        {
#line 640 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[15]);
#line 639 "parse_tree_out_pragma.m"
        }
#line 638 "parse_tree_out_pragma.m"
        break;
#line 638 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 637 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "parse_tree_out_pragma.m"
        break;
#line 638 "parse_tree_out_pragma.m"
    }
#line 645 "parse_tree_out_pragma.m"
#line 645 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__AffectsLiveness_18) {
#line 645 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 645 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 643 "parse_tree_out_pragma.m"
        {
#line 644 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[16]);
#line 643 "parse_tree_out_pragma.m"
        }
#line 645 "parse_tree_out_pragma.m"
        break;
#line 645 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 650 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 645 "parse_tree_out_pragma.m"
        break;
#line 645 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 646 "parse_tree_out_pragma.m"
        {
#line 647 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[17]);
#line 646 "parse_tree_out_pragma.m"
        }
#line 645 "parse_tree_out_pragma.m"
        break;
#line 645 "parse_tree_out_pragma.m"
    }
#line 655 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[0 + parse_tree__parse_tree_out_pragma__AllocatesMemory_19]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
#line 668 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[4 + parse_tree__parse_tree_out_pragma__RegistersRoots_20]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
#line 687 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 687 "parse_tree_out_pragma.m"
    else
#line 679 "parse_tree_out_pragma.m"
      {
#line 679 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__MayDuplicate_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21, (MR_Integer) 0)));

#line 683 "parse_tree_out_pragma.m"
#line 683 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__MayDuplicate_40) {
#line 683 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 683 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 681 "parse_tree_out_pragma.m"
            {
#line 682 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[24]);
#line 681 "parse_tree_out_pragma.m"
            }
#line 683 "parse_tree_out_pragma.m"
            break;
#line 683 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 684 "parse_tree_out_pragma.m"
            {
#line 685 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[25]);
#line 684 "parse_tree_out_pragma.m"
            }
#line 683 "parse_tree_out_pragma.m"
            break;
#line 683 "parse_tree_out_pragma.m"
        }
#line 679 "parse_tree_out_pragma.m"
      }
#line 5390 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 691 "parse_tree_out_pragma.m"
    {
#line 691 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_87_87, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TabledForIOStr_25));
#line 691 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_87_87, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__PurityStrList_26));
#line 691 "parse_tree_out_pragma.m"
    }
#line 691 "parse_tree_out_pragma.m"
    {
#line 691 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_86_86, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__ThreadSafeStr_24));
#line 691 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_86_86, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_87_87));
#line 691 "parse_tree_out_pragma.m"
    }
#line 691 "parse_tree_out_pragma.m"
    {
#line 691 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_85_85, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23));
#line 691 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_85_85, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_86_86));
#line 691 "parse_tree_out_pragma.m"
    }
#line 698 "parse_tree_out_pragma.m"
    {
#line 698 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_99_99 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_extra_attribute_0, parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[3], parse_tree__parse_tree_out_pragma__ExtraAttributes_22);
    }
#line 697 "parse_tree_out_pragma.m"
    {
#line 697 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_98_98 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41, parse_tree__parse_tree_out_pragma__V_99_99);
    }
#line 697 "parse_tree_out_pragma.m"
    {
#line 697 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39, parse_tree__parse_tree_out_pragma__V_98_98);
    }
#line 696 "parse_tree_out_pragma.m"
    {
#line 696 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_96_96 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38, parse_tree__parse_tree_out_pragma__V_97_97);
    }
#line 696 "parse_tree_out_pragma.m"
    {
#line 696 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_95_95 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37, parse_tree__parse_tree_out_pragma__V_96_96);
    }
#line 695 "parse_tree_out_pragma.m"
    {
#line 695 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_94_94 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36, parse_tree__parse_tree_out_pragma__V_95_95);
    }
#line 695 "parse_tree_out_pragma.m"
    {
#line 695 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_93_93 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35, parse_tree__parse_tree_out_pragma__V_94_94);
    }
#line 694 "parse_tree_out_pragma.m"
    {
#line 694 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34, parse_tree__parse_tree_out_pragma__V_93_93);
    }
#line 694 "parse_tree_out_pragma.m"
    {
#line 694 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_91_91 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33, parse_tree__parse_tree_out_pragma__V_92_92);
    }
#line 693 "parse_tree_out_pragma.m"
    {
#line 693 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_90_90 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__ExceptionsStrList_32, parse_tree__parse_tree_out_pragma__V_91_91);
    }
#line 692 "parse_tree_out_pragma.m"
    {
#line 692 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_89_89 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__UserSharingStrList_31, parse_tree__parse_tree_out_pragma__V_90_90);
    }
#line 692 "parse_tree_out_pragma.m"
    {
#line 692 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_88_88 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__TerminatesStrList_27, parse_tree__parse_tree_out_pragma__V_89_89);
    }
#line 692 "parse_tree_out_pragma.m"
    {
#line 692 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__StringList_6 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__V_85_85, parse_tree__parse_tree_out_pragma__V_88_88);
    }
#line 529 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__StringList_6;
#line 529 "parse_tree_out_pragma.m"
  }
#line 526 "parse_tree_out_pragma.m"
}

#line 377 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2(
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 377 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 377 "parse_tree_out_pragma.m"
{
#line 377 "parse_tree_out_pragma.m"
  {
#line 377 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 377 "parse_tree_out_pragma.m"
    {
#line 377 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
#line 377 "parse_tree_out_pragma.m"
      return;
    }
#line 377 "parse_tree_out_pragma.m"
  }
#line 377 "parse_tree_out_pragma.m"
}

#line 518 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1(
#line 518 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 518 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 518 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 518 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 518 "parse_tree_out_pragma.m"
{
#line 518 "parse_tree_out_pragma.m"
  {
#line 518 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 518 "parse_tree_out_pragma.m"
    {
#line 518 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_info__add_string_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_String) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
#line 518 "parse_tree_out_pragma.m"
      return;
    }
#line 518 "parse_tree_out_pragma.m"
  }
#line 518 "parse_tree_out_pragma.m"
}

#line 443 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0(
#line 443 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50,
#line 443 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 443 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_6,
#line 443 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23,
#line 443 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24)
#line 443 "parse_tree_out_pragma.m"
{
#line 446 "parse_tree_out_pragma.m"
  {
#line 446 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_88;
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Attributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 0)));
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 1)));
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 2)));
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Vars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 3)));
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ProgVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 4)));
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 5)));
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PragmaCode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 6)));
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ForeignLang_15;
#line 446 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__C_Code_21;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58;
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_59_59;
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_61_61;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74;
#line 446 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75;
#line 446 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_82_82;
#line 5625 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5627 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5629 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5631 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5633 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5635 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5637 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 484 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_22_22;
#line 5641 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5643 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5645 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_16)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 5648 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5650 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ":- pragma foreign_proc(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26);
    }
#line 450 "parse_tree_out_pragma.m"
    {
#line 450 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__ForeignLang_15 = parse_tree__prog_data__get_foreign_language_1_f_0(parse_tree__parse_tree_out_pragma__Attributes_8);
    }
#line 451 "parse_tree_out_pragma.m"
    {
#line 451 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__ForeignLang_15, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
    }
#line 5663 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5665 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5667 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
    }
#line 453 "parse_tree_out_pragma.m"
    {
#line 453 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__PredName_9, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30);
    }
#line 5675 "parse_tree.parse_tree_out_pragma.c"
#line 5676 "parse_tree.parse_tree_out_pragma.c"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
#line 5678 "parse_tree.parse_tree_out_pragma.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 5680 "parse_tree.parse_tree_out_pragma.c"
      case (MR_Integer) 1:
#line 5682 "parse_tree.parse_tree_out_pragma.c"
        {
#line 5684 "parse_tree.parse_tree_out_pragma.c"
          MR_Word parse_tree__parse_tree_out_pragma__Vars_16;
#line 5686 "parse_tree.parse_tree_out_pragma.c"
          MR_Word parse_tree__parse_tree_out_pragma__ResultVars_17;
#line 5688 "parse_tree.parse_tree_out_pragma.c"
          MR_Word parse_tree__parse_tree_out_pragma__ResultVar_18;
#line 5690 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36;
#line 5692 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
#line 5694 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39;
#line 460 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv2_ResultVar_18;
#line 5698 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5700 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 460 "parse_tree_out_pragma.m"
          {
#line 460 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__parse_tree_out_pragma__Vars0_11, &parse_tree__parse_tree_out_pragma__Vars_16, &parse_tree__parse_tree_out_pragma__conv2_ResultVar_18);
          }
#line 460 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__ResultVar_18 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv2_ResultVar_18);
#line 461 "parse_tree_out_pragma.m"
          {
#line 461 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__ResultVars_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__ResultVars_17, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__ResultVar_18));
#line 461 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__ResultVars_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "parse_tree_out_pragma.m"
          }
#line 465 "parse_tree_out_pragma.m"
          if ((parse_tree__parse_tree_out_pragma__Vars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
#line 465 "parse_tree_out_pragma.m"
          else
#line 466 "parse_tree_out_pragma.m"
            {
#line 466 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 466 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34;
#line 5732 "parse_tree.parse_tree_out_pragma.c"
              void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5734 "parse_tree.parse_tree_out_pragma.c"
              void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 5737 "parse_tree.parse_tree_out_pragma.c"
              {
#line 5739 "parse_tree.parse_tree_out_pragma.c"
                parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
              }
#line 468 "parse_tree_out_pragma.m"
              {
#line 468 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Vars_16, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34);
              }
#line 5747 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5749 "parse_tree.parse_tree_out_pragma.c"
              {
#line 5751 "parse_tree.parse_tree_out_pragma.c"
                parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36);
              }
#line 466 "parse_tree_out_pragma.m"
            }
#line 5756 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5758 "parse_tree.parse_tree_out_pragma.c"
          {
#line 5760 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) " = (")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
          }
#line 477 "parse_tree_out_pragma.m"
          {
#line 477 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__ResultVars_17, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39);
          }
#line 5768 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5770 "parse_tree.parse_tree_out_pragma.c"
          {
#line 5772 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
          }
#line 5775 "parse_tree.parse_tree_out_pragma.c"
        }
#line 5777 "parse_tree.parse_tree_out_pragma.c"
        break;
#line 5779 "parse_tree.parse_tree_out_pragma.c"
      case (MR_Integer) 0:
#line 465 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__Vars0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
#line 465 "parse_tree_out_pragma.m"
        else
#line 466 "parse_tree_out_pragma.m"
          {
#line 466 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_91;
#line 466 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_92;
#line 5793 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5795 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 5798 "parse_tree.parse_tree_out_pragma.c"
            {
#line 5800 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_91);
            }
#line 468 "parse_tree_out_pragma.m"
            {
#line 468 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Vars0_11, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_91, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_92);
            }
#line 5808 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5810 "parse_tree.parse_tree_out_pragma.c"
            {
#line 5812 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_92, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
            }
#line 466 "parse_tree_out_pragma.m"
          }
#line 5817 "parse_tree.parse_tree_out_pragma.c"
        break;
#line 5819 "parse_tree.parse_tree_out_pragma.c"
    }
#line 5821 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5823 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5825 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43);
    }
#line 5828 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5830 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5832 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "[")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58);
    }
#line 517 "parse_tree_out_pragma.m"
    {
#line 517 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_59_59 = parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(parse_tree__parse_tree_out_pragma__Attributes_8, parse_tree__parse_tree_out_pragma__ProgVarSet_12);
    }
#line 518 "parse_tree_out_pragma.m"
    {
#line 518 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 518 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[1]));
#line 518 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1));
#line 518 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 518 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50));
#line 518 "parse_tree_out_pragma.m"
    }
#line 5854 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 18)));
#line 5856 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5858 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_59_59)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_61_61)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62);
    }
#line 5861 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5863 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5865 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44);
    }
#line 5868 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5870 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5872 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46);
    }
#line 484 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__C_Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PragmaCode_14, (MR_Integer) 0)));
#line 484 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PragmaCode_14, (MR_Integer) 1)));
#line 5879 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5881 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5883 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "\"")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74);
    }
#line 377 "parse_tree_out_pragma.m"
    {
#line 377 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 377 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0]));
#line 377 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2));
#line 377 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 377 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50));
#line 377 "parse_tree_out_pragma.m"
    }
#line 5900 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5902 "parse_tree.parse_tree_out_pragma.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_88);
    }
#line 377 "parse_tree_out_pragma.m"
    {
#line 377 "parse_tree_out_pragma.m"
      mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_88, parse_tree__parse_tree_out_pragma__V_82_82, parse_tree__parse_tree_out_pragma__C_Code_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75);
    }
#line 5910 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5912 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5914 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "\"")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47);
    }
#line 5917 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5919 "parse_tree.parse_tree_out_pragma.c"
    {
#line 5921 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_16(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24);
#line 5923 "parse_tree.parse_tree_out_pragma.c"
      return;
    }
#line 446 "parse_tree_out_pragma.m"
  }
#line 443 "parse_tree_out_pragma.m"
}

#line 379 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(
#line 379 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15,
#line 379 "parse_tree_out_pragma.m"
  MR_Char parse_tree__parse_tree_out_pragma__Char_4,
#line 379 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 379 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8)
#line 379 "parse_tree_out_pragma.m"
{
#line 386 "parse_tree_out_pragma.m"
  {
#line 386 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 386 "parse_tree_out_pragma.m"
    MR_Char parse_tree__parse_tree_out_pragma__QuoteChar_6;

#line 400 "parse_tree_out_pragma.m"
#line 400 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Char_4) {
#line 400 "parse_tree_out_pragma.m"
      default:
#line 400 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__succeeded = MR_FALSE;
#line 400 "parse_tree_out_pragma.m"
        break;
#line 400 "parse_tree_out_pragma.m"
      case (MR_Char) 8:
#line 403 "parse_tree_out_pragma.m"
        {
#line 403 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 98;
#line 403 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 403 "parse_tree_out_pragma.m"
        }
#line 400 "parse_tree_out_pragma.m"
        break;
#line 400 "parse_tree_out_pragma.m"
      case (MR_Char) 34:
#line 401 "parse_tree_out_pragma.m"
        {
#line 401 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 34;
#line 401 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 401 "parse_tree_out_pragma.m"
        }
#line 400 "parse_tree_out_pragma.m"
        break;
#line 400 "parse_tree_out_pragma.m"
      case (MR_Char) 39:
#line 400 "parse_tree_out_pragma.m"
        {
#line 400 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 39;
#line 400 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 400 "parse_tree_out_pragma.m"
        }
#line 400 "parse_tree_out_pragma.m"
        break;
#line 400 "parse_tree_out_pragma.m"
      case (MR_Char) 92:
#line 402 "parse_tree_out_pragma.m"
        {
#line 402 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 92;
#line 402 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 402 "parse_tree_out_pragma.m"
        }
#line 400 "parse_tree_out_pragma.m"
        break;
#line 400 "parse_tree_out_pragma.m"
    }
#line 386 "parse_tree_out_pragma.m"
    if (parse_tree__parse_tree_out_pragma__succeeded)
#line 384 "parse_tree_out_pragma.m"
      {
#line 384 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10;
#line 6016 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 6018 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 6021 "parse_tree.parse_tree_out_pragma.c"
        {
#line 6023 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) ((MR_Char) 92)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10);
        }
#line 6026 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 6028 "parse_tree.parse_tree_out_pragma.c"
        {
#line 6030 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) (parse_tree__parse_tree_out_pragma__QuoteChar_6)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
#line 6032 "parse_tree.parse_tree_out_pragma.c"
          return;
        }
#line 384 "parse_tree_out_pragma.m"
      }
#line 386 "parse_tree_out_pragma.m"
    else
#line 388 "parse_tree_out_pragma.m"
      {
#line 411 "parse_tree_out_pragma.m"
#line 411 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__Char_4) {
#line 411 "parse_tree_out_pragma.m"
          default:
#line 411 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__succeeded = MR_FALSE;
#line 411 "parse_tree_out_pragma.m"
            break;
#line 411 "parse_tree_out_pragma.m"
          case (MR_Char) 9:
#line 414 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 411 "parse_tree_out_pragma.m"
            break;
#line 411 "parse_tree_out_pragma.m"
          case (MR_Char) 10:
#line 413 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 411 "parse_tree_out_pragma.m"
            break;
#line 411 "parse_tree_out_pragma.m"
        }
#line 411 "parse_tree_out_pragma.m"
        if (!(parse_tree__parse_tree_out_pragma__succeeded))
#line 411 "parse_tree_out_pragma.m"
          {
#line 412 "parse_tree_out_pragma.m"
            {
#line 412 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__succeeded = mercury__term_io__is_mercury_punctuation_char_1_p_0(parse_tree__parse_tree_out_pragma__Char_4);
            }
#line 411 "parse_tree_out_pragma.m"
            if (!(parse_tree__parse_tree_out_pragma__succeeded))
#line 411 "parse_tree_out_pragma.m"
              {
#line 411 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__succeeded = mercury__char__is_alnum_1_p_0(parse_tree__parse_tree_out_pragma__Char_4);
              }
#line 411 "parse_tree_out_pragma.m"
          }
#line 388 "parse_tree_out_pragma.m"
        if (parse_tree__parse_tree_out_pragma__succeeded)
#line 6084 "parse_tree.parse_tree_out_pragma.c"
          {
#line 6086 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));

#line 6089 "parse_tree.parse_tree_out_pragma.c"
            {
#line 6091 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) (parse_tree__parse_tree_out_pragma__Char_4)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
#line 6093 "parse_tree.parse_tree_out_pragma.c"
              return;
            }
#line 6096 "parse_tree.parse_tree_out_pragma.c"
          }
#line 388 "parse_tree_out_pragma.m"
        else
#line 389 "parse_tree_out_pragma.m"
          {
#line 389 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_13_13;
#line 6104 "parse_tree.parse_tree_out_pragma.c"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 389 "parse_tree_out_pragma.m"
            {
#line 389 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_13_13 = mercury__term_io__mercury_escape_char_1_f_0(parse_tree__parse_tree_out_pragma__Char_4);
            }
#line 6112 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6114 "parse_tree.parse_tree_out_pragma.c"
            {
#line 6116 "parse_tree.parse_tree_out_pragma.c"
              parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_13_13)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
#line 6118 "parse_tree.parse_tree_out_pragma.c"
              return;
            }
#line 389 "parse_tree_out_pragma.m"
          }
#line 388 "parse_tree_out_pragma.m"
      }
#line 386 "parse_tree_out_pragma.m"
  }
#line 379 "parse_tree_out_pragma.m"
}

#line 377 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1(
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 377 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 377 "parse_tree_out_pragma.m"
{
#line 377 "parse_tree_out_pragma.m"
  {
#line 377 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 377 "parse_tree_out_pragma.m"
    {
#line 377 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
#line 377 "parse_tree_out_pragma.m"
      return;
    }
#line 377 "parse_tree_out_pragma.m"
  }
#line 377 "parse_tree_out_pragma.m"
}

#line 334 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(
#line 334 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FCInfo_4)
#line 334 "parse_tree_out_pragma.m"
{
#line 337 "parse_tree_out_pragma.m"
  {
#line 337 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 337 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18;
#line 337 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FCInfo_4, (MR_Integer) 0)));
#line 337 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FCInfo_4, (MR_Integer) 1)));
#line 340 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_12_12;

#line 339 "parse_tree_out_pragma.m"
    {
#line 339 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_code(");
    }
#line 6185 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 340 "parse_tree_out_pragma.m"
    {
#line 340 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, parse_tree__parse_tree_out_pragma__Lang_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 341 "parse_tree_out_pragma.m"
    {
#line 341 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 350 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_7)) == (MR_mktag((MR_Integer) 1))))
#line 353 "parse_tree_out_pragma.m"
      {
#line 353 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_7, (MR_Integer) 0)));
#line 6203 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6205 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_11_26;
#line 6207 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6209 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_12_27;
#line 6211 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6213 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_IO_15_15;

#line 6216 "parse_tree.parse_tree_out_pragma.c"
        {
#line 6218 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_11_26);
        }
#line 6221 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6223 "parse_tree.parse_tree_out_pragma.c"
        {
#line 6225 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_24)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_12_27);
        }
#line 6228 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6230 "parse_tree.parse_tree_out_pragma.c"
        {
#line 6232 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_IO_15_15);
        }
#line 353 "parse_tree_out_pragma.m"
      }
#line 350 "parse_tree_out_pragma.m"
    else
#line 350 "parse_tree_out_pragma.m"
      {
#line 350 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_50;
#line 350 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Code_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_7, (MR_Integer) 0)));
#line 6245 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6247 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_9_36;
#line 377 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv9_STATE_VARIABLE_U_10_37;
#line 6251 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6253 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_IO_15_15;

#line 6256 "parse_tree.parse_tree_out_pragma.c"
        {
#line 6258 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_9_36);
        }
#line 6261 "parse_tree.parse_tree_out_pragma.c"
        {
#line 6263 "parse_tree.parse_tree_out_pragma.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_50);
        }
#line 377 "parse_tree_out_pragma.m"
        {
#line 377 "parse_tree_out_pragma.m"
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_50, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[2], parse_tree__parse_tree_out_pragma__Code_23, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv9_STATE_VARIABLE_U_10_37);
        }
#line 6271 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6273 "parse_tree.parse_tree_out_pragma.c"
        {
#line 6275 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_IO_15_15);
        }
#line 350 "parse_tree_out_pragma.m"
      }
#line 343 "parse_tree_out_pragma.m"
    {
#line 343 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 343 "parse_tree_out_pragma.m"
      return;
    }
#line 337 "parse_tree_out_pragma.m"
  }
#line 334 "parse_tree_out_pragma.m"
}

#line 95 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0(
#line 95 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_S_25,
#line 95 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_T_26,
#line 95 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Verbose_5,
#line 95 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6)
#line 95 "parse_tree_out_pragma.m"
{
#line 1418 "parse_tree_out_pragma.m"
  {
#line 1418 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1418 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1416 "parse_tree_out_pragma.m"
      {
#line 1417 "parse_tree_out_pragma.m"
        {
#line 1417 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
#line 1417 "parse_tree_out_pragma.m"
          return;
        }
#line 1416 "parse_tree_out_pragma.m"
      }
#line 1418 "parse_tree_out_pragma.m"
    else
#line 1418 "parse_tree_out_pragma.m"
      {
#line 1418 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6, (MR_Integer) 0)));

#line 1418 "parse_tree_out_pragma.m"
        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__V_27_27)) == (MR_mktag((MR_Integer) 1))))
#line 1422 "parse_tree_out_pragma.m"
          {
#line 1422 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__Error_9 = (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, (MR_Integer) 0));

#line 1423 "parse_tree_out_pragma.m"
            {
#line 1423 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "can_loop");
            }
#line 1429 "parse_tree_out_pragma.m"
#line 1429 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Verbose_5) {
#line 1429 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1429 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1430 "parse_tree_out_pragma.m"
                {
#line 1430 "parse_tree_out_pragma.m"
                }
#line 1429 "parse_tree_out_pragma.m"
                break;
#line 1429 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1425 "parse_tree_out_pragma.m"
                {
#line 1426 "parse_tree_out_pragma.m"
                  {
#line 1426 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 1427 "parse_tree_out_pragma.m"
                  {
#line 1427 "parse_tree_out_pragma.m"
                    mercury__io__write_3_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_26, parse_tree__parse_tree_out_pragma__Error_9);
                  }
#line 1428 "parse_tree_out_pragma.m"
                  {
#line 1428 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
#line 1428 "parse_tree_out_pragma.m"
                    return;
                  }
#line 1425 "parse_tree_out_pragma.m"
                }
#line 1429 "parse_tree_out_pragma.m"
                break;
#line 1429 "parse_tree_out_pragma.m"
            }
#line 1422 "parse_tree_out_pragma.m"
          }
#line 1418 "parse_tree_out_pragma.m"
        else
#line 1419 "parse_tree_out_pragma.m"
          {
#line 1420 "parse_tree_out_pragma.m"
            {
#line 1420 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "cannot_loop");
#line 1420 "parse_tree_out_pragma.m"
              return;
            }
#line 1419 "parse_tree_out_pragma.m"
          }
#line 1418 "parse_tree_out_pragma.m"
      }
#line 1418 "parse_tree_out_pragma.m"
  }
#line 95 "parse_tree_out_pragma.m"
}

#line 90 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(
#line 90 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_T_32,
#line 90 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Verbose_5,
#line 90 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6)
#line 90 "parse_tree_out_pragma.m"
{
#line 1365 "parse_tree_out_pragma.m"
  {
#line 1365 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1365 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1363 "parse_tree_out_pragma.m"
      {
#line 1364 "parse_tree_out_pragma.m"
        {
#line 1364 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
#line 1364 "parse_tree_out_pragma.m"
          return;
        }
#line 1363 "parse_tree_out_pragma.m"
      }
#line 1365 "parse_tree_out_pragma.m"
    else
#line 1365 "parse_tree_out_pragma.m"
      {
#line 1365 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6, (MR_Integer) 0)));

#line 1365 "parse_tree_out_pragma.m"
        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__V_33_33)) == (MR_mktag((MR_Integer) 0))))
#line 1377 "parse_tree_out_pragma.m"
          {
#line 1377 "parse_tree_out_pragma.m"
            MR_Integer parse_tree__parse_tree_out_pragma__Const_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 0)));
#line 1377 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 1)));

#line 1378 "parse_tree_out_pragma.m"
            {
#line 1378 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "finite(");
            }
#line 1379 "parse_tree_out_pragma.m"
            {
#line 1379 "parse_tree_out_pragma.m"
              mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Const_9);
            }
#line 1380 "parse_tree_out_pragma.m"
            {
#line 1380 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1387 "parse_tree_out_pragma.m"
            if ((parse_tree__parse_tree_out_pragma__UsedArgs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1387 "parse_tree_out_pragma.m"
              {
#line 1388 "parse_tree_out_pragma.m"
                {
#line 1388 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "[]");
                }
#line 1387 "parse_tree_out_pragma.m"
              }
#line 1387 "parse_tree_out_pragma.m"
            else
#line 1389 "parse_tree_out_pragma.m"
              {
#line 1389 "parse_tree_out_pragma.m"
                MR_Word parse_tree__parse_tree_out_pragma__UsedArg_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UsedArgs_10, (MR_Integer) 0)));
#line 1389 "parse_tree_out_pragma.m"
                MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UsedArgs_10, (MR_Integer) 1)));

#line 1390 "parse_tree_out_pragma.m"
                {
#line 1390 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "[");
                }
#line 1407 "parse_tree_out_pragma.m"
#line 1407 "parse_tree_out_pragma.m"
                switch (parse_tree__parse_tree_out_pragma__UsedArg_39) {
#line 1407 "parse_tree_out_pragma.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1407 "parse_tree_out_pragma.m"
                  case (MR_Integer) 0:
#line 1407 "parse_tree_out_pragma.m"
                    {
#line 1408 "parse_tree_out_pragma.m"
                      {
#line 1408 "parse_tree_out_pragma.m"
                        mercury__io__write_string_3_p_0((MR_String) "no");
                      }
#line 1407 "parse_tree_out_pragma.m"
                    }
#line 1407 "parse_tree_out_pragma.m"
                    break;
#line 1407 "parse_tree_out_pragma.m"
                  case (MR_Integer) 1:
#line 1410 "parse_tree_out_pragma.m"
                    {
#line 1411 "parse_tree_out_pragma.m"
                      {
#line 1411 "parse_tree_out_pragma.m"
                        mercury__io__write_string_3_p_0((MR_String) "yes");
                      }
#line 1410 "parse_tree_out_pragma.m"
                    }
#line 1407 "parse_tree_out_pragma.m"
                    break;
#line 1407 "parse_tree_out_pragma.m"
                }
#line 1392 "parse_tree_out_pragma.m"
                {
#line 1392 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(parse_tree__parse_tree_out_pragma__UsedArgs_40);
                }
#line 1393 "parse_tree_out_pragma.m"
                {
#line 1393 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
#line 1389 "parse_tree_out_pragma.m"
              }
#line 1382 "parse_tree_out_pragma.m"
            {
#line 1382 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
#line 1382 "parse_tree_out_pragma.m"
              return;
            }
#line 1377 "parse_tree_out_pragma.m"
          }
#line 1365 "parse_tree_out_pragma.m"
        else
#line 1366 "parse_tree_out_pragma.m"
          {
#line 1366 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__Error_8 = (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 0));

#line 1367 "parse_tree_out_pragma.m"
            {
#line 1367 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "infinite");
            }
#line 1373 "parse_tree_out_pragma.m"
#line 1373 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Verbose_5) {
#line 1373 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1373 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1374 "parse_tree_out_pragma.m"
                {
#line 1374 "parse_tree_out_pragma.m"
                }
#line 1373 "parse_tree_out_pragma.m"
                break;
#line 1373 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1369 "parse_tree_out_pragma.m"
                {
#line 1370 "parse_tree_out_pragma.m"
                  {
#line 1370 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 1371 "parse_tree_out_pragma.m"
                  {
#line 1371 "parse_tree_out_pragma.m"
                    mercury__io__write_3_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_32, parse_tree__parse_tree_out_pragma__Error_8);
                  }
#line 1372 "parse_tree_out_pragma.m"
                  {
#line 1372 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
#line 1372 "parse_tree_out_pragma.m"
                    return;
                  }
#line 1369 "parse_tree_out_pragma.m"
                }
#line 1373 "parse_tree_out_pragma.m"
                break;
#line 1373 "parse_tree_out_pragma.m"
            }
#line 1366 "parse_tree_out_pragma.m"
          }
#line 1365 "parse_tree_out_pragma.m"
      }
#line 1365 "parse_tree_out_pragma.m"
  }
#line 90 "parse_tree_out_pragma.m"
}

#line 1630 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_7_p_0_1(
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1630 "parse_tree_out_pragma.m"
{
#line 1630 "parse_tree_out_pragma.m"
  {
#line 1630 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1630 "parse_tree_out_pragma.m"
    {
#line 1630 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
#line 1630 "parse_tree_out_pragma.m"
      return;
    }
#line 1630 "parse_tree_out_pragma.m"
  }
#line 1630 "parse_tree_out_pragma.m"
}

#line 84 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_7_p_0(
#line 84 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_8,
#line 84 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeVarSet_9,
#line 84 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTVarSet_10,
#line 84 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Context_11,
#line 84 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ReuseInfo_12)
#line 84 "parse_tree_out_pragma.m"
{
#line 1571 "parse_tree_out_pragma.m"
  {
#line 1571 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1571 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_12, (MR_Integer) 0)));
#line 1571 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_12, (MR_Integer) 1)));
#line 1571 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVarTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_12, (MR_Integer) 2)));
#line 1571 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeStructureReuseDomain_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_12, (MR_Integer) 3)));
#line 1571 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_14, (MR_Integer) 0)));
#line 1571 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_14, (MR_Integer) 1)));
#line 1571 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_14, (MR_Integer) 2)));
#line 1571 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_21;
#line 1571 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_22;
#line 1571 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_23;

#line 1575 "parse_tree_out_pragma.m"
    {
#line 1575 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma structure_reuse(");
    }
#line 1576 "parse_tree_out_pragma.m"
    {
#line 1576 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_21);
    }
#line 1579 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeVarSet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1580 "parse_tree_out_pragma.m"
      {
#line 1581 "parse_tree_out_pragma.m"
        {
#line 1581 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_22);
        }
#line 1580 "parse_tree_out_pragma.m"
      }
#line 1579 "parse_tree_out_pragma.m"
    else
#line 1578 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeVarSet_9, (MR_Integer) 0)));
#line 1585 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTVarSet_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1586 "parse_tree_out_pragma.m"
      {
#line 1587 "parse_tree_out_pragma.m"
        {
#line 1587 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__parse_tree_out_pragma__TypeVarSet_23);
        }
#line 1586 "parse_tree_out_pragma.m"
      }
#line 1585 "parse_tree_out_pragma.m"
    else
#line 1584 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__TypeVarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTVarSet_10, (MR_Integer) 0)));
#line 1594 "parse_tree_out_pragma.m"
#line 1594 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_20) {
#line 1594 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1594 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1595 "parse_tree_out_pragma.m"
        {
#line 1595 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_24;
#line 1595 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_25;
#line 1596 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_25;

#line 1596 "parse_tree_out_pragma.m"
          {
#line 1596 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_19, &parse_tree__parse_tree_out_pragma__FuncModeList_24, &parse_tree__parse_tree_out_pragma__conv0_RetMode_25);
          }
#line 1596 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_25 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_25);
#line 1597 "parse_tree_out_pragma.m"
          {
#line 1597 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_9_p_0(parse_tree__parse_tree_out_pragma__Lang_8, parse_tree__parse_tree_out_pragma__InitVarSet_21, parse_tree__parse_tree_out_pragma__SymName_18, parse_tree__parse_tree_out_pragma__FuncModeList_24, parse_tree__parse_tree_out_pragma__RetMode_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__Context_11);
          }
#line 1595 "parse_tree_out_pragma.m"
        }
#line 1594 "parse_tree_out_pragma.m"
        break;
#line 1594 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1591 "parse_tree_out_pragma.m"
        {
#line 1592 "parse_tree_out_pragma.m"
          {
#line 1592 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_8, parse_tree__parse_tree_out_pragma__InitVarSet_21, parse_tree__parse_tree_out_pragma__SymName_18, parse_tree__parse_tree_out_pragma__Modes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__Context_11);
          }
#line 1591 "parse_tree_out_pragma.m"
        }
#line 1594 "parse_tree_out_pragma.m"
        break;
#line 1594 "parse_tree_out_pragma.m"
    }
#line 1601 "parse_tree_out_pragma.m"
    {
#line 1601 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1620 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__HeadVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1620 "parse_tree_out_pragma.m"
      {
#line 1621 "parse_tree_out_pragma.m"
        {
#line 1621 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars, types");
        }
#line 1620 "parse_tree_out_pragma.m"
      }
#line 1620 "parse_tree_out_pragma.m"
    else
#line 1623 "parse_tree_out_pragma.m"
      {
#line 1623 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_64_64;

#line 1624 "parse_tree_out_pragma.m"
        {
#line 1624 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars(");
        }
#line 1625 "parse_tree_out_pragma.m"
        {
#line 1625 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_pragma__VarSet_22, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__HeadVars_15);
        }
#line 1626 "parse_tree_out_pragma.m"
        {
#line 1626 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "), ");
        }
#line 1628 "parse_tree_out_pragma.m"
        {
#line 1628 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "types(");
        }
#line 1630 "parse_tree_out_pragma.m"
        {
#line 1630 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1630 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_64_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[1]));
#line 1630 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_64_64, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_7_p_0_1));
#line 1630 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1630 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_64_64, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_23));
#line 1630 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_64_64, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1630 "parse_tree_out_pragma.m"
        }
#line 1629 "parse_tree_out_pragma.m"
        {
#line 1629 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_tree_out_pragma__HeadVarTypes_16, (MR_String) ",", parse_tree__parse_tree_out_pragma__V_64_64);
        }
#line 1631 "parse_tree_out_pragma.m"
        {
#line 1631 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 1623 "parse_tree_out_pragma.m"
      }
#line 1604 "parse_tree_out_pragma.m"
    {
#line 1604 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1605 "parse_tree_out_pragma.m"
    {
#line 1605 "parse_tree_out_pragma.m"
      parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_22, parse_tree__parse_tree_out_pragma__TypeVarSet_23, parse_tree__parse_tree_out_pragma__MaybeStructureReuseDomain_17);
    }
#line 1607 "parse_tree_out_pragma.m"
    {
#line 1607 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1607 "parse_tree_out_pragma.m"
      return;
    }
#line 1571 "parse_tree_out_pragma.m"
  }
#line 84 "parse_tree_out_pragma.m"
}

#line 1630 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_7_p_0_1(
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1630 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1630 "parse_tree_out_pragma.m"
{
#line 1630 "parse_tree_out_pragma.m"
  {
#line 1630 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1630 "parse_tree_out_pragma.m"
    {
#line 1630 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
#line 1630 "parse_tree_out_pragma.m"
      return;
    }
#line 1630 "parse_tree_out_pragma.m"
  }
#line 1630 "parse_tree_out_pragma.m"
}

#line 80 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_7_p_0(
#line 80 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_8,
#line 80 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeVarSet_9,
#line 80 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTVarSet_10,
#line 80 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Context_11,
#line 80 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__SharingInfo_12)
#line 80 "parse_tree_out_pragma.m"
{
#line 1528 "parse_tree_out_pragma.m"
  {
#line 1528 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1528 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_12, (MR_Integer) 0)));
#line 1528 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_12, (MR_Integer) 1)));
#line 1528 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVarTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_12, (MR_Integer) 2)));
#line 1528 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeSharingAs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_12, (MR_Integer) 3)));
#line 1528 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_14, (MR_Integer) 0)));
#line 1528 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_14, (MR_Integer) 1)));
#line 1528 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_14, (MR_Integer) 2)));
#line 1528 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_21;
#line 1528 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_22;
#line 1528 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_23;

#line 1532 "parse_tree_out_pragma.m"
    {
#line 1532 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma structure_sharing(");
    }
#line 1533 "parse_tree_out_pragma.m"
    {
#line 1533 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_21);
    }
#line 1536 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeVarSet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1537 "parse_tree_out_pragma.m"
      {
#line 1538 "parse_tree_out_pragma.m"
        {
#line 1538 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_22);
        }
#line 1537 "parse_tree_out_pragma.m"
      }
#line 1536 "parse_tree_out_pragma.m"
    else
#line 1535 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeVarSet_9, (MR_Integer) 0)));
#line 1542 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTVarSet_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1543 "parse_tree_out_pragma.m"
      {
#line 1544 "parse_tree_out_pragma.m"
        {
#line 1544 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__parse_tree_out_pragma__TypeVarSet_23);
        }
#line 1543 "parse_tree_out_pragma.m"
      }
#line 1542 "parse_tree_out_pragma.m"
    else
#line 1541 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__TypeVarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTVarSet_10, (MR_Integer) 0)));
#line 1550 "parse_tree_out_pragma.m"
#line 1550 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_20) {
#line 1550 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1550 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1551 "parse_tree_out_pragma.m"
        {
#line 1551 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_24;
#line 1551 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_25;
#line 1552 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_25;

#line 1552 "parse_tree_out_pragma.m"
          {
#line 1552 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_19, &parse_tree__parse_tree_out_pragma__FuncModeList_24, &parse_tree__parse_tree_out_pragma__conv0_RetMode_25);
          }
#line 1552 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_25 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_25);
#line 1553 "parse_tree_out_pragma.m"
          {
#line 1553 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_9_p_0(parse_tree__parse_tree_out_pragma__Lang_8, parse_tree__parse_tree_out_pragma__InitVarSet_21, parse_tree__parse_tree_out_pragma__SymName_18, parse_tree__parse_tree_out_pragma__FuncModeList_24, parse_tree__parse_tree_out_pragma__RetMode_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__Context_11);
          }
#line 1551 "parse_tree_out_pragma.m"
        }
#line 1550 "parse_tree_out_pragma.m"
        break;
#line 1550 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1547 "parse_tree_out_pragma.m"
        {
#line 1548 "parse_tree_out_pragma.m"
          {
#line 1548 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_8, parse_tree__parse_tree_out_pragma__InitVarSet_21, parse_tree__parse_tree_out_pragma__SymName_18, parse_tree__parse_tree_out_pragma__Modes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__Context_11);
          }
#line 1547 "parse_tree_out_pragma.m"
        }
#line 1550 "parse_tree_out_pragma.m"
        break;
#line 1550 "parse_tree_out_pragma.m"
    }
#line 1557 "parse_tree_out_pragma.m"
    {
#line 1557 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1620 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__HeadVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1620 "parse_tree_out_pragma.m"
      {
#line 1621 "parse_tree_out_pragma.m"
        {
#line 1621 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars, types");
        }
#line 1620 "parse_tree_out_pragma.m"
      }
#line 1620 "parse_tree_out_pragma.m"
    else
#line 1623 "parse_tree_out_pragma.m"
      {
#line 1623 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_64_64;

#line 1624 "parse_tree_out_pragma.m"
        {
#line 1624 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars(");
        }
#line 1625 "parse_tree_out_pragma.m"
        {
#line 1625 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_pragma__VarSet_22, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__HeadVars_15);
        }
#line 1626 "parse_tree_out_pragma.m"
        {
#line 1626 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "), ");
        }
#line 1628 "parse_tree_out_pragma.m"
        {
#line 1628 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "types(");
        }
#line 1630 "parse_tree_out_pragma.m"
        {
#line 1630 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1630 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_64_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[1]));
#line 1630 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_64_64, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_7_p_0_1));
#line 1630 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1630 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_64_64, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_23));
#line 1630 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_64_64, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1630 "parse_tree_out_pragma.m"
        }
#line 1629 "parse_tree_out_pragma.m"
        {
#line 1629 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_tree_out_pragma__HeadVarTypes_16, (MR_String) ",", parse_tree__parse_tree_out_pragma__V_64_64);
        }
#line 1631 "parse_tree_out_pragma.m"
        {
#line 1631 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 1623 "parse_tree_out_pragma.m"
      }
#line 1560 "parse_tree_out_pragma.m"
    {
#line 1560 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1561 "parse_tree_out_pragma.m"
    {
#line 1561 "parse_tree_out_pragma.m"
      parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_22, parse_tree__parse_tree_out_pragma__TypeVarSet_23, parse_tree__parse_tree_out_pragma__MaybeSharingAs_17);
    }
#line 1563 "parse_tree_out_pragma.m"
    {
#line 1563 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1563 "parse_tree_out_pragma.m"
      return;
    }
#line 1528 "parse_tree_out_pragma.m"
  }
#line 80 "parse_tree_out_pragma.m"
}

#line 74 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_components_9_p_0(
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_T_39,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_S_40,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_10,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_11,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__SymName_12,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ModeList_13,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeArgSize_14,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_15,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Context_16)
#line 74 "parse_tree_out_pragma.m"
{
#line 1342 "parse_tree_out_pragma.m"
  {
#line 1342 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1342 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_18;

#line 1343 "parse_tree_out_pragma.m"
    {
#line 1343 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination_info(");
    }
#line 1344 "parse_tree_out_pragma.m"
    {
#line 1344 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_18);
    }
#line 1349 "parse_tree_out_pragma.m"
#line 1349 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_11) {
#line 1349 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1349 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1350 "parse_tree_out_pragma.m"
        {
#line 1350 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_19;
#line 1350 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_20;
#line 1351 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_20;

#line 1351 "parse_tree_out_pragma.m"
          {
#line 1351 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_13, &parse_tree__parse_tree_out_pragma__FuncModeList_19, &parse_tree__parse_tree_out_pragma__conv0_RetMode_20);
          }
#line 1351 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_20 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_20);
#line 1352 "parse_tree_out_pragma.m"
          {
#line 1352 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_9_p_0(parse_tree__parse_tree_out_pragma__Lang_10, parse_tree__parse_tree_out_pragma__InitVarSet_18, parse_tree__parse_tree_out_pragma__SymName_12, parse_tree__parse_tree_out_pragma__FuncModeList_19, parse_tree__parse_tree_out_pragma__RetMode_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__Context_16);
          }
#line 1350 "parse_tree_out_pragma.m"
        }
#line 1349 "parse_tree_out_pragma.m"
        break;
#line 1349 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1346 "parse_tree_out_pragma.m"
        {
#line 1347 "parse_tree_out_pragma.m"
          {
#line 1347 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_10, parse_tree__parse_tree_out_pragma__InitVarSet_18, parse_tree__parse_tree_out_pragma__SymName_12, parse_tree__parse_tree_out_pragma__ModeList_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__Context_16);
          }
#line 1346 "parse_tree_out_pragma.m"
        }
#line 1349 "parse_tree_out_pragma.m"
        break;
#line 1349 "parse_tree_out_pragma.m"
    }
#line 1355 "parse_tree_out_pragma.m"
    {
#line 1355 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1356 "parse_tree_out_pragma.m"
    {
#line 1356 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_39, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__MaybeArgSize_14);
    }
#line 1357 "parse_tree_out_pragma.m"
    {
#line 1357 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1358 "parse_tree_out_pragma.m"
    {
#line 1358 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_S_40, parse_tree__parse_tree_out_pragma__TypeInfo_for_T_39, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__MaybeTermination_15);
    }
#line 1359 "parse_tree_out_pragma.m"
    {
#line 1359 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1359 "parse_tree_out_pragma.m"
      return;
    }
#line 1342 "parse_tree_out_pragma.m"
  }
#line 74 "parse_tree_out_pragma.m"
}

#line 66 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(
#line 66 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TablingInfo_4)
#line 66 "parse_tree_out_pragma.m"
{
#line 1123 "parse_tree_out_pragma.m"
  {
#line 1123 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1123 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TablingInfo_4, (MR_Integer) 0)));
#line 1123 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MM_TablingStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TablingInfo_4, (MR_Integer) 1)));
#line 1123 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1123 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1123 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1123 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1128 "parse_tree_out_pragma.m"
    {
#line 1128 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma mm_tabling_info(");
    }
#line 1129 "parse_tree_out_pragma.m"
    {
#line 1129 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1130 "parse_tree_out_pragma.m"
    {
#line 1130 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1131 "parse_tree_out_pragma.m"
    {
#line 1131 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1132 "parse_tree_out_pragma.m"
    {
#line 1132 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1133 "parse_tree_out_pragma.m"
    {
#line 1133 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1134 "parse_tree_out_pragma.m"
    {
#line 1134 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1135 "parse_tree_out_pragma.m"
    {
#line 1135 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1136 "parse_tree_out_pragma.m"
    {
#line 1136 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1140 "parse_tree_out_pragma.m"
#line 1140 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MM_TablingStatus_7) {
#line 1140 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1140 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 1144 "parse_tree_out_pragma.m"
        {
#line 1145 "parse_tree_out_pragma.m"
          {
#line 1145 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_conditional");
          }
#line 1144 "parse_tree_out_pragma.m"
        }
#line 1140 "parse_tree_out_pragma.m"
        break;
#line 1140 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1138 "parse_tree_out_pragma.m"
        {
#line 1139 "parse_tree_out_pragma.m"
          {
#line 1139 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_may_call");
          }
#line 1138 "parse_tree_out_pragma.m"
        }
#line 1140 "parse_tree_out_pragma.m"
        break;
#line 1140 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1141 "parse_tree_out_pragma.m"
        {
#line 1142 "parse_tree_out_pragma.m"
          {
#line 1142 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_will_not_call");
          }
#line 1141 "parse_tree_out_pragma.m"
        }
#line 1140 "parse_tree_out_pragma.m"
        break;
#line 1140 "parse_tree_out_pragma.m"
    }
#line 1147 "parse_tree_out_pragma.m"
    {
#line 1147 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1147 "parse_tree_out_pragma.m"
      return;
    }
#line 1123 "parse_tree_out_pragma.m"
  }
#line 66 "parse_tree_out_pragma.m"
}

#line 63 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(
#line 63 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TrailingInfo_4)
#line 63 "parse_tree_out_pragma.m"
{
#line 1092 "parse_tree_out_pragma.m"
  {
#line 1092 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1092 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TrailingInfo_4, (MR_Integer) 0)));
#line 1092 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TrailingStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TrailingInfo_4, (MR_Integer) 1)));
#line 1092 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1092 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1092 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1092 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1097 "parse_tree_out_pragma.m"
    {
#line 1097 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma trailing_info(");
    }
#line 1098 "parse_tree_out_pragma.m"
    {
#line 1098 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1099 "parse_tree_out_pragma.m"
    {
#line 1099 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1100 "parse_tree_out_pragma.m"
    {
#line 1100 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1101 "parse_tree_out_pragma.m"
    {
#line 1101 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1102 "parse_tree_out_pragma.m"
    {
#line 1102 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1103 "parse_tree_out_pragma.m"
    {
#line 1103 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1104 "parse_tree_out_pragma.m"
    {
#line 1104 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1105 "parse_tree_out_pragma.m"
    {
#line 1105 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1109 "parse_tree_out_pragma.m"
#line 1109 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__TrailingStatus_7) {
#line 1109 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1109 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 1113 "parse_tree_out_pragma.m"
        {
#line 1114 "parse_tree_out_pragma.m"
          {
#line 1114 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "conditional");
          }
#line 1113 "parse_tree_out_pragma.m"
        }
#line 1109 "parse_tree_out_pragma.m"
        break;
#line 1109 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1107 "parse_tree_out_pragma.m"
        {
#line 1108 "parse_tree_out_pragma.m"
          {
#line 1108 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "may_modify_trail");
          }
#line 1107 "parse_tree_out_pragma.m"
        }
#line 1109 "parse_tree_out_pragma.m"
        break;
#line 1109 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1110 "parse_tree_out_pragma.m"
        {
#line 1111 "parse_tree_out_pragma.m"
          {
#line 1111 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "will_not_modify_trail");
          }
#line 1110 "parse_tree_out_pragma.m"
        }
#line 1109 "parse_tree_out_pragma.m"
        break;
#line 1109 "parse_tree_out_pragma.m"
    }
#line 1116 "parse_tree_out_pragma.m"
    {
#line 1116 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1116 "parse_tree_out_pragma.m"
      return;
    }
#line 1092 "parse_tree_out_pragma.m"
  }
#line 63 "parse_tree_out_pragma.m"
}

#line 60 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(
#line 60 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ExceptionsInfo_4)
#line 60 "parse_tree_out_pragma.m"
{
#line 1055 "parse_tree_out_pragma.m"
  {
#line 1055 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1055 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExceptionsInfo_4, (MR_Integer) 0)));
#line 1055 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ThrowStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExceptionsInfo_4, (MR_Integer) 1)));
#line 1055 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1055 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1055 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1055 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1059 "parse_tree_out_pragma.m"
    {
#line 1059 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma exceptions(");
    }
#line 1060 "parse_tree_out_pragma.m"
    {
#line 1060 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1061 "parse_tree_out_pragma.m"
    {
#line 1061 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1062 "parse_tree_out_pragma.m"
    {
#line 1062 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1063 "parse_tree_out_pragma.m"
    {
#line 1063 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1064 "parse_tree_out_pragma.m"
    {
#line 1064 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1065 "parse_tree_out_pragma.m"
    {
#line 1065 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1066 "parse_tree_out_pragma.m"
    {
#line 1066 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1067 "parse_tree_out_pragma.m"
    {
#line 1067 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1071 "parse_tree_out_pragma.m"
#line 1071 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__ThrowStatus_7)) {
#line 1071 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1071 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1071 "parse_tree_out_pragma.m"
#line 1071 "parse_tree_out_pragma.m"
        switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__ThrowStatus_7)) {
#line 1071 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1071 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1069 "parse_tree_out_pragma.m"
            {
#line 1070 "parse_tree_out_pragma.m"
              {
#line 1070 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "will_not_throw");
              }
#line 1069 "parse_tree_out_pragma.m"
            }
#line 1071 "parse_tree_out_pragma.m"
            break;
#line 1071 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1082 "parse_tree_out_pragma.m"
            {
#line 1083 "parse_tree_out_pragma.m"
              {
#line 1083 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "conditional");
              }
#line 1082 "parse_tree_out_pragma.m"
            }
#line 1071 "parse_tree_out_pragma.m"
            break;
#line 1071 "parse_tree_out_pragma.m"
        }
#line 1071 "parse_tree_out_pragma.m"
        break;
#line 1071 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1072 "parse_tree_out_pragma.m"
        {
#line 1072 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__ExceptionType_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__ThrowStatus_7, (MR_Integer) 0)));

#line 1073 "parse_tree_out_pragma.m"
          {
#line 1073 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "may_throw(");
          }
#line 1077 "parse_tree_out_pragma.m"
#line 1077 "parse_tree_out_pragma.m"
          switch (parse_tree__parse_tree_out_pragma__ExceptionType_12) {
#line 1077 "parse_tree_out_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "parse_tree_out_pragma.m"
            case (MR_Integer) 1:
#line 1078 "parse_tree_out_pragma.m"
              {
#line 1079 "parse_tree_out_pragma.m"
                {
#line 1079 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "type_exception)");
                }
#line 1078 "parse_tree_out_pragma.m"
              }
#line 1077 "parse_tree_out_pragma.m"
              break;
#line 1077 "parse_tree_out_pragma.m"
            case (MR_Integer) 0:
#line 1075 "parse_tree_out_pragma.m"
              {
#line 1076 "parse_tree_out_pragma.m"
                {
#line 1076 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "user_exception)");
                }
#line 1075 "parse_tree_out_pragma.m"
              }
#line 1077 "parse_tree_out_pragma.m"
              break;
#line 1077 "parse_tree_out_pragma.m"
          }
#line 1072 "parse_tree_out_pragma.m"
        }
#line 1071 "parse_tree_out_pragma.m"
        break;
#line 1071 "parse_tree_out_pragma.m"
    }
#line 1085 "parse_tree_out_pragma.m"
    {
#line 1085 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1085 "parse_tree_out_pragma.m"
      return;
    }
#line 1055 "parse_tree_out_pragma.m"
  }
#line 60 "parse_tree_out_pragma.m"
}

#line 57 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(
#line 57 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__UnusedArgsInfo_4)
#line 57 "parse_tree_out_pragma.m"
{
#line 1017 "parse_tree_out_pragma.m"
  {
#line 1017 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1017 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31;
#line 1017 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__UnusedArgsInfo_4, (MR_Integer) 0)));
#line 1017 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UnusedArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__UnusedArgsInfo_4, (MR_Integer) 1)));
#line 1017 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1017 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1017 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1017 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1021 "parse_tree_out_pragma.m"
    {
#line 1021 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma unused_args(");
    }
#line 1022 "parse_tree_out_pragma.m"
    {
#line 1022 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1023 "parse_tree_out_pragma.m"
    {
#line 1023 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1024 "parse_tree_out_pragma.m"
    {
#line 1024 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1025 "parse_tree_out_pragma.m"
    {
#line 1025 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1026 "parse_tree_out_pragma.m"
    {
#line 1026 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1027 "parse_tree_out_pragma.m"
    {
#line 1027 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1028 "parse_tree_out_pragma.m"
    {
#line 1028 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1029 "parse_tree_out_pragma.m"
    {
#line 1029 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", [");
    }
#line 7722 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 1036 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1036 "parse_tree_out_pragma.m"
      {
#line 1036 "parse_tree_out_pragma.m"
      }
#line 1036 "parse_tree_out_pragma.m"
    else
#line 1037 "parse_tree_out_pragma.m"
      {
#line 1037 "parse_tree_out_pragma.m"
        MR_Integer parse_tree__parse_tree_out_pragma__First_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnusedArgs_7, (MR_Integer) 0)));
#line 1037 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Rest_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnusedArgs_7, (MR_Integer) 1)));
#line 7738 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8)));
#line 7740 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_40;
#line 1039 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_28_28;

#line 7745 "parse_tree.parse_tree_out_pragma.c"
        {
#line 7747 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) (parse_tree__parse_tree_out_pragma__First_35)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_40);
        }
#line 1039 "parse_tree_out_pragma.m"
        {
#line 1039 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, parse_tree__parse_tree_out_pragma__Rest_36, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_28_28);
        }
#line 1037 "parse_tree_out_pragma.m"
      }
#line 1031 "parse_tree_out_pragma.m"
    {
#line 1031 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "]).\n");
#line 1031 "parse_tree_out_pragma.m"
      return;
    }
#line 1017 "parse_tree_out_pragma.m"
  }
#line 57 "parse_tree_out_pragma.m"
}

#line 998 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
#line 998 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 998 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 998 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 998 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 998 "parse_tree_out_pragma.m"
{
#line 998 "parse_tree_out_pragma.m"
  {
#line 998 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 998 "parse_tree_out_pragma.m"
    {
#line 998 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
#line 998 "parse_tree_out_pragma.m"
      return;
    }
#line 998 "parse_tree_out_pragma.m"
  }
#line 998 "parse_tree_out_pragma.m"
}

#line 54 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0(
#line 54 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarNamePrint_6,
#line 54 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_7,
#line 54 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeSpecInfo_8)
#line 54 "parse_tree_out_pragma.m"
{
#line 959 "parse_tree_out_pragma.m"
  {
#line 959 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 959 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 0)));
#line 959 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SpecName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 1)));
#line 959 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 2)));
#line 959 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 3)));
#line 959 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 4)));
#line 959 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Subst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 5)));
#line 959 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 6)));
#line 959 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_52_52;
#line 960 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 7)));

#line 962 "parse_tree_out_pragma.m"
    {
#line 962 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma type_spec(");
    }
#line 989 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "parse_tree_out_pragma.m"
      {
#line 991 "parse_tree_out_pragma.m"
        {
#line 991 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_10);
        }
#line 993 "parse_tree_out_pragma.m"
        {
#line 993 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 994 "parse_tree_out_pragma.m"
        {
#line 994 "parse_tree_out_pragma.m"
          mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_12);
        }
#line 990 "parse_tree_out_pragma.m"
      }
#line 989 "parse_tree_out_pragma.m"
    else
#line 964 "parse_tree_out_pragma.m"
      {
#line 964 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeModes_14, (MR_Integer) 0)));
#line 964 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_20;

#line 968 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "parse_tree_out_pragma.m"
          {
#line 970 "parse_tree_out_pragma.m"
            {
#line 970 "parse_tree_out_pragma.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_pragma", (MR_String) "predicate \140parse_tree.parse_tree_out_pragma.mercury_output_pragma_type_spec\'/5", (MR_String) "no pred_or_func");
#line 970 "parse_tree_out_pragma.m"
              return;
            }
#line 969 "parse_tree_out_pragma.m"
          }
#line 968 "parse_tree_out_pragma.m"
        else
#line 966 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13, (MR_Integer) 0)));
#line 981 "parse_tree_out_pragma.m"
#line 981 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__PredOrFunc_20) {
#line 981 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 981 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 973 "parse_tree_out_pragma.m"
            {
#line 973 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FuncModes_21;
#line 973 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__RetMode_22;
#line 973 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_23;
#line 974 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_22;

#line 974 "parse_tree_out_pragma.m"
              {
#line 974 "parse_tree_out_pragma.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_18, &parse_tree__parse_tree_out_pragma__FuncModes_21, &parse_tree__parse_tree_out_pragma__conv0_RetMode_22);
              }
#line 974 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__RetMode_22 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_22);
#line 975 "parse_tree_out_pragma.m"
              {
#line 975 "parse_tree_out_pragma.m"
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__PredName_10);
              }
#line 976 "parse_tree_out_pragma.m"
              {
#line 976 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 977 "parse_tree_out_pragma.m"
              {
#line 977 "parse_tree_out_pragma.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InstVarSet_23);
              }
#line 978 "parse_tree_out_pragma.m"
              {
#line 978 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_23, parse_tree__parse_tree_out_pragma__FuncModes_21);
              }
#line 979 "parse_tree_out_pragma.m"
              {
#line 979 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) ") = ");
              }
#line 980 "parse_tree_out_pragma.m"
              {
#line 980 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_inst__mercury_output_mode_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_23, parse_tree__parse_tree_out_pragma__RetMode_22);
              }
#line 973 "parse_tree_out_pragma.m"
            }
#line 981 "parse_tree_out_pragma.m"
            break;
#line 981 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 982 "parse_tree_out_pragma.m"
            {
#line 982 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_60;

#line 983 "parse_tree_out_pragma.m"
              {
#line 983 "parse_tree_out_pragma.m"
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__PredName_10);
              }
#line 984 "parse_tree_out_pragma.m"
              {
#line 984 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 985 "parse_tree_out_pragma.m"
              {
#line 985 "parse_tree_out_pragma.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InstVarSet_60);
              }
#line 986 "parse_tree_out_pragma.m"
              {
#line 986 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_60, parse_tree__parse_tree_out_pragma__Modes_18);
              }
#line 987 "parse_tree_out_pragma.m"
              {
#line 987 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 982 "parse_tree_out_pragma.m"
            }
#line 981 "parse_tree_out_pragma.m"
            break;
#line 981 "parse_tree_out_pragma.m"
        }
#line 964 "parse_tree_out_pragma.m"
      }
#line 996 "parse_tree_out_pragma.m"
    {
#line 996 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", (");
    }
#line 998 "parse_tree_out_pragma.m"
    {
#line 998 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 998 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[0]));
#line 998 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1));
#line 998 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 998 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarSet_16));
#line 998 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 4) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarNamePrint_6));
#line 998 "parse_tree_out_pragma.m"
    }
#line 997 "parse_tree_out_pragma.m"
    {
#line 997 "parse_tree_out_pragma.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[0], parse_tree__parse_tree_out_pragma__Subst_15, (MR_String) ", ", parse_tree__parse_tree_out_pragma__V_52_52);
    }
#line 999 "parse_tree_out_pragma.m"
    {
#line 999 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "), ");
    }
#line 1000 "parse_tree_out_pragma.m"
    {
#line 1000 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, parse_tree__parse_tree_out_pragma__SpecName_11);
    }
#line 1002 "parse_tree_out_pragma.m"
    {
#line 1002 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1002 "parse_tree_out_pragma.m"
      return;
    }
#line 959 "parse_tree_out_pragma.m"
  }
#line 54 "parse_tree_out_pragma.m"
}

#line 51 "parse_tree_out_pragma.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_proc_to_string_2_f_0(
#line 51 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_4,
#line 51 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_5)
#line 51 "parse_tree_out_pragma.m"
{
#line 440 "parse_tree_out_pragma.m"
  {
#line 440 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 440 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_6;
#line 441 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_String_6;

#line 441 "parse_tree_out_pragma.m"
    {
#line 441 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1], parse_tree__parse_tree_out_pragma__Lang_4, parse_tree__parse_tree_out_pragma__FPInfo_5, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv0_String_6);
    }
#line 441 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__String_6 = ((MR_String) parse_tree__parse_tree_out_pragma__conv0_String_6);
#line 440 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_6;
#line 440 "parse_tree_out_pragma.m"
  }
#line 51 "parse_tree_out_pragma.m"
}

#line 49 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_4_p_0(
#line 49 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 49 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_6)
#line 49 "parse_tree_out_pragma.m"
{
#line 438 "parse_tree_out_pragma.m"
  {
#line 438 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 438 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_9;

#line 438 "parse_tree_out_pragma.m"
    {
#line 438 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__FPInfo_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_9);
    }
#line 438 "parse_tree_out_pragma.m"
  }
#line 49 "parse_tree_out_pragma.m"
}

#line 46 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_import_module_3_p_0(
#line 46 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FIMinfo_4)
#line 46 "parse_tree_out_pragma.m"
{
#line 422 "parse_tree_out_pragma.m"
  {
#line 422 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 422 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__FIM_6 = (MR_Word) parse_tree__parse_tree_out_pragma__FIMinfo_4;
#line 422 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FIM_6, (MR_Integer) 0)));
#line 422 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FIM_6, (MR_Integer) 1)));
#line 426 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_13_13;

#line 425 "parse_tree_out_pragma.m"
    {
#line 425 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_import_module(");
    }
#line 426 "parse_tree_out_pragma.m"
    {
#line 426 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_7, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_13_13);
    }
#line 427 "parse_tree_out_pragma.m"
    {
#line 427 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 428 "parse_tree_out_pragma.m"
    {
#line 428 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, parse_tree__parse_tree_out_pragma__ModuleName_8);
    }
#line 430 "parse_tree_out_pragma.m"
    {
#line 430 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 430 "parse_tree_out_pragma.m"
      return;
    }
#line 422 "parse_tree_out_pragma.m"
  }
#line 46 "parse_tree_out_pragma.m"
}

#line 377 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 377 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 377 "parse_tree_out_pragma.m"
{
#line 377 "parse_tree_out_pragma.m"
  {
#line 377 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 377 "parse_tree_out_pragma.m"
    {
#line 377 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
#line 377 "parse_tree_out_pragma.m"
      return;
    }
#line 377 "parse_tree_out_pragma.m"
  }
#line 377 "parse_tree_out_pragma.m"
}

#line 43 "parse_tree_out_pragma.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0(
#line 43 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FDInfo_3)
#line 43 "parse_tree_out_pragma.m"
{
#line 307 "parse_tree_out_pragma.m"
  {
#line 307 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 307 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_4;
#line 307 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1];
#line 307 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 307 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__IsLocal_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 307 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 1)));
#line 307 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15;
#line 307 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16;
#line 307 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18;
#line 307 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22;
#line 307 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24;
#line 307 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25;
#line 8205 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8207 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15;
#line 316 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16;
#line 8211 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8213 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18;
#line 8215 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8217 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24;
#line 8219 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8221 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv23_String_4;

#line 8224 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8226 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15);
    }
#line 8229 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15 = ((MR_String) parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15);
#line 316 "parse_tree_out_pragma.m"
    {
#line 316 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, parse_tree__parse_tree_out_pragma__Lang_11, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16);
    }
#line 316 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16 = ((MR_String) parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16);
#line 8238 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8240 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8242 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18);
    }
#line 8245 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18 = ((MR_String) parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18);
#line 321 "parse_tree_out_pragma.m"
#line 321 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__IsLocal_12) {
#line 321 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 321 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 322 "parse_tree_out_pragma.m"
        {
#line 8256 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8258 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22;

#line 8261 "parse_tree.parse_tree_out_pragma.c"
          {
#line 8263 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "exported")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22);
          }
#line 8266 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22 = ((MR_String) parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22);
#line 322 "parse_tree_out_pragma.m"
        }
#line 321 "parse_tree_out_pragma.m"
        break;
#line 321 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 319 "parse_tree_out_pragma.m"
        {
#line 8276 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8278 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22;

#line 8281 "parse_tree.parse_tree_out_pragma.c"
          {
#line 8283 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "local")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22);
          }
#line 8286 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22 = ((MR_String) parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22);
#line 319 "parse_tree_out_pragma.m"
        }
#line 321 "parse_tree_out_pragma.m"
        break;
#line 321 "parse_tree_out_pragma.m"
    }
#line 8294 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8296 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8298 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24);
    }
#line 8301 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24 = ((MR_String) parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24);
#line 350 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_13)) == (MR_mktag((MR_Integer) 1))))
#line 353 "parse_tree_out_pragma.m"
      {
#line 353 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__FileName_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_13, (MR_Integer) 0)));
#line 353 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35;
#line 353 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36;
#line 8313 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8315 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35;
#line 8317 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8319 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36;
#line 8321 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8323 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25;

#line 8326 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8328 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35);
        }
#line 8331 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35 = ((MR_String) parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35);
#line 8333 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 12)));
#line 8335 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8337 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_33)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36);
        }
#line 8340 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36 = ((MR_String) parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36);
#line 8342 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8344 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8346 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ")")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25);
        }
#line 8349 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25 = ((MR_String) parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25);
#line 353 "parse_tree_out_pragma.m"
      }
#line 350 "parse_tree_out_pragma.m"
    else
#line 350 "parse_tree_out_pragma.m"
      {
#line 350 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_59;
#line 350 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Code_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_13, (MR_Integer) 0)));
#line 350 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45;
#line 350 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46;
#line 8365 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8367 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45;
#line 377 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46;
#line 8371 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8373 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25;

#line 8376 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8378 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45);
        }
#line 8381 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45 = ((MR_String) parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45);
#line 8383 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8385 "parse_tree.parse_tree_out_pragma.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_59);
        }
#line 377 "parse_tree_out_pragma.m"
        {
#line 377 "parse_tree_out_pragma.m"
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_59, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[1], parse_tree__parse_tree_out_pragma__Code_32, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45)), &parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46);
        }
#line 377 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46 = ((MR_String) parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46);
#line 8395 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8397 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8399 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_20(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25);
        }
#line 8402 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25 = ((MR_String) parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25);
#line 350 "parse_tree_out_pragma.m"
      }
#line 8406 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8408 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8410 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25)), &parse_tree__parse_tree_out_pragma__conv23_String_4);
    }
#line 8413 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__String_4 = ((MR_String) parse_tree__parse_tree_out_pragma__conv23_String_4);
#line 307 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_4;
#line 307 "parse_tree_out_pragma.m"
  }
#line 43 "parse_tree_out_pragma.m"
}

#line 377 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1(
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 377 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 377 "parse_tree_out_pragma.m"
{
#line 377 "parse_tree_out_pragma.m"
  {
#line 377 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 377 "parse_tree_out_pragma.m"
    {
#line 377 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
#line 377 "parse_tree_out_pragma.m"
      return;
    }
#line 377 "parse_tree_out_pragma.m"
  }
#line 377 "parse_tree_out_pragma.m"
}

#line 41 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0(
#line 41 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FDInfo_4)
#line 41 "parse_tree_out_pragma.m"
{
#line 305 "parse_tree_out_pragma.m"
  {
#line 305 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 305 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 305 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 305 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__IsLocal_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 305 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 1)));
#line 8471 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8473 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_18;
#line 316 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_19;
#line 8477 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8479 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_21;
#line 8481 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8483 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_27;
#line 8485 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8487 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_IO_7;

#line 8490 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8492 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_18);
    }
#line 316 "parse_tree_out_pragma.m"
    {
#line 316 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__Lang_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_19);
    }
#line 8500 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8502 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8504 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_21);
    }
#line 321 "parse_tree_out_pragma.m"
#line 321 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__IsLocal_15) {
#line 321 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 321 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 322 "parse_tree_out_pragma.m"
        {
#line 8516 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8518 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_25;

#line 8521 "parse_tree.parse_tree_out_pragma.c"
          {
#line 8523 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "exported")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_25);
          }
#line 322 "parse_tree_out_pragma.m"
        }
#line 321 "parse_tree_out_pragma.m"
        break;
#line 321 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 319 "parse_tree_out_pragma.m"
        {
#line 8534 "parse_tree.parse_tree_out_pragma.c"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8536 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_25;

#line 8539 "parse_tree.parse_tree_out_pragma.c"
          {
#line 8541 "parse_tree.parse_tree_out_pragma.c"
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "local")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_25);
          }
#line 319 "parse_tree_out_pragma.m"
        }
#line 321 "parse_tree_out_pragma.m"
        break;
#line 321 "parse_tree_out_pragma.m"
    }
#line 8550 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8552 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8554 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_27);
    }
#line 350 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_16)) == (MR_mktag((MR_Integer) 1))))
#line 353 "parse_tree_out_pragma.m"
      {
#line 353 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__FileName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_16, (MR_Integer) 0)));
#line 8563 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8565 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_38;
#line 8567 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8569 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_39;
#line 8571 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8573 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_28;

#line 8576 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8578 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_38);
        }
#line 8581 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 12)));
#line 8583 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8585 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_36)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_39);
        }
#line 8588 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8590 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8592 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_28);
        }
#line 353 "parse_tree_out_pragma.m"
      }
#line 350 "parse_tree_out_pragma.m"
    else
#line 350 "parse_tree_out_pragma.m"
      {
#line 350 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_62;
#line 350 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Code_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_16, (MR_Integer) 0)));
#line 8605 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8607 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_48;
#line 377 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_49;
#line 8611 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8613 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_28;

#line 8616 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8618 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_48);
        }
#line 8621 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8623 "parse_tree.parse_tree_out_pragma.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_62);
        }
#line 377 "parse_tree_out_pragma.m"
        {
#line 377 "parse_tree_out_pragma.m"
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_62, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[0], parse_tree__parse_tree_out_pragma__Code_35, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_49);
        }
#line 8631 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8633 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8635 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_20(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_28);
        }
#line 350 "parse_tree_out_pragma.m"
      }
#line 8640 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8642 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8644 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_IO_7);
    }
#line 305 "parse_tree_out_pragma.m"
  }
#line 41 "parse_tree_out_pragma.m"
}

#line 38 "parse_tree_out_pragma.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_decl_to_string_5_f_0(
#line 38 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredName_7,
#line 38 "parse_tree_out_pragma.m"
  MR_Integer parse_tree__parse_tree_out_pragma__Arity_8,
#line 38 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_9,
#line 38 "parse_tree_out_pragma.m"
  MR_String parse_tree__parse_tree_out_pragma__PragmaName_10,
#line 38 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeAfter_11)
#line 38 "parse_tree_out_pragma.m"
{
#line 268 "parse_tree_out_pragma.m"
  {
#line 268 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 268 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_12;
#line 268 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1];
#line 268 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__DeclaredArity_23;
#line 268 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27;
#line 268 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28;
#line 268 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30;
#line 268 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32;
#line 268 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34;
#line 268 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35;
#line 268 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38;
#line 8691 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8693 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27;
#line 8695 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8697 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28;
#line 8699 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8701 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30;
#line 287 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32;
#line 8705 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8707 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34;
#line 8709 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8711 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35;
#line 8713 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8715 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv16_String_12;

#line 280 "parse_tree_out_pragma.m"
#line 280 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_9) {
#line 280 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 280 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 281 "parse_tree_out_pragma.m"
        {
#line 282 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__DeclaredArity_23 = (parse_tree__parse_tree_out_pragma__Arity_8 - (MR_Integer) 1);
#line 281 "parse_tree_out_pragma.m"
        }
#line 280 "parse_tree_out_pragma.m"
        break;
#line 280 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 279 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__DeclaredArity_23 = parse_tree__parse_tree_out_pragma__Arity_8;
#line 280 "parse_tree_out_pragma.m"
        break;
#line 280 "parse_tree_out_pragma.m"
    }
#line 8741 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8743 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8745 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27);
    }
#line 8748 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27 = ((MR_String) parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27);
#line 8750 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8752 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8754 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__PragmaName_10)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28);
    }
#line 8757 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28 = ((MR_String) parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28);
#line 8759 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8761 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8763 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) "(")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30);
    }
#line 8766 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30 = ((MR_String) parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30);
#line 287 "parse_tree_out_pragma.m"
    {
#line 287 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_7, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32);
    }
#line 287 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32 = ((MR_String) parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32);
#line 8775 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8777 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8779 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) "/")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34);
    }
#line 8782 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34 = ((MR_String) parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34);
#line 8784 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8786 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8788 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__DeclaredArity_23)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35);
    }
#line 8791 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35 = ((MR_String) parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35);
#line 294 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeAfter_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35;
#line 294 "parse_tree_out_pragma.m"
    else
#line 291 "parse_tree_out_pragma.m"
      {
#line 291 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__After_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_11, (MR_Integer) 0)));
#line 291 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37;
#line 8805 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8807 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37;
#line 8809 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8811 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38;

#line 8814 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8816 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37);
        }
#line 8819 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37 = ((MR_String) parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37);
#line 8821 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8823 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8825 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__After_24)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38);
        }
#line 8828 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38 = ((MR_String) parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38);
#line 291 "parse_tree_out_pragma.m"
      }
#line 8832 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8834 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8836 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38)), &parse_tree__parse_tree_out_pragma__conv16_String_12);
    }
#line 8839 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__String_12 = ((MR_String) parse_tree__parse_tree_out_pragma__conv16_String_12);
#line 268 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_12;
#line 268 "parse_tree_out_pragma.m"
  }
#line 38 "parse_tree_out_pragma.m"
}

#line 36 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(
#line 36 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredName_8,
#line 36 "parse_tree_out_pragma.m"
  MR_Integer parse_tree__parse_tree_out_pragma__Arity_9,
#line 36 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10,
#line 36 "parse_tree_out_pragma.m"
  MR_String parse_tree__parse_tree_out_pragma__PragmaName_11,
#line 36 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeAfter_12)
#line 36 "parse_tree_out_pragma.m"
{
#line 264 "parse_tree_out_pragma.m"
  {
#line 264 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 264 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 264 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__DeclaredArity_26;
#line 8871 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8873 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_30;
#line 8875 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8877 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_31;
#line 8879 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8881 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_33;
#line 287 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_35;
#line 8885 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8887 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_37;
#line 8889 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8891 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_38;
#line 8893 "parse_tree.parse_tree_out_pragma.c"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8895 "parse_tree.parse_tree_out_pragma.c"
    MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_IO_15;

#line 280 "parse_tree_out_pragma.m"
#line 280 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
#line 280 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 280 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 281 "parse_tree_out_pragma.m"
        {
#line 282 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__DeclaredArity_26 = (parse_tree__parse_tree_out_pragma__Arity_9 - (MR_Integer) 1);
#line 281 "parse_tree_out_pragma.m"
        }
#line 280 "parse_tree_out_pragma.m"
        break;
#line 280 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 279 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__DeclaredArity_26 = parse_tree__parse_tree_out_pragma__Arity_9;
#line 280 "parse_tree_out_pragma.m"
        break;
#line 280 "parse_tree_out_pragma.m"
    }
#line 8921 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8923 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8925 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_30);
    }
#line 8928 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8930 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8932 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__PragmaName_11)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_31);
    }
#line 8935 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8937 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8939 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_33);
    }
#line 287 "parse_tree_out_pragma.m"
    {
#line 287 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_35);
    }
#line 8947 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8949 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8951 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_37);
    }
#line 8954 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8956 "parse_tree.parse_tree_out_pragma.c"
    {
#line 8958 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__DeclaredArity_26)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_38);
    }
#line 294 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeAfter_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "parse_tree_out_pragma.m"
      {
#line 295 "parse_tree_out_pragma.m"
      }
#line 294 "parse_tree_out_pragma.m"
    else
#line 291 "parse_tree_out_pragma.m"
      {
#line 291 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__After_27 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_12, (MR_Integer) 0)));
#line 8973 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8975 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_40;
#line 8977 "parse_tree.parse_tree_out_pragma.c"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8979 "parse_tree.parse_tree_out_pragma.c"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_41;

#line 8982 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8984 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_40);
        }
#line 8987 "parse_tree.parse_tree_out_pragma.c"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8989 "parse_tree.parse_tree_out_pragma.c"
        {
#line 8991 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__After_27)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_41);
        }
#line 291 "parse_tree_out_pragma.m"
      }
#line 8996 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8998 "parse_tree.parse_tree_out_pragma.c"
    {
#line 9000 "parse_tree.parse_tree_out_pragma.c"
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_IO_15);
    }
#line 264 "parse_tree_out_pragma.m"
  }
#line 36 "parse_tree_out_pragma.m"
}

#line 31 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_pragma_4_p_0(
#line 31 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Info_5,
#line 31 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ItemPragma_6)
#line 31 "parse_tree_out_pragma.m"
{
#line 126 "parse_tree_out_pragma.m"
  {
#line 126 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 126 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Pragma_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 0)));
#line 126 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 2)));
#line 126 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_12;
#line 127 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 1)));
#line 127 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma___SeqNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 3)));

#line 128 "parse_tree_out_pragma.m"
    {
#line 128 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out_pragma__Info_5, parse_tree__parse_tree_out_pragma__Context_10);
    }
#line 129 "parse_tree_out_pragma.m"
    {
#line 129 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Lang_12 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out_pragma__Info_5);
    }
#line 133 "parse_tree_out_pragma.m"
#line 133 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Pragma_8)) {
#line 133 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 133 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 131 "parse_tree_out_pragma.m"
        {
#line 131 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FDInfo_13 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out_pragma__Pragma_8), (MR_Integer) 0);

#line 132 "parse_tree_out_pragma.m"
          {
#line 132 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0(parse_tree__parse_tree_out_pragma__FDInfo_13);
#line 132 "parse_tree_out_pragma.m"
            return;
          }
#line 131 "parse_tree_out_pragma.m"
        }
#line 133 "parse_tree_out_pragma.m"
        break;
#line 133 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 134 "parse_tree_out_pragma.m"
        {
#line 134 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FCInfo_14 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out_pragma__Pragma_8), (MR_Integer) 1);

#line 135 "parse_tree_out_pragma.m"
          {
#line 135 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(parse_tree__parse_tree_out_pragma__FCInfo_14);
#line 135 "parse_tree_out_pragma.m"
            return;
          }
#line 134 "parse_tree_out_pragma.m"
        }
#line 133 "parse_tree_out_pragma.m"
        break;
#line 133 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 140 "parse_tree_out_pragma.m"
        {
#line 140 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FPInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 0)));

#line 141 "parse_tree_out_pragma.m"
          {
#line 141 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_4_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__FPInfo_16);
#line 141 "parse_tree_out_pragma.m"
            return;
          }
#line 140 "parse_tree_out_pragma.m"
        }
#line 133 "parse_tree_out_pragma.m"
        break;
#line 133 "parse_tree_out_pragma.m"
      case (MR_Integer) 3:
#line 133 "parse_tree_out_pragma.m"
#line 133 "parse_tree_out_pragma.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 0)))) {
#line 133 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 143 "parse_tree_out_pragma.m"
            {
#line 143 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 144 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_IO_40;

#line 144 "parse_tree_out_pragma.m"
              {
#line 144 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__FPEInfo_17, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_IO_40);
              }
#line 143 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 146 "parse_tree_out_pragma.m"
            {
#line 146 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 147 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_IO_40;

#line 147 "parse_tree_out_pragma.m"
              {
#line 147 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__FEEInfo_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_IO_40);
              }
#line 146 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 2:
#line 149 "parse_tree_out_pragma.m"
            {
#line 149 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FEInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 150 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_40;

#line 150 "parse_tree_out_pragma.m"
              {
#line 150 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__FEInfo_19, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_40);
              }
#line 149 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 3:
#line 152 "parse_tree_out_pragma.m"
            {
#line 152 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 153 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_40;

#line 153 "parse_tree_out_pragma.m"
              {
#line 153 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__ExternalInfo_20, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_40);
              }
#line 152 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 4:
#line 155 "parse_tree_out_pragma.m"
            {
#line 155 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TypeSpecInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 157 "parse_tree_out_pragma.m"
              {
#line 157 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__TypeSpecInfo_21);
#line 157 "parse_tree_out_pragma.m"
                return;
              }
#line 155 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 5:
#line 159 "parse_tree_out_pragma.m"
            {
#line 159 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 159 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_23, (MR_Integer) 0)));
#line 159 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_23, (MR_Integer) 1)));

#line 161 "parse_tree_out_pragma.m"
              {
#line 161 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_24, parse_tree__parse_tree_out_pragma__Arity_25, (MR_Integer) 0, (MR_String) "inline", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 161 "parse_tree_out_pragma.m"
                return;
              }
#line 159 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 6:
#line 164 "parse_tree_out_pragma.m"
            {
#line 164 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 164 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_112, (MR_Integer) 0)));
#line 164 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_112, (MR_Integer) 1)));

#line 166 "parse_tree_out_pragma.m"
              {
#line 166 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_113, parse_tree__parse_tree_out_pragma__Arity_114, (MR_Integer) 0, (MR_String) "no_inline", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 166 "parse_tree_out_pragma.m"
                return;
              }
#line 164 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 7:
#line 169 "parse_tree_out_pragma.m"
            {
#line 169 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__UnusedArgsInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 170 "parse_tree_out_pragma.m"
              {
#line 170 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(parse_tree__parse_tree_out_pragma__UnusedArgsInfo_26);
#line 170 "parse_tree_out_pragma.m"
                return;
              }
#line 169 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 8:
#line 172 "parse_tree_out_pragma.m"
            {
#line 172 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__ExceptionsInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 173 "parse_tree_out_pragma.m"
              {
#line 173 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(parse_tree__parse_tree_out_pragma__ExceptionsInfo_27);
#line 173 "parse_tree_out_pragma.m"
                return;
              }
#line 172 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 9:
#line 175 "parse_tree_out_pragma.m"
            {
#line 175 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TrailingInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 176 "parse_tree_out_pragma.m"
              {
#line 176 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(parse_tree__parse_tree_out_pragma__TrailingInfo_28);
#line 176 "parse_tree_out_pragma.m"
                return;
              }
#line 175 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 10:
#line 178 "parse_tree_out_pragma.m"
            {
#line 178 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TablingInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 179 "parse_tree_out_pragma.m"
              {
#line 179 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(parse_tree__parse_tree_out_pragma__TablingInfo_29);
#line 179 "parse_tree_out_pragma.m"
                return;
              }
#line 178 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 11:
#line 181 "parse_tree_out_pragma.m"
            {
#line 181 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 181 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_115, (MR_Integer) 0)));
#line 181 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_115, (MR_Integer) 1)));

#line 183 "parse_tree_out_pragma.m"
              {
#line 183 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_116, parse_tree__parse_tree_out_pragma__Arity_117, (MR_Integer) 0, (MR_String) "obsolete", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 183 "parse_tree_out_pragma.m"
                return;
              }
#line 181 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 12:
#line 186 "parse_tree_out_pragma.m"
            {
#line 186 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 186 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_118, (MR_Integer) 0)));
#line 186 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_118, (MR_Integer) 1)));

#line 188 "parse_tree_out_pragma.m"
              {
#line 188 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_119, parse_tree__parse_tree_out_pragma__Arity_120, (MR_Integer) 0, (MR_String) "no_determinism_warning", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 188 "parse_tree_out_pragma.m"
                return;
              }
#line 186 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 13:
#line 191 "parse_tree_out_pragma.m"
            {
#line 191 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 192 "parse_tree_out_pragma.m"
              {
#line 192 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(parse_tree__parse_tree_out_pragma__TabledInfo_30);
#line 192 "parse_tree_out_pragma.m"
                return;
              }
#line 191 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 14:
#line 194 "parse_tree_out_pragma.m"
            {
#line 194 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 195 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_IO_40;

#line 195 "parse_tree_out_pragma.m"
              {
#line 195 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__FactTableInfo_31, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_IO_40);
              }
#line 194 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 15:
#line 200 "parse_tree_out_pragma.m"
            {
#line 200 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 201 "parse_tree_out_pragma.m"
              {
#line 201 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(parse_tree__parse_tree_out_pragma__OISUInfo_33);
#line 201 "parse_tree_out_pragma.m"
                return;
              }
#line 200 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 16:
#line 203 "parse_tree_out_pragma.m"
            {
#line 203 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 203 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_121, (MR_Integer) 0)));
#line 203 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_121, (MR_Integer) 1)));

#line 205 "parse_tree_out_pragma.m"
              {
#line 205 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_122, parse_tree__parse_tree_out_pragma__Arity_123, (MR_Integer) 0, (MR_String) "promise_equivalent_clauses", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 205 "parse_tree_out_pragma.m"
                return;
              }
#line 203 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 17:
#line 208 "parse_tree_out_pragma.m"
            {
#line 208 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 208 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_124, (MR_Integer) 0)));
#line 208 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_124, (MR_Integer) 1)));

#line 210 "parse_tree_out_pragma.m"
              {
#line 210 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_125, parse_tree__parse_tree_out_pragma__Arity_126, (MR_Integer) 0, (MR_String) "promise_pure", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 210 "parse_tree_out_pragma.m"
                return;
              }
#line 208 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 18:
#line 213 "parse_tree_out_pragma.m"
            {
#line 213 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 213 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_127, (MR_Integer) 0)));
#line 213 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_127, (MR_Integer) 1)));

#line 215 "parse_tree_out_pragma.m"
              {
#line 215 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_128, parse_tree__parse_tree_out_pragma__Arity_129, (MR_Integer) 0, (MR_String) "promise_semipure", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 215 "parse_tree_out_pragma.m"
                return;
              }
#line 213 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 19:
#line 218 "parse_tree_out_pragma.m"
            {
#line 218 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TermInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 219 "parse_tree_out_pragma.m"
              {
#line 219 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__write_pragma_termination_info_5_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__Context_10, parse_tree__parse_tree_out_pragma__TermInfo_34);
#line 219 "parse_tree_out_pragma.m"
                return;
              }
#line 218 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 20:
#line 221 "parse_tree_out_pragma.m"
            {
#line 221 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Term2Info_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 222 "parse_tree_out_pragma.m"
              {
#line 222 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__Context_10, parse_tree__parse_tree_out_pragma__Term2Info_35);
#line 222 "parse_tree_out_pragma.m"
                return;
              }
#line 221 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 21:
#line 224 "parse_tree_out_pragma.m"
            {
#line 224 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 224 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_130, (MR_Integer) 0)));
#line 224 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_130, (MR_Integer) 1)));

#line 226 "parse_tree_out_pragma.m"
              {
#line 226 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_131, parse_tree__parse_tree_out_pragma__Arity_132, (MR_Integer) 0, (MR_String) "terminates", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 226 "parse_tree_out_pragma.m"
                return;
              }
#line 224 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 22:
#line 229 "parse_tree_out_pragma.m"
            {
#line 229 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 229 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_133, (MR_Integer) 0)));
#line 229 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_133, (MR_Integer) 1)));

#line 231 "parse_tree_out_pragma.m"
              {
#line 231 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_134, parse_tree__parse_tree_out_pragma__Arity_135, (MR_Integer) 0, (MR_String) "does_not_terminate", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 231 "parse_tree_out_pragma.m"
                return;
              }
#line 229 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 23:
#line 234 "parse_tree_out_pragma.m"
            {
#line 234 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 234 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_136, (MR_Integer) 0)));
#line 234 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_136, (MR_Integer) 1)));

#line 236 "parse_tree_out_pragma.m"
              {
#line 236 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_137, parse_tree__parse_tree_out_pragma__Arity_138, (MR_Integer) 0, (MR_String) "check_termination", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 236 "parse_tree_out_pragma.m"
                return;
              }
#line 234 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 24:
#line 239 "parse_tree_out_pragma.m"
            {
#line 239 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 239 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_139, (MR_Integer) 0)));
#line 239 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_139, (MR_Integer) 1)));

#line 241 "parse_tree_out_pragma.m"
              {
#line 241 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_140, parse_tree__parse_tree_out_pragma__Arity_141, (MR_Integer) 0, (MR_String) "mode_check_clauses", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 241 "parse_tree_out_pragma.m"
                return;
              }
#line 239 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 25:
#line 244 "parse_tree_out_pragma.m"
            {
#line 244 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__SharingInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 245 "parse_tree_out_pragma.m"
              {
#line 245 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_7_p_0(parse_tree__parse_tree_out_pragma__Lang_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__Context_10, parse_tree__parse_tree_out_pragma__SharingInfo_36);
#line 245 "parse_tree_out_pragma.m"
                return;
              }
#line 244 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 26:
#line 248 "parse_tree_out_pragma.m"
            {
#line 248 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__ReuseInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 249 "parse_tree_out_pragma.m"
              {
#line 249 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_7_p_0(parse_tree__parse_tree_out_pragma__Lang_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__Context_10, parse_tree__parse_tree_out_pragma__ReuseInfo_37);
#line 249 "parse_tree_out_pragma.m"
                return;
              }
#line 248 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 27:
#line 137 "parse_tree_out_pragma.m"
            {
#line 137 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FIMInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 138 "parse_tree_out_pragma.m"
              {
#line 138 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_import_module_3_p_0(parse_tree__parse_tree_out_pragma__FIMInfo_15);
#line 138 "parse_tree_out_pragma.m"
                return;
              }
#line 137 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 28:
#line 197 "parse_tree_out_pragma.m"
            {
#line 197 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 198 "parse_tree_out_pragma.m"
              {
#line 198 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(parse_tree__parse_tree_out_pragma__TypeCtor_32);
#line 198 "parse_tree_out_pragma.m"
                return;
              }
#line 197 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 29:
#line 252 "parse_tree_out_pragma.m"
            {
#line 252 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 253 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_IO_40;

#line 253 "parse_tree_out_pragma.m"
              {
#line 253 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__RFSInfo_38, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_IO_40);
              }
#line 252 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
        }
#line 133 "parse_tree_out_pragma.m"
        break;
#line 133 "parse_tree_out_pragma.m"
    }
#line 126 "parse_tree_out_pragma.m"
  }
#line 31 "parse_tree_out_pragma.m"
}

void mercury__parse_tree__parse_tree_out_pragma__init(void)
{
}

void mercury__parse_tree__parse_tree_out_pragma__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_pragma__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_tree_out_pragma. */
