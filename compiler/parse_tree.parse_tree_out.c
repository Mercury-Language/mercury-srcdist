/*
** Automatically generated from `parse_tree_out.m'
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


/* :- module parse_tree.parse_tree_out. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_tree_out__init
ENDINIT
*/

#include "parse_tree.parse_tree_out.mih"


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
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 107 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

#line 110 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 113 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 116 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 119 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 122 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 125 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 128 "parse_tree.parse_tree_out.c"
static const MR_VA_PseudoTypeInfo_Struct4 parse_tree__parse_tree_out____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 131 "parse_tree.parse_tree_out.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001(
#line 134 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 136 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 138 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3);

#line 141 "parse_tree.parse_tree_out.c"
static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001(
#line 144 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 146 "parse_tree.parse_tree_out.c"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_2,
#line 148 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
#line 150 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_4);

#line 149 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 149 "parse_tree_out.m"
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

#line 149 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2);

#line 1328 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_2(
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1328 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1312 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_1(
#line 1312 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1312 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1312 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1312 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1296 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(
#line 1296 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemInstance_6);

#line 1117 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(
#line 1117 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemPromise_6);

#line 1230 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1230__1_6_p_0(
#line 1230 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1230 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1230 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1230 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__4_31,
#line 1230 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__HeadVar__5_32,
#line 1230 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_33);

#line 1228 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1228__1_6_p_0(
#line 1228 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1228 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1228 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1228 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__4_26,
#line 1228 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__HeadVar__5_27,
#line 1228 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_28);

#line 1172 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1172__1_4_p_0(
#line 1172 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarSet_13,
#line 1172 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_32);

#line 1048 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1048__1_2_f_0(
#line 1048 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_14,
#line 1048 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_24);

#line 1018 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__builtin_inst_name__1018__1_1_f_0(
#line 1018 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_12);

#line 1004 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1004__1_2_f_0(
#line 1004 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_12,
#line 1004 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_27);

#line 996 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__996__1_2_f_0(
#line 996 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_12,
#line 996 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_39);

#line 955 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__955__1_3_p_0(
#line 955 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_11);

#line 598 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__598__1_2_f_0(
#line 598 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_12,
#line 598 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_47);

#line 388 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__388__1_2_p_0(
#line 388 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Incls_10,
#line 388 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_19);

#line 149 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_6,
#line 149 "parse_tree_out.m"
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

#line 149 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_5,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2);

#line 1389 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(
#line 1389 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1389 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemMutable_6);

#line 1355 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__output_instance_method_3_p_0_1(
#line 1355 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1355 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1355 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1355 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1330 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__output_instance_method_3_p_0(
#line 1330 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Method_4);

#line 1239 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__output_class_method_4_p_0(
#line 1239 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Lang_5,
#line 1239 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Method_6);

#line 1230 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2(
#line 1230 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1230 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1230 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1230 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1228 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1(
#line 1228 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1228 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1228 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1228 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1223 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(
#line 1223 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1223 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1223 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1223 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3,
#line 1223 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_0_11,
#line 1223 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__STATE_VARIABLE_U_12);

#line 1237 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4(
#line 1237 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1237 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1237 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1237 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1218 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3(
#line 1218 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1218 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1218 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1218 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1206 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2(
#line 1206 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1206 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1206 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1206 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1172 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1(
#line 1172 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1172 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1172 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1172 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1159 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(
#line 1159 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1159 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemTypeClass_6);

#line 1057 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(
#line 1057 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1057 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemPredDecl_6);

#line 1048 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1(
#line 1048 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1048 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

#line 1025 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(
#line 1025 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1025 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemModeDefn_6);

#line 1004 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_3(
#line 1004 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1004 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

#line 996 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2(
#line 996 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 996 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

#line 1018 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1(
#line 1018 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1018 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

#line 976 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(
#line 976 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 976 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemInstDefn_6);

#line 962 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(
#line 962 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Assertion_4);

#line 955 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1(
#line 955 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 955 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 955 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 955 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 951 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(
#line 951 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Ctors_4);

#line 933 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(
#line 933 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 933 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2);

#line 850 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(
#line 850 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarSet_1,
#line 850 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__First_2,
#line 850 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

#line 836 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(
#line 836 "parse_tree_out.m"
  MR_Integer parse_tree__parse_tree_out__NumBits_4);

#line 698 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2(
#line 698 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 698 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 698 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 698 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 598 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1(
#line 598 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 598 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

#line 590 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(
#line 590 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 590 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemTypeDefn_6);

#line 536 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_4_p_0(
#line 536 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 536 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2);

#line 515 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(
#line 515 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 515 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Use_6);

#line 501 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(
#line 501 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 501 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Avail_6);

#line 492 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(
#line 492 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 492 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemInclude_6);

#line 306 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2(
#line 306 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 306 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 306 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 306 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 304 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1(
#line 304 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 304 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 304 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 304 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 293 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(
#line 293 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 293 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__MaybePrevSectionKind_2,
#line 293 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

#line 279 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(
#line 279 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ModuleName_5,
#line 279 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VersionNumbers_6);

#line 1328 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_methods_3_p_0_1(
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1328 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 827 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0_1(
#line 827 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 827 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 827 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 827 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 403 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2(
#line 403 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 403 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 403 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 403 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 402 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1(
#line 402 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 402 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 402 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 402 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 389 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2(
#line 389 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 389 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 389 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 389 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 388 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1(
#line 388 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg);

#line 377 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2(
#line 377 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 377 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 377 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 377 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 376 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1(
#line 376 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 376 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 376 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 376 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 366 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2(
#line 366 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 366 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 366 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 366 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 365 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1(
#line 365 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 365 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 365 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 365 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 352 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2(
#line 352 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 352 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 352 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 352 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 351 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1(
#line 351 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 351 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 351 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 351 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 266 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1(
#line 266 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 266 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 266 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 266 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
#line 266 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_4);

#line 247 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1(
#line 247 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 247 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 247 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 247 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[8][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[8][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[6][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[5][6];

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_7[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_8[3][9];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_9[1][8];


#line 885 "parse_tree_out.m"
/* sealed */ struct parse_tree__parse_tree_out__vector_common_type_5_0_s {
#line 885 "parse_tree_out.m"
  const MR_String parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0;
#line 885 "parse_tree_out.m"
};

static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_5_0_s parse_tree__parse_tree_out_vector_common_5[4];



static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 7 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_inst__inst_info__arity1__parse_tree__parse_tree_out_inst__simple_inst_info__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_inst__parse_tree__parse_tree_out_inst__type_ctor_info_simple_inst_info_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[8][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_instance_methods_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[2])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[3])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_7[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_8[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_9[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_5_0_s parse_tree__parse_tree_out_vector_common_5[4] = {
  /* row 0 */   {     (MR_String) ";" },
  /* row 1 */   {     (MR_String) "=>" },
  /* row 2 */   {     (MR_String) "some" },
  /* row 3 */   {     (MR_String) "{}" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1159 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0
  }
};

#line 1167 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1175 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1183 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1191 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1199 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1207 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1215 "parse_tree.parse_tree_out.c"
static const MR_VA_PseudoTypeInfo_Struct4 parse_tree__parse_tree_out____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1227 "parse_tree.parse_tree_out.c"
const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out__parse_tree__parse_tree_out__type_ctor_info_output_parse_tree_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.parse_tree_out",
  (MR_String) "output_parse_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__parse_tree_out____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1244 "parse_tree.parse_tree_out.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001(
#line 1247 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1249 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1251 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3)
#line 1253 "parse_tree.parse_tree_out.c"
{
#line 1255 "parse_tree.parse_tree_out.c"
  {
#line 1257 "parse_tree.parse_tree_out.c"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 1260 "parse_tree.parse_tree_out.c"
    {
#line 1262 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out__succeeded = parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_3));
    }
#line 1265 "parse_tree.parse_tree_out.c"
    return parse_tree__parse_tree_out__succeeded;
#line 1267 "parse_tree.parse_tree_out.c"
  }
#line 1269 "parse_tree.parse_tree_out.c"
}

#line 1272 "parse_tree.parse_tree_out.c"
static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001(
#line 1275 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1277 "parse_tree.parse_tree_out.c"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_2,
#line 1279 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
#line 1281 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_4)
#line 1283 "parse_tree.parse_tree_out.c"
{
#line 1285 "parse_tree.parse_tree_out.c"
  {
#line 1287 "parse_tree.parse_tree_out.c"
    MR_Word parse_tree__parse_tree_out__conv0_HeadVar__1_1;

#line 1290 "parse_tree.parse_tree_out.c"
    {
#line 1292 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), &parse_tree__parse_tree_out__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_3), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_4));
    }
#line 1295 "parse_tree.parse_tree_out.c"
    *parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv0_HeadVar__1_1));
#line 1297 "parse_tree.parse_tree_out.c"
  }
#line 1299 "parse_tree.parse_tree_out.c"
}

#line 149 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 149 "parse_tree_out.m"
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
#line 149 "parse_tree_out.m"
{
#line 149 "parse_tree_out.m"
  {
#line 149 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 149 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar1_4 = parse_tree__parse_tree_out__HeadVar__2_2;
#line 149 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar2_5 = parse_tree__parse_tree_out__HeadVar__3_3;

#line 149 "parse_tree_out.m"
    {
#line 149 "parse_tree_out.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__parse_tree_out__HeadVar__1_1, (MR_Word) parse_tree__parse_tree_out__Cast_HeadVar1_4, (MR_Word) parse_tree__parse_tree_out__Cast_HeadVar2_5);
#line 149 "parse_tree_out.m"
      return;
    }
#line 149 "parse_tree_out.m"
  }
#line 149 "parse_tree_out.m"
}

#line 149 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 149 "parse_tree_out.m"
{
#line 149 "parse_tree_out.m"
  {
#line 149 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 149 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar1_3 = parse_tree__parse_tree_out__HeadVar__1_1;
#line 149 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar2_4 = parse_tree__parse_tree_out__HeadVar__2_2;

#line 149 "parse_tree_out.m"
    {
#line 149 "parse_tree_out.m"
      return parse_tree__parse_tree_out__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__parse_tree_out__Cast_HeadVar1_3, (MR_Word) parse_tree__parse_tree_out__Cast_HeadVar2_4);
    }
#line 149 "parse_tree_out.m"
    return parse_tree__parse_tree_out__succeeded;
#line 149 "parse_tree_out.m"
  }
#line 149 "parse_tree_out.m"
}

#line 1328 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_2(
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1328 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1328 "parse_tree_out.m"
{
#line 1328 "parse_tree_out.m"
  {
#line 1328 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1328 "parse_tree_out.m"
    {
#line 1328 "parse_tree_out.m"
      parse_tree__parse_tree_out__output_instance_method_3_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 1328 "parse_tree_out.m"
      return;
    }
#line 1328 "parse_tree_out.m"
  }
#line 1328 "parse_tree_out.m"
}

#line 1312 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_1(
#line 1312 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1312 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1312 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1312 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1312 "parse_tree_out.m"
{
#line 1312 "parse_tree_out.m"
  {
#line 1312 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1312 "parse_tree_out.m"
    {
#line 1312 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 1312 "parse_tree_out.m"
      return;
    }
#line 1312 "parse_tree_out.m"
  }
#line 1312 "parse_tree_out.m"
}

#line 1296 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(
#line 1296 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemInstance_6)
#line 1296 "parse_tree_out.m"
{
#line 1299 "parse_tree_out.m"
  {
#line 1299 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1299 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 0)));
#line 1299 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 1)));
#line 1299 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 3)));
#line 1299 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Body_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 4)));
#line 1299 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 5)));
#line 1299 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_28_28;
#line 1303 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___OriginalTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 2)));
#line 1303 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___InstanceModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 6)));
#line 1303 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 7)));
#line 1303 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 8)));
#line 1315 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_37_37;

#line 1305 "parse_tree_out.m"
    {
#line 1305 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- instance ");
    }
#line 1308 "parse_tree_out.m"
    {
#line 1308 "parse_tree_out.m"
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
#line 1309 "parse_tree_out.m"
    {
#line 1309 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__ClassName_8);
    }
#line 1310 "parse_tree_out.m"
    {
#line 1310 "parse_tree_out.m"
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
#line 1312 "parse_tree_out.m"
    {
#line 1312 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1312 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_28_28, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0]));
#line 1312 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_28_28, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_1));
#line 1312 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1312 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_28_28, 3) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
#line 1312 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_28_28, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1312 "parse_tree_out.m"
    }
#line 1311 "parse_tree_out.m"
    {
#line 1311 "parse_tree_out.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_tree_out__Types_9, (MR_String) ", ", parse_tree__parse_tree_out__V_28_28);
    }
#line 1313 "parse_tree_out.m"
    {
#line 1313 "parse_tree_out.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 1314 "parse_tree_out.m"
    {
#line 1314 "parse_tree_out.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 1315 "parse_tree_out.m"
    {
#line 1315 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__VarSet_13, (MR_Integer) 0, (MR_String) "<=", parse_tree__parse_tree_out__Constraints_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_37_37);
    }
#line 1319 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__Body_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1318 "parse_tree_out.m"
      {
#line 1318 "parse_tree_out.m"
      }
#line 1319 "parse_tree_out.m"
    else
#line 1320 "parse_tree_out.m"
      {
#line 1320 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Methods_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Body_12, (MR_Integer) 0)));

#line 1321 "parse_tree_out.m"
        {
#line 1321 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) " where [\n");
        }
#line 1328 "parse_tree_out.m"
        {
#line 1328 "parse_tree_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, parse_tree__parse_tree_out__Methods_17, (MR_String) ",\n", (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[5]);
        }
#line 1323 "parse_tree_out.m"
        {
#line 1323 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n]");
        }
#line 1320 "parse_tree_out.m"
      }
#line 1325 "parse_tree_out.m"
    {
#line 1325 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1325 "parse_tree_out.m"
      return;
    }
#line 1299 "parse_tree_out.m"
  }
#line 1296 "parse_tree_out.m"
}

#line 1117 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(
#line 1117 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemPromise_6)
#line 1117 "parse_tree_out.m"
{
#line 1120 "parse_tree_out.m"
  {
#line 1120 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1120 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__PromiseType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 0)));
#line 1120 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 1)));
#line 1120 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 2)));
#line 1120 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__UnivVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 3)));
#line 1120 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Goal_17;
#line 1121 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 4)));
#line 1121 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 5)));

#line 1137 "parse_tree_out.m"
#line 1137 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__PromiseType_8) {
#line 1137 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1137 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 1137 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 1137 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 1141 "parse_tree_out.m"
        {
#line 1145 "parse_tree_out.m"
          {
#line 1145 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- all [");
          }
#line 1147 "parse_tree_out.m"
          {
#line 1147 "parse_tree_out.m"
            parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out__VarSet_10, (MR_Integer) 0, parse_tree__parse_tree_out__UnivVars_11);
          }
#line 1148 "parse_tree_out.m"
          {
#line 1148 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
#line 1149 "parse_tree_out.m"
          {
#line 1149 "parse_tree_out.m"
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0((MR_Integer) 1);
          }
#line 1150 "parse_tree_out.m"
          {
#line 1150 "parse_tree_out.m"
            parse_tree__prog_out__write_promise_type_3_p_0(parse_tree__parse_tree_out__PromiseType_8);
          }
#line 1151 "parse_tree_out.m"
          parse_tree__parse_tree_out__Goal_17 = parse_tree__parse_tree_out__Goal0_9;
#line 1141 "parse_tree_out.m"
        }
#line 1137 "parse_tree_out.m"
        break;
#line 1137 "parse_tree_out.m"
      case (MR_Integer) 3:
#line 1125 "parse_tree_out.m"
        {
#line 1129 "parse_tree_out.m"
          {
#line 1129 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- promise ");
          }
#line 1133 "parse_tree_out.m"
          if ((parse_tree__parse_tree_out__UnivVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1135 "parse_tree_out.m"
            parse_tree__parse_tree_out__Goal_17 = parse_tree__parse_tree_out__Goal0_9;
#line 1133 "parse_tree_out.m"
          else
#line 1131 "parse_tree_out.m"
            {
#line 1131 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_30_30;

#line 1132 "parse_tree_out.m"
              {
#line 1132 "parse_tree_out.m"
                parse_tree__parse_tree_out__V_30_30 = parse_tree__prog_item__goal_get_context_1_f_0(parse_tree__parse_tree_out__Goal0_9);
              }
#line 1132 "parse_tree_out.m"
              {
#line 1132 "parse_tree_out.m"
                parse_tree__parse_tree_out__Goal_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "parse_tree_out.m"
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1132 "parse_tree_out.m"
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__V_30_30));
#line 1132 "parse_tree_out.m"
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 2) = ((MR_Box) (parse_tree__parse_tree_out__UnivVars_11));
#line 1132 "parse_tree_out.m"
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 3) = ((MR_Box) (parse_tree__parse_tree_out__Goal0_9));
#line 1132 "parse_tree_out.m"
              }
#line 1131 "parse_tree_out.m"
            }
#line 1125 "parse_tree_out.m"
        }
#line 1137 "parse_tree_out.m"
        break;
#line 1137 "parse_tree_out.m"
    }
#line 1153 "parse_tree_out.m"
    {
#line 1153 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0((MR_Integer) 1);
    }
#line 1154 "parse_tree_out.m"
    {
#line 1154 "parse_tree_out.m"
      parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out__VarSet_10, (MR_Integer) 1, parse_tree__parse_tree_out__Goal_17);
    }
#line 1155 "parse_tree_out.m"
    {
#line 1155 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1155 "parse_tree_out.m"
      return;
    }
#line 1120 "parse_tree_out.m"
  }
#line 1117 "parse_tree_out.m"
}

#line 1230 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1230__1_6_p_0(
#line 1230 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1230 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1230 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1230 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__4_31,
#line 1230 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__HeadVar__5_32,
#line 1230 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_33)
#line 1230 "parse_tree_out.m"
{
#line 1230 "parse_tree_out.m"
  {
#line 1230 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 1230 "parse_tree_out.m"
    {
#line 1230 "parse_tree_out.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out__TypeClassInfo_for_output_25, parse_tree__parse_tree_out__TypeVarSet_6, parse_tree__parse_tree_out__VarNamePrint_7, parse_tree__parse_tree_out__HeadVar__4_31, parse_tree__parse_tree_out__HeadVar__5_32, parse_tree__parse_tree_out__HeadVar__6_33);
#line 1230 "parse_tree_out.m"
      return;
    }
#line 1230 "parse_tree_out.m"
  }
#line 1230 "parse_tree_out.m"
}

#line 1228 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1228__1_6_p_0(
#line 1228 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1228 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1228 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1228 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__4_26,
#line 1228 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__HeadVar__5_27,
#line 1228 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_28)
#line 1228 "parse_tree_out.m"
{
#line 1228 "parse_tree_out.m"
  {
#line 1228 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 1228 "parse_tree_out.m"
    {
#line 1228 "parse_tree_out.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out__TypeClassInfo_for_output_25, parse_tree__parse_tree_out__TypeVarSet_6, parse_tree__parse_tree_out__VarNamePrint_7, parse_tree__parse_tree_out__HeadVar__4_26, parse_tree__parse_tree_out__HeadVar__5_27, parse_tree__parse_tree_out__HeadVar__6_28);
#line 1228 "parse_tree_out.m"
      return;
    }
#line 1228 "parse_tree_out.m"
  }
#line 1228 "parse_tree_out.m"
}

#line 1172 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1172__1_4_p_0(
#line 1172 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarSet_13,
#line 1172 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_32)
#line 1172 "parse_tree_out.m"
{
#line 1172 "parse_tree_out.m"
  {
#line 1172 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1172 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__VarName_19;

#line 1174 "parse_tree_out.m"
    {
#line 1174 "parse_tree_out.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out__VarSet_13, parse_tree__parse_tree_out__HeadVar__2_32, &parse_tree__parse_tree_out__VarName_19);
    }
#line 1175 "parse_tree_out.m"
    {
#line 1175 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__VarName_19);
#line 1175 "parse_tree_out.m"
      return;
    }
#line 1172 "parse_tree_out.m"
  }
#line 1172 "parse_tree_out.m"
}

#line 1048 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1048__1_2_f_0(
#line 1048 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_14,
#line 1048 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_24)
#line 1048 "parse_tree_out.m"
{
#line 1048 "parse_tree_out.m"
  {
#line 1048 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1048 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__HeadVar__3_25;

#line 1048 "parse_tree_out.m"
    {
#line 1048 "parse_tree_out.m"
      parse_tree__parse_tree_out__HeadVar__3_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_25, 0) = ((MR_Box) (parse_tree__parse_tree_out__HeadVar__2_24));
#line 1048 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_25, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_14));
#line 1048 "parse_tree_out.m"
    }
#line 1048 "parse_tree_out.m"
    return parse_tree__parse_tree_out__HeadVar__3_25;
#line 1048 "parse_tree_out.m"
  }
#line 1048 "parse_tree_out.m"
}

#line 1018 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__builtin_inst_name__1018__1_1_f_0(
#line 1018 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_12)
#line 1018 "parse_tree_out.m"
{
#line 1018 "parse_tree_out.m"
  {
#line 1018 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__HeadVar__2_13;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_14_14;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_15_15;

#line 1018 "parse_tree_out.m"
    {
#line 1018 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_14_14 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_out__HeadVar__1_12);
    }
#line 1018 "parse_tree_out.m"
    {
#line 1018 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_15_15 = mercury__term__context_init_0_f_0();
    }
#line 1018 "parse_tree_out.m"
    {
#line 1018 "parse_tree_out.m"
      parse_tree__parse_tree_out__HeadVar__2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_13, 0) = ((MR_Box) (parse_tree__parse_tree_out__V_14_14));
#line 1018 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_13, 1) = ((MR_Box) (parse_tree__parse_tree_out__V_15_15));
#line 1018 "parse_tree_out.m"
    }
#line 1018 "parse_tree_out.m"
    return parse_tree__parse_tree_out__HeadVar__2_13;
#line 1018 "parse_tree_out.m"
  }
#line 1018 "parse_tree_out.m"
}

#line 1004 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1004__1_2_f_0(
#line 1004 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_12,
#line 1004 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_27)
#line 1004 "parse_tree_out.m"
{
#line 1004 "parse_tree_out.m"
  {
#line 1004 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1004 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__HeadVar__3_28;

#line 1004 "parse_tree_out.m"
    {
#line 1004 "parse_tree_out.m"
      parse_tree__parse_tree_out__HeadVar__3_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_28, 0) = ((MR_Box) (parse_tree__parse_tree_out__HeadVar__2_27));
#line 1004 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_28, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
#line 1004 "parse_tree_out.m"
    }
#line 1004 "parse_tree_out.m"
    return parse_tree__parse_tree_out__HeadVar__3_28;
#line 1004 "parse_tree_out.m"
  }
#line 1004 "parse_tree_out.m"
}

#line 996 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__996__1_2_f_0(
#line 996 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_12,
#line 996 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_39)
#line 996 "parse_tree_out.m"
{
#line 996 "parse_tree_out.m"
  {
#line 996 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 996 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__HeadVar__3_40;

#line 996 "parse_tree_out.m"
    {
#line 996 "parse_tree_out.m"
      parse_tree__parse_tree_out__HeadVar__3_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_40, 0) = ((MR_Box) (parse_tree__parse_tree_out__HeadVar__2_39));
#line 996 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_40, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
#line 996 "parse_tree_out.m"
    }
#line 996 "parse_tree_out.m"
    return parse_tree__parse_tree_out__HeadVar__3_40;
#line 996 "parse_tree_out.m"
  }
#line 996 "parse_tree_out.m"
}

#line 955 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__955__1_3_p_0(
#line 955 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_11)
#line 955 "parse_tree_out.m"
{
#line 955 "parse_tree_out.m"
  {
#line 955 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 955 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_HeadVar__3_13;

#line 955 "parse_tree_out.m"
    {
#line 955 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_and_arity_3_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__HeadVar__1_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_HeadVar__3_13);
    }
#line 955 "parse_tree_out.m"
  }
#line 955 "parse_tree_out.m"
}

#line 598 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__598__1_2_f_0(
#line 598 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_12,
#line 598 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_47)
#line 598 "parse_tree_out.m"
{
#line 598 "parse_tree_out.m"
  {
#line 598 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 598 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__HeadVar__3_48;

#line 598 "parse_tree_out.m"
    {
#line 598 "parse_tree_out.m"
      parse_tree__parse_tree_out__HeadVar__3_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_48, 0) = ((MR_Box) (parse_tree__parse_tree_out__HeadVar__2_47));
#line 598 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_48, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
#line 598 "parse_tree_out.m"
    }
#line 598 "parse_tree_out.m"
    return parse_tree__parse_tree_out__HeadVar__3_48;
#line 598 "parse_tree_out.m"
  }
