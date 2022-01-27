/*
** Automatically generated from `parse_tree_out_pragma.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.maybe_error.mih"
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

#line 488 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(
#line 488 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35,
#line 488 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_1,
#line 488 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_3,
#line 488 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4_4,
#line 488 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5,
#line 488 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6);

#line 1645 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(
#line 1645 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44,
#line 1645 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1645 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1645 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);

#line 1642 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1(
#line 1642 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1642 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1642 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1642 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1635 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0(
#line 1635 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17,
#line 1635 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_4,
#line 1635 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8,
#line 1635 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9);

#line 1489 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(
#line 1489 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ArgSizeTerm_4);

#line 1484 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1(
#line 1484 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1484 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1484 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1484 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1472 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(
#line 1472 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Constraint_4);

#line 1469 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2(
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1469 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1(
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1435 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(
#line 1435 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 1435 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Term2Info_6);

#line 1391 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(
#line 1391 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1);

#line 1327 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(
#line 1327 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 1327 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TermInfo_6);

#line 1297 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(
#line 1297 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20,
#line 1297 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_5,
#line 1297 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_6,
#line 1297 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1297 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);

#line 1260 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(
#line 1260 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_4);

#line 1243 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(
#line 1243 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_4);

#line 1224 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0(
#line 1224 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24,
#line 1224 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_4,
#line 1224 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1224 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);

#line 1171 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1(
#line 1171 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1171 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 1150 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(
#line 1150 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_4);

#line 1037 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(
#line 1037 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16,
#line 1037 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1037 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1037 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);

#line 1000 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(
#line 1000 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_6,
#line 1000 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarNamePrint_7,
#line 1000 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3);

#line 897 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0(
#line 897 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47,
#line 897 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_4,
#line 897 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13,
#line 897 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14);

#line 884 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(
#line 884 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14,
#line 884 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 884 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 884 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);

#line 881 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1(
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 881 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 849 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0(
#line 849 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28,
#line 849 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEInfo_4,
#line 849 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11,
#line 849 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12);

#line 881 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1(
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 881 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 809 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0(
#line 809 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32,
#line 809 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_4,
#line 809 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12,
#line 809 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13);

#line 774 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0(
#line 774 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42,
#line 774 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 774 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_6,
#line 774 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_18,
#line 774 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19);

#line 760 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
#line 760 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1);

#line 749 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
#line 749 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_4,
#line 749 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__UnitSelector_5);

#line 746 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
#line 746 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 746 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 729 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
#line 729 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 729 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_6,
#line 729 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3);

#line 722 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
#line 722 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 722 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 713 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
#line 713 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 713 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 698 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
#line 698 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 698 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Sharing_6,
#line 698 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_7);

#line 696 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
#line 696 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 696 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

#line 524 "parse_tree_out_pragma.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
#line 524 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Attrs_4,
#line 524 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5);

#line 375 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2(
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 375 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 516 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1(
#line 516 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 516 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 516 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 516 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 441 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0(
#line 441 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50,
#line 441 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 441 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_6,
#line 441 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23,
#line 441 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24);

#line 377 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(
#line 377 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15,
#line 377 "parse_tree_out_pragma.m"
  MR_Char parse_tree__parse_tree_out_pragma__Char_4,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 377 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);

#line 375 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1(
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 375 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 332 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(
#line 332 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FCInfo_4);

#line 1626 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1(
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 1626 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1(
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 994 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
#line 994 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 994 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 994 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 994 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 375 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 375 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

#line 375 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1(
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 375 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[28][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[8][3];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[6][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[3][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_6[2][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_9[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_10[3][6];


#line 564 "parse_tree_out_pragma.m"
/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s {
#line 564 "parse_tree_out_pragma.m"
  const MR_String parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
#line 564 "parse_tree_out_pragma.m"
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s parse_tree__parse_tree_out_pragma_vector_common_7[4];

#line 653 "parse_tree_out_pragma.m"
/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s {
#line 653 "parse_tree_out_pragma.m"
  const MR_Word parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
#line 653 "parse_tree_out_pragma.m"
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



#line 1039 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1047 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1055 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1064 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1072 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 1081 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1090 "parse_tree.parse_tree_out_pragma.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_tabling_method_0
  }
};

#line 488 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(
#line 488 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35,
#line 488 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_1,
#line 488 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_3,
#line 488 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4_4,
#line 488 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5,
#line 488 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6)
#line 488 "parse_tree_out_pragma.m"
{
#line 492 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 492 "parse_tree_out_pragma.m"
    {
#line 492 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 492 "parse_tree_out_pragma.m"
      {
#line 492 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 492 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "parse_tree_out_pragma.m"
          *parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5;
#line 492 "parse_tree_out_pragma.m"
        else
#line 494 "parse_tree_out_pragma.m"
          {
#line 494 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__4_4, (MR_Integer) 0)));
#line 494 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__4_4, (MR_Integer) 1)));
#line 494 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__VarName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 1)));
#line 494 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Mode_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 2)));
#line 494 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 494 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 494 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__V_30_30;
#line 494 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31;
#line 494 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 495 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma___Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 0)));
#line 495 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma___BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 3)));
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35), ((MR_Box) (parse_tree__parse_tree_out_pragma__VarName_20)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
            }
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35), ((MR_Box) ((MR_String) " :: ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
            }
#line 498 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_30_30 = (MR_Word) parse_tree__parse_tree_out_pragma__InstVarSet_3;
#line 498 "parse_tree_out_pragma.m"
            {
#line 498 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[3], parse_tree__parse_tree_out_pragma__Lang_1, ((MR_Box) (parse_tree__parse_tree_out_pragma__V_30_30)), parse_tree__parse_tree_out_pragma__Mode_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31);
            }
#line 501 "parse_tree_out_pragma.m"
            if ((parse_tree__parse_tree_out_pragma__Vars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31;
#line 501 "parse_tree_out_pragma.m"
            else
#line 502 "parse_tree_out_pragma.m"
              {
#line 33 "parse_tree.parse_tree_out_info.int"
                void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
                {
#line 33 "parse_tree.parse_tree_out_info.int"
                  parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_35), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
                }
#line 502 "parse_tree_out_pragma.m"
              }
#line 505 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 505 "parse_tree_out_pragma.m"
            {
#line 505 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4__tmp_copy_4 = parse_tree__parse_tree_out_pragma__Vars_17;
#line 505 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_5 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;

#line 505 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_5;
#line 505 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__4_4 = parse_tree__parse_tree_out_pragma__HeadVar__4__tmp_copy_4;
#line 505 "parse_tree_out_pragma.m"
            }
#line 505 "parse_tree_out_pragma.m"
            continue;
#line 494 "parse_tree_out_pragma.m"
          }
#line 492 "parse_tree_out_pragma.m"
      }
#line 492 "parse_tree_out_pragma.m"
      break;
#line 492 "parse_tree_out_pragma.m"
    }
#line 488 "parse_tree_out_pragma.m"
}

#line 1645 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(
#line 1645 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44,
#line 1645 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1645 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1645 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3)
#line 1645 "parse_tree_out_pragma.m"
{
#line 1648 "parse_tree_out_pragma.m"
  {
#line 1648 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1648 "parse_tree_out_pragma.m"
#line 1648 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__HeadVar__1_1) {
#line 1648 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1648 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1648 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "concurrency")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1648 "parse_tree_out_pragma.m"
        }
#line 1648 "parse_tree_out_pragma.m"
        break;
#line 1648 "parse_tree_out_pragma.m"
      case (MR_Integer) 7:
#line 1662 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "conservative_gc")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1662 "parse_tree_out_pragma.m"
        }
#line 1648 "parse_tree_out_pragma.m"
        break;
#line 1648 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 1652 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "double_prec_float")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1652 "parse_tree_out_pragma.m"
        }
#line 1648 "parse_tree_out_pragma.m"
        break;
#line 1648 "parse_tree_out_pragma.m"
      case (MR_Integer) 3:
#line 1654 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "memo")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1654 "parse_tree_out_pragma.m"
        }
#line 1648 "parse_tree_out_pragma.m"
        break;
#line 1648 "parse_tree_out_pragma.m"
      case (MR_Integer) 4:
#line 1656 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "parallel_conj")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1656 "parse_tree_out_pragma.m"
        }
#line 1648 "parse_tree_out_pragma.m"
        break;
#line 1648 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1650 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "single_prec_float")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1650 "parse_tree_out_pragma.m"
        }
#line 1648 "parse_tree_out_pragma.m"
        break;
#line 1648 "parse_tree_out_pragma.m"
      case (MR_Integer) 6:
#line 1660 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "strict_sequential")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1660 "parse_tree_out_pragma.m"
        }
#line 1648 "parse_tree_out_pragma.m"
        break;
#line 1648 "parse_tree_out_pragma.m"
      case (MR_Integer) 5:
#line 1658 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "trailing")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
#line 1658 "parse_tree_out_pragma.m"
        }
#line 1648 "parse_tree_out_pragma.m"
        break;
#line 1648 "parse_tree_out_pragma.m"
    }
#line 1648 "parse_tree_out_pragma.m"
  }
#line 1645 "parse_tree_out_pragma.m"
}

#line 1642 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1(
#line 1642 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1642 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1642 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1642 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1642 "parse_tree_out_pragma.m"
{
#line 1642 "parse_tree_out_pragma.m"
  {
#line 1642 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1642 "parse_tree_out_pragma.m"
    {
#line 1642 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 1642 "parse_tree_out_pragma.m"
  }
#line 1642 "parse_tree_out_pragma.m"
}

#line 1635 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0(
#line 1635 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17,
#line 1635 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_4,
#line 1635 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8,
#line 1635 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9)
#line 1635 "parse_tree_out_pragma.m"
{
#line 1638 "parse_tree_out_pragma.m"
  {
#line 1638 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1638 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_required_feature_0;
#line 1638 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Features0_6 = (MR_Word) parse_tree__parse_tree_out_pragma__RFSInfo_4;
#line 1638 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Features_7;
#line 1638 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11;
#line 1638 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_13_13;
#line 1638 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 59 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1640 "parse_tree_out_pragma.m"
    {
#line 1640 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Features_7 = mercury__set__to_sorted_list_1_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18, parse_tree__parse_tree_out_pragma__Features0_6);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ":- pragma require_feature_set(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11);
    }
#line 1642 "parse_tree_out_pragma.m"
    {
#line 1642 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1642 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[5]));
#line 1642 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1));
#line 1642 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1642 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17));
#line 1642 "parse_tree_out_pragma.m"
    }
#line 59 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 18)));
#line 59 "parse_tree.parse_tree_out_info.int"
    {
#line 59 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18)), ((MR_Box) (parse_tree__parse_tree_out_pragma__Features_7)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_13_13)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9);
    }
#line 1638 "parse_tree_out_pragma.m"
  }
#line 1635 "parse_tree_out_pragma.m"
}

#line 1489 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(
#line 1489 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ArgSizeTerm_4)
#line 1489 "parse_tree_out_pragma.m"
{
#line 1491 "parse_tree_out_pragma.m"
  {
#line 1491 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1491 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__VarId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ArgSizeTerm_4, (MR_Integer) 0)));
#line 1491 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Coefficient_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ArgSizeTerm_4, (MR_Integer) 1)));

#line 1493 "parse_tree_out_pragma.m"
    {
#line 1493 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "term(");
    }
#line 1494 "parse_tree_out_pragma.m"
    {
#line 1494 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__VarId_6);
    }
#line 1495 "parse_tree_out_pragma.m"
    {
#line 1495 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1496 "parse_tree_out_pragma.m"
    {
#line 1496 "parse_tree_out_pragma.m"
      libs__rat__write_rat_3_p_0(parse_tree__parse_tree_out_pragma__Coefficient_7);
    }
#line 1497 "parse_tree_out_pragma.m"
    {
#line 1497 "parse_tree_out_pragma.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 1491 "parse_tree_out_pragma.m"
  }
#line 1489 "parse_tree_out_pragma.m"
}

#line 1484 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1(
#line 1484 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1484 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1484 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1484 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1484 "parse_tree_out_pragma.m"
{
#line 1484 "parse_tree_out_pragma.m"
  {
#line 1484 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1484 "parse_tree_out_pragma.m"
    {
#line 1484 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1484 "parse_tree_out_pragma.m"
  }
#line 1484 "parse_tree_out_pragma.m"
}

#line 1472 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(
#line 1472 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Constraint_4)
#line 1472 "parse_tree_out_pragma.m"
{
#line 1474 "parse_tree_out_pragma.m"
  {
#line 1474 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1474 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Terms_6;
#line 1474 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Constant_7;
#line 1474 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__OpStr_8;

#line 1478 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Constraint_4)) == (MR_mktag((MR_Integer) 1))))
#line 1479 "parse_tree_out_pragma.m"
      {
#line 1479 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Terms_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 0)));
#line 1479 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Constant_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 1)));
#line 1480 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__OpStr_8 = (MR_String) "eq(";
#line 1479 "parse_tree_out_pragma.m"
      }
#line 1478 "parse_tree_out_pragma.m"
    else
#line 1476 "parse_tree_out_pragma.m"
      {
#line 1476 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Terms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 0)));
#line 1476 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Constant_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 1)));
#line 1477 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__OpStr_8 = (MR_String) "le(";
#line 1476 "parse_tree_out_pragma.m"
      }
#line 1482 "parse_tree_out_pragma.m"
    {
#line 1482 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__OpStr_8);
    }
#line 1483 "parse_tree_out_pragma.m"
    {
#line 1483 "parse_tree_out_pragma.m"
      mercury__io__write_char_3_p_0((MR_Char) 91);
    }
#line 1484 "parse_tree_out_pragma.m"
    {
#line 1484 "parse_tree_out_pragma.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_term_0, parse_tree__parse_tree_out_pragma__Terms_6, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[7]);
    }
#line 1485 "parse_tree_out_pragma.m"
    {
#line 1485 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "], ");
    }
#line 1486 "parse_tree_out_pragma.m"
    {
#line 1486 "parse_tree_out_pragma.m"
      libs__rat__write_rat_3_p_0(parse_tree__parse_tree_out_pragma__Constant_7);
    }
#line 1487 "parse_tree_out_pragma.m"
    {
#line 1487 "parse_tree_out_pragma.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 1474 "parse_tree_out_pragma.m"
  }
#line 1472 "parse_tree_out_pragma.m"
}

#line 1469 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2(
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1469 "parse_tree_out_pragma.m"
{
#line 1469 "parse_tree_out_pragma.m"
  {
#line 1469 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1469 "parse_tree_out_pragma.m"
    {
#line 1469 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1469 "parse_tree_out_pragma.m"
  }
#line 1469 "parse_tree_out_pragma.m"
}

#line 1469 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1(
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1469 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1469 "parse_tree_out_pragma.m"
{
#line 1469 "parse_tree_out_pragma.m"
  {
#line 1469 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1469 "parse_tree_out_pragma.m"
    {
#line 1469 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1469 "parse_tree_out_pragma.m"
  }
#line 1469 "parse_tree_out_pragma.m"
}

#line 1435 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(
#line 1435 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 1435 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Term2Info_6)
#line 1435 "parse_tree_out_pragma.m"
{
#line 1438 "parse_tree_out_pragma.m"
  {
#line 1438 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1438 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredModesPF_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 0)));
#line 1438 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeSuccess_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 1)));
#line 1438 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeFailure_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 2)));
#line 1438 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 3)));
#line 1438 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_8, (MR_Integer) 0)));
#line 1438 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_8, (MR_Integer) 1)));
#line 1438 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_8, (MR_Integer) 2)));

#line 1442 "parse_tree_out_pragma.m"
    {
#line 1442 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination2_info(");
    }
#line 1447 "parse_tree_out_pragma.m"
#line 1447 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_14) {
#line 1447 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1447 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1448 "parse_tree_out_pragma.m"
        {
#line 1448 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_15;
#line 1448 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_16;
#line 1448 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_21_21;
#line 1449 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_16;

#line 1449 "parse_tree_out_pragma.m"
          {
#line 1449 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_13, &parse_tree__parse_tree_out_pragma__FuncModeList_15, &parse_tree__parse_tree_out_pragma__conv0_RetMode_16);
          }
#line 1449 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_16 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_16);
#line 1450 "parse_tree_out_pragma.m"
          {
#line 1450 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_21_21 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
          }
#line 1450 "parse_tree_out_pragma.m"
          {
#line 1450 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__V_21_21, parse_tree__parse_tree_out_pragma__PredName_12, parse_tree__parse_tree_out_pragma__FuncModeList_15, parse_tree__parse_tree_out_pragma__RetMode_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1448 "parse_tree_out_pragma.m"
        }
#line 1447 "parse_tree_out_pragma.m"
        break;
#line 1447 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1444 "parse_tree_out_pragma.m"
        {
#line 1444 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_24_24;

#line 1445 "parse_tree_out_pragma.m"
          {
#line 1445 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_24_24 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
          }
#line 1445 "parse_tree_out_pragma.m"
          {
#line 1445 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__V_24_24, parse_tree__parse_tree_out_pragma__PredName_12, parse_tree__parse_tree_out_pragma__ModeList_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1444 "parse_tree_out_pragma.m"
        }
#line 1447 "parse_tree_out_pragma.m"
        break;
#line 1447 "parse_tree_out_pragma.m"
    }
#line 1453 "parse_tree_out_pragma.m"
    {
#line 1453 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1464 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeSuccess_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1464 "parse_tree_out_pragma.m"
      {
#line 1465 "parse_tree_out_pragma.m"
        {
#line 1465 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1464 "parse_tree_out_pragma.m"
      }
#line 1464 "parse_tree_out_pragma.m"
    else
#line 1466 "parse_tree_out_pragma.m"
      {
#line 1466 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__ArgSizeInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeSuccess_9, (MR_Integer) 0)));

#line 1467 "parse_tree_out_pragma.m"
        {
#line 1467 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "constaints(");
        }
#line 1468 "parse_tree_out_pragma.m"
        {
#line 1468 "parse_tree_out_pragma.m"
          mercury__io__write_char_3_p_0((MR_Char) 91);
        }
#line 1469 "parse_tree_out_pragma.m"
        {
#line 1469 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0, parse_tree__parse_tree_out_pragma__ArgSizeInfo_46, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[5]);
        }
#line 1470 "parse_tree_out_pragma.m"
        {
#line 1470 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
#line 1466 "parse_tree_out_pragma.m"
      }
#line 1455 "parse_tree_out_pragma.m"
    {
#line 1455 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1464 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeFailure_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1464 "parse_tree_out_pragma.m"
      {
#line 1465 "parse_tree_out_pragma.m"
        {
#line 1465 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1464 "parse_tree_out_pragma.m"
      }
#line 1464 "parse_tree_out_pragma.m"
    else
#line 1466 "parse_tree_out_pragma.m"
      {
#line 1466 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__ArgSizeInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeFailure_10, (MR_Integer) 0)));

#line 1467 "parse_tree_out_pragma.m"
        {
#line 1467 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "constaints(");
        }
#line 1468 "parse_tree_out_pragma.m"
        {
#line 1468 "parse_tree_out_pragma.m"
          mercury__io__write_char_3_p_0((MR_Char) 91);
        }
#line 1469 "parse_tree_out_pragma.m"
        {
#line 1469 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0, parse_tree__parse_tree_out_pragma__ArgSizeInfo_68, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[6]);
        }
#line 1470 "parse_tree_out_pragma.m"
        {
#line 1470 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
#line 1466 "parse_tree_out_pragma.m"
      }
#line 1457 "parse_tree_out_pragma.m"
    {
#line 1457 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1504 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTermination_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1504 "parse_tree_out_pragma.m"
      {
#line 1505 "parse_tree_out_pragma.m"
        {
#line 1505 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1504 "parse_tree_out_pragma.m"
      }
#line 1504 "parse_tree_out_pragma.m"
    else
#line 1507 "parse_tree_out_pragma.m"
      {
#line 1507 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Termination_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTermination_11, (MR_Integer) 0)));
#line 1507 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__TerminationStr_91;

#line 1511 "parse_tree_out_pragma.m"
        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Termination_89)) == (MR_mktag((MR_Integer) 1))))
#line 1510 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminationStr_91 = (MR_String) "can_loop";
#line 1511 "parse_tree_out_pragma.m"
        else
#line 1513 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminationStr_91 = (MR_String) "cannot_loop";
#line 1515 "parse_tree_out_pragma.m"
        {
#line 1515 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__TerminationStr_91);
        }
#line 1507 "parse_tree_out_pragma.m"
      }
#line 1459 "parse_tree_out_pragma.m"
    {
#line 1459 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1438 "parse_tree_out_pragma.m"
  }
#line 1435 "parse_tree_out_pragma.m"
}

#line 1391 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(
#line 1391 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1)
#line 1391 "parse_tree_out_pragma.m"
{
#line 1393 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 1393 "parse_tree_out_pragma.m"
    {
#line 1393 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 1393 "parse_tree_out_pragma.m"
      {
#line 1393 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1393 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1393 "parse_tree_out_pragma.m"
          {
#line 1393 "parse_tree_out_pragma.m"
          }
#line 1393 "parse_tree_out_pragma.m"
        else
#line 1394 "parse_tree_out_pragma.m"
          {
#line 1394 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__UsedArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 1394 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));

#line 1395 "parse_tree_out_pragma.m"
            {
#line 1395 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1403 "parse_tree_out_pragma.m"
#line 1403 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__UsedArg_7) {
#line 1403 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1403 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1403 "parse_tree_out_pragma.m"
                {
#line 1404 "parse_tree_out_pragma.m"
                  {
#line 1404 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "no");
                  }
#line 1403 "parse_tree_out_pragma.m"
                }
#line 1403 "parse_tree_out_pragma.m"
                break;
#line 1403 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1406 "parse_tree_out_pragma.m"
                {
#line 1407 "parse_tree_out_pragma.m"
                  {
#line 1407 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "yes");
                  }
#line 1406 "parse_tree_out_pragma.m"
                }
#line 1403 "parse_tree_out_pragma.m"
                break;
#line 1403 "parse_tree_out_pragma.m"
            }
#line 1397 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 1397 "parse_tree_out_pragma.m"
            {
#line 1397 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1 = parse_tree__parse_tree_out_pragma__UsedArgs_8;

#line 1397 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__1_1 = parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1;
#line 1397 "parse_tree_out_pragma.m"
            }
#line 1397 "parse_tree_out_pragma.m"
            continue;
#line 1394 "parse_tree_out_pragma.m"
          }
#line 1393 "parse_tree_out_pragma.m"
      }
#line 1393 "parse_tree_out_pragma.m"
      break;
#line 1393 "parse_tree_out_pragma.m"
    }
#line 1391 "parse_tree_out_pragma.m"
}

#line 1327 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(
#line 1327 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 1327 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TermInfo_6)
#line 1327 "parse_tree_out_pragma.m"
{
#line 1330 "parse_tree_out_pragma.m"
  {
#line 1330 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1330 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_17_17 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1330 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_6, (MR_Integer) 0)));
#line 1330 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeArgSize_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_6, (MR_Integer) 1)));
#line 1330 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_6, (MR_Integer) 2)));
#line 1330 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_8, (MR_Integer) 0)));
#line 1330 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_8, (MR_Integer) 1)));
#line 1330 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_8, (MR_Integer) 2)));

#line 1334 "parse_tree_out_pragma.m"
    {
#line 1334 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_pragma_termination_info_components_8_p_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_17_17, parse_tree__parse_tree_out_pragma__TypeCtorInfo_17_17, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__PredOrFunc_13, parse_tree__parse_tree_out_pragma__SymName_11, parse_tree__parse_tree_out_pragma__ModeList_12, parse_tree__parse_tree_out_pragma__MaybeArgSize_9, parse_tree__parse_tree_out_pragma__MaybeTermination_10);
    }
#line 1330 "parse_tree_out_pragma.m"
  }
#line 1327 "parse_tree_out_pragma.m"
}

#line 1297 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(
#line 1297 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20,
#line 1297 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_5,
#line 1297 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_6,
#line 1297 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1297 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11)
#line 1297 "parse_tree_out_pragma.m"
{
#line 1300 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 1300 "parse_tree_out_pragma.m"
    {
#line 1300 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 1300 "parse_tree_out_pragma.m"
      {
#line 1300 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1300 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
#line 1300 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 1300 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredName_25;
#line 1300 "parse_tree_out_pragma.m"
        MR_Integer parse_tree__parse_tree_out_pragma__Arity_26;
#line 1300 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28;
#line 1300 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 39 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "\t\t")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
        }
#line 1317 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_5, (MR_Integer) 0)));
#line 1317 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_5, (MR_Integer) 1)));
#line 1318 "parse_tree_out_pragma.m"
        {
#line 1318 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_25, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30);
        }
#line 39 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
        {
#line 39 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_26)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
        }
#line 1306 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__PredNameArities_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1304 "parse_tree_out_pragma.m"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);
            }
#line 1304 "parse_tree_out_pragma.m"
          }
#line 1306 "parse_tree_out_pragma.m"
        else
#line 1307 "parse_tree_out_pragma.m"
          {
#line 1307 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__HeadPredNameArity_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__PredNameArities_6, (MR_Integer) 0)));
#line 1307 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__TailPredNameArities_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__PredNameArities_6, (MR_Integer) 1)));
#line 1307 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ",\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
            }
#line 1309 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 1309 "parse_tree_out_pragma.m"
            {
#line 1309 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity__tmp_copy_5 = parse_tree__parse_tree_out_pragma__HeadPredNameArity_8;
#line 1309 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArities__tmp_copy_6 = parse_tree__parse_tree_out_pragma__TailPredNameArities_9;
#line 1309 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_10 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;

#line 1309 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_10;
#line 1309 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__PredNameArities_6 = parse_tree__parse_tree_out_pragma__PredNameArities__tmp_copy_6;
#line 1309 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__PredNameArity_5 = parse_tree__parse_tree_out_pragma__PredNameArity__tmp_copy_5;
#line 1309 "parse_tree_out_pragma.m"
            }
#line 1309 "parse_tree_out_pragma.m"
            continue;
#line 1307 "parse_tree_out_pragma.m"
          }
#line 1300 "parse_tree_out_pragma.m"
      }
#line 1300 "parse_tree_out_pragma.m"
      break;
#line 1300 "parse_tree_out_pragma.m"
    }
#line 1297 "parse_tree_out_pragma.m"
}

#line 1260 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(
#line 1260 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_4)
#line 1260 "parse_tree_out_pragma.m"
{
#line 1264 "parse_tree_out_pragma.m"
  {
#line 1264 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1264 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 1264 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 0)));
#line 1264 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__CreatorPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 1)));
#line 1264 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MutatorPreds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 2)));
#line 1264 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__DestructorPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 3)));
#line 1264 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_18;
#line 1264 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_19;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_15_21;
#line 1274 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_17_23;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_19_25;
#line 39 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 39 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_20_26;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_22_28;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_24_30;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv13_STATE_VARIABLE_U_27_33;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv15_STATE_VARIABLE_U_29_35;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_32_38;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_19)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv20_STATE_VARIABLE_U_34_40;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_U_37_43;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_24)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv25_STATE_VARIABLE_IO_7;

#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ":- pragma oisu(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_15_21);
    }
#line 1273 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_14, (MR_Integer) 0)));
#line 1273 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_14, (MR_Integer) 1)));
#line 1274 "parse_tree_out_pragma.m"
    {
#line 1274 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_17_23);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_19_25);
    }
#line 39 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
    {
#line 39 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_19)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_20_26);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ",\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_22_28);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tcreators([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_24_30);
    }
#line 1292 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__CreatorPreds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1292 "parse_tree_out_pragma.m"
      {
#line 1292 "parse_tree_out_pragma.m"
      }
#line 1292 "parse_tree_out_pragma.m"
    else
#line 1293 "parse_tree_out_pragma.m"
      {
#line 1293 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__CreatorPreds_15, (MR_Integer) 0)));
#line 1293 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__CreatorPreds_15, (MR_Integer) 1)));
#line 1294 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_U_25_31;

#line 1294 "parse_tree_out_pragma.m"
        {
#line 1294 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_49, parse_tree__parse_tree_out_pragma__PredNameArities_50, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_U_25_31);
        }
#line 1293 "parse_tree_out_pragma.m"
      }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv13_STATE_VARIABLE_U_27_33);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tmutators([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv15_STATE_VARIABLE_U_29_35);
    }
#line 1292 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MutatorPreds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1292 "parse_tree_out_pragma.m"
      {
#line 1292 "parse_tree_out_pragma.m"
      }
#line 1292 "parse_tree_out_pragma.m"
    else
#line 1293 "parse_tree_out_pragma.m"
      {
#line 1293 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MutatorPreds_16, (MR_Integer) 0)));
#line 1293 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MutatorPreds_16, (MR_Integer) 1)));
#line 1294 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_30_36;

#line 1294 "parse_tree_out_pragma.m"
        {
#line 1294 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_58, parse_tree__parse_tree_out_pragma__PredNameArities_59, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_30_36);
        }
#line 1293 "parse_tree_out_pragma.m"
      }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_32_38);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_19(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tdestructors([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv20_STATE_VARIABLE_U_34_40);
    }
#line 1292 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__DestructorPreds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1292 "parse_tree_out_pragma.m"
      {
#line 1292 "parse_tree_out_pragma.m"
      }
#line 1292 "parse_tree_out_pragma.m"
    else
#line 1293 "parse_tree_out_pragma.m"
      {
#line 1293 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__DestructorPreds_17, (MR_Integer) 0)));
#line 1293 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__DestructorPreds_17, (MR_Integer) 1)));
#line 1294 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_35_41;

#line 1294 "parse_tree_out_pragma.m"
        {
#line 1294 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_67, parse_tree__parse_tree_out_pragma__PredNameArities_68, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_35_41);
        }
#line 1293 "parse_tree_out_pragma.m"
      }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t])\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_U_37_43);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_24(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv25_STATE_VARIABLE_IO_7);
    }
#line 1264 "parse_tree_out_pragma.m"
  }
#line 1260 "parse_tree_out_pragma.m"
}

#line 1243 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(
#line 1243 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_4)
#line 1243 "parse_tree_out_pragma.m"
{
#line 1246 "parse_tree_out_pragma.m"
  {
#line 1246 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1246 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_4, (MR_Integer) 0)));
#line 1246 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_4, (MR_Integer) 1)));

#line 1248 "parse_tree_out_pragma.m"
    {
#line 1248 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma reserve_tag(");
    }
#line 1249 "parse_tree_out_pragma.m"
    {
#line 1249 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_6);
    }
#line 1251 "parse_tree_out_pragma.m"
    {
#line 1251 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 1252 "parse_tree_out_pragma.m"
    {
#line 1252 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__TypeArity_7);
    }
#line 1253 "parse_tree_out_pragma.m"
    {
#line 1253 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1246 "parse_tree_out_pragma.m"
  }
#line 1243 "parse_tree_out_pragma.m"
}

#line 1224 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0(
#line 1224 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24,
#line 1224 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_4,
#line 1224 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
#line 1224 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11)
#line 1224 "parse_tree_out_pragma.m"
{
#line 1227 "parse_tree_out_pragma.m"
  {
#line 1227 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1227 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FactTableInfo_4, (MR_Integer) 0)));
#line 1227 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FactTableInfo_4, (MR_Integer) 1)));
#line 1227 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_6, (MR_Integer) 0)));
#line 1227 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_6, (MR_Integer) 1)));
#line 1227 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
#line 1227 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
#line 1227 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
#line 1227 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18;
#line 1227 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
#line 1227 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 39 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 47 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ":- pragma fact_table(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
    }
#line 1231 "parse_tree_out_pragma.m"
    {
#line 1231 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_8, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
    }
#line 39 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
    {
#line 39 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_9)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
    }
#line 47 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 47 "parse_tree.parse_tree_out_info.int"
    {
#line 47 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);
    }
#line 1227 "parse_tree_out_pragma.m"
  }
#line 1224 "parse_tree_out_pragma.m"
}

#line 1171 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1(
#line 1171 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1171 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 1171 "parse_tree_out_pragma.m"
{
#line 1171 "parse_tree_out_pragma.m"
  {
#line 1171 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 1171 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 1171 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2;

#line 1171 "parse_tree_out_pragma.m"
    {
#line 1171 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1171 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2));
#line 1171 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 1171 "parse_tree_out_pragma.m"
  }
#line 1171 "parse_tree_out_pragma.m"
}

#line 1150 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(
#line 1150 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_4)
#line 1150 "parse_tree_out_pragma.m"
{
#line 1153 "parse_tree_out_pragma.m"
  {
#line 1153 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1153 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__EvalMethod_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 0)));
#line 1153 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityMPF_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 1)));
#line 1153 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeAttributes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 3)));
#line 1153 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 0)));
#line 1153 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 1)));
#line 1153 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__PragmaName_13;
#line 1153 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeAfter_28;
#line 1154 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma___Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 2)));
#line 1156 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma___MaybePorF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 2)));

#line 1157 "parse_tree_out_pragma.m"
    {
#line 1157 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__PragmaName_13 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(parse_tree__parse_tree_out_pragma__EvalMethod_6);
    }
#line 1212 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeAttributes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1212 "parse_tree_out_pragma.m"
    else
#line 1159 "parse_tree_out_pragma.m"
      {
#line 1159 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Attributes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAttributes_9, (MR_Integer) 0)));
#line 1159 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Strictness_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 0)));
#line 1159 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 1)));
#line 1159 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Stats_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 2)));
#line 1159 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__AllowReset_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 3)));
#line 1159 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1159 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43;
#line 1159 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49;
#line 1159 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50;
#line 1159 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52;

#line 1166 "parse_tree_out_pragma.m"
#line 1166 "parse_tree_out_pragma.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Strictness_15)) {
#line 1166 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1166 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1166 "parse_tree_out_pragma.m"
#line 1166 "parse_tree_out_pragma.m"
            switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__Strictness_15)) {
#line 1166 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1166 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1165 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33;
#line 1166 "parse_tree_out_pragma.m"
                break;
#line 1166 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1167 "parse_tree_out_pragma.m"
                {
#line 1168 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[27]);
#line 1167 "parse_tree_out_pragma.m"
                }
#line 1166 "parse_tree_out_pragma.m"
                break;
#line 1166 "parse_tree_out_pragma.m"
            }
#line 1166 "parse_tree_out_pragma.m"
            break;
#line 1166 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1170 "parse_tree_out_pragma.m"
            {
#line 1170 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Strictness_15, (MR_Integer) 0)));
#line 1170 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HiddenArgMethod_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Strictness_15, (MR_Integer) 1)));
#line 1170 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__ArgStrs_22;
#line 1170 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__ArgsStr_23;
#line 1170 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__HiddenArgStr_24;
#line 1170 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__SpecifiedStr_25;
#line 1170 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_37_37;
#line 1170 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_38_38;
#line 1170 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_40_40;

#line 1171 "parse_tree_out_pragma.m"
              {
#line 1171 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__ArgStrs_22 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[4], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[4], parse_tree__parse_tree_out_pragma__Args_20);
              }
#line 1172 "parse_tree_out_pragma.m"
              {
#line 1172 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__ArgsStr_23 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__ArgStrs_22);
              }
#line 1176 "parse_tree_out_pragma.m"
#line 1176 "parse_tree_out_pragma.m"
              switch (parse_tree__parse_tree_out_pragma__HiddenArgMethod_21) {
#line 1176 "parse_tree_out_pragma.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1176 "parse_tree_out_pragma.m"
                case (MR_Integer) 1:
#line 1178 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__HiddenArgStr_24 = (MR_String) "hidden_arg_addr";
#line 1176 "parse_tree_out_pragma.m"
                  break;
#line 1176 "parse_tree_out_pragma.m"
                case (MR_Integer) 0:
#line 1175 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__HiddenArgStr_24 = (MR_String) "hidden_arg_value";
#line 1176 "parse_tree_out_pragma.m"
                  break;
#line 1176 "parse_tree_out_pragma.m"
              }
#line 1181 "parse_tree_out_pragma.m"
              {
#line 1181 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_40_40 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__HiddenArgStr_24, (MR_String) ")");
              }
#line 1180 "parse_tree_out_pragma.m"
              {
#line 1180 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "], ", parse_tree__parse_tree_out_pragma__V_40_40);
              }
#line 1180 "parse_tree_out_pragma.m"
              {
#line 1180 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_37_37 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__ArgsStr_23, parse_tree__parse_tree_out_pragma__V_38_38);
              }
#line 1180 "parse_tree_out_pragma.m"
              {
#line 1180 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__SpecifiedStr_25 = mercury__string__f_43_43_2_f_0((MR_String) "specified([", parse_tree__parse_tree_out_pragma__V_37_37);
              }
#line 1182 "parse_tree_out_pragma.m"
              {
#line 1182 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__SpecifiedStr_25));
#line 1182 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33));
#line 1182 "parse_tree_out_pragma.m"
              }
#line 1170 "parse_tree_out_pragma.m"
            }
#line 1166 "parse_tree_out_pragma.m"
            break;
#line 1166 "parse_tree_out_pragma.m"
        }
#line 1188 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1189 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43;
#line 1188 "parse_tree_out_pragma.m"
        else
#line 1185 "parse_tree_out_pragma.m"
          {
#line 1185 "parse_tree_out_pragma.m"
            MR_Integer parse_tree__parse_tree_out_pragma__SizeLimit_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16, (MR_Integer) 0)));
#line 1185 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__LimitStr_27;
#line 1185 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_46_46;
#line 1185 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_47_47;

#line 1186 "parse_tree_out_pragma.m"
            {
#line 1186 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_47_47 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_out_pragma__SizeLimit_26);
            }
#line 1186 "parse_tree_out_pragma.m"
            {
#line 1186 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_46_46 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__V_47_47, (MR_String) ")");
            }
#line 1186 "parse_tree_out_pragma.m"
            {
#line 1186 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__LimitStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "limit(", parse_tree__parse_tree_out_pragma__V_46_46);
            }
#line 1187 "parse_tree_out_pragma.m"
            {
#line 1187 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "parse_tree_out_pragma.m"
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__LimitStr_27));
#line 1187 "parse_tree_out_pragma.m"
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43));
#line 1187 "parse_tree_out_pragma.m"
            }
#line 1185 "parse_tree_out_pragma.m"
          }
#line 1194 "parse_tree_out_pragma.m"
#line 1194 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__Stats_17) {
#line 1194 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1194 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1195 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49;
#line 1194 "parse_tree_out_pragma.m"
            break;
#line 1194 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1192 "parse_tree_out_pragma.m"
            {
#line 1193 "parse_tree_out_pragma.m"
              {
#line 1193 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50, 0) = ((MR_Box) ((MR_String) "statistics"));
#line 1193 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49));
#line 1193 "parse_tree_out_pragma.m"
              }
#line 1192 "parse_tree_out_pragma.m"
            }
#line 1194 "parse_tree_out_pragma.m"
            break;
#line 1194 "parse_tree_out_pragma.m"
        }
#line 1200 "parse_tree_out_pragma.m"
#line 1200 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__AllowReset_18) {
#line 1200 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1200 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1198 "parse_tree_out_pragma.m"
            {
#line 1199 "parse_tree_out_pragma.m"
              {
#line 1199 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52, 0) = ((MR_Box) ((MR_String) "allow_reset"));
#line 1199 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50));
#line 1199 "parse_tree_out_pragma.m"
              }
#line 1198 "parse_tree_out_pragma.m"
            }
#line 1200 "parse_tree_out_pragma.m"
            break;
#line 1200 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1201 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50;
#line 1200 "parse_tree_out_pragma.m"
            break;
#line 1200 "parse_tree_out_pragma.m"
        }
#line 1206 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1206 "parse_tree_out_pragma.m"
        else
#line 1207 "parse_tree_out_pragma.m"
          {
#line 1207 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_54_54;
#line 1207 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_56_56;
#line 1207 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_57_57;

#line 1209 "parse_tree_out_pragma.m"
            {
#line 1209 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_57_57 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52);
            }
#line 1209 "parse_tree_out_pragma.m"
            {
#line 1209 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_56_56 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__V_57_57, (MR_String) "]");
            }
#line 1209 "parse_tree_out_pragma.m"
            {
#line 1209 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "[", parse_tree__parse_tree_out_pragma__V_56_56);
            }
#line 1209 "parse_tree_out_pragma.m"
            {
#line 1209 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1209 "parse_tree_out_pragma.m"
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_28, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_54_54));
#line 1209 "parse_tree_out_pragma.m"
            }
#line 1207 "parse_tree_out_pragma.m"
          }
#line 1159 "parse_tree_out_pragma.m"
      }
#line 1216 "parse_tree_out_pragma.m"
    {
#line 1216 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__PredName_10, parse_tree__parse_tree_out_pragma__Arity_11, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PragmaName_13, parse_tree__parse_tree_out_pragma__MaybeAfter_28);
    }
#line 1153 "parse_tree_out_pragma.m"
  }
#line 1150 "parse_tree_out_pragma.m"
}

#line 1037 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(
#line 1037 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16,
#line 1037 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 1037 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
#line 1037 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3)
#line 1037 "parse_tree_out_pragma.m"
{
#line 1040 "parse_tree_out_pragma.m"
  while (MR_TRUE)
#line 1040 "parse_tree_out_pragma.m"
    {
#line 1040 "parse_tree_out_pragma.m"
      /* tailcall optimized into a loop */
