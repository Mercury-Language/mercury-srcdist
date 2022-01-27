/*
** Automatically generated from `parse_tree_out.m'
** by the Mercury compiler,
** version 2015-10-27
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




#line 109 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

#line 112 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 115 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 118 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 121 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 124 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 127 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 130 "parse_tree.parse_tree_out.c"
static const MR_VA_PseudoTypeInfo_Struct4 parse_tree__parse_tree_out____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 133 "parse_tree.parse_tree_out.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001(
#line 136 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 138 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 140 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3);

#line 143 "parse_tree.parse_tree_out.c"
static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001(
#line 146 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 148 "parse_tree.parse_tree_out.c"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_2,
#line 150 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
#line 152 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_4);

#line 150 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 150 "parse_tree_out.m"
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

#line 150 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 150 "parse_tree_out.m"
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

#line 1118 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(
#line 1118 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemPromise_6);

#line 1231 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1231__1_6_p_0(
#line 1231 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1231 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1231 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1231 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__4_31,
#line 1231 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__HeadVar__5_32,
#line 1231 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_33);

#line 1229 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1229__1_6_p_0(
#line 1229 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1229 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1229 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1229 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__4_26,
#line 1229 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__HeadVar__5_27,
#line 1229 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_28);

#line 1173 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1173__1_4_p_0(
#line 1173 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarSet_13,
#line 1173 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_32);

#line 1049 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1049__1_2_f_0(
#line 1049 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_14,
#line 1049 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_24);

#line 1019 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__builtin_inst_name__1019__1_1_f_0(
#line 1019 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_12);

#line 993 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__993__1_2_f_0(
#line 993 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_13,
#line 993 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_31);

#line 985 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__985__1_2_f_0(
#line 985 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_13,
#line 985 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_53);

#line 941 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__941__1_3_p_0(
#line 941 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_11);

#line 599 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__599__1_2_f_0(
#line 599 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_12,
#line 599 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_41);

#line 389 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__389__1_2_p_0(
#line 389 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Incls_10,
#line 389 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_19);

#line 150 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_6,
#line 150 "parse_tree_out.m"
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

#line 150 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_5,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 150 "parse_tree_out.m"
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

#line 1240 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__output_class_method_4_p_0(
#line 1240 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Lang_5,
#line 1240 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Method_6);

#line 1231 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2(
#line 1231 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1231 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1231 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1231 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1229 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1(
#line 1229 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1229 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1229 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1229 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1224 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(
#line 1224 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1224 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1224 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1224 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3,
#line 1224 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_0_11,
#line 1224 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__STATE_VARIABLE_U_12);

#line 1238 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4(
#line 1238 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1238 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1238 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1238 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1219 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3(
#line 1219 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1219 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1219 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1219 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1207 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2(
#line 1207 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1207 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1207 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1207 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1173 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1(
#line 1173 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1173 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1173 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1173 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 1160 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(
#line 1160 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1160 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemTypeClass_6);

#line 1058 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(
#line 1058 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1058 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemPredDecl_6);

#line 1049 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1(
#line 1049 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1049 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

#line 1026 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(
#line 1026 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1026 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemModeDefn_6);

#line 993 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_3(
#line 993 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 993 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

#line 985 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2(
#line 985 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 985 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

#line 1019 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1(
#line 1019 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1019 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

#line 965 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(
#line 965 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 965 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemInstDefn_6);

#line 948 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(
#line 948 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Assertion_4);

#line 941 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1(
#line 941 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 941 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 941 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 941 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 937 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(
#line 937 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Ctors_4);

#line 919 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(
#line 919 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 919 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2);

#line 836 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(
#line 836 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarSet_1,
#line 836 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__First_2,
#line 836 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

#line 822 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(
#line 822 "parse_tree_out.m"
  MR_Integer parse_tree__parse_tree_out__NumBits_4);

#line 684 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2(
#line 684 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 684 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 684 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 684 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 599 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1(
#line 599 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 599 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

#line 591 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(
#line 591 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 591 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemTypeDefn_6);

#line 537 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_4_p_0(
#line 537 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 537 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2);

#line 516 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(
#line 516 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 516 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Use_6);

#line 502 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(
#line 502 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 502 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Avail_6);

#line 493 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(
#line 493 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 493 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemInclude_6);

#line 307 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2(
#line 307 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 307 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 307 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 307 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 305 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1(
#line 305 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 305 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 305 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 305 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 294 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(
#line 294 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 294 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__MaybePrevSectionKind_2,
#line 294 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

#line 280 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(
#line 280 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ModuleName_5,
#line 280 "parse_tree_out.m"
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

#line 813 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0_1(
#line 813 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 813 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 813 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 813 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 404 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2(
#line 404 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 404 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 404 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 404 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 403 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1(
#line 403 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 403 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 403 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 403 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 390 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2(
#line 390 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 390 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 390 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 390 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 389 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1(
#line 389 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg);

#line 378 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2(
#line 378 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 378 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 378 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 378 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 377 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1(
#line 377 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 377 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 377 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 377 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 367 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2(
#line 367 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 367 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 367 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 367 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 366 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1(
#line 366 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 366 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 366 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 366 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 353 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2(
#line 353 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 353 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 353 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 353 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 352 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1(
#line 352 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 352 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 352 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 352 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

#line 267 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1(
#line 267 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 267 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 267 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 267 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
#line 267 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_4);

#line 248 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1(
#line 248 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 248 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 248 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 248 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[8][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[8][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[6][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[5][6];

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_7[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_8[3][9];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_9[1][8];


#line 871 "parse_tree_out.m"
/* sealed */ struct parse_tree__parse_tree_out__vector_common_type_5_0_s {
#line 871 "parse_tree_out.m"
  const MR_String parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0;
#line 871 "parse_tree_out.m"
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



#line 1161 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0
  }
};

#line 1169 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1177 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1185 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1193 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1201 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1209 "parse_tree.parse_tree_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1217 "parse_tree.parse_tree_out.c"
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

#line 1229 "parse_tree.parse_tree_out.c"
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

#line 1246 "parse_tree.parse_tree_out.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001(
#line 1249 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1251 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1253 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3)
#line 1255 "parse_tree.parse_tree_out.c"
{
#line 1257 "parse_tree.parse_tree_out.c"
  {
#line 1259 "parse_tree.parse_tree_out.c"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 1262 "parse_tree.parse_tree_out.c"
    {
#line 1264 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out__succeeded = parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_3));
    }
#line 1267 "parse_tree.parse_tree_out.c"
    return parse_tree__parse_tree_out__succeeded;
#line 1269 "parse_tree.parse_tree_out.c"
  }
#line 1271 "parse_tree.parse_tree_out.c"
}

#line 1274 "parse_tree.parse_tree_out.c"
static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001(
#line 1277 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1279 "parse_tree.parse_tree_out.c"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_2,
#line 1281 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
#line 1283 "parse_tree.parse_tree_out.c"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_4)
#line 1285 "parse_tree.parse_tree_out.c"
{
#line 1287 "parse_tree.parse_tree_out.c"
  {
#line 1289 "parse_tree.parse_tree_out.c"
    MR_Word parse_tree__parse_tree_out__conv0_HeadVar__1_1;

#line 1292 "parse_tree.parse_tree_out.c"
    {
#line 1294 "parse_tree.parse_tree_out.c"
      parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), &parse_tree__parse_tree_out__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_3), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_4));
    }
#line 1297 "parse_tree.parse_tree_out.c"
    *parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv0_HeadVar__1_1));
#line 1299 "parse_tree.parse_tree_out.c"
  }
#line 1301 "parse_tree.parse_tree_out.c"
}

#line 150 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 150 "parse_tree_out.m"
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
#line 150 "parse_tree_out.m"
{
#line 150 "parse_tree_out.m"
  {
#line 150 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 150 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar1_4 = parse_tree__parse_tree_out__HeadVar__2_2;
#line 150 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar2_5 = parse_tree__parse_tree_out__HeadVar__3_3;

#line 150 "parse_tree_out.m"
    {
#line 150 "parse_tree_out.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__parse_tree_out__HeadVar__1_1, (MR_Word) parse_tree__parse_tree_out__Cast_HeadVar1_4, (MR_Word) parse_tree__parse_tree_out__Cast_HeadVar2_5);
#line 150 "parse_tree_out.m"
      return;
    }
#line 150 "parse_tree_out.m"
  }
#line 150 "parse_tree_out.m"
}

#line 150 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 150 "parse_tree_out.m"
{
#line 150 "parse_tree_out.m"
  {
#line 150 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 150 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar1_3 = parse_tree__parse_tree_out__HeadVar__1_1;
#line 150 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar2_4 = parse_tree__parse_tree_out__HeadVar__2_2;

#line 150 "parse_tree_out.m"
    {
#line 150 "parse_tree_out.m"
      return parse_tree__parse_tree_out__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__parse_tree_out__Cast_HeadVar1_3, (MR_Word) parse_tree__parse_tree_out__Cast_HeadVar2_4);
    }
#line 150 "parse_tree_out.m"
    return parse_tree__parse_tree_out__succeeded;
#line 150 "parse_tree_out.m"
  }
#line 150 "parse_tree_out.m"
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

#line 1118 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(
#line 1118 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemPromise_6)
#line 1118 "parse_tree_out.m"
{
#line 1121 "parse_tree_out.m"
  {
#line 1121 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1121 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__PromiseType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 0)));
#line 1121 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 1)));
#line 1121 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 2)));
#line 1121 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__UnivVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 3)));
#line 1121 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Goal_17;
#line 1122 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 4)));
#line 1122 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 5)));

#line 1138 "parse_tree_out.m"
#line 1138 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__PromiseType_8) {
#line 1138 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1138 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 1138 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 1138 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 1142 "parse_tree_out.m"
        {
#line 1146 "parse_tree_out.m"
          {
#line 1146 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- all [");
          }
#line 1148 "parse_tree_out.m"
          {
#line 1148 "parse_tree_out.m"
            parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out__VarSet_10, (MR_Integer) 0, parse_tree__parse_tree_out__UnivVars_11);
          }
#line 1149 "parse_tree_out.m"
          {
#line 1149 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
#line 1150 "parse_tree_out.m"
          {
#line 1150 "parse_tree_out.m"
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0((MR_Integer) 1);
          }
#line 1151 "parse_tree_out.m"
          {
#line 1151 "parse_tree_out.m"
            parse_tree__prog_out__write_promise_type_3_p_0(parse_tree__parse_tree_out__PromiseType_8);
          }
#line 1152 "parse_tree_out.m"
          parse_tree__parse_tree_out__Goal_17 = parse_tree__parse_tree_out__Goal0_9;
#line 1142 "parse_tree_out.m"
        }
#line 1138 "parse_tree_out.m"
        break;
#line 1138 "parse_tree_out.m"
      case (MR_Integer) 3:
#line 1126 "parse_tree_out.m"
        {
#line 1130 "parse_tree_out.m"
          {
#line 1130 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- promise ");
          }
#line 1134 "parse_tree_out.m"
          if ((parse_tree__parse_tree_out__UnivVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "parse_tree_out.m"
            parse_tree__parse_tree_out__Goal_17 = parse_tree__parse_tree_out__Goal0_9;
#line 1134 "parse_tree_out.m"
          else
#line 1132 "parse_tree_out.m"
            {
#line 1132 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_30_30;

#line 1133 "parse_tree_out.m"
              {
#line 1133 "parse_tree_out.m"
                parse_tree__parse_tree_out__V_30_30 = parse_tree__prog_item__goal_get_context_1_f_0(parse_tree__parse_tree_out__Goal0_9);
              }
#line 1133 "parse_tree_out.m"
              {
#line 1133 "parse_tree_out.m"
                parse_tree__parse_tree_out__Goal_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "parse_tree_out.m"
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1133 "parse_tree_out.m"
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__V_30_30));
#line 1133 "parse_tree_out.m"
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 2) = ((MR_Box) (parse_tree__parse_tree_out__UnivVars_11));
#line 1133 "parse_tree_out.m"
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 3) = ((MR_Box) (parse_tree__parse_tree_out__Goal0_9));
#line 1133 "parse_tree_out.m"
              }
#line 1132 "parse_tree_out.m"
            }
#line 1126 "parse_tree_out.m"
        }
#line 1138 "parse_tree_out.m"
        break;
#line 1138 "parse_tree_out.m"
    }
#line 1154 "parse_tree_out.m"
    {
#line 1154 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0((MR_Integer) 1);
    }
#line 1155 "parse_tree_out.m"
    {
#line 1155 "parse_tree_out.m"
      parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out__VarSet_10, (MR_Integer) 1, parse_tree__parse_tree_out__Goal_17);
    }
#line 1156 "parse_tree_out.m"
    {
#line 1156 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1156 "parse_tree_out.m"
      return;
    }
#line 1121 "parse_tree_out.m"
  }
#line 1118 "parse_tree_out.m"
}

#line 1231 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1231__1_6_p_0(
#line 1231 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1231 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1231 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1231 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__4_31,
#line 1231 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__HeadVar__5_32,
#line 1231 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_33)
#line 1231 "parse_tree_out.m"
{
#line 1231 "parse_tree_out.m"
  {
#line 1231 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 1231 "parse_tree_out.m"
    {
#line 1231 "parse_tree_out.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out__TypeClassInfo_for_output_25, parse_tree__parse_tree_out__TypeVarSet_6, parse_tree__parse_tree_out__VarNamePrint_7, parse_tree__parse_tree_out__HeadVar__4_31, parse_tree__parse_tree_out__HeadVar__5_32, parse_tree__parse_tree_out__HeadVar__6_33);
#line 1231 "parse_tree_out.m"
      return;
    }
#line 1231 "parse_tree_out.m"
  }
#line 1231 "parse_tree_out.m"
}

#line 1229 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1229__1_6_p_0(
#line 1229 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1229 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1229 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1229 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__4_26,
#line 1229 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__HeadVar__5_27,
#line 1229 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_28)
#line 1229 "parse_tree_out.m"
{
#line 1229 "parse_tree_out.m"
  {
#line 1229 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 1229 "parse_tree_out.m"
    {
#line 1229 "parse_tree_out.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out__TypeClassInfo_for_output_25, parse_tree__parse_tree_out__TypeVarSet_6, parse_tree__parse_tree_out__VarNamePrint_7, parse_tree__parse_tree_out__HeadVar__4_26, parse_tree__parse_tree_out__HeadVar__5_27, parse_tree__parse_tree_out__HeadVar__6_28);
#line 1229 "parse_tree_out.m"
      return;
    }
#line 1229 "parse_tree_out.m"
  }
#line 1229 "parse_tree_out.m"
}

#line 1173 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1173__1_4_p_0(
#line 1173 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarSet_13,
#line 1173 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_32)
#line 1173 "parse_tree_out.m"
{
#line 1173 "parse_tree_out.m"
  {
#line 1173 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1173 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__VarName_19;

#line 1175 "parse_tree_out.m"
    {
#line 1175 "parse_tree_out.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out__VarSet_13, parse_tree__parse_tree_out__LambdaHeadVar__1_32, &parse_tree__parse_tree_out__VarName_19);
    }
#line 1176 "parse_tree_out.m"
    {
#line 1176 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__VarName_19);
#line 1176 "parse_tree_out.m"
      return;
    }
#line 1173 "parse_tree_out.m"
  }
#line 1173 "parse_tree_out.m"
}

#line 1049 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1049__1_2_f_0(
#line 1049 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_14,
#line 1049 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_24)
#line 1049 "parse_tree_out.m"
{
#line 1049 "parse_tree_out.m"
  {
#line 1049 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1049 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__LambdaHeadVar__2_25;

#line 1049 "parse_tree_out.m"
    {
#line 1049 "parse_tree_out.m"
      parse_tree__parse_tree_out__LambdaHeadVar__2_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_25, 0) = ((MR_Box) (parse_tree__parse_tree_out__LambdaHeadVar__1_24));
#line 1049 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_25, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_14));
#line 1049 "parse_tree_out.m"
    }
#line 1049 "parse_tree_out.m"
    return parse_tree__parse_tree_out__LambdaHeadVar__2_25;
#line 1049 "parse_tree_out.m"
  }
#line 1049 "parse_tree_out.m"
}

#line 1019 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__builtin_inst_name__1019__1_1_f_0(
#line 1019 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_12)
#line 1019 "parse_tree_out.m"
{
#line 1019 "parse_tree_out.m"
  {
#line 1019 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1019 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__LambdaHeadVar__2_13;
#line 1019 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_14_14;
#line 1019 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_15_15;

#line 1019 "parse_tree_out.m"
    {
#line 1019 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_14_14 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_out__LambdaHeadVar__1_12);
    }
#line 1019 "parse_tree_out.m"
    {
#line 1019 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_15_15 = mercury__term__context_init_0_f_0();
    }
#line 1019 "parse_tree_out.m"
    {
#line 1019 "parse_tree_out.m"
      parse_tree__parse_tree_out__LambdaHeadVar__2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_13, 0) = ((MR_Box) (parse_tree__parse_tree_out__V_14_14));
#line 1019 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_13, 1) = ((MR_Box) (parse_tree__parse_tree_out__V_15_15));
#line 1019 "parse_tree_out.m"
    }
#line 1019 "parse_tree_out.m"
    return parse_tree__parse_tree_out__LambdaHeadVar__2_13;
#line 1019 "parse_tree_out.m"
  }
#line 1019 "parse_tree_out.m"
}

#line 993 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__993__1_2_f_0(
#line 993 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_13,
#line 993 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_31)
#line 993 "parse_tree_out.m"
{
#line 993 "parse_tree_out.m"
  {
#line 993 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 993 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__LambdaHeadVar__2_32;

#line 993 "parse_tree_out.m"
    {
#line 993 "parse_tree_out.m"
      parse_tree__parse_tree_out__LambdaHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_32, 0) = ((MR_Box) (parse_tree__parse_tree_out__LambdaHeadVar__1_31));
#line 993 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_32, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_13));
#line 993 "parse_tree_out.m"
    }
#line 993 "parse_tree_out.m"
    return parse_tree__parse_tree_out__LambdaHeadVar__2_32;
#line 993 "parse_tree_out.m"
  }
#line 993 "parse_tree_out.m"
}

#line 985 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__985__1_2_f_0(
#line 985 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_13,
#line 985 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_53)
#line 985 "parse_tree_out.m"
{
#line 985 "parse_tree_out.m"
  {
#line 985 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 985 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__LambdaHeadVar__2_54;

#line 985 "parse_tree_out.m"
    {
#line 985 "parse_tree_out.m"
      parse_tree__parse_tree_out__LambdaHeadVar__2_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_54, 0) = ((MR_Box) (parse_tree__parse_tree_out__LambdaHeadVar__1_53));
#line 985 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_54, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_13));
#line 985 "parse_tree_out.m"
    }
#line 985 "parse_tree_out.m"
    return parse_tree__parse_tree_out__LambdaHeadVar__2_54;
#line 985 "parse_tree_out.m"
  }
#line 985 "parse_tree_out.m"
}

#line 941 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__941__1_3_p_0(
#line 941 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_11)
#line 941 "parse_tree_out.m"
{
#line 941 "parse_tree_out.m"
  {
#line 941 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 941 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_HeadVar__3_13;

#line 941 "parse_tree_out.m"
    {
#line 941 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_and_arity_3_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__HeadVar__1_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_HeadVar__3_13);
    }
#line 941 "parse_tree_out.m"
  }
#line 941 "parse_tree_out.m"
}

#line 599 "parse_tree_out.m"
static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__599__1_2_f_0(
#line 599 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Context_12,
#line 599 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_41)
#line 599 "parse_tree_out.m"
{
#line 599 "parse_tree_out.m"
  {
#line 599 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 599 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__LambdaHeadVar__2_42;

#line 599 "parse_tree_out.m"
    {
#line 599 "parse_tree_out.m"
      parse_tree__parse_tree_out__LambdaHeadVar__2_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_42, 0) = ((MR_Box) (parse_tree__parse_tree_out__LambdaHeadVar__1_41));
#line 599 "parse_tree_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
#line 599 "parse_tree_out.m"
    }
#line 599 "parse_tree_out.m"
    return parse_tree__parse_tree_out__LambdaHeadVar__2_42;
#line 599 "parse_tree_out.m"
  }
#line 599 "parse_tree_out.m"
}

#line 389 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__389__1_2_p_0(
#line 389 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Incls_10,
#line 389 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_19)
#line 389 "parse_tree_out.m"
{
#line 389 "parse_tree_out.m"
  {
#line 389 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 389 "parse_tree_out.m"
    {
#line 389 "parse_tree_out.m"
      return parse_tree__parse_tree_out__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[0], ((MR_Box) (parse_tree__parse_tree_out__Incls_10)), ((MR_Box) (parse_tree__parse_tree_out__HeadVar__2_19)));
    }
#line 389 "parse_tree_out.m"
    return parse_tree__parse_tree_out__succeeded;
#line 389 "parse_tree_out.m"
  }
#line 389 "parse_tree_out.m"
}

#line 150 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_6,
#line 150 "parse_tree_out.m"
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
#line 150 "parse_tree_out.m"
{
#line 150 "parse_tree_out.m"
  {
#line 150 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 150 "parse_tree_out.m"
    {
#line 150 "parse_tree_out.m"
      parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_tree_out__HeadVar__1_1, parse_tree__parse_tree_out__HeadVar__2_2, parse_tree__parse_tree_out__HeadVar__3_3);
#line 150 "parse_tree_out.m"
      return;
    }
#line 150 "parse_tree_out.m"
  }
#line 150 "parse_tree_out.m"
}