#line 598 "parse_tree_out.m"
}

#line 388 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__388__1_2_p_0(
#line 388 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Incls_10,
#line 388 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_19)
#line 388 "parse_tree_out.m"
{
#line 388 "parse_tree_out.m"
  {
#line 388 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 388 "parse_tree_out.m"
    {
#line 388 "parse_tree_out.m"
      return parse_tree__parse_tree_out__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[0], ((MR_Box) (parse_tree__parse_tree_out__Incls_10)), ((MR_Box) (parse_tree__parse_tree_out__HeadVar__2_19)));
    }
#line 388 "parse_tree_out.m"
    return parse_tree__parse_tree_out__succeeded;
#line 388 "parse_tree_out.m"
  }
#line 388 "parse_tree_out.m"
}

#line 149 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_6,
#line 149 "parse_tree_out.m"
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
#line 149 "parse_tree_out.m"
{
#line 149 "parse_tree_out.m"
  {
#line 149 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 149 "parse_tree_out.m"
    {
#line 149 "parse_tree_out.m"
      parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_tree_out__HeadVar__1_1, parse_tree__parse_tree_out__HeadVar__2_2, parse_tree__parse_tree_out__HeadVar__3_3);
#line 149 "parse_tree_out.m"
      return;
    }
#line 149 "parse_tree_out.m"
  }
#line 149 "parse_tree_out.m"
}

#line 149 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_5,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 149 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 149 "parse_tree_out.m"
{
#line 149 "parse_tree_out.m"
  {
#line 149 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 149 "parse_tree_out.m"
    {
#line 149 "parse_tree_out.m"
      return parse_tree__parse_tree_out__succeeded = parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__parse_tree_out__HeadVar__1_1, parse_tree__parse_tree_out__HeadVar__2_2);
    }
#line 149 "parse_tree_out.m"
    return parse_tree__parse_tree_out__succeeded;
#line 149 "parse_tree_out.m"
  }
#line 149 "parse_tree_out.m"
}

#line 1389 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(
#line 1389 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1389 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemMutable_6)
#line 1389 "parse_tree_out.m"
{
#line 1392 "parse_tree_out.m"
  {
#line 1392 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1392 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 0)));
#line 1392 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 1)));
#line 1392 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InitTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 2)));
#line 1392 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 3)));
#line 1392 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Attrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 4)));
#line 1392 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__MutVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 5)));
#line 1392 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Lang_16;
#line 1392 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_24_24;
#line 1392 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_33_33;
#line 1393 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 6)));
#line 1393 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 7)));

#line 1395 "parse_tree_out.m"
    {
#line 1395 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- mutable(");
    }
#line 1396 "parse_tree_out.m"
    {
#line 1396 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Name_8);
    }
#line 1397 "parse_tree_out.m"
    {
#line 1397 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1398 "parse_tree_out.m"
    {
#line 1398 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_24_24 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 1398 "parse_tree_out.m"
    {
#line 1398 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__V_24_24, (MR_Integer) 0, parse_tree__parse_tree_out__Type_9);
    }
#line 1399 "parse_tree_out.m"
    {
#line 1399 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1403 "parse_tree_out.m"
    {
#line 1403 "parse_tree_out.m"
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out__MutVarSet_13, (MR_Integer) 0, parse_tree__parse_tree_out__InitTerm_10);
    }
#line 1404 "parse_tree_out.m"
    {
#line 1404 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1405 "parse_tree_out.m"
    {
#line 1405 "parse_tree_out.m"
      parse_tree__parse_tree_out__Lang_16 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
#line 1406 "parse_tree_out.m"
    {
#line 1406 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_33_33 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 1406 "parse_tree_out.m"
    {
#line 1406 "parse_tree_out.m"
      parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_16, parse_tree__parse_tree_out__V_33_33, parse_tree__parse_tree_out__Inst_11);
    }
#line 1407 "parse_tree_out.m"
    {
#line 1407 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1408 "parse_tree_out.m"
    {
#line 1408 "parse_tree_out.m"
      mercury__io__print_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, ((MR_Box) (parse_tree__parse_tree_out__Attrs_12)));
    }
#line 1409 "parse_tree_out.m"
    {
#line 1409 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1409 "parse_tree_out.m"
      return;
    }
#line 1392 "parse_tree_out.m"
  }
#line 1389 "parse_tree_out.m"
}

#line 1355 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__output_instance_method_3_p_0_1(
#line 1355 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1355 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1355 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1355 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1355 "parse_tree_out.m"
{
#line 1355 "parse_tree_out.m"
  {
#line 1355 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1355 "parse_tree_out.m"
    {
#line 1355 "parse_tree_out.m"
      parse_tree__parse_tree_out_clause__output_instance_method_clause_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 1355 "parse_tree_out.m"
      return;
    }
#line 1355 "parse_tree_out.m"
  }
#line 1355 "parse_tree_out.m"
}

#line 1330 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__output_instance_method_3_p_0(
#line 1330 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Method_4)
#line 1330 "parse_tree_out.m"
{
#line 1332 "parse_tree_out.m"
  {
#line 1332 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1332 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_4, (MR_Integer) 0)));
#line 1332 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_4, (MR_Integer) 1)));
#line 1332 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Defn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_4, (MR_Integer) 2)));
#line 1332 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_4, (MR_Integer) 3)));
#line 1333 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_4, (MR_Integer) 4)));

#line 1350 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Defn_8)) == (MR_mktag((MR_Integer) 1))))
#line 1351 "parse_tree_out.m"
      {
#line 1351 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Defn_8, (MR_Integer) 0)));
#line 1351 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_18_18;

#line 1353 "parse_tree_out.m"
        {
#line 1353 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t(");
        }
#line 1355 "parse_tree_out.m"
        {
#line 1355 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1355 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[7]));
#line 1355 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__output_instance_method_3_p_0_1));
#line 1355 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1355 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 3) = ((MR_Box) (parse_tree__parse_tree_out__MethodName_7));
#line 1355 "parse_tree_out.m"
        }
#line 1354 "parse_tree_out.m"
        {
#line 1354 "parse_tree_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, parse_tree__parse_tree_out__Items_12, (MR_String) "),\n\t(", parse_tree__parse_tree_out__V_18_18);
        }
#line 1356 "parse_tree_out.m"
        {
#line 1356 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 1356 "parse_tree_out.m"
          return;
        }
#line 1351 "parse_tree_out.m"
      }
#line 1350 "parse_tree_out.m"
    else
#line 1335 "parse_tree_out.m"
      {
#line 1335 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__PredName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Defn_8, (MR_Integer) 0)));

#line 1336 "parse_tree_out.m"
        {
#line 1336 "parse_tree_out.m"
          mercury__io__write_char_3_p_0((MR_Char) 9);
        }
#line 1340 "parse_tree_out.m"
#line 1340 "parse_tree_out.m"
        switch (parse_tree__parse_tree_out__PredOrFunc_6) {
#line 1340 "parse_tree_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1340 "parse_tree_out.m"
          case (MR_Integer) 1:
#line 1338 "parse_tree_out.m"
            {
#line 1339 "parse_tree_out.m"
              {
#line 1339 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "func(");
              }
#line 1338 "parse_tree_out.m"
            }
#line 1340 "parse_tree_out.m"
            break;
#line 1340 "parse_tree_out.m"
          case (MR_Integer) 0:
#line 1341 "parse_tree_out.m"
            {
#line 1342 "parse_tree_out.m"
              {
#line 1342 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "pred(");
              }
#line 1341 "parse_tree_out.m"
            }
#line 1340 "parse_tree_out.m"
            break;
#line 1340 "parse_tree_out.m"
        }
#line 1344 "parse_tree_out.m"
        {
#line 1344 "parse_tree_out.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out__MethodName_7);
        }
#line 1346 "parse_tree_out.m"
        {
#line 1346 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 1347 "parse_tree_out.m"
        {
#line 1347 "parse_tree_out.m"
          mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__Arity_9);
        }
#line 1348 "parse_tree_out.m"
        {
#line 1348 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ") is ");
        }
#line 1349 "parse_tree_out.m"
        {
#line 1349 "parse_tree_out.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__PredName_11);
#line 1349 "parse_tree_out.m"
          return;
        }
#line 1335 "parse_tree_out.m"
      }
#line 1332 "parse_tree_out.m"
  }
#line 1330 "parse_tree_out.m"
}

#line 1239 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__output_class_method_4_p_0(
#line 1239 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Lang_5,
#line 1239 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Method_6)
#line 1239 "parse_tree_out.m"
{
#line 1242 "parse_tree_out.m"
  {
#line 1242 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 1243 "parse_tree_out.m"
    {
#line 1243 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1270 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Method_6)) == (MR_mktag((MR_Integer) 0))))
#line 1247 "parse_tree_out.m"
      {
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 0)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 1)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 2)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__WithType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 3)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__WithInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 4)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeDetism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 5)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__TypeVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 6)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__InstVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 7)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 8)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Purity_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 9)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__ClassContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 10)));
#line 1247 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 11)));
#line 1247 "parse_tree_out.m"
        MR_String parse_tree__parse_tree_out__Name_20;

#line 1251 "parse_tree_out.m"
        {
#line 1251 "parse_tree_out.m"
          parse_tree__parse_tree_out__Name_20 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out__SymName_8);
        }
#line 1255 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__PredOrFunc_9 == (MR_Integer) 1);
#line 1255 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 1256 "parse_tree_out.m"
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1264 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 1259 "parse_tree_out.m"
          {
#line 1259 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__FuncTypesAndModes_21;
#line 1259 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__RetTypeAndMode_22;
#line 1259 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__V_39_39;
#line 1258 "parse_tree_out.m"
            MR_Box parse_tree__parse_tree_out__conv0_RetTypeAndMode_22;
#line 1260 "parse_tree_out.m"
            MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27;

#line 1258 "parse_tree_out.m"
            {
#line 1258 "parse_tree_out.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__parse_tree_out__TypesAndModes_10, &parse_tree__parse_tree_out__FuncTypesAndModes_21, &parse_tree__parse_tree_out__conv0_RetTypeAndMode_22);
            }
#line 1258 "parse_tree_out.m"
            parse_tree__parse_tree_out__RetTypeAndMode_22 = ((MR_Word) parse_tree__parse_tree_out__conv0_RetTypeAndMode_22);
#line 1261 "parse_tree_out.m"
            {
#line 1261 "parse_tree_out.m"
              parse_tree__parse_tree_out__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1261 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_39_39, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_20));
#line 1261 "parse_tree_out.m"
            }
#line 1260 "parse_tree_out.m"
            {
#line 1260 "parse_tree_out.m"
              parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_16_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__TypeVarSet_14, parse_tree__parse_tree_out__InstVarSet_15, parse_tree__parse_tree_out__ExistQVars_16, parse_tree__parse_tree_out__V_39_39, parse_tree__parse_tree_out__FuncTypesAndModes_21, parse_tree__parse_tree_out__RetTypeAndMode_22, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_17, parse_tree__parse_tree_out__ClassContext_18, parse_tree__parse_tree_out__Context_19, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27);
            }
#line 1259 "parse_tree_out.m"
          }
#line 1264 "parse_tree_out.m"
        else
#line 1265 "parse_tree_out.m"
          {
#line 1265 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__V_44_44;
#line 1265 "parse_tree_out.m"
            MR_Box parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27;

#line 1266 "parse_tree_out.m"
            {
#line 1266 "parse_tree_out.m"
              parse_tree__parse_tree_out__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_44_44, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_20));
#line 1266 "parse_tree_out.m"
            }
#line 1265 "parse_tree_out.m"
            {
#line 1265 "parse_tree_out.m"
              parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_18_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__TypeVarSet_14, parse_tree__parse_tree_out__InstVarSet_15, parse_tree__parse_tree_out__PredOrFunc_9, parse_tree__parse_tree_out__ExistQVars_16, parse_tree__parse_tree_out__V_44_44, parse_tree__parse_tree_out__TypesAndModes_10, parse_tree__parse_tree_out__WithType_11, parse_tree__parse_tree_out__WithInst_12, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_17, parse_tree__parse_tree_out__ClassContext_18, parse_tree__parse_tree_out__Context_19, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27);
            }
#line 1265 "parse_tree_out.m"
          }
#line 1247 "parse_tree_out.m"
      }
#line 1270 "parse_tree_out.m"
    else
#line 1272 "parse_tree_out.m"
      {
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 2)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__SymName_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 0)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__PredOrFunc_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 1)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__WithInst_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 3)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeDetism_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 4)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__InstVarSet_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 5)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 6)));
#line 1272 "parse_tree_out.m"
        MR_String parse_tree__parse_tree_out__Name_55;
#line 1280 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_30_30;

#line 1276 "parse_tree_out.m"
        {
#line 1276 "parse_tree_out.m"
          parse_tree__parse_tree_out__Name_55 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out__SymName_49);
        }
#line 1281 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithInst_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1280 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 1280 "parse_tree_out.m"
          {
#line 1280 "parse_tree_out.m"
            parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__PredOrFunc_50)) == (MR_mktag((MR_Integer) 1)));
#line 1280 "parse_tree_out.m"
            if (parse_tree__parse_tree_out__succeeded)
#line 1280 "parse_tree_out.m"
              {
#line 1280 "parse_tree_out.m"
                parse_tree__parse_tree_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__PredOrFunc_50, (MR_Integer) 0)));
#line 1280 "parse_tree_out.m"
                parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__V_30_30 == (MR_Integer) 1);
#line 1280 "parse_tree_out.m"
              }
#line 1280 "parse_tree_out.m"
          }
#line 1287 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 1283 "parse_tree_out.m"
          {
#line 1283 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__FuncModes_24;
#line 1283 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__RetMode_25;
#line 1283 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__V_31_31;
#line 1283 "parse_tree_out.m"
            MR_Box parse_tree__parse_tree_out__conv3_RetMode_25;
#line 1284 "parse_tree_out.m"
            MR_Box parse_tree__parse_tree_out__conv4_STATE_VARIABLE_IO_27;

#line 1283 "parse_tree_out.m"
            {
#line 1283 "parse_tree_out.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out__Modes_23, &parse_tree__parse_tree_out__FuncModes_24, &parse_tree__parse_tree_out__conv3_RetMode_25);
            }
#line 1283 "parse_tree_out.m"
            parse_tree__parse_tree_out__RetMode_25 = ((MR_Word) parse_tree__parse_tree_out__conv3_RetMode_25);
#line 1285 "parse_tree_out.m"
            {
#line 1285 "parse_tree_out.m"
              parse_tree__parse_tree_out__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1285 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_31_31, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_55));
#line 1285 "parse_tree_out.m"
            }
#line 1284 "parse_tree_out.m"
            {
#line 1284 "parse_tree_out.m"
              parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__InstVarSet_53, parse_tree__parse_tree_out__V_31_31, parse_tree__parse_tree_out__FuncModes_24, parse_tree__parse_tree_out__RetMode_25, parse_tree__parse_tree_out__MaybeDetism_52, parse_tree__parse_tree_out__Context_54, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv4_STATE_VARIABLE_IO_27);
            }
#line 1283 "parse_tree_out.m"
          }
#line 1287 "parse_tree_out.m"
        else
#line 1288 "parse_tree_out.m"
          {
#line 1288 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__V_35_35;
#line 1288 "parse_tree_out.m"
            MR_Box parse_tree__parse_tree_out__conv5_STATE_VARIABLE_IO_27;

#line 1289 "parse_tree_out.m"
            {
#line 1289 "parse_tree_out.m"
              parse_tree__parse_tree_out__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_35_35, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_55));
#line 1289 "parse_tree_out.m"
            }
#line 1288 "parse_tree_out.m"
            {
#line 1288 "parse_tree_out.m"
              parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__InstVarSet_53, parse_tree__parse_tree_out__V_35_35, parse_tree__parse_tree_out__Modes_23, parse_tree__parse_tree_out__WithInst_51, parse_tree__parse_tree_out__MaybeDetism_52, parse_tree__parse_tree_out__Context_54, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv5_STATE_VARIABLE_IO_27);
            }
#line 1288 "parse_tree_out.m"
          }
#line 1272 "parse_tree_out.m"
      }
#line 1242 "parse_tree_out.m"
  }
#line 1239 "parse_tree_out.m"
}

#line 1230 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2(
#line 1230 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1230 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1230 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1230 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1230 "parse_tree_out.m"
{
#line 1230 "parse_tree_out.m"
  {
#line 1230 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1230 "parse_tree_out.m"
    {
#line 1230 "parse_tree_out.m"
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1230__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
#line 1230 "parse_tree_out.m"
      return;
    }
#line 1230 "parse_tree_out.m"
  }
#line 1230 "parse_tree_out.m"
}

#line 1228 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1(
#line 1228 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1228 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1228 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1228 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1228 "parse_tree_out.m"
{
#line 1228 "parse_tree_out.m"
  {
#line 1228 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1228 "parse_tree_out.m"
    {
#line 1228 "parse_tree_out.m"
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1228__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
#line 1228 "parse_tree_out.m"
      return;
    }
#line 1228 "parse_tree_out.m"
  }
#line 1228 "parse_tree_out.m"
}

#line 1223 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(
#line 1223 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1223 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1223 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1223 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3,
#line 1223 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_0_11,
#line 1223 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__STATE_VARIABLE_U_12)
#line 1223 "parse_tree_out.m"
{
#line 1226 "parse_tree_out.m"
  {
#line 1226 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1226 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeInfo_30_30;
#line 1226 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Domain_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 0)));
#line 1226 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Range_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 1)));
#line 1226 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_14_14;
#line 1226 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_16_16;
#line 1226 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_17_17;
#line 1226 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_19_19;
#line 1226 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_21_21;
#line 1226 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_22_22;
#line 2706 "parse_tree.parse_tree_out.c"
    void MR_CALL (* parse_tree__parse_tree_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2708 "parse_tree.parse_tree_out.c"
    void MR_CALL (* parse_tree__parse_tree_out__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2710 "parse_tree.parse_tree_out.c"
    void MR_CALL (* parse_tree__parse_tree_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2712 "parse_tree.parse_tree_out.c"
    void MR_CALL (* parse_tree__parse_tree_out__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2714 "parse_tree.parse_tree_out.c"
    void MR_CALL (* parse_tree__parse_tree_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 2717 "parse_tree.parse_tree_out.c"
    {
#line 2719 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out__func_0(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out__STATE_VARIABLE_U_0_11, &parse_tree__parse_tree_out__STATE_VARIABLE_U_14_14);
    }
#line 1228 "parse_tree_out.m"
    {
#line 1228 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[2]));
#line 1228 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1));
#line 1228 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1228 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_25));
#line 1228 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 4) = ((MR_Box) (parse_tree__parse_tree_out__TypeVarSet_6));
#line 1228 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 5) = ((MR_Box) (parse_tree__parse_tree_out__VarNamePrint_7));
#line 1228 "parse_tree_out.m"
    }
#line 2740 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeInfo_30_30 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2];
#line 2742 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 18)));
#line 2744 "parse_tree.parse_tree_out.c"
    {
#line 2746 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out__func_1(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) (parse_tree__parse_tree_out__TypeInfo_30_30)), ((MR_Box) (parse_tree__parse_tree_out__Domain_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__V_16_16)), parse_tree__parse_tree_out__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out__STATE_VARIABLE_U_17_17);
    }
#line 2749 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2751 "parse_tree.parse_tree_out.c"
    {
#line 2753 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out__func_2(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) " -> ")), parse_tree__parse_tree_out__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out__STATE_VARIABLE_U_19_19);
    }
#line 1230 "parse_tree_out.m"
    {
#line 1230 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[2]));
#line 1230 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2));
#line 1230 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1230 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_25));
#line 1230 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 4) = ((MR_Box) (parse_tree__parse_tree_out__TypeVarSet_6));
#line 1230 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 5) = ((MR_Box) (parse_tree__parse_tree_out__VarNamePrint_7));
#line 1230 "parse_tree_out.m"
    }
#line 2774 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 18)));
#line 2776 "parse_tree.parse_tree_out.c"
    {
#line 2778 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out__func_3(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) (parse_tree__parse_tree_out__TypeInfo_30_30)), ((MR_Box) (parse_tree__parse_tree_out__Range_9)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__V_21_21)), parse_tree__parse_tree_out__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out__STATE_VARIABLE_U_22_22);
    }
#line 2781 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2783 "parse_tree.parse_tree_out.c"
    {
#line 2785 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out__func_4(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out__STATE_VARIABLE_U_22_22, parse_tree__parse_tree_out__STATE_VARIABLE_U_12);
#line 2787 "parse_tree.parse_tree_out.c"
      return;
    }
#line 1226 "parse_tree_out.m"
  }
#line 1223 "parse_tree_out.m"
}

#line 1237 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4(
#line 1237 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1237 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1237 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1237 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1237 "parse_tree_out.m"
{
#line 1237 "parse_tree_out.m"
  {
#line 1237 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1237 "parse_tree_out.m"
    {
#line 1237 "parse_tree_out.m"
      parse_tree__parse_tree_out__output_class_method_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 1237 "parse_tree_out.m"
      return;
    }
#line 1237 "parse_tree_out.m"
  }
#line 1237 "parse_tree_out.m"
}

#line 1218 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3(
#line 1218 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1218 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1218 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1218 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1218 "parse_tree_out.m"
{
#line 1218 "parse_tree_out.m"
  {
#line 1218 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1218 "parse_tree_out.m"
    {
#line 1218 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
#line 1218 "parse_tree_out.m"
      return;
    }
#line 1218 "parse_tree_out.m"
  }
#line 1218 "parse_tree_out.m"
}

#line 1206 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2(
#line 1206 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1206 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1206 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1206 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1206 "parse_tree_out.m"
{
#line 1206 "parse_tree_out.m"
  {
#line 1206 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1206 "parse_tree_out.m"
    {
#line 1206 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
#line 1206 "parse_tree_out.m"
      return;
    }
#line 1206 "parse_tree_out.m"
  }
#line 1206 "parse_tree_out.m"
}

#line 1172 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1(
#line 1172 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1172 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1172 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1172 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1172 "parse_tree_out.m"
{
#line 1172 "parse_tree_out.m"
  {
#line 1172 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1172 "parse_tree_out.m"
    {
#line 1172 "parse_tree_out.m"
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1172__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 1172 "parse_tree_out.m"
      return;
    }
#line 1172 "parse_tree_out.m"
  }
#line 1172 "parse_tree_out.m"
}

#line 1159 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(
#line 1159 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1159 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemTypeClass_6)
#line 1159 "parse_tree_out.m"
{
#line 1162 "parse_tree_out.m"
  {
#line 1162 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1162 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_51;
#line 1162 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ClassName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 0)));
#line 1162 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 1)));
#line 1162 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 2)));
#line 1162 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__FunDeps_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 3)));
#line 1162 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Interface_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 4)));
#line 1162 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 5)));
#line 1162 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ClassName_16;
#line 1162 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_30_30;
#line 1163 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 6)));
#line 1163 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 7)));

#line 1165 "parse_tree_out.m"
    {
#line 1165 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ClassName0_8, &parse_tree__parse_tree_out__ClassName_16);
    }
#line 1166 "parse_tree_out.m"
    {
#line 1166 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- typeclass ");
    }
#line 1170 "parse_tree_out.m"
    {
#line 1170 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__ClassName_16);
    }
#line 1171 "parse_tree_out.m"
    {
#line 1171 "parse_tree_out.m"
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
#line 1172 "parse_tree_out.m"
    {
#line 1172 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[5]));
#line 1172 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1));
#line 1172 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1172 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 3) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
#line 1172 "parse_tree_out.m"
    }
#line 1172 "parse_tree_out.m"
    {
#line 1172 "parse_tree_out.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2], parse_tree__parse_tree_out__Vars_9, (MR_String) ", ", parse_tree__parse_tree_out__V_30_30);
    }
#line 1177 "parse_tree_out.m"
    {
#line 1177 "parse_tree_out.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 2995 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeClassInfo_for_output_51 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
#line 1199 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__FunDeps_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 1200 "parse_tree_out.m"
      parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__Constraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1203 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 1203 "parse_tree_out.m"
      {
#line 1203 "parse_tree_out.m"
      }
#line 1203 "parse_tree_out.m"
    else
#line 1204 "parse_tree_out.m"
      {
#line 1204 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_66_66;
#line 3015 "parse_tree.parse_tree_out.c"
        void MR_CALL (* parse_tree__parse_tree_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3017 "parse_tree.parse_tree_out.c"
        MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_19_64;
#line 3019 "parse_tree.parse_tree_out.c"
        void MR_CALL (* parse_tree__parse_tree_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3021 "parse_tree.parse_tree_out.c"
        MR_Box parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_22_67;
#line 3023 "parse_tree.parse_tree_out.c"
        void MR_CALL (* parse_tree__parse_tree_out__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3025 "parse_tree.parse_tree_out.c"
        MR_Box parse_tree__parse_tree_out__conv9_STATE_VARIABLE_IO_38_38;

#line 3028 "parse_tree.parse_tree_out.c"
        {
#line 3030 "parse_tree.parse_tree_out.c"
          parse_tree__parse_tree_out__func_0(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) " <= (")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_19_64);
        }
#line 1206 "parse_tree_out.m"
        {
#line 1206 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0]));
#line 1206 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2));
#line 1206 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1206 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_51));
#line 1206 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 4) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
#line 1206 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1206 "parse_tree_out.m"
        }
#line 3051 "parse_tree.parse_tree_out.c"
        parse_tree__parse_tree_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 18)));
#line 3053 "parse_tree.parse_tree_out.c"
        {
#line 3055 "parse_tree.parse_tree_out.c"
          parse_tree__parse_tree_out__func_2(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)), ((MR_Box) (parse_tree__parse_tree_out__FunDeps_11)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__V_66_66)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_22_67);
        }
#line 1209 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__Constraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1208 "parse_tree_out.m"
          {
#line 1208 "parse_tree_out.m"
          }
#line 1209 "parse_tree_out.m"
        else
#line 1210 "parse_tree_out.m"
          {
#line 1210 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__V_71_71;
#line 3070 "parse_tree.parse_tree_out.c"
            void MR_CALL (* parse_tree__parse_tree_out__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3072 "parse_tree.parse_tree_out.c"
            MR_Box parse_tree__parse_tree_out__conv7_STATE_VARIABLE_U_27_72;

#line 1213 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__FunDeps_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1212 "parse_tree_out.m"
              {
#line 1212 "parse_tree_out.m"
              }
#line 1213 "parse_tree_out.m"
            else
#line 1214 "parse_tree_out.m"
              {
#line 3085 "parse_tree.parse_tree_out.c"
                void MR_CALL (* parse_tree__parse_tree_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3087 "parse_tree.parse_tree_out.c"
                MR_Box parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_24_69;

#line 3090 "parse_tree.parse_tree_out.c"
                {
#line 3092 "parse_tree.parse_tree_out.c"
                  parse_tree__parse_tree_out__func_4(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_24_69);
                }
#line 1214 "parse_tree_out.m"
              }
#line 1218 "parse_tree_out.m"
            {
#line 1218 "parse_tree_out.m"
              parse_tree__parse_tree_out__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[1]));
#line 1218 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3));
#line 1218 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1218 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_51));
#line 1218 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 4) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
#line 1218 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1218 "parse_tree_out.m"
            }
#line 3115 "parse_tree.parse_tree_out.c"
            parse_tree__parse_tree_out__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 18)));
#line 3117 "parse_tree.parse_tree_out.c"
            {
#line 3119 "parse_tree.parse_tree_out.c"
              parse_tree__parse_tree_out__func_6(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (parse_tree__parse_tree_out__Constraints_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__V_71_71)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv7_STATE_VARIABLE_U_27_72);
            }
#line 1210 "parse_tree_out.m"
          }
#line 3124 "parse_tree.parse_tree_out.c"
        parse_tree__parse_tree_out__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3126 "parse_tree.parse_tree_out.c"
        {
#line 3128 "parse_tree.parse_tree_out.c"
          parse_tree__parse_tree_out__func_8(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv9_STATE_VARIABLE_IO_38_38);
        }
#line 1204 "parse_tree_out.m"
      }
#line 1183 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__Interface_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1181 "parse_tree_out.m"
      {
#line 1182 "parse_tree_out.m"
        {
#line 1182 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1182 "parse_tree_out.m"
          return;
        }
#line 1181 "parse_tree_out.m"
      }
#line 1183 "parse_tree_out.m"
    else
#line 1184 "parse_tree_out.m"
      {
#line 1184 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Methods_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Interface_12, (MR_Integer) 0)));
#line 1184 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Lang_21;
#line 1184 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_89_89;

#line 1185 "parse_tree_out.m"
        {
#line 1185 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) " where [\n");
        }
#line 1186 "parse_tree_out.m"
        {
#line 1186 "parse_tree_out.m"
          parse_tree__parse_tree_out__Lang_21 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
        }
#line 1237 "parse_tree_out.m"
        {
#line 1237 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_89_89, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[6]));
#line 1237 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_89_89, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4));
#line 1237 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1237 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_89_89, 3) = ((MR_Box) (parse_tree__parse_tree_out__Lang_21));
#line 1237 "parse_tree_out.m"
        }
#line 1237 "parse_tree_out.m"
        {
#line 1237 "parse_tree_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0, parse_tree__parse_tree_out__Methods_20, (MR_String) ",\n", parse_tree__parse_tree_out__V_89_89);
        }
#line 1188 "parse_tree_out.m"
        {
#line 1188 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n].\n");
#line 1188 "parse_tree_out.m"
          return;
        }
#line 1184 "parse_tree_out.m"
      }
#line 1162 "parse_tree_out.m"
  }
#line 1159 "parse_tree_out.m"
}