#line 1040 "parse_tree_out_pragma.m"
      {
#line 1040 "parse_tree_out_pragma.m"
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1040 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "parse_tree_out_pragma.m"
          *parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2;
#line 1040 "parse_tree_out_pragma.m"
        else
#line 1041 "parse_tree_out_pragma.m"
          {
#line 1041 "parse_tree_out_pragma.m"
            MR_Integer parse_tree__parse_tree_out_pragma__First_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 1041 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 1041 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
#line 1041 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 39 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
            }
#line 39 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
            {
#line 39 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16), ((MR_Box) (parse_tree__parse_tree_out_pragma__First_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
            }
#line 1044 "parse_tree_out_pragma.m"
            /* direct tailcall eliminated */
#line 1044 "parse_tree_out_pragma.m"
            {
#line 1044 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1 = parse_tree__parse_tree_out_pragma__Rest_8;
#line 1044 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_2 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;

#line 1044 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_2;
#line 1044 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__1_1 = parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1;
#line 1044 "parse_tree_out_pragma.m"
            }
#line 1044 "parse_tree_out_pragma.m"
            continue;
#line 1041 "parse_tree_out_pragma.m"
          }
#line 1040 "parse_tree_out_pragma.m"
      }
#line 1040 "parse_tree_out_pragma.m"
      break;