#line 150 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_5,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 150 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 150 "parse_tree_out.m"
{
#line 150 "parse_tree_out.m"
  {
#line 150 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 150 "parse_tree_out.m"
    {
#line 150 "parse_tree_out.m"
      return parse_tree__parse_tree_out__succeeded = parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__parse_tree_out__HeadVar__1_1, parse_tree__parse_tree_out__HeadVar__2_2);
    }
#line 150 "parse_tree_out.m"
    return parse_tree__parse_tree_out__succeeded;
#line 150 "parse_tree_out.m"
  }
#line 150 "parse_tree_out.m"
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

#line 1240 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__output_class_method_4_p_0(
#line 1240 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Lang_5,
#line 1240 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Method_6)
#line 1240 "parse_tree_out.m"
{
#line 1243 "parse_tree_out.m"
  {
#line 1243 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 1244 "parse_tree_out.m"
    {
#line 1244 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1270 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Method_6)) == (MR_mktag((MR_Integer) 0))))
#line 1248 "parse_tree_out.m"
      {
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 0)));
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 1)));
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 2)));
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__WithType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 3)));
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__WithInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 4)));
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeDetism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 5)));
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__TypeVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 6)));
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__InstVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 7)));
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 8)));
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Purity_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 9)));
#line 1248 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__ClassContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 10)));
#line 1248 "parse_tree_out.m"
        MR_String parse_tree__parse_tree_out__Name_20;
#line 1246 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out___Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 11)));

#line 1252 "parse_tree_out.m"
        {
#line 1252 "parse_tree_out.m"
          parse_tree__parse_tree_out__Name_20 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out__SymName_8);
        }
#line 1256 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__PredOrFunc_9 == (MR_Integer) 1);
#line 1256 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 1257 "parse_tree_out.m"
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1264 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 1260 "parse_tree_out.m"
          {
#line 1260 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__FuncTypesAndModes_21;
#line 1260 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__RetTypeAndMode_22;
#line 1260 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__V_39_39;
#line 1259 "parse_tree_out.m"
            MR_Box parse_tree__parse_tree_out__conv0_RetTypeAndMode_22;
#line 1261 "parse_tree_out.m"
            MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27;

#line 1259 "parse_tree_out.m"
            {
#line 1259 "parse_tree_out.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__parse_tree_out__TypesAndModes_10, &parse_tree__parse_tree_out__FuncTypesAndModes_21, &parse_tree__parse_tree_out__conv0_RetTypeAndMode_22);
            }
#line 1259 "parse_tree_out.m"
            parse_tree__parse_tree_out__RetTypeAndMode_22 = ((MR_Word) parse_tree__parse_tree_out__conv0_RetTypeAndMode_22);
#line 1262 "parse_tree_out.m"
            {
#line 1262 "parse_tree_out.m"
              parse_tree__parse_tree_out__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1262 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_39_39, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_20));
#line 1262 "parse_tree_out.m"
            }
#line 1261 "parse_tree_out.m"
            {
#line 1261 "parse_tree_out.m"
              parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__TypeVarSet_14, parse_tree__parse_tree_out__InstVarSet_15, parse_tree__parse_tree_out__ExistQVars_16, parse_tree__parse_tree_out__V_39_39, parse_tree__parse_tree_out__FuncTypesAndModes_21, parse_tree__parse_tree_out__RetTypeAndMode_22, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_17, parse_tree__parse_tree_out__ClassContext_18, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27);
            }
#line 1260 "parse_tree_out.m"
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
              parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__TypeVarSet_14, parse_tree__parse_tree_out__InstVarSet_15, parse_tree__parse_tree_out__PredOrFunc_9, parse_tree__parse_tree_out__ExistQVars_16, parse_tree__parse_tree_out__V_44_44, parse_tree__parse_tree_out__TypesAndModes_10, parse_tree__parse_tree_out__WithType_11, parse_tree__parse_tree_out__WithInst_12, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_17, parse_tree__parse_tree_out__ClassContext_18, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27);
            }
#line 1265 "parse_tree_out.m"
          }
#line 1248 "parse_tree_out.m"
      }
#line 1270 "parse_tree_out.m"
    else
#line 1272 "parse_tree_out.m"
      {
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 2)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__SymName_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 0)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__PredOrFunc_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 1)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__WithInst_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 3)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeDetism_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 4)));
#line 1272 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__InstVarSet_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 5)));
#line 1272 "parse_tree_out.m"
        MR_String parse_tree__parse_tree_out__Name_56;
#line 1271 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 6)));
#line 1280 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_30_30;

#line 1276 "parse_tree_out.m"
        {
#line 1276 "parse_tree_out.m"
          parse_tree__parse_tree_out__Name_56 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out__SymName_50);
        }
#line 1281 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithInst_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1280 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 1280 "parse_tree_out.m"
          {
#line 1280 "parse_tree_out.m"
            parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__PredOrFunc_51)) == (MR_mktag((MR_Integer) 1)));
#line 1280 "parse_tree_out.m"
            if (parse_tree__parse_tree_out__succeeded)
#line 1280 "parse_tree_out.m"
              {
#line 1280 "parse_tree_out.m"
                parse_tree__parse_tree_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__PredOrFunc_51, (MR_Integer) 0)));
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
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_31_31, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_56));
#line 1285 "parse_tree_out.m"
            }
#line 1284 "parse_tree_out.m"
            {
#line 1284 "parse_tree_out.m"
              parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__InstVarSet_54, parse_tree__parse_tree_out__V_31_31, parse_tree__parse_tree_out__FuncModes_24, parse_tree__parse_tree_out__RetMode_25, parse_tree__parse_tree_out__MaybeDetism_53, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv4_STATE_VARIABLE_IO_27);
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
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_35_35, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_56));
#line 1289 "parse_tree_out.m"
            }
#line 1288 "parse_tree_out.m"
            {
#line 1288 "parse_tree_out.m"
              parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__InstVarSet_54, parse_tree__parse_tree_out__V_35_35, parse_tree__parse_tree_out__Modes_23, parse_tree__parse_tree_out__WithInst_52, parse_tree__parse_tree_out__MaybeDetism_53, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv5_STATE_VARIABLE_IO_27);
            }
#line 1288 "parse_tree_out.m"
          }
#line 1272 "parse_tree_out.m"
      }
#line 1243 "parse_tree_out.m"
  }
#line 1240 "parse_tree_out.m"
}

#line 1231 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2(
#line 1231 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1231 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1231 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1231 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1231 "parse_tree_out.m"
{
#line 1231 "parse_tree_out.m"
  {
#line 1231 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1231 "parse_tree_out.m"
    {
#line 1231 "parse_tree_out.m"
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1231__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
#line 1231 "parse_tree_out.m"
      return;
    }
#line 1231 "parse_tree_out.m"
  }
#line 1231 "parse_tree_out.m"
}

#line 1229 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1(
#line 1229 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1229 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1229 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1229 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1229 "parse_tree_out.m"
{
#line 1229 "parse_tree_out.m"
  {
#line 1229 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1229 "parse_tree_out.m"
    {
#line 1229 "parse_tree_out.m"
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1229__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
#line 1229 "parse_tree_out.m"
      return;
    }
#line 1229 "parse_tree_out.m"
  }
#line 1229 "parse_tree_out.m"
}

#line 1224 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(
#line 1224 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
#line 1224 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
#line 1224 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
#line 1224 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3,
#line 1224 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_0_11,
#line 1224 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__STATE_VARIABLE_U_12)
#line 1224 "parse_tree_out.m"
{
#line 1227 "parse_tree_out.m"
  {
#line 1227 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1227 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeInfo_30_30;
#line 1227 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Domain_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 0)));
#line 1227 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Range_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 1)));
#line 1227 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_14_14;
#line 1227 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_16_16;
#line 1227 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_17_17;
#line 1227 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_19_19;
#line 1227 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_21_21;
#line 1227 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_22_22;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 58 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out__func_0(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out__STATE_VARIABLE_U_0_11, &parse_tree__parse_tree_out__STATE_VARIABLE_U_14_14);
    }
#line 1229 "parse_tree_out.m"
    {
#line 1229 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[2]));
#line 1229 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1));
#line 1229 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1229 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_25));
#line 1229 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 4) = ((MR_Box) (parse_tree__parse_tree_out__TypeVarSet_6));
#line 1229 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 5) = ((MR_Box) (parse_tree__parse_tree_out__VarNamePrint_7));
#line 1229 "parse_tree_out.m"
    }
#line 2742 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeInfo_30_30 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2];
#line 58 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
    {
#line 58 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out__func_1(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) (parse_tree__parse_tree_out__TypeInfo_30_30)), ((MR_Box) (parse_tree__parse_tree_out__Domain_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__V_16_16)), parse_tree__parse_tree_out__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out__STATE_VARIABLE_U_17_17);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out__func_2(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) " -> ")), parse_tree__parse_tree_out__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out__STATE_VARIABLE_U_19_19);
    }
#line 1231 "parse_tree_out.m"
    {
#line 1231 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1231 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[2]));
#line 1231 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2));
#line 1231 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1231 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_25));
#line 1231 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 4) = ((MR_Box) (parse_tree__parse_tree_out__TypeVarSet_6));
#line 1231 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_21_21, 5) = ((MR_Box) (parse_tree__parse_tree_out__VarNamePrint_7));
#line 1231 "parse_tree_out.m"
    }
#line 58 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
    {
#line 58 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out__func_3(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) (parse_tree__parse_tree_out__TypeInfo_30_30)), ((MR_Box) (parse_tree__parse_tree_out__Range_9)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__V_21_21)), parse_tree__parse_tree_out__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out__STATE_VARIABLE_U_22_22);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out__func_4(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out__STATE_VARIABLE_U_22_22, parse_tree__parse_tree_out__STATE_VARIABLE_U_12);
#line 32 "parse_tree.parse_tree_out_info.int"
      return;
    }
#line 1227 "parse_tree_out.m"
  }
#line 1224 "parse_tree_out.m"
}

#line 1238 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4(
#line 1238 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1238 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1238 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1238 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1238 "parse_tree_out.m"
{
#line 1238 "parse_tree_out.m"
  {
#line 1238 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1238 "parse_tree_out.m"
    {
#line 1238 "parse_tree_out.m"
      parse_tree__parse_tree_out__output_class_method_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 1238 "parse_tree_out.m"
      return;
    }
#line 1238 "parse_tree_out.m"
  }
#line 1238 "parse_tree_out.m"
}

#line 1219 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3(
#line 1219 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1219 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1219 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1219 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1219 "parse_tree_out.m"
{
#line 1219 "parse_tree_out.m"
  {
#line 1219 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1219 "parse_tree_out.m"
    {
#line 1219 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
#line 1219 "parse_tree_out.m"
      return;
    }
#line 1219 "parse_tree_out.m"
  }
#line 1219 "parse_tree_out.m"
}

#line 1207 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2(
#line 1207 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1207 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1207 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1207 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1207 "parse_tree_out.m"
{
#line 1207 "parse_tree_out.m"
  {
#line 1207 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1207 "parse_tree_out.m"
    {
#line 1207 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
#line 1207 "parse_tree_out.m"
      return;
    }
#line 1207 "parse_tree_out.m"
  }
#line 1207 "parse_tree_out.m"
}

#line 1173 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1(
#line 1173 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1173 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 1173 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 1173 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 1173 "parse_tree_out.m"
{
#line 1173 "parse_tree_out.m"
  {
#line 1173 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 1173 "parse_tree_out.m"
    {
#line 1173 "parse_tree_out.m"
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1173__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 1173 "parse_tree_out.m"
      return;
    }
#line 1173 "parse_tree_out.m"
  }
#line 1173 "parse_tree_out.m"
}

#line 1160 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(
#line 1160 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1160 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemTypeClass_6)
#line 1160 "parse_tree_out.m"
{
#line 1163 "parse_tree_out.m"
  {
#line 1163 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1163 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_51;
#line 1163 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ClassName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 0)));
#line 1163 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 1)));
#line 1163 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 2)));
#line 1163 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__FunDeps_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 3)));
#line 1163 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Interface_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 4)));
#line 1163 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 5)));
#line 1163 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ClassName_16;
#line 1163 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_30_30;
#line 1164 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 6)));
#line 1164 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 7)));

#line 1166 "parse_tree_out.m"
    {
#line 1166 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ClassName0_8, &parse_tree__parse_tree_out__ClassName_16);
    }
#line 1167 "parse_tree_out.m"
    {
#line 1167 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- typeclass ");
    }
#line 1171 "parse_tree_out.m"
    {
#line 1171 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__ClassName_16);
    }
#line 1172 "parse_tree_out.m"
    {
#line 1172 "parse_tree_out.m"
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
#line 1173 "parse_tree_out.m"
    {
#line 1173 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[5]));
#line 1173 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1));
#line 1173 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1173 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 3) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
#line 1173 "parse_tree_out.m"
    }
#line 1173 "parse_tree_out.m"
    {
#line 1173 "parse_tree_out.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2], parse_tree__parse_tree_out__Vars_9, (MR_String) ", ", parse_tree__parse_tree_out__V_30_30);
    }
#line 1178 "parse_tree_out.m"
    {
#line 1178 "parse_tree_out.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 2997 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeClassInfo_for_output_51 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
#line 1200 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__FunDeps_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1200 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 1201 "parse_tree_out.m"
      parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__Constraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 1204 "parse_tree_out.m"
      {
#line 1204 "parse_tree_out.m"
      }
#line 1204 "parse_tree_out.m"
    else
#line 1205 "parse_tree_out.m"
      {
#line 1205 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_66_66;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_19_64;
#line 58 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_22_67;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out__conv9_STATE_VARIABLE_IO_38_38;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out__func_0(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) " <= (")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_19_64);
        }
#line 1207 "parse_tree_out.m"
        {
#line 1207 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0]));
#line 1207 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2));
#line 1207 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1207 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_51));
#line 1207 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 4) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
#line 1207 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_66_66, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1207 "parse_tree_out.m"
        }
#line 58 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
        {
#line 58 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out__func_2(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)), ((MR_Box) (parse_tree__parse_tree_out__FunDeps_11)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__V_66_66)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_22_67);
        }
#line 1210 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__Constraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "parse_tree_out.m"
          {
#line 1209 "parse_tree_out.m"
          }
#line 1210 "parse_tree_out.m"
        else
#line 1211 "parse_tree_out.m"
          {
#line 1211 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__V_71_71;
#line 58 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__parse_tree_out__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
            MR_Box parse_tree__parse_tree_out__conv7_STATE_VARIABLE_U_27_72;

#line 1214 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__FunDeps_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "parse_tree_out.m"
              {
#line 1213 "parse_tree_out.m"
              }
#line 1214 "parse_tree_out.m"
            else
#line 1215 "parse_tree_out.m"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                void MR_CALL (* parse_tree__parse_tree_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
                MR_Box parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_24_69;

#line 32 "parse_tree.parse_tree_out_info.int"
                {
#line 32 "parse_tree.parse_tree_out_info.int"
                  parse_tree__parse_tree_out__func_4(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_24_69);
                }
#line 1215 "parse_tree_out.m"
              }
#line 1219 "parse_tree_out.m"
            {
#line 1219 "parse_tree_out.m"
              parse_tree__parse_tree_out__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[1]));
#line 1219 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3));
#line 1219 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1219 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_51));
#line 1219 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 4) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
#line 1219 "parse_tree_out.m"
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_71_71, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1219 "parse_tree_out.m"
            }
#line 58 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
            {
#line 58 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out__func_6(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (parse_tree__parse_tree_out__Constraints_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__V_71_71)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv7_STATE_VARIABLE_U_27_72);
            }
#line 1211 "parse_tree_out.m"
          }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out__func_8(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv9_STATE_VARIABLE_IO_38_38);
        }
#line 1205 "parse_tree_out.m"
      }
#line 1184 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__Interface_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1182 "parse_tree_out.m"
      {
#line 1183 "parse_tree_out.m"
        {
#line 1183 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1183 "parse_tree_out.m"
          return;
        }
#line 1182 "parse_tree_out.m"
      }
#line 1184 "parse_tree_out.m"
    else
#line 1185 "parse_tree_out.m"
      {
#line 1185 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Methods_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Interface_12, (MR_Integer) 0)));
#line 1185 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Lang_21;
#line 1185 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_89_89;

#line 1186 "parse_tree_out.m"
        {
#line 1186 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) " where [\n");
        }
#line 1187 "parse_tree_out.m"
        {
#line 1187 "parse_tree_out.m"
          parse_tree__parse_tree_out__Lang_21 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
        }
#line 1238 "parse_tree_out.m"
        {
#line 1238 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1238 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_89_89, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[6]));
#line 1238 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_89_89, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4));
#line 1238 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1238 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_89_89, 3) = ((MR_Box) (parse_tree__parse_tree_out__Lang_21));
#line 1238 "parse_tree_out.m"
        }
#line 1238 "parse_tree_out.m"
        {
#line 1238 "parse_tree_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0, parse_tree__parse_tree_out__Methods_20, (MR_String) ",\n", parse_tree__parse_tree_out__V_89_89);
        }
#line 1189 "parse_tree_out.m"
        {
#line 1189 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n].\n");
#line 1189 "parse_tree_out.m"
          return;
        }
#line 1185 "parse_tree_out.m"
      }
#line 1163 "parse_tree_out.m"
  }
#line 1160 "parse_tree_out.m"
}

#line 1058 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(
#line 1058 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1058 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemPredDecl_6)
#line 1058 "parse_tree_out.m"
{
#line 1061 "parse_tree_out.m"
  {
#line 1061 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__PredName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 0)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 1)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 2)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__WithType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 3)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__WithInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 4)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__MaybeDetism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 5)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 7)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InstVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 8)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ExistQVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 9)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 10)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 11)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 12)));
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__PredName_22;
#line 1061 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Lang_23;
#line 1064 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Origin_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 6)));
#line 1064 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 13)));

#line 1067 "parse_tree_out.m"
    {
#line 1067 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__PredName0_8, &parse_tree__parse_tree_out__PredName_22);
    }
#line 1068 "parse_tree_out.m"
    {
#line 1068 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_20);
    }
#line 1069 "parse_tree_out.m"
    {
#line 1069 "parse_tree_out.m"
      parse_tree__parse_tree_out__Lang_23 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
#line 1073 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__PredOrFunc_9 == (MR_Integer) 1);
#line 1073 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 1074 "parse_tree_out.m"
      parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 1077 "parse_tree_out.m"
      {
#line 1077 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__FuncTypesAndModes_24;
#line 1077 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__RetTypeAndMode_25;
#line 1076 "parse_tree_out.m"
        MR_Box parse_tree__parse_tree_out__conv0_RetTypeAndMode_25;
#line 1078 "parse_tree_out.m"
        MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27;

#line 1076 "parse_tree_out.m"
        {
#line 1076 "parse_tree_out.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__parse_tree_out__TypesAndModes_10, &parse_tree__parse_tree_out__FuncTypesAndModes_24, &parse_tree__parse_tree_out__conv0_RetTypeAndMode_25);
        }
#line 1076 "parse_tree_out.m"
        parse_tree__parse_tree_out__RetTypeAndMode_25 = ((MR_Word) parse_tree__parse_tree_out__conv0_RetTypeAndMode_25);
#line 1078 "parse_tree_out.m"
        {
#line 1078 "parse_tree_out.m"
          parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_23, parse_tree__parse_tree_out__TypeVarSet_15, parse_tree__parse_tree_out__InstVarSet_16, parse_tree__parse_tree_out__ExistQVars_17, parse_tree__parse_tree_out__PredName_22, parse_tree__parse_tree_out__FuncTypesAndModes_24, parse_tree__parse_tree_out__RetTypeAndMode_25, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_18, parse_tree__parse_tree_out__Constraints_19, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27);
        }
#line 1077 "parse_tree_out.m"
      }
#line 1082 "parse_tree_out.m"
    else
#line 1083 "parse_tree_out.m"
      {
#line 1083 "parse_tree_out.m"
        MR_Box parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27;

#line 1083 "parse_tree_out.m"
        {
#line 1083 "parse_tree_out.m"
          parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_23, parse_tree__parse_tree_out__TypeVarSet_15, parse_tree__parse_tree_out__InstVarSet_16, parse_tree__parse_tree_out__PredOrFunc_9, parse_tree__parse_tree_out__ExistQVars_17, parse_tree__parse_tree_out__PredName_22, parse_tree__parse_tree_out__TypesAndModes_10, parse_tree__parse_tree_out__WithType_11, parse_tree__parse_tree_out__WithInst_12, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_18, parse_tree__parse_tree_out__Constraints_19, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27);
        }
#line 1083 "parse_tree_out.m"
      }
#line 1061 "parse_tree_out.m"
  }
#line 1058 "parse_tree_out.m"
}

#line 1049 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1(
#line 1049 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1049 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
#line 1049 "parse_tree_out.m"
{
#line 1049 "parse_tree_out.m"
  {
#line 1049 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
#line 1049 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
#line 1049 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__conv2_LambdaHeadVar__2_25;

#line 1049 "parse_tree_out.m"
    {
#line 1049 "parse_tree_out.m"
      parse_tree__parse_tree_out__conv2_LambdaHeadVar__2_25 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1049__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
#line 1049 "parse_tree_out.m"
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv2_LambdaHeadVar__2_25));
#line 1049 "parse_tree_out.m"
    return parse_tree__parse_tree_out__wrapper_arg_2;
#line 1049 "parse_tree_out.m"
  }
#line 1049 "parse_tree_out.m"
}