#line 1057 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(
#line 1057 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1057 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemPredDecl_6)
#line 1057 "parse_tree_out.m"
{
#line 1060 "parse_tree_out.m"
  {
#line 1060 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__PredName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 0)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 1)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 2)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__WithType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 3)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__WithInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 4)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__MaybeDetism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 5)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 7)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InstVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 8)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ExistQVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 9)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 10)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 11)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 12)));
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__PredName_22;
#line 1060 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Lang_23;
#line 1063 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Origin_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 6)));
#line 1063 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 13)));

#line 1066 "parse_tree_out.m"
    {
#line 1066 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__PredName0_8, &parse_tree__parse_tree_out__PredName_22);
    }
#line 1067 "parse_tree_out.m"
    {
#line 1067 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_20);
    }
#line 1068 "parse_tree_out.m"
    {
#line 1068 "parse_tree_out.m"
      parse_tree__parse_tree_out__Lang_23 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
#line 1072 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__PredOrFunc_9 == (MR_Integer) 1);
#line 1072 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 1073 "parse_tree_out.m"
      parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1081 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 1076 "parse_tree_out.m"
      {
#line 1076 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__FuncTypesAndModes_24;
#line 1076 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__RetTypeAndMode_25;
#line 1075 "parse_tree_out.m"
        MR_Box parse_tree__parse_tree_out__conv0_RetTypeAndMode_25;
#line 1077 "parse_tree_out.m"
        MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27;

#line 1075 "parse_tree_out.m"
        {
#line 1075 "parse_tree_out.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__parse_tree_out__TypesAndModes_10, &parse_tree__parse_tree_out__FuncTypesAndModes_24, &parse_tree__parse_tree_out__conv0_RetTypeAndMode_25);
        }
#line 1075 "parse_tree_out.m"
        parse_tree__parse_tree_out__RetTypeAndMode_25 = ((MR_Word) parse_tree__parse_tree_out__conv0_RetTypeAndMode_25);
#line 1077 "parse_tree_out.m"
        {
#line 1077 "parse_tree_out.m"
          parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_16_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_23, parse_tree__parse_tree_out__TypeVarSet_15, parse_tree__parse_tree_out__InstVarSet_16, parse_tree__parse_tree_out__ExistQVars_17, parse_tree__parse_tree_out__PredName_22, parse_tree__parse_tree_out__FuncTypesAndModes_24, parse_tree__parse_tree_out__RetTypeAndMode_25, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_18, parse_tree__parse_tree_out__Constraints_19, parse_tree__parse_tree_out__Context_20, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27);
        }
#line 1076 "parse_tree_out.m"
      }
#line 1081 "parse_tree_out.m"
    else
#line 1082 "parse_tree_out.m"
      {
#line 1082 "parse_tree_out.m"
        MR_Box parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27;

#line 1082 "parse_tree_out.m"
        {
#line 1082 "parse_tree_out.m"
          parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_18_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_23, parse_tree__parse_tree_out__TypeVarSet_15, parse_tree__parse_tree_out__InstVarSet_16, parse_tree__parse_tree_out__PredOrFunc_9, parse_tree__parse_tree_out__ExistQVars_17, parse_tree__parse_tree_out__PredName_22, parse_tree__parse_tree_out__TypesAndModes_10, parse_tree__parse_tree_out__WithType_11, parse_tree__parse_tree_out__WithInst_12, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_18, parse_tree__parse_tree_out__Constraints_19, parse_tree__parse_tree_out__Context_20, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27);
        }
#line 1082 "parse_tree_out.m"
      }
#line 1060 "parse_tree_out.m"
  }
#line 1057 "parse_tree_out.m"
}

#line 1048 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1(
#line 1048 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1048 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
#line 1048 "parse_tree_out.m"
{
#line 1048 "parse_tree_out.m"
  {
#line 1048 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
#line 1048 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
#line 1048 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__conv2_HeadVar__3_25;

#line 1048 "parse_tree_out.m"
    {
#line 1048 "parse_tree_out.m"
      parse_tree__parse_tree_out__conv2_HeadVar__3_25 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1048__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
#line 1048 "parse_tree_out.m"
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv2_HeadVar__3_25));
#line 1048 "parse_tree_out.m"
    return parse_tree__parse_tree_out__wrapper_arg_2;
#line 1048 "parse_tree_out.m"
  }
#line 1048 "parse_tree_out.m"
}

#line 1025 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(
#line 1025 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1025 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemModeDefn_6)
#line 1025 "parse_tree_out.m"
{
#line 1028 "parse_tree_out.m"
  {
#line 1028 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_20;
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_38_49;
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 0)));
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InstParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 1)));
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 2)));
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 3)));
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 4)));
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__UnQualSymName_14;
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Lang_15;
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Mode_28;
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ArgTerms_30;
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModeTerm_32;
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_35_35;
#line 1028 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_42_42;
#line 1029 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 5)));
#line 3388 "parse_tree.parse_tree_out.c"
    void MR_CALL (* parse_tree__parse_tree_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3390 "parse_tree.parse_tree_out.c"
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_22_34;
#line 1050 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_27_39;
#line 3394 "parse_tree.parse_tree_out.c"
    void MR_CALL (* parse_tree__parse_tree_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3396 "parse_tree.parse_tree_out.c"
    MR_Box parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_29_41;
#line 1052 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv6_STATE_VARIABLE_U_31_43;
#line 3400 "parse_tree.parse_tree_out.c"
    void MR_CALL (* parse_tree__parse_tree_out__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3402 "parse_tree.parse_tree_out.c"
    MR_Box parse_tree__parse_tree_out__conv8_STATE_VARIABLE_IO_17;

#line 1031 "parse_tree_out.m"
    {
#line 1031 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SymName_8, &parse_tree__parse_tree_out__UnQualSymName_14);
    }
#line 1032 "parse_tree_out.m"
    {
#line 1032 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_12);
    }
#line 1033 "parse_tree_out.m"
    {
#line 1033 "parse_tree_out.m"
      parse_tree__parse_tree_out__Lang_15 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
#line 3420 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeClassInfo_for_output_20 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
#line 1045 "parse_tree_out.m"
    parse_tree__parse_tree_out__Mode_28 = (MR_Word) parse_tree__parse_tree_out__ModeDefn_10;
#line 3424 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3426 "parse_tree.parse_tree_out.c"
    {
#line 3428 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out__func_0(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ":- mode (")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_22_34);
    }
#line 1048 "parse_tree_out.m"
    {
#line 1048 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_35_35, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[4]));
#line 1048 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_35_35, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1));
#line 1048 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1048 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_35_35, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
#line 1048 "parse_tree_out.m"
    }
#line 1048 "parse_tree_out.m"
    {
#line 1048 "parse_tree_out.m"
      parse_tree__parse_tree_out__ArgTerms_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], parse_tree__parse_tree_out__V_35_35, parse_tree__parse_tree_out__InstParams_9);
    }
#line 3450 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_38_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1049 "parse_tree_out.m"
    {
#line 1049 "parse_tree_out.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_38_49, parse_tree__parse_tree_out__UnQualSymName_14, parse_tree__parse_tree_out__ArgTerms_30, parse_tree__parse_tree_out__Context_12, &parse_tree__parse_tree_out__ModeTerm_32);
    }
#line 1050 "parse_tree_out.m"
    {
#line 1050 "parse_tree_out.m"
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_38_49, parse_tree__parse_tree_out__TypeClassInfo_for_output_20, parse_tree__parse_tree_out__VarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__ModeTerm_32, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_27_39);
    }
#line 3462 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3464 "parse_tree.parse_tree_out.c"
    {
#line 3466 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out__func_4(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ") == ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_29_41);
    }
#line 1052 "parse_tree_out.m"
    parse_tree__parse_tree_out__V_42_42 = (MR_Word) parse_tree__parse_tree_out__VarSet_11;
#line 1052 "parse_tree_out.m"
    {
#line 1052 "parse_tree_out.m"
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[7], parse_tree__parse_tree_out__Lang_15, ((MR_Box) (parse_tree__parse_tree_out__V_42_42)), parse_tree__parse_tree_out__Mode_28, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv6_STATE_VARIABLE_U_31_43);
    }
#line 3476 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3478 "parse_tree.parse_tree_out.c"
    {
#line 3480 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out__func_7(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv8_STATE_VARIABLE_IO_17);
    }
#line 1028 "parse_tree_out.m"
  }
#line 1025 "parse_tree_out.m"
}

#line 1004 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_3(
#line 1004 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1004 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
#line 1004 "parse_tree_out.m"
{
#line 1004 "parse_tree_out.m"
  {
#line 1004 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
#line 1004 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
#line 1004 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__conv2_HeadVar__3_28;

#line 1004 "parse_tree_out.m"
    {
#line 1004 "parse_tree_out.m"
      parse_tree__parse_tree_out__conv2_HeadVar__3_28 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1004__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
#line 1004 "parse_tree_out.m"
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv2_HeadVar__3_28));
#line 1004 "parse_tree_out.m"
    return parse_tree__parse_tree_out__wrapper_arg_2;
#line 1004 "parse_tree_out.m"
  }
#line 1004 "parse_tree_out.m"
}

#line 996 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2(
#line 996 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 996 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
#line 996 "parse_tree_out.m"
{
#line 996 "parse_tree_out.m"
  {
#line 996 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
#line 996 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
#line 996 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__conv1_HeadVar__3_40;

#line 996 "parse_tree_out.m"
    {
#line 996 "parse_tree_out.m"
      parse_tree__parse_tree_out__conv1_HeadVar__3_40 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__996__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
#line 996 "parse_tree_out.m"
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv1_HeadVar__3_40));
#line 996 "parse_tree_out.m"
    return parse_tree__parse_tree_out__wrapper_arg_2;
#line 996 "parse_tree_out.m"
  }
#line 996 "parse_tree_out.m"
}

#line 1018 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1(
#line 1018 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1018 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
#line 1018 "parse_tree_out.m"
{
#line 1018 "parse_tree_out.m"
  {
#line 1018 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
#line 1018 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__conv0_HeadVar__2_13;

#line 1018 "parse_tree_out.m"
    {
#line 1018 "parse_tree_out.m"
      parse_tree__parse_tree_out__conv0_HeadVar__2_13 = parse_tree__parse_tree_out__IntroducedFrom__func__builtin_inst_name__1018__1_1_f_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
#line 1018 "parse_tree_out.m"
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv0_HeadVar__2_13));
#line 1018 "parse_tree_out.m"
    return parse_tree__parse_tree_out__wrapper_arg_2;
#line 1018 "parse_tree_out.m"
  }
#line 1018 "parse_tree_out.m"
}

#line 976 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(
#line 976 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 976 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemInstDefn_6)
#line 976 "parse_tree_out.m"
{
#line 979 "parse_tree_out.m"
  {
#line 979 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 979 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 0)));
#line 979 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InstParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 1)));
#line 979 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InstDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 2)));
#line 979 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InstVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 3)));
#line 979 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 4)));
#line 979 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__UnQualSymName_14;
#line 979 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName_15;
#line 979 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Lang_16;
#line 980 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 5)));
#line 1017 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeInfo_21_73;
#line 1017 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeInfo_22_74;
#line 1017 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__Name_56;
#line 1017 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Args1_57;
#line 1017 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Term_59;
#line 1017 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Inst_60;
#line 1017 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_63_63;
#line 1017 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_68_68;
#line 1017 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_69_69;
#line 1017 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_70_70;
#line 1021 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_71_71;
#line 1021 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_61_61;
#line 1021 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_62_62;

#line 985 "parse_tree_out.m"
    {
#line 985 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SymName0_8, &parse_tree__parse_tree_out__UnQualSymName_14);
    }
#line 1017 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__UnQualSymName_14)) == (MR_mktag((MR_Integer) 0)));
#line 1017 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 1017 "parse_tree_out.m"
      {
#line 1017 "parse_tree_out.m"
        parse_tree__parse_tree_out__Name_56 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__UnQualSymName_14, (MR_Integer) 0)));
#line 3655 "parse_tree.parse_tree_out.c"
        parse_tree__parse_tree_out__TypeInfo_21_73 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4];
#line 3657 "parse_tree.parse_tree_out.c"
        parse_tree__parse_tree_out__TypeInfo_22_74 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[6];
#line 1018 "parse_tree_out.m"
        parse_tree__parse_tree_out__V_63_63 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[4];
#line 1018 "parse_tree_out.m"
        {
#line 1018 "parse_tree_out.m"
          parse_tree__parse_tree_out__Args1_57 = mercury__list__map_2_f_0(parse_tree__parse_tree_out__TypeInfo_21_73, parse_tree__parse_tree_out__TypeInfo_22_74, parse_tree__parse_tree_out__V_63_63, parse_tree__parse_tree_out__InstParams_9);
        }
#line 1019 "parse_tree_out.m"
        {
#line 1019 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_68_68, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_56));
#line 1019 "parse_tree_out.m"
        }
#line 1019 "parse_tree_out.m"
        {
#line 1019 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_69_69 = mercury__term__context_init_0_f_0();
        }
#line 1020 "parse_tree_out.m"
        parse_tree__parse_tree_out__V_70_70 = (MR_Integer) 1;
#line 1019 "parse_tree_out.m"
        {
#line 1019 "parse_tree_out.m"
          parse_tree__parse_tree_out__Term_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Term_59, 0) = ((MR_Box) (parse_tree__parse_tree_out__V_68_68));
#line 1019 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Term_59, 1) = ((MR_Box) (parse_tree__parse_tree_out__Args1_57));
#line 1019 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Term_59, 2) = ((MR_Box) (parse_tree__parse_tree_out__V_69_69));
#line 1019 "parse_tree_out.m"
        }
#line 1020 "parse_tree_out.m"
        {
#line 1020 "parse_tree_out.m"
          parse_tree__parse_tree_out__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__parse_tree_out__V_70_70, parse_tree__parse_tree_out__Term_59, &parse_tree__parse_tree_out__Inst_60);
        }
#line 1017 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 1017 "parse_tree_out.m"
          {
#line 1021 "parse_tree_out.m"
            parse_tree__parse_tree_out__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out__Inst_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Inst_60, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1021 "parse_tree_out.m"
            if (parse_tree__parse_tree_out__succeeded)
#line 1021 "parse_tree_out.m"
              {
#line 1021 "parse_tree_out.m"
                parse_tree__parse_tree_out__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Inst_60, (MR_Integer) 1)));
#line 1021 "parse_tree_out.m"
                parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__V_71_71)) == (MR_mktag((MR_Integer) 0)));
#line 1021 "parse_tree_out.m"
                if (parse_tree__parse_tree_out__succeeded)
#line 1021 "parse_tree_out.m"
                  {
#line 1021 "parse_tree_out.m"
                    parse_tree__parse_tree_out__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, (MR_Integer) 0)));
#line 1021 "parse_tree_out.m"
                    parse_tree__parse_tree_out__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, (MR_Integer) 1)));
#line 1021 "parse_tree_out.m"
                  }
#line 1021 "parse_tree_out.m"
              }
#line 1021 "parse_tree_out.m"
            parse_tree__parse_tree_out__succeeded = !(parse_tree__parse_tree_out__succeeded);
#line 1017 "parse_tree_out.m"
          }
#line 1017 "parse_tree_out.m"
      }
#line 988 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 987 "parse_tree_out.m"
      parse_tree__parse_tree_out__SymName_15 = parse_tree__parse_tree_out__SymName0_8;
#line 988 "parse_tree_out.m"
    else
#line 989 "parse_tree_out.m"
      parse_tree__parse_tree_out__SymName_15 = parse_tree__parse_tree_out__UnQualSymName_14;
#line 991 "parse_tree_out.m"
    {
#line 991 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_12);
    }
#line 992 "parse_tree_out.m"
    {
#line 992 "parse_tree_out.m"
      parse_tree__parse_tree_out__Lang_16 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
#line 1001 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__InstDefn_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "parse_tree_out.m"
      {
#line 994 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__TypeCtorInfo_51_51;
#line 994 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__ArgTerms_17;
#line 994 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__InstTerm_19;
#line 994 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_38_38;

#line 995 "parse_tree_out.m"
        {
#line 995 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ":- inst (");
        }
#line 996 "parse_tree_out.m"
        {
#line 996 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 996 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_38_38, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[4]));
#line 996 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_38_38, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2));
#line 996 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 996 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_38_38, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
#line 996 "parse_tree_out.m"
        }
#line 996 "parse_tree_out.m"
        {
#line 996 "parse_tree_out.m"
          parse_tree__parse_tree_out__ArgTerms_17 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], parse_tree__parse_tree_out__V_38_38, parse_tree__parse_tree_out__InstParams_9);
        }
#line 3785 "parse_tree.parse_tree_out.c"
        parse_tree__parse_tree_out__TypeCtorInfo_51_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 997 "parse_tree_out.m"
        {
#line 997 "parse_tree_out.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_51_51, parse_tree__parse_tree_out__SymName_15, parse_tree__parse_tree_out__ArgTerms_17, parse_tree__parse_tree_out__Context_12, &parse_tree__parse_tree_out__InstTerm_19);
        }
#line 999 "parse_tree_out.m"
        {
#line 999 "parse_tree_out.m"
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_51_51, parse_tree__parse_tree_out__InstVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__InstTerm_19);
        }
#line 1000 "parse_tree_out.m"
        {
#line 1000 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 1000 "parse_tree_out.m"
          return;
        }
#line 994 "parse_tree_out.m"
      }
#line 1001 "parse_tree_out.m"
    else
#line 1002 "parse_tree_out.m"
      {
#line 1002 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__TypeCtorInfo_54_54;
#line 1002 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Body_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__InstDefn_10, (MR_Integer) 0)));
#line 1002 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_26_26;
#line 1002 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__ArgTerms_47;
#line 1002 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__InstTerm_48;

#line 1003 "parse_tree_out.m"
        {
#line 1003 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ":- inst (");
        }
#line 1004 "parse_tree_out.m"
        {
#line 1004 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_26_26, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[4]));
#line 1004 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_26_26, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_3));
#line 1004 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1004 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_26_26, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
#line 1004 "parse_tree_out.m"
        }
#line 1004 "parse_tree_out.m"
        {
#line 1004 "parse_tree_out.m"
          parse_tree__parse_tree_out__ArgTerms_47 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], parse_tree__parse_tree_out__V_26_26, parse_tree__parse_tree_out__InstParams_9);
        }
#line 3845 "parse_tree.parse_tree_out.c"
        parse_tree__parse_tree_out__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1005 "parse_tree_out.m"
        {
#line 1005 "parse_tree_out.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_54_54, parse_tree__parse_tree_out__SymName_15, parse_tree__parse_tree_out__ArgTerms_47, parse_tree__parse_tree_out__Context_12, &parse_tree__parse_tree_out__InstTerm_48);
        }
#line 1007 "parse_tree_out.m"
        {
#line 1007 "parse_tree_out.m"
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_54_54, parse_tree__parse_tree_out__InstVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__InstTerm_48);
        }
#line 1008 "parse_tree_out.m"
        {
#line 1008 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ") == ");
        }
#line 1009 "parse_tree_out.m"
        {
#line 1009 "parse_tree_out.m"
          parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_16, parse_tree__parse_tree_out__InstVarSet_11, parse_tree__parse_tree_out__Body_20);
        }