#line 1040 "parse_tree_out_pragma.m"
    }
#line 1037 "parse_tree_out_pragma.m"
}

#line 1000 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(
#line 1000 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_6,
#line 1000 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarNamePrint_7,
#line 1000 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3)
#line 1000 "parse_tree_out_pragma.m"
{
#line 1003 "parse_tree_out_pragma.m"
  {
#line 1003 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1003 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 0)));
#line 1003 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 1)));

#line 1004 "parse_tree_out_pragma.m"
    {
#line 1004 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out_pragma__VarSet_6, parse_tree__parse_tree_out_pragma__VarNamePrint_7, parse_tree__parse_tree_out_pragma__Var_8);
    }
#line 1005 "parse_tree_out_pragma.m"
    {
#line 1005 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
#line 1006 "parse_tree_out_pragma.m"
    {
#line 1006 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_6, parse_tree__parse_tree_out_pragma__VarNamePrint_7, parse_tree__parse_tree_out_pragma__Type_9);
    }
#line 1003 "parse_tree_out_pragma.m"
  }
#line 1000 "parse_tree_out_pragma.m"
}

#line 897 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0(
#line 897 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47,
#line 897 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_4,
#line 897 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13,
#line 897 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14)
#line 897 "parse_tree_out_pragma.m"
{
#line 900 "parse_tree_out_pragma.m"
  {
#line 900 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 900 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 0)));
#line 900 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 1)));
#line 900 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybePorF_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 2)));
#line 900 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeBackend_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 3)));

#line 919 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybePorF_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 906 "parse_tree_out_pragma.m"
      {
#line 906 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 906 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37;
#line 906 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
#line 906 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_40_40;
#line 906 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 39 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ":- external(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
        }
#line 910 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybeBackend_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 910 "parse_tree_out_pragma.m"
        else
#line 911 "parse_tree_out_pragma.m"
          {
#line 911 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Backend_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeBackend_9, (MR_Integer) 0)));
#line 911 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_34_34;
#line 911 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35;
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 943 "parse_tree_out_pragma.m"
#line 943 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Backend_10) {
#line 943 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 943 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 947 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_34_34 = (MR_String) "high_level_backend";
#line 943 "parse_tree_out_pragma.m"
                break;
#line 943 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 944 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_34_34 = (MR_String) "low_level_backend";
#line 943 "parse_tree_out_pragma.m"
                break;
#line 943 "parse_tree_out_pragma.m"
            }
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_34_34)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35);
            }
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37);
            }
#line 911 "parse_tree_out_pragma.m"
          }
#line 915 "parse_tree_out_pragma.m"
        {
#line 915 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, parse_tree__parse_tree_out_pragma__PredName_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_40_40);
        }
#line 39 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
        {
#line 39 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_40_40, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14);
        }
#line 906 "parse_tree_out_pragma.m"
      }
#line 919 "parse_tree_out_pragma.m"
    else
#line 920 "parse_tree_out_pragma.m"
      {
#line 920 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PorF_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePorF_8, (MR_Integer) 0)));
#line 920 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__PorFStr_12;
#line 920 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
#line 920 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
#line 920 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19;
#line 920 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
#line 920 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 920 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
#line 920 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 39 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 921 "parse_tree_out_pragma.m"
        {
#line 921 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PorFStr_12 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__parse_tree_out_pragma__PorF_11);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ":- pragma external_")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__PorFStr_12)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19);
        }
#line 925 "parse_tree_out_pragma.m"
        {
#line 925 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, parse_tree__parse_tree_out_pragma__PredName_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
        }
#line 39 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
        {
#line 39 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23);
        }
#line 930 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybeBackend_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
#line 930 "parse_tree_out_pragma.m"
        else
#line 931 "parse_tree_out_pragma.m"
          {
#line 931 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 931 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_26_26;
#line 931 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 931 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__Backend_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeBackend_9, (MR_Integer) 0)));
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ", [")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
            }
#line 943 "parse_tree_out_pragma.m"
#line 943 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Backend_44) {
#line 943 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 943 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 947 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_26_26 = (MR_String) "high_level_backend";
#line 943 "parse_tree_out_pragma.m"
                break;
#line 943 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 944 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_26_26 = (MR_String) "low_level_backend";
#line 943 "parse_tree_out_pragma.m"
                break;
#line 943 "parse_tree_out_pragma.m"
            }
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_26_26)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
            }
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
            }
#line 931 "parse_tree_out_pragma.m"
          }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_47), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14);
        }
#line 920 "parse_tree_out_pragma.m"
      }
#line 900 "parse_tree_out_pragma.m"
  }
#line 897 "parse_tree_out_pragma.m"
}

#line 884 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(
#line 884 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14,
#line 884 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
#line 884 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 884 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8)
#line 884 "parse_tree_out_pragma.m"
{
#line 887 "parse_tree_out_pragma.m"
  {
#line 887 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 887 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
#line 887 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));
#line 887 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10;
#line 887 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 47 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 888 "parse_tree_out_pragma.m"
    {
#line 888 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__SymName_4, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) " - ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12);
    }
#line 47 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 47 "parse_tree.parse_tree_out_info.int"
    {
#line 47 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__String_5)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
    }
#line 887 "parse_tree_out_pragma.m"
  }
#line 884 "parse_tree_out_pragma.m"
}

#line 881 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1(
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 881 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 881 "parse_tree_out_pragma.m"
{
#line 881 "parse_tree_out_pragma.m"
  {
#line 881 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 881 "parse_tree_out_pragma.m"
    {
#line 881 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 881 "parse_tree_out_pragma.m"
  }
#line 881 "parse_tree_out_pragma.m"
}

#line 849 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0(
#line 849 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28,
#line 849 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEInfo_4,
#line 849 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11,
#line 849 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12)
#line 849 "parse_tree_out_pragma.m"
{
#line 852 "parse_tree_out_pragma.m"
  {
#line 852 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 852 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 0)));
#line 852 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 1)));
#line 852 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Values_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 2)));
#line 852 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_9;
#line 852 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_10;
#line 852 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
#line 852 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
#line 852 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
#line 852 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19;
#line 852 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
#line 852 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 852 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24;
#line 852 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 852 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34;
#line 852 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_36_36;
#line 852 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 39 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 37 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 59 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 37 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ":- pragma foreign_enum(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
    }
#line 855 "parse_tree_out_pragma.m"
    {
#line 855 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
    }
#line 857 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 0)));
#line 857 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 1)));
#line 858 "parse_tree_out_pragma.m"
    {
#line 858 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_9, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
#line 39 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
    {
#line 39 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_10)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24);
    }
#line 37 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 7)));
#line 37 "parse_tree.parse_tree_out_info.int"
    {
#line 37 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (MR_Word) ((MR_Char) 91)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34);
    }
#line 881 "parse_tree_out_pragma.m"
    {
#line 881 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 881 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
#line 881 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1));
#line 881 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 881 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28));
#line 881 "parse_tree_out_pragma.m"
    }
#line 59 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 18)));
#line 59 "parse_tree.parse_tree_out_info.int"
    {
#line 59 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])), ((MR_Box) (parse_tree__parse_tree_out_pragma__Values_8)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_36_36)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37);
    }
#line 37 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 7)));
#line 37 "parse_tree.parse_tree_out_info.int"
    {
#line 37 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (MR_Word) ((MR_Char) 93)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12);
    }
#line 852 "parse_tree_out_pragma.m"
  }
#line 849 "parse_tree_out_pragma.m"
}

#line 881 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1(
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 881 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 881 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 881 "parse_tree_out_pragma.m"
{
#line 881 "parse_tree_out_pragma.m"
  {
#line 881 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 881 "parse_tree_out_pragma.m"
    {
#line 881 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 881 "parse_tree_out_pragma.m"
  }
#line 881 "parse_tree_out_pragma.m"
}

#line 809 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0(
#line 809 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32,
#line 809 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_4,
#line 809 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12,
#line 809 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13)
#line 809 "parse_tree_out_pragma.m"
{
#line 812 "parse_tree_out_pragma.m"
  {
#line 812 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 812 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 0)));
#line 812 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 1)));
#line 812 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Attributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 2)));
#line 812 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Overrides_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 3)));
#line 812 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_10;
#line 812 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_11;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 812 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybePrefix_37;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54;
#line 812 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_56_56;
#line 812 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 39 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 832 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_48_48;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 37 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 59 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 37 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ":- pragma foreign_export_enum(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
#line 816 "parse_tree_out_pragma.m"
    {
#line 816 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18);
    }
#line 818 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 0)));
#line 818 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TypeArity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 1)));
#line 819 "parse_tree_out_pragma.m"
    {
#line 819 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_10, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
#line 39 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
    {
#line 39 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_11)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
#line 832 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__MaybePrefix_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_8, (MR_Integer) 0)));
#line 832 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_8, (MR_Integer) 1)));
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "[")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40);
    }
#line 836 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybePrefix_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 835 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40;
#line 836 "parse_tree_out_pragma.m"
    else
#line 837 "parse_tree_out_pragma.m"
      {
#line 837 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Prefix_38 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePrefix_37, (MR_Integer) 0)));
#line 837 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42;
#line 837 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 47 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 37 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "prefix(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42);
        }
#line 47 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 12)));
#line 47 "parse_tree.parse_tree_out_info.int"
        {
#line 47 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (parse_tree__parse_tree_out_pragma__Prefix_38)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43);
        }
#line 37 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
#line 37 "parse_tree.parse_tree_out_info.int"
        {
#line 37 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 41)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45);
        }
#line 837 "parse_tree_out_pragma.m"
      }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28);
    }
#line 37 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
#line 37 "parse_tree.parse_tree_out_info.int"
    {
#line 37 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 91)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54);
    }
#line 881 "parse_tree_out_pragma.m"
    {
#line 881 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 881 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
#line 881 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1));
#line 881 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 881 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32));
#line 881 "parse_tree_out_pragma.m"
    }
#line 59 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 18)));
#line 59 "parse_tree.parse_tree_out_info.int"
    {
#line 59 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])), ((MR_Box) (parse_tree__parse_tree_out_pragma__Overrides_9)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_56_56)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57);
    }
#line 37 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
#line 37 "parse_tree.parse_tree_out_info.int"
    {
#line 37 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 93)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13);
    }
#line 812 "parse_tree_out_pragma.m"
  }
#line 809 "parse_tree_out_pragma.m"
}

#line 774 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0(
#line 774 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42,
#line 774 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 774 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_6,
#line 774 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_18,
#line 774 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19)
#line 774 "parse_tree_out_pragma.m"
{
#line 777 "parse_tree_out_pragma.m"
  {
#line 777 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 777 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ForeignLang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 0)));
#line 777 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 1)));
#line 777 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__ExportName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 2)));
#line 777 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 0)));
#line 777 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 1)));
#line 777 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 2)));
#line 777 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_14;
#line 777 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InstInfo_15;
#line 777 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
#line 777 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
#line 777 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24;
#line 777 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
#line 777 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36;
#line 777 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
#line 777 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 781 "parse_tree_out_pragma.m"
    {
#line 781 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_14);
    }
#line 782 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__InstInfo_15 = (MR_Word) parse_tree__parse_tree_out_pragma__VarSet_14;
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ":- pragma foreign_export(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
#line 784 "parse_tree_out_pragma.m"
    {
#line 784 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__ForeignLang_8, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24);
    }
#line 786 "parse_tree_out_pragma.m"
    {
#line 786 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__Name_11, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
#line 794 "parse_tree_out_pragma.m"
#line 794 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_13) {
#line 794 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 794 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 788 "parse_tree_out_pragma.m"
        {
#line 788 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45;
#line 788 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__ArgModes_16;
#line 788 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_17;
#line 788 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32;
#line 788 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 788 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35;
#line 789 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv2_RetMode_17;
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 789 "parse_tree_out_pragma.m"
          {
#line 789 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_12, &parse_tree__parse_tree_out_pragma__ArgModes_16, &parse_tree__parse_tree_out_pragma__conv2_RetMode_17);
          }
#line 789 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_17 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv2_RetMode_17);
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32);
          }
#line 4029 "parse_tree.parse_tree_out_pragma.c"
          parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[3];
#line 791 "parse_tree_out_pragma.m"
          {
#line 791 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45, parse_tree__parse_tree_out_pragma__Lang_5, ((MR_Box) (parse_tree__parse_tree_out_pragma__InstInfo_15)), parse_tree__parse_tree_out_pragma__ArgModes_16, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
          }
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ") = ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35);
          }
#line 793 "parse_tree_out_pragma.m"
          {
#line 793 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, parse_tree__parse_tree_out_pragma__TypeClassInfo_for_inst_info_45, parse_tree__parse_tree_out_pragma__Lang_5, ((MR_Box) (parse_tree__parse_tree_out_pragma__InstInfo_15)), parse_tree__parse_tree_out_pragma__RetMode_17, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36);
          }
#line 788 "parse_tree_out_pragma.m"
        }
#line 794 "parse_tree_out_pragma.m"
        break;
#line 794 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 795 "parse_tree_out_pragma.m"
        {
#line 795 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 795 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28;
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
          }
#line 797 "parse_tree_out_pragma.m"
          {
#line 797 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[3], parse_tree__parse_tree_out_pragma__Lang_5, ((MR_Box) (parse_tree__parse_tree_out_pragma__InstInfo_15)), parse_tree__parse_tree_out_pragma__ModeList_12, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28);
          }
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36);
          }
#line 795 "parse_tree_out_pragma.m"
        }
#line 794 "parse_tree_out_pragma.m"
        break;