#line 1026 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(
#line 1026 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 1026 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemModeDefn_6)
#line 1026 "parse_tree_out.m"
{
#line 1029 "parse_tree_out.m"
  {
#line 1029 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_20;
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_38_49;
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 0)));
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InstParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 1)));
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 2)));
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 3)));
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 4)));
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__UnQualSymName_14;
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Lang_15;
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Mode_28;
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ArgTerms_30;
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModeTerm_32;
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_35_35;
#line 1029 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_42_42;
#line 1030 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_22_34;
#line 1051 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_27_39;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_29_41;
#line 1053 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv6_STATE_VARIABLE_U_31_43;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out__conv8_STATE_VARIABLE_IO_17;

#line 1032 "parse_tree_out.m"
    {
#line 1032 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SymName_8, &parse_tree__parse_tree_out__UnQualSymName_14);
    }
#line 1033 "parse_tree_out.m"
    {
#line 1033 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_12);
    }
#line 1034 "parse_tree_out.m"
    {
#line 1034 "parse_tree_out.m"
      parse_tree__parse_tree_out__Lang_15 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
#line 3422 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeClassInfo_for_output_20 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
#line 1046 "parse_tree_out.m"
    parse_tree__parse_tree_out__Mode_28 = (MR_Word) parse_tree__parse_tree_out__ModeDefn_10;
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out__func_0(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ":- mode (")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_22_34);
    }
#line 1049 "parse_tree_out.m"
    {
#line 1049 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_35_35, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[4]));
#line 1049 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_35_35, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1));
#line 1049 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1049 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_35_35, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
#line 1049 "parse_tree_out.m"
    }
#line 1049 "parse_tree_out.m"
    {
#line 1049 "parse_tree_out.m"
      parse_tree__parse_tree_out__ArgTerms_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], parse_tree__parse_tree_out__V_35_35, parse_tree__parse_tree_out__InstParams_9);
    }
#line 3452 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_38_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1050 "parse_tree_out.m"
    {
#line 1050 "parse_tree_out.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_38_49, parse_tree__parse_tree_out__UnQualSymName_14, parse_tree__parse_tree_out__ArgTerms_30, parse_tree__parse_tree_out__Context_12, &parse_tree__parse_tree_out__ModeTerm_32);
    }
#line 1051 "parse_tree_out.m"
    {
#line 1051 "parse_tree_out.m"
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_38_49, parse_tree__parse_tree_out__TypeClassInfo_for_output_20, parse_tree__parse_tree_out__VarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__ModeTerm_32, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_27_39);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out__func_4(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ") == ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_29_41);
    }
#line 1053 "parse_tree_out.m"
    parse_tree__parse_tree_out__V_42_42 = (MR_Word) parse_tree__parse_tree_out__VarSet_11;
#line 1053 "parse_tree_out.m"
    {
#line 1053 "parse_tree_out.m"
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[7], parse_tree__parse_tree_out__Lang_15, ((MR_Box) (parse_tree__parse_tree_out__V_42_42)), parse_tree__parse_tree_out__Mode_28, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv6_STATE_VARIABLE_U_31_43);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out__func_7(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv8_STATE_VARIABLE_IO_17);
    }
#line 1029 "parse_tree_out.m"
  }
#line 1026 "parse_tree_out.m"
}

#line 993 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_3(
#line 993 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 993 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
#line 993 "parse_tree_out.m"
{
#line 993 "parse_tree_out.m"
  {
#line 993 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
#line 993 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
#line 993 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__conv2_LambdaHeadVar__2_32;

#line 993 "parse_tree_out.m"
    {
#line 993 "parse_tree_out.m"
      parse_tree__parse_tree_out__conv2_LambdaHeadVar__2_32 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__993__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
#line 993 "parse_tree_out.m"
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv2_LambdaHeadVar__2_32));
#line 993 "parse_tree_out.m"
    return parse_tree__parse_tree_out__wrapper_arg_2;
#line 993 "parse_tree_out.m"
  }
#line 993 "parse_tree_out.m"
}

#line 985 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2(
#line 985 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 985 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
#line 985 "parse_tree_out.m"
{
#line 985 "parse_tree_out.m"
  {
#line 985 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
#line 985 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
#line 985 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__conv1_LambdaHeadVar__2_54;

#line 985 "parse_tree_out.m"
    {
#line 985 "parse_tree_out.m"
      parse_tree__parse_tree_out__conv1_LambdaHeadVar__2_54 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__985__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
#line 985 "parse_tree_out.m"
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv1_LambdaHeadVar__2_54));
#line 985 "parse_tree_out.m"
    return parse_tree__parse_tree_out__wrapper_arg_2;
#line 985 "parse_tree_out.m"
  }
#line 985 "parse_tree_out.m"
}

#line 1019 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1(
#line 1019 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 1019 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
#line 1019 "parse_tree_out.m"
{
#line 1019 "parse_tree_out.m"
  {
#line 1019 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
#line 1019 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
#line 1019 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_13;

#line 1019 "parse_tree_out.m"
    {
#line 1019 "parse_tree_out.m"
      parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_13 = parse_tree__parse_tree_out__IntroducedFrom__func__builtin_inst_name__1019__1_1_f_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
#line 1019 "parse_tree_out.m"
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_13));
#line 1019 "parse_tree_out.m"
    return parse_tree__parse_tree_out__wrapper_arg_2;
#line 1019 "parse_tree_out.m"
  }
#line 1019 "parse_tree_out.m"
}

#line 965 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(
#line 965 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 965 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemInstDefn_6)
#line 965 "parse_tree_out.m"
{
#line 968 "parse_tree_out.m"
  {
#line 968 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 968 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 0)));
#line 968 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InstParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 1)));
#line 968 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__MaybeForTypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 2)));
#line 968 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InstDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 3)));
#line 968 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__InstVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 4)));
#line 968 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 5)));
#line 968 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__UnQualSymName_15;
#line 968 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName_16;
#line 968 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Lang_17;
#line 969 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 6)));
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeInfo_21_87;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeInfo_22_88;
#line 1018 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__Name_70;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Args1_71;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Term_73;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Inst_74;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_77_77;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_82_82;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_83_83;
#line 1018 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_84_84;
#line 1022 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_85_85;
#line 1022 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_75_75;
#line 1022 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_76_76;

#line 974 "parse_tree_out.m"
    {
#line 974 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SymName0_8, &parse_tree__parse_tree_out__UnQualSymName_15);
    }
#line 1018 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__UnQualSymName_15)) == (MR_mktag((MR_Integer) 0)));
#line 1018 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 1018 "parse_tree_out.m"
      {
#line 1018 "parse_tree_out.m"
        parse_tree__parse_tree_out__Name_70 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__UnQualSymName_15, (MR_Integer) 0)));
#line 3659 "parse_tree.parse_tree_out.c"
        parse_tree__parse_tree_out__TypeInfo_21_87 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4];
#line 3661 "parse_tree.parse_tree_out.c"
        parse_tree__parse_tree_out__TypeInfo_22_88 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[6];
#line 1019 "parse_tree_out.m"
        parse_tree__parse_tree_out__V_77_77 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[4];
#line 1019 "parse_tree_out.m"
        {
#line 1019 "parse_tree_out.m"
          parse_tree__parse_tree_out__Args1_71 = mercury__list__map_2_f_0(parse_tree__parse_tree_out__TypeInfo_21_87, parse_tree__parse_tree_out__TypeInfo_22_88, parse_tree__parse_tree_out__V_77_77, parse_tree__parse_tree_out__InstParams_9);
        }
#line 1020 "parse_tree_out.m"
        {
#line 1020 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_82_82, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_70));
#line 1020 "parse_tree_out.m"
        }
#line 1020 "parse_tree_out.m"
        {
#line 1020 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_83_83 = mercury__term__context_init_0_f_0();
        }
#line 1021 "parse_tree_out.m"
        parse_tree__parse_tree_out__V_84_84 = (MR_Integer) 1;
#line 1020 "parse_tree_out.m"
        {
#line 1020 "parse_tree_out.m"
          parse_tree__parse_tree_out__Term_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Term_73, 0) = ((MR_Box) (parse_tree__parse_tree_out__V_82_82));
#line 1020 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Term_73, 1) = ((MR_Box) (parse_tree__parse_tree_out__Args1_71));
#line 1020 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Term_73, 2) = ((MR_Box) (parse_tree__parse_tree_out__V_83_83));
#line 1020 "parse_tree_out.m"
        }
#line 1021 "parse_tree_out.m"
        {
#line 1021 "parse_tree_out.m"
          parse_tree__parse_tree_out__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__parse_tree_out__V_84_84, parse_tree__parse_tree_out__Term_73, &parse_tree__parse_tree_out__Inst_74);
        }
#line 1018 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 1018 "parse_tree_out.m"
          {
#line 1022 "parse_tree_out.m"
            parse_tree__parse_tree_out__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out__Inst_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Inst_74, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1022 "parse_tree_out.m"
            if (parse_tree__parse_tree_out__succeeded)
#line 1022 "parse_tree_out.m"
              {
#line 1022 "parse_tree_out.m"
                parse_tree__parse_tree_out__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Inst_74, (MR_Integer) 1)));
#line 1022 "parse_tree_out.m"
                parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__V_85_85)) == (MR_mktag((MR_Integer) 0)));
#line 1022 "parse_tree_out.m"
                if (parse_tree__parse_tree_out__succeeded)
#line 1022 "parse_tree_out.m"
                  {
#line 1022 "parse_tree_out.m"
                    parse_tree__parse_tree_out__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_85_85, (MR_Integer) 0)));
#line 1022 "parse_tree_out.m"
                    parse_tree__parse_tree_out__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_85_85, (MR_Integer) 1)));
#line 1022 "parse_tree_out.m"
                  }
#line 1022 "parse_tree_out.m"
              }
#line 1022 "parse_tree_out.m"
            parse_tree__parse_tree_out__succeeded = !(parse_tree__parse_tree_out__succeeded);
#line 1018 "parse_tree_out.m"
          }
#line 1018 "parse_tree_out.m"
      }
#line 977 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 976 "parse_tree_out.m"
      parse_tree__parse_tree_out__SymName_16 = parse_tree__parse_tree_out__SymName0_8;
#line 977 "parse_tree_out.m"
    else
#line 978 "parse_tree_out.m"
      parse_tree__parse_tree_out__SymName_16 = parse_tree__parse_tree_out__UnQualSymName_15;
#line 980 "parse_tree_out.m"
    {
#line 980 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_13);
    }
#line 981 "parse_tree_out.m"
    {
#line 981 "parse_tree_out.m"
      parse_tree__parse_tree_out__Lang_17 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
#line 990 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__InstDefn_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 983 "parse_tree_out.m"
      {
#line 983 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__TypeCtorInfo_65_65;
#line 983 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__ArgTerms_18;
#line 983 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__InstTerm_20;
#line 983 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_52_52;

#line 984 "parse_tree_out.m"
        {
#line 984 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ":- inst (");
        }
#line 985 "parse_tree_out.m"
        {
#line 985 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 985 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_52_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[4]));
#line 985 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_52_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2));
#line 985 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 985 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_52_52, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_13));
#line 985 "parse_tree_out.m"
        }
#line 985 "parse_tree_out.m"
        {
#line 985 "parse_tree_out.m"
          parse_tree__parse_tree_out__ArgTerms_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], parse_tree__parse_tree_out__V_52_52, parse_tree__parse_tree_out__InstParams_9);
        }
#line 3789 "parse_tree.parse_tree_out.c"
        parse_tree__parse_tree_out__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 986 "parse_tree_out.m"
        {
#line 986 "parse_tree_out.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_65_65, parse_tree__parse_tree_out__SymName_16, parse_tree__parse_tree_out__ArgTerms_18, parse_tree__parse_tree_out__Context_13, &parse_tree__parse_tree_out__InstTerm_20);
        }
#line 988 "parse_tree_out.m"
        {
#line 988 "parse_tree_out.m"
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_65_65, parse_tree__parse_tree_out__InstVarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out__InstTerm_20);
        }
#line 989 "parse_tree_out.m"
        {
#line 989 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 989 "parse_tree_out.m"
          return;
        }
#line 983 "parse_tree_out.m"
      }
#line 990 "parse_tree_out.m"
    else
#line 991 "parse_tree_out.m"
      {
#line 991 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__TypeCtorInfo_68_68;
#line 991 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Body_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__InstDefn_11, (MR_Integer) 0)));
#line 991 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_30_30;
#line 991 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__ArgTerms_61;
#line 991 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__InstTerm_62;

#line 992 "parse_tree_out.m"
        {
#line 992 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ":- inst (");
        }
#line 993 "parse_tree_out.m"
        {
#line 993 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 993 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[4]));
#line 993 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_3));
#line 993 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 993 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_30_30, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_13));
#line 993 "parse_tree_out.m"
        }
#line 993 "parse_tree_out.m"
        {
#line 993 "parse_tree_out.m"
          parse_tree__parse_tree_out__ArgTerms_61 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], parse_tree__parse_tree_out__V_30_30, parse_tree__parse_tree_out__InstParams_9);
        }
#line 3849 "parse_tree.parse_tree_out.c"
        parse_tree__parse_tree_out__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 994 "parse_tree_out.m"
        {
#line 994 "parse_tree_out.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_68_68, parse_tree__parse_tree_out__SymName_16, parse_tree__parse_tree_out__ArgTerms_61, parse_tree__parse_tree_out__Context_13, &parse_tree__parse_tree_out__InstTerm_62);
        }
#line 996 "parse_tree_out.m"
        {
#line 996 "parse_tree_out.m"
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_68_68, parse_tree__parse_tree_out__InstVarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out__InstTerm_62);
        }
#line 997 "parse_tree_out.m"
        {
#line 997 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
#line 1000 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__MaybeForTypeCtor_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 999 "parse_tree_out.m"
          {
#line 999 "parse_tree_out.m"
          }
#line 1000 "parse_tree_out.m"
        else
#line 1001 "parse_tree_out.m"
          {
#line 1001 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__ForTypeCtor_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeForTypeCtor_10, (MR_Integer) 0)));
#line 1001 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__ForTypeCtorSymName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ForTypeCtor_22, (MR_Integer) 0)));
#line 1001 "parse_tree_out.m"
            MR_Integer parse_tree__parse_tree_out__ForTypeCtorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ForTypeCtor_22, (MR_Integer) 1)));

#line 1003 "parse_tree_out.m"
            {
#line 1003 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "for ");
            }
#line 1004 "parse_tree_out.m"
            {
#line 1004 "parse_tree_out.m"
              parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__ForTypeCtorSymName_23);
            }
#line 1005 "parse_tree_out.m"
            {
#line 1005 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
#line 1006 "parse_tree_out.m"
            {
#line 1006 "parse_tree_out.m"
              mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__ForTypeCtorArity_24);
            }
#line 1007 "parse_tree_out.m"
            {
#line 1007 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 1001 "parse_tree_out.m"
          }
#line 1009 "parse_tree_out.m"
        {
#line 1009 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "== ");
        }
#line 1010 "parse_tree_out.m"
        {
#line 1010 "parse_tree_out.m"
          parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_17, parse_tree__parse_tree_out__InstVarSet_12, parse_tree__parse_tree_out__Body_21);
        }
#line 1011 "parse_tree_out.m"
        {
#line 1011 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1011 "parse_tree_out.m"
          return;
        }
#line 991 "parse_tree_out.m"
      }
#line 968 "parse_tree_out.m"
  }
#line 965 "parse_tree_out.m"
}

#line 948 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(
#line 948 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Assertion_4)
#line 948 "parse_tree_out.m"
{
#line 953 "parse_tree_out.m"
  {
#line 953 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 953 "parse_tree_out.m"
#line 953 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__Assertion_4) {
#line 953 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 953 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 953 "parse_tree_out.m"
        {
#line 954 "parse_tree_out.m"
          {
#line 954 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) "can_pass_as_mercury_type");
#line 954 "parse_tree_out.m"
            return;
          }
#line 953 "parse_tree_out.m"
        }
#line 953 "parse_tree_out.m"
        break;
#line 953 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 956 "parse_tree_out.m"
        {
#line 957 "parse_tree_out.m"
          {
#line 957 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) "stable");
#line 957 "parse_tree_out.m"
            return;
          }
#line 956 "parse_tree_out.m"
        }
#line 953 "parse_tree_out.m"
        break;
#line 953 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 959 "parse_tree_out.m"
        {
#line 960 "parse_tree_out.m"
          {
#line 960 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) "word_aligned_pointer");
#line 960 "parse_tree_out.m"
            return;
          }
#line 959 "parse_tree_out.m"
        }
#line 953 "parse_tree_out.m"
        break;
#line 953 "parse_tree_out.m"
    }
#line 953 "parse_tree_out.m"
  }
#line 948 "parse_tree_out.m"
}

#line 941 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1(
#line 941 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 941 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 941 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 941 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 941 "parse_tree_out.m"
{
#line 941 "parse_tree_out.m"
  {
#line 941 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 941 "parse_tree_out.m"
    {
#line 941 "parse_tree_out.m"
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__941__1_3_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 941 "parse_tree_out.m"
      return;
    }
#line 941 "parse_tree_out.m"
  }
#line 941 "parse_tree_out.m"
}

#line 937 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(
#line 937 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Ctors_4)
#line 937 "parse_tree_out.m"
{
#line 940 "parse_tree_out.m"
  {
#line 940 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 941 "parse_tree_out.m"
    {
#line 941 "parse_tree_out.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__parse_tree_out__Ctors_4, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[3]);
#line 941 "parse_tree_out.m"
      return;
    }
#line 940 "parse_tree_out.m"
  }
#line 937 "parse_tree_out.m"
}

#line 919 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(
#line 919 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
#line 919 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 919 "parse_tree_out.m"
{
#line 922 "parse_tree_out.m"
  while (MR_TRUE)
#line 922 "parse_tree_out.m"
    {
#line 922 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 922 "parse_tree_out.m"
      {
#line 922 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 922 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 922 "parse_tree_out.m"
          {
#line 922 "parse_tree_out.m"
          }
#line 922 "parse_tree_out.m"
        else
#line 923 "parse_tree_out.m"
          {
#line 923 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 923 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));
#line 923 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Name_24;
#line 923 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Type_25;
#line 915 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out___Width_26;
#line 915 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out___Context_27;

#line 924 "parse_tree_out.m"
            {
#line 924 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 915 "parse_tree_out.m"
            parse_tree__parse_tree_out__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 0)));
#line 915 "parse_tree_out.m"
            parse_tree__parse_tree_out__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 1)));
#line 915 "parse_tree_out.m"
            parse_tree__parse_tree_out___Width_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 2)));
#line 915 "parse_tree_out.m"
            parse_tree__parse_tree_out___Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 3)));
#line 931 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__Name_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "parse_tree_out.m"
              {
#line 931 "parse_tree_out.m"
              }
#line 931 "parse_tree_out.m"
            else
#line 932 "parse_tree_out.m"
              {
#line 932 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__FieldName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Name_24, (MR_Integer) 0)));
#line 932 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__Name_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_34, (MR_Integer) 0)));
#line 933 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out___Ctxt_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_34, (MR_Integer) 1)));

#line 934 "parse_tree_out.m"
                {
#line 934 "parse_tree_out.m"
                  parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__Name_36);
                }
#line 935 "parse_tree_out.m"
                {
#line 935 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) " :: ");
                }
#line 932 "parse_tree_out.m"
              }
#line 917 "parse_tree_out.m"
            {
#line 917 "parse_tree_out.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__HeadVar__1_1, (MR_Integer) 0, parse_tree__parse_tree_out__Type_25);
            }
#line 926 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 926 "parse_tree_out.m"
            {
#line 926 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__Args_11;

#line 926 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 926 "parse_tree_out.m"
            }
#line 926 "parse_tree_out.m"
            continue;
#line 923 "parse_tree_out.m"
          }
#line 922 "parse_tree_out.m"
      }
#line 922 "parse_tree_out.m"
      break;
#line 922 "parse_tree_out.m"
    }
#line 919 "parse_tree_out.m"
}

#line 836 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(
#line 836 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VarSet_1,
#line 836 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__First_2,
#line 836 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
#line 836 "parse_tree_out.m"
{
#line 839 "parse_tree_out.m"
  while (MR_TRUE)
#line 839 "parse_tree_out.m"
    {
#line 839 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 839 "parse_tree_out.m"
      {
#line 839 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 839 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "parse_tree_out.m"
          {
#line 839 "parse_tree_out.m"
          }
#line 839 "parse_tree_out.m"
        else
#line 840 "parse_tree_out.m"
          {
#line 840 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Ctor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 0)));
#line 840 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 1)));

#line 844 "parse_tree_out.m"
#line 844 "parse_tree_out.m"
            switch (parse_tree__parse_tree_out__First_2) {
#line 844 "parse_tree_out.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 844 "parse_tree_out.m"
              case (MR_Integer) 0:
#line 845 "parse_tree_out.m"
                {
#line 846 "parse_tree_out.m"
                  {
#line 846 "parse_tree_out.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n    ;       ");
                  }
#line 845 "parse_tree_out.m"
                }
#line 844 "parse_tree_out.m"
                break;
#line 844 "parse_tree_out.m"
              case (MR_Integer) 1:
#line 842 "parse_tree_out.m"
                {
#line 843 "parse_tree_out.m"
                  {
#line 843 "parse_tree_out.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n    --->    ");
                  }
#line 842 "parse_tree_out.m"
                }
#line 844 "parse_tree_out.m"
                break;
#line 844 "parse_tree_out.m"
            }
#line 848 "parse_tree_out.m"
            {
#line 848 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(parse_tree__parse_tree_out__VarSet_1, parse_tree__parse_tree_out__Ctor_13);
            }
#line 849 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 849 "parse_tree_out.m"
            {
#line 849 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__3__tmp_copy_3 = parse_tree__parse_tree_out__Ctors_14;

#line 849 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__3_3 = parse_tree__parse_tree_out__HeadVar__3__tmp_copy_3;
#line 849 "parse_tree_out.m"
              parse_tree__parse_tree_out__First_2 = (MR_Integer) 0;
#line 849 "parse_tree_out.m"
            }
#line 849 "parse_tree_out.m"
            continue;
#line 840 "parse_tree_out.m"
          }
#line 839 "parse_tree_out.m"
      }
#line 839 "parse_tree_out.m"
      break;
#line 839 "parse_tree_out.m"
    }
#line 836 "parse_tree_out.m"
}