#line 1010 "parse_tree_out.m"
        {
#line 1010 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1010 "parse_tree_out.m"
          return;
        }
#line 1002 "parse_tree_out.m"
      }
#line 979 "parse_tree_out.m"
  }
#line 976 "parse_tree_out.m"
}

#line 962 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(
#line 962 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Assertion_4)
#line 962 "parse_tree_out.m"
{
#line 967 "parse_tree_out.m"
  {
#line 967 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 967 "parse_tree_out.m"
#line 967 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__Assertion_4) {
#line 967 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 967 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 967 "parse_tree_out.m"
        {
#line 968 "parse_tree_out.m"
          {
#line 968 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) "can_pass_as_mercury_type");
#line 968 "parse_tree_out.m"
            return;
          }
#line 967 "parse_tree_out.m"
        }
#line 967 "parse_tree_out.m"
        break;
#line 967 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 970 "parse_tree_out.m"
        {
#line 971 "parse_tree_out.m"
          {
#line 971 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) "stable");
#line 971 "parse_tree_out.m"
            return;
          }
#line 970 "parse_tree_out.m"
        }
#line 967 "parse_tree_out.m"
        break;
#line 967 "parse_tree_out.m"
    }
#line 967 "parse_tree_out.m"
  }
#line 962 "parse_tree_out.m"
}

#line 955 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1(
#line 955 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 955 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 955 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 955 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 955 "parse_tree_out.m"
{
#line 955 "parse_tree_out.m"
  {
#line 955 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 955 "parse_tree_out.m"
    {
#line 955 "parse_tree_out.m"
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__955__1_3_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 955 "parse_tree_out.m"
      return;
    }
#line 955 "parse_tree_out.m"
  }
#line 955 "parse_tree_out.m"
}

#line 951 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(
#line 951 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Ctors_4)
#line 951 "parse_tree_out.m"
{
#line 954 "parse_tree_out.m"
  {
#line 954 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 955 "parse_tree_out.m"
    {
#line 955 "parse_tree_out.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__parse_tree_out__Ctors_4, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[3]);
#line 955 "parse_tree_out.m"
      return;
    }
#line 954 "parse_tree_out.m"
  }
#line 951 "parse_tree_out.m"
}

#line 933 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(
#line 933 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 933 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 933 "parse_tree_out.m"
{
#line 936 "parse_tree_out.m"
  while (MR_TRUE)
#line 936 "parse_tree_out.m"
    {
#line 936 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 936 "parse_tree_out.m"
      {
#line 936 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 936 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "parse_tree_out.m"
          {
#line 936 "parse_tree_out.m"
          }
#line 936 "parse_tree_out.m"
        else
#line 937 "parse_tree_out.m"
          {
#line 937 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 937 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));
#line 937 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Name_24;
#line 937 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Type_25;
#line 929 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out___Width_26;
#line 929 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out___Context_27;

#line 938 "parse_tree_out.m"
            {
#line 938 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 929 "parse_tree_out.m"
            parse_tree__parse_tree_out__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 0)));
#line 929 "parse_tree_out.m"
            parse_tree__parse_tree_out__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 1)));
#line 929 "parse_tree_out.m"
            parse_tree__parse_tree_out___Width_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 2)));
#line 929 "parse_tree_out.m"
            parse_tree__parse_tree_out___Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 3)));
#line 945 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__Name_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 945 "parse_tree_out.m"
              {
#line 945 "parse_tree_out.m"
              }
#line 945 "parse_tree_out.m"
            else
#line 946 "parse_tree_out.m"
              {
#line 946 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__FieldName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Name_24, (MR_Integer) 0)));
#line 946 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__Name_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_34, (MR_Integer) 0)));
#line 947 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out___Ctxt_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_34, (MR_Integer) 1)));

#line 948 "parse_tree_out.m"
                {
#line 948 "parse_tree_out.m"
                  parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__Name_36);
                }
#line 949 "parse_tree_out.m"
                {
#line 949 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) " :: ");
                }
#line 946 "parse_tree_out.m"
              }
#line 931 "parse_tree_out.m"
            {
#line 931 "parse_tree_out.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__HeadVar__1_1, (MR_Integer) 0, parse_tree__parse_tree_out__Type_25);
            }
#line 940 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 940 "parse_tree_out.m"
            {
#line 940 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__Args_11;

#line 940 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 940 "parse_tree_out.m"
            }
#line 940 "parse_tree_out.m"
            continue;
#line 937 "parse_tree_out.m"
          }
#line 936 "parse_tree_out.m"
      }
#line 936 "parse_tree_out.m"
      break;
#line 936 "parse_tree_out.m"
    }
#line 933 "parse_tree_out.m"
}

#line 850 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(
#line 850 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarSet_1,
#line 850 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__First_2,
#line 850 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
#line 850 "parse_tree_out.m"
{
#line 853 "parse_tree_out.m"
  while (MR_TRUE)
#line 853 "parse_tree_out.m"
    {
#line 853 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 853 "parse_tree_out.m"
      {
#line 853 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 853 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "parse_tree_out.m"
          {
#line 853 "parse_tree_out.m"
          }
#line 853 "parse_tree_out.m"
        else
#line 854 "parse_tree_out.m"
          {
#line 854 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Ctor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 0)));
#line 854 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 1)));

#line 858 "parse_tree_out.m"
#line 858 "parse_tree_out.m"
            switch (parse_tree__parse_tree_out__First_2) {
#line 858 "parse_tree_out.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 858 "parse_tree_out.m"
              case (MR_Integer) 0:
#line 859 "parse_tree_out.m"
                {
#line 860 "parse_tree_out.m"
                  {
#line 860 "parse_tree_out.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n    ;       ");
                  }
#line 859 "parse_tree_out.m"
                }
#line 858 "parse_tree_out.m"
                break;
#line 858 "parse_tree_out.m"
              case (MR_Integer) 1:
#line 856 "parse_tree_out.m"
                {
#line 857 "parse_tree_out.m"
                  {
#line 857 "parse_tree_out.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n    --->    ");
                  }
#line 856 "parse_tree_out.m"
                }
#line 858 "parse_tree_out.m"
                break;
#line 858 "parse_tree_out.m"
            }
#line 862 "parse_tree_out.m"
            {
#line 862 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(parse_tree__parse_tree_out__VarSet_1, parse_tree__parse_tree_out__Ctor_13);
            }
#line 863 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 863 "parse_tree_out.m"
            {
#line 863 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__3__tmp_copy_3 = parse_tree__parse_tree_out__Ctors_14;

#line 863 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__3_3 = parse_tree__parse_tree_out__HeadVar__3__tmp_copy_3;
#line 863 "parse_tree_out.m"
              parse_tree__parse_tree_out__First_2 = (MR_Integer) 0;
#line 863 "parse_tree_out.m"
            }
#line 863 "parse_tree_out.m"
            continue;
#line 854 "parse_tree_out.m"
          }
#line 853 "parse_tree_out.m"
      }
#line 853 "parse_tree_out.m"
      break;
#line 853 "parse_tree_out.m"
    }
#line 850 "parse_tree_out.m"
}

#line 836 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(
#line 836 "parse_tree_out.m"
  MR_Integer parse_tree__parse_tree_out__NumBits_4)
#line 836 "parse_tree_out.m"
{
#line 839 "parse_tree_out.m"
  {
#line 839 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 840 "parse_tree_out.m"
    {
#line 840 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n\twhere\t");
    }
#line 841 "parse_tree_out.m"
    {
#line 841 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "type_is_abstract_enum(");
    }
#line 842 "parse_tree_out.m"
    {
#line 842 "parse_tree_out.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__NumBits_4);
    }
#line 843 "parse_tree_out.m"
    {
#line 843 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 843 "parse_tree_out.m"
      return;
    }
#line 839 "parse_tree_out.m"
  }
#line 836 "parse_tree_out.m"
}

#line 698 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2(
#line 698 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 698 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 698 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 698 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 698 "parse_tree_out.m"
{
#line 698 "parse_tree_out.m"
  {
#line 698 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 698 "parse_tree_out.m"
    {
#line 698 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 698 "parse_tree_out.m"
      return;
    }
#line 698 "parse_tree_out.m"
  }
#line 698 "parse_tree_out.m"
}

#line 598 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1(
#line 598 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 598 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
#line 598 "parse_tree_out.m"
{
#line 598 "parse_tree_out.m"
  {
#line 598 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
#line 598 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
#line 598 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__conv0_HeadVar__3_48;

#line 598 "parse_tree_out.m"
    {
#line 598 "parse_tree_out.m"
      parse_tree__parse_tree_out__conv0_HeadVar__3_48 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__598__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
#line 598 "parse_tree_out.m"
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv0_HeadVar__3_48));
#line 598 "parse_tree_out.m"
    return parse_tree__parse_tree_out__wrapper_arg_2;
#line 598 "parse_tree_out.m"
  }
#line 598 "parse_tree_out.m"
}

#line 590 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(
#line 590 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 590 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemTypeDefn_6)
#line 590 "parse_tree_out.m"
{
#line 593 "parse_tree_out.m"
  {
#line 593 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 593 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_132_132;
#line 593 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 0)));
#line 593 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 1)));
#line 593 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 2)));
#line 593 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 3)));
#line 593 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 4)));
#line 593 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName_14;
#line 593 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Args_15;
#line 593 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeTerm_17;
#line 593 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_46_46;
#line 594 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 5)));

#line 596 "parse_tree_out.m"
    {
#line 596 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SymName0_8, &parse_tree__parse_tree_out__SymName_14);
    }
#line 597 "parse_tree_out.m"
    {
#line 597 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_12);
    }
#line 598 "parse_tree_out.m"
    {
#line 598 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 598 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_46_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1]));
#line 598 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_46_46, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1));
#line 598 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 598 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_46_46, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
#line 598 "parse_tree_out.m"
    }
#line 598 "parse_tree_out.m"
    {
#line 598 "parse_tree_out.m"
      parse_tree__parse_tree_out__Args_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[3], parse_tree__parse_tree_out__V_46_46, parse_tree__parse_tree_out__TypeParams_9);
    }
#line 4370 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 599 "parse_tree_out.m"
    {
#line 599 "parse_tree_out.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_132_132, parse_tree__parse_tree_out__SymName_14, parse_tree__parse_tree_out__Args_15, parse_tree__parse_tree_out__Context_12, &parse_tree__parse_tree_out__TypeTerm_17);
    }
#line 623 "parse_tree_out.m"
#line 623 "parse_tree_out.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out__TypeDefn_10)) {
#line 623 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 623 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 631 "parse_tree_out.m"
        {
#line 631 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__Ctors_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 0)));
#line 631 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 1)));
#line 631 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__MaybeDirectArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 2)));

#line 721 "parse_tree_out.m"
          {
#line 721 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- type ");
          }
#line 633 "parse_tree_out.m"
          {
#line 633 "parse_tree_out.m"
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_132_132, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
          }
#line 634 "parse_tree_out.m"
          {
#line 634 "parse_tree_out.m"
            parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 1, parse_tree__parse_tree_out__Ctors_23);
          }
#line 635 "parse_tree_out.m"
          {
#line 635 "parse_tree_out.m"
            parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out__MaybeUserEqComp_24, parse_tree__parse_tree_out__MaybeDirectArgs_25);
          }
#line 637 "parse_tree_out.m"
          {
#line 637 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 637 "parse_tree_out.m"
            return;
          }
#line 631 "parse_tree_out.m"
        }
#line 623 "parse_tree_out.m"
        break;
#line 623 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 624 "parse_tree_out.m"
        {
#line 624 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__Body_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 0)));

#line 721 "parse_tree_out.m"
          {
#line 721 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- type ");
          }
#line 626 "parse_tree_out.m"
          {
#line 626 "parse_tree_out.m"
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_132_132, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
          }
#line 627 "parse_tree_out.m"
          {
#line 627 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) " == ");
          }
#line 628 "parse_tree_out.m"
          {
#line 628 "parse_tree_out.m"
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__Body_22);
          }
#line 629 "parse_tree_out.m"
          {
#line 629 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 629 "parse_tree_out.m"
            return;
          }
#line 624 "parse_tree_out.m"
        }
#line 623 "parse_tree_out.m"
        break;
#line 623 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 601 "parse_tree_out.m"
        {
#line 601 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__Details_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 0)));

#line 4469 "parse_tree.parse_tree_out.c"
#line 4470 "parse_tree.parse_tree_out.c"
          switch (MR_tag((MR_Word) parse_tree__parse_tree_out__Details_18)) {
#line 4472 "parse_tree.parse_tree_out.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 4474 "parse_tree.parse_tree_out.c"
            case (MR_Integer) 0:
#line 4476 "parse_tree.parse_tree_out.c"
#line 4477 "parse_tree.parse_tree_out.c"
              switch (MR_unmkbody(parse_tree__parse_tree_out__Details_18)) {
#line 4479 "parse_tree.parse_tree_out.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 4481 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 0:
#line 4483 "parse_tree.parse_tree_out.c"
                  {
#line 721 "parse_tree_out.m"
                    {
#line 721 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) ":- type ");
                    }
#line 612 "parse_tree_out.m"
                    {
#line 612 "parse_tree_out.m"
                      parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out__TypeCtorInfo_132_132, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
                    }
#line 617 "parse_tree_out.m"
                    if ((parse_tree__parse_tree_out__Details_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "parse_tree_out.m"
                      {
#line 618 "parse_tree_out.m"
                      }
#line 617 "parse_tree_out.m"
                    else
#line 615 "parse_tree_out.m"
                      {
#line 615 "parse_tree_out.m"
                        MR_Integer parse_tree__parse_tree_out__NumBits_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Details_18, (MR_Integer) 0)));

#line 616 "parse_tree_out.m"
                        {
#line 616 "parse_tree_out.m"
                          parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(parse_tree__parse_tree_out__NumBits_21);
                        }
#line 615 "parse_tree_out.m"
                      }
#line 4515 "parse_tree.parse_tree_out.c"
                  }
#line 4517 "parse_tree.parse_tree_out.c"
                  break;
#line 4519 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 1:
#line 4521 "parse_tree.parse_tree_out.c"
                  {
#line 718 "parse_tree_out.m"
                    {
#line 718 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
                    }
#line 612 "parse_tree_out.m"
                    {
#line 612 "parse_tree_out.m"
                      parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out__TypeCtorInfo_132_132, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
                    }
#line 4533 "parse_tree.parse_tree_out.c"
                  }
#line 4535 "parse_tree.parse_tree_out.c"
                  break;
#line 4537 "parse_tree.parse_tree_out.c"
              }
#line 4539 "parse_tree.parse_tree_out.c"
              break;
#line 4541 "parse_tree.parse_tree_out.c"
            case (MR_Integer) 1:
#line 4543 "parse_tree.parse_tree_out.c"
              {
#line 721 "parse_tree_out.m"
                {
#line 721 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ":- type ");
                }
#line 612 "parse_tree_out.m"
                {
#line 612 "parse_tree_out.m"
                  parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out__TypeCtorInfo_132_132, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
                }
#line 617 "parse_tree_out.m"
                if ((parse_tree__parse_tree_out__Details_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "parse_tree_out.m"
                  {
#line 618 "parse_tree_out.m"
                  }
#line 617 "parse_tree_out.m"
                else
#line 615 "parse_tree_out.m"
                  {
#line 615 "parse_tree_out.m"
                    MR_Integer parse_tree__parse_tree_out__NumBits_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Details_18, (MR_Integer) 0)));

#line 616 "parse_tree_out.m"
                    {
#line 616 "parse_tree_out.m"
                      parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(parse_tree__parse_tree_out__NumBits_21);
                    }
#line 615 "parse_tree_out.m"
                  }
#line 4575 "parse_tree.parse_tree_out.c"
              }
#line 4577 "parse_tree.parse_tree_out.c"
              break;
#line 4579 "parse_tree.parse_tree_out.c"
          }
#line 622 "parse_tree_out.m"
          {
#line 622 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 622 "parse_tree_out.m"
            return;
          }
#line 601 "parse_tree_out.m"
        }
#line 623 "parse_tree_out.m"
        break;
#line 623 "parse_tree_out.m"
      case (MR_Integer) 3:
#line 623 "parse_tree_out.m"
#line 623 "parse_tree_out.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 0)))) {
#line 623 "parse_tree_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 623 "parse_tree_out.m"
          case (MR_Integer) 0:
#line 639 "parse_tree_out.m"
            {
#line 639 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__SolverTypeDetails_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 1)));
#line 639 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_95_95;
#line 639 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 2)));

#line 718 "parse_tree_out.m"
              {
#line 718 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
              }
#line 641 "parse_tree_out.m"
              {
#line 641 "parse_tree_out.m"
                parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_132_132, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
              }
#line 643 "parse_tree_out.m"
              {
#line 643 "parse_tree_out.m"
                parse_tree__parse_tree_out__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 643 "parse_tree_out.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__V_95_95, 0) = ((MR_Box) (parse_tree__parse_tree_out__SolverTypeDetails_26));
#line 643 "parse_tree_out.m"
              }
#line 642 "parse_tree_out.m"
              {
#line 642 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__TypeVarSet_11, parse_tree__parse_tree_out__V_95_95, parse_tree__parse_tree_out__MaybeUserEqComp_128, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 644 "parse_tree_out.m"
              {
#line 644 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 644 "parse_tree_out.m"
                return;
              }
#line 639 "parse_tree_out.m"
            }
#line 623 "parse_tree_out.m"
            break;
#line 623 "parse_tree_out.m"
          case (MR_Integer) 1:
#line 647 "parse_tree_out.m"
            {
#line 647 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ForeignType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 1)));
#line 647 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__Assertions_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 3)));
#line 647 "parse_tree_out.m"
              MR_String parse_tree__parse_tree_out__ForeignTypeStr_40;
#line 647 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 2)));

#line 648 "parse_tree_out.m"
              {
#line 648 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_type(");
              }
#line 4662 "parse_tree.parse_tree_out.c"
#line 4663 "parse_tree.parse_tree_out.c"
              switch (MR_tag((MR_Word) parse_tree__parse_tree_out__ForeignType_27)) {
#line 4665 "parse_tree.parse_tree_out.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 4667 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 0:
#line 4669 "parse_tree.parse_tree_out.c"
                  {
#line 4671 "parse_tree.parse_tree_out.c"
                    MR_Word parse_tree__parse_tree_out__ILType_34;
#line 4673 "parse_tree.parse_tree_out.c"
                    MR_Word parse_tree__parse_tree_out__RefOrVal_35;
#line 4675 "parse_tree.parse_tree_out.c"
                    MR_String parse_tree__parse_tree_out__ForeignLocStr_36;
#line 4677 "parse_tree.parse_tree_out.c"
                    MR_Word parse_tree__parse_tree_out__ForeignTypeName_37;
#line 4679 "parse_tree.parse_tree_out.c"
                    MR_String parse_tree__parse_tree_out__RefOrValStr_38;
#line 4681 "parse_tree.parse_tree_out.c"
                    MR_String parse_tree__parse_tree_out__NameStr_39;
#line 4683 "parse_tree.parse_tree_out.c"
                    MR_String parse_tree__parse_tree_out__V_69_69;
#line 4685 "parse_tree.parse_tree_out.c"
                    MR_String parse_tree__parse_tree_out__V_71_71;
#line 4687 "parse_tree.parse_tree_out.c"
                    MR_String parse_tree__parse_tree_out__V_72_72;

#line 651 "parse_tree_out.m"
                    {
#line 651 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) "il, ");
                    }
#line 668 "parse_tree_out.m"
                    parse_tree__parse_tree_out__ILType_34 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__ForeignType_27), (MR_Integer) 0);
#line 669 "parse_tree_out.m"
                    parse_tree__parse_tree_out__RefOrVal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ILType_34, (MR_Integer) 0)));
#line 669 "parse_tree_out.m"
                    parse_tree__parse_tree_out__ForeignLocStr_36 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ILType_34, (MR_Integer) 1)));
#line 669 "parse_tree_out.m"
                    parse_tree__parse_tree_out__ForeignTypeName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ILType_34, (MR_Integer) 2)));
#line 673 "parse_tree_out.m"
#line 673 "parse_tree_out.m"
                    switch (parse_tree__parse_tree_out__RefOrVal_35) {
#line 673 "parse_tree_out.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 673 "parse_tree_out.m"
                      case (MR_Integer) 0:
#line 672 "parse_tree_out.m"
                        parse_tree__parse_tree_out__RefOrValStr_38 = (MR_String) "class ";
#line 673 "parse_tree_out.m"
                        break;
#line 673 "parse_tree_out.m"
                      case (MR_Integer) 1:
#line 675 "parse_tree_out.m"
                        parse_tree__parse_tree_out__RefOrValStr_38 = (MR_String) "valuetype ";
#line 673 "parse_tree_out.m"
                        break;
#line 673 "parse_tree_out.m"
                    }
#line 677 "parse_tree_out.m"
                    {
#line 677 "parse_tree_out.m"
                      parse_tree__parse_tree_out__NameStr_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ForeignTypeName_37);
                    }
#line 678 "parse_tree_out.m"
                    {
#line 678 "parse_tree_out.m"
                      parse_tree__parse_tree_out__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) "]", parse_tree__parse_tree_out__NameStr_39);
                    }
#line 678 "parse_tree_out.m"
                    {
#line 678 "parse_tree_out.m"
                      parse_tree__parse_tree_out__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out__ForeignLocStr_36, parse_tree__parse_tree_out__V_72_72);
                    }
#line 678 "parse_tree_out.m"
                    {
#line 678 "parse_tree_out.m"
                      parse_tree__parse_tree_out__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "[", parse_tree__parse_tree_out__V_71_71);
                    }
#line 678 "parse_tree_out.m"
                    {
#line 678 "parse_tree_out.m"
                      parse_tree__parse_tree_out__ForeignTypeStr_40 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out__RefOrValStr_38, parse_tree__parse_tree_out__V_69_69);
                    }
#line 4747 "parse_tree.parse_tree_out.c"
                  }
#line 4749 "parse_tree.parse_tree_out.c"
                  break;
#line 4751 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 1:
#line 4753 "parse_tree.parse_tree_out.c"
                  {
#line 4755 "parse_tree.parse_tree_out.c"
                    MR_Word parse_tree__parse_tree_out__V_68_68;

#line 654 "parse_tree_out.m"
                    {
#line 654 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) "c, ");
                    }
#line 681 "parse_tree_out.m"
                    parse_tree__parse_tree_out__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__ForeignType_27, (MR_Integer) 0)));
#line 681 "parse_tree_out.m"
                    parse_tree__parse_tree_out__ForeignTypeStr_40 = (MR_String) parse_tree__parse_tree_out__V_68_68;
#line 4767 "parse_tree.parse_tree_out.c"
                  }
#line 4769 "parse_tree.parse_tree_out.c"
                  break;
#line 4771 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 2:
#line 4773 "parse_tree.parse_tree_out.c"
                  {
#line 4775 "parse_tree.parse_tree_out.c"
                    MR_Word parse_tree__parse_tree_out__V_67_67;

#line 657 "parse_tree_out.m"
                    {
#line 657 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) "java, ");
                    }
#line 683 "parse_tree_out.m"
                    parse_tree__parse_tree_out__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out__ForeignType_27, (MR_Integer) 0)));
#line 683 "parse_tree_out.m"
                    parse_tree__parse_tree_out__ForeignTypeStr_40 = (MR_String) parse_tree__parse_tree_out__V_67_67;
#line 4787 "parse_tree.parse_tree_out.c"
                  }
#line 4789 "parse_tree.parse_tree_out.c"
                  break;
#line 4791 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 3:
#line 4793 "parse_tree.parse_tree_out.c"
#line 4794 "parse_tree.parse_tree_out.c"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__ForeignType_27, (MR_Integer) 0)))) {
#line 4796 "parse_tree.parse_tree_out.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 4798 "parse_tree.parse_tree_out.c"
                    case (MR_Integer) 0:
#line 4800 "parse_tree.parse_tree_out.c"
                      {
#line 4802 "parse_tree.parse_tree_out.c"
                        MR_Word parse_tree__parse_tree_out__V_66_66;

#line 660 "parse_tree_out.m"
                        {
#line 660 "parse_tree_out.m"
                          mercury__io__write_string_3_p_0((MR_String) "csharp, ");
                        }
#line 685 "parse_tree_out.m"
                        parse_tree__parse_tree_out__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__ForeignType_27, (MR_Integer) 1)));
#line 685 "parse_tree_out.m"
                        parse_tree__parse_tree_out__ForeignTypeStr_40 = (MR_String) parse_tree__parse_tree_out__V_66_66;