#line 794 "parse_tree_out_pragma.m"
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) (parse_tree__parse_tree_out_pragma__ExportName_10)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_42), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19);
    }
#line 777 "parse_tree_out_pragma.m"
  }
#line 774 "parse_tree_out_pragma.m"
}

#line 760 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
#line 760 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1)
#line 760 "parse_tree_out_pragma.m"
{
#line 763 "parse_tree_out_pragma.m"
  {
#line 763 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 763 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__HeadVar__2_2;

#line 763 "parse_tree_out_pragma.m"
#line 763 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__HeadVar__1_1)) {
#line 763 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 763 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 763 "parse_tree_out_pragma.m"
#line 763 "parse_tree_out_pragma.m"
        switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__HeadVar__1_1)) {
#line 763 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 763 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 763 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "refers_to_llds_stack";
#line 763 "parse_tree_out_pragma.m"
            break;
#line 763 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 766 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "needs_call_standard_output_registers";
#line 763 "parse_tree_out_pragma.m"
            break;
#line 763 "parse_tree_out_pragma.m"
        }
#line 763 "parse_tree_out_pragma.m"
        break;
#line 763 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 763 "parse_tree_out_pragma.m"
        {
#line 763 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));

#line 763 "parse_tree_out_pragma.m"
#line 763 "parse_tree_out_pragma.m"
          switch (parse_tree__parse_tree_out_pragma__V_5_5) {
#line 763 "parse_tree_out_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 763 "parse_tree_out_pragma.m"
            case (MR_Integer) 0:
#line 765 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "high_level_backend";
#line 763 "parse_tree_out_pragma.m"
              break;
#line 763 "parse_tree_out_pragma.m"
            case (MR_Integer) 1:
#line 764 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "low_level_backend";
#line 763 "parse_tree_out_pragma.m"
              break;
#line 763 "parse_tree_out_pragma.m"
          }
#line 763 "parse_tree_out_pragma.m"
        }
#line 763 "parse_tree_out_pragma.m"
        break;
#line 763 "parse_tree_out_pragma.m"
    }
#line 763 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__HeadVar__2_2;
#line 763 "parse_tree_out_pragma.m"
  }
#line 760 "parse_tree_out_pragma.m"
}

#line 749 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
#line 749 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_4,
#line 749 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__UnitSelector_5)
#line 749 "parse_tree_out_pragma.m"
{
#line 753 "parse_tree_out_pragma.m"
  {
#line 753 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 753 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_6;

#line 753 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__UnitSelector_5)) == (MR_mktag((MR_Integer) 0))))
#line 756 "parse_tree_out_pragma.m"
      {
#line 757 "parse_tree_out_pragma.m"
        {
#line 757 "parse_tree_out_pragma.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_pragma", (MR_String) "function \140parse_tree.parse_tree_out_pragma.unit_selector_to_string\'/2", (MR_String) "termsel in user-annotated sharing");
        }
#line 756 "parse_tree_out_pragma.m"
      }
#line 753 "parse_tree_out_pragma.m"
    else
#line 753 "parse_tree_out_pragma.m"
      {
#line 753 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnitSelector_5, (MR_Integer) 0)));

#line 754 "parse_tree_out_pragma.m"
        {
#line 754 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__String_6 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeVarSet_4, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__Type_7);
        }
#line 753 "parse_tree_out_pragma.m"
      }
#line 753 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_6;
#line 753 "parse_tree_out_pragma.m"
  }
#line 749 "parse_tree_out_pragma.m"
}

#line 746 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
#line 746 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 746 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 746 "parse_tree_out_pragma.m"
{
#line 746 "parse_tree_out_pragma.m"
  {
#line 746 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 746 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 746 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_String_6;

#line 746 "parse_tree_out_pragma.m"
    {
#line 746 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_String_6 = parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 746 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_String_6));
#line 746 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 746 "parse_tree_out_pragma.m"
  }
#line 746 "parse_tree_out_pragma.m"
}

#line 729 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
#line 729 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 729 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_6,
#line 729 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3)
#line 729 "parse_tree_out_pragma.m"
{
#line 732 "parse_tree_out_pragma.m"
  {
#line 732 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__Str_9;
#line 732 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 732 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__DataA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 0)));
#line 732 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__DataB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 1)));
#line 732 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataA_7, (MR_Integer) 0)));
#line 732 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SelectorA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataA_7, (MR_Integer) 1)));
#line 732 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataB_8, (MR_Integer) 0)));
#line 732 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SelectorB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataB_8, (MR_Integer) 1)));
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__VarStrA_14;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__VarStrB_15;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__SelectorStrA_16;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__SelectorStrB_17;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__StrA_18;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__StrB_19;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_23_23;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_24_24;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_26_26;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_29_29;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_30_30;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_32_32;
#line 732 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__V_34_34;
#line 732 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UnitStrs_40;
#line 732 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_41_41;
#line 732 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UnitStrs_50;

#line 735 "parse_tree_out_pragma.m"
    {
#line 735 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarStrA_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36, parse_tree__parse_tree_out_pragma__VarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__VarA_10);
    }
#line 736 "parse_tree_out_pragma.m"
    {
#line 736 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarStrB_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36, parse_tree__parse_tree_out_pragma__VarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__VarB_12);
    }
#line 746 "parse_tree_out_pragma.m"
    {
#line 746 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 746 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[0]));
#line 746 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1));
#line 746 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 746 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_6));
#line 746 "parse_tree_out_pragma.m"
    }
#line 746 "parse_tree_out_pragma.m"
    {
#line 746 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UnitStrs_40 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_41_41, parse_tree__parse_tree_out_pragma__SelectorA_11);
    }
#line 747 "parse_tree_out_pragma.m"
    {
#line 747 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__SelectorStrA_16 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__UnitStrs_40);
    }
#line 746 "parse_tree_out_pragma.m"
    {
#line 746 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UnitStrs_50 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_41_41, parse_tree__parse_tree_out_pragma__SelectorB_13);
    }
#line 747 "parse_tree_out_pragma.m"
    {
#line 747 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__SelectorStrB_17 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__UnitStrs_50);
    }
#line 739 "parse_tree_out_pragma.m"
    {
#line 739 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_26_26 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__SelectorStrA_16, (MR_String) "])");
    }
#line 739 "parse_tree_out_pragma.m"
    {
#line 739 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) ", [", parse_tree__parse_tree_out_pragma__V_26_26);
    }
#line 739 "parse_tree_out_pragma.m"
    {
#line 739 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_23_23 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__VarStrA_14, parse_tree__parse_tree_out_pragma__V_24_24);
    }
#line 739 "parse_tree_out_pragma.m"
    {
#line 739 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__StrA_18 = mercury__string__f_43_43_2_f_0((MR_String) "cel(", parse_tree__parse_tree_out_pragma__V_23_23);
    }
#line 740 "parse_tree_out_pragma.m"
    {
#line 740 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_32_32 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__SelectorStrB_17, (MR_String) "])");
    }
#line 740 "parse_tree_out_pragma.m"
    {
#line 740 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ", [", parse_tree__parse_tree_out_pragma__V_32_32);
    }
#line 740 "parse_tree_out_pragma.m"
    {
#line 740 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__VarStrB_15, parse_tree__parse_tree_out_pragma__V_30_30);
    }
#line 740 "parse_tree_out_pragma.m"
    {
#line 740 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__StrB_19 = mercury__string__f_43_43_2_f_0((MR_String) "cel(", parse_tree__parse_tree_out_pragma__V_29_29);
    }
#line 741 "parse_tree_out_pragma.m"
    {
#line 741 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " - ", parse_tree__parse_tree_out_pragma__StrB_19);
    }
#line 741 "parse_tree_out_pragma.m"
    {
#line 741 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Str_9 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__StrA_18, parse_tree__parse_tree_out_pragma__V_34_34);
    }
#line 732 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__Str_9;
#line 732 "parse_tree_out_pragma.m"
  }
#line 729 "parse_tree_out_pragma.m"
}

#line 722 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
#line 722 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 722 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 722 "parse_tree_out_pragma.m"
{
#line 722 "parse_tree_out_pragma.m"
  {
#line 722 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 722 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 722 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv1_Str_9;

#line 722 "parse_tree_out_pragma.m"
    {
#line 722 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv1_Str_9 = parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 722 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv1_Str_9));
#line 722 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 722 "parse_tree_out_pragma.m"
  }
#line 722 "parse_tree_out_pragma.m"
}

#line 713 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
#line 713 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 713 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 713 "parse_tree_out_pragma.m"
{
#line 713 "parse_tree_out_pragma.m"
  {
#line 713 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 713 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 713 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4;

#line 713 "parse_tree_out_pragma.m"
    {
#line 713 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 713 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4));
#line 713 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 713 "parse_tree_out_pragma.m"
  }
#line 713 "parse_tree_out_pragma.m"
}

#line 698 "parse_tree_out_pragma.m"
static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
#line 698 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
#line 698 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Sharing_6,
#line 698 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_7)
#line 698 "parse_tree_out_pragma.m"
{
#line 703 "parse_tree_out_pragma.m"
  {
#line 703 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 703 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_8;

#line 703 "parse_tree_out_pragma.m"
#line 703 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Sharing_6)) {
#line 703 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 703 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 704 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__String_8 = (MR_String) "no_sharing";
#line 703 "parse_tree_out_pragma.m"
        break;
#line 703 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 709 "parse_tree_out_pragma.m"
        {
#line 709 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__SharingPairs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Sharing_6, (MR_Integer) 0)));
#line 709 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_12;
#line 709 "parse_tree_out_pragma.m"
          MR_String parse_tree__parse_tree_out_pragma__MaybeTypesStr_15;
#line 709 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__SharingPairStrs_16;
#line 709 "parse_tree_out_pragma.m"
          MR_String parse_tree__parse_tree_out_pragma__SharingPairListStr_17;
#line 709 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_25_25;
#line 709 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_27_27;
#line 709 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_29_29;
#line 709 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_30_30;
#line 709 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__V_32_32;

#line 717 "parse_tree_out_pragma.m"
          if ((parse_tree__parse_tree_out_pragma__MaybeTypes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 718 "parse_tree_out_pragma.m"
            {
#line 719 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MaybeTypesStr_15 = (MR_String) "no";
#line 720 "parse_tree_out_pragma.m"
              {
#line 720 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__TypeVarSet_12 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
              }
#line 718 "parse_tree_out_pragma.m"
            }
#line 717 "parse_tree_out_pragma.m"
          else
#line 711 "parse_tree_out_pragma.m"
            {
#line 711 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__Types_11;
#line 711 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__TypeStrs_13;
#line 711 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__TypeListStr_14;
#line 711 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTypes_7, (MR_Integer) 0)));
#line 711 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__V_19_19;
#line 711 "parse_tree_out_pragma.m"
              MR_String parse_tree__parse_tree_out_pragma__V_23_23;

#line 711 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_18_18, (MR_Integer) 0)));
#line 711 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_18_18, (MR_Integer) 1)));
#line 713 "parse_tree_out_pragma.m"
              {
#line 713 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 713 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[2]));
#line 713 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1));
#line 713 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 713 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_12));
#line 713 "parse_tree_out_pragma.m"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 4) = ((MR_Box) ((MR_Integer) 0));
#line 713 "parse_tree_out_pragma.m"
              }
#line 712 "parse_tree_out_pragma.m"
              {
#line 712 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__TypeStrs_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_19_19, parse_tree__parse_tree_out_pragma__Types_11);
              }
#line 715 "parse_tree_out_pragma.m"
              {
#line 715 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__TypeListStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__TypeStrs_13);
              }
#line 716 "parse_tree_out_pragma.m"
              {
#line 716 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__V_23_23 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeListStr_14, (MR_String) ")");
              }
#line 716 "parse_tree_out_pragma.m"
              {
#line 716 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__MaybeTypesStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "yes(", parse_tree__parse_tree_out_pragma__V_23_23);
              }
#line 711 "parse_tree_out_pragma.m"
            }
#line 722 "parse_tree_out_pragma.m"
          {
#line 722 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 722 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[3]));
#line 722 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2));
#line 722 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 722 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarSet_5));
#line 722 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 4) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_12));
#line 722 "parse_tree_out_pragma.m"
          }
#line 722 "parse_tree_out_pragma.m"
          {
#line 722 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__SharingPairStrs_16 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_25_25, parse_tree__parse_tree_out_pragma__SharingPairs_10);
          }
#line 724 "parse_tree_out_pragma.m"
          {
#line 724 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__SharingPairListStr_17 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__SharingPairStrs_16);
          }
#line 726 "parse_tree_out_pragma.m"
          {
#line 726 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_32_32, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__SharingPairListStr_17));
#line 726 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[26])));
#line 726 "parse_tree_out_pragma.m"
          }
#line 726 "parse_tree_out_pragma.m"
          {
#line 726 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_30_30, 0) = ((MR_Box) ((MR_String) ", ["));
#line 726 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_30_30, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_32_32));
#line 726 "parse_tree_out_pragma.m"
          }
#line 726 "parse_tree_out_pragma.m"
          {
#line 726 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_29_29, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__MaybeTypesStr_15));
#line 726 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_29_29, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_30_30));
#line 726 "parse_tree_out_pragma.m"
          }
#line 726 "parse_tree_out_pragma.m"
          {
#line 726 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, 0) = ((MR_Box) ((MR_String) "sharing("));
#line 726 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_29_29));
#line 726 "parse_tree_out_pragma.m"
          }
#line 725 "parse_tree_out_pragma.m"
          {
#line 725 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__String_8 = mercury__string__append_list_1_f_0(parse_tree__parse_tree_out_pragma__V_27_27);
          }
#line 709 "parse_tree_out_pragma.m"
        }
#line 703 "parse_tree_out_pragma.m"
        break;
#line 703 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 707 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__String_8 = (MR_String) "unknown_sharing";
#line 703 "parse_tree_out_pragma.m"
        break;
#line 703 "parse_tree_out_pragma.m"
    }
#line 703 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_8;
#line 703 "parse_tree_out_pragma.m"
  }
#line 698 "parse_tree_out_pragma.m"
}

#line 696 "parse_tree_out_pragma.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
#line 696 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 696 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
#line 696 "parse_tree_out_pragma.m"
{
#line 696 "parse_tree_out_pragma.m"
  {
#line 696 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 696 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
#line 696 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2;

#line 696 "parse_tree_out_pragma.m"
    {
#line 696 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2 = parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 696 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2));
#line 696 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
#line 696 "parse_tree_out_pragma.m"
  }
#line 696 "parse_tree_out_pragma.m"
}

#line 524 "parse_tree_out_pragma.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
#line 524 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Attrs_4,
#line 524 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5)
#line 524 "parse_tree_out_pragma.m"
{
#line 527 "parse_tree_out_pragma.m"
  {
#line 527 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__StringList_6;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMercury_7;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ThreadSafe_8;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TabledForIO_9;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Purity_10;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Terminates_11;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UserSharing_12;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Exceptions_13;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayModifyTrail_15;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__BoxPolicy_17;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AffectsLiveness_18;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AllocatesMemory_19;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__RegistersRoots_20;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ExtraAttributes_22;
#line 527 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23;
#line 527 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__ThreadSafeStr_24;
#line 527 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__TabledForIOStr_25;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PurityStrList_26;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TerminatesStrList_27;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UserSharingStrList_31;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ExceptionsStrList_32;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_85_85;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_86_86;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_87_87;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_88_88;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_89_89;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_90_90;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_91_91;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_92_92;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_93_93;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_94_94;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_95_95;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_96_96;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_97_97;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_98_98;
#line 527 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_99_99;

#line 528 "parse_tree_out_pragma.m"
    {
#line 528 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayCallMercury_7 = parse_tree__prog_data__get_may_call_mercury_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 529 "parse_tree_out_pragma.m"
    {
#line 529 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__ThreadSafe_8 = parse_tree__prog_data__get_thread_safe_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 530 "parse_tree_out_pragma.m"
    {
#line 530 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__TabledForIO_9 = parse_tree__prog_data__get_tabled_for_io_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 531 "parse_tree_out_pragma.m"
    {
#line 531 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Purity_10 = parse_tree__prog_data__get_purity_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 532 "parse_tree_out_pragma.m"
    {
#line 532 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Terminates_11 = parse_tree__prog_data__get_terminates_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 533 "parse_tree_out_pragma.m"
    {
#line 533 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UserSharing_12 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 534 "parse_tree_out_pragma.m"
    {
#line 534 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__Exceptions_13 = parse_tree__prog_data__get_may_throw_exception_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 535 "parse_tree_out_pragma.m"
    {
#line 535 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14 = parse_tree__prog_data__get_ordinary_despite_detism_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 536 "parse_tree_out_pragma.m"
    {
#line 536 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayModifyTrail_15 = parse_tree__prog_data__get_may_modify_trail_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 537 "parse_tree_out_pragma.m"
    {
#line 537 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16 = parse_tree__prog_data__get_may_call_mm_tabled_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 538 "parse_tree_out_pragma.m"
    {
#line 538 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__BoxPolicy_17 = parse_tree__prog_data__get_box_policy_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 539 "parse_tree_out_pragma.m"
    {
#line 539 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__AffectsLiveness_18 = parse_tree__prog_data__get_affects_liveness_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 540 "parse_tree_out_pragma.m"
    {
#line 540 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__AllocatesMemory_19 = parse_tree__prog_data__get_allocates_memory_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 541 "parse_tree_out_pragma.m"
    {
#line 541 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__RegistersRoots_20 = parse_tree__prog_data__get_registers_roots_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 542 "parse_tree_out_pragma.m"
    {
#line 542 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21 = parse_tree__prog_data__get_may_duplicate_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 543 "parse_tree_out_pragma.m"
    {
#line 543 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__ExtraAttributes_22 = parse_tree__prog_data__get_extra_attributes_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
#line 547 "parse_tree_out_pragma.m"
#line 547 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MayCallMercury_7) {
#line 547 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 547 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 546 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23 = (MR_String) "may_call_mercury";
#line 547 "parse_tree_out_pragma.m"
        break;
#line 547 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 549 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23 = (MR_String) "will_not_call_mercury";
#line 547 "parse_tree_out_pragma.m"
        break;
#line 547 "parse_tree_out_pragma.m"
    }
#line 554 "parse_tree_out_pragma.m"
#line 554 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__ThreadSafe_8) {
#line 554 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 554 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 559 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "maybe_thread_safe";
#line 554 "parse_tree_out_pragma.m"
        break;
#line 554 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 553 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "not_thread_safe";
#line 554 "parse_tree_out_pragma.m"
        break;
#line 554 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 556 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "thread_safe";
#line 554 "parse_tree_out_pragma.m"
        break;
#line 554 "parse_tree_out_pragma.m"
    }
#line 564 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__TabledForIOStr_25 = ((&parse_tree__parse_tree_out_pragma_vector_common_7[0 + parse_tree__parse_tree_out_pragma__TabledForIO_9]))->parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
#line 577 "parse_tree_out_pragma.m"
#line 577 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Purity_10) {
#line 577 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 577 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 582 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 577 "parse_tree_out_pragma.m"
        break;
#line 577 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 575 "parse_tree_out_pragma.m"
        {
#line 576 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[5]);
#line 575 "parse_tree_out_pragma.m"
        }
#line 577 "parse_tree_out_pragma.m"
        break;
#line 577 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 578 "parse_tree_out_pragma.m"
        {
#line 579 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[6]);
#line 578 "parse_tree_out_pragma.m"
        }
#line 577 "parse_tree_out_pragma.m"
        break;
#line 577 "parse_tree_out_pragma.m"
    }
#line 587 "parse_tree_out_pragma.m"
#line 587 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Terminates_11) {
#line 587 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 587 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 592 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "parse_tree_out_pragma.m"
        break;
#line 587 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 588 "parse_tree_out_pragma.m"
        {
#line 589 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[7]);
#line 588 "parse_tree_out_pragma.m"
        }
#line 587 "parse_tree_out_pragma.m"
        break;
#line 587 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 585 "parse_tree_out_pragma.m"
        {
#line 586 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[8]);
#line 585 "parse_tree_out_pragma.m"
        }
#line 587 "parse_tree_out_pragma.m"
        break;
#line 587 "parse_tree_out_pragma.m"
    }
#line 598 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__UserSharing_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__UserSharingStrList_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "parse_tree_out_pragma.m"
    else
#line 595 "parse_tree_out_pragma.m"
      {
#line 595 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Sharing_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharing_12, (MR_Integer) 0)));
#line 595 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharing_12, (MR_Integer) 1)));
#line 595 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__String_30;

#line 596 "parse_tree_out_pragma.m"
        {
#line 596 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__String_30 = parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(parse_tree__parse_tree_out_pragma__VarSet_5, parse_tree__parse_tree_out_pragma__Sharing_28, parse_tree__parse_tree_out_pragma__MaybeTypes_29);
        }
#line 597 "parse_tree_out_pragma.m"
        {
#line 597 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__UserSharingStrList_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharingStrList_31, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__String_30));
#line 597 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharingStrList_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "parse_tree_out_pragma.m"
        }
#line 595 "parse_tree_out_pragma.m"
      }
#line 605 "parse_tree_out_pragma.m"
#line 605 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Exceptions_13) {
#line 605 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 605 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 607 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__ExceptionsStrList_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "parse_tree_out_pragma.m"
        break;
#line 605 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 603 "parse_tree_out_pragma.m"
        {
#line 604 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__ExceptionsStrList_32 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[9]);
#line 603 "parse_tree_out_pragma.m"
        }
#line 605 "parse_tree_out_pragma.m"
        break;
#line 605 "parse_tree_out_pragma.m"
    }
#line 612 "parse_tree_out_pragma.m"
#line 612 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14) {
#line 612 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 612 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 614 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "parse_tree_out_pragma.m"
        break;
#line 612 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 610 "parse_tree_out_pragma.m"
        {
#line 611 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[10]);
#line 610 "parse_tree_out_pragma.m"
        }
#line 612 "parse_tree_out_pragma.m"
        break;
#line 612 "parse_tree_out_pragma.m"
    }
#line 619 "parse_tree_out_pragma.m"
#line 619 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MayModifyTrail_15) {
#line 619 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 619 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 617 "parse_tree_out_pragma.m"
        {
#line 618 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[11]);
#line 617 "parse_tree_out_pragma.m"
        }
#line 619 "parse_tree_out_pragma.m"
        break;
#line 619 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 620 "parse_tree_out_pragma.m"
        {
#line 621 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[12]);
#line 620 "parse_tree_out_pragma.m"
        }
#line 619 "parse_tree_out_pragma.m"
        break;
#line 619 "parse_tree_out_pragma.m"
    }
#line 626 "parse_tree_out_pragma.m"
#line 626 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16) {
#line 626 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 626 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 631 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 626 "parse_tree_out_pragma.m"
        break;
#line 626 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 624 "parse_tree_out_pragma.m"
        {
#line 625 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[13]);
#line 624 "parse_tree_out_pragma.m"
        }
#line 626 "parse_tree_out_pragma.m"
        break;
#line 626 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 627 "parse_tree_out_pragma.m"
        {
#line 628 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[14]);
#line 627 "parse_tree_out_pragma.m"
        }
#line 626 "parse_tree_out_pragma.m"
        break;
#line 626 "parse_tree_out_pragma.m"
    }
#line 636 "parse_tree_out_pragma.m"
#line 636 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__BoxPolicy_17) {
#line 636 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 636 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 637 "parse_tree_out_pragma.m"
        {
#line 638 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[15]);
#line 637 "parse_tree_out_pragma.m"
        }
#line 636 "parse_tree_out_pragma.m"
        break;
#line 636 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 635 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "parse_tree_out_pragma.m"
        break;
#line 636 "parse_tree_out_pragma.m"
    }
#line 643 "parse_tree_out_pragma.m"
#line 643 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__AffectsLiveness_18) {
#line 643 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 643 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 641 "parse_tree_out_pragma.m"
        {
#line 642 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[16]);
#line 641 "parse_tree_out_pragma.m"
        }
#line 643 "parse_tree_out_pragma.m"
        break;
#line 643 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 648 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "parse_tree_out_pragma.m"
        break;
#line 643 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 644 "parse_tree_out_pragma.m"
        {
#line 645 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[17]);
#line 644 "parse_tree_out_pragma.m"
        }
#line 643 "parse_tree_out_pragma.m"
        break;
#line 643 "parse_tree_out_pragma.m"
    }
#line 653 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[0 + parse_tree__parse_tree_out_pragma__AllocatesMemory_19]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
#line 666 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[4 + parse_tree__parse_tree_out_pragma__RegistersRoots_20]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
#line 685 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 685 "parse_tree_out_pragma.m"
    else
#line 677 "parse_tree_out_pragma.m"
      {
#line 677 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__MayDuplicate_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21, (MR_Integer) 0)));

#line 681 "parse_tree_out_pragma.m"
#line 681 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__MayDuplicate_40) {
#line 681 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 681 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 679 "parse_tree_out_pragma.m"
            {
#line 680 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[24]);
#line 679 "parse_tree_out_pragma.m"
            }
#line 681 "parse_tree_out_pragma.m"
            break;
#line 681 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 682 "parse_tree_out_pragma.m"
            {
#line 683 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[25]);
#line 682 "parse_tree_out_pragma.m"
            }
#line 681 "parse_tree_out_pragma.m"
            break;
#line 681 "parse_tree_out_pragma.m"
        }
#line 677 "parse_tree_out_pragma.m"
      }
#line 5292 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 689 "parse_tree_out_pragma.m"
    {
#line 689 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_87_87, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TabledForIOStr_25));
#line 689 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_87_87, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__PurityStrList_26));
#line 689 "parse_tree_out_pragma.m"
    }
#line 689 "parse_tree_out_pragma.m"
    {
#line 689 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_86_86, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__ThreadSafeStr_24));
#line 689 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_86_86, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_87_87));
#line 689 "parse_tree_out_pragma.m"
    }
#line 689 "parse_tree_out_pragma.m"
    {
#line 689 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_85_85, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23));
#line 689 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_85_85, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_86_86));
#line 689 "parse_tree_out_pragma.m"
    }
#line 696 "parse_tree_out_pragma.m"
    {
#line 696 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_99_99 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_extra_attribute_0, parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[3], parse_tree__parse_tree_out_pragma__ExtraAttributes_22);
    }
#line 695 "parse_tree_out_pragma.m"
    {
#line 695 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_98_98 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41, parse_tree__parse_tree_out_pragma__V_99_99);
    }
#line 695 "parse_tree_out_pragma.m"
    {
#line 695 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39, parse_tree__parse_tree_out_pragma__V_98_98);
    }
#line 694 "parse_tree_out_pragma.m"
    {
#line 694 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_96_96 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38, parse_tree__parse_tree_out_pragma__V_97_97);
    }
#line 694 "parse_tree_out_pragma.m"
    {
#line 694 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_95_95 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37, parse_tree__parse_tree_out_pragma__V_96_96);
    }
#line 693 "parse_tree_out_pragma.m"
    {
#line 693 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_94_94 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36, parse_tree__parse_tree_out_pragma__V_95_95);
    }
#line 693 "parse_tree_out_pragma.m"
    {
#line 693 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_93_93 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35, parse_tree__parse_tree_out_pragma__V_94_94);
    }
#line 692 "parse_tree_out_pragma.m"
    {
#line 692 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34, parse_tree__parse_tree_out_pragma__V_93_93);
    }
#line 692 "parse_tree_out_pragma.m"
    {
#line 692 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_91_91 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33, parse_tree__parse_tree_out_pragma__V_92_92);
    }
#line 691 "parse_tree_out_pragma.m"
    {
#line 691 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_90_90 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__ExceptionsStrList_32, parse_tree__parse_tree_out_pragma__V_91_91);
    }
#line 690 "parse_tree_out_pragma.m"
    {
#line 690 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_89_89 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__UserSharingStrList_31, parse_tree__parse_tree_out_pragma__V_90_90);
    }
#line 690 "parse_tree_out_pragma.m"
    {
#line 690 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_88_88 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__TerminatesStrList_27, parse_tree__parse_tree_out_pragma__V_89_89);
    }
#line 690 "parse_tree_out_pragma.m"
    {
#line 690 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__StringList_6 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__V_85_85, parse_tree__parse_tree_out_pragma__V_88_88);
    }
#line 527 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__StringList_6;
#line 527 "parse_tree_out_pragma.m"
  }
#line 524 "parse_tree_out_pragma.m"
}

#line 375 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2(
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 375 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 375 "parse_tree_out_pragma.m"
{
#line 375 "parse_tree_out_pragma.m"
  {
#line 375 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 375 "parse_tree_out_pragma.m"
    {
#line 375 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 375 "parse_tree_out_pragma.m"
  }
#line 375 "parse_tree_out_pragma.m"
}

#line 516 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1(
#line 516 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 516 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 516 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 516 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 516 "parse_tree_out_pragma.m"
{
#line 516 "parse_tree_out_pragma.m"
  {
#line 516 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 516 "parse_tree_out_pragma.m"
    {
#line 516 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_info__add_string_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_String) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 516 "parse_tree_out_pragma.m"
  }
#line 516 "parse_tree_out_pragma.m"
}

#line 441 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0(
#line 441 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50,
#line 441 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
#line 441 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_6,
#line 441 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23,
#line 441 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24)
#line 441 "parse_tree_out_pragma.m"
{
#line 444 "parse_tree_out_pragma.m"
  {
#line 444 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_88;
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Attributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 0)));
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 1)));
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 2)));
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Vars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 3)));
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ProgVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 4)));
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 5)));
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PragmaCode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 6)));
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ForeignLang_15;
#line 444 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__C_Code_21;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58;
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_59_59;
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_61_61;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74;
#line 444 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75;
#line 444 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_82_82;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 59 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 482 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_22_22;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_16)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ":- pragma foreign_proc(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26);
    }