#line 822 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(
#line 822 "parse_tree_out.m"
  MR_Integer parse_tree__parse_tree_out__NumBits_4)
#line 822 "parse_tree_out.m"
{
#line 825 "parse_tree_out.m"
  {
#line 825 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 826 "parse_tree_out.m"
    {
#line 826 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n\twhere\t");
    }
#line 827 "parse_tree_out.m"
    {
#line 827 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "type_is_abstract_enum(");
    }
#line 828 "parse_tree_out.m"
    {
#line 828 "parse_tree_out.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__NumBits_4);
    }
#line 829 "parse_tree_out.m"
    {
#line 829 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 829 "parse_tree_out.m"
      return;
    }
#line 825 "parse_tree_out.m"
  }
#line 822 "parse_tree_out.m"
}

#line 684 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2(
#line 684 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 684 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 684 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 684 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 684 "parse_tree_out.m"
{
#line 684 "parse_tree_out.m"
  {
#line 684 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 684 "parse_tree_out.m"
    {
#line 684 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 684 "parse_tree_out.m"
      return;
    }
#line 684 "parse_tree_out.m"
  }
#line 684 "parse_tree_out.m"
}

#line 599 "parse_tree_out.m"
static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1(
#line 599 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 599 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
#line 599 "parse_tree_out.m"
{
#line 599 "parse_tree_out.m"
  {
#line 599 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
#line 599 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
#line 599 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_42;

#line 599 "parse_tree_out.m"
    {
#line 599 "parse_tree_out.m"
      parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_42 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__599__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
#line 599 "parse_tree_out.m"
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_42));
#line 599 "parse_tree_out.m"
    return parse_tree__parse_tree_out__wrapper_arg_2;
#line 599 "parse_tree_out.m"
  }
#line 599 "parse_tree_out.m"
}

#line 591 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(
#line 591 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 591 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemTypeDefn_6)
#line 591 "parse_tree_out.m"
{
#line 594 "parse_tree_out.m"
  {
#line 594 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 594 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_120_120;
#line 594 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 0)));
#line 594 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 1)));
#line 594 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 2)));
#line 594 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 3)));
#line 594 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 4)));
#line 594 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName_14;
#line 594 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Args_15;
#line 594 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeTerm_17;
#line 594 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_40_40;
#line 595 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 5)));

#line 597 "parse_tree_out.m"
    {
#line 597 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SymName0_8, &parse_tree__parse_tree_out__SymName_14);
    }
#line 598 "parse_tree_out.m"
    {
#line 598 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_12);
    }
#line 599 "parse_tree_out.m"
    {
#line 599 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 599 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_40_40, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1]));
#line 599 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_40_40, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1));
#line 599 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 599 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_40_40, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
#line 599 "parse_tree_out.m"
    }
#line 599 "parse_tree_out.m"
    {
#line 599 "parse_tree_out.m"
      parse_tree__parse_tree_out__Args_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[3], parse_tree__parse_tree_out__V_40_40, parse_tree__parse_tree_out__TypeParams_9);
    }
#line 4438 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 600 "parse_tree_out.m"
    {
#line 600 "parse_tree_out.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_120_120, parse_tree__parse_tree_out__SymName_14, parse_tree__parse_tree_out__Args_15, parse_tree__parse_tree_out__Context_12, &parse_tree__parse_tree_out__TypeTerm_17);
    }
#line 624 "parse_tree_out.m"
#line 624 "parse_tree_out.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out__TypeDefn_10)) {
#line 624 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 624 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 632 "parse_tree_out.m"
        {
#line 632 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__Ctors_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 0)));
#line 632 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 1)));
#line 632 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__MaybeDirectArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 2)));

#line 707 "parse_tree_out.m"
          {
#line 707 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- type ");
          }
#line 634 "parse_tree_out.m"
          {
#line 634 "parse_tree_out.m"
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_120_120, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
          }
#line 635 "parse_tree_out.m"
          {
#line 635 "parse_tree_out.m"
            parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 1, parse_tree__parse_tree_out__Ctors_23);
          }
#line 636 "parse_tree_out.m"
          {
#line 636 "parse_tree_out.m"
            parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out__MaybeUserEqComp_24, parse_tree__parse_tree_out__MaybeDirectArgs_25);
          }
#line 638 "parse_tree_out.m"
          {
#line 638 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 638 "parse_tree_out.m"
            return;
          }
#line 632 "parse_tree_out.m"
        }
#line 624 "parse_tree_out.m"
        break;
#line 624 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 625 "parse_tree_out.m"
        {
#line 625 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__Body_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 0)));

#line 707 "parse_tree_out.m"
          {
#line 707 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- type ");
          }
#line 627 "parse_tree_out.m"
          {
#line 627 "parse_tree_out.m"
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_120_120, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
          }
#line 628 "parse_tree_out.m"
          {
#line 628 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) " == ");
          }
#line 629 "parse_tree_out.m"
          {
#line 629 "parse_tree_out.m"
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__Body_22);
          }
#line 630 "parse_tree_out.m"
          {
#line 630 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 630 "parse_tree_out.m"
            return;
          }
#line 625 "parse_tree_out.m"
        }
#line 624 "parse_tree_out.m"
        break;
#line 624 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 602 "parse_tree_out.m"
        {
#line 602 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__Details_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 0)));

#line 4537 "parse_tree.parse_tree_out.c"
#line 4538 "parse_tree.parse_tree_out.c"
          switch (MR_tag((MR_Word) parse_tree__parse_tree_out__Details_18)) {
#line 4540 "parse_tree.parse_tree_out.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 4542 "parse_tree.parse_tree_out.c"
            case (MR_Integer) 0:
#line 4544 "parse_tree.parse_tree_out.c"
#line 4545 "parse_tree.parse_tree_out.c"
              switch (MR_unmkbody(parse_tree__parse_tree_out__Details_18)) {
#line 4547 "parse_tree.parse_tree_out.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 4549 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 0:
#line 4551 "parse_tree.parse_tree_out.c"
                  {
#line 707 "parse_tree_out.m"
                    {
#line 707 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) ":- type ");
                    }
#line 613 "parse_tree_out.m"
                    {
#line 613 "parse_tree_out.m"
                      parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out__TypeCtorInfo_120_120, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
                    }
#line 618 "parse_tree_out.m"
                    if ((parse_tree__parse_tree_out__Details_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "parse_tree_out.m"
                      {
#line 619 "parse_tree_out.m"
                      }
#line 618 "parse_tree_out.m"
                    else
#line 616 "parse_tree_out.m"
                      {
#line 616 "parse_tree_out.m"
                        MR_Integer parse_tree__parse_tree_out__NumBits_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Details_18, (MR_Integer) 0)));

#line 617 "parse_tree_out.m"
                        {
#line 617 "parse_tree_out.m"
                          parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(parse_tree__parse_tree_out__NumBits_21);
                        }
#line 616 "parse_tree_out.m"
                      }
#line 4583 "parse_tree.parse_tree_out.c"
                  }
#line 4585 "parse_tree.parse_tree_out.c"
                  break;
#line 4587 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 1:
#line 4589 "parse_tree.parse_tree_out.c"
                  {
#line 704 "parse_tree_out.m"
                    {
#line 704 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
                    }
#line 613 "parse_tree_out.m"
                    {
#line 613 "parse_tree_out.m"
                      parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out__TypeCtorInfo_120_120, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
                    }
#line 4601 "parse_tree.parse_tree_out.c"
                  }
#line 4603 "parse_tree.parse_tree_out.c"
                  break;
#line 4605 "parse_tree.parse_tree_out.c"
              }
#line 4607 "parse_tree.parse_tree_out.c"
              break;
#line 4609 "parse_tree.parse_tree_out.c"
            case (MR_Integer) 1:
#line 4611 "parse_tree.parse_tree_out.c"
              {
#line 707 "parse_tree_out.m"
                {
#line 707 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ":- type ");
                }
#line 613 "parse_tree_out.m"
                {
#line 613 "parse_tree_out.m"
                  parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out__TypeCtorInfo_120_120, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
                }
#line 618 "parse_tree_out.m"
                if ((parse_tree__parse_tree_out__Details_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "parse_tree_out.m"
                  {
#line 619 "parse_tree_out.m"
                  }
#line 618 "parse_tree_out.m"
                else
#line 616 "parse_tree_out.m"
                  {
#line 616 "parse_tree_out.m"
                    MR_Integer parse_tree__parse_tree_out__NumBits_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Details_18, (MR_Integer) 0)));

#line 617 "parse_tree_out.m"
                    {
#line 617 "parse_tree_out.m"
                      parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(parse_tree__parse_tree_out__NumBits_21);
                    }
#line 616 "parse_tree_out.m"
                  }
#line 4643 "parse_tree.parse_tree_out.c"
              }
#line 4645 "parse_tree.parse_tree_out.c"
              break;
#line 4647 "parse_tree.parse_tree_out.c"
          }
#line 623 "parse_tree_out.m"
          {
#line 623 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 623 "parse_tree_out.m"
            return;
          }
#line 602 "parse_tree_out.m"
        }
#line 624 "parse_tree_out.m"
        break;
#line 624 "parse_tree_out.m"
      case (MR_Integer) 3:
#line 624 "parse_tree_out.m"
#line 624 "parse_tree_out.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 0)))) {
#line 624 "parse_tree_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 624 "parse_tree_out.m"
          case (MR_Integer) 0:
#line 640 "parse_tree_out.m"
            {
#line 640 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__SolverTypeDetails_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 1)));
#line 640 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_83_83;
#line 640 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 2)));

#line 704 "parse_tree_out.m"
              {
#line 704 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
              }
#line 642 "parse_tree_out.m"
              {
#line 642 "parse_tree_out.m"
                parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_120_120, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
              }
#line 644 "parse_tree_out.m"
              {
#line 644 "parse_tree_out.m"
                parse_tree__parse_tree_out__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "parse_tree_out.m"
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__V_83_83, 0) = ((MR_Box) (parse_tree__parse_tree_out__SolverTypeDetails_26));
#line 644 "parse_tree_out.m"
              }
#line 643 "parse_tree_out.m"
              {
#line 643 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__TypeVarSet_11, parse_tree__parse_tree_out__V_83_83, parse_tree__parse_tree_out__MaybeUserEqComp_116, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 645 "parse_tree_out.m"
              {
#line 645 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 645 "parse_tree_out.m"
                return;
              }
#line 640 "parse_tree_out.m"
            }
#line 624 "parse_tree_out.m"
            break;
#line 624 "parse_tree_out.m"
          case (MR_Integer) 1:
#line 648 "parse_tree_out.m"
            {
#line 648 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__TypeCtorInfo_121_121;
#line 648 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ForeignType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 1)));
#line 648 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__Assertions_28;
#line 648 "parse_tree_out.m"
              MR_String parse_tree__parse_tree_out__ForeignTypeStr_33;
#line 648 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__AssertionsList_34;
#line 648 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 3)));
#line 648 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 2)));

#line 648 "parse_tree_out.m"
              parse_tree__parse_tree_out__Assertions_28 = (MR_Word) parse_tree__parse_tree_out__V_43_43;
#line 649 "parse_tree_out.m"
              {
#line 649 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_type(");
              }
#line 4738 "parse_tree.parse_tree_out.c"
#line 4739 "parse_tree.parse_tree_out.c"
              switch (MR_tag((MR_Word) parse_tree__parse_tree_out__ForeignType_27)) {
#line 4741 "parse_tree.parse_tree_out.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 4743 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 0:
#line 4745 "parse_tree.parse_tree_out.c"
                  {
#line 4747 "parse_tree.parse_tree_out.c"
                    MR_Word parse_tree__parse_tree_out__V_61_61;

#line 652 "parse_tree_out.m"
                    {
#line 652 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) "c, ");
                    }
#line 666 "parse_tree_out.m"
                    parse_tree__parse_tree_out__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ForeignType_27, (MR_Integer) 0)));
#line 666 "parse_tree_out.m"
                    parse_tree__parse_tree_out__ForeignTypeStr_33 = (MR_String) parse_tree__parse_tree_out__V_61_61;
#line 4759 "parse_tree.parse_tree_out.c"
                  }
#line 4761 "parse_tree.parse_tree_out.c"
                  break;
#line 4763 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 1:
#line 4765 "parse_tree.parse_tree_out.c"
                  {
#line 4767 "parse_tree.parse_tree_out.c"
                    MR_Word parse_tree__parse_tree_out__V_60_60;

#line 655 "parse_tree_out.m"
                    {
#line 655 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) "java, ");
                    }
#line 668 "parse_tree_out.m"
                    parse_tree__parse_tree_out__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__ForeignType_27, (MR_Integer) 0)));
#line 668 "parse_tree_out.m"
                    parse_tree__parse_tree_out__ForeignTypeStr_33 = (MR_String) parse_tree__parse_tree_out__V_60_60;
#line 4779 "parse_tree.parse_tree_out.c"
                  }
#line 4781 "parse_tree.parse_tree_out.c"
                  break;
#line 4783 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 2:
#line 4785 "parse_tree.parse_tree_out.c"
                  {
#line 4787 "parse_tree.parse_tree_out.c"
                    MR_Word parse_tree__parse_tree_out__V_59_59;

#line 658 "parse_tree_out.m"
                    {
#line 658 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) "csharp, ");
                    }
#line 670 "parse_tree_out.m"
                    parse_tree__parse_tree_out__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out__ForeignType_27, (MR_Integer) 0)));
#line 670 "parse_tree_out.m"
                    parse_tree__parse_tree_out__ForeignTypeStr_33 = (MR_String) parse_tree__parse_tree_out__V_59_59;
#line 4799 "parse_tree.parse_tree_out.c"
                  }
#line 4801 "parse_tree.parse_tree_out.c"
                  break;
#line 4803 "parse_tree.parse_tree_out.c"
                case (MR_Integer) 3:
#line 4805 "parse_tree.parse_tree_out.c"
                  {
#line 661 "parse_tree_out.m"
                    {
#line 661 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) "erlang, ");
                    }
#line 673 "parse_tree_out.m"
                    parse_tree__parse_tree_out__ForeignTypeStr_33 = (MR_String) "";
#line 4814 "parse_tree.parse_tree_out.c"
                  }
#line 4816 "parse_tree.parse_tree_out.c"
                  break;
#line 4818 "parse_tree.parse_tree_out.c"
              }
#line 663 "parse_tree_out.m"
              {
#line 663 "parse_tree_out.m"
                parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_120_120, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
              }
#line 664 "parse_tree_out.m"
              {
#line 664 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ", \"");
              }
#line 675 "parse_tree_out.m"
              {
#line 675 "parse_tree_out.m"
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__ForeignTypeStr_33);
              }
#line 676 "parse_tree_out.m"
              {
#line 676 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
#line 4840 "parse_tree.parse_tree_out.c"
              parse_tree__parse_tree_out__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;
#line 677 "parse_tree_out.m"
              {
#line 677 "parse_tree_out.m"
                mercury__set__to_sorted_list_2_p_0(parse_tree__parse_tree_out__TypeCtorInfo_121_121, parse_tree__parse_tree_out__Assertions_28, &parse_tree__parse_tree_out__AssertionsList_34);
              }
#line 680 "parse_tree_out.m"
              if ((parse_tree__parse_tree_out__AssertionsList_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "parse_tree_out.m"
                {
#line 679 "parse_tree_out.m"
                }
#line 680 "parse_tree_out.m"
              else
#line 681 "parse_tree_out.m"
                {
#line 682 "parse_tree_out.m"
                  {
#line 682 "parse_tree_out.m"
                    mercury__io__write_string_3_p_0((MR_String) ", [");
                  }
#line 683 "parse_tree_out.m"
                  {
#line 683 "parse_tree_out.m"
                    mercury__io__write_list_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_121_121, parse_tree__parse_tree_out__AssertionsList_34, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[2]);
                  }
#line 685 "parse_tree_out.m"
                  {
#line 685 "parse_tree_out.m"
                    mercury__io__write_string_3_p_0((MR_String) "]");
                  }
#line 681 "parse_tree_out.m"
                }
#line 687 "parse_tree_out.m"
              {
#line 687 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 688 "parse_tree_out.m"
              {
#line 688 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out__MaybeUserEqComp_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 690 "parse_tree_out.m"
              {
#line 690 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 690 "parse_tree_out.m"
                return;
              }
#line 648 "parse_tree_out.m"
            }
#line 624 "parse_tree_out.m"
            break;
#line 624 "parse_tree_out.m"
        }
#line 624 "parse_tree_out.m"
        break;
#line 624 "parse_tree_out.m"
    }
#line 594 "parse_tree_out.m"
  }
#line 591 "parse_tree_out.m"
}

#line 537 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_4_p_0(
#line 537 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 537 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
#line 537 "parse_tree_out.m"
{
#line 540 "parse_tree_out.m"
  while (MR_TRUE)
#line 540 "parse_tree_out.m"
    {
#line 540 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 540 "parse_tree_out.m"
      {
#line 540 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 540 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 540 "parse_tree_out.m"
          {
#line 540 "parse_tree_out.m"
          }
#line 540 "parse_tree_out.m"
        else
#line 541 "parse_tree_out.m"
          {
#line 541 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Item_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 541 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 542 "parse_tree_out.m"
            {
#line 542 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_item_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__Item_10);
            }
#line 543 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 543 "parse_tree_out.m"
            {
#line 543 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__Items_11;

#line 543 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 543 "parse_tree_out.m"
            }
#line 543 "parse_tree_out.m"
            continue;
#line 541 "parse_tree_out.m"
          }
#line 540 "parse_tree_out.m"
      }
#line 540 "parse_tree_out.m"
      break;
#line 540 "parse_tree_out.m"
    }
#line 537 "parse_tree_out.m"
}

#line 516 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(
#line 516 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 516 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Use_6)
#line 516 "parse_tree_out.m"
{
#line 519 "parse_tree_out.m"
  {
#line 519 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 519 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Use_6, (MR_Integer) 0)));
#line 519 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Use_6, (MR_Integer) 1)));
#line 520 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Use_6, (MR_Integer) 2)));

#line 522 "parse_tree_out.m"
    {
#line 522 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_9);
    }
#line 529 "parse_tree_out.m"
    {
#line 529 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- ");
    }
#line 530 "parse_tree_out.m"
    {
#line 530 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "use_module");
    }
#line 531 "parse_tree_out.m"
    {
#line 531 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 532 "parse_tree_out.m"
    {
#line 532 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 533 "parse_tree_out.m"
    {
#line 533 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 533 "parse_tree_out.m"
      return;
    }
#line 519 "parse_tree_out.m"
  }
#line 516 "parse_tree_out.m"
}

#line 502 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(
#line 502 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 502 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Avail_6)
#line 502 "parse_tree_out.m"
{
#line 505 "parse_tree_out.m"
  {
#line 505 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 505 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8;
#line 505 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_9;
#line 505 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__Decl_11;

#line 509 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Avail_6)) == (MR_mktag((MR_Integer) 0))))
#line 507 "parse_tree_out.m"
      {
#line 507 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_15_15 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Avail_6), (MR_Integer) 0);
#line 507 "parse_tree_out.m"
        MR_Integer parse_tree__parse_tree_out___SeqNum_10;

#line 507 "parse_tree_out.m"
        parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, (MR_Integer) 0)));
#line 507 "parse_tree_out.m"
        parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, (MR_Integer) 1)));
#line 507 "parse_tree_out.m"
        parse_tree__parse_tree_out___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, (MR_Integer) 2)));
#line 508 "parse_tree_out.m"
        parse_tree__parse_tree_out__Decl_11 = (MR_String) "import_module";
#line 507 "parse_tree_out.m"
      }
#line 509 "parse_tree_out.m"
    else
#line 510 "parse_tree_out.m"
      {
#line 510 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_14_14 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Avail_6), (MR_Integer) 1);
#line 510 "parse_tree_out.m"
        MR_Integer parse_tree__parse_tree_out___SeqNum_18;

#line 510 "parse_tree_out.m"
        parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_14_14, (MR_Integer) 0)));
#line 510 "parse_tree_out.m"
        parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_14_14, (MR_Integer) 1)));
#line 510 "parse_tree_out.m"
        parse_tree__parse_tree_out___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_14_14, (MR_Integer) 2)));
#line 511 "parse_tree_out.m"
        parse_tree__parse_tree_out__Decl_11 = (MR_String) "use_module";
#line 510 "parse_tree_out.m"
      }
#line 513 "parse_tree_out.m"
    {
#line 513 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_9);
    }
#line 529 "parse_tree_out.m"
    {
#line 529 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- ");
    }
#line 530 "parse_tree_out.m"
    {
#line 530 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Decl_11);
    }
#line 531 "parse_tree_out.m"
    {
#line 531 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 532 "parse_tree_out.m"
    {
#line 532 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 533 "parse_tree_out.m"
    {
#line 533 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 533 "parse_tree_out.m"
      return;
    }
#line 505 "parse_tree_out.m"
  }
#line 502 "parse_tree_out.m"
}