#line 4814 "parse_tree.parse_tree_out.c"
                      }
#line 4816 "parse_tree.parse_tree_out.c"
                      break;
#line 4818 "parse_tree.parse_tree_out.c"
                    case (MR_Integer) 1:
#line 4820 "parse_tree.parse_tree_out.c"
                      {
#line 663 "parse_tree_out.m"
                        {
#line 663 "parse_tree_out.m"
                          mercury__io__write_string_3_p_0((MR_String) "erlang, ");
                        }
#line 688 "parse_tree_out.m"
                        parse_tree__parse_tree_out__ForeignTypeStr_40 = (MR_String) "";
#line 4829 "parse_tree.parse_tree_out.c"
                      }
#line 4831 "parse_tree.parse_tree_out.c"
                      break;
#line 4833 "parse_tree.parse_tree_out.c"
                  }
#line 4835 "parse_tree.parse_tree_out.c"
                  break;
#line 4837 "parse_tree.parse_tree_out.c"
              }
#line 665 "parse_tree_out.m"
              {
#line 665 "parse_tree_out.m"
                parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_132_132, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
              }
#line 666 "parse_tree_out.m"
              {
#line 666 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ", \"");
              }
#line 690 "parse_tree_out.m"
              {
#line 690 "parse_tree_out.m"
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__ForeignTypeStr_40);
              }
#line 691 "parse_tree_out.m"
              {
#line 691 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
#line 694 "parse_tree_out.m"
              if ((parse_tree__parse_tree_out__Assertions_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 693 "parse_tree_out.m"
                {
#line 693 "parse_tree_out.m"
                }
#line 694 "parse_tree_out.m"
              else
#line 695 "parse_tree_out.m"
                {
#line 696 "parse_tree_out.m"
                  {
#line 696 "parse_tree_out.m"
                    mercury__io__write_string_3_p_0((MR_String) ", [");
                  }
#line 697 "parse_tree_out.m"
                  {
#line 697 "parse_tree_out.m"
                    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, parse_tree__parse_tree_out__Assertions_28, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[2]);
                  }
#line 699 "parse_tree_out.m"
                  {
#line 699 "parse_tree_out.m"
                    mercury__io__write_string_3_p_0((MR_String) "]");
                  }
#line 695 "parse_tree_out.m"
                }
#line 701 "parse_tree_out.m"
              {
#line 701 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 702 "parse_tree_out.m"
              {
#line 702 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out__MaybeUserEqComp_129, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 704 "parse_tree_out.m"
              {
#line 704 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 704 "parse_tree_out.m"
                return;
              }
#line 647 "parse_tree_out.m"
            }
#line 623 "parse_tree_out.m"
            break;
#line 623 "parse_tree_out.m"
        }
#line 623 "parse_tree_out.m"
        break;
#line 623 "parse_tree_out.m"
    }
#line 593 "parse_tree_out.m"
  }
#line 590 "parse_tree_out.m"
}

#line 536 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_4_p_0(
#line 536 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 536 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 536 "parse_tree_out.m"
{
#line 539 "parse_tree_out.m"
  while (MR_TRUE)
#line 539 "parse_tree_out.m"
    {
#line 539 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 539 "parse_tree_out.m"
      {
#line 539 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 539 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 539 "parse_tree_out.m"
          {
#line 539 "parse_tree_out.m"
          }
#line 539 "parse_tree_out.m"
        else
#line 540 "parse_tree_out.m"
          {
#line 540 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Item_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 540 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 541 "parse_tree_out.m"
            {
#line 541 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_item_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__Item_10);
            }
#line 542 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 542 "parse_tree_out.m"
            {
#line 542 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__Items_11;

#line 542 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 542 "parse_tree_out.m"
            }
#line 542 "parse_tree_out.m"
            continue;
#line 540 "parse_tree_out.m"
          }
#line 539 "parse_tree_out.m"
      }
#line 539 "parse_tree_out.m"
      break;
#line 539 "parse_tree_out.m"
    }
#line 536 "parse_tree_out.m"
}

#line 515 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(
#line 515 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 515 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Use_6)
#line 515 "parse_tree_out.m"
{
#line 518 "parse_tree_out.m"
  {
#line 518 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 518 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Use_6, (MR_Integer) 0)));
#line 518 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Use_6, (MR_Integer) 1)));
#line 519 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Use_6, (MR_Integer) 2)));

#line 521 "parse_tree_out.m"
    {
#line 521 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_9);
    }
#line 528 "parse_tree_out.m"
    {
#line 528 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- ");
    }
#line 529 "parse_tree_out.m"
    {
#line 529 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "use_module");
    }
#line 530 "parse_tree_out.m"
    {
#line 530 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 531 "parse_tree_out.m"
    {
#line 531 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 532 "parse_tree_out.m"
    {
#line 532 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 532 "parse_tree_out.m"
      return;
    }
#line 518 "parse_tree_out.m"
  }
#line 515 "parse_tree_out.m"
}

#line 501 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(
#line 501 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 501 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Avail_6)
#line 501 "parse_tree_out.m"
{
#line 504 "parse_tree_out.m"
  {
#line 504 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 504 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8;
#line 504 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_9;
#line 504 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__Decl_11;

#line 508 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Avail_6)) == (MR_mktag((MR_Integer) 0))))
#line 506 "parse_tree_out.m"
      {
#line 506 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_15_15 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Avail_6), (MR_Integer) 0);
#line 506 "parse_tree_out.m"
        MR_Integer parse_tree__parse_tree_out___SeqNum_10;

#line 506 "parse_tree_out.m"
        parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, (MR_Integer) 0)));
#line 506 "parse_tree_out.m"
        parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, (MR_Integer) 1)));
#line 506 "parse_tree_out.m"
        parse_tree__parse_tree_out___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, (MR_Integer) 2)));
#line 507 "parse_tree_out.m"
        parse_tree__parse_tree_out__Decl_11 = (MR_String) "import_module";
#line 506 "parse_tree_out.m"
      }
#line 508 "parse_tree_out.m"
    else
#line 509 "parse_tree_out.m"
      {
#line 509 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_14_14 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Avail_6), (MR_Integer) 1);
#line 509 "parse_tree_out.m"
        MR_Integer parse_tree__parse_tree_out___SeqNum_18;

#line 509 "parse_tree_out.m"
        parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_14_14, (MR_Integer) 0)));
#line 509 "parse_tree_out.m"
        parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_14_14, (MR_Integer) 1)));
#line 509 "parse_tree_out.m"
        parse_tree__parse_tree_out___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_14_14, (MR_Integer) 2)));
#line 510 "parse_tree_out.m"
        parse_tree__parse_tree_out__Decl_11 = (MR_String) "use_module";
#line 509 "parse_tree_out.m"
      }
#line 512 "parse_tree_out.m"
    {
#line 512 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_9);
    }
#line 528 "parse_tree_out.m"
    {
#line 528 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- ");
    }
#line 529 "parse_tree_out.m"
    {
#line 529 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Decl_11);
    }
#line 530 "parse_tree_out.m"
    {
#line 530 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 531 "parse_tree_out.m"
    {
#line 531 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 532 "parse_tree_out.m"
    {
#line 532 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 532 "parse_tree_out.m"
      return;
    }
#line 504 "parse_tree_out.m"
  }
#line 501 "parse_tree_out.m"
}

#line 492 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(
#line 492 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 492 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemInclude_6)
#line 492 "parse_tree_out.m"
{
#line 495 "parse_tree_out.m"
  {
#line 495 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 495 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInclude_6, (MR_Integer) 0)));
#line 495 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInclude_6, (MR_Integer) 1)));
#line 496 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInclude_6, (MR_Integer) 2)));

#line 498 "parse_tree_out.m"
    {
#line 498 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_9);
    }
#line 528 "parse_tree_out.m"
    {
#line 528 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- ");
    }
#line 529 "parse_tree_out.m"
    {
#line 529 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "include_module");
    }
#line 530 "parse_tree_out.m"
    {
#line 530 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 531 "parse_tree_out.m"
    {
#line 531 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 532 "parse_tree_out.m"
    {
#line 532 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 532 "parse_tree_out.m"
      return;
    }
#line 495 "parse_tree_out.m"
  }
#line 492 "parse_tree_out.m"
}

#line 306 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2(
#line 306 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 306 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 306 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 306 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 306 "parse_tree_out.m"
{
#line 306 "parse_tree_out.m"
  {
#line 306 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 306 "parse_tree_out.m"
    {
#line 306 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 306 "parse_tree_out.m"
      return;
    }
#line 306 "parse_tree_out.m"
  }
#line 306 "parse_tree_out.m"
}

#line 304 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1(
#line 304 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 304 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 304 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 304 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 304 "parse_tree_out.m"
{
#line 304 "parse_tree_out.m"
  {
#line 304 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 304 "parse_tree_out.m"
    {
#line 304 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 304 "parse_tree_out.m"
      return;
    }
#line 304 "parse_tree_out.m"
  }
#line 304 "parse_tree_out.m"
}

#line 293 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(
#line 293 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 293 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__MaybePrevSectionKind_2,
#line 293 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
#line 293 "parse_tree_out.m"
{
#line 297 "parse_tree_out.m"
  while (MR_TRUE)
#line 297 "parse_tree_out.m"
    {
#line 297 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 297 "parse_tree_out.m"
      {
#line 297 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 297 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 297 "parse_tree_out.m"
          {
#line 297 "parse_tree_out.m"
          }
#line 297 "parse_tree_out.m"
        else
#line 299 "parse_tree_out.m"
          {
#line 299 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Component_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 0)));
#line 299 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Components_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 1)));
#line 299 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__MaybeCurSectionKind_21;

#line 310 "parse_tree_out.m"
            if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Component_13)) == (MR_mktag((MR_Integer) 1))))
#line 312 "parse_tree_out.m"
              {
#line 312 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__SubParseTree_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Component_13, (MR_Integer) 2)));
#line 312 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__Lang_24;
#line 312 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__SectionKind_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Component_13, (MR_Integer) 0)));
#line 311 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out___SectionContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Component_13, (MR_Integer) 1)));

#line 313 "parse_tree_out.m"
                {
#line 313 "parse_tree_out.m"
                  parse_tree__parse_tree_out__Lang_24 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_1);
                }
#line 324 "parse_tree_out.m"
#line 324 "parse_tree_out.m"
                switch (parse_tree__parse_tree_out__Lang_24) {
#line 324 "parse_tree_out.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 324 "parse_tree_out.m"
                  case (MR_Integer) 1:
#line 5315 "parse_tree.parse_tree_out.c"
#line 5316 "parse_tree.parse_tree_out.c"
                    switch (parse_tree__parse_tree_out__SectionKind_45) {
#line 5318 "parse_tree.parse_tree_out.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 5320 "parse_tree.parse_tree_out.c"
                      case (MR_Integer) 1:
#line 5322 "parse_tree.parse_tree_out.c"
                        {
#line 418 "parse_tree_out.m"
                          {
#line 418 "parse_tree_out.m"
                            mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                          }
#line 332 "parse_tree_out.m"
                          {
#line 332 "parse_tree_out.m"
                            mercury__io__write_string_3_p_0((MR_String) "% nested submodule in implementation\n");
                          }
#line 5334 "parse_tree.parse_tree_out.c"
                        }
#line 5336 "parse_tree.parse_tree_out.c"
                        break;
#line 5338 "parse_tree.parse_tree_out.c"
                      case (MR_Integer) 0:
#line 5340 "parse_tree.parse_tree_out.c"
                        {
#line 415 "parse_tree_out.m"
                          {
#line 415 "parse_tree_out.m"
                            mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                          }
#line 329 "parse_tree_out.m"
                          {
#line 329 "parse_tree_out.m"
                            mercury__io__write_string_3_p_0((MR_String) "% nested submodule in interface\n");
                          }
#line 5352 "parse_tree.parse_tree_out.c"
                        }
#line 5354 "parse_tree.parse_tree_out.c"
                        break;
#line 5356 "parse_tree.parse_tree_out.c"
                    }
#line 324 "parse_tree_out.m"
                    break;
#line 324 "parse_tree_out.m"
                  case (MR_Integer) 0:
#line 321 "parse_tree_out.m"
                    {
#line 317 "parse_tree_out.m"
                      MR_Word parse_tree__parse_tree_out__PrevSectionKind_25;

#line 317 "parse_tree_out.m"
                      parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybePrevSectionKind_2)) == (MR_mktag((MR_Integer) 1)));
#line 317 "parse_tree_out.m"
                      if (parse_tree__parse_tree_out__succeeded)
#line 317 "parse_tree_out.m"
                        {
#line 317 "parse_tree_out.m"
                          parse_tree__parse_tree_out__PrevSectionKind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybePrevSectionKind_2, (MR_Integer) 0)));
#line 318 "parse_tree_out.m"
                          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__PrevSectionKind_25 == parse_tree__parse_tree_out__SectionKind_45);
#line 317 "parse_tree_out.m"
                        }
#line 321 "parse_tree_out.m"
                      if (parse_tree__parse_tree_out__succeeded)
#line 321 "parse_tree_out.m"
                        {
#line 321 "parse_tree_out.m"
                        }
#line 321 "parse_tree_out.m"
                      else
#line 414 "parse_tree_out.m"
#line 414 "parse_tree_out.m"
                        switch (parse_tree__parse_tree_out__SectionKind_45) {
#line 414 "parse_tree_out.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 414 "parse_tree_out.m"
                          case (MR_Integer) 1:
#line 417 "parse_tree_out.m"
                            {
#line 418 "parse_tree_out.m"
                              {
#line 418 "parse_tree_out.m"
                                mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                              }
#line 417 "parse_tree_out.m"
                            }
#line 414 "parse_tree_out.m"
                            break;
#line 414 "parse_tree_out.m"
                          case (MR_Integer) 0:
#line 414 "parse_tree_out.m"
                            {
#line 415 "parse_tree_out.m"
                              {
#line 415 "parse_tree_out.m"
                                mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                              }
#line 414 "parse_tree_out.m"
                            }
#line 414 "parse_tree_out.m"
                            break;
#line 414 "parse_tree_out.m"
                        }
#line 321 "parse_tree_out.m"
                    }
#line 324 "parse_tree_out.m"
                    break;
#line 324 "parse_tree_out.m"
                }
#line 335 "parse_tree_out.m"
                {
#line 335 "parse_tree_out.m"
                  parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__SubParseTree_23);
                }
#line 336 "parse_tree_out.m"
                parse_tree__parse_tree_out__MaybeCurSectionKind_21 = parse_tree__parse_tree_out__MaybePrevSectionKind_2;
#line 312 "parse_tree_out.m"
              }
#line 310 "parse_tree_out.m"
            else
#line 302 "parse_tree_out.m"
              {
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__TypeCtorInfo_49_49;
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__TypeCtorInfo_50_50;
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__TypeCtorInfo_54_54;
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__SectionKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 0)));
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__InclsCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 2)));
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__AvailsCord_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 3)));
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__ItemsCord_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 4)));
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_36_36;
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_37_37;
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_39_39;
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_40_40;
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_42_42;
#line 301 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 1)));
#line 304 "parse_tree_out.m"
                MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_38_38;
#line 306 "parse_tree_out.m"
                MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_41_41;

#line 414 "parse_tree_out.m"
#line 414 "parse_tree_out.m"
                switch (parse_tree__parse_tree_out__SectionKind_16) {
#line 414 "parse_tree_out.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 414 "parse_tree_out.m"
                  case (MR_Integer) 1:
#line 417 "parse_tree_out.m"
                    {
#line 418 "parse_tree_out.m"
                      {
#line 418 "parse_tree_out.m"
                        mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                      }
#line 417 "parse_tree_out.m"
                    }
#line 414 "parse_tree_out.m"
                    break;
#line 414 "parse_tree_out.m"
                  case (MR_Integer) 0:
#line 414 "parse_tree_out.m"
                    {
#line 415 "parse_tree_out.m"
                      {
#line 415 "parse_tree_out.m"
                        mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                      }
#line 414 "parse_tree_out.m"
                    }
#line 414 "parse_tree_out.m"
                    break;
#line 414 "parse_tree_out.m"
                }
#line 304 "parse_tree_out.m"
                {
#line 304 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 304 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_36_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
#line 304 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_36_36, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1));
#line 304 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 304 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_36_36, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_1));
#line 304 "parse_tree_out.m"
                }
#line 5517 "parse_tree.parse_tree_out.c"
                parse_tree__parse_tree_out__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
#line 305 "parse_tree_out.m"
                {
#line 305 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_37_37 = mercury__cord__list_1_f_0(parse_tree__parse_tree_out__TypeCtorInfo_49_49, parse_tree__parse_tree_out__InclsCord_18);
                }
#line 5524 "parse_tree.parse_tree_out.c"
                parse_tree__parse_tree_out__TypeCtorInfo_50_50 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 304 "parse_tree_out.m"
                {
#line 304 "parse_tree_out.m"
                  mercury__list__foldl_4_p_2(parse_tree__parse_tree_out__TypeCtorInfo_49_49, parse_tree__parse_tree_out__TypeCtorInfo_50_50, parse_tree__parse_tree_out__V_36_36, parse_tree__parse_tree_out__V_37_37, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_38_38);
                }
#line 306 "parse_tree_out.m"
                {
#line 306 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 306 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_39_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 306 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_39_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2));
#line 306 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 306 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_39_39, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_1));
#line 306 "parse_tree_out.m"
                }
#line 5545 "parse_tree.parse_tree_out.c"
                parse_tree__parse_tree_out__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 307 "parse_tree_out.m"
                {
#line 307 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_40_40 = mercury__cord__list_1_f_0(parse_tree__parse_tree_out__TypeCtorInfo_54_54, parse_tree__parse_tree_out__AvailsCord_19);
                }
#line 306 "parse_tree_out.m"
                {
#line 306 "parse_tree_out.m"
                  mercury__list__foldl_4_p_2(parse_tree__parse_tree_out__TypeCtorInfo_54_54, parse_tree__parse_tree_out__TypeCtorInfo_50_50, parse_tree__parse_tree_out__V_39_39, parse_tree__parse_tree_out__V_40_40, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_41_41);
                }
#line 308 "parse_tree_out.m"
                {
#line 308 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_42_42 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__parse_tree_out__ItemsCord_20);
                }
#line 308 "parse_tree_out.m"
                {
#line 308 "parse_tree_out.m"
                  parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__V_42_42);
                }
#line 309 "parse_tree_out.m"
                {
#line 309 "parse_tree_out.m"
                  parse_tree__parse_tree_out__MaybeCurSectionKind_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 309 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeCurSectionKind_21, 0) = ((MR_Box) (parse_tree__parse_tree_out__SectionKind_16));
#line 309 "parse_tree_out.m"
                }
#line 302 "parse_tree_out.m"
              }
#line 338 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 338 "parse_tree_out.m"
            {
#line 338 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__MaybePrevSectionKind__tmp_copy_2 = parse_tree__parse_tree_out__MaybeCurSectionKind_21;
#line 338 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__3__tmp_copy_3 = parse_tree__parse_tree_out__Components_14;

#line 338 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__3_3 = parse_tree__parse_tree_out__HeadVar__3__tmp_copy_3;
#line 338 "parse_tree_out.m"
              parse_tree__parse_tree_out__MaybePrevSectionKind_2 = parse_tree__parse_tree_out__MaybePrevSectionKind__tmp_copy_2;
#line 338 "parse_tree_out.m"
            }
#line 338 "parse_tree_out.m"
            continue;
#line 299 "parse_tree_out.m"
          }
#line 297 "parse_tree_out.m"
      }
#line 297 "parse_tree_out.m"
      break;
#line 297 "parse_tree_out.m"
    }
#line 293 "parse_tree_out.m"
}

#line 279 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(
#line 279 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ModuleName_5,
#line 279 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VersionNumbers_6)
#line 279 "parse_tree_out.m"
{
#line 282 "parse_tree_out.m"
  {
#line 282 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 282 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__V_12_12;

#line 283 "parse_tree_out.m"
    {
#line 283 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- version_numbers(");
    }
#line 284 "parse_tree_out.m"
    {
#line 284 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_12_12 = recompilation__version__version_numbers_version_number_0_f_0();
    }
#line 284 "parse_tree_out.m"
    {
#line 284 "parse_tree_out.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__V_12_12);
    }
#line 285 "parse_tree_out.m"
    {
#line 285 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 286 "parse_tree_out.m"
    {
#line 286 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_5);
    }
#line 287 "parse_tree_out.m"
    {
#line 287 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 288 "parse_tree_out.m"
    {
#line 288 "parse_tree_out.m"
      recompilation__version__write_version_numbers_3_p_0(parse_tree__parse_tree_out__VersionNumbers_6);
    }
#line 289 "parse_tree_out.m"
    {
#line 289 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 289 "parse_tree_out.m"
      return;
    }
#line 282 "parse_tree_out.m"
  }
#line 279 "parse_tree_out.m"
}

#line 1328 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_methods_3_p_0_1(
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1328 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1328 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1328 "parse_tree_out.m"
{
#line 1328 "parse_tree_out.m"
  {
#line 1328 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1328 "parse_tree_out.m"
    {
#line 1328 "parse_tree_out.m"
      parse_tree__parse_tree_out__output_instance_method_3_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 1328 "parse_tree_out.m"
      return;
    }
#line 1328 "parse_tree_out.m"
  }
#line 1328 "parse_tree_out.m"
}

#line 100 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_methods_3_p_0(
#line 100 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Methods_4)
#line 100 "parse_tree_out.m"
{
#line 1327 "parse_tree_out.m"
  {
#line 1327 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 1328 "parse_tree_out.m"
    {
#line 1328 "parse_tree_out.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, parse_tree__parse_tree_out__Methods_4, (MR_String) ",\n", (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[1]);
#line 1328 "parse_tree_out.m"
      return;
    }
#line 1327 "parse_tree_out.m"
  }
#line 100 "parse_tree_out.m"
}

#line 92 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(
#line 92 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_5,
#line 92 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Ctor_6)
#line 92 "parse_tree_out.m"
{
#line 865 "parse_tree_out.m"
  {
#line 865 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 865 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_48;
#line 865 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ExistQVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 0)));
#line 865 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 1)));
#line 865 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 2)));
#line 865 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 3)));
#line 865 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 4)));
#line 865 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__Name_14;
#line 865 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ParenWrap_15;
#line 865 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__BraceWrap_18;
#line 865 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_43_43;
#line 865 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__V_44_44;
#line 866 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Ctxt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 5)));
#line 885 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__lo_0;
#line 885 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__hi_1;
#line 885 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__mid_2;
#line 885 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__result_3;
#line 916 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_45_45;

#line 870 "parse_tree_out.m"
    {
#line 870 "parse_tree_out.m"
      parse_tree__parse_tree_out__Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out__SymName_10);
    }
#line 871 "parse_tree_out.m"
    {
#line 871 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_quantifier_5_p_0(parse_tree__parse_tree_out__TypeVarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out__ExistQVars_8);
    }
#line 875 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__ExistQVars_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "parse_tree_out.m"
      parse_tree__parse_tree_out__ParenWrap_15 = (MR_Integer) 0;
#line 875 "parse_tree_out.m"
    else
#line 876 "parse_tree_out.m"
      {
#line 877 "parse_tree_out.m"
        parse_tree__parse_tree_out__ParenWrap_15 = (MR_Integer) 1;
#line 878 "parse_tree_out.m"
        {
#line 878 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 876 "parse_tree_out.m"
      }
#line 883 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__Arity_12 == (MR_Integer) 2);
#line 883 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 883 "parse_tree_out.m"
      {
#line 885 "parse_tree_out.m"
        /* binary string simple lookup switch */
#line 885 "parse_tree_out.m"
        parse_tree__parse_tree_out__lo_0 = (MR_Integer) 0;
#line 885 "parse_tree_out.m"
        parse_tree__parse_tree_out__hi_1 = (MR_Integer) 3;
#line 885 "parse_tree_out.m"
        do
#line 885 "parse_tree_out.m"
          {
#line 885 "parse_tree_out.m"
            parse_tree__parse_tree_out__mid_2 = (((parse_tree__parse_tree_out__lo_0 + parse_tree__parse_tree_out__hi_1)) / (MR_Integer) 2);
#line 885 "parse_tree_out.m"
            parse_tree__parse_tree_out__result_3 = MR_strcmp(parse_tree__parse_tree_out__Name_14, ((&parse_tree__parse_tree_out_vector_common_5[0 + parse_tree__parse_tree_out__mid_2]))->parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0);
#line 885 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__result_3 == (MR_Integer) 0))
#line 885 "parse_tree_out.m"
              {
#line 885 "parse_tree_out.m"
                parse_tree__parse_tree_out__succeeded = MR_TRUE;
#line 885 "parse_tree_out.m"
                /* jump out of search loop */
#line 885 "parse_tree_out.m"
                goto label_0;
#line 885 "parse_tree_out.m"
              }
#line 885 "parse_tree_out.m"
            else
#line 885 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__result_3 < (MR_Integer) 0))
#line 885 "parse_tree_out.m"
              parse_tree__parse_tree_out__hi_1 = (parse_tree__parse_tree_out__mid_2 - (MR_Integer) 1);
#line 885 "parse_tree_out.m"
            else
#line 885 "parse_tree_out.m"
              parse_tree__parse_tree_out__lo_0 = (parse_tree__parse_tree_out__mid_2 + (MR_Integer) 1);
#line 885 "parse_tree_out.m"
          }
#line 885 "parse_tree_out.m"
        while ((parse_tree__parse_tree_out__lo_0 <= parse_tree__parse_tree_out__hi_1));
#line 885 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = MR_FALSE;
#line 885 "parse_tree_out.m"
      label_0:;
#line 883 "parse_tree_out.m"
      }
#line 892 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 890 "parse_tree_out.m"
      {
#line 890 "parse_tree_out.m"
        parse_tree__parse_tree_out__BraceWrap_18 = (MR_Integer) 1;
#line 891 "parse_tree_out.m"
        {
#line 891 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
#line 890 "parse_tree_out.m"
      }
#line 892 "parse_tree_out.m"
    else
#line 893 "parse_tree_out.m"
      parse_tree__parse_tree_out__BraceWrap_18 = (MR_Integer) 0;
#line 902 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__Args_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 903 "parse_tree_out.m"
      {
#line 903 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_29_29;

#line 904 "parse_tree_out.m"
        {
#line 904 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_29_29, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_14));
#line 904 "parse_tree_out.m"
        }
#line 904 "parse_tree_out.m"
        {
#line 904 "parse_tree_out.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__V_29_29);
        }
#line 908 "parse_tree_out.m"
        {
#line 908 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 903 "parse_tree_out.m"
      }
#line 902 "parse_tree_out.m"
    else
#line 896 "parse_tree_out.m"
      {
#line 896 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Args_11, (MR_Integer) 0)));
#line 896 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Rest_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Args_11, (MR_Integer) 1)));
#line 896 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_33_33;
#line 896 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Name_54;
#line 896 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Type_55;
#line 929 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out___Width_56;
#line 929 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out___Context_57;

#line 897 "parse_tree_out.m"
        {
#line 897 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 897 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_33_33, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_14));
#line 897 "parse_tree_out.m"
        }
#line 897 "parse_tree_out.m"
        {
#line 897 "parse_tree_out.m"
          parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__V_33_33);
        }
#line 898 "parse_tree_out.m"
        {
#line 898 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 929 "parse_tree_out.m"
        parse_tree__parse_tree_out__Name_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 0)));
#line 929 "parse_tree_out.m"
        parse_tree__parse_tree_out__Type_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 1)));
#line 929 "parse_tree_out.m"
        parse_tree__parse_tree_out___Width_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 2)));