#line 448 "parse_tree_out_pragma.m"
    {
#line 448 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__ForeignLang_15 = parse_tree__prog_data__get_foreign_language_1_f_0(parse_tree__parse_tree_out_pragma__Attributes_8);
    }
#line 449 "parse_tree_out_pragma.m"
    {
#line 449 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__ForeignLang_15, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
    }
#line 451 "parse_tree_out_pragma.m"
    {
#line 451 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__PredName_9, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30);
    }
#line 5573 "parse_tree.parse_tree_out_pragma.c"
#line 5574 "parse_tree.parse_tree_out_pragma.c"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
#line 5576 "parse_tree.parse_tree_out_pragma.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 5578 "parse_tree.parse_tree_out_pragma.c"
      case (MR_Integer) 1:
#line 5580 "parse_tree.parse_tree_out_pragma.c"
        {
#line 5582 "parse_tree.parse_tree_out_pragma.c"
          MR_Word parse_tree__parse_tree_out_pragma__Vars_16;
#line 5584 "parse_tree.parse_tree_out_pragma.c"
          MR_Word parse_tree__parse_tree_out_pragma__ResultVars_17;
#line 5586 "parse_tree.parse_tree_out_pragma.c"
          MR_Word parse_tree__parse_tree_out_pragma__ResultVar_18;
#line 5588 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36;
#line 5590 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
#line 5592 "parse_tree.parse_tree_out_pragma.c"
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39;
#line 458 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv2_ResultVar_18;
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 458 "parse_tree_out_pragma.m"
          {
#line 458 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__parse_tree_out_pragma__Vars0_11, &parse_tree__parse_tree_out_pragma__Vars_16, &parse_tree__parse_tree_out_pragma__conv2_ResultVar_18);
          }
#line 458 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__ResultVar_18 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv2_ResultVar_18);
#line 459 "parse_tree_out_pragma.m"
          {
#line 459 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__ResultVars_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__ResultVars_17, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__ResultVar_18));
#line 459 "parse_tree_out_pragma.m"
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__ResultVars_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "parse_tree_out_pragma.m"
          }
#line 463 "parse_tree_out_pragma.m"
          if ((parse_tree__parse_tree_out_pragma__Vars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
#line 463 "parse_tree_out_pragma.m"
          else
#line 464 "parse_tree_out_pragma.m"
            {
#line 464 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
#line 464 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34;
#line 33 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
              {
#line 33 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
              }
#line 466 "parse_tree_out_pragma.m"
              {
#line 466 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Vars_16, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34);
              }
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
              {
#line 33 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36);
              }
#line 464 "parse_tree_out_pragma.m"
            }
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) " = (")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
          }
#line 475 "parse_tree_out_pragma.m"
          {
#line 475 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__ResultVars_17, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39);
          }
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
          }
#line 5673 "parse_tree.parse_tree_out_pragma.c"
        }
#line 5675 "parse_tree.parse_tree_out_pragma.c"
        break;
#line 5677 "parse_tree.parse_tree_out_pragma.c"
      case (MR_Integer) 0:
#line 463 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__Vars0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
#line 463 "parse_tree_out_pragma.m"
        else
#line 464 "parse_tree_out_pragma.m"
          {
#line 464 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_91;
#line 464 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_92;
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_91);
            }
#line 466 "parse_tree_out_pragma.m"
            {
#line 466 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Vars0_11, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_91, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_92);
            }
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_92, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
            }
#line 464 "parse_tree_out_pragma.m"
          }
#line 5715 "parse_tree.parse_tree_out_pragma.c"
        break;
#line 5717 "parse_tree.parse_tree_out_pragma.c"
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "[")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58);
    }
#line 515 "parse_tree_out_pragma.m"
    {
#line 515 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_59_59 = parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(parse_tree__parse_tree_out_pragma__Attributes_8, parse_tree__parse_tree_out_pragma__ProgVarSet_12);
    }
#line 516 "parse_tree_out_pragma.m"
    {
#line 516 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 516 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[1]));
#line 516 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1));
#line 516 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 516 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50));
#line 516 "parse_tree_out_pragma.m"
    }
#line 59 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 18)));
#line 59 "parse_tree.parse_tree_out_info.int"
    {
#line 59 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_59_59)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_61_61)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46);
    }
#line 482 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__C_Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PragmaCode_14, (MR_Integer) 0)));
#line 482 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PragmaCode_14, (MR_Integer) 1)));
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "\"")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74);
    }
#line 375 "parse_tree_out_pragma.m"
    {
#line 375 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 375 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0]));
#line 375 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2));
#line 375 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 375 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50));
#line 375 "parse_tree_out_pragma.m"
    }
#line 375 "parse_tree_out_pragma.m"
    {
#line 375 "parse_tree_out_pragma.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_88);
    }
#line 375 "parse_tree_out_pragma.m"
    {
#line 375 "parse_tree_out_pragma.m"
      mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_88, parse_tree__parse_tree_out_pragma__V_82_82, parse_tree__parse_tree_out_pragma__C_Code_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "\"")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_16(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24);
    }
#line 444 "parse_tree_out_pragma.m"
  }
#line 441 "parse_tree_out_pragma.m"
}

#line 377 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(
#line 377 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15,
#line 377 "parse_tree_out_pragma.m"
  MR_Char parse_tree__parse_tree_out_pragma__Char_4,
#line 377 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
#line 377 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8)
#line 377 "parse_tree_out_pragma.m"
{
#line 381 "parse_tree_out_pragma.m"
  {
#line 381 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 381 "parse_tree_out_pragma.m"
    MR_Char parse_tree__parse_tree_out_pragma__QuoteChar_6;

#line 398 "parse_tree_out_pragma.m"
#line 398 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__Char_4) {
#line 398 "parse_tree_out_pragma.m"
      default:
#line 398 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__succeeded = MR_FALSE;
#line 398 "parse_tree_out_pragma.m"
        break;
#line 398 "parse_tree_out_pragma.m"
      case (MR_Char) 8:
#line 401 "parse_tree_out_pragma.m"
        {
#line 401 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 98;
#line 401 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 401 "parse_tree_out_pragma.m"
        }
#line 398 "parse_tree_out_pragma.m"
        break;
#line 398 "parse_tree_out_pragma.m"
      case (MR_Char) 34:
#line 399 "parse_tree_out_pragma.m"
        {
#line 399 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 34;
#line 399 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 399 "parse_tree_out_pragma.m"
        }
#line 398 "parse_tree_out_pragma.m"
        break;
#line 398 "parse_tree_out_pragma.m"
      case (MR_Char) 39:
#line 398 "parse_tree_out_pragma.m"
        {
#line 398 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 39;
#line 398 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 398 "parse_tree_out_pragma.m"
        }
#line 398 "parse_tree_out_pragma.m"
        break;
#line 398 "parse_tree_out_pragma.m"
      case (MR_Char) 92:
#line 400 "parse_tree_out_pragma.m"
        {
#line 400 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 92;
#line 400 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 400 "parse_tree_out_pragma.m"
        }
#line 398 "parse_tree_out_pragma.m"
        break;
#line 398 "parse_tree_out_pragma.m"
    }
#line 381 "parse_tree_out_pragma.m"
    if (parse_tree__parse_tree_out_pragma__succeeded)
#line 382 "parse_tree_out_pragma.m"
      {
#line 382 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10;
#line 37 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 37 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 37 "parse_tree.parse_tree_out_info.int"
        {
#line 37 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) ((MR_Char) 92)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10);
        }
#line 37 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 37 "parse_tree.parse_tree_out_info.int"
        {
#line 37 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) (parse_tree__parse_tree_out_pragma__QuoteChar_6)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
        }
#line 382 "parse_tree_out_pragma.m"
      }
#line 381 "parse_tree_out_pragma.m"
    else
#line 384 "parse_tree_out_pragma.m"
      {
#line 409 "parse_tree_out_pragma.m"
#line 409 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__Char_4) {
#line 409 "parse_tree_out_pragma.m"
          default:
#line 409 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__succeeded = MR_FALSE;
#line 409 "parse_tree_out_pragma.m"
            break;
#line 409 "parse_tree_out_pragma.m"
          case (MR_Char) 9:
#line 412 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 409 "parse_tree_out_pragma.m"
            break;
#line 409 "parse_tree_out_pragma.m"
          case (MR_Char) 10:
#line 411 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
#line 409 "parse_tree_out_pragma.m"
            break;
#line 409 "parse_tree_out_pragma.m"
        }
#line 409 "parse_tree_out_pragma.m"
        if (!(parse_tree__parse_tree_out_pragma__succeeded))
#line 409 "parse_tree_out_pragma.m"
          {
#line 410 "parse_tree_out_pragma.m"
            {
#line 410 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__succeeded = mercury__term_io__is_mercury_punctuation_char_1_p_0(parse_tree__parse_tree_out_pragma__Char_4);
            }
#line 409 "parse_tree_out_pragma.m"
            if (!(parse_tree__parse_tree_out_pragma__succeeded))
#line 409 "parse_tree_out_pragma.m"
              {
#line 409 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__succeeded = mercury__char__is_alnum_1_p_0(parse_tree__parse_tree_out_pragma__Char_4);
              }
#line 409 "parse_tree_out_pragma.m"
          }
#line 384 "parse_tree_out_pragma.m"
        if (parse_tree__parse_tree_out_pragma__succeeded)
#line 37 "parse_tree.parse_tree_out_info.int"
          {
#line 37 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));

#line 37 "parse_tree.parse_tree_out_info.int"
            {
#line 37 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) (parse_tree__parse_tree_out_pragma__Char_4)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
            }
#line 37 "parse_tree.parse_tree_out_info.int"
          }
#line 384 "parse_tree_out_pragma.m"
        else
#line 387 "parse_tree_out_pragma.m"
          {
#line 387 "parse_tree_out_pragma.m"
            MR_String parse_tree__parse_tree_out_pragma__V_13_13;
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 387 "parse_tree_out_pragma.m"
            {
#line 387 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__V_13_13 = mercury__term_io__mercury_escape_char_1_f_0(parse_tree__parse_tree_out_pragma__Char_4);
            }
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_13_13)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
            }