#line 493 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(
#line 493 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_5,
#line 493 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ItemInclude_6)
#line 493 "parse_tree_out.m"
{
#line 496 "parse_tree_out.m"
  {
#line 496 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 496 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInclude_6, (MR_Integer) 0)));
#line 496 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInclude_6, (MR_Integer) 1)));
#line 497 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInclude_6, (MR_Integer) 2)));

#line 499 "parse_tree_out.m"
    {
#line 499 "parse_tree_out.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_9);
    }
#line 529 "parse_tree_out.m"
    {
#line 529 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- ");
    }
#line 530 "parse_tree_out.m"
    {
#line 530 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "include_module");
    }
#line 531 "parse_tree_out.m"
    {
#line 531 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 532 "parse_tree_out.m"
    {
#line 532 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 533 "parse_tree_out.m"
    {
#line 533 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 533 "parse_tree_out.m"
      return;
    }
#line 496 "parse_tree_out.m"
  }
#line 493 "parse_tree_out.m"
}

#line 307 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2(
#line 307 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 307 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 307 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 307 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 307 "parse_tree_out.m"
{
#line 307 "parse_tree_out.m"
  {
#line 307 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 307 "parse_tree_out.m"
    {
#line 307 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 307 "parse_tree_out.m"
      return;
    }
#line 307 "parse_tree_out.m"
  }
#line 307 "parse_tree_out.m"
}

#line 305 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1(
#line 305 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 305 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 305 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 305 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 305 "parse_tree_out.m"
{
#line 305 "parse_tree_out.m"
  {
#line 305 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 305 "parse_tree_out.m"
    {
#line 305 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 305 "parse_tree_out.m"
      return;
    }
#line 305 "parse_tree_out.m"
  }
#line 305 "parse_tree_out.m"
}

#line 294 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(
#line 294 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__Info_1,
#line 294 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__MaybePrevSectionKind_2,
#line 294 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
#line 294 "parse_tree_out.m"
{
#line 298 "parse_tree_out.m"
  while (MR_TRUE)
#line 298 "parse_tree_out.m"
    {
#line 298 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 298 "parse_tree_out.m"
      {
#line 298 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 298 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "parse_tree_out.m"
          {
#line 298 "parse_tree_out.m"
          }
#line 298 "parse_tree_out.m"
        else
#line 300 "parse_tree_out.m"
          {
#line 300 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Component_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 0)));
#line 300 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Components_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 1)));
#line 300 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__MaybeCurSectionKind_21;

#line 311 "parse_tree_out.m"
            if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Component_13)) == (MR_mktag((MR_Integer) 1))))
#line 313 "parse_tree_out.m"
              {
#line 313 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__SubParseTree_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Component_13, (MR_Integer) 2)));
#line 313 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__Lang_24;
#line 313 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__SectionKind_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Component_13, (MR_Integer) 0)));
#line 312 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out___SectionContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Component_13, (MR_Integer) 1)));

#line 314 "parse_tree_out.m"
                {
#line 314 "parse_tree_out.m"
                  parse_tree__parse_tree_out__Lang_24 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_1);
                }
#line 325 "parse_tree_out.m"
#line 325 "parse_tree_out.m"
                switch (parse_tree__parse_tree_out__Lang_24) {
#line 325 "parse_tree_out.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 325 "parse_tree_out.m"
                  case (MR_Integer) 1:
#line 5303 "parse_tree.parse_tree_out.c"
#line 5304 "parse_tree.parse_tree_out.c"
                    switch (parse_tree__parse_tree_out__SectionKind_45) {
#line 5306 "parse_tree.parse_tree_out.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 5308 "parse_tree.parse_tree_out.c"
                      case (MR_Integer) 1:
#line 5310 "parse_tree.parse_tree_out.c"
                        {
#line 419 "parse_tree_out.m"
                          {
#line 419 "parse_tree_out.m"
                            mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                          }
#line 333 "parse_tree_out.m"
                          {
#line 333 "parse_tree_out.m"
                            mercury__io__write_string_3_p_0((MR_String) "% nested submodule in implementation\n");
                          }
#line 5322 "parse_tree.parse_tree_out.c"
                        }
#line 5324 "parse_tree.parse_tree_out.c"
                        break;
#line 5326 "parse_tree.parse_tree_out.c"
                      case (MR_Integer) 0:
#line 5328 "parse_tree.parse_tree_out.c"
                        {
#line 416 "parse_tree_out.m"
                          {
#line 416 "parse_tree_out.m"
                            mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                          }
#line 330 "parse_tree_out.m"
                          {
#line 330 "parse_tree_out.m"
                            mercury__io__write_string_3_p_0((MR_String) "% nested submodule in interface\n");
                          }
#line 5340 "parse_tree.parse_tree_out.c"
                        }
#line 5342 "parse_tree.parse_tree_out.c"
                        break;
#line 5344 "parse_tree.parse_tree_out.c"
                    }
#line 325 "parse_tree_out.m"
                    break;
#line 325 "parse_tree_out.m"
                  case (MR_Integer) 0:
#line 322 "parse_tree_out.m"
                    {
#line 318 "parse_tree_out.m"
                      MR_Word parse_tree__parse_tree_out__PrevSectionKind_25;

#line 318 "parse_tree_out.m"
                      parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybePrevSectionKind_2)) == (MR_mktag((MR_Integer) 1)));
#line 318 "parse_tree_out.m"
                      if (parse_tree__parse_tree_out__succeeded)
#line 318 "parse_tree_out.m"
                        {
#line 318 "parse_tree_out.m"
                          parse_tree__parse_tree_out__PrevSectionKind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybePrevSectionKind_2, (MR_Integer) 0)));
#line 319 "parse_tree_out.m"
                          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__PrevSectionKind_25 == parse_tree__parse_tree_out__SectionKind_45);
#line 318 "parse_tree_out.m"
                        }
#line 322 "parse_tree_out.m"
                      if (parse_tree__parse_tree_out__succeeded)
#line 322 "parse_tree_out.m"
                        {
#line 322 "parse_tree_out.m"
                        }
#line 322 "parse_tree_out.m"
                      else
#line 415 "parse_tree_out.m"
#line 415 "parse_tree_out.m"
                        switch (parse_tree__parse_tree_out__SectionKind_45) {
#line 415 "parse_tree_out.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 415 "parse_tree_out.m"
                          case (MR_Integer) 1:
#line 418 "parse_tree_out.m"
                            {
#line 419 "parse_tree_out.m"
                              {
#line 419 "parse_tree_out.m"
                                mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                              }
#line 418 "parse_tree_out.m"
                            }
#line 415 "parse_tree_out.m"
                            break;
#line 415 "parse_tree_out.m"
                          case (MR_Integer) 0:
#line 415 "parse_tree_out.m"
                            {
#line 416 "parse_tree_out.m"
                              {
#line 416 "parse_tree_out.m"
                                mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                              }
#line 415 "parse_tree_out.m"
                            }
#line 415 "parse_tree_out.m"
                            break;
#line 415 "parse_tree_out.m"
                        }
#line 322 "parse_tree_out.m"
                    }
#line 325 "parse_tree_out.m"
                    break;
#line 325 "parse_tree_out.m"
                }
#line 336 "parse_tree_out.m"
                {
#line 336 "parse_tree_out.m"
                  parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__SubParseTree_23);
                }
#line 337 "parse_tree_out.m"
                parse_tree__parse_tree_out__MaybeCurSectionKind_21 = parse_tree__parse_tree_out__MaybePrevSectionKind_2;
#line 313 "parse_tree_out.m"
              }
#line 311 "parse_tree_out.m"
            else
#line 303 "parse_tree_out.m"
              {
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__TypeCtorInfo_49_49;
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__TypeCtorInfo_50_50;
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__TypeCtorInfo_54_54;
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__SectionKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 0)));
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__InclsCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 2)));
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__AvailsCord_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 3)));
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__ItemsCord_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 4)));
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_36_36;
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_37_37;
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_39_39;
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_40_40;
#line 303 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_42_42;
#line 302 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 1)));
#line 305 "parse_tree_out.m"
                MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_38_38;
#line 307 "parse_tree_out.m"
                MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_41_41;

#line 415 "parse_tree_out.m"
#line 415 "parse_tree_out.m"
                switch (parse_tree__parse_tree_out__SectionKind_16) {
#line 415 "parse_tree_out.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 415 "parse_tree_out.m"
                  case (MR_Integer) 1:
#line 418 "parse_tree_out.m"
                    {
#line 419 "parse_tree_out.m"
                      {
#line 419 "parse_tree_out.m"
                        mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                      }
#line 418 "parse_tree_out.m"
                    }
#line 415 "parse_tree_out.m"
                    break;
#line 415 "parse_tree_out.m"
                  case (MR_Integer) 0:
#line 415 "parse_tree_out.m"
                    {
#line 416 "parse_tree_out.m"
                      {
#line 416 "parse_tree_out.m"
                        mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                      }
#line 415 "parse_tree_out.m"
                    }
#line 415 "parse_tree_out.m"
                    break;
#line 415 "parse_tree_out.m"
                }
#line 305 "parse_tree_out.m"
                {
#line 305 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 305 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_36_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
#line 305 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_36_36, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1));
#line 305 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 305 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_36_36, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_1));
#line 305 "parse_tree_out.m"
                }
#line 5505 "parse_tree.parse_tree_out.c"
                parse_tree__parse_tree_out__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
#line 306 "parse_tree_out.m"
                {
#line 306 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_37_37 = mercury__cord__list_1_f_0(parse_tree__parse_tree_out__TypeCtorInfo_49_49, parse_tree__parse_tree_out__InclsCord_18);
                }
#line 5512 "parse_tree.parse_tree_out.c"
                parse_tree__parse_tree_out__TypeCtorInfo_50_50 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 305 "parse_tree_out.m"
                {
#line 305 "parse_tree_out.m"
                  mercury__list__foldl_4_p_2(parse_tree__parse_tree_out__TypeCtorInfo_49_49, parse_tree__parse_tree_out__TypeCtorInfo_50_50, parse_tree__parse_tree_out__V_36_36, parse_tree__parse_tree_out__V_37_37, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_38_38);
                }
#line 307 "parse_tree_out.m"
                {
#line 307 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_39_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 307 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_39_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2));
#line 307 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 307 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_39_39, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_1));
#line 307 "parse_tree_out.m"
                }
#line 5533 "parse_tree.parse_tree_out.c"
                parse_tree__parse_tree_out__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 308 "parse_tree_out.m"
                {
#line 308 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_40_40 = mercury__cord__list_1_f_0(parse_tree__parse_tree_out__TypeCtorInfo_54_54, parse_tree__parse_tree_out__AvailsCord_19);
                }
#line 307 "parse_tree_out.m"
                {
#line 307 "parse_tree_out.m"
                  mercury__list__foldl_4_p_2(parse_tree__parse_tree_out__TypeCtorInfo_54_54, parse_tree__parse_tree_out__TypeCtorInfo_50_50, parse_tree__parse_tree_out__V_39_39, parse_tree__parse_tree_out__V_40_40, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_41_41);
                }
#line 309 "parse_tree_out.m"
                {
#line 309 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_42_42 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__parse_tree_out__ItemsCord_20);
                }
#line 309 "parse_tree_out.m"
                {
#line 309 "parse_tree_out.m"
                  parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__V_42_42);
                }
#line 310 "parse_tree_out.m"
                {
#line 310 "parse_tree_out.m"
                  parse_tree__parse_tree_out__MaybeCurSectionKind_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 310 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeCurSectionKind_21, 0) = ((MR_Box) (parse_tree__parse_tree_out__SectionKind_16));
#line 310 "parse_tree_out.m"
                }
#line 303 "parse_tree_out.m"
              }
#line 339 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 339 "parse_tree_out.m"
            {
#line 339 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__MaybePrevSectionKind__tmp_copy_2 = parse_tree__parse_tree_out__MaybeCurSectionKind_21;
#line 339 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__3__tmp_copy_3 = parse_tree__parse_tree_out__Components_14;

#line 339 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__3_3 = parse_tree__parse_tree_out__HeadVar__3__tmp_copy_3;
#line 339 "parse_tree_out.m"
              parse_tree__parse_tree_out__MaybePrevSectionKind_2 = parse_tree__parse_tree_out__MaybePrevSectionKind__tmp_copy_2;
#line 339 "parse_tree_out.m"
            }
#line 339 "parse_tree_out.m"
            continue;
#line 300 "parse_tree_out.m"
          }
#line 298 "parse_tree_out.m"
      }
#line 298 "parse_tree_out.m"
      break;
#line 298 "parse_tree_out.m"
    }
#line 294 "parse_tree_out.m"
}

#line 280 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(
#line 280 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__ModuleName_5,
#line 280 "parse_tree_out.m"
  MR_Word parse_tree__parse_tree_out__VersionNumbers_6)
#line 280 "parse_tree_out.m"
{
#line 283 "parse_tree_out.m"
  {
#line 283 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 283 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__V_12_12;

#line 284 "parse_tree_out.m"
    {
#line 284 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- version_numbers(");
    }
#line 285 "parse_tree_out.m"
    {
#line 285 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_12_12 = recompilation__version__version_numbers_version_number_0_f_0();
    }
#line 285 "parse_tree_out.m"
    {
#line 285 "parse_tree_out.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__V_12_12);
    }
#line 286 "parse_tree_out.m"
    {
#line 286 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 287 "parse_tree_out.m"
    {
#line 287 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_5);
    }
#line 288 "parse_tree_out.m"
    {
#line 288 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 289 "parse_tree_out.m"
    {
#line 289 "parse_tree_out.m"
      recompilation__version__write_version_numbers_3_p_0(parse_tree__parse_tree_out__VersionNumbers_6);
    }
#line 290 "parse_tree_out.m"
    {
#line 290 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 290 "parse_tree_out.m"
      return;
    }
#line 283 "parse_tree_out.m"
  }
#line 280 "parse_tree_out.m"
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
#line 851 "parse_tree_out.m"
  {
#line 851 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 851 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_48;
#line 851 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ExistQVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 0)));
#line 851 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 1)));
#line 851 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 2)));
#line 851 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 3)));
#line 851 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 4)));
#line 851 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__Name_14;
#line 851 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ParenWrap_15;
#line 851 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__BraceWrap_18;
#line 851 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_43_43;
#line 851 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__V_44_44;
#line 852 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Ctxt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 5)));
#line 871 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__lo_0;
#line 871 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__hi_1;
#line 871 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__mid_2;
#line 871 "parse_tree_out.m"
    MR_Integer parse_tree__parse_tree_out__result_3;
#line 902 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_45_45;

#line 856 "parse_tree_out.m"
    {
#line 856 "parse_tree_out.m"
      parse_tree__parse_tree_out__Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out__SymName_10);
    }
#line 857 "parse_tree_out.m"
    {
#line 857 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_quantifier_5_p_0(parse_tree__parse_tree_out__TypeVarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out__ExistQVars_8);
    }
#line 861 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__ExistQVars_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "parse_tree_out.m"
      parse_tree__parse_tree_out__ParenWrap_15 = (MR_Integer) 0;
#line 861 "parse_tree_out.m"
    else
#line 862 "parse_tree_out.m"
      {
#line 863 "parse_tree_out.m"
        parse_tree__parse_tree_out__ParenWrap_15 = (MR_Integer) 1;
#line 864 "parse_tree_out.m"
        {
#line 864 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 862 "parse_tree_out.m"
      }
#line 869 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__Arity_12 == (MR_Integer) 2);
#line 869 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 869 "parse_tree_out.m"
      {
#line 871 "parse_tree_out.m"
        /* binary string simple lookup switch */
#line 871 "parse_tree_out.m"
        parse_tree__parse_tree_out__lo_0 = (MR_Integer) 0;
#line 871 "parse_tree_out.m"
        parse_tree__parse_tree_out__hi_1 = (MR_Integer) 3;
#line 871 "parse_tree_out.m"
        do
#line 871 "parse_tree_out.m"
          {
#line 871 "parse_tree_out.m"
            parse_tree__parse_tree_out__mid_2 = (((parse_tree__parse_tree_out__lo_0 + parse_tree__parse_tree_out__hi_1)) / (MR_Integer) 2);
#line 871 "parse_tree_out.m"
            parse_tree__parse_tree_out__result_3 = MR_strcmp(parse_tree__parse_tree_out__Name_14, ((&parse_tree__parse_tree_out_vector_common_5[0 + parse_tree__parse_tree_out__mid_2]))->parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0);
#line 871 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__result_3 == (MR_Integer) 0))
#line 871 "parse_tree_out.m"
              {
#line 871 "parse_tree_out.m"
                parse_tree__parse_tree_out__succeeded = MR_TRUE;
#line 871 "parse_tree_out.m"
                /* jump out of search loop */
#line 871 "parse_tree_out.m"
                goto label_0;
#line 871 "parse_tree_out.m"
              }
#line 871 "parse_tree_out.m"
            else
#line 871 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__result_3 < (MR_Integer) 0))
#line 871 "parse_tree_out.m"
              parse_tree__parse_tree_out__hi_1 = (parse_tree__parse_tree_out__mid_2 - (MR_Integer) 1);
#line 871 "parse_tree_out.m"
            else
#line 871 "parse_tree_out.m"
              parse_tree__parse_tree_out__lo_0 = (parse_tree__parse_tree_out__mid_2 + (MR_Integer) 1);
#line 871 "parse_tree_out.m"
          }
#line 871 "parse_tree_out.m"
        while ((parse_tree__parse_tree_out__lo_0 <= parse_tree__parse_tree_out__hi_1));
#line 871 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = MR_FALSE;
#line 871 "parse_tree_out.m"
      label_0:;
#line 869 "parse_tree_out.m"
      }
#line 878 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 876 "parse_tree_out.m"
      {
#line 876 "parse_tree_out.m"
        parse_tree__parse_tree_out__BraceWrap_18 = (MR_Integer) 1;
#line 877 "parse_tree_out.m"
        {
#line 877 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
#line 876 "parse_tree_out.m"
      }
#line 878 "parse_tree_out.m"
    else
#line 879 "parse_tree_out.m"
      parse_tree__parse_tree_out__BraceWrap_18 = (MR_Integer) 0;
#line 888 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__Args_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 889 "parse_tree_out.m"
      {
#line 889 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_29_29;

#line 890 "parse_tree_out.m"
        {
#line 890 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 890 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_29_29, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_14));
#line 890 "parse_tree_out.m"
        }
#line 890 "parse_tree_out.m"
        {
#line 890 "parse_tree_out.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__V_29_29);
        }
#line 894 "parse_tree_out.m"
        {
#line 894 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 889 "parse_tree_out.m"
      }
#line 888 "parse_tree_out.m"
    else
#line 882 "parse_tree_out.m"
      {
#line 882 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Args_11, (MR_Integer) 0)));
#line 882 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Rest_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Args_11, (MR_Integer) 1)));
#line 882 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_33_33;
#line 882 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Name_54;
#line 882 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Type_55;
#line 915 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out___Width_56;
#line 915 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out___Context_57;

#line 883 "parse_tree_out.m"
        {
#line 883 "parse_tree_out.m"
          parse_tree__parse_tree_out__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 883 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_33_33, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_14));
#line 883 "parse_tree_out.m"
        }
#line 883 "parse_tree_out.m"
        {
#line 883 "parse_tree_out.m"
          parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__V_33_33);
        }
#line 884 "parse_tree_out.m"
        {
#line 884 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 915 "parse_tree_out.m"
        parse_tree__parse_tree_out__Name_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 0)));
#line 915 "parse_tree_out.m"
        parse_tree__parse_tree_out__Type_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 1)));
#line 915 "parse_tree_out.m"
        parse_tree__parse_tree_out___Width_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 2)));
#line 915 "parse_tree_out.m"
        parse_tree__parse_tree_out___Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 3)));
#line 931 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__Name_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "parse_tree_out.m"
          {
#line 931 "parse_tree_out.m"
          }
#line 931 "parse_tree_out.m"
        else
#line 932 "parse_tree_out.m"
          {
#line 932 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__FieldName_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Name_54, (MR_Integer) 0)));
#line 932 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Name_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_64, (MR_Integer) 0)));
#line 933 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out___Ctxt_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_64, (MR_Integer) 1)));

#line 934 "parse_tree_out.m"
            {
#line 934 "parse_tree_out.m"
              parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__Name_66);
            }
#line 935 "parse_tree_out.m"
            {
#line 935 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) " :: ");
            }
#line 932 "parse_tree_out.m"
          }
#line 917 "parse_tree_out.m"
        {
#line 917 "parse_tree_out.m"
          parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__TypeVarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out__Type_55);
        }
#line 886 "parse_tree_out.m"
        {
#line 886 "parse_tree_out.m"
          parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(parse_tree__parse_tree_out__TypeVarSet_5, parse_tree__parse_tree_out__Rest_20);
        }
#line 887 "parse_tree_out.m"
        {
#line 887 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 882 "parse_tree_out.m"
      }
#line 899 "parse_tree_out.m"
#line 899 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__BraceWrap_18) {
#line 899 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 899 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 900 "parse_tree_out.m"
        {
#line 900 "parse_tree_out.m"
        }
#line 899 "parse_tree_out.m"
        break;
#line 899 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 897 "parse_tree_out.m"
        {
#line 898 "parse_tree_out.m"
          {
#line 898 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) " }");
          }
#line 897 "parse_tree_out.m"
        }
#line 899 "parse_tree_out.m"
        break;
#line 899 "parse_tree_out.m"
    }
#line 902 "parse_tree_out.m"
    parse_tree__parse_tree_out__V_43_43 = (MR_Integer) 0;
#line 902 "parse_tree_out.m"
    parse_tree__parse_tree_out__V_44_44 = (MR_String) "=>";
#line 6004 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeClassInfo_for_output_48 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
#line 902 "parse_tree_out.m"
    {
#line 902 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(parse_tree__parse_tree_out__TypeClassInfo_for_output_48, parse_tree__parse_tree_out__TypeVarSet_5, parse_tree__parse_tree_out__V_43_43, parse_tree__parse_tree_out__V_44_44, parse_tree__parse_tree_out__Constraints_9, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_45_45);
    }