#line 929 "parse_tree_out.m"
        parse_tree__parse_tree_out___Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 3)));
#line 945 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__Name_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 945 "parse_tree_out.m"
          {
#line 945 "parse_tree_out.m"
          }
#line 945 "parse_tree_out.m"
        else
#line 946 "parse_tree_out.m"
          {
#line 946 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__FieldName_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Name_54, (MR_Integer) 0)));
#line 946 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Name_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_64, (MR_Integer) 0)));
#line 947 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out___Ctxt_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_64, (MR_Integer) 1)));

#line 948 "parse_tree_out.m"
            {
#line 948 "parse_tree_out.m"
              parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__Name_66);
            }
#line 949 "parse_tree_out.m"
            {
#line 949 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) " :: ");
            }
#line 946 "parse_tree_out.m"
          }
#line 931 "parse_tree_out.m"
        {
#line 931 "parse_tree_out.m"
          parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__TypeVarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out__Type_55);
        }
#line 900 "parse_tree_out.m"
        {
#line 900 "parse_tree_out.m"
          parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(parse_tree__parse_tree_out__TypeVarSet_5, parse_tree__parse_tree_out__Rest_20);
        }
#line 901 "parse_tree_out.m"
        {
#line 901 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 896 "parse_tree_out.m"
      }
#line 913 "parse_tree_out.m"
#line 913 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__BraceWrap_18) {
#line 913 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 913 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 914 "parse_tree_out.m"
        {
#line 914 "parse_tree_out.m"
        }
#line 913 "parse_tree_out.m"
        break;
#line 913 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 911 "parse_tree_out.m"
        {
#line 912 "parse_tree_out.m"
          {
#line 912 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) " }");
          }
#line 911 "parse_tree_out.m"
        }
#line 913 "parse_tree_out.m"
        break;
#line 913 "parse_tree_out.m"
    }
#line 916 "parse_tree_out.m"
    parse_tree__parse_tree_out__V_43_43 = (MR_Integer) 0;
#line 916 "parse_tree_out.m"
    parse_tree__parse_tree_out__V_44_44 = (MR_String) "=>";
#line 6016 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeClassInfo_for_output_48 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
#line 916 "parse_tree_out.m"
    {
#line 916 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(parse_tree__parse_tree_out__TypeClassInfo_for_output_48, parse_tree__parse_tree_out__TypeVarSet_5, parse_tree__parse_tree_out__V_43_43, parse_tree__parse_tree_out__V_44_44, parse_tree__parse_tree_out__Constraints_9, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_45_45);
    }
#line 920 "parse_tree_out.m"
#line 920 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__ParenWrap_15) {
#line 920 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 920 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 919 "parse_tree_out.m"
        {
#line 919 "parse_tree_out.m"
        }
#line 920 "parse_tree_out.m"
        break;
#line 920 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 921 "parse_tree_out.m"
        {
#line 922 "parse_tree_out.m"
          {
#line 922 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
#line 922 "parse_tree_out.m"
            return;
          }
#line 921 "parse_tree_out.m"
        }
#line 920 "parse_tree_out.m"
        break;
#line 920 "parse_tree_out.m"
    }
#line 865 "parse_tree_out.m"
  }
#line 92 "parse_tree_out.m"
}

#line 827 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0_1(
#line 827 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 827 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 827 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 827 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 827 "parse_tree_out.m"
{
#line 827 "parse_tree_out.m"
  {
#line 827 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 827 "parse_tree_out.m"
    {
#line 827 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 827 "parse_tree_out.m"
      return;
    }
#line 827 "parse_tree_out.m"
  }
#line 827 "parse_tree_out.m"
}

#line 88 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(
#line 88 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_8,
#line 88 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_9,
#line 88 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__MaybeSolverTypeDetails_10,
#line 88 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_11,
#line 88 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__MaybeDirectArgs_12)
#line 88 "parse_tree_out.m"
{
#line 732 "parse_tree_out.m"
  {
#line 732 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 727 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 727 "parse_tree_out.m"
      {
#line 728 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__MaybeUserEqComp_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 729 "parse_tree_out.m"
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "parse_tree_out.m"
      }
#line 732 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 732 "parse_tree_out.m"
      {
#line 732 "parse_tree_out.m"
      }
#line 732 "parse_tree_out.m"
    else
#line 742 "parse_tree_out.m"
      {
#line 742 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeUnifyPred_17;
#line 742 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeComparePred_18;
#line 739 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeUnifyPred0_15;
#line 739 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeComparePred0_16;
#line 734 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__UserEqComp_14;
#line 744 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_32_32;
#line 744 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_19_19;

#line 734 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeUserEqComp_11)) == (MR_mktag((MR_Integer) 1)));
#line 734 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 734 "parse_tree_out.m"
          {
#line 734 "parse_tree_out.m"
            parse_tree__parse_tree_out__UserEqComp_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUserEqComp_11, (MR_Integer) 0)));
#line 735 "parse_tree_out.m"
            parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__UserEqComp_14)) == (MR_mktag((MR_Integer) 0)));
#line 735 "parse_tree_out.m"
            if (parse_tree__parse_tree_out__succeeded)
#line 735 "parse_tree_out.m"
              {
#line 735 "parse_tree_out.m"
                parse_tree__parse_tree_out__MaybeUnifyPred0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__UserEqComp_14, (MR_Integer) 0)));
#line 735 "parse_tree_out.m"
                parse_tree__parse_tree_out__MaybeComparePred0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__UserEqComp_14, (MR_Integer) 1)));
#line 735 "parse_tree_out.m"
              }
#line 734 "parse_tree_out.m"
          }
#line 739 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 737 "parse_tree_out.m"
          {
#line 737 "parse_tree_out.m"
            parse_tree__parse_tree_out__MaybeUnifyPred_17 = parse_tree__parse_tree_out__MaybeUnifyPred0_15;
#line 738 "parse_tree_out.m"
            parse_tree__parse_tree_out__MaybeComparePred_18 = parse_tree__parse_tree_out__MaybeComparePred0_16;
#line 737 "parse_tree_out.m"
          }
#line 739 "parse_tree_out.m"
        else
#line 740 "parse_tree_out.m"
          {
#line 740 "parse_tree_out.m"
            parse_tree__parse_tree_out__MaybeUnifyPred_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 741 "parse_tree_out.m"
            parse_tree__parse_tree_out__MaybeComparePred_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "parse_tree_out.m"
          }
#line 743 "parse_tree_out.m"
        {
#line 743 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n\twhere\t");
        }
#line 744 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeUserEqComp_11)) == (MR_mktag((MR_Integer) 1)));
#line 744 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 744 "parse_tree_out.m"
          {
#line 744 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUserEqComp_11, (MR_Integer) 0)));
#line 744 "parse_tree_out.m"
            parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 744 "parse_tree_out.m"
            if (parse_tree__parse_tree_out__succeeded)
#line 744 "parse_tree_out.m"
              parse_tree__parse_tree_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__V_32_32, (MR_Integer) 0)));
#line 744 "parse_tree_out.m"
          }
#line 746 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 745 "parse_tree_out.m"
          {
#line 745 "parse_tree_out.m"
            {
#line 745 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "type_is_abstract_noncanonical");
            }
#line 745 "parse_tree_out.m"
          }
#line 746 "parse_tree_out.m"
        else
#line 760 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "parse_tree_out.m"
          {
#line 761 "parse_tree_out.m"
          }
#line 760 "parse_tree_out.m"
        else
#line 748 "parse_tree_out.m"
          {
#line 748 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeSolverTypeDetails_10, (MR_Integer) 0)));
#line 748 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__RepresentationType_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 0)));
#line 748 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__HowToInit_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 1)));
#line 748 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__GroundInst_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 2)));
#line 748 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__AnyInst_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 3)));
#line 748 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__MutableInfos_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 4)));
#line 748 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Lang_65;
#line 748 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__EmptyInstVarSet_66;

#line 806 "parse_tree_out.m"
            {
#line 806 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "representation is ");
            }
#line 807 "parse_tree_out.m"
            {
#line 807 "parse_tree_out.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__TypeVarSet_9, (MR_Integer) 0, parse_tree__parse_tree_out__RepresentationType_59);
            }
#line 810 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__HowToInit_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 809 "parse_tree_out.m"
              {
#line 809 "parse_tree_out.m"
              }
#line 810 "parse_tree_out.m"
            else
#line 811 "parse_tree_out.m"
              {
#line 811 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__InitPred_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HowToInit_60, (MR_Integer) 0)));

#line 812 "parse_tree_out.m"
                {
#line 812 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\tinitialisation is ");
                }
#line 813 "parse_tree_out.m"
                {
#line 813 "parse_tree_out.m"
                  parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__InitPred_64);
                }
#line 811 "parse_tree_out.m"
              }
#line 815 "parse_tree_out.m"
            {
#line 815 "parse_tree_out.m"
              parse_tree__parse_tree_out__Lang_65 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_8);
            }
#line 816 "parse_tree_out.m"
            {
#line 816 "parse_tree_out.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out__EmptyInstVarSet_66);
            }
#line 817 "parse_tree_out.m"
            {
#line 817 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\tground is ");
            }
#line 818 "parse_tree_out.m"
            {
#line 818 "parse_tree_out.m"
              parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_65, parse_tree__parse_tree_out__EmptyInstVarSet_66, parse_tree__parse_tree_out__GroundInst_61);
            }
#line 819 "parse_tree_out.m"
            {
#line 819 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\tany is ");
            }
#line 820 "parse_tree_out.m"
            {
#line 820 "parse_tree_out.m"
              parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_65, parse_tree__parse_tree_out__EmptyInstVarSet_66, parse_tree__parse_tree_out__AnyInst_62);
            }
#line 823 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__MutableInfos_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "parse_tree_out.m"
              {
#line 822 "parse_tree_out.m"
              }
#line 823 "parse_tree_out.m"
            else
#line 824 "parse_tree_out.m"
              {
#line 824 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_85_85;

#line 825 "parse_tree_out.m"
                {
#line 825 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\tconstraint_store is [\n\t\t\t");
                }
#line 827 "parse_tree_out.m"
                {
#line 827 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 827 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_85_85, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[4]));
#line 827 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_85_85, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0_1));
#line 827 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 827 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_85_85, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_8));
#line 827 "parse_tree_out.m"
                }
#line 826 "parse_tree_out.m"
                {
#line 826 "parse_tree_out.m"
                  mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__parse_tree_out__MutableInfos_63, (MR_String) ",\n\t\t\t", parse_tree__parse_tree_out__V_85_85);
                }
#line 828 "parse_tree_out.m"
                {
#line 828 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n\t\t]");
                }
#line 824 "parse_tree_out.m"
              }
#line 752 "parse_tree_out.m"
            {
#line 752 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_21_21;

#line 752 "parse_tree_out.m"
              parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeUnifyPred_17)) == (MR_mktag((MR_Integer) 1)));
#line 752 "parse_tree_out.m"
              if (parse_tree__parse_tree_out__succeeded)
#line 752 "parse_tree_out.m"
                parse_tree__parse_tree_out__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUnifyPred_17, (MR_Integer) 0)));
#line 752 "parse_tree_out.m"
            }
#line 753 "parse_tree_out.m"
            if (!(parse_tree__parse_tree_out__succeeded))
#line 753 "parse_tree_out.m"
              {
#line 753 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_22_22;

#line 753 "parse_tree_out.m"
                parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeComparePred_18)) == (MR_mktag((MR_Integer) 1)));
#line 753 "parse_tree_out.m"
                if (parse_tree__parse_tree_out__succeeded)
#line 753 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeComparePred_18, (MR_Integer) 0)));
#line 753 "parse_tree_out.m"
              }
#line 757 "parse_tree_out.m"
            if (parse_tree__parse_tree_out__succeeded)
#line 756 "parse_tree_out.m"
              {
#line 756 "parse_tree_out.m"
                {
#line 756 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                }
#line 756 "parse_tree_out.m"
              }
#line 757 "parse_tree_out.m"
            else
#line 757 "parse_tree_out.m"
              {
#line 757 "parse_tree_out.m"
              }
#line 748 "parse_tree_out.m"
          }
#line 6404 "parse_tree.parse_tree_out.c"
        if ((parse_tree__parse_tree_out__MaybeUnifyPred_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "parse_tree_out.m"
          if ((parse_tree__parse_tree_out__MaybeComparePred_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "parse_tree_out.m"
            {
#line 788 "parse_tree_out.m"
            }
#line 787 "parse_tree_out.m"
          else
#line 778 "parse_tree_out.m"
            {
#line 778 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ComparePredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeComparePred_18, (MR_Integer) 0)));

#line 779 "parse_tree_out.m"
              {
#line 779 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "comparison is ");
              }
#line 780 "parse_tree_out.m"
              {
#line 780 "parse_tree_out.m"
                parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ComparePredName_25);
              }
#line 784 "parse_tree_out.m"
              if ((parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "parse_tree_out.m"
                {
#line 785 "parse_tree_out.m"
                }
#line 784 "parse_tree_out.m"
              else
#line 782 "parse_tree_out.m"
                {
#line 783 "parse_tree_out.m"
                  {
#line 783 "parse_tree_out.m"
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  }
#line 782 "parse_tree_out.m"
                }
#line 778 "parse_tree_out.m"
            }
#line 6448 "parse_tree.parse_tree_out.c"
        else
#line 6450 "parse_tree.parse_tree_out.c"
          {
#line 6452 "parse_tree.parse_tree_out.c"
            MR_Word parse_tree__parse_tree_out__UnifyPredName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUnifyPred_17, (MR_Integer) 0)));

#line 766 "parse_tree_out.m"
            {
#line 766 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "equality is ");
            }
#line 767 "parse_tree_out.m"
            {
#line 767 "parse_tree_out.m"
              parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__UnifyPredName_23);
            }
#line 6465 "parse_tree.parse_tree_out.c"
            if ((parse_tree__parse_tree_out__MaybeComparePred_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "parse_tree_out.m"
              {
#line 788 "parse_tree_out.m"
              }
#line 6471 "parse_tree.parse_tree_out.c"
            else
#line 6473 "parse_tree.parse_tree_out.c"
              {
#line 6475 "parse_tree.parse_tree_out.c"
                MR_Word parse_tree__parse_tree_out__ComparePredName_290;

#line 770 "parse_tree_out.m"
                {
#line 770 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                }
#line 778 "parse_tree_out.m"
                parse_tree__parse_tree_out__ComparePredName_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeComparePred_18, (MR_Integer) 0)));
#line 779 "parse_tree_out.m"
                {
#line 779 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) "comparison is ");
                }
#line 780 "parse_tree_out.m"
                {
#line 780 "parse_tree_out.m"
                  parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ComparePredName_290);
                }
#line 784 "parse_tree_out.m"
                if ((parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "parse_tree_out.m"
                  {
#line 785 "parse_tree_out.m"
                  }
#line 784 "parse_tree_out.m"
                else
#line 782 "parse_tree_out.m"
                  {
#line 783 "parse_tree_out.m"
                    {
#line 783 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                    }
#line 782 "parse_tree_out.m"
                  }
#line 6512 "parse_tree.parse_tree_out.c"
              }
#line 6514 "parse_tree.parse_tree_out.c"
          }
#line 795 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 796 "parse_tree_out.m"
          {
#line 796 "parse_tree_out.m"
          }
#line 795 "parse_tree_out.m"
        else
#line 791 "parse_tree_out.m"
          {
#line 791 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__DirectArgFunctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeDirectArgs_12, (MR_Integer) 0)));

#line 792 "parse_tree_out.m"
            {
#line 792 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "direct_arg is [");
            }
#line 793 "parse_tree_out.m"
            {
#line 793 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(parse_tree__parse_tree_out__DirectArgFunctors_27);
            }
#line 794 "parse_tree_out.m"
            {
#line 794 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "]");
#line 794 "parse_tree_out.m"
              return;
            }
#line 791 "parse_tree_out.m"
          }
#line 742 "parse_tree_out.m"
      }
#line 732 "parse_tree_out.m"
  }
#line 88 "parse_tree_out.m"
}

#line 80 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_4_p_0(
#line 80 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 80 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Item_6)
#line 80 "parse_tree_out.m"
{
#line 546 "parse_tree_out.m"
  {
#line 546 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 546 "parse_tree_out.m"
#line 546 "parse_tree_out.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out__Item_6)) {
#line 546 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 546 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 546 "parse_tree_out.m"
        {
#line 546 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ItemClause_8 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Item_6), (MR_Integer) 0);

#line 547 "parse_tree_out.m"
          {
#line 547 "parse_tree_out.m"
            parse_tree__parse_tree_out_clause__mercury_output_item_clause_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemClause_8);
#line 547 "parse_tree_out.m"
            return;
          }
#line 546 "parse_tree_out.m"
        }
#line 546 "parse_tree_out.m"
        break;
#line 546 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 549 "parse_tree_out.m"
        {
#line 549 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ItemTypeDefn_9 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Item_6), (MR_Integer) 1);

#line 550 "parse_tree_out.m"
          {
#line 550 "parse_tree_out.m"
            parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemTypeDefn_9);
#line 550 "parse_tree_out.m"
            return;
          }
#line 549 "parse_tree_out.m"
        }
#line 546 "parse_tree_out.m"
        break;
#line 546 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 552 "parse_tree_out.m"
        {
#line 552 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ItemInstDefn_10 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Item_6), (MR_Integer) 2);

#line 553 "parse_tree_out.m"
          {
#line 553 "parse_tree_out.m"
            parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemInstDefn_10);
#line 553 "parse_tree_out.m"
            return;
          }
#line 552 "parse_tree_out.m"
        }
#line 546 "parse_tree_out.m"
        break;
#line 546 "parse_tree_out.m"
      case (MR_Integer) 3:
#line 546 "parse_tree_out.m"
#line 546 "parse_tree_out.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 0)))) {
#line 546 "parse_tree_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 546 "parse_tree_out.m"
          case (MR_Integer) 0:
#line 555 "parse_tree_out.m"
            {
#line 555 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemModeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 556 "parse_tree_out.m"
              {
#line 556 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemModeDefn_11);
#line 556 "parse_tree_out.m"
                return;
              }
#line 555 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
          case (MR_Integer) 1:
#line 558 "parse_tree_out.m"
            {
#line 558 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemPredDecl_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 559 "parse_tree_out.m"
              {
#line 559 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemPredDecl_12);
#line 559 "parse_tree_out.m"
                return;
              }
#line 558 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
          case (MR_Integer) 2:
#line 561 "parse_tree_out.m"
            {
#line 561 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemModeDecl_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));
#line 561 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__PredName0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 0)));
#line 561 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__PredOrFunc_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 1)));
#line 561 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__Modes_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 2)));
#line 561 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__WithInst_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 3)));
#line 561 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__MaybeDet_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 4)));
#line 561 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__VarSet_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 5)));
#line 561 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__Context_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 6)));
#line 561 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__PredName_86;
#line 561 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__Lang_87;
#line 1096 "parse_tree_out.m"
              MR_Integer parse_tree__parse_tree_out___SeqNum_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 7)));
#line 1104 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_91_91;

#line 1098 "parse_tree_out.m"
              {
#line 1098 "parse_tree_out.m"
                parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__PredName0_78, &parse_tree__parse_tree_out__PredName_86);
              }
#line 1099 "parse_tree_out.m"
              {
#line 1099 "parse_tree_out.m"
                parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_84);
              }
#line 1100 "parse_tree_out.m"
              {
#line 1100 "parse_tree_out.m"
                parse_tree__parse_tree_out__Lang_87 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
              }
#line 1105 "parse_tree_out.m"
              parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithInst_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1104 "parse_tree_out.m"
              if (parse_tree__parse_tree_out__succeeded)
#line 1104 "parse_tree_out.m"
                {
#line 1104 "parse_tree_out.m"
                  parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__PredOrFunc_79)) == (MR_mktag((MR_Integer) 1)));
#line 1104 "parse_tree_out.m"
                  if (parse_tree__parse_tree_out__succeeded)
#line 1104 "parse_tree_out.m"
                    {
#line 1104 "parse_tree_out.m"
                      parse_tree__parse_tree_out__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__PredOrFunc_79, (MR_Integer) 0)));
#line 1104 "parse_tree_out.m"
                      parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__V_91_91 == (MR_Integer) 1);
#line 1104 "parse_tree_out.m"
                    }
#line 1104 "parse_tree_out.m"
                }
#line 1110 "parse_tree_out.m"
              if (parse_tree__parse_tree_out__succeeded)
#line 1107 "parse_tree_out.m"
                {
#line 1107 "parse_tree_out.m"
                  MR_Word parse_tree__parse_tree_out__FuncModes_88;
#line 1107 "parse_tree_out.m"
                  MR_Word parse_tree__parse_tree_out__RetMode_89;
#line 1107 "parse_tree_out.m"
                  MR_Box parse_tree__parse_tree_out__conv0_RetMode_89;

#line 1107 "parse_tree_out.m"
                  {
#line 1107 "parse_tree_out.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out__Modes_80, &parse_tree__parse_tree_out__FuncModes_88, &parse_tree__parse_tree_out__conv0_RetMode_89);
                  }
#line 1107 "parse_tree_out.m"
                  parse_tree__parse_tree_out__RetMode_89 = ((MR_Word) parse_tree__parse_tree_out__conv0_RetMode_89);
#line 1108 "parse_tree_out.m"
                  {
#line 1108 "parse_tree_out.m"
                    parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_9_p_0(parse_tree__parse_tree_out__Lang_87, parse_tree__parse_tree_out__VarSet_83, parse_tree__parse_tree_out__PredName_86, parse_tree__parse_tree_out__FuncModes_88, parse_tree__parse_tree_out__RetMode_89, parse_tree__parse_tree_out__MaybeDet_82, parse_tree__parse_tree_out__Context_84);
#line 1108 "parse_tree_out.m"
                    return;
                  }
#line 1107 "parse_tree_out.m"
                }