#line 387 "parse_tree_out_pragma.m"
          }
#line 384 "parse_tree_out_pragma.m"
      }
#line 381 "parse_tree_out_pragma.m"
  }
#line 377 "parse_tree_out_pragma.m"
}

#line 375 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1(
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 375 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 375 "parse_tree_out_pragma.m"
{
#line 375 "parse_tree_out_pragma.m"
  {
#line 375 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 375 "parse_tree_out_pragma.m"
    {
#line 375 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 375 "parse_tree_out_pragma.m"
  }
#line 375 "parse_tree_out_pragma.m"
}

#line 332 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(
#line 332 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FCInfo_4)
#line 332 "parse_tree_out_pragma.m"
{
#line 335 "parse_tree_out_pragma.m"
  {
#line 335 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 335 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18;
#line 335 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FCInfo_4, (MR_Integer) 0)));
#line 335 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FCInfo_4, (MR_Integer) 1)));
#line 338 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_12_12;

#line 337 "parse_tree_out_pragma.m"
    {
#line 337 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_code(");
    }
#line 6073 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 338 "parse_tree_out_pragma.m"
    {
#line 338 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, parse_tree__parse_tree_out_pragma__Lang_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 339 "parse_tree_out_pragma.m"
    {
#line 339 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 348 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_7)) == (MR_mktag((MR_Integer) 1))))
#line 351 "parse_tree_out_pragma.m"
      {
#line 351 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_7, (MR_Integer) 0)));
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_11_26;
#line 47 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 47 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_12_27;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_IO_15_15;

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_11_26);
        }
#line 47 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 12)));
#line 47 "parse_tree.parse_tree_out_info.int"
        {
#line 47 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_24)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_12_27);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_IO_15_15);
        }
#line 351 "parse_tree_out_pragma.m"
      }
#line 348 "parse_tree_out_pragma.m"
    else
#line 348 "parse_tree_out_pragma.m"
      {
#line 348 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_50;
#line 348 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Code_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_7, (MR_Integer) 0)));
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_9_36;
#line 375 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv9_STATE_VARIABLE_U_10_37;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_IO_15_15;

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_9_36);
        }
#line 375 "parse_tree_out_pragma.m"
        {
#line 375 "parse_tree_out_pragma.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_50);
        }
#line 375 "parse_tree_out_pragma.m"
        {
#line 375 "parse_tree_out_pragma.m"
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_50, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[2], parse_tree__parse_tree_out_pragma__Code_23, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv9_STATE_VARIABLE_U_10_37);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_IO_15_15);
        }
#line 348 "parse_tree_out_pragma.m"
      }
#line 341 "parse_tree_out_pragma.m"
    {
#line 341 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 335 "parse_tree_out_pragma.m"
  }
#line 332 "parse_tree_out_pragma.m"
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
#line 1414 "parse_tree_out_pragma.m"
  {
#line 1414 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1414 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1412 "parse_tree_out_pragma.m"
      {
#line 1413 "parse_tree_out_pragma.m"
        {
#line 1413 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1412 "parse_tree_out_pragma.m"
      }
#line 1414 "parse_tree_out_pragma.m"
    else
#line 1414 "parse_tree_out_pragma.m"
      {
#line 1414 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6, (MR_Integer) 0)));

#line 1414 "parse_tree_out_pragma.m"
        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__V_27_27)) == (MR_mktag((MR_Integer) 1))))
#line 1418 "parse_tree_out_pragma.m"
          {
#line 1418 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__Error_9 = (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, (MR_Integer) 0));

#line 1419 "parse_tree_out_pragma.m"
            {
#line 1419 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "can_loop");
            }
#line 1425 "parse_tree_out_pragma.m"
#line 1425 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Verbose_5) {
#line 1425 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1425 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1426 "parse_tree_out_pragma.m"
                {
#line 1426 "parse_tree_out_pragma.m"
                }
#line 1425 "parse_tree_out_pragma.m"
                break;
#line 1425 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1421 "parse_tree_out_pragma.m"
                {
#line 1422 "parse_tree_out_pragma.m"
                  {
#line 1422 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 1423 "parse_tree_out_pragma.m"
                  {
#line 1423 "parse_tree_out_pragma.m"
                    mercury__io__write_3_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_26, parse_tree__parse_tree_out_pragma__Error_9);
                  }
#line 1424 "parse_tree_out_pragma.m"
                  {
#line 1424 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 1421 "parse_tree_out_pragma.m"
                }
#line 1425 "parse_tree_out_pragma.m"
                break;
#line 1425 "parse_tree_out_pragma.m"
            }
#line 1418 "parse_tree_out_pragma.m"
          }
#line 1414 "parse_tree_out_pragma.m"
        else
#line 1415 "parse_tree_out_pragma.m"
          {
#line 1416 "parse_tree_out_pragma.m"
            {
#line 1416 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "cannot_loop");
            }
#line 1415 "parse_tree_out_pragma.m"
          }
#line 1414 "parse_tree_out_pragma.m"
      }
#line 1414 "parse_tree_out_pragma.m"
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
#line 1361 "parse_tree_out_pragma.m"
  {
#line 1361 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

#line 1361 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1359 "parse_tree_out_pragma.m"
      {
#line 1360 "parse_tree_out_pragma.m"
        {
#line 1360 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 1359 "parse_tree_out_pragma.m"
      }
#line 1361 "parse_tree_out_pragma.m"
    else
#line 1361 "parse_tree_out_pragma.m"
      {
#line 1361 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6, (MR_Integer) 0)));

#line 1361 "parse_tree_out_pragma.m"
        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__V_33_33)) == (MR_mktag((MR_Integer) 0))))
#line 1373 "parse_tree_out_pragma.m"
          {
#line 1373 "parse_tree_out_pragma.m"
            MR_Integer parse_tree__parse_tree_out_pragma__Const_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 0)));
#line 1373 "parse_tree_out_pragma.m"
            MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 1)));

#line 1374 "parse_tree_out_pragma.m"
            {
#line 1374 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "finite(");
            }
#line 1375 "parse_tree_out_pragma.m"
            {
#line 1375 "parse_tree_out_pragma.m"
              mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Const_9);
            }
#line 1376 "parse_tree_out_pragma.m"
            {
#line 1376 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1383 "parse_tree_out_pragma.m"
            if ((parse_tree__parse_tree_out_pragma__UsedArgs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1383 "parse_tree_out_pragma.m"
              {
#line 1384 "parse_tree_out_pragma.m"
                {
#line 1384 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "[]");
                }
#line 1383 "parse_tree_out_pragma.m"
              }
#line 1383 "parse_tree_out_pragma.m"
            else
#line 1385 "parse_tree_out_pragma.m"
              {
#line 1385 "parse_tree_out_pragma.m"
                MR_Word parse_tree__parse_tree_out_pragma__UsedArg_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UsedArgs_10, (MR_Integer) 0)));
#line 1385 "parse_tree_out_pragma.m"
                MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UsedArgs_10, (MR_Integer) 1)));

#line 1386 "parse_tree_out_pragma.m"
                {
#line 1386 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "[");
                }
#line 1403 "parse_tree_out_pragma.m"
#line 1403 "parse_tree_out_pragma.m"
                switch (parse_tree__parse_tree_out_pragma__UsedArg_39) {
#line 1403 "parse_tree_out_pragma.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1403 "parse_tree_out_pragma.m"
                  case (MR_Integer) 0:
#line 1403 "parse_tree_out_pragma.m"
                    {
#line 1404 "parse_tree_out_pragma.m"
                      {
#line 1404 "parse_tree_out_pragma.m"
                        mercury__io__write_string_3_p_0((MR_String) "no");
                      }
#line 1403 "parse_tree_out_pragma.m"
                    }
#line 1403 "parse_tree_out_pragma.m"
                    break;
#line 1403 "parse_tree_out_pragma.m"
                  case (MR_Integer) 1:
#line 1406 "parse_tree_out_pragma.m"
                    {
#line 1407 "parse_tree_out_pragma.m"
                      {
#line 1407 "parse_tree_out_pragma.m"
                        mercury__io__write_string_3_p_0((MR_String) "yes");
                      }
#line 1406 "parse_tree_out_pragma.m"
                    }
#line 1403 "parse_tree_out_pragma.m"
                    break;
#line 1403 "parse_tree_out_pragma.m"
                }
#line 1388 "parse_tree_out_pragma.m"
                {
#line 1388 "parse_tree_out_pragma.m"
                  parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(parse_tree__parse_tree_out_pragma__UsedArgs_40);
                }
#line 1389 "parse_tree_out_pragma.m"
                {
#line 1389 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
#line 1385 "parse_tree_out_pragma.m"
              }
#line 1378 "parse_tree_out_pragma.m"
            {
#line 1378 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 1373 "parse_tree_out_pragma.m"
          }
#line 1361 "parse_tree_out_pragma.m"
        else
#line 1362 "parse_tree_out_pragma.m"
          {
#line 1362 "parse_tree_out_pragma.m"
            MR_Box parse_tree__parse_tree_out_pragma__Error_8 = (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 0));

#line 1363 "parse_tree_out_pragma.m"
            {
#line 1363 "parse_tree_out_pragma.m"
              mercury__io__write_string_3_p_0((MR_String) "infinite");
            }
#line 1369 "parse_tree_out_pragma.m"
#line 1369 "parse_tree_out_pragma.m"
            switch (parse_tree__parse_tree_out_pragma__Verbose_5) {
#line 1369 "parse_tree_out_pragma.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1369 "parse_tree_out_pragma.m"
              case (MR_Integer) 0:
#line 1370 "parse_tree_out_pragma.m"
                {
#line 1370 "parse_tree_out_pragma.m"
                }
#line 1369 "parse_tree_out_pragma.m"
                break;
#line 1369 "parse_tree_out_pragma.m"
              case (MR_Integer) 1:
#line 1365 "parse_tree_out_pragma.m"
                {
#line 1366 "parse_tree_out_pragma.m"
                  {
#line 1366 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 1367 "parse_tree_out_pragma.m"
                  {
#line 1367 "parse_tree_out_pragma.m"
                    mercury__io__write_3_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_32, parse_tree__parse_tree_out_pragma__Error_8);
                  }
#line 1368 "parse_tree_out_pragma.m"
                  {
#line 1368 "parse_tree_out_pragma.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 1365 "parse_tree_out_pragma.m"
                }
#line 1369 "parse_tree_out_pragma.m"
                break;
#line 1369 "parse_tree_out_pragma.m"
            }
#line 1362 "parse_tree_out_pragma.m"
          }
#line 1361 "parse_tree_out_pragma.m"
      }
#line 1361 "parse_tree_out_pragma.m"
  }
#line 89 "parse_tree_out_pragma.m"
}

