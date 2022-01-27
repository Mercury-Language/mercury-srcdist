/*
** Automatically generated from `parse_tree_out_pragma.m'
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


/* :- module parse_tree.parse_tree_out_pragma. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_tree_out_pragma__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_pragma.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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




#line 107 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 110 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 113 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 116 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 119 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 122 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 125 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_arg_tabling_method_0;

#line 487 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(
#line 487 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35,
#line 487 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_1,
#line 487 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_3,
#line 487 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4_4,
#line 487 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5,
#line 487 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6);

#line 1644 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(
#line 1644 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44,
#line 1644 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1644 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1644 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);

#line 1641 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1(
#line 1641 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1641 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1641 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1641 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1634 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0(
#line 1634 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17,
#line 1634 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_4,
#line 1634 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8,
#line 1634 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9);

#line 1488 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(
#line 1488 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ArgSizeTerm_4);

#line 1483 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1(
#line 1483 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1483 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1483 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1483 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1471 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(
#line 1471 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Constraint_4);

#line 1468 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2(
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1468 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1(
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1434 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(
#line 1434 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 1434 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Term2Info_6);

#line 1390 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(
#line 1390 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1);

#line 1326 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(
#line 1326 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 1326 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TermInfo_6);

#line 1296 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(
#line 1296 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20,
#line 1296 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_5,
#line 1296 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_6,
#line 1296 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1296 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);

#line 1259 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(
#line 1259 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_4);

#line 1242 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(
#line 1242 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_4);

#line 1223 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0(
#line 1223 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24,
#line 1223 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_4,
#line 1223 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1223 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);

#line 1170 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1(
#line 1170 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1170 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 1149 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(
#line 1149 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_4);

#line 1036 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(
#line 1036 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16,
#line 1036 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1036 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1036 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);

#line 999 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(
#line 999 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_6,
#line 999 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarNamePrint_7,
#line 999 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3);

#line 896 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0(
#line 896 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47,
#line 896 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_4,
#line 896 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13,
#line 896 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14);

#line 883 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(
#line 883 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14,
#line 883 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 883 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 883 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);

#line 880 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1(
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 880 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 848 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0(
#line 848 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28,
#line 848 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEInfo_4,
#line 848 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11,
#line 848 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12);

#line 880 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1(
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 880 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 808 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0(
#line 808 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32,
#line 808 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_4,
#line 808 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12,
#line 808 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13);

#line 773 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0(
#line 773 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42,
#line 773 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 773 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_6,
#line 773 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_18,
#line 773 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19);

#line 759 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
#line 759 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1);

#line 748 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
#line 748 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_4,
#line 748 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__UnitSelector_5);

#line 745 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
#line 745 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 745 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 728 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
#line 728 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 728 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_6,
#line 728 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3);

#line 721 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
#line 721 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 721 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 712 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
#line 712 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 712 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 697 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
#line 697 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 697 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Sharing_6,
#line 697 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_7);

#line 695 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
#line 695 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 695 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 523 "parse_tree_out_pragma.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
#line 523 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Attrs_4,
#line 523 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5);

#line 374 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2(
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 374 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 515 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1(
#line 515 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 515 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 515 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 515 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 440 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0(
#line 440 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50,
#line 440 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 440 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_6,
#line 440 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23,
#line 440 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24);

#line 376 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(
#line 376 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15,
#line 376 "parse_tree_out_pragma.m"
  MR_Char parse_tree__parse_tree_out_pragma__Char_4,
#line 376 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 376 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);

#line 374 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1(
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 374 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 331 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(
#line 331 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FCInfo_4);

#line 1625 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1(
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1625 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1(
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 993 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
#line 993 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 993 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 993 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 993 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 374 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 374 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 374 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1(
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 374 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[28][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[8][3];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[6][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[3][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_6[2][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_9[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_10[3][6];


#line 563 "parse_tree_out_pragma.m"
/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s {
#line 563 "parse_tree_out_pragma.m"
  const MR_String parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
#line 563 "parse_tree_out_pragma.m"
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s parse_tree__parse_tree_out_pragma_vector_common_7[4];

#line 652 "parse_tree_out_pragma.m"
/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s {
#line 652 "parse_tree_out_pragma.m"
  const MR_Word parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
#line 652 "parse_tree_out_pragma.m"
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
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2)),
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



#line 1040 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1048 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1056 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1065 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1073 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1082 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1091 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_tabling_method_0
  }
};

#line 487 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(
#line 487 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35,
#line 487 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_1,
#line 487 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_3,
#line 487 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4_4,
#line 487 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5,
#line 487 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6)
#line 487 "parse_tree_out_pragma.m"
{
#line 491 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 491 "parse_tree_out_pragma.m"
    {
#line 491 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 491 "parse_tree_out_pragma.m"
      {
#line 491 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 491 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "parse_tree_out_pragma.m"
          *parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5;
#line 491 "parse_tree_out_pragma.m"
        else
#line 493 "parse_tree_out_pragma.m"
          {
#line 493 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__4_4, (MR_Integer) 0)));
#line 493 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__4_4, (MR_Integer) 1)));
#line 493 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__VarName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 1)));
#line 493 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Mode_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 2)));
#line 493 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 493 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 493 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__V_30_30;
#line 493 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31;
#line 493 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 494 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma___Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 0)));
#line 494 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma___BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 3)));
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35), ((MR_Box) (parse_tree__parse_tree_out_pragma__VarName_20)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
            }
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35), ((MR_Box) ((MR_String) " :: ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
            }
#line 497 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_30_30 = (MR_Word) parse_tree__parse_tree_out_pragma__InstVarSet_3;
#line 497 "parse_tree_out_pragma.m"
            {
#line 497 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[3], parse_tree__parse_tree_out_pragma__Lang_1, ((MR_Box) (parse_tree__parse_tree_out_pragma__V_30_30)), parse_tree__parse_tree_out_pragma__Mode_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31);
            }
#line 500 "parse_tree_out_pragma.m"
            if ((parse_tree__parse_tree_out_pragma__Vars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31;
#line 500 "parse_tree_out_pragma.m"
            else
#line 501 "parse_tree_out_pragma.m"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
                {
#line 32 "parse_tree.parse_tree_out_info.int"
                  parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
                }
#line 501 "parse_tree_out_pragma.m"
              }
#line 504 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 504 "parse_tree_out_pragma.m"
            {
#line 504 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4__tmp_copy_4 = parse_tree__parse_tree_out_pragma__Vars_17;
#line 504 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_5 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;

#line 504 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_5;
#line 504 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__4_4 = parse_tree__parse_tree_out_pragma__HeadVar__4__tmp_copy_4;
#line 504 "parse_tree_out_pragma.m"
            }
#line 504 "parse_tree_out_pragma.m"
            continue;
#line 493 "parse_tree_out_pragma.m"
          }
#line 491 "parse_tree_out_pragma.m"
      }
#line 491 "parse_tree_out_pragma.m"
      break;
#line 491 "parse_tree_out_pragma.m"
    }
#line 487 "parse_tree_out_pragma.m"
}

#line 1644 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(
#line 1644 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44,
#line 1644 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1644 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1644 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3)
#line 1644 "parse_tree_out_pragma.m"
{
#line 1647 "parse_tree_out_pragma.m"
  {
#line 1647 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1647 "parse_tree_out_pragma.m"
#line 1647 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__HeadVar__1_1) {
#line 1647 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1647 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1647 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "concurrency")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1647 "parse_tree_out_pragma.m"
        }
#line 1647 "parse_tree_out_pragma.m"
        break;
#line 1647 "parse_tree_out_pragma.m"
      case (MR_Integer) 7:
#line 1661 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "conservative_gc")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1661 "parse_tree_out_pragma.m"
        }
#line 1647 "parse_tree_out_pragma.m"
        break;
#line 1647 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 1651 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "double_prec_float")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1651 "parse_tree_out_pragma.m"
        }
#line 1647 "parse_tree_out_pragma.m"
        break;
#line 1647 "parse_tree_out_pragma.m"
      case (MR_Integer) 3:
#line 1653 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "memo")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1653 "parse_tree_out_pragma.m"
        }
#line 1647 "parse_tree_out_pragma.m"
        break;
#line 1647 "parse_tree_out_pragma.m"
      case (MR_Integer) 4:
#line 1655 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "parallel_conj")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1655 "parse_tree_out_pragma.m"
        }
#line 1647 "parse_tree_out_pragma.m"
        break;
#line 1647 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1649 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "single_prec_float")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1649 "parse_tree_out_pragma.m"
        }
#line 1647 "parse_tree_out_pragma.m"
        break;
#line 1647 "parse_tree_out_pragma.m"
      case (MR_Integer) 6:
#line 1659 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "strict_sequential")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1659 "parse_tree_out_pragma.m"
        }
#line 1647 "parse_tree_out_pragma.m"
        break;
#line 1647 "parse_tree_out_pragma.m"
      case (MR_Integer) 5:
#line 1657 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "trailing")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1657 "parse_tree_out_pragma.m"
        }
#line 1647 "parse_tree_out_pragma.m"
        break;
#line 1647 "parse_tree_out_pragma.m"
    }
#line 1647 "parse_tree_out_pragma.m"
  }
#line 1644 "parse_tree_out_pragma.m"
}

#line 1641 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1(
#line 1641 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1641 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1641 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1641 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1641 "parse_tree_out_pragma.m"
{
#line 1641 "parse_tree_out_pragma.m"
  {
#line 1641 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1641 "parse_tree_out_pragma.m"
    {
#line 1641 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 1641 "parse_tree_out_pragma.m"
  }
#line 1641 "parse_tree_out_pragma.m"
}

#line 1634 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0(
#line 1634 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17,
#line 1634 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_4,
#line 1634 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8,
#line 1634 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9)
#line 1634 "parse_tree_out_pragma.m"
{
#line 1637 "parse_tree_out_pragma.m"
  {
#line 1637 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1637 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_required_feature_0;
#line 1637 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Features0_6 = (MR_Word) parse_tree__parse_tree_out_pragma__RFSInfo_4;
#line 1637 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Features_7;
#line 1637 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11;
#line 1637 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_13_13;
#line 1637 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1639 "parse_tree_out_pragma.m"
    {
#line 1639 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Features_7 = mercury__set__to_sorted_list_1_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18, parse_tree__parse_tree_out_pragma__Features0_6);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ":- pragma require_feature_set(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11);
    }
#line 1641 "parse_tree_out_pragma.m"
    {
#line 1641 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1641 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[5]));
#line 1641 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1));
#line 1641 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1641 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17));
#line 1641 "parse_tree_out_pragma.m"
    }
#line 58 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
    {
#line 58 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18)), ((MR_Box) (parse_tree__parse_tree_out_pragma__Features_7)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_13_13)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9);
    }
#line 1637 "parse_tree_out_pragma.m"
  }
#line 1634 "parse_tree_out_pragma.m"
}

#line 1488 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(
#line 1488 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ArgSizeTerm_4)
#line 1488 "parse_tree_out_pragma.m"
{
#line 1490 "parse_tree_out_pragma.m"
  {
#line 1490 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1490 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__VarId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ArgSizeTerm_4, (MR_Integer) 0)));
#line 1490 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Coefficient_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ArgSizeTerm_4, (MR_Integer) 1)));

#line 1492 "parse_tree_out_pragma.m"
    {
#line 1492 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "term(");
    }
#line 1493 "parse_tree_out_pragma.m"
    {
#line 1493 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__VarId_6);
    }
#line 1494 "parse_tree_out_pragma.m"
    {
#line 1494 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1495 "parse_tree_out_pragma.m"
    {
#line 1495 "parse_tree_out_pragma.m"
      libs__rat__write_rat_3_p_0(parse_tree__parse_tree_out_pragma__Coefficient_7);
    }
#line 1496 "parse_tree_out_pragma.m"
    {
#line 1496 "parse_tree_out_pragma.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 1490 "parse_tree_out_pragma.m"
  }
#line 1488 "parse_tree_out_pragma.m"
}

#line 1483 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1(
#line 1483 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1483 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1483 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1483 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1483 "parse_tree_out_pragma.m"
{
#line 1483 "parse_tree_out_pragma.m"
  {
#line 1483 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1483 "parse_tree_out_pragma.m"
    {
#line 1483 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1483 "parse_tree_out_pragma.m"
  }
#line 1483 "parse_tree_out_pragma.m"
}

#line 1471 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(
#line 1471 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Constraint_4)
#line 1471 "parse_tree_out_pragma.m"
{
#line 1473 "parse_tree_out_pragma.m"
  {
#line 1473 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1473 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Terms_6;
#line 1473 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Constant_7;
#line 1473 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__OpStr_8;

#line 1477 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Constraint_4)) == (MR_mktag((MR_Integer) 1))))
#line 1478 "parse_tree_out_pragma.m"
      {
#line 1478 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Terms_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 0)));
#line 1478 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Constant_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 1)));
#line 1479 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__OpStr_8 = (MR_String) "eq(";
#line 1478 "parse_tree_out_pragma.m"
      }
#line 1477 "parse_tree_out_pragma.m"
    else
#line 1475 "parse_tree_out_pragma.m"
      {
#line 1475 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Terms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 0)));
#line 1475 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Constant_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 1)));
#line 1476 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__OpStr_8 = (MR_String) "le(";
#line 1475 "parse_tree_out_pragma.m"
      }
#line 1481 "parse_tree_out_pragma.m"
    {
#line 1481 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__OpStr_8);
    }
#line 1482 "parse_tree_out_pragma.m"
    {
#line 1482 "parse_tree_out_pragma.m"
      mercury__io__write_char_3_p_0((MR_Char) 91);
    }
#line 1483 "parse_tree_out_pragma.m"
    {
#line 1483 "parse_tree_out_pragma.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_term_0, parse_tree__parse_tree_out_pragma__Terms_6, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[7]);
    }
#line 1484 "parse_tree_out_pragma.m"
    {
#line 1484 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "], ");
    }
#line 1485 "parse_tree_out_pragma.m"
    {
#line 1485 "parse_tree_out_pragma.m"
      libs__rat__write_rat_3_p_0(parse_tree__parse_tree_out_pragma__Constant_7);
    }
#line 1486 "parse_tree_out_pragma.m"
    {
#line 1486 "parse_tree_out_pragma.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 1473 "parse_tree_out_pragma.m"
  }
#line 1471 "parse_tree_out_pragma.m"
}

#line 1468 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2(
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1468 "parse_tree_out_pragma.m"
{
#line 1468 "parse_tree_out_pragma.m"
  {
#line 1468 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1468 "parse_tree_out_pragma.m"
    {
#line 1468 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1468 "parse_tree_out_pragma.m"
  }
#line 1468 "parse_tree_out_pragma.m"
}

#line 1468 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1(
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1468 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1468 "parse_tree_out_pragma.m"
{
#line 1468 "parse_tree_out_pragma.m"
  {
#line 1468 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1468 "parse_tree_out_pragma.m"
    {
#line 1468 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1468 "parse_tree_out_pragma.m"
  }
#line 1468 "parse_tree_out_pragma.m"
}

#line 1434 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(
#line 1434 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 1434 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Term2Info_6)
#line 1434 "parse_tree_out_pragma.m"
{
#line 1437 "parse_tree_out_pragma.m"
  {
#line 1437 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1437 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredModesPF_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 0)));
#line 1437 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeSuccess_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 1)));
#line 1437 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeFailure_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 2)));
#line 1437 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 3)));
#line 1437 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_8, (MR_Integer) 0)));
#line 1437 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_8, (MR_Integer) 1)));
#line 1437 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_8, (MR_Integer) 2)));

#line 1441 "parse_tree_out_pragma.m"
    {
#line 1441 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination2_info(");
    }
#line 1446 "parse_tree_out_pragma.m"
#line 1446 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_14) {
#line 1446 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1446 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1447 "parse_tree_out_pragma.m"
        {
#line 1447 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_15;
#line 1447 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_16;
#line 1447 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_21_21;
#line 1448 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_16;

#line 1448 "parse_tree_out_pragma.m"
          {
#line 1448 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_13, &parse_tree__parse_tree_out_pragma__FuncModeList_15, &parse_tree__parse_tree_out_pragma__conv0_RetMode_16);
          }
#line 1448 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_16 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_16);
#line 1449 "parse_tree_out_pragma.m"
          {
#line 1449 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_21_21 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
          }
#line 1449 "parse_tree_out_pragma.m"
          {
#line 1449 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__V_21_21, parse_tree__parse_tree_out_pragma__PredName_12, parse_tree__parse_tree_out_pragma__FuncModeList_15, parse_tree__parse_tree_out_pragma__RetMode_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1447 "parse_tree_out_pragma.m"
        }
#line 1446 "parse_tree_out_pragma.m"
        break;
#line 1446 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1443 "parse_tree_out_pragma.m"
        {
#line 1443 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_24_24;

#line 1444 "parse_tree_out_pragma.m"
          {
#line 1444 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_24_24 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
          }
#line 1444 "parse_tree_out_pragma.m"
          {
#line 1444 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__V_24_24, parse_tree__parse_tree_out_pragma__PredName_12, parse_tree__parse_tree_out_pragma__ModeList_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1443 "parse_tree_out_pragma.m"
        }
#line 1446 "parse_tree_out_pragma.m"
        break;
#line 1446 "parse_tree_out_pragma.m"
    }
#line 1452 "parse_tree_out_pragma.m"
    {
#line 1452 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1463 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeSuccess_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1463 "parse_tree_out_pragma.m"
      {
#line 1464 "parse_tree_out_pragma.m"
        {
#line 1464 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1463 "parse_tree_out_pragma.m"
      }
#line 1463 "parse_tree_out_pragma.m"
    else
#line 1465 "parse_tree_out_pragma.m"
      {
#line 1465 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__ArgSizeInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeSuccess_9, (MR_Integer) 0)));

#line 1466 "parse_tree_out_pragma.m"
        {
#line 1466 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "constaints(");
        }
#line 1467 "parse_tree_out_pragma.m"
        {
#line 1467 "parse_tree_out_pragma.m"
          mercury__io__write_char_3_p_0((MR_Char) 91);
        }
#line 1468 "parse_tree_out_pragma.m"
        {
#line 1468 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0, parse_tree__parse_tree_out_pragma__ArgSizeInfo_46, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[5]);
        }
#line 1469 "parse_tree_out_pragma.m"
        {
#line 1469 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
#line 1465 "parse_tree_out_pragma.m"
      }
#line 1454 "parse_tree_out_pragma.m"
    {
#line 1454 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1463 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeFailure_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1463 "parse_tree_out_pragma.m"
      {
#line 1464 "parse_tree_out_pragma.m"
        {
#line 1464 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1463 "parse_tree_out_pragma.m"
      }
#line 1463 "parse_tree_out_pragma.m"
    else
#line 1465 "parse_tree_out_pragma.m"
      {
#line 1465 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__ArgSizeInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeFailure_10, (MR_Integer) 0)));

#line 1466 "parse_tree_out_pragma.m"
        {
#line 1466 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "constaints(");
        }
#line 1467 "parse_tree_out_pragma.m"
        {
#line 1467 "parse_tree_out_pragma.m"
          mercury__io__write_char_3_p_0((MR_Char) 91);
        }
#line 1468 "parse_tree_out_pragma.m"
        {
#line 1468 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0, parse_tree__parse_tree_out_pragma__ArgSizeInfo_68, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[6]);
        }
#line 1469 "parse_tree_out_pragma.m"
        {
#line 1469 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
#line 1465 "parse_tree_out_pragma.m"
      }
#line 1456 "parse_tree_out_pragma.m"
    {
#line 1456 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1503 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTermination_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1503 "parse_tree_out_pragma.m"
      {
#line 1504 "parse_tree_out_pragma.m"
        {
#line 1504 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1503 "parse_tree_out_pragma.m"
      }
#line 1503 "parse_tree_out_pragma.m"
    else
#line 1506 "parse_tree_out_pragma.m"
      {
#line 1506 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Termination_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTermination_11, (MR_Integer) 0)));
#line 1506 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__TerminationStr_91;

#line 1510 "parse_tree_out_pragma.m"
        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Termination_89)) == (MR_mktag((MR_Integer) 1))))
#line 1509 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminationStr_91 = (MR_String) "can_loop";
#line 1510 "parse_tree_out_pragma.m"
        else
#line 1512 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminationStr_91 = (MR_String) "cannot_loop";
#line 1514 "parse_tree_out_pragma.m"
        {
#line 1514 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__TerminationStr_91);
        }
#line 1506 "parse_tree_out_pragma.m"
      }
#line 1458 "parse_tree_out_pragma.m"
    {
#line 1458 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1437 "parse_tree_out_pragma.m"
  }
#line 1434 "parse_tree_out_pragma.m"
}

#line 1390 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(
#line 1390 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1)
#line 1390 "parse_tree_out_pragma.m"
{
#line 1392 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 1392 "parse_tree_out_pragma.m"
    {
#line 1392 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 1392 "parse_tree_out_pragma.m"
      {
#line 1392 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1392 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1392 "parse_tree_out_pragma.m"
          {
#line 1392 "parse_tree_out_pragma.m"
          }
#line 1392 "parse_tree_out_pragma.m"
        else
#line 1393 "parse_tree_out_pragma.m"
          {
#line 1393 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__UsedArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 1393 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));

#line 1394 "parse_tree_out_pragma.m"
            {
#line 1394 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1402 "parse_tree_out_pragma.m"
#line 1402 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__UsedArg_7) {
#line 1402 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1402 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1402 "parse_tree_out_pragma.m"
                {
#line 1403 "parse_tree_out_pragma.m"
                  {
#line 1403 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "no");
                  }
#line 1402 "parse_tree_out_pragma.m"
                }
#line 1402 "parse_tree_out_pragma.m"
                break;
#line 1402 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1405 "parse_tree_out_pragma.m"
                {
#line 1406 "parse_tree_out_pragma.m"
                  {
#line 1406 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "yes");
                  }
#line 1405 "parse_tree_out_pragma.m"
                }
#line 1402 "parse_tree_out_pragma.m"
                break;
#line 1402 "parse_tree_out_pragma.m"
            }
#line 1396 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 1396 "parse_tree_out_pragma.m"
            {
#line 1396 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1 = parse_tree__parse_tree_out_pragma__UsedArgs_8;

#line 1396 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__1_1 = parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1;
#line 1396 "parse_tree_out_pragma.m"
            }
#line 1396 "parse_tree_out_pragma.m"
            continue;
#line 1393 "parse_tree_out_pragma.m"
          }
#line 1392 "parse_tree_out_pragma.m"
      }
#line 1392 "parse_tree_out_pragma.m"
      break;
#line 1392 "parse_tree_out_pragma.m"
    }
#line 1390 "parse_tree_out_pragma.m"
}

#line 1326 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(
#line 1326 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 1326 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TermInfo_6)
#line 1326 "parse_tree_out_pragma.m"
{
#line 1329 "parse_tree_out_pragma.m"
  {
#line 1329 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1329 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_17_17 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1329 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_6, (MR_Integer) 0)));
#line 1329 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeArgSize_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_6, (MR_Integer) 1)));
#line 1329 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_6, (MR_Integer) 2)));
#line 1329 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_8, (MR_Integer) 0)));
#line 1329 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_8, (MR_Integer) 1)));
#line 1329 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_8, (MR_Integer) 2)));

#line 1333 "parse_tree_out_pragma.m"
    {
#line 1333 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_pragma_termination_info_components_8_p_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_17_17, parse_tree__parse_tree_out_pragma__TypeCtorInfo_17_17, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__PredOrFunc_13, parse_tree__parse_tree_out_pragma__SymName_11, parse_tree__parse_tree_out_pragma__ModeList_12, parse_tree__parse_tree_out_pragma__MaybeArgSize_9, parse_tree__parse_tree_out_pragma__MaybeTermination_10);
    }
#line 1329 "parse_tree_out_pragma.m"
  }
#line 1326 "parse_tree_out_pragma.m"
}

#line 1296 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(
#line 1296 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20,
#line 1296 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_5,
#line 1296 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_6,
#line 1296 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1296 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11)
#line 1296 "parse_tree_out_pragma.m"
{
#line 1299 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 1299 "parse_tree_out_pragma.m"
    {
#line 1299 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 1299 "parse_tree_out_pragma.m"
      {
#line 1299 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1299 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
#line 1299 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 1299 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredName_25;
#line 1299 "parse_tree_out_pragma.m"
        MR_Integer parse_tree__parse_tree_out_pragma__Arity_26;
#line 1299 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28;
#line 1299 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 38 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "\t\t")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
        }
#line 1316 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_5, (MR_Integer) 0)));
#line 1316 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_5, (MR_Integer) 1)));
#line 1317 "parse_tree_out_pragma.m"
        {
#line 1317 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_25, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30);
        }
#line 38 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
        {
#line 38 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_26)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
        }
#line 1305 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__PredNameArities_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1303 "parse_tree_out_pragma.m"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);
            }
#line 1303 "parse_tree_out_pragma.m"
          }
#line 1305 "parse_tree_out_pragma.m"
        else
#line 1306 "parse_tree_out_pragma.m"
          {
#line 1306 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__HeadPredNameArity_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__PredNameArities_6, (MR_Integer) 0)));
#line 1306 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__TailPredNameArities_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__PredNameArities_6, (MR_Integer) 1)));
#line 1306 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ",\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
            }
#line 1308 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 1308 "parse_tree_out_pragma.m"
            {
#line 1308 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity__tmp_copy_5 = parse_tree__parse_tree_out_pragma__HeadPredNameArity_8;
#line 1308 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArities__tmp_copy_6 = parse_tree__parse_tree_out_pragma__TailPredNameArities_9;
#line 1308 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_10 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;

#line 1308 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_10;
#line 1308 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__PredNameArities_6 = parse_tree__parse_tree_out_pragma__PredNameArities__tmp_copy_6;
#line 1308 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__PredNameArity_5 = parse_tree__parse_tree_out_pragma__PredNameArity__tmp_copy_5;
#line 1308 "parse_tree_out_pragma.m"
            }
#line 1308 "parse_tree_out_pragma.m"
            continue;
#line 1306 "parse_tree_out_pragma.m"
          }
#line 1299 "parse_tree_out_pragma.m"
      }
#line 1299 "parse_tree_out_pragma.m"
      break;
#line 1299 "parse_tree_out_pragma.m"
    }
#line 1296 "parse_tree_out_pragma.m"
}

#line 1259 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(
#line 1259 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_4)
#line 1259 "parse_tree_out_pragma.m"
{
#line 1263 "parse_tree_out_pragma.m"
  {
#line 1263 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1263 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 1263 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 0)));
#line 1263 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__CreatorPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 1)));
#line 1263 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MutatorPreds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 2)));
#line 1263 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__DestructorPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 3)));
#line 1263 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_18;
#line 1263 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_19;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_15_21;
#line 1273 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_17_23;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_19_25;
#line 38 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 38 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_20_26;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_22_28;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_24_30;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv13_STATE_VARIABLE_U_27_33;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv15_STATE_VARIABLE_U_29_35;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_32_38;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_19)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv20_STATE_VARIABLE_U_34_40;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_U_37_43;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_24)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv25_STATE_VARIABLE_IO_7;

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ":- pragma oisu(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_15_21);
    }
#line 1272 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_14, (MR_Integer) 0)));
#line 1272 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_14, (MR_Integer) 1)));
#line 1273 "parse_tree_out_pragma.m"
    {
#line 1273 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_17_23);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_19_25);
    }
#line 38 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
    {
#line 38 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_19)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_20_26);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ",\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_22_28);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tcreators([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_24_30);
    }
#line 1291 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__CreatorPreds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "parse_tree_out_pragma.m"
      {
#line 1291 "parse_tree_out_pragma.m"
      }
#line 1291 "parse_tree_out_pragma.m"
    else
#line 1292 "parse_tree_out_pragma.m"
      {
#line 1292 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__CreatorPreds_15, (MR_Integer) 0)));
#line 1292 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__CreatorPreds_15, (MR_Integer) 1)));
#line 1293 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_U_25_31;

#line 1293 "parse_tree_out_pragma.m"
        {
#line 1293 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_49, parse_tree__parse_tree_out_pragma__PredNameArities_50, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_U_25_31);
        }
#line 1292 "parse_tree_out_pragma.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv13_STATE_VARIABLE_U_27_33);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tmutators([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv15_STATE_VARIABLE_U_29_35);
    }
#line 1291 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MutatorPreds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "parse_tree_out_pragma.m"
      {
#line 1291 "parse_tree_out_pragma.m"
      }
#line 1291 "parse_tree_out_pragma.m"
    else
#line 1292 "parse_tree_out_pragma.m"
      {
#line 1292 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MutatorPreds_16, (MR_Integer) 0)));
#line 1292 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MutatorPreds_16, (MR_Integer) 1)));
#line 1293 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_30_36;

#line 1293 "parse_tree_out_pragma.m"
        {
#line 1293 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_58, parse_tree__parse_tree_out_pragma__PredNameArities_59, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_30_36);
        }
#line 1292 "parse_tree_out_pragma.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_32_38);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_19(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tdestructors([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv20_STATE_VARIABLE_U_34_40);
    }
#line 1291 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__DestructorPreds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "parse_tree_out_pragma.m"
      {
#line 1291 "parse_tree_out_pragma.m"
      }
#line 1291 "parse_tree_out_pragma.m"
    else
#line 1292 "parse_tree_out_pragma.m"
      {
#line 1292 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__DestructorPreds_17, (MR_Integer) 0)));
#line 1292 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__DestructorPreds_17, (MR_Integer) 1)));
#line 1293 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_35_41;

#line 1293 "parse_tree_out_pragma.m"
        {
#line 1293 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_67, parse_tree__parse_tree_out_pragma__PredNameArities_68, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_35_41);
        }
#line 1292 "parse_tree_out_pragma.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t])\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_U_37_43);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_24(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv25_STATE_VARIABLE_IO_7);
    }
#line 1263 "parse_tree_out_pragma.m"
  }
#line 1259 "parse_tree_out_pragma.m"
}

#line 1242 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(
#line 1242 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_4)
#line 1242 "parse_tree_out_pragma.m"
{
#line 1245 "parse_tree_out_pragma.m"
  {
#line 1245 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1245 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_4, (MR_Integer) 0)));
#line 1245 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_4, (MR_Integer) 1)));

#line 1247 "parse_tree_out_pragma.m"
    {
#line 1247 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma reserve_tag(");
    }
#line 1248 "parse_tree_out_pragma.m"
    {
#line 1248 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_6);
    }
#line 1250 "parse_tree_out_pragma.m"
    {
#line 1250 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 1251 "parse_tree_out_pragma.m"
    {
#line 1251 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__TypeArity_7);
    }
#line 1252 "parse_tree_out_pragma.m"
    {
#line 1252 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1245 "parse_tree_out_pragma.m"
  }
#line 1242 "parse_tree_out_pragma.m"
}

#line 1223 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0(
#line 1223 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24,
#line 1223 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_4,
#line 1223 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1223 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11)
#line 1223 "parse_tree_out_pragma.m"
{
#line 1226 "parse_tree_out_pragma.m"
  {
#line 1226 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1226 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FactTableInfo_4, (MR_Integer) 0)));
#line 1226 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FactTableInfo_4, (MR_Integer) 1)));
#line 1226 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_6, (MR_Integer) 0)));
#line 1226 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_6, (MR_Integer) 1)));
#line 1226 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
#line 1226 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
#line 1226 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
#line 1226 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18;
#line 1226 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
#line 1226 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 38 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 46 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ":- pragma fact_table(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
    }
#line 1230 "parse_tree_out_pragma.m"
    {
#line 1230 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_8, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
    }
#line 38 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
    {
#line 38 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_9)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
    }
#line 46 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 46 "parse_tree.parse_tree_out_info.int"
    {
#line 46 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);
    }
#line 1226 "parse_tree_out_pragma.m"
  }
#line 1223 "parse_tree_out_pragma.m"
}

#line 1170 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1(
#line 1170 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1170 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 1170 "parse_tree_out_pragma.m"
{
#line 1170 "parse_tree_out_pragma.m"
  {
#line 1170 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 1170 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 1170 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2;

#line 1170 "parse_tree_out_pragma.m"
    {
#line 1170 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1170 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2));
#line 1170 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 1170 "parse_tree_out_pragma.m"
  }
#line 1170 "parse_tree_out_pragma.m"
}

#line 1149 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(
#line 1149 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_4)
#line 1149 "parse_tree_out_pragma.m"
{
#line 1152 "parse_tree_out_pragma.m"
  {
#line 1152 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1152 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__EvalMethod_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 0)));
#line 1152 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityMPF_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 1)));
#line 1152 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeAttributes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 3)));
#line 1152 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 0)));
#line 1152 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 1)));
#line 1152 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__PragmaName_13;
#line 1152 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeAfter_28;
#line 1153 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma___Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 2)));
#line 1155 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma___MaybePorF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 2)));

#line 1156 "parse_tree_out_pragma.m"
    {
#line 1156 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__PragmaName_13 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(parse_tree__parse_tree_out_pragma__EvalMethod_6);
    }
#line 1211 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeAttributes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1211 "parse_tree_out_pragma.m"
    else
#line 1158 "parse_tree_out_pragma.m"
      {
#line 1158 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Attributes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAttributes_9, (MR_Integer) 0)));
#line 1158 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Strictness_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 0)));
#line 1158 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 1)));
#line 1158 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Stats_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 2)));
#line 1158 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__AllowReset_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 3)));
#line 1158 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1158 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43;
#line 1158 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49;
#line 1158 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50;
#line 1158 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52;

#line 1165 "parse_tree_out_pragma.m"
#line 1165 "parse_tree_out_pragma.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Strictness_15)) {
#line 1165 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1165 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1165 "parse_tree_out_pragma.m"
#line 1165 "parse_tree_out_pragma.m"
            switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__Strictness_15)) {
#line 1165 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1165 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1164 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33;
#line 1165 "parse_tree_out_pragma.m"
                break;
#line 1165 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1166 "parse_tree_out_pragma.m"
                {
#line 1167 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[27]);
#line 1166 "parse_tree_out_pragma.m"
                }
#line 1165 "parse_tree_out_pragma.m"
                break;
#line 1165 "parse_tree_out_pragma.m"
            }
#line 1165 "parse_tree_out_pragma.m"
            break;
#line 1165 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1169 "parse_tree_out_pragma.m"
            {
#line 1169 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Strictness_15, (MR_Integer) 0)));
#line 1169 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HiddenArgMethod_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Strictness_15, (MR_Integer) 1)));
#line 1169 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__ArgStrs_22;
#line 1169 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__ArgsStr_23;
#line 1169 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__HiddenArgStr_24;
#line 1169 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__SpecifiedStr_25;
#line 1169 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_37_37;
#line 1169 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_38_38;
#line 1169 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_40_40;

#line 1170 "parse_tree_out_pragma.m"
              {
#line 1170 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__ArgStrs_22 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[4], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[4], parse_tree__parse_tree_out_pragma__Args_20);
              }
#line 1171 "parse_tree_out_pragma.m"
              {
#line 1171 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__ArgsStr_23 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__ArgStrs_22);
              }
#line 1175 "parse_tree_out_pragma.m"
#line 1175 "parse_tree_out_pragma.m"
              switch (parse_tree__parse_tree_out_pragma__HiddenArgMethod_21) {
#line 1175 "parse_tree_out_pragma.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1175 "parse_tree_out_pragma.m"
                case (MR_Integer) 1:
#line 1177 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__HiddenArgStr_24 = (MR_String) "hidden_arg_addr";
#line 1175 "parse_tree_out_pragma.m"
                  break;
#line 1175 "parse_tree_out_pragma.m"
                case (MR_Integer) 0:
#line 1174 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__HiddenArgStr_24 = (MR_String) "hidden_arg_value";
#line 1175 "parse_tree_out_pragma.m"
                  break;
#line 1175 "parse_tree_out_pragma.m"
              }
#line 1180 "parse_tree_out_pragma.m"
              {
#line 1180 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_40_40 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__HiddenArgStr_24, (MR_String) ")");
              }
#line 1179 "parse_tree_out_pragma.m"
              {
#line 1179 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "], ", parse_tree__parse_tree_out_pragma__V_40_40);
              }
#line 1179 "parse_tree_out_pragma.m"
              {
#line 1179 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_37_37 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__ArgsStr_23, parse_tree__parse_tree_out_pragma__V_38_38);
              }
#line 1179 "parse_tree_out_pragma.m"
              {
#line 1179 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__SpecifiedStr_25 = mercury__string__f_43_43_2_f_0((MR_String) "specified([", parse_tree__parse_tree_out_pragma__V_37_37);
              }
#line 1181 "parse_tree_out_pragma.m"
              {
#line 1181 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__SpecifiedStr_25));
#line 1181 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33));
#line 1181 "parse_tree_out_pragma.m"
              }
#line 1169 "parse_tree_out_pragma.m"
            }
#line 1165 "parse_tree_out_pragma.m"
            break;
#line 1165 "parse_tree_out_pragma.m"
        }
#line 1187 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43;
#line 1187 "parse_tree_out_pragma.m"
        else
#line 1184 "parse_tree_out_pragma.m"
          {
#line 1184 "parse_tree_out_pragma.m"
            MR_Integer parse_tree__parse_tree_out_pragma__SizeLimit_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16, (MR_Integer) 0)));
#line 1184 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__LimitStr_27;
#line 1184 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_46_46;
#line 1184 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_47_47;

#line 1185 "parse_tree_out_pragma.m"
            {
#line 1185 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_47_47 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_out_pragma__SizeLimit_26);
            }
#line 1185 "parse_tree_out_pragma.m"
            {
#line 1185 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_46_46 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__V_47_47, (MR_String) ")");
            }
#line 1185 "parse_tree_out_pragma.m"
            {
#line 1185 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__LimitStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "limit(", parse_tree__parse_tree_out_pragma__V_46_46);
            }
#line 1186 "parse_tree_out_pragma.m"
            {
#line 1186 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "parse_tree_out_pragma.m"
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__LimitStr_27));
#line 1186 "parse_tree_out_pragma.m"
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43));
#line 1186 "parse_tree_out_pragma.m"
            }
#line 1184 "parse_tree_out_pragma.m"
          }
#line 1193 "parse_tree_out_pragma.m"
#line 1193 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__Stats_17) {
#line 1193 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1193 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1194 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49;
#line 1193 "parse_tree_out_pragma.m"
            break;
#line 1193 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1191 "parse_tree_out_pragma.m"
            {
#line 1192 "parse_tree_out_pragma.m"
              {
#line 1192 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50, 0) = ((MR_Box) ((MR_String) "statistics"));
#line 1192 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49));
#line 1192 "parse_tree_out_pragma.m"
              }
#line 1191 "parse_tree_out_pragma.m"
            }
#line 1193 "parse_tree_out_pragma.m"
            break;
#line 1193 "parse_tree_out_pragma.m"
        }
#line 1199 "parse_tree_out_pragma.m"
#line 1199 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__AllowReset_18) {
#line 1199 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1199 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1197 "parse_tree_out_pragma.m"
            {
#line 1198 "parse_tree_out_pragma.m"
              {
#line 1198 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52, 0) = ((MR_Box) ((MR_String) "allow_reset"));
#line 1198 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50));
#line 1198 "parse_tree_out_pragma.m"
              }
#line 1197 "parse_tree_out_pragma.m"
            }
#line 1199 "parse_tree_out_pragma.m"
            break;
#line 1199 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1200 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50;
#line 1199 "parse_tree_out_pragma.m"
            break;
#line 1199 "parse_tree_out_pragma.m"
        }
#line 1205 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1204 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1205 "parse_tree_out_pragma.m"
        else
#line 1206 "parse_tree_out_pragma.m"
          {
#line 1206 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_54_54;
#line 1206 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_56_56;
#line 1206 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_57_57;

#line 1208 "parse_tree_out_pragma.m"
            {
#line 1208 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_57_57 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52);
            }
#line 1208 "parse_tree_out_pragma.m"
            {
#line 1208 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_56_56 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__V_57_57, (MR_String) "]");
            }
#line 1208 "parse_tree_out_pragma.m"
            {
#line 1208 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "[", parse_tree__parse_tree_out_pragma__V_56_56);
            }
#line 1208 "parse_tree_out_pragma.m"
            {
#line 1208 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1208 "parse_tree_out_pragma.m"
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_28, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_54_54));
#line 1208 "parse_tree_out_pragma.m"
            }
#line 1206 "parse_tree_out_pragma.m"
          }
#line 1158 "parse_tree_out_pragma.m"
      }
#line 1215 "parse_tree_out_pragma.m"
    {
#line 1215 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__PredName_10, parse_tree__parse_tree_out_pragma__Arity_11, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PragmaName_13, parse_tree__parse_tree_out_pragma__MaybeAfter_28);
    }
#line 1152 "parse_tree_out_pragma.m"
  }
#line 1149 "parse_tree_out_pragma.m"
}

#line 1036 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(
#line 1036 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16,
#line 1036 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1036 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1036 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3)
#line 1036 "parse_tree_out_pragma.m"
{
#line 1039 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 1039 "parse_tree_out_pragma.m"
    {
#line 1039 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 1039 "parse_tree_out_pragma.m"
      {
#line 1039 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1039 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1039 "parse_tree_out_pragma.m"
          *parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2;
#line 1039 "parse_tree_out_pragma.m"
        else
#line 1040 "parse_tree_out_pragma.m"
          {
#line 1040 "parse_tree_out_pragma.m"
            MR_Integer parse_tree__parse_tree_out_pragma__First_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 1040 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 1040 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
#line 1040 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 38 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
            }
#line 38 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
            {
#line 38 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16), ((MR_Box) (parse_tree__parse_tree_out_pragma__First_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
            }
#line 1043 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 1043 "parse_tree_out_pragma.m"
            {
#line 1043 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1 = parse_tree__parse_tree_out_pragma__Rest_8;
#line 1043 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_2 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;

#line 1043 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_2;
#line 1043 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__1_1 = parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1;
#line 1043 "parse_tree_out_pragma.m"
            }
#line 1043 "parse_tree_out_pragma.m"
            continue;
#line 1040 "parse_tree_out_pragma.m"
          }
#line 1039 "parse_tree_out_pragma.m"
      }
#line 1039 "parse_tree_out_pragma.m"
      break;
#line 1039 "parse_tree_out_pragma.m"
    }
#line 1036 "parse_tree_out_pragma.m"
}

#line 999 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(
#line 999 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_6,
#line 999 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarNamePrint_7,
#line 999 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3)
#line 999 "parse_tree_out_pragma.m"
{
#line 1002 "parse_tree_out_pragma.m"
  {
#line 1002 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1002 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 0)));
#line 1002 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 1)));

#line 1003 "parse_tree_out_pragma.m"
    {
#line 1003 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out_pragma__VarSet_6, parse_tree__parse_tree_out_pragma__VarNamePrint_7, parse_tree__parse_tree_out_pragma__Var_8);
    }
#line 1004 "parse_tree_out_pragma.m"
    {
#line 1004 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
#line 1005 "parse_tree_out_pragma.m"
    {
#line 1005 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_6, parse_tree__parse_tree_out_pragma__VarNamePrint_7, parse_tree__parse_tree_out_pragma__Type_9);
    }
#line 1002 "parse_tree_out_pragma.m"
  }
#line 999 "parse_tree_out_pragma.m"
}

#line 896 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0(
#line 896 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47,
#line 896 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_4,
#line 896 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13,
#line 896 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14)
#line 896 "parse_tree_out_pragma.m"
{
#line 899 "parse_tree_out_pragma.m"
  {
#line 899 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 899 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 0)));
#line 899 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 1)));
#line 899 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybePorF_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 2)));
#line 899 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeBackend_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 3)));

#line 918 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybePorF_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "parse_tree_out_pragma.m"
      {
#line 905 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 905 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37;
#line 905 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
#line 905 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_40_40;
#line 905 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 38 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ":- external(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
        }
#line 909 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybeBackend_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 909 "parse_tree_out_pragma.m"
        else
#line 910 "parse_tree_out_pragma.m"
          {
#line 910 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Backend_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeBackend_9, (MR_Integer) 0)));
#line 910 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_34_34;
#line 910 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35;
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 942 "parse_tree_out_pragma.m"
#line 942 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Backend_10) {
#line 942 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 942 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 946 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_34_34 = (MR_String) "high_level_backend";
#line 942 "parse_tree_out_pragma.m"
                break;
#line 942 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 943 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_34_34 = (MR_String) "low_level_backend";
#line 942 "parse_tree_out_pragma.m"
                break;
#line 942 "parse_tree_out_pragma.m"
            }
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_34_34)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35);
            }
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37);
            }
#line 910 "parse_tree_out_pragma.m"
          }
#line 914 "parse_tree_out_pragma.m"
        {
#line 914 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, parse_tree__parse_tree_out_pragma__PredName_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_40_40);
        }
#line 38 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
        {
#line 38 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_40_40, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14);
        }
#line 905 "parse_tree_out_pragma.m"
      }
#line 918 "parse_tree_out_pragma.m"
    else
#line 919 "parse_tree_out_pragma.m"
      {
#line 919 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PorF_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePorF_8, (MR_Integer) 0)));
#line 919 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__PorFStr_12;
#line 919 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
#line 919 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
#line 919 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19;
#line 919 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
#line 919 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 919 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
#line 919 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 38 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 920 "parse_tree_out_pragma.m"
        {
#line 920 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PorFStr_12 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__parse_tree_out_pragma__PorF_11);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ":- pragma external_")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__PorFStr_12)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19);
        }
#line 924 "parse_tree_out_pragma.m"
        {
#line 924 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, parse_tree__parse_tree_out_pragma__PredName_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
        }
#line 38 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
        {
#line 38 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23);
        }
#line 929 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybeBackend_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
#line 929 "parse_tree_out_pragma.m"
        else
#line 930 "parse_tree_out_pragma.m"
          {
#line 930 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 930 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_26_26;
#line 930 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 930 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Backend_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeBackend_9, (MR_Integer) 0)));
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ", [")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
            }
#line 942 "parse_tree_out_pragma.m"
#line 942 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Backend_44) {
#line 942 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 942 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 946 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_26_26 = (MR_String) "high_level_backend";
#line 942 "parse_tree_out_pragma.m"
                break;
#line 942 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 943 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_26_26 = (MR_String) "low_level_backend";
#line 942 "parse_tree_out_pragma.m"
                break;
#line 942 "parse_tree_out_pragma.m"
            }
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_26_26)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
            }
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
            }
#line 930 "parse_tree_out_pragma.m"
          }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14);
        }
#line 919 "parse_tree_out_pragma.m"
      }
#line 899 "parse_tree_out_pragma.m"
  }
#line 896 "parse_tree_out_pragma.m"
}

#line 883 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(
#line 883 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14,
#line 883 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 883 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 883 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8)
#line 883 "parse_tree_out_pragma.m"
{
#line 886 "parse_tree_out_pragma.m"
  {
#line 886 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 886 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 886 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 886 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10;
#line 886 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 46 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 887 "parse_tree_out_pragma.m"
    {
#line 887 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__SymName_4, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) " - ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12);
    }
#line 46 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 46 "parse_tree.parse_tree_out_info.int"
    {
#line 46 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__String_5)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
    }
#line 886 "parse_tree_out_pragma.m"
  }
#line 883 "parse_tree_out_pragma.m"
}

#line 880 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1(
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 880 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 880 "parse_tree_out_pragma.m"
{
#line 880 "parse_tree_out_pragma.m"
  {
#line 880 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 880 "parse_tree_out_pragma.m"
    {
#line 880 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 880 "parse_tree_out_pragma.m"
  }
#line 880 "parse_tree_out_pragma.m"
}

#line 848 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0(
#line 848 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28,
#line 848 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEInfo_4,
#line 848 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11,
#line 848 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12)
#line 848 "parse_tree_out_pragma.m"
{
#line 851 "parse_tree_out_pragma.m"
  {
#line 851 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 851 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 0)));
#line 851 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 1)));
#line 851 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Values_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 2)));
#line 851 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_9;
#line 851 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_10;
#line 851 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 851 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
#line 851 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
#line 851 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19;
#line 851 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
#line 851 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 851 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24;
#line 851 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 851 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34;
#line 851 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_36_36;
#line 851 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 38 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 36 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 36 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ":- pragma foreign_enum(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
    }
#line 854 "parse_tree_out_pragma.m"
    {
#line 854 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
    }
#line 856 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 0)));
#line 856 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 1)));
#line 857 "parse_tree_out_pragma.m"
    {
#line 857 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_9, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
#line 38 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
    {
#line 38 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_10)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24);
    }
#line 36 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 7)));
#line 36 "parse_tree.parse_tree_out_info.int"
    {
#line 36 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (MR_Word) ((MR_Char) 91)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34);
    }
#line 880 "parse_tree_out_pragma.m"
    {
#line 880 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 880 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
#line 880 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1));
#line 880 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 880 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28));
#line 880 "parse_tree_out_pragma.m"
    }
#line 58 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
    {
#line 58 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])), ((MR_Box) (parse_tree__parse_tree_out_pragma__Values_8)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_36_36)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37);
    }
#line 36 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 7)));
#line 36 "parse_tree.parse_tree_out_info.int"
    {
#line 36 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (MR_Word) ((MR_Char) 93)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12);
    }
#line 851 "parse_tree_out_pragma.m"
  }
#line 848 "parse_tree_out_pragma.m"
}

#line 880 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1(
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 880 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 880 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 880 "parse_tree_out_pragma.m"
{
#line 880 "parse_tree_out_pragma.m"
  {
#line 880 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 880 "parse_tree_out_pragma.m"
    {
#line 880 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 880 "parse_tree_out_pragma.m"
  }
#line 880 "parse_tree_out_pragma.m"
}

#line 808 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0(
#line 808 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32,
#line 808 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_4,
#line 808 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12,
#line 808 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13)
#line 808 "parse_tree_out_pragma.m"
{
#line 811 "parse_tree_out_pragma.m"
  {
#line 811 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 811 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 0)));
#line 811 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 1)));
#line 811 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Attributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 2)));
#line 811 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Overrides_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 3)));
#line 811 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_10;
#line 811 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_11;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 811 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybePrefix_37;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54;
#line 811 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_56_56;
#line 811 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 38 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 831 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_48_48;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 36 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 36 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ":- pragma foreign_export_enum(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
#line 815 "parse_tree_out_pragma.m"
    {
#line 815 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18);
    }
#line 817 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 0)));
#line 817 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeArity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 1)));
#line 818 "parse_tree_out_pragma.m"
    {
#line 818 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_10, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
#line 38 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
    {
#line 38 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_11)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
#line 831 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__MaybePrefix_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_8, (MR_Integer) 0)));
#line 831 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_8, (MR_Integer) 1)));
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "[")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40);
    }
#line 835 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybePrefix_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40;
#line 835 "parse_tree_out_pragma.m"
    else
#line 836 "parse_tree_out_pragma.m"
      {
#line 836 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Prefix_38 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePrefix_37, (MR_Integer) 0)));
#line 836 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42;
#line 836 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 46 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 36 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "prefix(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42);
        }
#line 46 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 12)));
#line 46 "parse_tree.parse_tree_out_info.int"
        {
#line 46 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (parse_tree__parse_tree_out_pragma__Prefix_38)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43);
        }
#line 36 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
#line 36 "parse_tree.parse_tree_out_info.int"
        {
#line 36 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 41)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45);
        }
#line 836 "parse_tree_out_pragma.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28);
    }
#line 36 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
#line 36 "parse_tree.parse_tree_out_info.int"
    {
#line 36 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 91)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54);
    }
#line 880 "parse_tree_out_pragma.m"
    {
#line 880 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 880 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
#line 880 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1));
#line 880 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 880 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32));
#line 880 "parse_tree_out_pragma.m"
    }
#line 58 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
    {
#line 58 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])), ((MR_Box) (parse_tree__parse_tree_out_pragma__Overrides_9)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_56_56)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57);
    }
#line 36 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
#line 36 "parse_tree.parse_tree_out_info.int"
    {
#line 36 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 93)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13);
    }
#line 811 "parse_tree_out_pragma.m"
  }
#line 808 "parse_tree_out_pragma.m"
}

#line 773 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0(
#line 773 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42,
#line 773 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 773 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_6,
#line 773 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_18,
#line 773 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19)
#line 773 "parse_tree_out_pragma.m"
{
#line 776 "parse_tree_out_pragma.m"
  {
#line 776 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 776 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ForeignLang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 0)));
#line 776 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 1)));
#line 776 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__ExportName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 2)));
#line 776 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 0)));
#line 776 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 1)));
#line 776 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 2)));
#line 776 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_14;
#line 776 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InstInfo_15;
#line 776 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
#line 776 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 776 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24;
#line 776 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 776 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36;
#line 776 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
#line 776 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 780 "parse_tree_out_pragma.m"
    {
#line 780 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_14);
    }
#line 781 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__InstInfo_15 = (MR_Word) parse_tree__parse_tree_out_pragma__VarSet_14;
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ":- pragma foreign_export(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
#line 783 "parse_tree_out_pragma.m"
    {
#line 783 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__ForeignLang_8, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24);
    }
#line 785 "parse_tree_out_pragma.m"
    {
#line 785 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__Name_11, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
#line 793 "parse_tree_out_pragma.m"
#line 793 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_13) {
#line 793 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 793 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 787 "parse_tree_out_pragma.m"
        {
#line 787 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45;
#line 787 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__ArgModes_16;
#line 787 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_17;
#line 787 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32;
#line 787 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 787 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35;
#line 788 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv2_RetMode_17;
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 788 "parse_tree_out_pragma.m"
          {
#line 788 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_12, &parse_tree__parse_tree_out_pragma__ArgModes_16, &parse_tree__parse_tree_out_pragma__conv2_RetMode_17);
          }
#line 788 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_17 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv2_RetMode_17);
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32);
          }
#line 4030 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[3];
#line 790 "parse_tree_out_pragma.m"
          {
#line 790 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45, parse_tree__parse_tree_out_pragma__Lang_5, ((MR_Box) (parse_tree__parse_tree_out_pragma__InstInfo_15)), parse_tree__parse_tree_out_pragma__ArgModes_16, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
          }
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ") = ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35);
          }
#line 792 "parse_tree_out_pragma.m"
          {
#line 792 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45, parse_tree__parse_tree_out_pragma__Lang_5, ((MR_Box) (parse_tree__parse_tree_out_pragma__InstInfo_15)), parse_tree__parse_tree_out_pragma__RetMode_17, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36);
          }
#line 787 "parse_tree_out_pragma.m"
        }
#line 793 "parse_tree_out_pragma.m"
        break;
#line 793 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 794 "parse_tree_out_pragma.m"
        {
#line 794 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 794 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28;
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
          }
#line 796 "parse_tree_out_pragma.m"
          {
#line 796 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[3], parse_tree__parse_tree_out_pragma__Lang_5, ((MR_Box) (parse_tree__parse_tree_out_pragma__InstInfo_15)), parse_tree__parse_tree_out_pragma__ModeList_12, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28);
          }
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36);
          }
#line 794 "parse_tree_out_pragma.m"
        }
#line 793 "parse_tree_out_pragma.m"
        break;
#line 793 "parse_tree_out_pragma.m"
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) (parse_tree__parse_tree_out_pragma__ExportName_10)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19);
    }
#line 776 "parse_tree_out_pragma.m"
  }
#line 773 "parse_tree_out_pragma.m"
}

#line 759 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
#line 759 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1)
#line 759 "parse_tree_out_pragma.m"
{
#line 762 "parse_tree_out_pragma.m"
  {
#line 762 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 762 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__HeadVar__2_2;

#line 762 "parse_tree_out_pragma.m"
#line 762 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__HeadVar__1_1)) {
#line 762 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 762 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 762 "parse_tree_out_pragma.m"
#line 762 "parse_tree_out_pragma.m"
        switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__HeadVar__1_1)) {
#line 762 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 762 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 762 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "refers_to_llds_stack";
#line 762 "parse_tree_out_pragma.m"
            break;
#line 762 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 765 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "needs_call_standard_output_registers";
#line 762 "parse_tree_out_pragma.m"
            break;
#line 762 "parse_tree_out_pragma.m"
        }
#line 762 "parse_tree_out_pragma.m"
        break;
#line 762 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 762 "parse_tree_out_pragma.m"
        {
#line 762 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));

#line 762 "parse_tree_out_pragma.m"
#line 762 "parse_tree_out_pragma.m"
          switch (parse_tree__parse_tree_out_pragma__V_5_5) {
#line 762 "parse_tree_out_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 762 "parse_tree_out_pragma.m"
            case (MR_Integer) 0:
#line 764 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "high_level_backend";
#line 762 "parse_tree_out_pragma.m"
              break;
#line 762 "parse_tree_out_pragma.m"
            case (MR_Integer) 1:
#line 763 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "low_level_backend";
#line 762 "parse_tree_out_pragma.m"
              break;
#line 762 "parse_tree_out_pragma.m"
          }
#line 762 "parse_tree_out_pragma.m"
        }
#line 762 "parse_tree_out_pragma.m"
        break;
#line 762 "parse_tree_out_pragma.m"
    }
#line 762 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__HeadVar__2_2;
#line 762 "parse_tree_out_pragma.m"
  }
#line 759 "parse_tree_out_pragma.m"
}

#line 748 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
#line 748 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_4,
#line 748 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__UnitSelector_5)
#line 748 "parse_tree_out_pragma.m"
{
#line 752 "parse_tree_out_pragma.m"
  {
#line 752 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 752 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_6;

#line 752 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__UnitSelector_5)) == (MR_mktag((MR_Integer) 0))))
#line 755 "parse_tree_out_pragma.m"
      {
#line 756 "parse_tree_out_pragma.m"
        {
#line 756 "parse_tree_out_pragma.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_pragma", (MR_String) "function \140parse_tree.parse_tree_out_pragma.unit_selector_to_string\'/2", (MR_String) "termsel in user-annotated sharing");
        }
#line 755 "parse_tree_out_pragma.m"
      }
#line 752 "parse_tree_out_pragma.m"
    else
#line 752 "parse_tree_out_pragma.m"
      {
#line 752 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnitSelector_5, (MR_Integer) 0)));

#line 753 "parse_tree_out_pragma.m"
        {
#line 753 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__String_6 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeVarSet_4, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__Type_7);
        }
#line 752 "parse_tree_out_pragma.m"
      }
#line 752 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_6;
#line 752 "parse_tree_out_pragma.m"
  }
#line 748 "parse_tree_out_pragma.m"
}

#line 745 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
#line 745 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 745 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 745 "parse_tree_out_pragma.m"
{
#line 745 "parse_tree_out_pragma.m"
  {
#line 745 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 745 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 745 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_String_6;

#line 745 "parse_tree_out_pragma.m"
    {
#line 745 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_String_6 = parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 745 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_String_6));
#line 745 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 745 "parse_tree_out_pragma.m"
  }
#line 745 "parse_tree_out_pragma.m"
}

#line 728 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
#line 728 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 728 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_6,
#line 728 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3)
#line 728 "parse_tree_out_pragma.m"
{
#line 731 "parse_tree_out_pragma.m"
  {
#line 731 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__Str_9;
#line 731 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 731 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__DataA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 0)));
#line 731 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__DataB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 1)));
#line 731 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataA_7, (MR_Integer) 0)));
#line 731 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SelectorA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataA_7, (MR_Integer) 1)));
#line 731 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataB_8, (MR_Integer) 0)));
#line 731 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SelectorB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataB_8, (MR_Integer) 1)));
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__VarStrA_14;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__VarStrB_15;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__SelectorStrA_16;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__SelectorStrB_17;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__StrA_18;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__StrB_19;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_23_23;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_24_24;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_26_26;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_29_29;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_30_30;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_32_32;
#line 731 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_34_34;
#line 731 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UnitStrs_40;
#line 731 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_41_41;
#line 731 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UnitStrs_50;

#line 734 "parse_tree_out_pragma.m"
    {
#line 734 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarStrA_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36, parse_tree__parse_tree_out_pragma__VarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__VarA_10);
    }
#line 735 "parse_tree_out_pragma.m"
    {
#line 735 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarStrB_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36, parse_tree__parse_tree_out_pragma__VarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__VarB_12);
    }
#line 745 "parse_tree_out_pragma.m"
    {
#line 745 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 745 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[0]));
#line 745 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1));
#line 745 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 745 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_6));
#line 745 "parse_tree_out_pragma.m"
    }
#line 745 "parse_tree_out_pragma.m"
    {
#line 745 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UnitStrs_40 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_41_41, parse_tree__parse_tree_out_pragma__SelectorA_11);
    }
#line 746 "parse_tree_out_pragma.m"
    {
#line 746 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__SelectorStrA_16 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__UnitStrs_40);
    }
#line 745 "parse_tree_out_pragma.m"
    {
#line 745 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UnitStrs_50 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_41_41, parse_tree__parse_tree_out_pragma__SelectorB_13);
    }
#line 746 "parse_tree_out_pragma.m"
    {
#line 746 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__SelectorStrB_17 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__UnitStrs_50);
    }
#line 738 "parse_tree_out_pragma.m"
    {
#line 738 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_26_26 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__SelectorStrA_16, (MR_String) "])");
    }
#line 738 "parse_tree_out_pragma.m"
    {
#line 738 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) ", [", parse_tree__parse_tree_out_pragma__V_26_26);
    }
#line 738 "parse_tree_out_pragma.m"
    {
#line 738 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_23_23 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__VarStrA_14, parse_tree__parse_tree_out_pragma__V_24_24);
    }
#line 738 "parse_tree_out_pragma.m"
    {
#line 738 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__StrA_18 = mercury__string__f_43_43_2_f_0((MR_String) "cel(", parse_tree__parse_tree_out_pragma__V_23_23);
    }
#line 739 "parse_tree_out_pragma.m"
    {
#line 739 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_32_32 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__SelectorStrB_17, (MR_String) "])");
    }
#line 739 "parse_tree_out_pragma.m"
    {
#line 739 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ", [", parse_tree__parse_tree_out_pragma__V_32_32);
    }
#line 739 "parse_tree_out_pragma.m"
    {
#line 739 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__VarStrB_15, parse_tree__parse_tree_out_pragma__V_30_30);
    }
#line 739 "parse_tree_out_pragma.m"
    {
#line 739 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__StrB_19 = mercury__string__f_43_43_2_f_0((MR_String) "cel(", parse_tree__parse_tree_out_pragma__V_29_29);
    }
#line 740 "parse_tree_out_pragma.m"
    {
#line 740 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " - ", parse_tree__parse_tree_out_pragma__StrB_19);
    }
#line 740 "parse_tree_out_pragma.m"
    {
#line 740 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Str_9 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__StrA_18, parse_tree__parse_tree_out_pragma__V_34_34);
    }
#line 731 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__Str_9;
#line 731 "parse_tree_out_pragma.m"
  }
#line 728 "parse_tree_out_pragma.m"
}

#line 721 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
#line 721 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 721 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 721 "parse_tree_out_pragma.m"
{
#line 721 "parse_tree_out_pragma.m"
  {
#line 721 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 721 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 721 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv1_Str_9;

#line 721 "parse_tree_out_pragma.m"
    {
#line 721 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv1_Str_9 = parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 721 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv1_Str_9));
#line 721 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 721 "parse_tree_out_pragma.m"
  }
#line 721 "parse_tree_out_pragma.m"
}

#line 712 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
#line 712 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 712 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 712 "parse_tree_out_pragma.m"
{
#line 712 "parse_tree_out_pragma.m"
  {
#line 712 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 712 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 712 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4;

#line 712 "parse_tree_out_pragma.m"
    {
#line 712 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 712 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4));
#line 712 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 712 "parse_tree_out_pragma.m"
  }
#line 712 "parse_tree_out_pragma.m"
}

#line 697 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
#line 697 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 697 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Sharing_6,
#line 697 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_7)
#line 697 "parse_tree_out_pragma.m"
{
#line 702 "parse_tree_out_pragma.m"
  {
#line 702 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 702 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_8;

#line 702 "parse_tree_out_pragma.m"
#line 702 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Sharing_6)) {
#line 702 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 702 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 703 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__String_8 = (MR_String) "no_sharing";
#line 702 "parse_tree_out_pragma.m"
        break;
#line 702 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 708 "parse_tree_out_pragma.m"
        {
#line 708 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__SharingPairs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Sharing_6, (MR_Integer) 0)));
#line 708 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_12;
#line 708 "parse_tree_out_pragma.m"
          MR_String parse_tree__parse_tree_out_pragma__MaybeTypesStr_15;
#line 708 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__SharingPairStrs_16;
#line 708 "parse_tree_out_pragma.m"
          MR_String parse_tree__parse_tree_out_pragma__SharingPairListStr_17;
#line 708 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_25_25;
#line 708 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_27_27;
#line 708 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_29_29;
#line 708 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_30_30;
#line 708 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_32_32;

#line 716 "parse_tree_out_pragma.m"
          if ((parse_tree__parse_tree_out_pragma__MaybeTypes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 717 "parse_tree_out_pragma.m"
            {
#line 718 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MaybeTypesStr_15 = (MR_String) "no";
#line 719 "parse_tree_out_pragma.m"
              {
#line 719 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__TypeVarSet_12 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
              }
#line 717 "parse_tree_out_pragma.m"
            }
#line 716 "parse_tree_out_pragma.m"
          else
#line 710 "parse_tree_out_pragma.m"
            {
#line 710 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Types_11;
#line 710 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TypeStrs_13;
#line 710 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__TypeListStr_14;
#line 710 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTypes_7, (MR_Integer) 0)));
#line 710 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__V_19_19;
#line 710 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_23_23;

#line 710 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_18_18, (MR_Integer) 0)));
#line 710 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_18_18, (MR_Integer) 1)));
#line 712 "parse_tree_out_pragma.m"
              {
#line 712 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 712 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[2]));
#line 712 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1));
#line 712 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 712 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_12));
#line 712 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 4) = ((MR_Box) ((MR_Integer) 0));
#line 712 "parse_tree_out_pragma.m"
              }
#line 711 "parse_tree_out_pragma.m"
              {
#line 711 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__TypeStrs_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_19_19, parse_tree__parse_tree_out_pragma__Types_11);
              }
#line 714 "parse_tree_out_pragma.m"
              {
#line 714 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__TypeListStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__TypeStrs_13);
              }
#line 715 "parse_tree_out_pragma.m"
              {
#line 715 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_23_23 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeListStr_14, (MR_String) ")");
              }
#line 715 "parse_tree_out_pragma.m"
              {
#line 715 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__MaybeTypesStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "yes(", parse_tree__parse_tree_out_pragma__V_23_23);
              }
#line 710 "parse_tree_out_pragma.m"
            }
#line 721 "parse_tree_out_pragma.m"
          {
#line 721 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 721 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[3]));
#line 721 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2));
#line 721 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 721 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarSet_5));
#line 721 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 4) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_12));
#line 721 "parse_tree_out_pragma.m"
          }
#line 721 "parse_tree_out_pragma.m"
          {
#line 721 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__SharingPairStrs_16 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_25_25, parse_tree__parse_tree_out_pragma__SharingPairs_10);
          }
#line 723 "parse_tree_out_pragma.m"
          {
#line 723 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__SharingPairListStr_17 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__SharingPairStrs_16);
          }
#line 725 "parse_tree_out_pragma.m"
          {
#line 725 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_32_32, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__SharingPairListStr_17));
#line 725 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[26])));
#line 725 "parse_tree_out_pragma.m"
          }
#line 725 "parse_tree_out_pragma.m"
          {
#line 725 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_30_30, 0) = ((MR_Box) ((MR_String) ", ["));
#line 725 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_30_30, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_32_32));
#line 725 "parse_tree_out_pragma.m"
          }
#line 725 "parse_tree_out_pragma.m"
          {
#line 725 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_29_29, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__MaybeTypesStr_15));
#line 725 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_29_29, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_30_30));
#line 725 "parse_tree_out_pragma.m"
          }
#line 725 "parse_tree_out_pragma.m"
          {
#line 725 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, 0) = ((MR_Box) ((MR_String) "sharing("));
#line 725 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_29_29));
#line 725 "parse_tree_out_pragma.m"
          }
#line 724 "parse_tree_out_pragma.m"
          {
#line 724 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__String_8 = mercury__string__append_list_1_f_0(parse_tree__parse_tree_out_pragma__V_27_27);
          }
#line 708 "parse_tree_out_pragma.m"
        }
#line 702 "parse_tree_out_pragma.m"
        break;
#line 702 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 706 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__String_8 = (MR_String) "unknown_sharing";
#line 702 "parse_tree_out_pragma.m"
        break;
#line 702 "parse_tree_out_pragma.m"
    }
#line 702 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_8;
#line 702 "parse_tree_out_pragma.m"
  }
#line 697 "parse_tree_out_pragma.m"
}

#line 695 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
#line 695 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 695 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 695 "parse_tree_out_pragma.m"
{
#line 695 "parse_tree_out_pragma.m"
  {
#line 695 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 695 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 695 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2;

#line 695 "parse_tree_out_pragma.m"
    {
#line 695 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2 = parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 695 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2));
#line 695 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 695 "parse_tree_out_pragma.m"
  }
#line 695 "parse_tree_out_pragma.m"
}

#line 523 "parse_tree_out_pragma.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
#line 523 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Attrs_4,
#line 523 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5)
#line 523 "parse_tree_out_pragma.m"
{
#line 526 "parse_tree_out_pragma.m"
  {
#line 526 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__StringList_6;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMercury_7;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ThreadSafe_8;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TabledForIO_9;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Purity_10;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Terminates_11;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UserSharing_12;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Exceptions_13;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayModifyTrail_15;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__BoxPolicy_17;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AffectsLiveness_18;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AllocatesMemory_19;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__RegistersRoots_20;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ExtraAttributes_22;
#line 526 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23;
#line 526 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__ThreadSafeStr_24;
#line 526 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__TabledForIOStr_25;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PurityStrList_26;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TerminatesStrList_27;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UserSharingStrList_31;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ExceptionsStrList_32;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_85_85;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_86_86;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_87_87;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_88_88;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_89_89;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_90_90;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_91_91;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_92_92;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_93_93;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_94_94;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_95_95;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_96_96;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_97_97;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_98_98;
#line 526 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_99_99;

#line 527 "parse_tree_out_pragma.m"
    {
#line 527 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayCallMercury_7 = parse_tree__prog_data__get_may_call_mercury_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 528 "parse_tree_out_pragma.m"
    {
#line 528 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__ThreadSafe_8 = parse_tree__prog_data__get_thread_safe_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 529 "parse_tree_out_pragma.m"
    {
#line 529 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__TabledForIO_9 = parse_tree__prog_data__get_tabled_for_io_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 530 "parse_tree_out_pragma.m"
    {
#line 530 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Purity_10 = parse_tree__prog_data__get_purity_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 531 "parse_tree_out_pragma.m"
    {
#line 531 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Terminates_11 = parse_tree__prog_data__get_terminates_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 532 "parse_tree_out_pragma.m"
    {
#line 532 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UserSharing_12 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 533 "parse_tree_out_pragma.m"
    {
#line 533 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Exceptions_13 = parse_tree__prog_data__get_may_throw_exception_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 534 "parse_tree_out_pragma.m"
    {
#line 534 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14 = parse_tree__prog_data__get_ordinary_despite_detism_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 535 "parse_tree_out_pragma.m"
    {
#line 535 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayModifyTrail_15 = parse_tree__prog_data__get_may_modify_trail_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 536 "parse_tree_out_pragma.m"
    {
#line 536 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16 = parse_tree__prog_data__get_may_call_mm_tabled_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 537 "parse_tree_out_pragma.m"
    {
#line 537 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__BoxPolicy_17 = parse_tree__prog_data__get_box_policy_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 538 "parse_tree_out_pragma.m"
    {
#line 538 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__AffectsLiveness_18 = parse_tree__prog_data__get_affects_liveness_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 539 "parse_tree_out_pragma.m"
    {
#line 539 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__AllocatesMemory_19 = parse_tree__prog_data__get_allocates_memory_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 540 "parse_tree_out_pragma.m"
    {
#line 540 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__RegistersRoots_20 = parse_tree__prog_data__get_registers_roots_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 541 "parse_tree_out_pragma.m"
    {
#line 541 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21 = parse_tree__prog_data__get_may_duplicate_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 542 "parse_tree_out_pragma.m"
    {
#line 542 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__ExtraAttributes_22 = parse_tree__prog_data__get_extra_attributes_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 546 "parse_tree_out_pragma.m"
#line 546 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MayCallMercury_7) {
#line 546 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 546 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 545 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23 = (MR_String) "may_call_mercury";
#line 546 "parse_tree_out_pragma.m"
        break;
#line 546 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 548 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23 = (MR_String) "will_not_call_mercury";
#line 546 "parse_tree_out_pragma.m"
        break;
#line 546 "parse_tree_out_pragma.m"
    }
#line 553 "parse_tree_out_pragma.m"
#line 553 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__ThreadSafe_8) {
#line 553 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 553 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 558 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "maybe_thread_safe";
#line 553 "parse_tree_out_pragma.m"
        break;
#line 553 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 552 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "not_thread_safe";
#line 553 "parse_tree_out_pragma.m"
        break;
#line 553 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 555 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "thread_safe";
#line 553 "parse_tree_out_pragma.m"
        break;
#line 553 "parse_tree_out_pragma.m"
    }
#line 563 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TabledForIOStr_25 = ((&parse_tree__parse_tree_out_pragma_vector_common_7[0 + parse_tree__parse_tree_out_pragma__TabledForIO_9]))->parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
#line 576 "parse_tree_out_pragma.m"
#line 576 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Purity_10) {
#line 576 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 576 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 581 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 576 "parse_tree_out_pragma.m"
        break;
#line 576 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 574 "parse_tree_out_pragma.m"
        {
#line 575 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[5]);
#line 574 "parse_tree_out_pragma.m"
        }
#line 576 "parse_tree_out_pragma.m"
        break;
#line 576 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 577 "parse_tree_out_pragma.m"
        {
#line 578 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[6]);
#line 577 "parse_tree_out_pragma.m"
        }
#line 576 "parse_tree_out_pragma.m"
        break;
#line 576 "parse_tree_out_pragma.m"
    }
#line 586 "parse_tree_out_pragma.m"
#line 586 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Terminates_11) {
#line 586 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 586 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 591 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 586 "parse_tree_out_pragma.m"
        break;
#line 586 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 587 "parse_tree_out_pragma.m"
        {
#line 588 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[7]);
#line 587 "parse_tree_out_pragma.m"
        }
#line 586 "parse_tree_out_pragma.m"
        break;
#line 586 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 584 "parse_tree_out_pragma.m"
        {
#line 585 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[8]);
#line 584 "parse_tree_out_pragma.m"
        }
#line 586 "parse_tree_out_pragma.m"
        break;
#line 586 "parse_tree_out_pragma.m"
    }
#line 597 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__UserSharing_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UserSharingStrList_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "parse_tree_out_pragma.m"
    else
#line 594 "parse_tree_out_pragma.m"
      {
#line 594 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Sharing_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharing_12, (MR_Integer) 0)));
#line 594 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharing_12, (MR_Integer) 1)));
#line 594 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__String_30;

#line 595 "parse_tree_out_pragma.m"
        {
#line 595 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__String_30 = parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(parse_tree__parse_tree_out_pragma__VarSet_5, parse_tree__parse_tree_out_pragma__Sharing_28, parse_tree__parse_tree_out_pragma__MaybeTypes_29);
        }
#line 596 "parse_tree_out_pragma.m"
        {
#line 596 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__UserSharingStrList_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharingStrList_31, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__String_30));
#line 596 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharingStrList_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "parse_tree_out_pragma.m"
        }
#line 594 "parse_tree_out_pragma.m"
      }
#line 604 "parse_tree_out_pragma.m"
#line 604 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Exceptions_13) {
#line 604 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 604 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 606 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ExceptionsStrList_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "parse_tree_out_pragma.m"
        break;
#line 604 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 602 "parse_tree_out_pragma.m"
        {
#line 603 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__ExceptionsStrList_32 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[9]);
#line 602 "parse_tree_out_pragma.m"
        }
#line 604 "parse_tree_out_pragma.m"
        break;
#line 604 "parse_tree_out_pragma.m"
    }
#line 611 "parse_tree_out_pragma.m"
#line 611 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14) {
#line 611 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 611 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 613 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 611 "parse_tree_out_pragma.m"
        break;
#line 611 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 609 "parse_tree_out_pragma.m"
        {
#line 610 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[10]);
#line 609 "parse_tree_out_pragma.m"
        }
#line 611 "parse_tree_out_pragma.m"
        break;
#line 611 "parse_tree_out_pragma.m"
    }
#line 618 "parse_tree_out_pragma.m"
#line 618 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MayModifyTrail_15) {
#line 618 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 618 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 616 "parse_tree_out_pragma.m"
        {
#line 617 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[11]);
#line 616 "parse_tree_out_pragma.m"
        }
#line 618 "parse_tree_out_pragma.m"
        break;
#line 618 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 619 "parse_tree_out_pragma.m"
        {
#line 620 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[12]);
#line 619 "parse_tree_out_pragma.m"
        }
#line 618 "parse_tree_out_pragma.m"
        break;
#line 618 "parse_tree_out_pragma.m"
    }
#line 625 "parse_tree_out_pragma.m"
#line 625 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16) {
#line 625 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 625 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 630 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 625 "parse_tree_out_pragma.m"
        break;
#line 625 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 623 "parse_tree_out_pragma.m"
        {
#line 624 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[13]);
#line 623 "parse_tree_out_pragma.m"
        }
#line 625 "parse_tree_out_pragma.m"
        break;
#line 625 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 626 "parse_tree_out_pragma.m"
        {
#line 627 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[14]);
#line 626 "parse_tree_out_pragma.m"
        }
#line 625 "parse_tree_out_pragma.m"
        break;
#line 625 "parse_tree_out_pragma.m"
    }
#line 635 "parse_tree_out_pragma.m"
#line 635 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__BoxPolicy_17) {
#line 635 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 635 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 636 "parse_tree_out_pragma.m"
        {
#line 637 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[15]);
#line 636 "parse_tree_out_pragma.m"
        }
#line 635 "parse_tree_out_pragma.m"
        break;
#line 635 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 634 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "parse_tree_out_pragma.m"
        break;
#line 635 "parse_tree_out_pragma.m"
    }
#line 642 "parse_tree_out_pragma.m"
#line 642 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__AffectsLiveness_18) {
#line 642 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 642 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 640 "parse_tree_out_pragma.m"
        {
#line 641 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[16]);
#line 640 "parse_tree_out_pragma.m"
        }
#line 642 "parse_tree_out_pragma.m"
        break;
#line 642 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 647 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "parse_tree_out_pragma.m"
        break;
#line 642 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 643 "parse_tree_out_pragma.m"
        {
#line 644 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[17]);
#line 643 "parse_tree_out_pragma.m"
        }
#line 642 "parse_tree_out_pragma.m"
        break;
#line 642 "parse_tree_out_pragma.m"
    }
#line 652 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[0 + parse_tree__parse_tree_out_pragma__AllocatesMemory_19]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
#line 665 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[4 + parse_tree__parse_tree_out_pragma__RegistersRoots_20]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
#line 684 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 686 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 684 "parse_tree_out_pragma.m"
    else
#line 676 "parse_tree_out_pragma.m"
      {
#line 676 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__MayDuplicate_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21, (MR_Integer) 0)));

#line 680 "parse_tree_out_pragma.m"
#line 680 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__MayDuplicate_40) {
#line 680 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 680 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 678 "parse_tree_out_pragma.m"
            {
#line 679 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[24]);
#line 678 "parse_tree_out_pragma.m"
            }
#line 680 "parse_tree_out_pragma.m"
            break;
#line 680 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 681 "parse_tree_out_pragma.m"
            {
#line 682 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[25]);
#line 681 "parse_tree_out_pragma.m"
            }
#line 680 "parse_tree_out_pragma.m"
            break;
#line 680 "parse_tree_out_pragma.m"
        }
#line 676 "parse_tree_out_pragma.m"
      }
#line 5293 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 688 "parse_tree_out_pragma.m"
    {
#line 688 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_87_87, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TabledForIOStr_25));
#line 688 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_87_87, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__PurityStrList_26));
#line 688 "parse_tree_out_pragma.m"
    }
#line 688 "parse_tree_out_pragma.m"
    {
#line 688 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_86_86, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__ThreadSafeStr_24));
#line 688 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_86_86, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_87_87));
#line 688 "parse_tree_out_pragma.m"
    }
#line 688 "parse_tree_out_pragma.m"
    {
#line 688 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_85_85, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23));
#line 688 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_85_85, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_86_86));
#line 688 "parse_tree_out_pragma.m"
    }
#line 695 "parse_tree_out_pragma.m"
    {
#line 695 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_99_99 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_extra_attribute_0, parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[3], parse_tree__parse_tree_out_pragma__ExtraAttributes_22);
    }
#line 694 "parse_tree_out_pragma.m"
    {
#line 694 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_98_98 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41, parse_tree__parse_tree_out_pragma__V_99_99);
    }
#line 694 "parse_tree_out_pragma.m"
    {
#line 694 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39, parse_tree__parse_tree_out_pragma__V_98_98);
    }
#line 693 "parse_tree_out_pragma.m"
    {
#line 693 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_96_96 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38, parse_tree__parse_tree_out_pragma__V_97_97);
    }
#line 693 "parse_tree_out_pragma.m"
    {
#line 693 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_95_95 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37, parse_tree__parse_tree_out_pragma__V_96_96);
    }
#line 692 "parse_tree_out_pragma.m"
    {
#line 692 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_94_94 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36, parse_tree__parse_tree_out_pragma__V_95_95);
    }
#line 692 "parse_tree_out_pragma.m"
    {
#line 692 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_93_93 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35, parse_tree__parse_tree_out_pragma__V_94_94);
    }
#line 691 "parse_tree_out_pragma.m"
    {
#line 691 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34, parse_tree__parse_tree_out_pragma__V_93_93);
    }
#line 691 "parse_tree_out_pragma.m"
    {
#line 691 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_91_91 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33, parse_tree__parse_tree_out_pragma__V_92_92);
    }
#line 690 "parse_tree_out_pragma.m"
    {
#line 690 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_90_90 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__ExceptionsStrList_32, parse_tree__parse_tree_out_pragma__V_91_91);
    }
#line 689 "parse_tree_out_pragma.m"
    {
#line 689 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_89_89 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__UserSharingStrList_31, parse_tree__parse_tree_out_pragma__V_90_90);
    }
#line 689 "parse_tree_out_pragma.m"
    {
#line 689 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_88_88 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__TerminatesStrList_27, parse_tree__parse_tree_out_pragma__V_89_89);
    }
#line 689 "parse_tree_out_pragma.m"
    {
#line 689 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__StringList_6 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__V_85_85, parse_tree__parse_tree_out_pragma__V_88_88);
    }
#line 526 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__StringList_6;
#line 526 "parse_tree_out_pragma.m"
  }
#line 523 "parse_tree_out_pragma.m"
}

#line 374 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2(
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 374 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 374 "parse_tree_out_pragma.m"
{
#line 374 "parse_tree_out_pragma.m"
  {
#line 374 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 374 "parse_tree_out_pragma.m"
    {
#line 374 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 374 "parse_tree_out_pragma.m"
  }
#line 374 "parse_tree_out_pragma.m"
}

#line 515 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1(
#line 515 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 515 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 515 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 515 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 515 "parse_tree_out_pragma.m"
{
#line 515 "parse_tree_out_pragma.m"
  {
#line 515 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 515 "parse_tree_out_pragma.m"
    {
#line 515 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_info__add_string_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_String) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 515 "parse_tree_out_pragma.m"
  }
#line 515 "parse_tree_out_pragma.m"
}

#line 440 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0(
#line 440 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50,
#line 440 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 440 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_6,
#line 440 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23,
#line 440 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24)
#line 440 "parse_tree_out_pragma.m"
{
#line 443 "parse_tree_out_pragma.m"
  {
#line 443 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_88;
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Attributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 0)));
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 1)));
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 2)));
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Vars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 3)));
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ProgVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 4)));
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 5)));
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PragmaCode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 6)));
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ForeignLang_15;
#line 443 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__C_Code_21;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58;
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_59_59;
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_61_61;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74;
#line 443 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75;
#line 443 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_82_82;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 481 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_22_22;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_16)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ":- pragma foreign_proc(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26);
    }
#line 447 "parse_tree_out_pragma.m"
    {
#line 447 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__ForeignLang_15 = parse_tree__prog_data__get_foreign_language_1_f_0(parse_tree__parse_tree_out_pragma__Attributes_8);
    }
#line 448 "parse_tree_out_pragma.m"
    {
#line 448 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__ForeignLang_15, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
    }
#line 450 "parse_tree_out_pragma.m"
    {
#line 450 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__PredName_9, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30);
    }
#line 5574 "parse_tree.parse_tree_out_pragma.c"
#line 5575 "parse_tree.parse_tree_out_pragma.c"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
#line 5577 "parse_tree.parse_tree_out_pragma.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 5579 "parse_tree.parse_tree_out_pragma.c"
      case (MR_Integer) 1:
#line 5581 "parse_tree.parse_tree_out_pragma.c"
        {
#line 5583 "parse_tree.parse_tree_out_pragma.c"
          MR_Word parse_tree__parse_tree_out_pragma__Vars_16;
#line 5585 "parse_tree.parse_tree_out_pragma.c"
          MR_Word parse_tree__parse_tree_out_pragma__ResultVars_17;
#line 5587 "parse_tree.parse_tree_out_pragma.c"
          MR_Word parse_tree__parse_tree_out_pragma__ResultVar_18;
#line 5589 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36;
#line 5591 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
#line 5593 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39;
#line 457 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv2_ResultVar_18;
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 457 "parse_tree_out_pragma.m"
          {
#line 457 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__parse_tree_out_pragma__Vars0_11, &parse_tree__parse_tree_out_pragma__Vars_16, &parse_tree__parse_tree_out_pragma__conv2_ResultVar_18);
          }
#line 457 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__ResultVar_18 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv2_ResultVar_18);
#line 458 "parse_tree_out_pragma.m"
          {
#line 458 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__ResultVars_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__ResultVars_17, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__ResultVar_18));
#line 458 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__ResultVars_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 458 "parse_tree_out_pragma.m"
          }
#line 462 "parse_tree_out_pragma.m"
          if ((parse_tree__parse_tree_out_pragma__Vars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
#line 462 "parse_tree_out_pragma.m"
          else
#line 463 "parse_tree_out_pragma.m"
            {
#line 463 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 463 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34;
#line 32 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
              }
#line 465 "parse_tree_out_pragma.m"
              {
#line 465 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Vars_16, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34);
              }
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36);
              }
#line 463 "parse_tree_out_pragma.m"
            }
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) " = (")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
          }
#line 474 "parse_tree_out_pragma.m"
          {
#line 474 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__ResultVars_17, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39);
          }
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
          }
#line 5674 "parse_tree.parse_tree_out_pragma.c"
        }
#line 5676 "parse_tree.parse_tree_out_pragma.c"
        break;
#line 5678 "parse_tree.parse_tree_out_pragma.c"
      case (MR_Integer) 0:
#line 462 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__Vars0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
#line 462 "parse_tree_out_pragma.m"
        else
#line 463 "parse_tree_out_pragma.m"
          {
#line 463 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_91;
#line 463 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_92;
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_91);
            }
#line 465 "parse_tree_out_pragma.m"
            {
#line 465 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Vars0_11, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_91, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_92);
            }
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_92, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
            }
#line 463 "parse_tree_out_pragma.m"
          }
#line 5716 "parse_tree.parse_tree_out_pragma.c"
        break;
#line 5718 "parse_tree.parse_tree_out_pragma.c"
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "[")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58);
    }
#line 514 "parse_tree_out_pragma.m"
    {
#line 514 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_59_59 = parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(parse_tree__parse_tree_out_pragma__Attributes_8, parse_tree__parse_tree_out_pragma__ProgVarSet_12);
    }
#line 515 "parse_tree_out_pragma.m"
    {
#line 515 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 515 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[1]));
#line 515 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1));
#line 515 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 515 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50));
#line 515 "parse_tree_out_pragma.m"
    }
#line 58 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
    {
#line 58 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_59_59)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_61_61)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46);
    }
#line 481 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__C_Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PragmaCode_14, (MR_Integer) 0)));
#line 481 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PragmaCode_14, (MR_Integer) 1)));
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "\"")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74);
    }
#line 374 "parse_tree_out_pragma.m"
    {
#line 374 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 374 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0]));
#line 374 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2));
#line 374 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 374 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50));
#line 374 "parse_tree_out_pragma.m"
    }
#line 374 "parse_tree_out_pragma.m"
    {
#line 374 "parse_tree_out_pragma.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_88);
    }
#line 374 "parse_tree_out_pragma.m"
    {
#line 374 "parse_tree_out_pragma.m"
      mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_88, parse_tree__parse_tree_out_pragma__V_82_82, parse_tree__parse_tree_out_pragma__C_Code_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "\"")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_16(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24);
    }
#line 443 "parse_tree_out_pragma.m"
  }
#line 440 "parse_tree_out_pragma.m"
}

#line 376 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(
#line 376 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15,
#line 376 "parse_tree_out_pragma.m"
  MR_Char parse_tree__parse_tree_out_pragma__Char_4,
#line 376 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 376 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8)
#line 376 "parse_tree_out_pragma.m"
{
#line 383 "parse_tree_out_pragma.m"
  {
#line 383 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 383 "parse_tree_out_pragma.m"
    MR_Char parse_tree__parse_tree_out_pragma__QuoteChar_6;

#line 397 "parse_tree_out_pragma.m"
#line 397 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Char_4) {
#line 397 "parse_tree_out_pragma.m"
      default:
#line 397 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__succeeded = MR_FALSE;
#line 397 "parse_tree_out_pragma.m"
        break;
#line 397 "parse_tree_out_pragma.m"
      case (MR_Char) 8:
#line 400 "parse_tree_out_pragma.m"
        {
#line 400 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 98;
#line 400 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 400 "parse_tree_out_pragma.m"
        }
#line 397 "parse_tree_out_pragma.m"
        break;
#line 397 "parse_tree_out_pragma.m"
      case (MR_Char) 34:
#line 398 "parse_tree_out_pragma.m"
        {
#line 398 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 34;
#line 398 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 398 "parse_tree_out_pragma.m"
        }
#line 397 "parse_tree_out_pragma.m"
        break;
#line 397 "parse_tree_out_pragma.m"
      case (MR_Char) 39:
#line 397 "parse_tree_out_pragma.m"
        {
#line 397 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 39;
#line 397 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 397 "parse_tree_out_pragma.m"
        }
#line 397 "parse_tree_out_pragma.m"
        break;
#line 397 "parse_tree_out_pragma.m"
      case (MR_Char) 92:
#line 399 "parse_tree_out_pragma.m"
        {
#line 399 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 92;
#line 399 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 399 "parse_tree_out_pragma.m"
        }
#line 397 "parse_tree_out_pragma.m"
        break;
#line 397 "parse_tree_out_pragma.m"
    }
#line 383 "parse_tree_out_pragma.m"
    if (parse_tree__parse_tree_out_pragma__succeeded)
#line 381 "parse_tree_out_pragma.m"
      {
#line 381 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10;
#line 36 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 36 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 36 "parse_tree.parse_tree_out_info.int"
        {
#line 36 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) ((MR_Char) 92)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10);
        }
#line 36 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 36 "parse_tree.parse_tree_out_info.int"
        {
#line 36 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) (parse_tree__parse_tree_out_pragma__QuoteChar_6)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
        }
#line 381 "parse_tree_out_pragma.m"
      }
#line 383 "parse_tree_out_pragma.m"
    else
#line 385 "parse_tree_out_pragma.m"
      {
#line 408 "parse_tree_out_pragma.m"
#line 408 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__Char_4) {
#line 408 "parse_tree_out_pragma.m"
          default:
#line 408 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__succeeded = MR_FALSE;
#line 408 "parse_tree_out_pragma.m"
            break;
#line 408 "parse_tree_out_pragma.m"
          case (MR_Char) 9:
#line 411 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 408 "parse_tree_out_pragma.m"
            break;
#line 408 "parse_tree_out_pragma.m"
          case (MR_Char) 10:
#line 410 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 408 "parse_tree_out_pragma.m"
            break;
#line 408 "parse_tree_out_pragma.m"
        }
#line 408 "parse_tree_out_pragma.m"
        if (!(parse_tree__parse_tree_out_pragma__succeeded))
#line 408 "parse_tree_out_pragma.m"
          {
#line 409 "parse_tree_out_pragma.m"
            {
#line 409 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__succeeded = mercury__term_io__is_mercury_punctuation_char_1_p_0(parse_tree__parse_tree_out_pragma__Char_4);
            }
#line 408 "parse_tree_out_pragma.m"
            if (!(parse_tree__parse_tree_out_pragma__succeeded))
#line 408 "parse_tree_out_pragma.m"
              {
#line 408 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__succeeded = mercury__char__is_alnum_1_p_0(parse_tree__parse_tree_out_pragma__Char_4);
              }
#line 408 "parse_tree_out_pragma.m"
          }
#line 385 "parse_tree_out_pragma.m"
        if (parse_tree__parse_tree_out_pragma__succeeded)
#line 36 "parse_tree.parse_tree_out_info.int"
          {
#line 36 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));

#line 36 "parse_tree.parse_tree_out_info.int"
            {
#line 36 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) (parse_tree__parse_tree_out_pragma__Char_4)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
            }
#line 36 "parse_tree.parse_tree_out_info.int"
          }
#line 385 "parse_tree_out_pragma.m"
        else
#line 386 "parse_tree_out_pragma.m"
          {
#line 386 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_13_13;
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 386 "parse_tree_out_pragma.m"
            {
#line 386 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_13_13 = mercury__term_io__mercury_escape_char_1_f_0(parse_tree__parse_tree_out_pragma__Char_4);
            }
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_13_13)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
            }
#line 386 "parse_tree_out_pragma.m"
          }
#line 385 "parse_tree_out_pragma.m"
      }
#line 383 "parse_tree_out_pragma.m"
  }
#line 376 "parse_tree_out_pragma.m"
}

#line 374 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1(
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 374 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 374 "parse_tree_out_pragma.m"
{
#line 374 "parse_tree_out_pragma.m"
  {
#line 374 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 374 "parse_tree_out_pragma.m"
    {
#line 374 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 374 "parse_tree_out_pragma.m"
  }
#line 374 "parse_tree_out_pragma.m"
}

#line 331 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(
#line 331 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FCInfo_4)
#line 331 "parse_tree_out_pragma.m"
{
#line 334 "parse_tree_out_pragma.m"
  {
#line 334 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 334 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18;
#line 334 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FCInfo_4, (MR_Integer) 0)));
#line 334 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FCInfo_4, (MR_Integer) 1)));
#line 337 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_12_12;

#line 336 "parse_tree_out_pragma.m"
    {
#line 336 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_code(");
    }
#line 6074 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 337 "parse_tree_out_pragma.m"
    {
#line 337 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, parse_tree__parse_tree_out_pragma__Lang_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 338 "parse_tree_out_pragma.m"
    {
#line 338 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 347 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_7)) == (MR_mktag((MR_Integer) 1))))
#line 350 "parse_tree_out_pragma.m"
      {
#line 350 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_7, (MR_Integer) 0)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_11_26;
#line 46 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 46 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_12_27;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_IO_15_15;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_11_26);
        }
#line 46 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 12)));
#line 46 "parse_tree.parse_tree_out_info.int"
        {
#line 46 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_24)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_12_27);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_IO_15_15);
        }
#line 350 "parse_tree_out_pragma.m"
      }
#line 347 "parse_tree_out_pragma.m"
    else
#line 347 "parse_tree_out_pragma.m"
      {
#line 347 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_50;
#line 347 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Code_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_7, (MR_Integer) 0)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_9_36;
#line 374 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv9_STATE_VARIABLE_U_10_37;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_IO_15_15;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_9_36);
        }
#line 374 "parse_tree_out_pragma.m"
        {
#line 374 "parse_tree_out_pragma.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_50);
        }
#line 374 "parse_tree_out_pragma.m"
        {
#line 374 "parse_tree_out_pragma.m"
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_50, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[2], parse_tree__parse_tree_out_pragma__Code_23, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv9_STATE_VARIABLE_U_10_37);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_IO_15_15);
        }
#line 347 "parse_tree_out_pragma.m"
      }
#line 340 "parse_tree_out_pragma.m"
    {
#line 340 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 334 "parse_tree_out_pragma.m"
  }
#line 331 "parse_tree_out_pragma.m"
}

#line 94 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0(
#line 94 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_S_25,
#line 94 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_T_26,
#line 94 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Verbose_5,
#line 94 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6)
#line 94 "parse_tree_out_pragma.m"
{
#line 1413 "parse_tree_out_pragma.m"
  {
#line 1413 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1413 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1411 "parse_tree_out_pragma.m"
      {
#line 1412 "parse_tree_out_pragma.m"
        {
#line 1412 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1411 "parse_tree_out_pragma.m"
      }
#line 1413 "parse_tree_out_pragma.m"
    else
#line 1413 "parse_tree_out_pragma.m"
      {
#line 1413 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6, (MR_Integer) 0)));

#line 1413 "parse_tree_out_pragma.m"
        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__V_27_27)) == (MR_mktag((MR_Integer) 1))))
#line 1417 "parse_tree_out_pragma.m"
          {
#line 1417 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__Error_9 = (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, (MR_Integer) 0));

#line 1418 "parse_tree_out_pragma.m"
            {
#line 1418 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "can_loop");
            }
#line 1424 "parse_tree_out_pragma.m"
#line 1424 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Verbose_5) {
#line 1424 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1424 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1425 "parse_tree_out_pragma.m"
                {
#line 1425 "parse_tree_out_pragma.m"
                }
#line 1424 "parse_tree_out_pragma.m"
                break;
#line 1424 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1420 "parse_tree_out_pragma.m"
                {
#line 1421 "parse_tree_out_pragma.m"
                  {
#line 1421 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 1422 "parse_tree_out_pragma.m"
                  {
#line 1422 "parse_tree_out_pragma.m"
                    mercury__io__write_3_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_26, parse_tree__parse_tree_out_pragma__Error_9);
                  }
#line 1423 "parse_tree_out_pragma.m"
                  {
#line 1423 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 1420 "parse_tree_out_pragma.m"
                }
#line 1424 "parse_tree_out_pragma.m"
                break;
#line 1424 "parse_tree_out_pragma.m"
            }
#line 1417 "parse_tree_out_pragma.m"
          }
#line 1413 "parse_tree_out_pragma.m"
        else
#line 1414 "parse_tree_out_pragma.m"
          {
#line 1415 "parse_tree_out_pragma.m"
            {
#line 1415 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "cannot_loop");
            }
#line 1414 "parse_tree_out_pragma.m"
          }
#line 1413 "parse_tree_out_pragma.m"
      }
#line 1413 "parse_tree_out_pragma.m"
  }
#line 94 "parse_tree_out_pragma.m"
}

#line 89 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(
#line 89 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_T_32,
#line 89 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Verbose_5,
#line 89 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6)
#line 89 "parse_tree_out_pragma.m"
{
#line 1360 "parse_tree_out_pragma.m"
  {
#line 1360 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1360 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1358 "parse_tree_out_pragma.m"
      {
#line 1359 "parse_tree_out_pragma.m"
        {
#line 1359 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1358 "parse_tree_out_pragma.m"
      }
#line 1360 "parse_tree_out_pragma.m"
    else
#line 1360 "parse_tree_out_pragma.m"
      {
#line 1360 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6, (MR_Integer) 0)));

#line 1360 "parse_tree_out_pragma.m"
        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__V_33_33)) == (MR_mktag((MR_Integer) 0))))
#line 1372 "parse_tree_out_pragma.m"
          {
#line 1372 "parse_tree_out_pragma.m"
            MR_Integer parse_tree__parse_tree_out_pragma__Const_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 0)));
#line 1372 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 1)));

#line 1373 "parse_tree_out_pragma.m"
            {
#line 1373 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "finite(");
            }
#line 1374 "parse_tree_out_pragma.m"
            {
#line 1374 "parse_tree_out_pragma.m"
              mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Const_9);
            }
#line 1375 "parse_tree_out_pragma.m"
            {
#line 1375 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1382 "parse_tree_out_pragma.m"
            if ((parse_tree__parse_tree_out_pragma__UsedArgs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1382 "parse_tree_out_pragma.m"
              {
#line 1383 "parse_tree_out_pragma.m"
                {
#line 1383 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "[]");
                }
#line 1382 "parse_tree_out_pragma.m"
              }
#line 1382 "parse_tree_out_pragma.m"
            else
#line 1384 "parse_tree_out_pragma.m"
              {
#line 1384 "parse_tree_out_pragma.m"
                MR_Word parse_tree__parse_tree_out_pragma__UsedArg_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UsedArgs_10, (MR_Integer) 0)));
#line 1384 "parse_tree_out_pragma.m"
                MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UsedArgs_10, (MR_Integer) 1)));

#line 1385 "parse_tree_out_pragma.m"
                {
#line 1385 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "[");
                }
#line 1402 "parse_tree_out_pragma.m"
#line 1402 "parse_tree_out_pragma.m"
                switch (parse_tree__parse_tree_out_pragma__UsedArg_39) {
#line 1402 "parse_tree_out_pragma.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1402 "parse_tree_out_pragma.m"
                  case (MR_Integer) 0:
#line 1402 "parse_tree_out_pragma.m"
                    {
#line 1403 "parse_tree_out_pragma.m"
                      {
#line 1403 "parse_tree_out_pragma.m"
                        mercury__io__write_string_3_p_0((MR_String) "no");
                      }
#line 1402 "parse_tree_out_pragma.m"
                    }
#line 1402 "parse_tree_out_pragma.m"
                    break;
#line 1402 "parse_tree_out_pragma.m"
                  case (MR_Integer) 1:
#line 1405 "parse_tree_out_pragma.m"
                    {
#line 1406 "parse_tree_out_pragma.m"
                      {
#line 1406 "parse_tree_out_pragma.m"
                        mercury__io__write_string_3_p_0((MR_String) "yes");
                      }
#line 1405 "parse_tree_out_pragma.m"
                    }
#line 1402 "parse_tree_out_pragma.m"
                    break;
#line 1402 "parse_tree_out_pragma.m"
                }
#line 1387 "parse_tree_out_pragma.m"
                {
#line 1387 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(parse_tree__parse_tree_out_pragma__UsedArgs_40);
                }
#line 1388 "parse_tree_out_pragma.m"
                {
#line 1388 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
#line 1384 "parse_tree_out_pragma.m"
              }
#line 1377 "parse_tree_out_pragma.m"
            {
#line 1377 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 1372 "parse_tree_out_pragma.m"
          }
#line 1360 "parse_tree_out_pragma.m"
        else
#line 1361 "parse_tree_out_pragma.m"
          {
#line 1361 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__Error_8 = (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 0));

#line 1362 "parse_tree_out_pragma.m"
            {
#line 1362 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "infinite");
            }
#line 1368 "parse_tree_out_pragma.m"
#line 1368 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Verbose_5) {
#line 1368 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1368 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1369 "parse_tree_out_pragma.m"
                {
#line 1369 "parse_tree_out_pragma.m"
                }
#line 1368 "parse_tree_out_pragma.m"
                break;
#line 1368 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1364 "parse_tree_out_pragma.m"
                {
#line 1365 "parse_tree_out_pragma.m"
                  {
#line 1365 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 1366 "parse_tree_out_pragma.m"
                  {
#line 1366 "parse_tree_out_pragma.m"
                    mercury__io__write_3_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_32, parse_tree__parse_tree_out_pragma__Error_8);
                  }
#line 1367 "parse_tree_out_pragma.m"
                  {
#line 1367 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 1364 "parse_tree_out_pragma.m"
                }
#line 1368 "parse_tree_out_pragma.m"
                break;
#line 1368 "parse_tree_out_pragma.m"
            }
#line 1361 "parse_tree_out_pragma.m"
          }
#line 1360 "parse_tree_out_pragma.m"
      }
#line 1360 "parse_tree_out_pragma.m"
  }
#line 89 "parse_tree_out_pragma.m"
}

#line 1625 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1(
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1625 "parse_tree_out_pragma.m"
{
#line 1625 "parse_tree_out_pragma.m"
  {
#line 1625 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1625 "parse_tree_out_pragma.m"
    {
#line 1625 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1625 "parse_tree_out_pragma.m"
  }
#line 1625 "parse_tree_out_pragma.m"
}

#line 83 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0(
#line 83 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_7,
#line 83 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeVarSet_8,
#line 83 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTVarSet_9,
#line 83 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ReuseInfo_10)
#line 83 "parse_tree_out_pragma.m"
{
#line 1566 "parse_tree_out_pragma.m"
  {
#line 1566 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1566 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 0)));
#line 1566 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 1)));
#line 1566 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 2)));
#line 1566 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeStructureReuseDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 3)));
#line 1566 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 0)));
#line 1566 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 1)));
#line 1566 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 2)));
#line 1566 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_19;
#line 1566 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_20;
#line 1566 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_21;

#line 1570 "parse_tree_out_pragma.m"
    {
#line 1570 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma structure_reuse(");
    }
#line 1571 "parse_tree_out_pragma.m"
    {
#line 1571 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_19);
    }
#line 1574 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeVarSet_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1575 "parse_tree_out_pragma.m"
      {
#line 1576 "parse_tree_out_pragma.m"
        {
#line 1576 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_20);
        }
#line 1575 "parse_tree_out_pragma.m"
      }
#line 1574 "parse_tree_out_pragma.m"
    else
#line 1573 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeVarSet_8, (MR_Integer) 0)));
#line 1580 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTVarSet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1581 "parse_tree_out_pragma.m"
      {
#line 1582 "parse_tree_out_pragma.m"
        {
#line 1582 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__parse_tree_out_pragma__TypeVarSet_21);
        }
#line 1581 "parse_tree_out_pragma.m"
      }
#line 1580 "parse_tree_out_pragma.m"
    else
#line 1579 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__TypeVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTVarSet_9, (MR_Integer) 0)));
#line 1589 "parse_tree_out_pragma.m"
#line 1589 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_18) {
#line 1589 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1589 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1590 "parse_tree_out_pragma.m"
        {
#line 1590 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_22;
#line 1590 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_23;
#line 1591 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_23;

#line 1591 "parse_tree_out_pragma.m"
          {
#line 1591 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_17, &parse_tree__parse_tree_out_pragma__FuncModeList_22, &parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
          }
#line 1591 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_23 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
#line 1592 "parse_tree_out_pragma.m"
          {
#line 1592 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__FuncModeList_22, parse_tree__parse_tree_out_pragma__RetMode_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1590 "parse_tree_out_pragma.m"
        }
#line 1589 "parse_tree_out_pragma.m"
        break;
#line 1589 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1586 "parse_tree_out_pragma.m"
        {
#line 1587 "parse_tree_out_pragma.m"
          {
#line 1587 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__Modes_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1586 "parse_tree_out_pragma.m"
        }
#line 1589 "parse_tree_out_pragma.m"
        break;
#line 1589 "parse_tree_out_pragma.m"
    }
#line 1596 "parse_tree_out_pragma.m"
    {
#line 1596 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1615 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__HeadVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1615 "parse_tree_out_pragma.m"
      {
#line 1616 "parse_tree_out_pragma.m"
        {
#line 1616 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars, types");
        }
#line 1615 "parse_tree_out_pragma.m"
      }
#line 1615 "parse_tree_out_pragma.m"
    else
#line 1618 "parse_tree_out_pragma.m"
      {
#line 1618 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_62_62;

#line 1619 "parse_tree_out_pragma.m"
        {
#line 1619 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars(");
        }
#line 1620 "parse_tree_out_pragma.m"
        {
#line 1620 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_pragma__VarSet_20, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__HeadVars_13);
        }
#line 1621 "parse_tree_out_pragma.m"
        {
#line 1621 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "), ");
        }
#line 1623 "parse_tree_out_pragma.m"
        {
#line 1623 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "types(");
        }
#line 1625 "parse_tree_out_pragma.m"
        {
#line 1625 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1625 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[1]));
#line 1625 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1));
#line 1625 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1625 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_21));
#line 1625 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1625 "parse_tree_out_pragma.m"
        }
#line 1624 "parse_tree_out_pragma.m"
        {
#line 1624 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_tree_out_pragma__HeadVarTypes_14, (MR_String) ",", parse_tree__parse_tree_out_pragma__V_62_62);
        }
#line 1626 "parse_tree_out_pragma.m"
        {
#line 1626 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 1618 "parse_tree_out_pragma.m"
      }
#line 1599 "parse_tree_out_pragma.m"
    {
#line 1599 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1600 "parse_tree_out_pragma.m"
    {
#line 1600 "parse_tree_out_pragma.m"
      parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_20, parse_tree__parse_tree_out_pragma__TypeVarSet_21, parse_tree__parse_tree_out_pragma__MaybeStructureReuseDomain_15);
    }
#line 1602 "parse_tree_out_pragma.m"
    {
#line 1602 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1566 "parse_tree_out_pragma.m"
  }
#line 83 "parse_tree_out_pragma.m"
}

#line 1625 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1(
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1625 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1625 "parse_tree_out_pragma.m"
{
#line 1625 "parse_tree_out_pragma.m"
  {
#line 1625 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1625 "parse_tree_out_pragma.m"
    {
#line 1625 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1625 "parse_tree_out_pragma.m"
  }
#line 1625 "parse_tree_out_pragma.m"
}

#line 79 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0(
#line 79 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_7,
#line 79 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeVarSet_8,
#line 79 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTVarSet_9,
#line 79 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__SharingInfo_10)
#line 79 "parse_tree_out_pragma.m"
{
#line 1523 "parse_tree_out_pragma.m"
  {
#line 1523 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1523 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 0)));
#line 1523 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 1)));
#line 1523 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 2)));
#line 1523 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeSharingAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 3)));
#line 1523 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 0)));
#line 1523 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 1)));
#line 1523 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 2)));
#line 1523 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_19;
#line 1523 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_20;
#line 1523 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_21;

#line 1527 "parse_tree_out_pragma.m"
    {
#line 1527 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma structure_sharing(");
    }
#line 1528 "parse_tree_out_pragma.m"
    {
#line 1528 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_19);
    }
#line 1531 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeVarSet_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1532 "parse_tree_out_pragma.m"
      {
#line 1533 "parse_tree_out_pragma.m"
        {
#line 1533 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_20);
        }
#line 1532 "parse_tree_out_pragma.m"
      }
#line 1531 "parse_tree_out_pragma.m"
    else
#line 1530 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeVarSet_8, (MR_Integer) 0)));
#line 1537 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTVarSet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1538 "parse_tree_out_pragma.m"
      {
#line 1539 "parse_tree_out_pragma.m"
        {
#line 1539 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__parse_tree_out_pragma__TypeVarSet_21);
        }
#line 1538 "parse_tree_out_pragma.m"
      }
#line 1537 "parse_tree_out_pragma.m"
    else
#line 1536 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__TypeVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTVarSet_9, (MR_Integer) 0)));
#line 1545 "parse_tree_out_pragma.m"
#line 1545 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_18) {
#line 1545 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1545 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1546 "parse_tree_out_pragma.m"
        {
#line 1546 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_22;
#line 1546 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_23;
#line 1547 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_23;

#line 1547 "parse_tree_out_pragma.m"
          {
#line 1547 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_17, &parse_tree__parse_tree_out_pragma__FuncModeList_22, &parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
          }
#line 1547 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_23 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
#line 1548 "parse_tree_out_pragma.m"
          {
#line 1548 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__FuncModeList_22, parse_tree__parse_tree_out_pragma__RetMode_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1546 "parse_tree_out_pragma.m"
        }
#line 1545 "parse_tree_out_pragma.m"
        break;
#line 1545 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1542 "parse_tree_out_pragma.m"
        {
#line 1543 "parse_tree_out_pragma.m"
          {
#line 1543 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__Modes_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1542 "parse_tree_out_pragma.m"
        }
#line 1545 "parse_tree_out_pragma.m"
        break;
#line 1545 "parse_tree_out_pragma.m"
    }
#line 1552 "parse_tree_out_pragma.m"
    {
#line 1552 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1615 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__HeadVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1615 "parse_tree_out_pragma.m"
      {
#line 1616 "parse_tree_out_pragma.m"
        {
#line 1616 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars, types");
        }
#line 1615 "parse_tree_out_pragma.m"
      }
#line 1615 "parse_tree_out_pragma.m"
    else
#line 1618 "parse_tree_out_pragma.m"
      {
#line 1618 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_62_62;

#line 1619 "parse_tree_out_pragma.m"
        {
#line 1619 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars(");
        }
#line 1620 "parse_tree_out_pragma.m"
        {
#line 1620 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_pragma__VarSet_20, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__HeadVars_13);
        }
#line 1621 "parse_tree_out_pragma.m"
        {
#line 1621 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "), ");
        }
#line 1623 "parse_tree_out_pragma.m"
        {
#line 1623 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "types(");
        }
#line 1625 "parse_tree_out_pragma.m"
        {
#line 1625 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1625 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[1]));
#line 1625 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1));
#line 1625 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1625 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_21));
#line 1625 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1625 "parse_tree_out_pragma.m"
        }
#line 1624 "parse_tree_out_pragma.m"
        {
#line 1624 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_tree_out_pragma__HeadVarTypes_14, (MR_String) ",", parse_tree__parse_tree_out_pragma__V_62_62);
        }
#line 1626 "parse_tree_out_pragma.m"
        {
#line 1626 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 1618 "parse_tree_out_pragma.m"
      }
#line 1555 "parse_tree_out_pragma.m"
    {
#line 1555 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1556 "parse_tree_out_pragma.m"
    {
#line 1556 "parse_tree_out_pragma.m"
      parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_20, parse_tree__parse_tree_out_pragma__TypeVarSet_21, parse_tree__parse_tree_out_pragma__MaybeSharingAs_15);
    }
#line 1558 "parse_tree_out_pragma.m"
    {
#line 1558 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1523 "parse_tree_out_pragma.m"
  }
#line 79 "parse_tree_out_pragma.m"
}

#line 74 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_components_8_p_0(
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_T_37,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_S_38,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_9,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__SymName_11,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ModeList_12,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeArgSize_13,
#line 74 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_14)
#line 74 "parse_tree_out_pragma.m"
{
#line 1337 "parse_tree_out_pragma.m"
  {
#line 1337 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1337 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_16;

#line 1338 "parse_tree_out_pragma.m"
    {
#line 1338 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination_info(");
    }
#line 1339 "parse_tree_out_pragma.m"
    {
#line 1339 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_16);
    }
#line 1344 "parse_tree_out_pragma.m"
#line 1344 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
#line 1344 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1344 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1345 "parse_tree_out_pragma.m"
        {
#line 1345 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_17;
#line 1345 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_18;
#line 1346 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_18;

#line 1346 "parse_tree_out_pragma.m"
          {
#line 1346 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_12, &parse_tree__parse_tree_out_pragma__FuncModeList_17, &parse_tree__parse_tree_out_pragma__conv0_RetMode_18);
          }
#line 1346 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_18 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_18);
#line 1347 "parse_tree_out_pragma.m"
          {
#line 1347 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_9, parse_tree__parse_tree_out_pragma__InitVarSet_16, parse_tree__parse_tree_out_pragma__SymName_11, parse_tree__parse_tree_out_pragma__FuncModeList_17, parse_tree__parse_tree_out_pragma__RetMode_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1345 "parse_tree_out_pragma.m"
        }
#line 1344 "parse_tree_out_pragma.m"
        break;
#line 1344 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1341 "parse_tree_out_pragma.m"
        {
#line 1342 "parse_tree_out_pragma.m"
          {
#line 1342 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_9, parse_tree__parse_tree_out_pragma__InitVarSet_16, parse_tree__parse_tree_out_pragma__SymName_11, parse_tree__parse_tree_out_pragma__ModeList_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1341 "parse_tree_out_pragma.m"
        }
#line 1344 "parse_tree_out_pragma.m"
        break;
#line 1344 "parse_tree_out_pragma.m"
    }
#line 1350 "parse_tree_out_pragma.m"
    {
#line 1350 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1351 "parse_tree_out_pragma.m"
    {
#line 1351 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_37, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__MaybeArgSize_13);
    }
#line 1352 "parse_tree_out_pragma.m"
    {
#line 1352 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1353 "parse_tree_out_pragma.m"
    {
#line 1353 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_S_38, parse_tree__parse_tree_out_pragma__TypeInfo_for_T_37, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__MaybeTermination_14);
    }
#line 1354 "parse_tree_out_pragma.m"
    {
#line 1354 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1337 "parse_tree_out_pragma.m"
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
#line 1118 "parse_tree_out_pragma.m"
  {
#line 1118 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1118 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TablingInfo_4, (MR_Integer) 0)));
#line 1118 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MM_TablingStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TablingInfo_4, (MR_Integer) 1)));
#line 1118 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1118 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1118 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1118 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1123 "parse_tree_out_pragma.m"
    {
#line 1123 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma mm_tabling_info(");
    }
#line 1124 "parse_tree_out_pragma.m"
    {
#line 1124 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1125 "parse_tree_out_pragma.m"
    {
#line 1125 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1126 "parse_tree_out_pragma.m"
    {
#line 1126 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1127 "parse_tree_out_pragma.m"
    {
#line 1127 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1128 "parse_tree_out_pragma.m"
    {
#line 1128 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1129 "parse_tree_out_pragma.m"
    {
#line 1129 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1130 "parse_tree_out_pragma.m"
    {
#line 1130 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1131 "parse_tree_out_pragma.m"
    {
#line 1131 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1135 "parse_tree_out_pragma.m"
#line 1135 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MM_TablingStatus_7) {
#line 1135 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1135 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 1139 "parse_tree_out_pragma.m"
        {
#line 1140 "parse_tree_out_pragma.m"
          {
#line 1140 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_conditional");
          }
#line 1139 "parse_tree_out_pragma.m"
        }
#line 1135 "parse_tree_out_pragma.m"
        break;
#line 1135 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1133 "parse_tree_out_pragma.m"
        {
#line 1134 "parse_tree_out_pragma.m"
          {
#line 1134 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_may_call");
          }
#line 1133 "parse_tree_out_pragma.m"
        }
#line 1135 "parse_tree_out_pragma.m"
        break;
#line 1135 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1136 "parse_tree_out_pragma.m"
        {
#line 1137 "parse_tree_out_pragma.m"
          {
#line 1137 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_will_not_call");
          }
#line 1136 "parse_tree_out_pragma.m"
        }
#line 1135 "parse_tree_out_pragma.m"
        break;
#line 1135 "parse_tree_out_pragma.m"
    }
#line 1142 "parse_tree_out_pragma.m"
    {
#line 1142 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1118 "parse_tree_out_pragma.m"
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
#line 1087 "parse_tree_out_pragma.m"
  {
#line 1087 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1087 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TrailingInfo_4, (MR_Integer) 0)));
#line 1087 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TrailingStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TrailingInfo_4, (MR_Integer) 1)));
#line 1087 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1087 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1087 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1087 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1092 "parse_tree_out_pragma.m"
    {
#line 1092 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma trailing_info(");
    }
#line 1093 "parse_tree_out_pragma.m"
    {
#line 1093 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1094 "parse_tree_out_pragma.m"
    {
#line 1094 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1095 "parse_tree_out_pragma.m"
    {
#line 1095 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1096 "parse_tree_out_pragma.m"
    {
#line 1096 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1097 "parse_tree_out_pragma.m"
    {
#line 1097 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1098 "parse_tree_out_pragma.m"
    {
#line 1098 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1099 "parse_tree_out_pragma.m"
    {
#line 1099 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1100 "parse_tree_out_pragma.m"
    {
#line 1100 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1104 "parse_tree_out_pragma.m"
#line 1104 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__TrailingStatus_7) {
#line 1104 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1104 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 1108 "parse_tree_out_pragma.m"
        {
#line 1109 "parse_tree_out_pragma.m"
          {
#line 1109 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "conditional");
          }
#line 1108 "parse_tree_out_pragma.m"
        }
#line 1104 "parse_tree_out_pragma.m"
        break;
#line 1104 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1102 "parse_tree_out_pragma.m"
        {
#line 1103 "parse_tree_out_pragma.m"
          {
#line 1103 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "may_modify_trail");
          }
#line 1102 "parse_tree_out_pragma.m"
        }
#line 1104 "parse_tree_out_pragma.m"
        break;
#line 1104 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1105 "parse_tree_out_pragma.m"
        {
#line 1106 "parse_tree_out_pragma.m"
          {
#line 1106 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "will_not_modify_trail");
          }
#line 1105 "parse_tree_out_pragma.m"
        }
#line 1104 "parse_tree_out_pragma.m"
        break;
#line 1104 "parse_tree_out_pragma.m"
    }
#line 1111 "parse_tree_out_pragma.m"
    {
#line 1111 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1087 "parse_tree_out_pragma.m"
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
#line 1050 "parse_tree_out_pragma.m"
  {
#line 1050 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1050 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExceptionsInfo_4, (MR_Integer) 0)));
#line 1050 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ThrowStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExceptionsInfo_4, (MR_Integer) 1)));
#line 1050 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1050 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1050 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1050 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1054 "parse_tree_out_pragma.m"
    {
#line 1054 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma exceptions(");
    }
#line 1055 "parse_tree_out_pragma.m"
    {
#line 1055 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1056 "parse_tree_out_pragma.m"
    {
#line 1056 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1057 "parse_tree_out_pragma.m"
    {
#line 1057 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1058 "parse_tree_out_pragma.m"
    {
#line 1058 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1059 "parse_tree_out_pragma.m"
    {
#line 1059 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1060 "parse_tree_out_pragma.m"
    {
#line 1060 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1061 "parse_tree_out_pragma.m"
    {
#line 1061 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1062 "parse_tree_out_pragma.m"
    {
#line 1062 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1066 "parse_tree_out_pragma.m"
#line 1066 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__ThrowStatus_7)) {
#line 1066 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1066 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1066 "parse_tree_out_pragma.m"
#line 1066 "parse_tree_out_pragma.m"
        switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__ThrowStatus_7)) {
#line 1066 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1066 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1064 "parse_tree_out_pragma.m"
            {
#line 1065 "parse_tree_out_pragma.m"
              {
#line 1065 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "will_not_throw");
              }
#line 1064 "parse_tree_out_pragma.m"
            }
#line 1066 "parse_tree_out_pragma.m"
            break;
#line 1066 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1077 "parse_tree_out_pragma.m"
            {
#line 1078 "parse_tree_out_pragma.m"
              {
#line 1078 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "conditional");
              }
#line 1077 "parse_tree_out_pragma.m"
            }
#line 1066 "parse_tree_out_pragma.m"
            break;
#line 1066 "parse_tree_out_pragma.m"
        }
#line 1066 "parse_tree_out_pragma.m"
        break;
#line 1066 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1067 "parse_tree_out_pragma.m"
        {
#line 1067 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__ExceptionType_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__ThrowStatus_7, (MR_Integer) 0)));

#line 1068 "parse_tree_out_pragma.m"
          {
#line 1068 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "may_throw(");
          }
#line 1072 "parse_tree_out_pragma.m"
#line 1072 "parse_tree_out_pragma.m"
          switch (parse_tree__parse_tree_out_pragma__ExceptionType_12) {
#line 1072 "parse_tree_out_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1072 "parse_tree_out_pragma.m"
            case (MR_Integer) 1:
#line 1073 "parse_tree_out_pragma.m"
              {
#line 1074 "parse_tree_out_pragma.m"
                {
#line 1074 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "type_exception)");
                }
#line 1073 "parse_tree_out_pragma.m"
              }
#line 1072 "parse_tree_out_pragma.m"
              break;
#line 1072 "parse_tree_out_pragma.m"
            case (MR_Integer) 0:
#line 1070 "parse_tree_out_pragma.m"
              {
#line 1071 "parse_tree_out_pragma.m"
                {
#line 1071 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "user_exception)");
                }
#line 1070 "parse_tree_out_pragma.m"
              }
#line 1072 "parse_tree_out_pragma.m"
              break;
#line 1072 "parse_tree_out_pragma.m"
          }
#line 1067 "parse_tree_out_pragma.m"
        }
#line 1066 "parse_tree_out_pragma.m"
        break;
#line 1066 "parse_tree_out_pragma.m"
    }
#line 1080 "parse_tree_out_pragma.m"
    {
#line 1080 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1050 "parse_tree_out_pragma.m"
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
#line 1012 "parse_tree_out_pragma.m"
  {
#line 1012 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1012 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31;
#line 1012 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__UnusedArgsInfo_4, (MR_Integer) 0)));
#line 1012 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UnusedArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__UnusedArgsInfo_4, (MR_Integer) 1)));
#line 1012 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1012 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1012 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1012 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1016 "parse_tree_out_pragma.m"
    {
#line 1016 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma unused_args(");
    }
#line 1017 "parse_tree_out_pragma.m"
    {
#line 1017 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1018 "parse_tree_out_pragma.m"
    {
#line 1018 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1019 "parse_tree_out_pragma.m"
    {
#line 1019 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1020 "parse_tree_out_pragma.m"
    {
#line 1020 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1021 "parse_tree_out_pragma.m"
    {
#line 1021 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1022 "parse_tree_out_pragma.m"
    {
#line 1022 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1023 "parse_tree_out_pragma.m"
    {
#line 1023 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1024 "parse_tree_out_pragma.m"
    {
#line 1024 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", [");
    }
#line 7575 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 1031 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "parse_tree_out_pragma.m"
      {
#line 1031 "parse_tree_out_pragma.m"
      }
#line 1031 "parse_tree_out_pragma.m"
    else
#line 1032 "parse_tree_out_pragma.m"
      {
#line 1032 "parse_tree_out_pragma.m"
        MR_Integer parse_tree__parse_tree_out_pragma__First_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnusedArgs_7, (MR_Integer) 0)));
#line 1032 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Rest_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnusedArgs_7, (MR_Integer) 1)));
#line 38 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_40;
#line 1034 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_28_28;

#line 38 "parse_tree.parse_tree_out_info.int"
        {
#line 38 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) (parse_tree__parse_tree_out_pragma__First_35)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_40);
        }
#line 1034 "parse_tree_out_pragma.m"
        {
#line 1034 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, parse_tree__parse_tree_out_pragma__Rest_36, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_28_28);
        }
#line 1032 "parse_tree_out_pragma.m"
      }
#line 1026 "parse_tree_out_pragma.m"
    {
#line 1026 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "]).\n");
    }
#line 1012 "parse_tree_out_pragma.m"
  }
#line 57 "parse_tree_out_pragma.m"
}

#line 993 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
#line 993 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 993 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 993 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 993 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 993 "parse_tree_out_pragma.m"
{
#line 993 "parse_tree_out_pragma.m"
  {
#line 993 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 993 "parse_tree_out_pragma.m"
    {
#line 993 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 993 "parse_tree_out_pragma.m"
  }
#line 993 "parse_tree_out_pragma.m"
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
#line 954 "parse_tree_out_pragma.m"
  {
#line 954 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 954 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 0)));
#line 954 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SpecName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 1)));
#line 954 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 2)));
#line 954 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 3)));
#line 954 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 4)));
#line 954 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Subst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 5)));
#line 954 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 6)));
#line 954 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_52_52;
#line 955 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 7)));

#line 957 "parse_tree_out_pragma.m"
    {
#line 957 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma type_spec(");
    }
#line 984 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 985 "parse_tree_out_pragma.m"
      {
#line 986 "parse_tree_out_pragma.m"
        {
#line 986 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_10);
        }
#line 988 "parse_tree_out_pragma.m"
        {
#line 988 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 989 "parse_tree_out_pragma.m"
        {
#line 989 "parse_tree_out_pragma.m"
          mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_12);
        }
#line 985 "parse_tree_out_pragma.m"
      }
#line 984 "parse_tree_out_pragma.m"
    else
#line 959 "parse_tree_out_pragma.m"
      {
#line 959 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeModes_14, (MR_Integer) 0)));
#line 959 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_20;

#line 963 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "parse_tree_out_pragma.m"
          {
#line 965 "parse_tree_out_pragma.m"
            {
#line 965 "parse_tree_out_pragma.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_pragma", (MR_String) "predicate \140parse_tree.parse_tree_out_pragma.mercury_output_pragma_type_spec\'/5", (MR_String) "no pred_or_func");
#line 965 "parse_tree_out_pragma.m"
              return;
            }
#line 964 "parse_tree_out_pragma.m"
          }
#line 963 "parse_tree_out_pragma.m"
        else
#line 961 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13, (MR_Integer) 0)));
#line 976 "parse_tree_out_pragma.m"
#line 976 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__PredOrFunc_20) {
#line 976 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 976 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 968 "parse_tree_out_pragma.m"
            {
#line 968 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FuncModes_21;
#line 968 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__RetMode_22;
#line 968 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_23;
#line 969 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_22;

#line 969 "parse_tree_out_pragma.m"
              {
#line 969 "parse_tree_out_pragma.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_18, &parse_tree__parse_tree_out_pragma__FuncModes_21, &parse_tree__parse_tree_out_pragma__conv0_RetMode_22);
              }
#line 969 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__RetMode_22 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_22);
#line 970 "parse_tree_out_pragma.m"
              {
#line 970 "parse_tree_out_pragma.m"
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__PredName_10);
              }
#line 971 "parse_tree_out_pragma.m"
              {
#line 971 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 972 "parse_tree_out_pragma.m"
              {
#line 972 "parse_tree_out_pragma.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InstVarSet_23);
              }
#line 973 "parse_tree_out_pragma.m"
              {
#line 973 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_23, parse_tree__parse_tree_out_pragma__FuncModes_21);
              }
#line 974 "parse_tree_out_pragma.m"
              {
#line 974 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) ") = ");
              }
#line 975 "parse_tree_out_pragma.m"
              {
#line 975 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_inst__mercury_output_mode_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_23, parse_tree__parse_tree_out_pragma__RetMode_22);
              }
#line 968 "parse_tree_out_pragma.m"
            }
#line 976 "parse_tree_out_pragma.m"
            break;
#line 976 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 977 "parse_tree_out_pragma.m"
            {
#line 977 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_60;

#line 978 "parse_tree_out_pragma.m"
              {
#line 978 "parse_tree_out_pragma.m"
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__PredName_10);
              }
#line 979 "parse_tree_out_pragma.m"
              {
#line 979 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 980 "parse_tree_out_pragma.m"
              {
#line 980 "parse_tree_out_pragma.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InstVarSet_60);
              }
#line 981 "parse_tree_out_pragma.m"
              {
#line 981 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_60, parse_tree__parse_tree_out_pragma__Modes_18);
              }
#line 982 "parse_tree_out_pragma.m"
              {
#line 982 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 977 "parse_tree_out_pragma.m"
            }
#line 976 "parse_tree_out_pragma.m"
            break;
#line 976 "parse_tree_out_pragma.m"
        }
#line 959 "parse_tree_out_pragma.m"
      }
#line 991 "parse_tree_out_pragma.m"
    {
#line 991 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", (");
    }
#line 993 "parse_tree_out_pragma.m"
    {
#line 993 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 993 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[0]));
#line 993 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1));
#line 993 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 993 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarSet_16));
#line 993 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 4) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarNamePrint_6));
#line 993 "parse_tree_out_pragma.m"
    }
#line 992 "parse_tree_out_pragma.m"
    {
#line 992 "parse_tree_out_pragma.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[0], parse_tree__parse_tree_out_pragma__Subst_15, (MR_String) ", ", parse_tree__parse_tree_out_pragma__V_52_52);
    }
#line 994 "parse_tree_out_pragma.m"
    {
#line 994 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "), ");
    }
#line 995 "parse_tree_out_pragma.m"
    {
#line 995 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, parse_tree__parse_tree_out_pragma__SpecName_11);
    }
#line 997 "parse_tree_out_pragma.m"
    {
#line 997 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 954 "parse_tree_out_pragma.m"
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
#line 437 "parse_tree_out_pragma.m"
  {
#line 437 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 437 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_6;
#line 438 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_String_6;

#line 438 "parse_tree_out_pragma.m"
    {
#line 438 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1], parse_tree__parse_tree_out_pragma__Lang_4, parse_tree__parse_tree_out_pragma__FPInfo_5, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv0_String_6);
    }
#line 438 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__String_6 = ((MR_String) parse_tree__parse_tree_out_pragma__conv0_String_6);
#line 437 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_6;
#line 437 "parse_tree_out_pragma.m"
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
#line 435 "parse_tree_out_pragma.m"
  {
#line 435 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 435 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_9;

#line 435 "parse_tree_out_pragma.m"
    {
#line 435 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__FPInfo_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_9);
    }
#line 435 "parse_tree_out_pragma.m"
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
#line 419 "parse_tree_out_pragma.m"
  {
#line 419 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 419 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__FIM_6 = (MR_Word) parse_tree__parse_tree_out_pragma__FIMinfo_4;
#line 419 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FIM_6, (MR_Integer) 0)));
#line 419 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FIM_6, (MR_Integer) 1)));
#line 423 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_13_13;

#line 422 "parse_tree_out_pragma.m"
    {
#line 422 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_import_module(");
    }
#line 423 "parse_tree_out_pragma.m"
    {
#line 423 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_7, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_13_13);
    }
#line 424 "parse_tree_out_pragma.m"
    {
#line 424 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 425 "parse_tree_out_pragma.m"
    {
#line 425 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, parse_tree__parse_tree_out_pragma__ModuleName_8);
    }
#line 427 "parse_tree_out_pragma.m"
    {
#line 427 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 419 "parse_tree_out_pragma.m"
  }
#line 46 "parse_tree_out_pragma.m"
}

#line 374 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 374 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 374 "parse_tree_out_pragma.m"
{
#line 374 "parse_tree_out_pragma.m"
  {
#line 374 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 374 "parse_tree_out_pragma.m"
    {
#line 374 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 374 "parse_tree_out_pragma.m"
  }
#line 374 "parse_tree_out_pragma.m"
}

#line 43 "parse_tree_out_pragma.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0(
#line 43 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FDInfo_3)
#line 43 "parse_tree_out_pragma.m"
{
#line 304 "parse_tree_out_pragma.m"
  {
#line 304 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 304 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_4;
#line 304 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1];
#line 304 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 304 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__IsLocal_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 304 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 1)));
#line 304 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15;
#line 304 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16;
#line 304 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18;
#line 304 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22;
#line 304 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24;
#line 304 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15;
#line 313 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv23_String_4;

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15 = ((MR_String) parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15);
#line 313 "parse_tree_out_pragma.m"
    {
#line 313 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, parse_tree__parse_tree_out_pragma__Lang_11, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16);
    }
#line 313 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16 = ((MR_String) parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16);
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18 = ((MR_String) parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18);
#line 318 "parse_tree_out_pragma.m"
#line 318 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__IsLocal_12) {
#line 318 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 318 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 319 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22;

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "exported")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22);
          }
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22 = ((MR_String) parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22);
#line 319 "parse_tree_out_pragma.m"
        }
#line 318 "parse_tree_out_pragma.m"
        break;
#line 318 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 316 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22;

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "local")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22);
          }
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22 = ((MR_String) parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22);
#line 316 "parse_tree_out_pragma.m"
        }
#line 318 "parse_tree_out_pragma.m"
        break;
#line 318 "parse_tree_out_pragma.m"
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24 = ((MR_String) parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24);
#line 347 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_13)) == (MR_mktag((MR_Integer) 1))))
#line 350 "parse_tree_out_pragma.m"
      {
#line 350 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__FileName_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_13, (MR_Integer) 0)));
#line 350 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35;
#line 350 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35;
#line 46 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 46 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35 = ((MR_String) parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35);
#line 46 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 12)));
#line 46 "parse_tree.parse_tree_out_info.int"
        {
#line 46 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_33)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36);
        }
#line 46 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36 = ((MR_String) parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36);
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ")")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25 = ((MR_String) parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25);
#line 350 "parse_tree_out_pragma.m"
      }
#line 347 "parse_tree_out_pragma.m"
    else
#line 347 "parse_tree_out_pragma.m"
      {
#line 347 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_59;
#line 347 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Code_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_13, (MR_Integer) 0)));
#line 347 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45;
#line 347 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45;
#line 374 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45 = ((MR_String) parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45);
#line 374 "parse_tree_out_pragma.m"
        {
#line 374 "parse_tree_out_pragma.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_59);
        }
#line 374 "parse_tree_out_pragma.m"
        {
#line 374 "parse_tree_out_pragma.m"
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_59, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[1], parse_tree__parse_tree_out_pragma__Code_32, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45)), &parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46);
        }
#line 374 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46 = ((MR_String) parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46);
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_20(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25 = ((MR_String) parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25);
#line 347 "parse_tree_out_pragma.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25)), &parse_tree__parse_tree_out_pragma__conv23_String_4);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__String_4 = ((MR_String) parse_tree__parse_tree_out_pragma__conv23_String_4);
#line 304 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_4;
#line 304 "parse_tree_out_pragma.m"
  }
#line 43 "parse_tree_out_pragma.m"
}

#line 374 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1(
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 374 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 374 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 374 "parse_tree_out_pragma.m"
{
#line 374 "parse_tree_out_pragma.m"
  {
#line 374 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 374 "parse_tree_out_pragma.m"
    {
#line 374 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 374 "parse_tree_out_pragma.m"
  }
#line 374 "parse_tree_out_pragma.m"
}

#line 41 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0(
#line 41 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FDInfo_4)
#line 41 "parse_tree_out_pragma.m"
{
#line 302 "parse_tree_out_pragma.m"
  {
#line 302 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 302 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 302 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 302 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__IsLocal_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 302 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 1)));
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_18;
#line 313 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_19;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_21;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_27;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_IO_7;

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_18);
    }
#line 313 "parse_tree_out_pragma.m"
    {
#line 313 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__Lang_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_19);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_21);
    }
#line 318 "parse_tree_out_pragma.m"
#line 318 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__IsLocal_15) {
#line 318 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 318 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 319 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_25;

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "exported")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_25);
          }
#line 319 "parse_tree_out_pragma.m"
        }
#line 318 "parse_tree_out_pragma.m"
        break;
#line 318 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 316 "parse_tree_out_pragma.m"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_25;

#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "local")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_25);
          }
#line 316 "parse_tree_out_pragma.m"
        }
#line 318 "parse_tree_out_pragma.m"
        break;
#line 318 "parse_tree_out_pragma.m"
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_27);
    }
#line 347 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_16)) == (MR_mktag((MR_Integer) 1))))
#line 350 "parse_tree_out_pragma.m"
      {
#line 350 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__FileName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_16, (MR_Integer) 0)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_38;
#line 46 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 46 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_39;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_28;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_38);
        }
#line 46 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 12)));
#line 46 "parse_tree.parse_tree_out_info.int"
        {
#line 46 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_36)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_39);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_28);
        }
#line 350 "parse_tree_out_pragma.m"
      }
#line 347 "parse_tree_out_pragma.m"
    else
#line 347 "parse_tree_out_pragma.m"
      {
#line 347 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_62;
#line 347 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Code_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_16, (MR_Integer) 0)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_48;
#line 374 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_49;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_28;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_48);
        }
#line 374 "parse_tree_out_pragma.m"
        {
#line 374 "parse_tree_out_pragma.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_62);
        }
#line 374 "parse_tree_out_pragma.m"
        {
#line 374 "parse_tree_out_pragma.m"
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_62, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[0], parse_tree__parse_tree_out_pragma__Code_35, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_49);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_20(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_28);
        }
#line 347 "parse_tree_out_pragma.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_IO_7);
    }
#line 302 "parse_tree_out_pragma.m"
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
#line 265 "parse_tree_out_pragma.m"
  {
#line 265 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 265 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_12;
#line 265 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1];
#line 265 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__DeclaredArity_23;
#line 265 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27;
#line 265 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28;
#line 265 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30;
#line 265 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32;
#line 265 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34;
#line 265 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35;
#line 265 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30;
#line 284 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34;
#line 38 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 38 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv16_String_12;

#line 277 "parse_tree_out_pragma.m"
#line 277 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_9) {
#line 277 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 277 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 278 "parse_tree_out_pragma.m"
        {
#line 279 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__DeclaredArity_23 = (parse_tree__parse_tree_out_pragma__Arity_8 - (MR_Integer) 1);
#line 278 "parse_tree_out_pragma.m"
        }
#line 277 "parse_tree_out_pragma.m"
        break;
#line 277 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 276 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__DeclaredArity_23 = parse_tree__parse_tree_out_pragma__Arity_8;
#line 277 "parse_tree_out_pragma.m"
        break;
#line 277 "parse_tree_out_pragma.m"
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27 = ((MR_String) parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27);
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__PragmaName_10)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28 = ((MR_String) parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28);
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) "(")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30 = ((MR_String) parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30);
#line 284 "parse_tree_out_pragma.m"
    {
#line 284 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_7, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32);
    }
#line 284 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32 = ((MR_String) parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32);
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) "/")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34 = ((MR_String) parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34);
#line 38 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
    {
#line 38 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__DeclaredArity_23)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35);
    }
#line 38 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35 = ((MR_String) parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35);
#line 291 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeAfter_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35;
#line 291 "parse_tree_out_pragma.m"
    else
#line 288 "parse_tree_out_pragma.m"
      {
#line 288 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__After_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_11, (MR_Integer) 0)));
#line 288 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37 = ((MR_String) parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37);
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__After_24)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38 = ((MR_String) parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38);
#line 288 "parse_tree_out_pragma.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38)), &parse_tree__parse_tree_out_pragma__conv16_String_12);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__String_12 = ((MR_String) parse_tree__parse_tree_out_pragma__conv16_String_12);
#line 265 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_12;
#line 265 "parse_tree_out_pragma.m"
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
#line 261 "parse_tree_out_pragma.m"
  {
#line 261 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 261 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 261 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__DeclaredArity_26;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_30;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_31;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_33;
#line 284 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_35;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_37;
#line 38 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 38 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_38;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_IO_15;

#line 277 "parse_tree_out_pragma.m"
#line 277 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
#line 277 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 277 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 278 "parse_tree_out_pragma.m"
        {
#line 279 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__DeclaredArity_26 = (parse_tree__parse_tree_out_pragma__Arity_9 - (MR_Integer) 1);
#line 278 "parse_tree_out_pragma.m"
        }
#line 277 "parse_tree_out_pragma.m"
        break;
#line 277 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 276 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__DeclaredArity_26 = parse_tree__parse_tree_out_pragma__Arity_9;
#line 277 "parse_tree_out_pragma.m"
        break;
#line 277 "parse_tree_out_pragma.m"
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_30);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__PragmaName_11)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_31);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_33);
    }
#line 284 "parse_tree_out_pragma.m"
    {
#line 284 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_35);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_37);
    }
#line 38 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
    {
#line 38 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__DeclaredArity_26)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_38);
    }
#line 291 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeAfter_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "parse_tree_out_pragma.m"
      {
#line 292 "parse_tree_out_pragma.m"
      }
#line 291 "parse_tree_out_pragma.m"
    else
#line 288 "parse_tree_out_pragma.m"
      {
#line 288 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__After_27 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_12, (MR_Integer) 0)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_40;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_41;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_40);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__After_27)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_41);
        }
#line 288 "parse_tree_out_pragma.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_IO_15);
    }
#line 261 "parse_tree_out_pragma.m"
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
#line 125 "parse_tree_out_pragma.m"
  {
#line 125 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 125 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Pragma_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 0)));
#line 125 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 2)));
#line 125 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_12;
#line 126 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 1)));
#line 126 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma___SeqNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 3)));

#line 127 "parse_tree_out_pragma.m"
    {
#line 127 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out_pragma__Info_5, parse_tree__parse_tree_out_pragma__Context_10);
    }
#line 128 "parse_tree_out_pragma.m"
    {
#line 128 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Lang_12 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out_pragma__Info_5);
    }
#line 132 "parse_tree_out_pragma.m"
#line 132 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Pragma_8)) {
#line 132 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 132 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 130 "parse_tree_out_pragma.m"
        {
#line 130 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FDInfo_13 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out_pragma__Pragma_8), (MR_Integer) 0);

#line 131 "parse_tree_out_pragma.m"
          {
#line 131 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0(parse_tree__parse_tree_out_pragma__FDInfo_13);
          }
#line 130 "parse_tree_out_pragma.m"
        }
#line 132 "parse_tree_out_pragma.m"
        break;
#line 132 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 133 "parse_tree_out_pragma.m"
        {
#line 133 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FCInfo_14 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out_pragma__Pragma_8), (MR_Integer) 1);

#line 134 "parse_tree_out_pragma.m"
          {
#line 134 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(parse_tree__parse_tree_out_pragma__FCInfo_14);
          }
#line 133 "parse_tree_out_pragma.m"
        }
#line 132 "parse_tree_out_pragma.m"
        break;
#line 132 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 139 "parse_tree_out_pragma.m"
        {
#line 139 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FPInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 0)));

#line 140 "parse_tree_out_pragma.m"
          {
#line 140 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_4_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__FPInfo_16);
          }
#line 139 "parse_tree_out_pragma.m"
        }
#line 132 "parse_tree_out_pragma.m"
        break;
#line 132 "parse_tree_out_pragma.m"
      case (MR_Integer) 3:
#line 132 "parse_tree_out_pragma.m"
#line 132 "parse_tree_out_pragma.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 0)))) {
#line 132 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 142 "parse_tree_out_pragma.m"
            {
#line 142 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 143 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_IO_40;

#line 143 "parse_tree_out_pragma.m"
              {
#line 143 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__FPEInfo_17, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_IO_40);
              }
#line 142 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 145 "parse_tree_out_pragma.m"
            {
#line 145 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 146 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_IO_40;

#line 146 "parse_tree_out_pragma.m"
              {
#line 146 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__FEEInfo_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_IO_40);
              }
#line 145 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 2:
#line 148 "parse_tree_out_pragma.m"
            {
#line 148 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FEInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 149 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_40;

#line 149 "parse_tree_out_pragma.m"
              {
#line 149 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__FEInfo_19, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_40);
              }
#line 148 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 3:
#line 151 "parse_tree_out_pragma.m"
            {
#line 151 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 152 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_40;

#line 152 "parse_tree_out_pragma.m"
              {
#line 152 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__ExternalInfo_20, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_40);
              }
#line 151 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 4:
#line 154 "parse_tree_out_pragma.m"
            {
#line 154 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TypeSpecInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 156 "parse_tree_out_pragma.m"
              {
#line 156 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__TypeSpecInfo_21);
              }
#line 154 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 5:
#line 158 "parse_tree_out_pragma.m"
            {
#line 158 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 158 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_23, (MR_Integer) 0)));
#line 158 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_23, (MR_Integer) 1)));

#line 160 "parse_tree_out_pragma.m"
              {
#line 160 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_24, parse_tree__parse_tree_out_pragma__Arity_25, (MR_Integer) 0, (MR_String) "inline", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 158 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 6:
#line 163 "parse_tree_out_pragma.m"
            {
#line 163 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 163 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_112, (MR_Integer) 0)));
#line 163 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_112, (MR_Integer) 1)));

#line 165 "parse_tree_out_pragma.m"
              {
#line 165 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_113, parse_tree__parse_tree_out_pragma__Arity_114, (MR_Integer) 0, (MR_String) "no_inline", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 163 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 7:
#line 168 "parse_tree_out_pragma.m"
            {
#line 168 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__UnusedArgsInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 169 "parse_tree_out_pragma.m"
              {
#line 169 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(parse_tree__parse_tree_out_pragma__UnusedArgsInfo_26);
              }
#line 168 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 8:
#line 171 "parse_tree_out_pragma.m"
            {
#line 171 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__ExceptionsInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 172 "parse_tree_out_pragma.m"
              {
#line 172 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(parse_tree__parse_tree_out_pragma__ExceptionsInfo_27);
              }
#line 171 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 9:
#line 174 "parse_tree_out_pragma.m"
            {
#line 174 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TrailingInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 175 "parse_tree_out_pragma.m"
              {
#line 175 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(parse_tree__parse_tree_out_pragma__TrailingInfo_28);
              }
#line 174 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 10:
#line 177 "parse_tree_out_pragma.m"
            {
#line 177 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TablingInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 178 "parse_tree_out_pragma.m"
              {
#line 178 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(parse_tree__parse_tree_out_pragma__TablingInfo_29);
              }
#line 177 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 11:
#line 180 "parse_tree_out_pragma.m"
            {
#line 180 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 180 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_115, (MR_Integer) 0)));
#line 180 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_115, (MR_Integer) 1)));

#line 182 "parse_tree_out_pragma.m"
              {
#line 182 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_116, parse_tree__parse_tree_out_pragma__Arity_117, (MR_Integer) 0, (MR_String) "obsolete", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 180 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 12:
#line 185 "parse_tree_out_pragma.m"
            {
#line 185 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 185 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_118, (MR_Integer) 0)));
#line 185 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_118, (MR_Integer) 1)));

#line 187 "parse_tree_out_pragma.m"
              {
#line 187 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_119, parse_tree__parse_tree_out_pragma__Arity_120, (MR_Integer) 0, (MR_String) "no_determinism_warning", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 185 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 13:
#line 190 "parse_tree_out_pragma.m"
            {
#line 190 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 191 "parse_tree_out_pragma.m"
              {
#line 191 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(parse_tree__parse_tree_out_pragma__TabledInfo_30);
              }
#line 190 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 14:
#line 193 "parse_tree_out_pragma.m"
            {
#line 193 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 194 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_IO_40;

#line 194 "parse_tree_out_pragma.m"
              {
#line 194 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__FactTableInfo_31, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_IO_40);
              }
#line 193 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 15:
#line 199 "parse_tree_out_pragma.m"
            {
#line 199 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 200 "parse_tree_out_pragma.m"
              {
#line 200 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(parse_tree__parse_tree_out_pragma__OISUInfo_33);
              }
#line 199 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 16:
#line 202 "parse_tree_out_pragma.m"
            {
#line 202 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 202 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_121, (MR_Integer) 0)));
#line 202 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_121, (MR_Integer) 1)));

#line 204 "parse_tree_out_pragma.m"
              {
#line 204 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_122, parse_tree__parse_tree_out_pragma__Arity_123, (MR_Integer) 0, (MR_String) "promise_equivalent_clauses", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 202 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 17:
#line 207 "parse_tree_out_pragma.m"
            {
#line 207 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 207 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_124, (MR_Integer) 0)));
#line 207 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_124, (MR_Integer) 1)));

#line 209 "parse_tree_out_pragma.m"
              {
#line 209 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_125, parse_tree__parse_tree_out_pragma__Arity_126, (MR_Integer) 0, (MR_String) "promise_pure", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 207 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 18:
#line 212 "parse_tree_out_pragma.m"
            {
#line 212 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 212 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_127, (MR_Integer) 0)));
#line 212 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_127, (MR_Integer) 1)));

#line 214 "parse_tree_out_pragma.m"
              {
#line 214 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_128, parse_tree__parse_tree_out_pragma__Arity_129, (MR_Integer) 0, (MR_String) "promise_semipure", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 212 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 19:
#line 217 "parse_tree_out_pragma.m"
            {
#line 217 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TermInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 218 "parse_tree_out_pragma.m"
              {
#line 218 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__TermInfo_34);
              }
#line 217 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 20:
#line 220 "parse_tree_out_pragma.m"
            {
#line 220 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Term2Info_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 221 "parse_tree_out_pragma.m"
              {
#line 221 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__Term2Info_35);
              }
#line 220 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 21:
#line 223 "parse_tree_out_pragma.m"
            {
#line 223 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 223 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_130, (MR_Integer) 0)));
#line 223 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_130, (MR_Integer) 1)));

#line 225 "parse_tree_out_pragma.m"
              {
#line 225 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_131, parse_tree__parse_tree_out_pragma__Arity_132, (MR_Integer) 0, (MR_String) "terminates", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 223 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 22:
#line 228 "parse_tree_out_pragma.m"
            {
#line 228 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 228 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_133, (MR_Integer) 0)));
#line 228 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_133, (MR_Integer) 1)));

#line 230 "parse_tree_out_pragma.m"
              {
#line 230 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_134, parse_tree__parse_tree_out_pragma__Arity_135, (MR_Integer) 0, (MR_String) "does_not_terminate", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 228 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 23:
#line 233 "parse_tree_out_pragma.m"
            {
#line 233 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 233 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_136, (MR_Integer) 0)));
#line 233 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_136, (MR_Integer) 1)));

#line 235 "parse_tree_out_pragma.m"
              {
#line 235 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_137, parse_tree__parse_tree_out_pragma__Arity_138, (MR_Integer) 0, (MR_String) "check_termination", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 233 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 24:
#line 238 "parse_tree_out_pragma.m"
            {
#line 238 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 238 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Pred_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_139, (MR_Integer) 0)));
#line 238 "parse_tree_out_pragma.m"
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_139, (MR_Integer) 1)));

#line 240 "parse_tree_out_pragma.m"
              {
#line 240 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_140, parse_tree__parse_tree_out_pragma__Arity_141, (MR_Integer) 0, (MR_String) "mode_check_clauses", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 238 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 25:
#line 243 "parse_tree_out_pragma.m"
            {
#line 243 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__SharingInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 244 "parse_tree_out_pragma.m"
              {
#line 244 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0(parse_tree__parse_tree_out_pragma__Lang_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__SharingInfo_36);
              }
#line 243 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 26:
#line 246 "parse_tree_out_pragma.m"
            {
#line 246 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__ReuseInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 247 "parse_tree_out_pragma.m"
              {
#line 247 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0(parse_tree__parse_tree_out_pragma__Lang_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__ReuseInfo_37);
              }
#line 246 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 27:
#line 136 "parse_tree_out_pragma.m"
            {
#line 136 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FIMInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 137 "parse_tree_out_pragma.m"
              {
#line 137 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_import_module_3_p_0(parse_tree__parse_tree_out_pragma__FIMInfo_15);
              }
#line 136 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 28:
#line 196 "parse_tree_out_pragma.m"
            {
#line 196 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 197 "parse_tree_out_pragma.m"
              {
#line 197 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(parse_tree__parse_tree_out_pragma__TypeCtor_32);
              }
#line 196 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
          case (MR_Integer) 29:
#line 249 "parse_tree_out_pragma.m"
            {
#line 249 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 250 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_IO_40;

#line 250 "parse_tree_out_pragma.m"
              {
#line 250 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__RFSInfo_38, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_IO_40);
              }
#line 249 "parse_tree_out_pragma.m"
            }
#line 132 "parse_tree_out_pragma.m"
            break;
#line 132 "parse_tree_out_pragma.m"
        }
#line 132 "parse_tree_out_pragma.m"
        break;
#line 132 "parse_tree_out_pragma.m"
    }
#line 125 "parse_tree_out_pragma.m"
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