#line 906 "parse_tree_out.m"
#line 906 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__ParenWrap_15) {
#line 906 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 906 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 905 "parse_tree_out.m"
        {
#line 905 "parse_tree_out.m"
        }
#line 906 "parse_tree_out.m"
        break;
#line 906 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 907 "parse_tree_out.m"
        {
#line 908 "parse_tree_out.m"
          {
#line 908 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
#line 908 "parse_tree_out.m"
            return;
          }
#line 907 "parse_tree_out.m"
        }
#line 906 "parse_tree_out.m"
        break;
#line 906 "parse_tree_out.m"
    }
#line 851 "parse_tree_out.m"
  }
#line 92 "parse_tree_out.m"
}

#line 813 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0_1(
#line 813 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 813 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 813 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 813 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 813 "parse_tree_out.m"
{
#line 813 "parse_tree_out.m"
  {
#line 813 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 813 "parse_tree_out.m"
    {
#line 813 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 813 "parse_tree_out.m"
      return;
    }
#line 813 "parse_tree_out.m"
  }
#line 813 "parse_tree_out.m"
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
#line 718 "parse_tree_out.m"
  {
#line 718 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 713 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 713 "parse_tree_out.m"
      {
#line 714 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__MaybeUserEqComp_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 715 "parse_tree_out.m"
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "parse_tree_out.m"
      }
#line 718 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 718 "parse_tree_out.m"
      {
#line 718 "parse_tree_out.m"
      }
#line 718 "parse_tree_out.m"
    else
#line 728 "parse_tree_out.m"
      {
#line 728 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeUnifyPred_17;
#line 728 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeComparePred_18;
#line 725 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeUnifyPred0_15;
#line 725 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__MaybeComparePred0_16;
#line 720 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__UserEqComp_14;
#line 730 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_32_32;
#line 730 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__V_19_19;

#line 720 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeUserEqComp_11)) == (MR_mktag((MR_Integer) 1)));
#line 720 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 720 "parse_tree_out.m"
          {
#line 720 "parse_tree_out.m"
            parse_tree__parse_tree_out__UserEqComp_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUserEqComp_11, (MR_Integer) 0)));
#line 721 "parse_tree_out.m"
            parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__UserEqComp_14)) == (MR_mktag((MR_Integer) 0)));
#line 721 "parse_tree_out.m"
            if (parse_tree__parse_tree_out__succeeded)
#line 721 "parse_tree_out.m"
              {
#line 721 "parse_tree_out.m"
                parse_tree__parse_tree_out__MaybeUnifyPred0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__UserEqComp_14, (MR_Integer) 0)));
#line 721 "parse_tree_out.m"
                parse_tree__parse_tree_out__MaybeComparePred0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__UserEqComp_14, (MR_Integer) 1)));
#line 721 "parse_tree_out.m"
              }
#line 720 "parse_tree_out.m"
          }
#line 725 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 723 "parse_tree_out.m"
          {
#line 723 "parse_tree_out.m"
            parse_tree__parse_tree_out__MaybeUnifyPred_17 = parse_tree__parse_tree_out__MaybeUnifyPred0_15;
#line 724 "parse_tree_out.m"
            parse_tree__parse_tree_out__MaybeComparePred_18 = parse_tree__parse_tree_out__MaybeComparePred0_16;
#line 723 "parse_tree_out.m"
          }
#line 725 "parse_tree_out.m"
        else
#line 726 "parse_tree_out.m"
          {
#line 726 "parse_tree_out.m"
            parse_tree__parse_tree_out__MaybeUnifyPred_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 727 "parse_tree_out.m"
            parse_tree__parse_tree_out__MaybeComparePred_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 726 "parse_tree_out.m"
          }
#line 729 "parse_tree_out.m"
        {
#line 729 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n\twhere\t");
        }
#line 730 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeUserEqComp_11)) == (MR_mktag((MR_Integer) 1)));
#line 730 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 730 "parse_tree_out.m"
          {
#line 730 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUserEqComp_11, (MR_Integer) 0)));
#line 730 "parse_tree_out.m"
            parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 730 "parse_tree_out.m"
            if (parse_tree__parse_tree_out__succeeded)
#line 730 "parse_tree_out.m"
              parse_tree__parse_tree_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__V_32_32, (MR_Integer) 0)));
#line 730 "parse_tree_out.m"
          }
#line 732 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 731 "parse_tree_out.m"
          {
#line 731 "parse_tree_out.m"
            {
#line 731 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "type_is_abstract_noncanonical");
            }
#line 731 "parse_tree_out.m"
          }
#line 732 "parse_tree_out.m"
        else
#line 746 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "parse_tree_out.m"
          {
#line 747 "parse_tree_out.m"
          }
#line 746 "parse_tree_out.m"
        else
#line 734 "parse_tree_out.m"
          {
#line 734 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeSolverTypeDetails_10, (MR_Integer) 0)));
#line 734 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__RepresentationType_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 0)));
#line 734 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__HowToInit_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 1)));
#line 734 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__GroundInst_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 2)));
#line 734 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__AnyInst_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 3)));
#line 734 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__MutableInfos_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 4)));
#line 734 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__Lang_65;
#line 734 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__EmptyInstVarSet_66;

#line 792 "parse_tree_out.m"
            {
#line 792 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "representation is ");
            }
#line 793 "parse_tree_out.m"
            {
#line 793 "parse_tree_out.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__TypeVarSet_9, (MR_Integer) 0, parse_tree__parse_tree_out__RepresentationType_59);
            }
#line 796 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__HowToInit_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "parse_tree_out.m"
              {
#line 795 "parse_tree_out.m"
              }
#line 796 "parse_tree_out.m"
            else
#line 797 "parse_tree_out.m"
              {
#line 797 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__InitPred_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HowToInit_60, (MR_Integer) 0)));

#line 798 "parse_tree_out.m"
                {
#line 798 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\tinitialisation is ");
                }
#line 799 "parse_tree_out.m"
                {
#line 799 "parse_tree_out.m"
                  parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__InitPred_64);
                }
#line 797 "parse_tree_out.m"
              }
#line 801 "parse_tree_out.m"
            {
#line 801 "parse_tree_out.m"
              parse_tree__parse_tree_out__Lang_65 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_8);
            }
#line 802 "parse_tree_out.m"
            {
#line 802 "parse_tree_out.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out__EmptyInstVarSet_66);
            }
#line 803 "parse_tree_out.m"
            {
#line 803 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\tground is ");
            }
#line 804 "parse_tree_out.m"
            {
#line 804 "parse_tree_out.m"
              parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_65, parse_tree__parse_tree_out__EmptyInstVarSet_66, parse_tree__parse_tree_out__GroundInst_61);
            }
#line 805 "parse_tree_out.m"
            {
#line 805 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\tany is ");
            }
#line 806 "parse_tree_out.m"
            {
#line 806 "parse_tree_out.m"
              parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_65, parse_tree__parse_tree_out__EmptyInstVarSet_66, parse_tree__parse_tree_out__AnyInst_62);
            }
#line 809 "parse_tree_out.m"
            if ((parse_tree__parse_tree_out__MutableInfos_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 808 "parse_tree_out.m"
              {
#line 808 "parse_tree_out.m"
              }
#line 809 "parse_tree_out.m"
            else
#line 810 "parse_tree_out.m"
              {
#line 810 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_85_85;

#line 811 "parse_tree_out.m"
                {
#line 811 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\tconstraint_store is [\n\t\t\t");
                }
#line 813 "parse_tree_out.m"
                {
#line 813 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 813 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_85_85, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[4]));
#line 813 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_85_85, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0_1));
#line 813 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 813 "parse_tree_out.m"
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_85_85, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_8));
#line 813 "parse_tree_out.m"
                }
#line 812 "parse_tree_out.m"
                {
#line 812 "parse_tree_out.m"
                  mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__parse_tree_out__MutableInfos_63, (MR_String) ",\n\t\t\t", parse_tree__parse_tree_out__V_85_85);
                }
#line 814 "parse_tree_out.m"
                {
#line 814 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n\t\t]");
                }
#line 810 "parse_tree_out.m"
              }
#line 738 "parse_tree_out.m"
            {
#line 738 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_21_21;

#line 738 "parse_tree_out.m"
              parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeUnifyPred_17)) == (MR_mktag((MR_Integer) 1)));
#line 738 "parse_tree_out.m"
              if (parse_tree__parse_tree_out__succeeded)
#line 738 "parse_tree_out.m"
                parse_tree__parse_tree_out__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUnifyPred_17, (MR_Integer) 0)));
#line 738 "parse_tree_out.m"
            }
#line 739 "parse_tree_out.m"
            if (!(parse_tree__parse_tree_out__succeeded))
#line 739 "parse_tree_out.m"
              {
#line 739 "parse_tree_out.m"
                MR_Word parse_tree__parse_tree_out__V_22_22;

#line 739 "parse_tree_out.m"
                parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeComparePred_18)) == (MR_mktag((MR_Integer) 1)));
#line 739 "parse_tree_out.m"
                if (parse_tree__parse_tree_out__succeeded)
#line 739 "parse_tree_out.m"
                  parse_tree__parse_tree_out__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeComparePred_18, (MR_Integer) 0)));
#line 739 "parse_tree_out.m"
              }
#line 743 "parse_tree_out.m"
            if (parse_tree__parse_tree_out__succeeded)
#line 742 "parse_tree_out.m"
              {
#line 742 "parse_tree_out.m"
                {
#line 742 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                }
#line 742 "parse_tree_out.m"
              }
#line 743 "parse_tree_out.m"
            else
#line 743 "parse_tree_out.m"
              {
#line 743 "parse_tree_out.m"
              }
#line 734 "parse_tree_out.m"
          }
#line 6392 "parse_tree.parse_tree_out.c"
        if ((parse_tree__parse_tree_out__MaybeUnifyPred_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 773 "parse_tree_out.m"
          if ((parse_tree__parse_tree_out__MaybeComparePred_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "parse_tree_out.m"
            {
#line 774 "parse_tree_out.m"
            }
#line 773 "parse_tree_out.m"
          else
#line 764 "parse_tree_out.m"
            {
#line 764 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ComparePredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeComparePred_18, (MR_Integer) 0)));

#line 765 "parse_tree_out.m"
              {
#line 765 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "comparison is ");
              }
#line 766 "parse_tree_out.m"
              {
#line 766 "parse_tree_out.m"
                parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ComparePredName_25);
              }
#line 770 "parse_tree_out.m"
              if ((parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "parse_tree_out.m"
                {
#line 771 "parse_tree_out.m"
                }
#line 770 "parse_tree_out.m"
              else
#line 768 "parse_tree_out.m"
                {
#line 769 "parse_tree_out.m"
                  {
#line 769 "parse_tree_out.m"
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  }
#line 768 "parse_tree_out.m"
                }
#line 764 "parse_tree_out.m"
            }
#line 6436 "parse_tree.parse_tree_out.c"
        else
#line 6438 "parse_tree.parse_tree_out.c"
          {
#line 6440 "parse_tree.parse_tree_out.c"
            MR_Word parse_tree__parse_tree_out__UnifyPredName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUnifyPred_17, (MR_Integer) 0)));

#line 752 "parse_tree_out.m"
            {
#line 752 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "equality is ");
            }
#line 753 "parse_tree_out.m"
            {
#line 753 "parse_tree_out.m"
              parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__UnifyPredName_23);
            }
#line 6453 "parse_tree.parse_tree_out.c"
            if ((parse_tree__parse_tree_out__MaybeComparePred_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "parse_tree_out.m"
              {
#line 774 "parse_tree_out.m"
              }
#line 6459 "parse_tree.parse_tree_out.c"
            else
#line 6461 "parse_tree.parse_tree_out.c"
              {
#line 6463 "parse_tree.parse_tree_out.c"
                MR_Word parse_tree__parse_tree_out__ComparePredName_290;

#line 756 "parse_tree_out.m"
                {
#line 756 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                }
#line 764 "parse_tree_out.m"
                parse_tree__parse_tree_out__ComparePredName_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeComparePred_18, (MR_Integer) 0)));
#line 765 "parse_tree_out.m"
                {
#line 765 "parse_tree_out.m"
                  mercury__io__write_string_3_p_0((MR_String) "comparison is ");
                }
#line 766 "parse_tree_out.m"
                {
#line 766 "parse_tree_out.m"
                  parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ComparePredName_290);
                }
#line 770 "parse_tree_out.m"
                if ((parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "parse_tree_out.m"
                  {
#line 771 "parse_tree_out.m"
                  }
#line 770 "parse_tree_out.m"
                else
#line 768 "parse_tree_out.m"
                  {
#line 769 "parse_tree_out.m"
                    {
#line 769 "parse_tree_out.m"
                      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                    }
#line 768 "parse_tree_out.m"
                  }
#line 6500 "parse_tree.parse_tree_out.c"
              }
#line 6502 "parse_tree.parse_tree_out.c"
          }
#line 781 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "parse_tree_out.m"
          {
#line 782 "parse_tree_out.m"
          }
#line 781 "parse_tree_out.m"
        else
#line 777 "parse_tree_out.m"
          {
#line 777 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__DirectArgFunctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeDirectArgs_12, (MR_Integer) 0)));

#line 778 "parse_tree_out.m"
            {
#line 778 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "direct_arg is [");
            }
#line 779 "parse_tree_out.m"
            {
#line 779 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(parse_tree__parse_tree_out__DirectArgFunctors_27);
            }
#line 780 "parse_tree_out.m"
            {
#line 780 "parse_tree_out.m"
              mercury__io__write_string_3_p_0((MR_String) "]");
#line 780 "parse_tree_out.m"
              return;
            }
#line 777 "parse_tree_out.m"
          }
#line 728 "parse_tree_out.m"
      }
#line 718 "parse_tree_out.m"
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
#line 547 "parse_tree_out.m"
  {
#line 547 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;

#line 547 "parse_tree_out.m"
#line 547 "parse_tree_out.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out__Item_6)) {
#line 547 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 547 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 547 "parse_tree_out.m"
        {
#line 547 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ItemClause_8 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Item_6), (MR_Integer) 0);

#line 548 "parse_tree_out.m"
          {
#line 548 "parse_tree_out.m"
            parse_tree__parse_tree_out_clause__mercury_output_item_clause_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemClause_8);
#line 548 "parse_tree_out.m"
            return;
          }
#line 547 "parse_tree_out.m"
        }
#line 547 "parse_tree_out.m"
        break;
#line 547 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 550 "parse_tree_out.m"
        {
#line 550 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ItemTypeDefn_9 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Item_6), (MR_Integer) 1);

#line 551 "parse_tree_out.m"
          {
#line 551 "parse_tree_out.m"
            parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemTypeDefn_9);
#line 551 "parse_tree_out.m"
            return;
          }
#line 550 "parse_tree_out.m"
        }
#line 547 "parse_tree_out.m"
        break;
#line 547 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 553 "parse_tree_out.m"
        {
#line 553 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ItemInstDefn_10 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Item_6), (MR_Integer) 2);

#line 554 "parse_tree_out.m"
          {
#line 554 "parse_tree_out.m"
            parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemInstDefn_10);
#line 554 "parse_tree_out.m"
            return;
          }
#line 553 "parse_tree_out.m"
        }
#line 547 "parse_tree_out.m"
        break;
#line 547 "parse_tree_out.m"
      case (MR_Integer) 3:
#line 547 "parse_tree_out.m"
#line 547 "parse_tree_out.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 0)))) {
#line 547 "parse_tree_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 547 "parse_tree_out.m"
          case (MR_Integer) 0:
#line 556 "parse_tree_out.m"
            {
#line 556 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemModeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 557 "parse_tree_out.m"
              {
#line 557 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemModeDefn_11);
#line 557 "parse_tree_out.m"
                return;
              }
#line 556 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
          case (MR_Integer) 1:
#line 559 "parse_tree_out.m"
            {
#line 559 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemPredDecl_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 560 "parse_tree_out.m"
              {
#line 560 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemPredDecl_12);
#line 560 "parse_tree_out.m"
                return;
              }
#line 559 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
          case (MR_Integer) 2:
#line 562 "parse_tree_out.m"
            {
#line 562 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemModeDecl_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));
#line 562 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__PredName0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 0)));
#line 562 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__PredOrFunc_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 1)));
#line 562 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__Modes_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 2)));
#line 562 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__WithInst_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 3)));
#line 562 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__MaybeDet_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 4)));
#line 562 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__VarSet_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 5)));
#line 562 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__Context_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 6)));
#line 562 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__PredName_86;
#line 562 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__Lang_87;
#line 1097 "parse_tree_out.m"
              MR_Integer parse_tree__parse_tree_out___SeqNum_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 7)));
#line 1105 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_91_91;

#line 1099 "parse_tree_out.m"
              {
#line 1099 "parse_tree_out.m"
                parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__PredName0_78, &parse_tree__parse_tree_out__PredName_86);
              }
#line 1100 "parse_tree_out.m"
              {
#line 1100 "parse_tree_out.m"
                parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_84);
              }
#line 1101 "parse_tree_out.m"
              {
#line 1101 "parse_tree_out.m"
                parse_tree__parse_tree_out__Lang_87 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
              }
#line 1106 "parse_tree_out.m"
              parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithInst_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1105 "parse_tree_out.m"
              if (parse_tree__parse_tree_out__succeeded)
#line 1105 "parse_tree_out.m"
                {
#line 1105 "parse_tree_out.m"
                  parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__PredOrFunc_79)) == (MR_mktag((MR_Integer) 1)));
#line 1105 "parse_tree_out.m"
                  if (parse_tree__parse_tree_out__succeeded)
#line 1105 "parse_tree_out.m"
                    {
#line 1105 "parse_tree_out.m"
                      parse_tree__parse_tree_out__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__PredOrFunc_79, (MR_Integer) 0)));
#line 1105 "parse_tree_out.m"
                      parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__V_91_91 == (MR_Integer) 1);
#line 1105 "parse_tree_out.m"
                    }
#line 1105 "parse_tree_out.m"
                }
#line 1111 "parse_tree_out.m"
              if (parse_tree__parse_tree_out__succeeded)
#line 1108 "parse_tree_out.m"
                {
#line 1108 "parse_tree_out.m"
                  MR_Word parse_tree__parse_tree_out__FuncModes_88;
#line 1108 "parse_tree_out.m"
                  MR_Word parse_tree__parse_tree_out__RetMode_89;
#line 1108 "parse_tree_out.m"
                  MR_Box parse_tree__parse_tree_out__conv0_RetMode_89;

#line 1108 "parse_tree_out.m"
                  {
#line 1108 "parse_tree_out.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out__Modes_80, &parse_tree__parse_tree_out__FuncModes_88, &parse_tree__parse_tree_out__conv0_RetMode_89);
                  }
#line 1108 "parse_tree_out.m"
                  parse_tree__parse_tree_out__RetMode_89 = ((MR_Word) parse_tree__parse_tree_out__conv0_RetMode_89);
#line 1109 "parse_tree_out.m"
                  {
#line 1109 "parse_tree_out.m"
                    parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0(parse_tree__parse_tree_out__Lang_87, parse_tree__parse_tree_out__VarSet_83, parse_tree__parse_tree_out__PredName_86, parse_tree__parse_tree_out__FuncModes_88, parse_tree__parse_tree_out__RetMode_89, parse_tree__parse_tree_out__MaybeDet_82);
#line 1109 "parse_tree_out.m"
                    return;
                  }
#line 1108 "parse_tree_out.m"
                }
#line 1111 "parse_tree_out.m"
              else
#line 1112 "parse_tree_out.m"
                {
#line 1112 "parse_tree_out.m"
                  parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0(parse_tree__parse_tree_out__Lang_87, parse_tree__parse_tree_out__VarSet_83, parse_tree__parse_tree_out__PredName_86, parse_tree__parse_tree_out__Modes_80, parse_tree__parse_tree_out__WithInst_81, parse_tree__parse_tree_out__MaybeDet_82);
#line 1112 "parse_tree_out.m"
                  return;
                }
#line 562 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
          case (MR_Integer) 3:
#line 565 "parse_tree_out.m"
            {
#line 565 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemPragma_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 566 "parse_tree_out.m"
              {
#line 566 "parse_tree_out.m"
                parse_tree__parse_tree_out_pragma__mercury_output_item_pragma_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemPragma_14);
#line 566 "parse_tree_out.m"
                return;
              }
#line 565 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
          case (MR_Integer) 4:
#line 568 "parse_tree_out.m"
            {
#line 568 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemPromise_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 569 "parse_tree_out.m"
              {
#line 569 "parse_tree_out.m"
                parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_tree_out__ItemPromise_15);
#line 569 "parse_tree_out.m"
                return;
              }
#line 568 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
          case (MR_Integer) 5:
#line 571 "parse_tree_out.m"
            {
#line 571 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemTypeClass_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 572 "parse_tree_out.m"
              {
#line 572 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemTypeClass_16);
#line 572 "parse_tree_out.m"
                return;
              }
#line 571 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
          case (MR_Integer) 6:
#line 574 "parse_tree_out.m"
            {
#line 574 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemInstance_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 575 "parse_tree_out.m"
              {
#line 575 "parse_tree_out.m"
                parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_tree_out__ItemInstance_17);
#line 575 "parse_tree_out.m"
                return;
              }
#line 574 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
          case (MR_Integer) 7:
#line 577 "parse_tree_out.m"
            {
#line 577 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemInitialise_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));
#line 577 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__PredSymName_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 0)));
#line 577 "parse_tree_out.m"
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
#line 577 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
          case (MR_Integer) 8:
#line 580 "parse_tree_out.m"
            {
#line 580 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemFinalise_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));
#line 580 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__PredSymName_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 0)));
#line 580 "parse_tree_out.m"
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
#line 580 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
          case (MR_Integer) 9:
#line 583 "parse_tree_out.m"
            {
#line 583 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__ItemMutable_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

#line 584 "parse_tree_out.m"
              {
#line 584 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemMutable_20);
#line 584 "parse_tree_out.m"
                return;
              }
#line 583 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
          case (MR_Integer) 10:
#line 586 "parse_tree_out.m"
            {
#line 586 "parse_tree_out.m"
            }
#line 547 "parse_tree_out.m"
            break;
#line 547 "parse_tree_out.m"
        }
#line 547 "parse_tree_out.m"
        break;
#line 547 "parse_tree_out.m"
    }
#line 547 "parse_tree_out.m"
  }
#line 80 "parse_tree_out.m"
}