#line 1626 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1(
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1626 "parse_tree_out_pragma.m"
{
#line 1626 "parse_tree_out_pragma.m"
  {
#line 1626 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1626 "parse_tree_out_pragma.m"
    {
#line 1626 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1626 "parse_tree_out_pragma.m"
  }
#line 1626 "parse_tree_out_pragma.m"
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
#line 1567 "parse_tree_out_pragma.m"
  {
#line 1567 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1567 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 0)));
#line 1567 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 1)));
#line 1567 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 2)));
#line 1567 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeStructureReuseDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 3)));
#line 1567 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 0)));
#line 1567 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 1)));
#line 1567 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 2)));
#line 1567 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_19;
#line 1567 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_20;
#line 1567 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_21;

#line 1571 "parse_tree_out_pragma.m"
    {
#line 1571 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma structure_reuse(");
    }
#line 1572 "parse_tree_out_pragma.m"
    {
#line 1572 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_19);
    }
#line 1575 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeVarSet_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1576 "parse_tree_out_pragma.m"
      {
#line 1577 "parse_tree_out_pragma.m"
        {
#line 1577 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_20);
        }
#line 1576 "parse_tree_out_pragma.m"
      }
#line 1575 "parse_tree_out_pragma.m"
    else
#line 1574 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeVarSet_8, (MR_Integer) 0)));
#line 1581 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTVarSet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1582 "parse_tree_out_pragma.m"
      {
#line 1583 "parse_tree_out_pragma.m"
        {
#line 1583 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__parse_tree_out_pragma__TypeVarSet_21);
        }
#line 1582 "parse_tree_out_pragma.m"
      }
#line 1581 "parse_tree_out_pragma.m"
    else
#line 1580 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__TypeVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTVarSet_9, (MR_Integer) 0)));
#line 1590 "parse_tree_out_pragma.m"
#line 1590 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_18) {
#line 1590 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1590 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1591 "parse_tree_out_pragma.m"
        {
#line 1591 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_22;
#line 1591 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_23;
#line 1592 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_23;

#line 1592 "parse_tree_out_pragma.m"
          {
#line 1592 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_17, &parse_tree__parse_tree_out_pragma__FuncModeList_22, &parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
          }
#line 1592 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_23 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
#line 1593 "parse_tree_out_pragma.m"
          {
#line 1593 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__FuncModeList_22, parse_tree__parse_tree_out_pragma__RetMode_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1591 "parse_tree_out_pragma.m"
        }
#line 1590 "parse_tree_out_pragma.m"
        break;
#line 1590 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1587 "parse_tree_out_pragma.m"
        {
#line 1588 "parse_tree_out_pragma.m"
          {
#line 1588 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__Modes_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1587 "parse_tree_out_pragma.m"
        }
#line 1590 "parse_tree_out_pragma.m"
        break;
#line 1590 "parse_tree_out_pragma.m"
    }
#line 1597 "parse_tree_out_pragma.m"
    {
#line 1597 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1616 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__HeadVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1616 "parse_tree_out_pragma.m"
      {
#line 1617 "parse_tree_out_pragma.m"
        {
#line 1617 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars, types");
        }
#line 1616 "parse_tree_out_pragma.m"
      }
#line 1616 "parse_tree_out_pragma.m"
    else
#line 1619 "parse_tree_out_pragma.m"
      {
#line 1619 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_62_62;

#line 1620 "parse_tree_out_pragma.m"
        {
#line 1620 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars(");
        }
#line 1621 "parse_tree_out_pragma.m"
        {
#line 1621 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_pragma__VarSet_20, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__HeadVars_13);
        }
#line 1622 "parse_tree_out_pragma.m"
        {
#line 1622 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "), ");
        }
#line 1624 "parse_tree_out_pragma.m"
        {
#line 1624 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "types(");
        }
#line 1626 "parse_tree_out_pragma.m"
        {
#line 1626 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1626 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[1]));
#line 1626 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1));
#line 1626 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1626 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_21));
#line 1626 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1626 "parse_tree_out_pragma.m"
        }
#line 1625 "parse_tree_out_pragma.m"
        {
#line 1625 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_tree_out_pragma__HeadVarTypes_14, (MR_String) ",", parse_tree__parse_tree_out_pragma__V_62_62);
        }
#line 1627 "parse_tree_out_pragma.m"
        {
#line 1627 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 1619 "parse_tree_out_pragma.m"
      }
#line 1600 "parse_tree_out_pragma.m"
    {
#line 1600 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1601 "parse_tree_out_pragma.m"
    {
#line 1601 "parse_tree_out_pragma.m"
      parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_20, parse_tree__parse_tree_out_pragma__TypeVarSet_21, parse_tree__parse_tree_out_pragma__MaybeStructureReuseDomain_15);
    }
#line 1603 "parse_tree_out_pragma.m"
    {
#line 1603 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1567 "parse_tree_out_pragma.m"
  }
#line 83 "parse_tree_out_pragma.m"
}

#line 1626 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1(
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 1626 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 1626 "parse_tree_out_pragma.m"
{
#line 1626 "parse_tree_out_pragma.m"
  {
#line 1626 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 1626 "parse_tree_out_pragma.m"
    {
#line 1626 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 1626 "parse_tree_out_pragma.m"
  }
#line 1626 "parse_tree_out_pragma.m"
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
#line 1524 "parse_tree_out_pragma.m"
  {
#line 1524 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1524 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 0)));
#line 1524 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 1)));
#line 1524 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__HeadVarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 2)));
#line 1524 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeSharingAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 3)));
#line 1524 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 0)));
#line 1524 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 1)));
#line 1524 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 2)));
#line 1524 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_19;
#line 1524 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_20;
#line 1524 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_21;

#line 1528 "parse_tree_out_pragma.m"
    {
#line 1528 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma structure_sharing(");
    }
#line 1529 "parse_tree_out_pragma.m"
    {
#line 1529 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_19);
    }
#line 1532 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeVarSet_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1533 "parse_tree_out_pragma.m"
      {
#line 1534 "parse_tree_out_pragma.m"
        {
#line 1534 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_20);
        }
#line 1533 "parse_tree_out_pragma.m"
      }
#line 1532 "parse_tree_out_pragma.m"
    else
#line 1531 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeVarSet_8, (MR_Integer) 0)));
#line 1538 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeTVarSet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1539 "parse_tree_out_pragma.m"
      {
#line 1540 "parse_tree_out_pragma.m"
        {
#line 1540 "parse_tree_out_pragma.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__parse_tree_out_pragma__TypeVarSet_21);
        }
#line 1539 "parse_tree_out_pragma.m"
      }
#line 1538 "parse_tree_out_pragma.m"
    else
#line 1537 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__TypeVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTVarSet_9, (MR_Integer) 0)));
#line 1546 "parse_tree_out_pragma.m"
#line 1546 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_18) {
#line 1546 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1546 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1547 "parse_tree_out_pragma.m"
        {
#line 1547 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_22;
#line 1547 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_23;
#line 1548 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_23;

#line 1548 "parse_tree_out_pragma.m"
          {
#line 1548 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_17, &parse_tree__parse_tree_out_pragma__FuncModeList_22, &parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
          }
#line 1548 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_23 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
#line 1549 "parse_tree_out_pragma.m"
          {
#line 1549 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__FuncModeList_22, parse_tree__parse_tree_out_pragma__RetMode_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1547 "parse_tree_out_pragma.m"
        }
#line 1546 "parse_tree_out_pragma.m"
        break;
#line 1546 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1543 "parse_tree_out_pragma.m"
        {
#line 1544 "parse_tree_out_pragma.m"
          {
#line 1544 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__Modes_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1543 "parse_tree_out_pragma.m"
        }
#line 1546 "parse_tree_out_pragma.m"
        break;
#line 1546 "parse_tree_out_pragma.m"
    }
#line 1553 "parse_tree_out_pragma.m"
    {
#line 1553 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1616 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__HeadVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1616 "parse_tree_out_pragma.m"
      {
#line 1617 "parse_tree_out_pragma.m"
        {
#line 1617 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars, types");
        }
#line 1616 "parse_tree_out_pragma.m"
      }
#line 1616 "parse_tree_out_pragma.m"
    else
#line 1619 "parse_tree_out_pragma.m"
      {
#line 1619 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__V_62_62;

#line 1620 "parse_tree_out_pragma.m"
        {
#line 1620 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "vars(");
        }
#line 1621 "parse_tree_out_pragma.m"
        {
#line 1621 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_pragma__VarSet_20, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__HeadVars_13);
        }
#line 1622 "parse_tree_out_pragma.m"
        {
#line 1622 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "), ");
        }
#line 1624 "parse_tree_out_pragma.m"
        {
#line 1624 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "types(");
        }
#line 1626 "parse_tree_out_pragma.m"
        {
#line 1626 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1626 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[1]));
#line 1626 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1));
#line 1626 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1626 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_21));
#line 1626 "parse_tree_out_pragma.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1626 "parse_tree_out_pragma.m"
        }
#line 1625 "parse_tree_out_pragma.m"
        {
#line 1625 "parse_tree_out_pragma.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_tree_out_pragma__HeadVarTypes_14, (MR_String) ",", parse_tree__parse_tree_out_pragma__V_62_62);
        }
#line 1627 "parse_tree_out_pragma.m"
        {
#line 1627 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 1619 "parse_tree_out_pragma.m"
      }
#line 1556 "parse_tree_out_pragma.m"
    {
#line 1556 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1557 "parse_tree_out_pragma.m"
    {
#line 1557 "parse_tree_out_pragma.m"
      parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_20, parse_tree__parse_tree_out_pragma__TypeVarSet_21, parse_tree__parse_tree_out_pragma__MaybeSharingAs_15);
    }
#line 1559 "parse_tree_out_pragma.m"
    {
#line 1559 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1524 "parse_tree_out_pragma.m"
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
#line 1338 "parse_tree_out_pragma.m"
  {
#line 1338 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1338 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_16;

#line 1339 "parse_tree_out_pragma.m"
    {
#line 1339 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination_info(");
    }
#line 1340 "parse_tree_out_pragma.m"
    {
#line 1340 "parse_tree_out_pragma.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_16);
    }
#line 1345 "parse_tree_out_pragma.m"
#line 1345 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
#line 1345 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1345 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1346 "parse_tree_out_pragma.m"
        {
#line 1346 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_17;
#line 1346 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_18;
#line 1347 "parse_tree_out_pragma.m"
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_18;

#line 1347 "parse_tree_out_pragma.m"
          {
#line 1347 "parse_tree_out_pragma.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_12, &parse_tree__parse_tree_out_pragma__FuncModeList_17, &parse_tree__parse_tree_out_pragma__conv0_RetMode_18);
          }
#line 1347 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__RetMode_18 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_18);
#line 1348 "parse_tree_out_pragma.m"
          {
#line 1348 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_9, parse_tree__parse_tree_out_pragma__InitVarSet_16, parse_tree__parse_tree_out_pragma__SymName_11, parse_tree__parse_tree_out_pragma__FuncModeList_17, parse_tree__parse_tree_out_pragma__RetMode_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1346 "parse_tree_out_pragma.m"
        }
#line 1345 "parse_tree_out_pragma.m"
        break;
#line 1345 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1342 "parse_tree_out_pragma.m"
        {
#line 1343 "parse_tree_out_pragma.m"
          {
#line 1343 "parse_tree_out_pragma.m"
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_9, parse_tree__parse_tree_out_pragma__InitVarSet_16, parse_tree__parse_tree_out_pragma__SymName_11, parse_tree__parse_tree_out_pragma__ModeList_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1342 "parse_tree_out_pragma.m"
        }
#line 1345 "parse_tree_out_pragma.m"
        break;
#line 1345 "parse_tree_out_pragma.m"
    }
#line 1351 "parse_tree_out_pragma.m"
    {
#line 1351 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1352 "parse_tree_out_pragma.m"
    {
#line 1352 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_37, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__MaybeArgSize_13);
    }
#line 1353 "parse_tree_out_pragma.m"
    {
#line 1353 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1354 "parse_tree_out_pragma.m"
    {
#line 1354 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_S_38, parse_tree__parse_tree_out_pragma__TypeInfo_for_T_37, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__MaybeTermination_14);
    }
#line 1355 "parse_tree_out_pragma.m"
    {
#line 1355 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1338 "parse_tree_out_pragma.m"
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
#line 1119 "parse_tree_out_pragma.m"
  {
#line 1119 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1119 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TablingInfo_4, (MR_Integer) 0)));
#line 1119 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MM_TablingStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TablingInfo_4, (MR_Integer) 1)));
#line 1119 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1119 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1119 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1119 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1124 "parse_tree_out_pragma.m"
    {
#line 1124 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma mm_tabling_info(");
    }
#line 1125 "parse_tree_out_pragma.m"
    {
#line 1125 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1126 "parse_tree_out_pragma.m"
    {
#line 1126 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1127 "parse_tree_out_pragma.m"
    {
#line 1127 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1128 "parse_tree_out_pragma.m"
    {
#line 1128 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1129 "parse_tree_out_pragma.m"
    {
#line 1129 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1130 "parse_tree_out_pragma.m"
    {
#line 1130 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1131 "parse_tree_out_pragma.m"
    {
#line 1131 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1132 "parse_tree_out_pragma.m"
    {
#line 1132 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1136 "parse_tree_out_pragma.m"
#line 1136 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__MM_TablingStatus_7) {
#line 1136 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1136 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 1140 "parse_tree_out_pragma.m"
        {
#line 1141 "parse_tree_out_pragma.m"
          {
#line 1141 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_conditional");
          }
#line 1140 "parse_tree_out_pragma.m"
        }
#line 1136 "parse_tree_out_pragma.m"
        break;
#line 1136 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1134 "parse_tree_out_pragma.m"
        {
#line 1135 "parse_tree_out_pragma.m"
          {
#line 1135 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_may_call");
          }
#line 1134 "parse_tree_out_pragma.m"
        }
#line 1136 "parse_tree_out_pragma.m"
        break;
#line 1136 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1137 "parse_tree_out_pragma.m"
        {
#line 1138 "parse_tree_out_pragma.m"
          {
#line 1138 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_will_not_call");
          }
#line 1137 "parse_tree_out_pragma.m"
        }
#line 1136 "parse_tree_out_pragma.m"
        break;
#line 1136 "parse_tree_out_pragma.m"
    }
#line 1143 "parse_tree_out_pragma.m"
    {
#line 1143 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1119 "parse_tree_out_pragma.m"
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
#line 1088 "parse_tree_out_pragma.m"
  {
#line 1088 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1088 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TrailingInfo_4, (MR_Integer) 0)));
#line 1088 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TrailingStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TrailingInfo_4, (MR_Integer) 1)));
#line 1088 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1088 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1088 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1088 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1093 "parse_tree_out_pragma.m"
    {
#line 1093 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma trailing_info(");
    }
#line 1094 "parse_tree_out_pragma.m"
    {
#line 1094 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1095 "parse_tree_out_pragma.m"
    {
#line 1095 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1096 "parse_tree_out_pragma.m"
    {
#line 1096 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1097 "parse_tree_out_pragma.m"
    {
#line 1097 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1098 "parse_tree_out_pragma.m"
    {
#line 1098 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1099 "parse_tree_out_pragma.m"
    {
#line 1099 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1100 "parse_tree_out_pragma.m"
    {
#line 1100 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1101 "parse_tree_out_pragma.m"
    {
#line 1101 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1105 "parse_tree_out_pragma.m"
#line 1105 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__TrailingStatus_7) {
#line 1105 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1105 "parse_tree_out_pragma.m"
      case (MR_Integer) 2:
#line 1109 "parse_tree_out_pragma.m"
        {
#line 1110 "parse_tree_out_pragma.m"
          {
#line 1110 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "conditional");
          }
#line 1109 "parse_tree_out_pragma.m"
        }
#line 1105 "parse_tree_out_pragma.m"
        break;
#line 1105 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1103 "parse_tree_out_pragma.m"
        {
#line 1104 "parse_tree_out_pragma.m"
          {
#line 1104 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "may_modify_trail");
          }
#line 1103 "parse_tree_out_pragma.m"
        }
#line 1105 "parse_tree_out_pragma.m"
        break;
#line 1105 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1106 "parse_tree_out_pragma.m"
        {
#line 1107 "parse_tree_out_pragma.m"
          {
#line 1107 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "will_not_modify_trail");
          }
#line 1106 "parse_tree_out_pragma.m"
        }
#line 1105 "parse_tree_out_pragma.m"
        break;
#line 1105 "parse_tree_out_pragma.m"
    }
#line 1112 "parse_tree_out_pragma.m"
    {
#line 1112 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1088 "parse_tree_out_pragma.m"
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
#line 1051 "parse_tree_out_pragma.m"
  {
#line 1051 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1051 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExceptionsInfo_4, (MR_Integer) 0)));
#line 1051 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ThrowStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExceptionsInfo_4, (MR_Integer) 1)));
#line 1051 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1051 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1051 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1051 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1055 "parse_tree_out_pragma.m"
    {
#line 1055 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma exceptions(");
    }
#line 1056 "parse_tree_out_pragma.m"
    {
#line 1056 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1057 "parse_tree_out_pragma.m"
    {
#line 1057 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1058 "parse_tree_out_pragma.m"
    {
#line 1058 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1059 "parse_tree_out_pragma.m"
    {
#line 1059 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1060 "parse_tree_out_pragma.m"
    {
#line 1060 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1061 "parse_tree_out_pragma.m"
    {
#line 1061 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1062 "parse_tree_out_pragma.m"
    {
#line 1062 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1063 "parse_tree_out_pragma.m"
    {
#line 1063 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1067 "parse_tree_out_pragma.m"
#line 1067 "parse_tree_out_pragma.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__ThrowStatus_7)) {
#line 1067 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1067 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 1067 "parse_tree_out_pragma.m"
#line 1067 "parse_tree_out_pragma.m"
        switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__ThrowStatus_7)) {
#line 1067 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1067 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 1065 "parse_tree_out_pragma.m"
            {
#line 1066 "parse_tree_out_pragma.m"
              {
#line 1066 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "will_not_throw");
              }
#line 1065 "parse_tree_out_pragma.m"
            }
#line 1067 "parse_tree_out_pragma.m"
            break;
#line 1067 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 1078 "parse_tree_out_pragma.m"
            {
#line 1079 "parse_tree_out_pragma.m"
              {
#line 1079 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "conditional");
              }
#line 1078 "parse_tree_out_pragma.m"
            }
#line 1067 "parse_tree_out_pragma.m"
            break;
#line 1067 "parse_tree_out_pragma.m"
        }
#line 1067 "parse_tree_out_pragma.m"
        break;
#line 1067 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 1068 "parse_tree_out_pragma.m"
        {
#line 1068 "parse_tree_out_pragma.m"
          MR_Word parse_tree__parse_tree_out_pragma__ExceptionType_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__ThrowStatus_7, (MR_Integer) 0)));

#line 1069 "parse_tree_out_pragma.m"
          {
#line 1069 "parse_tree_out_pragma.m"
            mercury__io__write_string_3_p_0((MR_String) "may_throw(");
          }
#line 1073 "parse_tree_out_pragma.m"
#line 1073 "parse_tree_out_pragma.m"
          switch (parse_tree__parse_tree_out_pragma__ExceptionType_12) {
#line 1073 "parse_tree_out_pragma.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1073 "parse_tree_out_pragma.m"
            case (MR_Integer) 1:
#line 1074 "parse_tree_out_pragma.m"
              {
#line 1075 "parse_tree_out_pragma.m"
                {
#line 1075 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "type_exception)");
                }
#line 1074 "parse_tree_out_pragma.m"
              }
#line 1073 "parse_tree_out_pragma.m"
              break;
#line 1073 "parse_tree_out_pragma.m"
            case (MR_Integer) 0:
#line 1071 "parse_tree_out_pragma.m"
              {
#line 1072 "parse_tree_out_pragma.m"
                {
#line 1072 "parse_tree_out_pragma.m"
                  mercury__io__write_string_3_p_0((MR_String) "user_exception)");
                }
#line 1071 "parse_tree_out_pragma.m"
              }
#line 1073 "parse_tree_out_pragma.m"
              break;
#line 1073 "parse_tree_out_pragma.m"
          }
#line 1068 "parse_tree_out_pragma.m"
        }
#line 1067 "parse_tree_out_pragma.m"
        break;
#line 1067 "parse_tree_out_pragma.m"
    }
#line 1081 "parse_tree_out_pragma.m"
    {
#line 1081 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 1051 "parse_tree_out_pragma.m"
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
#line 1013 "parse_tree_out_pragma.m"
  {
#line 1013 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 1013 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31;
#line 1013 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__UnusedArgsInfo_4, (MR_Integer) 0)));
#line 1013 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__UnusedArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__UnusedArgsInfo_4, (MR_Integer) 1)));
#line 1013 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
#line 1013 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
#line 1013 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
#line 1013 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

#line 1017 "parse_tree_out_pragma.m"
    {
#line 1017 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma unused_args(");
    }
#line 1018 "parse_tree_out_pragma.m"
    {
#line 1018 "parse_tree_out_pragma.m"
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
#line 1019 "parse_tree_out_pragma.m"
    {
#line 1019 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1020 "parse_tree_out_pragma.m"
    {
#line 1020 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
#line 1021 "parse_tree_out_pragma.m"
    {
#line 1021 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1022 "parse_tree_out_pragma.m"
    {
#line 1022 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
#line 1023 "parse_tree_out_pragma.m"
    {
#line 1023 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1024 "parse_tree_out_pragma.m"
    {
#line 1024 "parse_tree_out_pragma.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
#line 1025 "parse_tree_out_pragma.m"
    {
#line 1025 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", [");
    }
#line 7574 "parse_tree.parse_tree_out_pragma.c"
    parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 1032 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "parse_tree_out_pragma.m"
      {
#line 1032 "parse_tree_out_pragma.m"
      }
#line 1032 "parse_tree_out_pragma.m"
    else
#line 1033 "parse_tree_out_pragma.m"
      {
#line 1033 "parse_tree_out_pragma.m"
        MR_Integer parse_tree__parse_tree_out_pragma__First_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnusedArgs_7, (MR_Integer) 0)));
#line 1033 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Rest_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnusedArgs_7, (MR_Integer) 1)));
#line 39 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_40;
#line 1035 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_28_28;

#line 39 "parse_tree.parse_tree_out_info.int"
        {
#line 39 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) (parse_tree__parse_tree_out_pragma__First_35)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_40);
        }
#line 1035 "parse_tree_out_pragma.m"
        {
#line 1035 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, parse_tree__parse_tree_out_pragma__Rest_36, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_28_28);
        }
#line 1033 "parse_tree_out_pragma.m"
      }
#line 1027 "parse_tree_out_pragma.m"
    {
#line 1027 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "]).\n");
    }
#line 1013 "parse_tree_out_pragma.m"
  }
#line 57 "parse_tree_out_pragma.m"
}

#line 994 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
#line 994 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 994 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 994 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 994 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 994 "parse_tree_out_pragma.m"
{
#line 994 "parse_tree_out_pragma.m"
  {
#line 994 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 994 "parse_tree_out_pragma.m"
    {
#line 994 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
#line 994 "parse_tree_out_pragma.m"
  }
#line 994 "parse_tree_out_pragma.m"
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
#line 955 "parse_tree_out_pragma.m"
  {
#line 955 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 955 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__PredName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 0)));
#line 955 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__SpecName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 1)));
#line 955 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 2)));
#line 955 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 3)));
#line 955 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__MaybeModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 4)));
#line 955 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Subst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 5)));
#line 955 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 6)));
#line 955 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_52_52;
#line 956 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 7)));

#line 958 "parse_tree_out_pragma.m"
    {
#line 958 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma type_spec(");
    }
#line 985 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "parse_tree_out_pragma.m"
      {
#line 987 "parse_tree_out_pragma.m"
        {
#line 987 "parse_tree_out_pragma.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_10);
        }
#line 989 "parse_tree_out_pragma.m"
        {
#line 989 "parse_tree_out_pragma.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 990 "parse_tree_out_pragma.m"
        {
#line 990 "parse_tree_out_pragma.m"
          mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_12);
        }
#line 986 "parse_tree_out_pragma.m"
      }
#line 985 "parse_tree_out_pragma.m"
    else
#line 960 "parse_tree_out_pragma.m"
      {
#line 960 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeModes_14, (MR_Integer) 0)));
#line 960 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_20;

#line 964 "parse_tree_out_pragma.m"
        if ((parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 965 "parse_tree_out_pragma.m"
          {
#line 966 "parse_tree_out_pragma.m"
            {
#line 966 "parse_tree_out_pragma.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_pragma", (MR_String) "predicate \140parse_tree.parse_tree_out_pragma.mercury_output_pragma_type_spec\'/5", (MR_String) "no pred_or_func");
#line 966 "parse_tree_out_pragma.m"
              return;
            }
#line 965 "parse_tree_out_pragma.m"
          }
#line 964 "parse_tree_out_pragma.m"
        else
#line 962 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__PredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13, (MR_Integer) 0)));
#line 977 "parse_tree_out_pragma.m"
#line 977 "parse_tree_out_pragma.m"
        switch (parse_tree__parse_tree_out_pragma__PredOrFunc_20) {
#line 977 "parse_tree_out_pragma.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 977 "parse_tree_out_pragma.m"
          case (MR_Integer) 1:
#line 969 "parse_tree_out_pragma.m"
            {
#line 969 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__FuncModes_21;
#line 969 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__RetMode_22;
#line 969 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_23;
#line 970 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_22;

#line 970 "parse_tree_out_pragma.m"
              {
#line 970 "parse_tree_out_pragma.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_18, &parse_tree__parse_tree_out_pragma__FuncModes_21, &parse_tree__parse_tree_out_pragma__conv0_RetMode_22);
              }
#line 970 "parse_tree_out_pragma.m"
              parse_tree__parse_tree_out_pragma__RetMode_22 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_22);
#line 971 "parse_tree_out_pragma.m"
              {
#line 971 "parse_tree_out_pragma.m"
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__PredName_10);
              }
#line 972 "parse_tree_out_pragma.m"
              {
#line 972 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 973 "parse_tree_out_pragma.m"
              {
#line 973 "parse_tree_out_pragma.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InstVarSet_23);
              }
#line 974 "parse_tree_out_pragma.m"
              {
#line 974 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_23, parse_tree__parse_tree_out_pragma__FuncModes_21);
              }
#line 975 "parse_tree_out_pragma.m"
              {
#line 975 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) ") = ");
              }
#line 976 "parse_tree_out_pragma.m"
              {
#line 976 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_inst__mercury_output_mode_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_23, parse_tree__parse_tree_out_pragma__RetMode_22);
              }
#line 969 "parse_tree_out_pragma.m"
            }
#line 977 "parse_tree_out_pragma.m"
            break;
#line 977 "parse_tree_out_pragma.m"
          case (MR_Integer) 0:
#line 978 "parse_tree_out_pragma.m"
            {
#line 978 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_60;

#line 979 "parse_tree_out_pragma.m"
              {
#line 979 "parse_tree_out_pragma.m"
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__PredName_10);
              }
#line 980 "parse_tree_out_pragma.m"
              {
#line 980 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 981 "parse_tree_out_pragma.m"
              {
#line 981 "parse_tree_out_pragma.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InstVarSet_60);
              }
#line 982 "parse_tree_out_pragma.m"
              {
#line 982 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_60, parse_tree__parse_tree_out_pragma__Modes_18);
              }
#line 983 "parse_tree_out_pragma.m"
              {
#line 983 "parse_tree_out_pragma.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 978 "parse_tree_out_pragma.m"
            }
#line 977 "parse_tree_out_pragma.m"
            break;
#line 977 "parse_tree_out_pragma.m"
        }
#line 960 "parse_tree_out_pragma.m"
      }
#line 992 "parse_tree_out_pragma.m"
    {
#line 992 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", (");
    }
#line 994 "parse_tree_out_pragma.m"
    {
#line 994 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 994 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[0]));
#line 994 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1));
#line 994 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 994 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarSet_16));
#line 994 "parse_tree_out_pragma.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 4) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarNamePrint_6));
#line 994 "parse_tree_out_pragma.m"
    }
#line 993 "parse_tree_out_pragma.m"
    {
#line 993 "parse_tree_out_pragma.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[0], parse_tree__parse_tree_out_pragma__Subst_15, (MR_String) ", ", parse_tree__parse_tree_out_pragma__V_52_52);
    }
#line 995 "parse_tree_out_pragma.m"
    {
#line 995 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) "), ");
    }
#line 996 "parse_tree_out_pragma.m"
    {
#line 996 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, parse_tree__parse_tree_out_pragma__SpecName_11);
    }
#line 998 "parse_tree_out_pragma.m"
    {
#line 998 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 955 "parse_tree_out_pragma.m"
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
#line 438 "parse_tree_out_pragma.m"
  {
#line 438 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 438 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_6;
#line 439 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_String_6;

#line 439 "parse_tree_out_pragma.m"
    {
#line 439 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1], parse_tree__parse_tree_out_pragma__Lang_4, parse_tree__parse_tree_out_pragma__FPInfo_5, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv0_String_6);
    }
#line 439 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__String_6 = ((MR_String) parse_tree__parse_tree_out_pragma__conv0_String_6);
#line 438 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_6;
#line 438 "parse_tree_out_pragma.m"
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
#line 436 "parse_tree_out_pragma.m"
  {
#line 436 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 436 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_9;

#line 436 "parse_tree_out_pragma.m"
    {
#line 436 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__FPInfo_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_9);
    }
#line 436 "parse_tree_out_pragma.m"
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
#line 420 "parse_tree_out_pragma.m"
  {
#line 420 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 420 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__FIM_6 = (MR_Word) parse_tree__parse_tree_out_pragma__FIMinfo_4;
#line 420 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FIM_6, (MR_Integer) 0)));
#line 420 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FIM_6, (MR_Integer) 1)));
#line 424 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_13_13;

#line 423 "parse_tree_out_pragma.m"
    {
#line 423 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_import_module(");
    }
#line 424 "parse_tree_out_pragma.m"
    {
#line 424 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_7, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_13_13);
    }
#line 425 "parse_tree_out_pragma.m"
    {
#line 425 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 426 "parse_tree_out_pragma.m"
    {
#line 426 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, parse_tree__parse_tree_out_pragma__ModuleName_8);
    }
#line 428 "parse_tree_out_pragma.m"
    {
#line 428 "parse_tree_out_pragma.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 420 "parse_tree_out_pragma.m"
  }
#line 46 "parse_tree_out_pragma.m"
}

#line 375 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 375 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 375 "parse_tree_out_pragma.m"
{
#line 375 "parse_tree_out_pragma.m"
  {
#line 375 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 375 "parse_tree_out_pragma.m"
    {
#line 375 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 375 "parse_tree_out_pragma.m"
  }
#line 375 "parse_tree_out_pragma.m"
}

#line 43 "parse_tree_out_pragma.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0(
#line 43 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FDInfo_3)
#line 43 "parse_tree_out_pragma.m"
{
#line 305 "parse_tree_out_pragma.m"
  {
#line 305 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 305 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_4;
#line 305 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1];
#line 305 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 305 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__IsLocal_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 305 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 1)));
#line 305 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15;
#line 305 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16;
#line 305 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18;
#line 305 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22;
#line 305 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24;
#line 305 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15;
#line 314 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv23_String_4;

#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15 = ((MR_String) parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15);
#line 314 "parse_tree_out_pragma.m"
    {
#line 314 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, parse_tree__parse_tree_out_pragma__Lang_11, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16);
    }
#line 314 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16 = ((MR_String) parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16);
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18 = ((MR_String) parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18);
#line 319 "parse_tree_out_pragma.m"
#line 319 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__IsLocal_12) {
#line 319 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 319 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 320 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
          MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22;

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "exported")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22);
          }
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22 = ((MR_String) parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22);
#line 320 "parse_tree_out_pragma.m"
        }
#line 319 "parse_tree_out_pragma.m"
        break;
#line 319 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 317 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
          MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22;

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "local")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22);
          }
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22 = ((MR_String) parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22);
#line 317 "parse_tree_out_pragma.m"
        }
#line 319 "parse_tree_out_pragma.m"
        break;
#line 319 "parse_tree_out_pragma.m"
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24 = ((MR_String) parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24);
#line 348 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_13)) == (MR_mktag((MR_Integer) 1))))
#line 351 "parse_tree_out_pragma.m"
      {
#line 351 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__FileName_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_13, (MR_Integer) 0)));
#line 351 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35;
#line 351 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35;
#line 47 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 47 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25;

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35 = ((MR_String) parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35);
#line 47 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 12)));
#line 47 "parse_tree.parse_tree_out_info.int"
        {
#line 47 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_33)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36);
        }
#line 47 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36 = ((MR_String) parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36);
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ")")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25 = ((MR_String) parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25);
#line 351 "parse_tree_out_pragma.m"
      }
#line 348 "parse_tree_out_pragma.m"
    else
#line 348 "parse_tree_out_pragma.m"
      {
#line 348 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_59;
#line 348 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Code_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_13, (MR_Integer) 0)));
#line 348 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45;
#line 348 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45;
#line 375 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25;

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45 = ((MR_String) parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45);
#line 375 "parse_tree_out_pragma.m"
        {
#line 375 "parse_tree_out_pragma.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_59);
        }
#line 375 "parse_tree_out_pragma.m"
        {
#line 375 "parse_tree_out_pragma.m"
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_59, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[1], parse_tree__parse_tree_out_pragma__Code_32, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45)), &parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46);
        }
#line 375 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46 = ((MR_String) parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46);
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_20(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25 = ((MR_String) parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25);
#line 348 "parse_tree_out_pragma.m"
      }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25)), &parse_tree__parse_tree_out_pragma__conv23_String_4);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__String_4 = ((MR_String) parse_tree__parse_tree_out_pragma__conv23_String_4);
#line 305 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_4;
#line 305 "parse_tree_out_pragma.m"
  }
#line 43 "parse_tree_out_pragma.m"
}

#line 375 "parse_tree_out_pragma.m"
static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1(
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
#line 375 "parse_tree_out_pragma.m"
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
#line 375 "parse_tree_out_pragma.m"
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
#line 375 "parse_tree_out_pragma.m"
{
#line 375 "parse_tree_out_pragma.m"
  {
#line 375 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

#line 375 "parse_tree_out_pragma.m"
    {
#line 375 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
#line 375 "parse_tree_out_pragma.m"
  }
#line 375 "parse_tree_out_pragma.m"
}

#line 41 "parse_tree_out_pragma.m"
void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0(
#line 41 "parse_tree_out_pragma.m"
  MR_Word parse_tree__parse_tree_out_pragma__FDInfo_4)
#line 41 "parse_tree_out_pragma.m"
{
#line 303 "parse_tree_out_pragma.m"
  {
#line 303 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 303 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 303 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__Lang_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 303 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__IsLocal_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 303 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 1)));
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_18;
#line 314 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_19;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_21;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_27;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_IO_7;

#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_18);
    }
#line 314 "parse_tree_out_pragma.m"
    {
#line 314 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__Lang_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_19);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_21);
    }
#line 319 "parse_tree_out_pragma.m"
#line 319 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__IsLocal_15) {
#line 319 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 319 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 320 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
          MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_25;

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "exported")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_25);
          }
#line 320 "parse_tree_out_pragma.m"
        }
#line 319 "parse_tree_out_pragma.m"
        break;
#line 319 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 317 "parse_tree_out_pragma.m"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
          MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_25;

#line 33 "parse_tree.parse_tree_out_info.int"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "local")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_25);
          }
#line 317 "parse_tree_out_pragma.m"
        }
#line 319 "parse_tree_out_pragma.m"
        break;
#line 319 "parse_tree_out_pragma.m"
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_27);
    }
#line 348 "parse_tree_out_pragma.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_16)) == (MR_mktag((MR_Integer) 1))))
#line 351 "parse_tree_out_pragma.m"
      {
#line 351 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__FileName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_16, (MR_Integer) 0)));
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_38;
#line 47 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 47 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_39;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_28;

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_38);
        }
#line 47 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 12)));
#line 47 "parse_tree.parse_tree_out_info.int"
        {
#line 47 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_36)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_39);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_28);
        }
#line 351 "parse_tree_out_pragma.m"
      }
#line 348 "parse_tree_out_pragma.m"
    else
#line 348 "parse_tree_out_pragma.m"
      {
#line 348 "parse_tree_out_pragma.m"
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_62;
#line 348 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__Code_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_16, (MR_Integer) 0)));
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_48;
#line 375 "parse_tree_out_pragma.m"
        MR_Box parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_49;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_28;

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_48);
        }
#line 375 "parse_tree_out_pragma.m"
        {
#line 375 "parse_tree_out_pragma.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_62);
        }
#line 375 "parse_tree_out_pragma.m"
        {
#line 375 "parse_tree_out_pragma.m"
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_62, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[0], parse_tree__parse_tree_out_pragma__Code_35, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_49);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_20(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_28);
        }
#line 348 "parse_tree_out_pragma.m"
      }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_IO_7);
    }
#line 303 "parse_tree_out_pragma.m"
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
#line 266 "parse_tree_out_pragma.m"
  {
#line 266 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 266 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__String_12;
#line 266 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1];
#line 266 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__DeclaredArity_23;
#line 266 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27;
#line 266 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28;
#line 266 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30;
#line 266 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32;
#line 266 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34;
#line 266 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35;
#line 266 "parse_tree_out_pragma.m"
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30;
#line 285 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34;
#line 39 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 39 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv16_String_12;

#line 278 "parse_tree_out_pragma.m"
#line 278 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_9) {
#line 278 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 278 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 279 "parse_tree_out_pragma.m"
        {
#line 280 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__DeclaredArity_23 = (parse_tree__parse_tree_out_pragma__Arity_8 - (MR_Integer) 1);
#line 279 "parse_tree_out_pragma.m"
        }
#line 278 "parse_tree_out_pragma.m"
        break;
#line 278 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 277 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__DeclaredArity_23 = parse_tree__parse_tree_out_pragma__Arity_8;
#line 278 "parse_tree_out_pragma.m"
        break;
#line 278 "parse_tree_out_pragma.m"
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27 = ((MR_String) parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27);
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__PragmaName_10)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28 = ((MR_String) parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28);
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) "(")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30 = ((MR_String) parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30);
#line 285 "parse_tree_out_pragma.m"
    {
#line 285 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_7, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32);
    }
#line 285 "parse_tree_out_pragma.m"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32 = ((MR_String) parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32);
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) "/")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34 = ((MR_String) parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34);
#line 39 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
    {
#line 39 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__DeclaredArity_23)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35);
    }
#line 39 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35 = ((MR_String) parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35);
#line 292 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeAfter_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "parse_tree_out_pragma.m"
      parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35;
#line 292 "parse_tree_out_pragma.m"
    else
#line 289 "parse_tree_out_pragma.m"
      {
#line 289 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__After_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_11, (MR_Integer) 0)));
#line 289 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38;

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37 = ((MR_String) parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37);
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__After_24)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38 = ((MR_String) parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38);
#line 289 "parse_tree_out_pragma.m"
      }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38)), &parse_tree__parse_tree_out_pragma__conv16_String_12);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__String_12 = ((MR_String) parse_tree__parse_tree_out_pragma__conv16_String_12);
#line 266 "parse_tree_out_pragma.m"
    return parse_tree__parse_tree_out_pragma__String_12;
#line 266 "parse_tree_out_pragma.m"
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
#line 262 "parse_tree_out_pragma.m"
  {
#line 262 "parse_tree_out_pragma.m"
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
#line 262 "parse_tree_out_pragma.m"
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
#line 262 "parse_tree_out_pragma.m"
    MR_Integer parse_tree__parse_tree_out_pragma__DeclaredArity_26;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_30;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_31;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_33;
#line 285 "parse_tree_out_pragma.m"
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_35;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_37;
#line 39 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 39 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_38;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_IO_15;

#line 278 "parse_tree_out_pragma.m"
#line 278 "parse_tree_out_pragma.m"
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
#line 278 "parse_tree_out_pragma.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 278 "parse_tree_out_pragma.m"
      case (MR_Integer) 1:
#line 279 "parse_tree_out_pragma.m"
        {
#line 280 "parse_tree_out_pragma.m"
          parse_tree__parse_tree_out_pragma__DeclaredArity_26 = (parse_tree__parse_tree_out_pragma__Arity_9 - (MR_Integer) 1);
#line 279 "parse_tree_out_pragma.m"
        }
#line 278 "parse_tree_out_pragma.m"
        break;
#line 278 "parse_tree_out_pragma.m"
      case (MR_Integer) 0:
#line 277 "parse_tree_out_pragma.m"
        parse_tree__parse_tree_out_pragma__DeclaredArity_26 = parse_tree__parse_tree_out_pragma__Arity_9;
#line 278 "parse_tree_out_pragma.m"
        break;
#line 278 "parse_tree_out_pragma.m"
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_30);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__PragmaName_11)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_31);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_33);
    }
#line 285 "parse_tree_out_pragma.m"
    {
#line 285 "parse_tree_out_pragma.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_35);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_37);
    }
#line 39 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
    {
#line 39 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__DeclaredArity_26)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_38);
    }
#line 292 "parse_tree_out_pragma.m"
    if ((parse_tree__parse_tree_out_pragma__MaybeAfter_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "parse_tree_out_pragma.m"
      {
#line 293 "parse_tree_out_pragma.m"
      }
#line 292 "parse_tree_out_pragma.m"
    else
#line 289 "parse_tree_out_pragma.m"
      {
#line 289 "parse_tree_out_pragma.m"
        MR_String parse_tree__parse_tree_out_pragma__After_27 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_12, (MR_Integer) 0)));
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_40;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_41;

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_40);
        }
#line 33 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__After_27)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_41);
        }
#line 289 "parse_tree_out_pragma.m"
      }
#line 33 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_IO_15);
    }
#line 262 "parse_tree_out_pragma.m"
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
                parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__TermInfo_34);
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
                parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__Term2Info_35);
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
                parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0(parse_tree__parse_tree_out_pragma__Lang_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__SharingInfo_36);
              }
#line 244 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 26:
#line 247 "parse_tree_out_pragma.m"
            {
#line 247 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__ReuseInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

#line 248 "parse_tree_out_pragma.m"
              {
#line 248 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0(parse_tree__parse_tree_out_pragma__Lang_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__ReuseInfo_37);
              }
#line 247 "parse_tree_out_pragma.m"
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
              }
#line 197 "parse_tree_out_pragma.m"
            }
#line 133 "parse_tree_out_pragma.m"
            break;
#line 133 "parse_tree_out_pragma.m"
          case (MR_Integer) 29:
#line 250 "parse_tree_out_pragma.m"
            {
#line 250 "parse_tree_out_pragma.m"
              MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
#line 251 "parse_tree_out_pragma.m"
              MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_IO_40;

#line 251 "parse_tree_out_pragma.m"
              {
#line 251 "parse_tree_out_pragma.m"
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__RFSInfo_38, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_IO_40);
              }
#line 250 "parse_tree_out_pragma.m"
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