#line 1110 "parse_tree_out.m"
              else
#line 1111 "parse_tree_out.m"
                {
#line 1111 "parse_tree_out.m"
                  parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_9_p_0(parse_tree__parse_tree_out__Lang_87, parse_tree__parse_tree_out__VarSet_83, parse_tree__parse_tree_out__PredName_86, parse_tree__parse_tree_out__Modes_80, parse_tree__parse_tree_out__WithInst_81, parse_tree__parse_tree_out__MaybeDet_82, parse_tree__parse_tree_out__Context_84);
#line 1111 "parse_tree_out.m"
                  return;
                }
#line 561 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
          case (MR_Integer) 3:
#line 564 "parse_tree_out.m"
            {
#line 564 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemPragma_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 565 "parse_tree_out.m"
              {
#line 565 "parse_tree_out.m"
                parse_tree__parse_tree_out_pragma__mercury_output_item_pragma_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemPragma_14);
#line 565 "parse_tree_out.m"
                return;
              }
#line 564 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
          case (MR_Integer) 4:
#line 567 "parse_tree_out.m"
            {
#line 567 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemPromise_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 568 "parse_tree_out.m"
              {
#line 568 "parse_tree_out.m"
                parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_tree_out__ItemPromise_15);
#line 568 "parse_tree_out.m"
                return;
              }
#line 567 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
          case (MR_Integer) 5:
#line 570 "parse_tree_out.m"
            {
#line 570 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemTypeClass_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 571 "parse_tree_out.m"
              {
#line 571 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemTypeClass_16);
#line 571 "parse_tree_out.m"
                return;
              }
#line 570 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
          case (MR_Integer) 6:
#line 573 "parse_tree_out.m"
            {
#line 573 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemInstance_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 574 "parse_tree_out.m"
              {
#line 574 "parse_tree_out.m"
                parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_tree_out__ItemInstance_17);
#line 574 "parse_tree_out.m"
                return;
              }
#line 573 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
          case (MR_Integer) 7:
#line 576 "parse_tree_out.m"
            {
#line 576 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemInitialise_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));
#line 576 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__PredSymName_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 0)));
#line 576 "parse_tree_out.m"
              MR_Integer parse_tree__parse_tree_out__Arity_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 1)));
#line 1365 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 2)));
#line 1365 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out___Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 3)));
#line 1365 "parse_tree_out.m"
              MR_Integer parse_tree__parse_tree_out___SeqNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 4)));

#line 1367 "parse_tree_out.m"
              {
#line 1367 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ":- initialise ");
              }
#line 1368 "parse_tree_out.m"
              {
#line 1368 "parse_tree_out.m"
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__PredSymName_60);
              }
#line 1369 "parse_tree_out.m"
              {
#line 1369 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "/");
              }
#line 1370 "parse_tree_out.m"
              {
#line 1370 "parse_tree_out.m"
                mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__Arity_61);
              }
#line 1371 "parse_tree_out.m"
              {
#line 1371 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1371 "parse_tree_out.m"
                return;
              }
#line 576 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
          case (MR_Integer) 8:
#line 579 "parse_tree_out.m"
            {
#line 579 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemFinalise_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));
#line 579 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__PredSymName_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 0)));
#line 579 "parse_tree_out.m"
              MR_Integer parse_tree__parse_tree_out__Arity_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 1)));
#line 1379 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 2)));
#line 1379 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out___Context_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 3)));
#line 1379 "parse_tree_out.m"
              MR_Integer parse_tree__parse_tree_out___SeqNum_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 4)));

#line 1381 "parse_tree_out.m"
              {
#line 1381 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ":- finalise ");
              }
#line 1382 "parse_tree_out.m"
              {
#line 1382 "parse_tree_out.m"
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__PredSymName_42);
              }
#line 1383 "parse_tree_out.m"
              {
#line 1383 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "/");
              }
#line 1384 "parse_tree_out.m"
              {
#line 1384 "parse_tree_out.m"
                mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__Arity_43);
              }
#line 1385 "parse_tree_out.m"
              {
#line 1385 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1385 "parse_tree_out.m"
                return;
              }
#line 579 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
          case (MR_Integer) 9:
#line 582 "parse_tree_out.m"
            {
#line 582 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemMutable_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 583 "parse_tree_out.m"
              {
#line 583 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemMutable_20);
#line 583 "parse_tree_out.m"
                return;
              }
#line 582 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
          case (MR_Integer) 10:
#line 585 "parse_tree_out.m"
            {
#line 585 "parse_tree_out.m"
            }
#line 546 "parse_tree_out.m"
            break;
#line 546 "parse_tree_out.m"
        }
#line 546 "parse_tree_out.m"
        break;
#line 546 "parse_tree_out.m"
    }
#line 546 "parse_tree_out.m"
  }
#line 80 "parse_tree_out.m"
}

#line 403 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2(
#line 403 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 403 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 403 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 403 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 403 "parse_tree_out.m"
{
#line 403 "parse_tree_out.m"
  {
#line 403 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 403 "parse_tree_out.m"
    {
#line 403 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 403 "parse_tree_out.m"
      return;
    }
#line 403 "parse_tree_out.m"
  }
#line 403 "parse_tree_out.m"
}

#line 402 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1(
#line 402 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 402 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 402 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 402 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 402 "parse_tree_out.m"
{
#line 402 "parse_tree_out.m"
  {
#line 402 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 402 "parse_tree_out.m"
    {
#line 402 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 402 "parse_tree_out.m"
      return;
    }
#line 402 "parse_tree_out.m"
  }
#line 402 "parse_tree_out.m"
}

#line 75 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0(
#line 75 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 75 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__IntForOptItemBlock_6)
#line 75 "parse_tree_out.m"
{
#line 399 "parse_tree_out.m"
  {
#line 399 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 399 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
#line 399 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntForOptSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 0)));
#line 399 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 2)));
#line 399 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 3)));
#line 399 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 4)));
#line 399 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_15_15;
#line 399 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_17_17;
#line 399 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_34;
#line 399 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntFileKind_35;
#line 399 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__V_38_38;
#line 399 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__V_40_40;
#line 400 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 1)));
#line 402 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16;
#line 403 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18;

#line 402 "parse_tree_out.m"
    {
#line 402 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 402 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
#line 402 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1));
#line 402 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 402 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 402 "parse_tree_out.m"
    }
#line 7096 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 402 "parse_tree_out.m"
    {
#line 402 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_15_15, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 403 "parse_tree_out.m"
    {
#line 403 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 403 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 403 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2));
#line 403 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 403 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 403 "parse_tree_out.m"
    }
#line 403 "parse_tree_out.m"
    {
#line 403 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_17_17, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18);
    }
#line 483 "parse_tree_out.m"
    parse_tree__parse_tree_out__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptSectionKind_8, (MR_Integer) 0)));
#line 483 "parse_tree_out.m"
    parse_tree__parse_tree_out__IntFileKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptSectionKind_8, (MR_Integer) 1)));
#line 484 "parse_tree_out.m"
    {
#line 484 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- ioms_opt_imported(");
    }
#line 485 "parse_tree_out.m"
    {
#line 485 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_38_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_34);
    }
#line 485 "parse_tree_out.m"
    {
#line 485 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_38_38);
    }
#line 486 "parse_tree_out.m"
    {
#line 486 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_40_40 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_35);
    }
#line 486 "parse_tree_out.m"
    {
#line 486 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_40_40);
    }
#line 487 "parse_tree_out.m"
    {
#line 487 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 405 "parse_tree_out.m"
    {
#line 405 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 405 "parse_tree_out.m"
      return;
    }
#line 399 "parse_tree_out.m"
  }
#line 75 "parse_tree_out.m"
}

#line 73 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_blocks_4_p_0(
#line 73 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 73 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 73 "parse_tree_out.m"
{
#line 393 "parse_tree_out.m"
  while (MR_TRUE)
#line 393 "parse_tree_out.m"
    {
#line 393 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 393 "parse_tree_out.m"
      {
#line 393 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 393 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "parse_tree_out.m"
          {
#line 393 "parse_tree_out.m"
          }
#line 393 "parse_tree_out.m"
        else
#line 395 "parse_tree_out.m"
          {
#line 395 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__IntForOptItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__IntForOptItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 396 "parse_tree_out.m"
            {
#line 396 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__IntForOptItemBlock_10);
            }
#line 397 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 397 "parse_tree_out.m"
            {
#line 397 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__IntForOptItemBlocks_11;

#line 397 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 397 "parse_tree_out.m"
            }
#line 397 "parse_tree_out.m"
            continue;
#line 395 "parse_tree_out.m"
          }
#line 393 "parse_tree_out.m"
      }
#line 393 "parse_tree_out.m"
      break;
#line 393 "parse_tree_out.m"
    }
#line 73 "parse_tree_out.m"
}

#line 389 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2(
#line 389 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 389 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 389 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 389 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 389 "parse_tree_out.m"
{
#line 389 "parse_tree_out.m"
  {
#line 389 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 389 "parse_tree_out.m"
    {
#line 389 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 389 "parse_tree_out.m"
      return;
    }
#line 389 "parse_tree_out.m"
  }
#line 389 "parse_tree_out.m"
}

#line 388 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1(
#line 388 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg)
#line 388 "parse_tree_out.m"
{
#line 388 "parse_tree_out.m"
  {
#line 388 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 388 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 388 "parse_tree_out.m"
    {
#line 388 "parse_tree_out.m"
      return parse_tree__parse_tree_out__succeeded = parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__388__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))));
    }
#line 388 "parse_tree_out.m"
    return parse_tree__parse_tree_out__succeeded;
#line 388 "parse_tree_out.m"
  }
#line 388 "parse_tree_out.m"
}

#line 71 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0(
#line 71 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 71 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__OptItemBlock_6)
#line 71 "parse_tree_out.m"
{
#line 386 "parse_tree_out.m"
  {
#line 386 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 386 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__OptSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 0)));
#line 386 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 2)));
#line 386 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 3)));
#line 386 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 4)));
#line 386 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_15_15;
#line 386 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_20_20;
#line 386 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_34;
#line 386 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__OptFileKind_35;
#line 386 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__V_38_38;
#line 386 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__V_40_40;
#line 387 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 1)));
#line 389 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21;

#line 388 "parse_tree_out.m"
    {
#line 388 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 388 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[0]));
#line 388 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1));
#line 388 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 3) = ((MR_Box) (parse_tree__parse_tree_out__Incls_10));
#line 388 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "parse_tree_out.m"
    }
#line 388 "parse_tree_out.m"
    {
#line 388 "parse_tree_out.m"
      mercury__require__expect_4_p_0(parse_tree__parse_tree_out__V_15_15, (MR_String) "parse_tree.parse_tree_out", (MR_String) "predicate \140parse_tree.parse_tree_out.mercury_output_opt_item_block\'/4", (MR_String) "Incls != []");
    }
#line 389 "parse_tree_out.m"
    {
#line 389 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 389 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 389 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2));
#line 389 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 389 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 389 "parse_tree_out.m"
    }
#line 389 "parse_tree_out.m"
    {
#line 389 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out__V_20_20, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21);
    }
#line 471 "parse_tree_out.m"
    parse_tree__parse_tree_out__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptSectionKind_8, (MR_Integer) 0)));
#line 471 "parse_tree_out.m"
    parse_tree__parse_tree_out__OptFileKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptSectionKind_8, (MR_Integer) 1)));
#line 472 "parse_tree_out.m"
    {
#line 472 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- oms_opt_imported(");
    }
#line 473 "parse_tree_out.m"
    {
#line 473 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_38_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_34);
    }
#line 473 "parse_tree_out.m"
    {
#line 473 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_38_38);
    }
#line 474 "parse_tree_out.m"
    {
#line 474 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_40_40 = parse_tree__file_kind__opt_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__OptFileKind_35);
    }
#line 474 "parse_tree_out.m"
    {
#line 474 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_40_40);
    }
#line 475 "parse_tree_out.m"
    {
#line 475 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 391 "parse_tree_out.m"
    {
#line 391 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 391 "parse_tree_out.m"
      return;
    }
#line 386 "parse_tree_out.m"
  }
#line 71 "parse_tree_out.m"
}

#line 69 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_blocks_4_p_0(
#line 69 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 69 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 69 "parse_tree_out.m"
{
#line 381 "parse_tree_out.m"
  while (MR_TRUE)
#line 381 "parse_tree_out.m"
    {
#line 381 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 381 "parse_tree_out.m"
      {
#line 381 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 381 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "parse_tree_out.m"
          {
#line 381 "parse_tree_out.m"
          }
#line 381 "parse_tree_out.m"
        else
#line 382 "parse_tree_out.m"
          {
#line 382 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__OptItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__OptItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 383 "parse_tree_out.m"
            {
#line 383 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__OptItemBlock_10);
            }
#line 384 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 384 "parse_tree_out.m"
            {
#line 384 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__OptItemBlocks_11;

#line 384 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 384 "parse_tree_out.m"
            }
#line 384 "parse_tree_out.m"
            continue;
#line 382 "parse_tree_out.m"
          }
#line 381 "parse_tree_out.m"
      }
#line 381 "parse_tree_out.m"
      break;
#line 381 "parse_tree_out.m"
    }
#line 69 "parse_tree_out.m"
}

#line 377 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2(
#line 377 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 377 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 377 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 377 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 377 "parse_tree_out.m"
{
#line 377 "parse_tree_out.m"
  {
#line 377 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 377 "parse_tree_out.m"
    {
#line 377 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 377 "parse_tree_out.m"
      return;
    }
#line 377 "parse_tree_out.m"
  }
#line 377 "parse_tree_out.m"
}

#line 376 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1(
#line 376 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 376 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 376 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 376 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 376 "parse_tree_out.m"
{
#line 376 "parse_tree_out.m"
  {
#line 376 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 376 "parse_tree_out.m"
    {
#line 376 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 376 "parse_tree_out.m"
      return;
    }
#line 376 "parse_tree_out.m"
  }
#line 376 "parse_tree_out.m"
}

#line 67 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0(
#line 67 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 67 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__IntItemBlock_6)
#line 67 "parse_tree_out.m"
{
#line 374 "parse_tree_out.m"
  {
#line 374 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 374 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
#line 374 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 0)));
#line 374 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 2)));
#line 374 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 3)));
#line 374 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 4)));
#line 374 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_15_15;
#line 374 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_17_17;
#line 375 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 1)));
#line 376 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16;
#line 377 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18;

#line 376 "parse_tree_out.m"
    {
#line 376 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 376 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
#line 376 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1));
#line 376 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 376 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 376 "parse_tree_out.m"
    }
#line 7584 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 376 "parse_tree_out.m"
    {
#line 376 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_15_15, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 377 "parse_tree_out.m"
    {
#line 377 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 377 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 377 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2));
#line 377 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 377 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 377 "parse_tree_out.m"
    }
#line 377 "parse_tree_out.m"
    {
#line 377 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_17_17, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18);
    }
#line 443 "parse_tree_out.m"
#line 443 "parse_tree_out.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out__IntSectionKind_8)) {
#line 443 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 443 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 443 "parse_tree_out.m"
        {
#line 443 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 0)));
#line 443 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__IntFileKind_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 443 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ImportLocn_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 443 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_58_58;
#line 443 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_60_60;

#line 444 "parse_tree_out.m"
          {
#line 444 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- ims_imported(");
          }
#line 445 "parse_tree_out.m"
          {
#line 445 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_58_58 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_34);
          }
#line 445 "parse_tree_out.m"
          {
#line 445 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_58_58);
          }
#line 446 "parse_tree_out.m"
          {
#line 446 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_60_60 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_35);
          }
#line 446 "parse_tree_out.m"
          {
#line 446 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_60_60);
          }
#line 447 "parse_tree_out.m"
          {
#line 447 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 448 "parse_tree_out.m"
          {
#line 448 "parse_tree_out.m"
            mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0, ((MR_Box) (parse_tree__parse_tree_out__ImportLocn_36)));
          }
#line 449 "parse_tree_out.m"
          {
#line 449 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ").\n");
          }
#line 443 "parse_tree_out.m"
        }
#line 443 "parse_tree_out.m"
        break;
#line 443 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 451 "parse_tree_out.m"
        {
#line 451 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_47_47;
#line 451 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_49_49;
#line 451 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ModuleName_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 0)));
#line 451 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__IntFileKind_68 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 451 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ImportLocn_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);

#line 452 "parse_tree_out.m"
          {
#line 452 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- ims_used(");
          }
#line 453 "parse_tree_out.m"
          {
#line 453 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_47_47 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_67);
          }
#line 453 "parse_tree_out.m"
          {
#line 453 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_47_47);
          }
#line 454 "parse_tree_out.m"
          {
#line 454 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_49_49 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_68);
          }
#line 454 "parse_tree_out.m"
          {
#line 454 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_49_49);
          }
#line 455 "parse_tree_out.m"
          {
#line 455 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 456 "parse_tree_out.m"
          {
#line 456 "parse_tree_out.m"
            mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0, ((MR_Box) (parse_tree__parse_tree_out__ImportLocn_69)));
          }
#line 457 "parse_tree_out.m"
          {
#line 457 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ").\n");
          }
#line 451 "parse_tree_out.m"
        }
#line 443 "parse_tree_out.m"
        break;
#line 443 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 459 "parse_tree_out.m"
        {
#line 459 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_39_39;
#line 459 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_41_41;
#line 459 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 0)));
#line 459 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__IntFileKind_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)));

#line 460 "parse_tree_out.m"
          {
#line 460 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- ims_abstract_imported(");
          }
#line 461 "parse_tree_out.m"
          {
#line 461 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_39_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_70);
          }
#line 461 "parse_tree_out.m"
          {
#line 461 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_39_39);
          }
#line 462 "parse_tree_out.m"
          {
#line 462 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_41_41 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_71);
          }
#line 462 "parse_tree_out.m"
          {
#line 462 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_41_41);
          }
#line 463 "parse_tree_out.m"
          {
#line 463 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ").\n");
          }
#line 459 "parse_tree_out.m"
        }
#line 443 "parse_tree_out.m"
        break;
#line 443 "parse_tree_out.m"
    }
#line 379 "parse_tree_out.m"
    {
#line 379 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 379 "parse_tree_out.m"
      return;
    }
#line 374 "parse_tree_out.m"
  }
#line 67 "parse_tree_out.m"
}

#line 65 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(
#line 65 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 65 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 65 "parse_tree_out.m"
{
#line 369 "parse_tree_out.m"
  while (MR_TRUE)
#line 369 "parse_tree_out.m"
    {
#line 369 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 369 "parse_tree_out.m"
      {
#line 369 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 369 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 369 "parse_tree_out.m"
          {
#line 369 "parse_tree_out.m"
          }
#line 369 "parse_tree_out.m"
        else
#line 370 "parse_tree_out.m"
          {
#line 370 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__IntItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 370 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__IntItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 371 "parse_tree_out.m"
            {
#line 371 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__IntItemBlock_10);
            }
#line 372 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 372 "parse_tree_out.m"
            {
#line 372 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__IntItemBlocks_11;

#line 372 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 372 "parse_tree_out.m"
            }
#line 372 "parse_tree_out.m"
            continue;
#line 370 "parse_tree_out.m"
          }
#line 369 "parse_tree_out.m"
      }
#line 369 "parse_tree_out.m"
      break;
#line 369 "parse_tree_out.m"
    }
#line 65 "parse_tree_out.m"
}

#line 366 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2(
#line 366 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 366 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 366 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 366 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 366 "parse_tree_out.m"
{
#line 366 "parse_tree_out.m"
  {
#line 366 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 366 "parse_tree_out.m"
    {
#line 366 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 366 "parse_tree_out.m"
      return;
    }
#line 366 "parse_tree_out.m"
  }
#line 366 "parse_tree_out.m"
}

#line 365 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1(
#line 365 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 365 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 365 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 365 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 365 "parse_tree_out.m"
{
#line 365 "parse_tree_out.m"
  {
#line 365 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 365 "parse_tree_out.m"
    {
#line 365 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 365 "parse_tree_out.m"
      return;
    }
#line 365 "parse_tree_out.m"
  }
#line 365 "parse_tree_out.m"
}

#line 63 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0(
#line 63 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 63 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__SrcItemBlock_6)
#line 63 "parse_tree_out.m"
{
#line 362 "parse_tree_out.m"
  {
#line 362 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 362 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
#line 362 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SrcSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 0)));
#line 362 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 2)));
#line 362 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 3)));
#line 362 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 4)));
#line 362 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_16_16;
#line 362 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_18_18;
#line 363 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 1)));
#line 365 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17;
#line 366 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19;

#line 428 "parse_tree_out.m"
#line 428 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__SrcSectionKind_8) {
#line 428 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 428 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 434 "parse_tree_out.m"
        {
#line 435 "parse_tree_out.m"
          {
#line 435 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- ams_impl_but_exported_to_submodules.\n");
          }
#line 434 "parse_tree_out.m"
        }
#line 428 "parse_tree_out.m"
        break;
#line 428 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 431 "parse_tree_out.m"
        {
#line 432 "parse_tree_out.m"
          {
#line 432 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
          }
#line 431 "parse_tree_out.m"
        }
#line 428 "parse_tree_out.m"
        break;
#line 428 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 428 "parse_tree_out.m"
        {
#line 429 "parse_tree_out.m"
          {
#line 429 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
          }
#line 428 "parse_tree_out.m"
        }
#line 428 "parse_tree_out.m"
        break;
#line 428 "parse_tree_out.m"
    }
#line 365 "parse_tree_out.m"
    {
#line 365 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 365 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
#line 365 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1));
#line 365 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 365 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 365 "parse_tree_out.m"
    }
#line 8012 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 365 "parse_tree_out.m"
    {
#line 365 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_16_16, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17);
    }
#line 366 "parse_tree_out.m"
    {
#line 366 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 366 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 366 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2));
#line 366 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 366 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 366 "parse_tree_out.m"
    }
#line 366 "parse_tree_out.m"
    {
#line 366 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_18_18, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19);
    }
#line 367 "parse_tree_out.m"
    {
#line 367 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 367 "parse_tree_out.m"
      return;
    }
#line 362 "parse_tree_out.m"
  }
#line 63 "parse_tree_out.m"
}

#line 61 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_blocks_4_p_0(
#line 61 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 61 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 61 "parse_tree_out.m"
{
#line 357 "parse_tree_out.m"
  while (MR_TRUE)
#line 357 "parse_tree_out.m"
    {
#line 357 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 357 "parse_tree_out.m"
      {
#line 357 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 357 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "parse_tree_out.m"
          {
#line 357 "parse_tree_out.m"
          }
#line 357 "parse_tree_out.m"
        else
#line 358 "parse_tree_out.m"
          {
#line 358 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__SrcItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 359 "parse_tree_out.m"
            {
#line 359 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__SrcItemBlock_10);
            }
#line 360 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 360 "parse_tree_out.m"
            {
#line 360 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__SrcItemBlocks_11;

#line 360 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 360 "parse_tree_out.m"
            }
#line 360 "parse_tree_out.m"
            continue;
#line 358 "parse_tree_out.m"
          }
#line 357 "parse_tree_out.m"
      }
#line 357 "parse_tree_out.m"
      break;
#line 357 "parse_tree_out.m"
    }
#line 61 "parse_tree_out.m"
}

#line 352 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2(
#line 352 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 352 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 352 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 352 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 352 "parse_tree_out.m"
{
#line 352 "parse_tree_out.m"
  {
#line 352 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 352 "parse_tree_out.m"
    {
#line 352 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 352 "parse_tree_out.m"
      return;
    }
#line 352 "parse_tree_out.m"
  }
#line 352 "parse_tree_out.m"
}

#line 351 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1(
#line 351 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 351 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 351 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 351 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 351 "parse_tree_out.m"
{
#line 351 "parse_tree_out.m"
  {
#line 351 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 351 "parse_tree_out.m"
    {
#line 351 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 351 "parse_tree_out.m"
      return;
    }
#line 351 "parse_tree_out.m"
  }
#line 351 "parse_tree_out.m"
}