#line 404 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2(
#line 404 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 404 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 404 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 404 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 404 "parse_tree_out.m"
{
#line 404 "parse_tree_out.m"
  {
#line 404 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 404 "parse_tree_out.m"
    {
#line 404 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 404 "parse_tree_out.m"
      return;
    }
#line 404 "parse_tree_out.m"
  }
#line 404 "parse_tree_out.m"
}

#line 403 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1(
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
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 403 "parse_tree_out.m"
      return;
    }
#line 403 "parse_tree_out.m"
  }
#line 403 "parse_tree_out.m"
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
#line 400 "parse_tree_out.m"
  {
#line 400 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 400 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
#line 400 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntForOptSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 0)));
#line 400 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 2)));
#line 400 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 3)));
#line 400 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 4)));
#line 400 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_15_15;
#line 400 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_17_17;
#line 400 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_34;
#line 400 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntFileKind_35;
#line 400 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__V_38_38;
#line 400 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__V_40_40;
#line 401 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 1)));
#line 403 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16;
#line 404 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18;

#line 403 "parse_tree_out.m"
    {
#line 403 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 403 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
#line 403 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1));
#line 403 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 403 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 403 "parse_tree_out.m"
    }
#line 7084 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 403 "parse_tree_out.m"
    {
#line 403 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_15_15, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 404 "parse_tree_out.m"
    {
#line 404 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 404 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 404 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2));
#line 404 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 404 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 404 "parse_tree_out.m"
    }
#line 404 "parse_tree_out.m"
    {
#line 404 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_17_17, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18);
    }
#line 484 "parse_tree_out.m"
    parse_tree__parse_tree_out__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptSectionKind_8, (MR_Integer) 0)));
#line 484 "parse_tree_out.m"
    parse_tree__parse_tree_out__IntFileKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptSectionKind_8, (MR_Integer) 1)));
#line 485 "parse_tree_out.m"
    {
#line 485 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- ioms_opt_imported(");
    }
#line 486 "parse_tree_out.m"
    {
#line 486 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_38_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_34);
    }
#line 486 "parse_tree_out.m"
    {
#line 486 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_38_38);
    }
#line 487 "parse_tree_out.m"
    {
#line 487 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_40_40 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_35);
    }
#line 487 "parse_tree_out.m"
    {
#line 487 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_40_40);
    }
#line 488 "parse_tree_out.m"
    {
#line 488 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 406 "parse_tree_out.m"
    {
#line 406 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 406 "parse_tree_out.m"
      return;
    }
#line 400 "parse_tree_out.m"
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
#line 394 "parse_tree_out.m"
  while (MR_TRUE)
#line 394 "parse_tree_out.m"
    {
#line 394 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 394 "parse_tree_out.m"
      {
#line 394 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 394 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "parse_tree_out.m"
          {
#line 394 "parse_tree_out.m"
          }
#line 394 "parse_tree_out.m"
        else
#line 396 "parse_tree_out.m"
          {
#line 396 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__IntForOptItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__IntForOptItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 397 "parse_tree_out.m"
            {
#line 397 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__IntForOptItemBlock_10);
            }
#line 398 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 398 "parse_tree_out.m"
            {
#line 398 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__IntForOptItemBlocks_11;

#line 398 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 398 "parse_tree_out.m"
            }
#line 398 "parse_tree_out.m"
            continue;
#line 396 "parse_tree_out.m"
          }
#line 394 "parse_tree_out.m"
      }
#line 394 "parse_tree_out.m"
      break;
#line 394 "parse_tree_out.m"
    }
#line 73 "parse_tree_out.m"
}

#line 390 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2(
#line 390 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 390 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 390 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 390 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 390 "parse_tree_out.m"
{
#line 390 "parse_tree_out.m"
  {
#line 390 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 390 "parse_tree_out.m"
    {
#line 390 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 390 "parse_tree_out.m"
      return;
    }
#line 390 "parse_tree_out.m"
  }
#line 390 "parse_tree_out.m"
}

#line 389 "parse_tree_out.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1(
#line 389 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg)
#line 389 "parse_tree_out.m"
{
#line 389 "parse_tree_out.m"
  {
#line 389 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 389 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 389 "parse_tree_out.m"
    {
#line 389 "parse_tree_out.m"
      return parse_tree__parse_tree_out__succeeded = parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__389__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))));
    }
#line 389 "parse_tree_out.m"
    return parse_tree__parse_tree_out__succeeded;
#line 389 "parse_tree_out.m"
  }
#line 389 "parse_tree_out.m"
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
#line 387 "parse_tree_out.m"
  {
#line 387 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 387 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__OptSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 0)));
#line 387 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 2)));
#line 387 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 3)));
#line 387 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 4)));
#line 387 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_15_15;
#line 387 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_20_20;
#line 387 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_34;
#line 387 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__OptFileKind_35;
#line 387 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__V_38_38;
#line 387 "parse_tree_out.m"
    MR_String parse_tree__parse_tree_out__V_40_40;
#line 388 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 1)));
#line 390 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21;

#line 389 "parse_tree_out.m"
    {
#line 389 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 389 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[0]));
#line 389 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1));
#line 389 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 389 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 3) = ((MR_Box) (parse_tree__parse_tree_out__Incls_10));
#line 389 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "parse_tree_out.m"
    }
#line 389 "parse_tree_out.m"
    {
#line 389 "parse_tree_out.m"
      mercury__require__expect_4_p_0(parse_tree__parse_tree_out__V_15_15, (MR_String) "parse_tree.parse_tree_out", (MR_String) "predicate \140parse_tree.parse_tree_out.mercury_output_opt_item_block\'/4", (MR_String) "Incls != []");
    }
#line 390 "parse_tree_out.m"
    {
#line 390 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 390 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 390 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2));
#line 390 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 390 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 390 "parse_tree_out.m"
    }
#line 390 "parse_tree_out.m"
    {
#line 390 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out__V_20_20, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21);
    }
#line 472 "parse_tree_out.m"
    parse_tree__parse_tree_out__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptSectionKind_8, (MR_Integer) 0)));
#line 472 "parse_tree_out.m"
    parse_tree__parse_tree_out__OptFileKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptSectionKind_8, (MR_Integer) 1)));
#line 473 "parse_tree_out.m"
    {
#line 473 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- oms_opt_imported(");
    }
#line 474 "parse_tree_out.m"
    {
#line 474 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_38_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_34);
    }
#line 474 "parse_tree_out.m"
    {
#line 474 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_38_38);
    }
#line 475 "parse_tree_out.m"
    {
#line 475 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_40_40 = parse_tree__file_kind__opt_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__OptFileKind_35);
    }
#line 475 "parse_tree_out.m"
    {
#line 475 "parse_tree_out.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_40_40);
    }
#line 476 "parse_tree_out.m"
    {
#line 476 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 392 "parse_tree_out.m"
    {
#line 392 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 392 "parse_tree_out.m"
      return;
    }
#line 387 "parse_tree_out.m"
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
#line 382 "parse_tree_out.m"
  while (MR_TRUE)
#line 382 "parse_tree_out.m"
    {
#line 382 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 382 "parse_tree_out.m"
      {
#line 382 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 382 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "parse_tree_out.m"
          {
#line 382 "parse_tree_out.m"
          }
#line 382 "parse_tree_out.m"
        else
#line 383 "parse_tree_out.m"
          {
#line 383 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__OptItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 383 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__OptItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 384 "parse_tree_out.m"
            {
#line 384 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__OptItemBlock_10);
            }
#line 385 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 385 "parse_tree_out.m"
            {
#line 385 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__OptItemBlocks_11;

#line 385 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 385 "parse_tree_out.m"
            }
#line 385 "parse_tree_out.m"
            continue;
#line 383 "parse_tree_out.m"
          }
#line 382 "parse_tree_out.m"
      }
#line 382 "parse_tree_out.m"
      break;
#line 382 "parse_tree_out.m"
    }
#line 69 "parse_tree_out.m"
}

#line 378 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2(
#line 378 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 378 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 378 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 378 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 378 "parse_tree_out.m"
{
#line 378 "parse_tree_out.m"
  {
#line 378 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 378 "parse_tree_out.m"
    {
#line 378 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 378 "parse_tree_out.m"
      return;
    }
#line 378 "parse_tree_out.m"
  }
#line 378 "parse_tree_out.m"
}

#line 377 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1(
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
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 377 "parse_tree_out.m"
      return;
    }
#line 377 "parse_tree_out.m"
  }
#line 377 "parse_tree_out.m"
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
#line 375 "parse_tree_out.m"
  {
#line 375 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 375 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
#line 375 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 0)));
#line 375 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 2)));
#line 375 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 3)));
#line 375 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 4)));
#line 375 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_15_15;
#line 375 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_17_17;
#line 376 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 1)));
#line 377 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16;
#line 378 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18;

#line 377 "parse_tree_out.m"
    {
#line 377 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 377 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
#line 377 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1));
#line 377 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 377 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_15_15, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 377 "parse_tree_out.m"
    }
#line 7572 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 377 "parse_tree_out.m"
    {
#line 377 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_15_15, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 378 "parse_tree_out.m"
    {
#line 378 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 378 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 378 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2));
#line 378 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 378 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_17_17, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 378 "parse_tree_out.m"
    }
#line 378 "parse_tree_out.m"
    {
#line 378 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_17_17, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18);
    }
#line 444 "parse_tree_out.m"
#line 444 "parse_tree_out.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out__IntSectionKind_8)) {
#line 444 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 444 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 444 "parse_tree_out.m"
        {
#line 444 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 0)));
#line 444 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__IntFileKind_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 444 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ImportLocn_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 444 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_58_58;
#line 444 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_60_60;

#line 445 "parse_tree_out.m"
          {
#line 445 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- ims_imported(");
          }
#line 446 "parse_tree_out.m"
          {
#line 446 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_58_58 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_34);
          }
#line 446 "parse_tree_out.m"
          {
#line 446 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_58_58);
          }
#line 447 "parse_tree_out.m"
          {
#line 447 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_60_60 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_35);
          }
#line 447 "parse_tree_out.m"
          {
#line 447 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_60_60);
          }
#line 448 "parse_tree_out.m"
          {
#line 448 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 449 "parse_tree_out.m"
          {
#line 449 "parse_tree_out.m"
            mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0, ((MR_Box) (parse_tree__parse_tree_out__ImportLocn_36)));
          }
#line 450 "parse_tree_out.m"
          {
#line 450 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ").\n");
          }
#line 444 "parse_tree_out.m"
        }
#line 444 "parse_tree_out.m"
        break;
#line 444 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 452 "parse_tree_out.m"
        {
#line 452 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_47_47;
#line 452 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_49_49;
#line 452 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ModuleName_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 0)));
#line 452 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__IntFileKind_68 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 452 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ImportLocn_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);

#line 453 "parse_tree_out.m"
          {
#line 453 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- ims_used(");
          }
#line 454 "parse_tree_out.m"
          {
#line 454 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_47_47 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_67);
          }
#line 454 "parse_tree_out.m"
          {
#line 454 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_47_47);
          }
#line 455 "parse_tree_out.m"
          {
#line 455 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_49_49 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_68);
          }
#line 455 "parse_tree_out.m"
          {
#line 455 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_49_49);
          }
#line 456 "parse_tree_out.m"
          {
#line 456 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 457 "parse_tree_out.m"
          {
#line 457 "parse_tree_out.m"
            mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0, ((MR_Box) (parse_tree__parse_tree_out__ImportLocn_69)));
          }
#line 458 "parse_tree_out.m"
          {
#line 458 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ").\n");
          }
#line 452 "parse_tree_out.m"
        }
#line 444 "parse_tree_out.m"
        break;
#line 444 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 460 "parse_tree_out.m"
        {
#line 460 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_39_39;
#line 460 "parse_tree_out.m"
          MR_String parse_tree__parse_tree_out__V_41_41;
#line 460 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 0)));
#line 460 "parse_tree_out.m"
          MR_Word parse_tree__parse_tree_out__IntFileKind_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)));

#line 461 "parse_tree_out.m"
          {
#line 461 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- ims_abstract_imported(");
          }
#line 462 "parse_tree_out.m"
          {
#line 462 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_39_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_70);
          }
#line 462 "parse_tree_out.m"
          {
#line 462 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_39_39);
          }
#line 463 "parse_tree_out.m"
          {
#line 463 "parse_tree_out.m"
            parse_tree__parse_tree_out__V_41_41 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_71);
          }
#line 463 "parse_tree_out.m"
          {
#line 463 "parse_tree_out.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__V_41_41);
          }
#line 464 "parse_tree_out.m"
          {
#line 464 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ").\n");
          }
#line 460 "parse_tree_out.m"
        }
#line 444 "parse_tree_out.m"
        break;
#line 444 "parse_tree_out.m"
    }
#line 380 "parse_tree_out.m"
    {
#line 380 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 380 "parse_tree_out.m"
      return;
    }
#line 375 "parse_tree_out.m"
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
#line 370 "parse_tree_out.m"
  while (MR_TRUE)
#line 370 "parse_tree_out.m"
    {
#line 370 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 370 "parse_tree_out.m"
      {
#line 370 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 370 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "parse_tree_out.m"
          {
#line 370 "parse_tree_out.m"
          }
#line 370 "parse_tree_out.m"
        else
#line 371 "parse_tree_out.m"
          {
#line 371 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__IntItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 371 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__IntItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 372 "parse_tree_out.m"
            {
#line 372 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__IntItemBlock_10);
            }
#line 373 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 373 "parse_tree_out.m"
            {
#line 373 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__IntItemBlocks_11;

#line 373 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 373 "parse_tree_out.m"
            }
#line 373 "parse_tree_out.m"
            continue;
#line 371 "parse_tree_out.m"
          }
#line 370 "parse_tree_out.m"
      }
#line 370 "parse_tree_out.m"
      break;
#line 370 "parse_tree_out.m"
    }
#line 65 "parse_tree_out.m"
}

#line 367 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2(
#line 367 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 367 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 367 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 367 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 367 "parse_tree_out.m"
{
#line 367 "parse_tree_out.m"
  {
#line 367 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 367 "parse_tree_out.m"
    {
#line 367 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 367 "parse_tree_out.m"
      return;
    }
#line 367 "parse_tree_out.m"
  }
#line 367 "parse_tree_out.m"
}

#line 366 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1(
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
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 366 "parse_tree_out.m"
      return;
    }
#line 366 "parse_tree_out.m"
  }
#line 366 "parse_tree_out.m"
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
#line 363 "parse_tree_out.m"
  {
#line 363 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 363 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
#line 363 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SrcSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 0)));
#line 363 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 2)));
#line 363 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 3)));
#line 363 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 4)));
#line 363 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_16_16;
#line 363 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_18_18;
#line 364 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 1)));
#line 366 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17;
#line 367 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19;

#line 429 "parse_tree_out.m"
#line 429 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__SrcSectionKind_8) {
#line 429 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 429 "parse_tree_out.m"
      case (MR_Integer) 2:
#line 435 "parse_tree_out.m"
        {
#line 436 "parse_tree_out.m"
          {
#line 436 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- ams_impl_but_exported_to_submodules.\n");
          }
#line 435 "parse_tree_out.m"
        }
#line 429 "parse_tree_out.m"
        break;
#line 429 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 432 "parse_tree_out.m"
        {
#line 433 "parse_tree_out.m"
          {
#line 433 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
          }
#line 432 "parse_tree_out.m"
        }
#line 429 "parse_tree_out.m"
        break;
#line 429 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 429 "parse_tree_out.m"
        {
#line 430 "parse_tree_out.m"
          {
#line 430 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
          }
#line 429 "parse_tree_out.m"
        }
#line 429 "parse_tree_out.m"
        break;
#line 429 "parse_tree_out.m"
    }
#line 366 "parse_tree_out.m"
    {
#line 366 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 366 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
#line 366 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1));
#line 366 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 366 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 366 "parse_tree_out.m"
    }
#line 8000 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 366 "parse_tree_out.m"
    {
#line 366 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_16_16, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17);
    }
#line 367 "parse_tree_out.m"
    {
#line 367 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 367 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 367 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2));
#line 367 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 367 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 367 "parse_tree_out.m"
    }
#line 367 "parse_tree_out.m"
    {
#line 367 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_18_18, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19);
    }
#line 368 "parse_tree_out.m"
    {
#line 368 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 368 "parse_tree_out.m"
      return;
    }
#line 363 "parse_tree_out.m"
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
#line 358 "parse_tree_out.m"
  while (MR_TRUE)
#line 358 "parse_tree_out.m"
    {
#line 358 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 358 "parse_tree_out.m"
      {
#line 358 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 358 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "parse_tree_out.m"
          {
#line 358 "parse_tree_out.m"
          }
#line 358 "parse_tree_out.m"
        else
#line 359 "parse_tree_out.m"
          {
#line 359 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__SrcItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 359 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 360 "parse_tree_out.m"
            {
#line 360 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__SrcItemBlock_10);
            }
#line 361 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 361 "parse_tree_out.m"
            {
#line 361 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__SrcItemBlocks_11;

#line 361 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 361 "parse_tree_out.m"
            }
#line 361 "parse_tree_out.m"
            continue;
#line 359 "parse_tree_out.m"
          }
#line 358 "parse_tree_out.m"
      }
#line 358 "parse_tree_out.m"
      break;
#line 358 "parse_tree_out.m"
    }
#line 61 "parse_tree_out.m"
}

#line 353 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2(
#line 353 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 353 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 353 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 353 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 353 "parse_tree_out.m"
{
#line 353 "parse_tree_out.m"
  {
#line 353 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 353 "parse_tree_out.m"
    {
#line 353 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 353 "parse_tree_out.m"
      return;
    }
#line 353 "parse_tree_out.m"
  }
#line 353 "parse_tree_out.m"
}

#line 352 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1(
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
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 352 "parse_tree_out.m"
      return;
    }
#line 352 "parse_tree_out.m"
  }
#line 352 "parse_tree_out.m"
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
#line 349 "parse_tree_out.m"
  {
#line 349 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 349 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
#line 349 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 0)));
#line 349 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 2)));
#line 349 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 3)));
#line 349 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 4)));
#line 349 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_16_16;
#line 349 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_18_18;
#line 350 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 1)));
#line 352 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17;
#line 353 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19;

#line 415 "parse_tree_out.m"
#line 415 "parse_tree_out.m"
    switch (parse_tree__parse_tree_out__SectionKind_8) {
#line 415 "parse_tree_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 415 "parse_tree_out.m"
      case (MR_Integer) 1:
#line 418 "parse_tree_out.m"
        {
#line 419 "parse_tree_out.m"
          {
#line 419 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
          }
#line 418 "parse_tree_out.m"
        }
#line 415 "parse_tree_out.m"
        break;
#line 415 "parse_tree_out.m"
      case (MR_Integer) 0:
#line 415 "parse_tree_out.m"
        {
#line 416 "parse_tree_out.m"
          {
#line 416 "parse_tree_out.m"
            mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
          }
#line 415 "parse_tree_out.m"
        }
#line 415 "parse_tree_out.m"
        break;
#line 415 "parse_tree_out.m"
    }
#line 352 "parse_tree_out.m"
    {
#line 352 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 352 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
#line 352 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1));
#line 352 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 352 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_16_16, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 352 "parse_tree_out.m"
    }
#line 8243 "parse_tree.parse_tree_out.c"
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 352 "parse_tree_out.m"
    {
#line 352 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_16_16, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17);
    }
#line 353 "parse_tree_out.m"
    {
#line 353 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 353 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
#line 353 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2));
#line 353 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 353 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_18_18, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 353 "parse_tree_out.m"
    }
#line 353 "parse_tree_out.m"
    {
#line 353 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__V_18_18, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19);
    }
#line 354 "parse_tree_out.m"
    {
#line 354 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 354 "parse_tree_out.m"
      return;
    }
#line 349 "parse_tree_out.m"
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
#line 344 "parse_tree_out.m"
  while (MR_TRUE)
#line 344 "parse_tree_out.m"
    {
#line 344 "parse_tree_out.m"
      /* tailcall optimized into a loop */
#line 344 "parse_tree_out.m"
      {
#line 344 "parse_tree_out.m"
        MR_bool parse_tree__parse_tree_out__succeeded;

#line 344 "parse_tree_out.m"
        if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "parse_tree_out.m"
          {
#line 344 "parse_tree_out.m"
          }
#line 344 "parse_tree_out.m"
        else
#line 345 "parse_tree_out.m"
          {
#line 345 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__RawItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
#line 345 "parse_tree_out.m"
            MR_Word parse_tree__parse_tree_out__RawItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

#line 346 "parse_tree_out.m"
            {
#line 346 "parse_tree_out.m"
              parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__RawItemBlock_10);
            }
#line 347 "parse_tree_out.m"
            /* direct tailcall eliminated */
#line 347 "parse_tree_out.m"
            {
#line 347 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2 = parse_tree__parse_tree_out__RawItemBlocks_11;

#line 347 "parse_tree_out.m"
              parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__HeadVar__2__tmp_copy_2;
#line 347 "parse_tree_out.m"
            }
#line 347 "parse_tree_out.m"
            continue;
#line 345 "parse_tree_out.m"
          }
#line 344 "parse_tree_out.m"
      }
#line 344 "parse_tree_out.m"
      break;
#line 344 "parse_tree_out.m"
    }