#line 58 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(
#line 58 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 58 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__RawItemBlock_6)
#line 58 "parse_tree_out.m"
{
#line 348 "parse_tree_out.m"
  {
#line 348 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 348 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
#line 348 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 0)));
#line 348 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 2)));
#line 348 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 3)));
#line 348 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 4)));
#line 348 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_16_16;
#line 348 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_18_18;
#line 349 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 1)));
#line 351 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17;
#line 352 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19;

#line 414 "parse_tree_out.m"
#line 414 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__SectionKind_8) {
#line 414 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 414 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 417 "parse_tree_out.m"
        {
#line 418 "parse_tree_out.m"
          {
#line 418 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
          }
#line 417 "parse_tree_out.m"
        }
#line 414 "parse_tree_out.m"
        break;
#line 414 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 414 "parse_tree_out.m"
        {
#line 415 "parse_tree_out.m"
          {
#line 415 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
          }
#line 414 "parse_tree_out.m"
        }
#line 414 "parse_tree_out.m"
        break;
#line 414 "parse_tree_out.m"
    }
#line 351 "parse_tree_out.m"
    {
#line 351 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 351 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
#line 351 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1));
#line 351 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 351 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 351 "parse_tree_out.m"
    }
#line 8255 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 351 "parse_tree_out.m"
    {
#line 351 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_16_16, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17);
    }
#line 352 "parse_tree_out.m"
    {
#line 352 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 352 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 352 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2));
#line 352 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 352 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 352 "parse_tree_out.m"
    }
#line 352 "parse_tree_out.m"
    {
#line 352 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_18_18, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19);
    }
#line 353 "parse_tree_out.m"
    {
#line 353 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 353 "parse_tree_out.m"
      return;
    }
#line 348 "parse_tree_out.m"
  }
#line 58 "parse_tree_out.m"
}

#line 56 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_blocks_4_p_0(
#line 56 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 56 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 56 "parse_tree_out.m"
{
#line 343 "parse_tree_out.m"
  while (MR_TRUE)
#line 343 "parse_tree_out.m"
    {
#line 343 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 343 "parse_tree_out.m"
      {
#line 343 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 343 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "parse_tree_out.m"
          {
#line 343 "parse_tree_out.m"
          }
#line 343 "parse_tree_out.m"
        else
#line 344 "parse_tree_out.m"
          {
#line 344 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__RawItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 344 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__RawItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 345 "parse_tree_out.m"
            {
#line 345 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__RawItemBlock_10);
            }
#line 346 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 346 "parse_tree_out.m"
            {
#line 346 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__RawItemBlocks_11;

#line 346 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 346 "parse_tree_out.m"
            }
#line 346 "parse_tree_out.m"
            continue;
#line 344 "parse_tree_out.m"
          }
#line 343 "parse_tree_out.m"
      }
#line 343 "parse_tree_out.m"
      break;
#line 343 "parse_tree_out.m"
    }
#line 56 "parse_tree_out.m"
}

#line 266 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1(
#line 266 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 266 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 266 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 266 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
#line 266 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_4)
#line 266 "parse_tree_out.m"
{
#line 266 "parse_tree_out.m"
  {
#line 266 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 266 "parse_tree_out.m"
    {
#line 266 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_2));
#line 266 "parse_tree_out.m"
      return;
    }
#line 266 "parse_tree_out.m"
  }
#line 266 "parse_tree_out.m"
}

#line 51 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0(
#line 51 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 51 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__AugCompUnit_6)
#line 51 "parse_tree_out.m"
{
#line 257 "parse_tree_out.m"
  {
#line 257 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 257 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 0)));
#line 257 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleVersionNumbers_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 2)));
#line 257 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 3)));
#line 257 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__DirectIntItemBlocks_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 4)));
#line 257 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IndirectIntItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 5)));
#line 257 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__OptItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 6)));
#line 257 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntForOptItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 7)));
#line 258 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 1)));
#line 266 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_26_26;

#line 262 "parse_tree_out.m"
    {
#line 262 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 263 "parse_tree_out.m"
    {
#line 263 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 264 "parse_tree_out.m"
    {
#line 264 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 265 "parse_tree_out.m"
    {
#line 265 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The module version numbers.\n");
    }
#line 266 "parse_tree_out.m"
    {
#line 266 "parse_tree_out.m"
      mercury__map__foldl_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[0], parse_tree__parse_tree_out__ModuleVersionNumbers_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_26_26);
    }
#line 268 "parse_tree_out.m"
    {
#line 268 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The src item blocks.\n");
    }
#line 269 "parse_tree_out.m"
    {
#line 269 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_src_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SrcItemBlocks_11);
    }
#line 270 "parse_tree_out.m"
    {
#line 270 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The direct interface item blocks.\n");
    }
#line 271 "parse_tree_out.m"
    {
#line 271 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__DirectIntItemBlocks_12);
    }
#line 272 "parse_tree_out.m"
    {
#line 272 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The indirect interface item blocks.\n");
    }
#line 273 "parse_tree_out.m"
    {
#line 273 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__IndirectIntItemBlocks_13);
    }
#line 274 "parse_tree_out.m"
    {
#line 274 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The optimization item blocks.\n");
    }
#line 275 "parse_tree_out.m"
    {
#line 275 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_opt_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__OptItemBlocks_14);
    }
#line 276 "parse_tree_out.m"
    {
#line 276 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The interface item blocks for optimization.\n");
    }
#line 277 "parse_tree_out.m"
    {
#line 277 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_int_for_opt_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__IntForOptItemBlocks_15);
#line 277 "parse_tree_out.m"
      return;
    }
#line 257 "parse_tree_out.m"
  }
#line 51 "parse_tree_out.m"
}

#line 48 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_compilation_unit_4_p_0(
#line 48 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 48 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__CompUnit_6)
#line 48 "parse_tree_out.m"
{
#line 250 "parse_tree_out.m"
  {
#line 250 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 250 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__CompUnit_6, (MR_Integer) 0)));
#line 250 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ItemBlocks_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__CompUnit_6, (MR_Integer) 2)));
#line 251 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__CompUnit_6, (MR_Integer) 1)));

#line 252 "parse_tree_out.m"
    {
#line 252 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 253 "parse_tree_out.m"
    {
#line 253 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 254 "parse_tree_out.m"
    {
#line 254 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 255 "parse_tree_out.m"
    {
#line 255 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_raw_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemBlocks_10);
#line 255 "parse_tree_out.m"
      return;
    }
#line 250 "parse_tree_out.m"
  }
#line 48 "parse_tree_out.m"
}

#line 247 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1(
#line 247 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 247 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 247 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 247 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 247 "parse_tree_out.m"
{
#line 247 "parse_tree_out.m"
  {
#line 247 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 247 "parse_tree_out.m"
    {
#line 247 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 247 "parse_tree_out.m"
      return;
    }
#line 247 "parse_tree_out.m"
  }
#line 247 "parse_tree_out.m"
}

#line 45 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(
#line 45 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 45 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ParseTree_6)
#line 45 "parse_tree_out.m"
{
#line 241 "parse_tree_out.m"
  {
#line 241 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 241 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 0)));
#line 241 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Use_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 3)));
#line 241 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 4)));
#line 241 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_20_20;
#line 242 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___OptFileKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 1)));
#line 242 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 2)));
#line 247 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21;

#line 244 "parse_tree_out.m"
    {
#line 244 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 245 "parse_tree_out.m"
    {
#line 245 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 246 "parse_tree_out.m"
    {
#line 246 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 247 "parse_tree_out.m"
    {
#line 247 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 247 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0]));
#line 247 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1));
#line 247 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 247 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 247 "parse_tree_out.m"
    }
#line 247 "parse_tree_out.m"
    {
#line 247 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out__V_20_20, parse_tree__parse_tree_out__Use_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21);
    }
#line 248 "parse_tree_out.m"
    {
#line 248 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 248 "parse_tree_out.m"
      return;
    }
#line 241 "parse_tree_out.m"
  }
#line 45 "parse_tree_out.m"
}

#line 42 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(
#line 42 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 42 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ParseTree_6)
#line 42 "parse_tree_out.m"
{
#line 205 "parse_tree_out.m"
  {
#line 205 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 205 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 0)));
#line 205 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 2)));
#line 205 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__MaybeVersionNumbers_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 3)));
#line 205 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntIncls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 4)));
#line 205 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ImpIncls_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 5)));
#line 205 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntAvails_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 6)));
#line 205 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ImpAvails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 7)));
#line 205 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 8)));
#line 205 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ImpItems_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 9)));
#line 206 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___IntFileKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 1)));

#line 209 "parse_tree_out.m"
    {
#line 209 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 210 "parse_tree_out.m"
    {
#line 210 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 211 "parse_tree_out.m"
    {
#line 211 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 214 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__MaybeVersionNumbers_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 213 "parse_tree_out.m"
      {
#line 213 "parse_tree_out.m"
      }
#line 214 "parse_tree_out.m"
    else
#line 215 "parse_tree_out.m"
      {
#line 215 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__VersionNumbers_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeVersionNumbers_11, (MR_Integer) 0)));

#line 216 "parse_tree_out.m"
        {
#line 216 "parse_tree_out.m"
          parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(parse_tree__parse_tree_out__ModuleName_8, parse_tree__parse_tree_out__VersionNumbers_18);
        }
#line 215 "parse_tree_out.m"
      }
#line 219 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__IntIncls_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 219 "parse_tree_out.m"
      {
#line 220 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__IntAvails_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 221 "parse_tree_out.m"
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__IntItems_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "parse_tree_out.m"
      }
#line 224 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 224 "parse_tree_out.m"
      {
#line 224 "parse_tree_out.m"
      }
#line 224 "parse_tree_out.m"
    else
#line 226 "parse_tree_out.m"
      {
#line 226 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__IntItemBlock_19;

#line 225 "parse_tree_out.m"
        {
#line 225 "parse_tree_out.m"
          parse_tree__parse_tree_out__IntItemBlock_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 225 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 0) = ((MR_Box) ((MR_Integer) 0));
#line 225 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 1) = ((MR_Box) (parse_tree__parse_tree_out__ModuleContext_10));
#line 225 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 2) = ((MR_Box) (parse_tree__parse_tree_out__IntIncls_12));
#line 225 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 3) = ((MR_Box) (parse_tree__parse_tree_out__IntAvails_14));
#line 225 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 4) = ((MR_Box) (parse_tree__parse_tree_out__IntItems_16));
#line 225 "parse_tree_out.m"
        }
#line 227 "parse_tree_out.m"
        {
#line 227 "parse_tree_out.m"
          parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__IntItemBlock_19);
        }
#line 226 "parse_tree_out.m"
      }
#line 230 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__ImpIncls_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 230 "parse_tree_out.m"
      {
#line 231 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__ImpAvails_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 232 "parse_tree_out.m"
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__ImpItems_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "parse_tree_out.m"
      }
#line 235 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 235 "parse_tree_out.m"
      {
#line 235 "parse_tree_out.m"
      }
#line 235 "parse_tree_out.m"
    else
#line 237 "parse_tree_out.m"
      {
#line 237 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__ImpItemBlock_20;

#line 236 "parse_tree_out.m"
        {
#line 236 "parse_tree_out.m"
          parse_tree__parse_tree_out__ImpItemBlock_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 236 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 0) = ((MR_Box) ((MR_Integer) 1));
#line 236 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__ModuleContext_10));
#line 236 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 2) = ((MR_Box) (parse_tree__parse_tree_out__ImpIncls_13));
#line 236 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 3) = ((MR_Box) (parse_tree__parse_tree_out__ImpAvails_15));
#line 236 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 4) = ((MR_Box) (parse_tree__parse_tree_out__ImpItems_17));
#line 236 "parse_tree_out.m"
        }
#line 238 "parse_tree_out.m"
        {
#line 238 "parse_tree_out.m"
          parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ImpItemBlock_20);
#line 238 "parse_tree_out.m"
          return;
        }
#line 237 "parse_tree_out.m"
      }
#line 205 "parse_tree_out.m"
  }
#line 42 "parse_tree_out.m"
}

#line 39 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(
#line 39 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 39 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ParseTree_6)
#line 39 "parse_tree_out.m"
{
#line 194 "parse_tree_out.m"
  {
#line 194 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 194 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 0)));
#line 194 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleComponentsCord_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 2)));
#line 194 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleComponents_11;
#line 195 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 1)));

#line 196 "parse_tree_out.m"
    {
#line 196 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 197 "parse_tree_out.m"
    {
#line 197 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 198 "parse_tree_out.m"
    {
#line 198 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 199 "parse_tree_out.m"
    {
#line 199 "parse_tree_out.m"
      parse_tree__parse_tree_out__ModuleComponents_11 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__parse_tree_out__ModuleComponentsCord_10);
    }
#line 200 "parse_tree_out.m"
    {
#line 200 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(parse_tree__parse_tree_out__Info_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out__ModuleComponents_11);
    }
#line 201 "parse_tree_out.m"
    {
#line 201 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- end_module ");
    }
#line 202 "parse_tree_out.m"
    {
#line 202 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 203 "parse_tree_out.m"
    {
#line 203 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 203 "parse_tree_out.m"
      return;
    }
#line 194 "parse_tree_out.m"
  }
#line 39 "parse_tree_out.m"
}

#line 34 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__convert_to_mercury_opt_5_p_0(
#line 34 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Globals_6,
#line 34 "parse_tree_out.m"
  MR_String parse_tree__parse_tree_out__OutputFileName_7,
#line 34 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ParseTreeOpt_8)
#line 34 "parse_tree_out.m"
{
#line 145 "parse_tree_out.m"
  {
#line 145 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 145 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Res_27;

#line 157 "parse_tree_out.m"
    {
#line 157 "parse_tree_out.m"
      mercury__io__open_output_4_p_0(parse_tree__parse_tree_out__OutputFileName_7, &parse_tree__parse_tree_out__Res_27);
    }
#line 185 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Res_27)) == (MR_mktag((MR_Integer) 1))))
#line 186 "parse_tree_out.m"
      {
#line 187 "parse_tree_out.m"
        {
#line 187 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
        }
#line 188 "parse_tree_out.m"
        {
#line 188 "parse_tree_out.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
        }
#line 189 "parse_tree_out.m"
        {
#line 189 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
#line 189 "parse_tree_out.m"
          return;
        }
#line 186 "parse_tree_out.m"
      }
#line 185 "parse_tree_out.m"
    else
#line 159 "parse_tree_out.m"
      {
#line 159 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Res_27, (MR_Integer) 0)));
#line 159 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Verbose_29;
#line 159 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Info_31;

#line 160 "parse_tree_out.m"
        {
#line 160 "parse_tree_out.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 45, &parse_tree__parse_tree_out__Verbose_29);
        }
#line 174 "parse_tree_out.m"
        {
#line 174 "parse_tree_out.m"
          parse_tree__parse_tree_out__Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 0, (MR_Integer) 0);
        }
#line 8966 "parse_tree.parse_tree_out.c"
#line 8967 "parse_tree.parse_tree_out.c"
        switch (parse_tree__parse_tree_out__Verbose_29) {
#line 8969 "parse_tree.parse_tree_out.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 8971 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 0:
#line 8973 "parse_tree.parse_tree_out.c"
            {
#line 8975 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_30;
#line 177 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_32_32;

#line 170 "parse_tree_out.m"
              {
#line 170 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_30);
              }
#line 176 "parse_tree_out.m"
              {
#line 176 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeOpt_8);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_30, &parse_tree__parse_tree_out__V_32_32);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
#line 178 "parse_tree_out.m"
                return;
              }
#line 9002 "parse_tree.parse_tree_out.c"
            }
#line 9004 "parse_tree.parse_tree_out.c"
            break;
#line 9006 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 1:
#line 9008 "parse_tree.parse_tree_out.c"
            {
#line 9010 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_57;
#line 177 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_56_56;

#line 163 "parse_tree_out.m"
              {
#line 163 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
              }
#line 164 "parse_tree_out.m"
              {
#line 164 "parse_tree_out.m"
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
              }
#line 165 "parse_tree_out.m"
              {
#line 165 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "...");
              }
#line 166 "parse_tree_out.m"
              {
#line 166 "parse_tree_out.m"
                mercury__io__flush_output_2_p_0();
              }
#line 170 "parse_tree_out.m"
              {
#line 170 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_57);
              }
#line 176 "parse_tree_out.m"
              {
#line 176 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeOpt_8);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_57, &parse_tree__parse_tree_out__V_56_56);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
#line 181 "parse_tree_out.m"
              {
#line 181 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) " done\n");
#line 181 "parse_tree_out.m"
                return;
              }
#line 9062 "parse_tree.parse_tree_out.c"
            }
#line 9064 "parse_tree.parse_tree_out.c"
            break;
#line 9066 "parse_tree.parse_tree_out.c"
        }
#line 159 "parse_tree_out.m"
      }
#line 145 "parse_tree_out.m"
  }
#line 34 "parse_tree_out.m"
}

#line 32 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__convert_to_mercury_int_5_p_0(
#line 32 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Globals_6,
#line 32 "parse_tree_out.m"
  MR_String parse_tree__parse_tree_out__OutputFileName_7,
#line 32 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ParseTreeInt_8)
#line 32 "parse_tree_out.m"
{
#line 141 "parse_tree_out.m"
  {
#line 141 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 141 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Res_27;

#line 157 "parse_tree_out.m"
    {
#line 157 "parse_tree_out.m"
      mercury__io__open_output_4_p_0(parse_tree__parse_tree_out__OutputFileName_7, &parse_tree__parse_tree_out__Res_27);
    }
#line 185 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Res_27)) == (MR_mktag((MR_Integer) 1))))
#line 186 "parse_tree_out.m"
      {
#line 187 "parse_tree_out.m"
        {
#line 187 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
        }
#line 188 "parse_tree_out.m"
        {
#line 188 "parse_tree_out.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
        }
#line 189 "parse_tree_out.m"
        {
#line 189 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
#line 189 "parse_tree_out.m"
          return;
        }
#line 186 "parse_tree_out.m"
      }
#line 185 "parse_tree_out.m"
    else
#line 159 "parse_tree_out.m"
      {
#line 159 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Res_27, (MR_Integer) 0)));
#line 159 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Verbose_29;
#line 159 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Info_31;

#line 160 "parse_tree_out.m"
        {
#line 160 "parse_tree_out.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 45, &parse_tree__parse_tree_out__Verbose_29);
        }
#line 174 "parse_tree_out.m"
        {
#line 174 "parse_tree_out.m"
          parse_tree__parse_tree_out__Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 0, (MR_Integer) 0);
        }
#line 9142 "parse_tree.parse_tree_out.c"
#line 9143 "parse_tree.parse_tree_out.c"
        switch (parse_tree__parse_tree_out__Verbose_29) {
#line 9145 "parse_tree.parse_tree_out.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 9147 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 0:
#line 9149 "parse_tree.parse_tree_out.c"
            {
#line 9151 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_30;
#line 177 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_32_32;

#line 170 "parse_tree_out.m"
              {
#line 170 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_30);
              }
#line 176 "parse_tree_out.m"
              {
#line 176 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeInt_8);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_30, &parse_tree__parse_tree_out__V_32_32);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
#line 178 "parse_tree_out.m"
                return;
              }
#line 9178 "parse_tree.parse_tree_out.c"
            }
#line 9180 "parse_tree.parse_tree_out.c"
            break;
#line 9182 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 1:
#line 9184 "parse_tree.parse_tree_out.c"
            {
#line 9186 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_57;
#line 177 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_56_56;

#line 163 "parse_tree_out.m"
              {
#line 163 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
              }
#line 164 "parse_tree_out.m"
              {
#line 164 "parse_tree_out.m"
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
              }
#line 165 "parse_tree_out.m"
              {
#line 165 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "...");
              }
#line 166 "parse_tree_out.m"
              {
#line 166 "parse_tree_out.m"
                mercury__io__flush_output_2_p_0();
              }
#line 170 "parse_tree_out.m"
              {
#line 170 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_57);
              }
#line 176 "parse_tree_out.m"
              {
#line 176 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeInt_8);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_57, &parse_tree__parse_tree_out__V_56_56);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
#line 181 "parse_tree_out.m"
              {
#line 181 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) " done\n");
#line 181 "parse_tree_out.m"
                return;
              }
#line 9238 "parse_tree.parse_tree_out.c"
            }
#line 9240 "parse_tree.parse_tree_out.c"
            break;
#line 9242 "parse_tree.parse_tree_out.c"
        }
#line 159 "parse_tree_out.m"
      }
#line 141 "parse_tree_out.m"
  }
#line 32 "parse_tree_out.m"
}

#line 30 "parse_tree_out.m"
void MR_CALL 
parse_tree__parse_tree_out__convert_to_mercury_src_5_p_0(
#line 30 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Globals_6,
#line 30 "parse_tree_out.m"
  MR_String parse_tree__parse_tree_out__OutputFileName_7,
#line 30 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ParseTreeSrc_8)
#line 30 "parse_tree_out.m"
{
#line 137 "parse_tree_out.m"
  {
#line 137 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 137 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Res_27;

#line 157 "parse_tree_out.m"
    {
#line 157 "parse_tree_out.m"
      mercury__io__open_output_4_p_0(parse_tree__parse_tree_out__OutputFileName_7, &parse_tree__parse_tree_out__Res_27);
    }
#line 185 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Res_27)) == (MR_mktag((MR_Integer) 1))))
#line 186 "parse_tree_out.m"
      {
#line 187 "parse_tree_out.m"
        {
#line 187 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
        }
#line 188 "parse_tree_out.m"
        {
#line 188 "parse_tree_out.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
        }
#line 189 "parse_tree_out.m"
        {
#line 189 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
#line 189 "parse_tree_out.m"
          return;
        }
#line 186 "parse_tree_out.m"
      }
#line 185 "parse_tree_out.m"
    else
#line 159 "parse_tree_out.m"
      {
#line 159 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Res_27, (MR_Integer) 0)));
#line 159 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Verbose_29;
#line 159 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Info_31;

#line 160 "parse_tree_out.m"
        {
#line 160 "parse_tree_out.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 45, &parse_tree__parse_tree_out__Verbose_29);
        }
#line 174 "parse_tree_out.m"
        {
#line 174 "parse_tree_out.m"
          parse_tree__parse_tree_out__Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 0, (MR_Integer) 0);
        }
#line 9318 "parse_tree.parse_tree_out.c"
#line 9319 "parse_tree.parse_tree_out.c"
        switch (parse_tree__parse_tree_out__Verbose_29) {
#line 9321 "parse_tree.parse_tree_out.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 9323 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 0:
#line 9325 "parse_tree.parse_tree_out.c"
            {
#line 9327 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_30;
#line 177 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_32_32;

#line 170 "parse_tree_out.m"
              {
#line 170 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_30);
              }
#line 176 "parse_tree_out.m"
              {
#line 176 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeSrc_8);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_30, &parse_tree__parse_tree_out__V_32_32);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
#line 178 "parse_tree_out.m"
                return;
              }
#line 9354 "parse_tree.parse_tree_out.c"
            }
#line 9356 "parse_tree.parse_tree_out.c"
            break;
#line 9358 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 1:
#line 9360 "parse_tree.parse_tree_out.c"
            {
#line 9362 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_57;
#line 177 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_56_56;

#line 163 "parse_tree_out.m"
              {
#line 163 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
              }
#line 164 "parse_tree_out.m"
              {
#line 164 "parse_tree_out.m"
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
              }
#line 165 "parse_tree_out.m"
              {
#line 165 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "...");
              }
#line 166 "parse_tree_out.m"
              {
#line 166 "parse_tree_out.m"
                mercury__io__flush_output_2_p_0();
              }
#line 170 "parse_tree_out.m"
              {
#line 170 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_57);
              }
#line 176 "parse_tree_out.m"
              {
#line 176 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeSrc_8);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_57, &parse_tree__parse_tree_out__V_56_56);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
#line 181 "parse_tree_out.m"
              {
#line 181 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) " done\n");
#line 181 "parse_tree_out.m"
                return;
              }
#line 9414 "parse_tree.parse_tree_out.c"
            }
#line 9416 "parse_tree.parse_tree_out.c"
            break;
#line 9418 "parse_tree.parse_tree_out.c"
        }
#line 159 "parse_tree_out.m"
      }
#line 137 "parse_tree_out.m"
  }
#line 30 "parse_tree_out.m"
}

void mercury__parse_tree__parse_tree_out__init(void)
{
}

void mercury__parse_tree__parse_tree_out__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_tree_out__parse_tree__parse_tree_out__type_ctor_info_output_parse_tree_1);
}

void mercury__parse_tree__parse_tree_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_tree_out. */