#line 56 "parse_tree_out.m"
}

#line 267 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1(
#line 267 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 267 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 267 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 267 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
#line 267 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_4)
#line 267 "parse_tree_out.m"
{
#line 267 "parse_tree_out.m"
  {
#line 267 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 267 "parse_tree_out.m"
    {
#line 267 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_2));
#line 267 "parse_tree_out.m"
      return;
    }
#line 267 "parse_tree_out.m"
  }
#line 267 "parse_tree_out.m"
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
#line 258 "parse_tree_out.m"
  {
#line 258 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 258 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 0)));
#line 258 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleVersionNumbers_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 2)));
#line 258 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 3)));
#line 258 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__DirectIntItemBlocks_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 4)));
#line 258 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IndirectIntItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 5)));
#line 258 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__OptItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 6)));
#line 258 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntForOptItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 7)));
#line 259 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 1)));
#line 267 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_26_26;

#line 263 "parse_tree_out.m"
    {
#line 263 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 264 "parse_tree_out.m"
    {
#line 264 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 265 "parse_tree_out.m"
    {
#line 265 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 266 "parse_tree_out.m"
    {
#line 266 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The module version numbers.\n");
    }
#line 267 "parse_tree_out.m"
    {
#line 267 "parse_tree_out.m"
      mercury__map__foldl_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[0], parse_tree__parse_tree_out__ModuleVersionNumbers_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_26_26);
    }
#line 269 "parse_tree_out.m"
    {
#line 269 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The src item blocks.\n");
    }
#line 270 "parse_tree_out.m"
    {
#line 270 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_src_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SrcItemBlocks_11);
    }
#line 271 "parse_tree_out.m"
    {
#line 271 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The direct interface item blocks.\n");
    }
#line 272 "parse_tree_out.m"
    {
#line 272 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__DirectIntItemBlocks_12);
    }
#line 273 "parse_tree_out.m"
    {
#line 273 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The indirect interface item blocks.\n");
    }
#line 274 "parse_tree_out.m"
    {
#line 274 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__IndirectIntItemBlocks_13);
    }
#line 275 "parse_tree_out.m"
    {
#line 275 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The optimization item blocks.\n");
    }
#line 276 "parse_tree_out.m"
    {
#line 276 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_opt_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__OptItemBlocks_14);
    }
#line 277 "parse_tree_out.m"
    {
#line 277 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) "% The interface item blocks for optimization.\n");
    }
#line 278 "parse_tree_out.m"
    {
#line 278 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_int_for_opt_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__IntForOptItemBlocks_15);
#line 278 "parse_tree_out.m"
      return;
    }
#line 258 "parse_tree_out.m"
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
#line 251 "parse_tree_out.m"
  {
#line 251 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 251 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__CompUnit_6, (MR_Integer) 0)));
#line 251 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ItemBlocks_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__CompUnit_6, (MR_Integer) 2)));
#line 252 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__CompUnit_6, (MR_Integer) 1)));

#line 253 "parse_tree_out.m"
    {
#line 253 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 254 "parse_tree_out.m"
    {
#line 254 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 255 "parse_tree_out.m"
    {
#line 255 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 256 "parse_tree_out.m"
    {
#line 256 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_raw_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemBlocks_10);
#line 256 "parse_tree_out.m"
      return;
    }
#line 251 "parse_tree_out.m"
  }
#line 48 "parse_tree_out.m"
}

#line 248 "parse_tree_out.m"
static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1(
#line 248 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__closure_arg,
#line 248 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
#line 248 "parse_tree_out.m"
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
#line 248 "parse_tree_out.m"
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
#line 248 "parse_tree_out.m"
{
#line 248 "parse_tree_out.m"
  {
#line 248 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

#line 248 "parse_tree_out.m"
    {
#line 248 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
#line 248 "parse_tree_out.m"
      return;
    }
#line 248 "parse_tree_out.m"
  }
#line 248 "parse_tree_out.m"
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
#line 242 "parse_tree_out.m"
  {
#line 242 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 242 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 0)));
#line 242 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Use_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 3)));
#line 242 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 4)));
#line 242 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__V_20_20;
#line 243 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___OptFileKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 1)));
#line 243 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 2)));
#line 248 "parse_tree_out.m"
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21;

#line 245 "parse_tree_out.m"
    {
#line 245 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 246 "parse_tree_out.m"
    {
#line 246 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 247 "parse_tree_out.m"
    {
#line 247 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 248 "parse_tree_out.m"
    {
#line 248 "parse_tree_out.m"
      parse_tree__parse_tree_out__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 248 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0]));
#line 248 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1));
#line 248 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 248 "parse_tree_out.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__V_20_20, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
#line 248 "parse_tree_out.m"
    }
#line 248 "parse_tree_out.m"
    {
#line 248 "parse_tree_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out__V_20_20, parse_tree__parse_tree_out__Use_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21);
    }
#line 249 "parse_tree_out.m"
    {
#line 249 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
#line 249 "parse_tree_out.m"
      return;
    }
#line 242 "parse_tree_out.m"
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
#line 206 "parse_tree_out.m"
  {
#line 206 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 206 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 0)));
#line 206 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 2)));
#line 206 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__MaybeVersionNumbers_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 3)));
#line 206 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntIncls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 4)));
#line 206 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ImpIncls_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 5)));
#line 206 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntAvails_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 6)));
#line 206 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ImpAvails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 7)));
#line 206 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__IntItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 8)));
#line 206 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ImpItems_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 9)));
#line 207 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___IntFileKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 1)));

#line 210 "parse_tree_out.m"
    {
#line 210 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 211 "parse_tree_out.m"
    {
#line 211 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 212 "parse_tree_out.m"
    {
#line 212 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 215 "parse_tree_out.m"
    if ((parse_tree__parse_tree_out__MaybeVersionNumbers_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 214 "parse_tree_out.m"
      {
#line 214 "parse_tree_out.m"
      }
#line 215 "parse_tree_out.m"
    else
#line 216 "parse_tree_out.m"
      {
#line 216 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__VersionNumbers_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeVersionNumbers_11, (MR_Integer) 0)));

#line 217 "parse_tree_out.m"
        {
#line 217 "parse_tree_out.m"
          parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(parse_tree__parse_tree_out__ModuleName_8, parse_tree__parse_tree_out__VersionNumbers_18);
        }
#line 216 "parse_tree_out.m"
      }
#line 220 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__IntIncls_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 220 "parse_tree_out.m"
      {
#line 221 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__IntAvails_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 222 "parse_tree_out.m"
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__IntItems_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "parse_tree_out.m"
      }
#line 225 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 225 "parse_tree_out.m"
      {
#line 225 "parse_tree_out.m"
      }
#line 225 "parse_tree_out.m"
    else
#line 227 "parse_tree_out.m"
      {
#line 227 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__IntItemBlock_19;

#line 226 "parse_tree_out.m"
        {
#line 226 "parse_tree_out.m"
          parse_tree__parse_tree_out__IntItemBlock_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 226 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 0) = ((MR_Box) ((MR_Integer) 0));
#line 226 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 1) = ((MR_Box) (parse_tree__parse_tree_out__ModuleContext_10));
#line 226 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 2) = ((MR_Box) (parse_tree__parse_tree_out__IntIncls_12));
#line 226 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 3) = ((MR_Box) (parse_tree__parse_tree_out__IntAvails_14));
#line 226 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 4) = ((MR_Box) (parse_tree__parse_tree_out__IntItems_16));
#line 226 "parse_tree_out.m"
        }
#line 228 "parse_tree_out.m"
        {
#line 228 "parse_tree_out.m"
          parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__IntItemBlock_19);
        }
#line 227 "parse_tree_out.m"
      }
#line 231 "parse_tree_out.m"
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__ImpIncls_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 231 "parse_tree_out.m"
      {
#line 232 "parse_tree_out.m"
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__ImpAvails_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "parse_tree_out.m"
        if (parse_tree__parse_tree_out__succeeded)
#line 233 "parse_tree_out.m"
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__ImpItems_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "parse_tree_out.m"
      }
#line 236 "parse_tree_out.m"
    if (parse_tree__parse_tree_out__succeeded)
#line 236 "parse_tree_out.m"
      {
#line 236 "parse_tree_out.m"
      }
#line 236 "parse_tree_out.m"
    else
#line 238 "parse_tree_out.m"
      {
#line 238 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__ImpItemBlock_20;

#line 237 "parse_tree_out.m"
        {
#line 237 "parse_tree_out.m"
          parse_tree__parse_tree_out__ImpItemBlock_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 237 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 0) = ((MR_Box) ((MR_Integer) 1));
#line 237 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__ModuleContext_10));
#line 237 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 2) = ((MR_Box) (parse_tree__parse_tree_out__ImpIncls_13));
#line 237 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 3) = ((MR_Box) (parse_tree__parse_tree_out__ImpAvails_15));
#line 237 "parse_tree_out.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 4) = ((MR_Box) (parse_tree__parse_tree_out__ImpItems_17));
#line 237 "parse_tree_out.m"
        }
#line 239 "parse_tree_out.m"
        {
#line 239 "parse_tree_out.m"
          parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ImpItemBlock_20);
#line 239 "parse_tree_out.m"
          return;
        }
#line 238 "parse_tree_out.m"
      }
#line 206 "parse_tree_out.m"
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
#line 195 "parse_tree_out.m"
  {
#line 195 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 195 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 0)));
#line 195 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleComponentsCord_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 2)));
#line 195 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__ModuleComponents_11;
#line 196 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 1)));

#line 197 "parse_tree_out.m"
    {
#line 197 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 198 "parse_tree_out.m"
    {
#line 198 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 199 "parse_tree_out.m"
    {
#line 199 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 200 "parse_tree_out.m"
    {
#line 200 "parse_tree_out.m"
      parse_tree__parse_tree_out__ModuleComponents_11 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__parse_tree_out__ModuleComponentsCord_10);
    }
#line 201 "parse_tree_out.m"
    {
#line 201 "parse_tree_out.m"
      parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(parse_tree__parse_tree_out__Info_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out__ModuleComponents_11);
    }
#line 202 "parse_tree_out.m"
    {
#line 202 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ":- end_module ");
    }
#line 203 "parse_tree_out.m"
    {
#line 203 "parse_tree_out.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
#line 204 "parse_tree_out.m"
    {
#line 204 "parse_tree_out.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 204 "parse_tree_out.m"
      return;
    }
#line 195 "parse_tree_out.m"
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
#line 146 "parse_tree_out.m"
  {
#line 146 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 146 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Res_27;

#line 158 "parse_tree_out.m"
    {
#line 158 "parse_tree_out.m"
      mercury__io__open_output_4_p_0(parse_tree__parse_tree_out__OutputFileName_7, &parse_tree__parse_tree_out__Res_27);
    }
#line 186 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Res_27)) == (MR_mktag((MR_Integer) 1))))
#line 187 "parse_tree_out.m"
      {
#line 188 "parse_tree_out.m"
        {
#line 188 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
        }
#line 189 "parse_tree_out.m"
        {
#line 189 "parse_tree_out.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
        }
#line 190 "parse_tree_out.m"
        {
#line 190 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
#line 190 "parse_tree_out.m"
          return;
        }
#line 187 "parse_tree_out.m"
      }
#line 186 "parse_tree_out.m"
    else
#line 160 "parse_tree_out.m"
      {
#line 160 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Res_27, (MR_Integer) 0)));
#line 160 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Verbose_29;
#line 160 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Info_31;

#line 161 "parse_tree_out.m"
        {
#line 161 "parse_tree_out.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 45, &parse_tree__parse_tree_out__Verbose_29);
        }
#line 175 "parse_tree_out.m"
        {
#line 175 "parse_tree_out.m"
          parse_tree__parse_tree_out__Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 0, (MR_Integer) 0);
        }
#line 8954 "parse_tree.parse_tree_out.c"
#line 8955 "parse_tree.parse_tree_out.c"
        switch (parse_tree__parse_tree_out__Verbose_29) {
#line 8957 "parse_tree.parse_tree_out.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 8959 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 0:
#line 8961 "parse_tree.parse_tree_out.c"
            {
#line 8963 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_30;
#line 178 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_32_32;

#line 171 "parse_tree_out.m"
              {
#line 171 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_30);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeOpt_8);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_30, &parse_tree__parse_tree_out__V_32_32);
              }
#line 179 "parse_tree_out.m"
              {
#line 179 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
#line 179 "parse_tree_out.m"
                return;
              }
#line 8990 "parse_tree.parse_tree_out.c"
            }
#line 8992 "parse_tree.parse_tree_out.c"
            break;
#line 8994 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 1:
#line 8996 "parse_tree.parse_tree_out.c"
            {
#line 8998 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_57;
#line 178 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_56_56;

#line 164 "parse_tree_out.m"
              {
#line 164 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
              }
#line 165 "parse_tree_out.m"
              {
#line 165 "parse_tree_out.m"
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
              }
#line 166 "parse_tree_out.m"
              {
#line 166 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "...");
              }
#line 167 "parse_tree_out.m"
              {
#line 167 "parse_tree_out.m"
                mercury__io__flush_output_2_p_0();
              }
#line 171 "parse_tree_out.m"
              {
#line 171 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_57);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeOpt_8);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_57, &parse_tree__parse_tree_out__V_56_56);
              }
#line 179 "parse_tree_out.m"
              {
#line 179 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
#line 182 "parse_tree_out.m"
              {
#line 182 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) " done\n");
#line 182 "parse_tree_out.m"
                return;
              }
#line 9050 "parse_tree.parse_tree_out.c"
            }
#line 9052 "parse_tree.parse_tree_out.c"
            break;
#line 9054 "parse_tree.parse_tree_out.c"
        }
#line 160 "parse_tree_out.m"
      }
#line 146 "parse_tree_out.m"
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
#line 142 "parse_tree_out.m"
  {
#line 142 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 142 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Res_27;

#line 158 "parse_tree_out.m"
    {
#line 158 "parse_tree_out.m"
      mercury__io__open_output_4_p_0(parse_tree__parse_tree_out__OutputFileName_7, &parse_tree__parse_tree_out__Res_27);
    }
#line 186 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Res_27)) == (MR_mktag((MR_Integer) 1))))
#line 187 "parse_tree_out.m"
      {
#line 188 "parse_tree_out.m"
        {
#line 188 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
        }
#line 189 "parse_tree_out.m"
        {
#line 189 "parse_tree_out.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
        }
#line 190 "parse_tree_out.m"
        {
#line 190 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
#line 190 "parse_tree_out.m"
          return;
        }
#line 187 "parse_tree_out.m"
      }
#line 186 "parse_tree_out.m"
    else
#line 160 "parse_tree_out.m"
      {
#line 160 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Res_27, (MR_Integer) 0)));
#line 160 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Verbose_29;
#line 160 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Info_31;

#line 161 "parse_tree_out.m"
        {
#line 161 "parse_tree_out.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 45, &parse_tree__parse_tree_out__Verbose_29);
        }
#line 175 "parse_tree_out.m"
        {
#line 175 "parse_tree_out.m"
          parse_tree__parse_tree_out__Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 0, (MR_Integer) 0);
        }
#line 9130 "parse_tree.parse_tree_out.c"
#line 9131 "parse_tree.parse_tree_out.c"
        switch (parse_tree__parse_tree_out__Verbose_29) {
#line 9133 "parse_tree.parse_tree_out.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 9135 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 0:
#line 9137 "parse_tree.parse_tree_out.c"
            {
#line 9139 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_30;
#line 178 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_32_32;

#line 171 "parse_tree_out.m"
              {
#line 171 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_30);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeInt_8);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_30, &parse_tree__parse_tree_out__V_32_32);
              }
#line 179 "parse_tree_out.m"
              {
#line 179 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
#line 179 "parse_tree_out.m"
                return;
              }
#line 9166 "parse_tree.parse_tree_out.c"
            }
#line 9168 "parse_tree.parse_tree_out.c"
            break;
#line 9170 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 1:
#line 9172 "parse_tree.parse_tree_out.c"
            {
#line 9174 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_57;
#line 178 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_56_56;

#line 164 "parse_tree_out.m"
              {
#line 164 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
              }
#line 165 "parse_tree_out.m"
              {
#line 165 "parse_tree_out.m"
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
              }
#line 166 "parse_tree_out.m"
              {
#line 166 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "...");
              }
#line 167 "parse_tree_out.m"
              {
#line 167 "parse_tree_out.m"
                mercury__io__flush_output_2_p_0();
              }
#line 171 "parse_tree_out.m"
              {
#line 171 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_57);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeInt_8);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_57, &parse_tree__parse_tree_out__V_56_56);
              }
#line 179 "parse_tree_out.m"
              {
#line 179 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
#line 182 "parse_tree_out.m"
              {
#line 182 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) " done\n");
#line 182 "parse_tree_out.m"
                return;
              }
#line 9226 "parse_tree.parse_tree_out.c"
            }
#line 9228 "parse_tree.parse_tree_out.c"
            break;
#line 9230 "parse_tree.parse_tree_out.c"
        }
#line 160 "parse_tree_out.m"
      }
#line 142 "parse_tree_out.m"
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
#line 138 "parse_tree_out.m"
  {
#line 138 "parse_tree_out.m"
    MR_bool parse_tree__parse_tree_out__succeeded;
#line 138 "parse_tree_out.m"
    MR_Word parse_tree__parse_tree_out__Res_27;

#line 158 "parse_tree_out.m"
    {
#line 158 "parse_tree_out.m"
      mercury__io__open_output_4_p_0(parse_tree__parse_tree_out__OutputFileName_7, &parse_tree__parse_tree_out__Res_27);
    }
#line 186 "parse_tree_out.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Res_27)) == (MR_mktag((MR_Integer) 1))))
#line 187 "parse_tree_out.m"
      {
#line 188 "parse_tree_out.m"
        {
#line 188 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
        }
#line 189 "parse_tree_out.m"
        {
#line 189 "parse_tree_out.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
        }
#line 190 "parse_tree_out.m"
        {
#line 190 "parse_tree_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
#line 190 "parse_tree_out.m"
          return;
        }
#line 187 "parse_tree_out.m"
      }
#line 186 "parse_tree_out.m"
    else
#line 160 "parse_tree_out.m"
      {
#line 160 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Res_27, (MR_Integer) 0)));
#line 160 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Verbose_29;
#line 160 "parse_tree_out.m"
        MR_Word parse_tree__parse_tree_out__Info_31;

#line 161 "parse_tree_out.m"
        {
#line 161 "parse_tree_out.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 45, &parse_tree__parse_tree_out__Verbose_29);
        }
#line 175 "parse_tree_out.m"
        {
#line 175 "parse_tree_out.m"
          parse_tree__parse_tree_out__Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 0, (MR_Integer) 0);
        }
#line 9306 "parse_tree.parse_tree_out.c"
#line 9307 "parse_tree.parse_tree_out.c"
        switch (parse_tree__parse_tree_out__Verbose_29) {
#line 9309 "parse_tree.parse_tree_out.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 9311 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 0:
#line 9313 "parse_tree.parse_tree_out.c"
            {
#line 9315 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_30;
#line 178 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_32_32;

#line 171 "parse_tree_out.m"
              {
#line 171 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_30);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeSrc_8);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_30, &parse_tree__parse_tree_out__V_32_32);
              }
#line 179 "parse_tree_out.m"
              {
#line 179 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
#line 179 "parse_tree_out.m"
                return;
              }
#line 9342 "parse_tree.parse_tree_out.c"
            }
#line 9344 "parse_tree.parse_tree_out.c"
            break;
#line 9346 "parse_tree.parse_tree_out.c"
          case (MR_Integer) 1:
#line 9348 "parse_tree.parse_tree_out.c"
            {
#line 9350 "parse_tree.parse_tree_out.c"
              MR_Word parse_tree__parse_tree_out__OutputStream_57;
#line 178 "parse_tree_out.m"
              MR_Word parse_tree__parse_tree_out__V_56_56;

#line 164 "parse_tree_out.m"
              {
#line 164 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
              }
#line 165 "parse_tree_out.m"
              {
#line 165 "parse_tree_out.m"
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
              }
#line 166 "parse_tree_out.m"
              {
#line 166 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) "...");
              }
#line 167 "parse_tree_out.m"
              {
#line 167 "parse_tree_out.m"
                mercury__io__flush_output_2_p_0();
              }
#line 171 "parse_tree_out.m"
              {
#line 171 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_57);
              }
#line 177 "parse_tree_out.m"
              {
#line 177 "parse_tree_out.m"
                parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeSrc_8);
              }
#line 178 "parse_tree_out.m"
              {
#line 178 "parse_tree_out.m"
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_57, &parse_tree__parse_tree_out__V_56_56);
              }
#line 179 "parse_tree_out.m"
              {
#line 179 "parse_tree_out.m"
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
#line 182 "parse_tree_out.m"
              {
#line 182 "parse_tree_out.m"
                mercury__io__write_string_3_p_0((MR_String) " done\n");
#line 182 "parse_tree_out.m"
                return;
              }
#line 9402 "parse_tree.parse_tree_out.c"
            }
#line 9404 "parse_tree.parse_tree_out.c"
            break;
#line 9406 "parse_tree.parse_tree_out.c"
        }
#line 160 "parse_tree_out.m"
      }
#line 138 "parse_tree_out.m"
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
