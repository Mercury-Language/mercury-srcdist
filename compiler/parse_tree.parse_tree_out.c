/*
** Automatically generated from `parse_tree_out.m'
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


/* :- module parse_tree.parse_tree_out. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_tree_out__init
ENDINIT
*/

#include "parse_tree.parse_tree_out.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
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
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_VA_PseudoTypeInfo_Struct4 parse_tree__parse_tree_out____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1237__1_6_p_0(
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out__HeadVar__4_31,
  MR_Box parse_tree__parse_tree_out__HeadVar__5_32,
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_33);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1235__1_6_p_0(
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out__HeadVar__4_26,
  MR_Box parse_tree__parse_tree_out__HeadVar__5_27,
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_28);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1179__1_4_p_0(
  MR_Word parse_tree__parse_tree_out__VarSet_13,
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_32);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1054__1_2_f_0(
  MR_Word parse_tree__parse_tree_out__Context_14,
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_24);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1020__1_1_f_0(
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_17);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__993__1_2_f_0(
  MR_Word parse_tree__parse_tree_out__Context_13,
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_31);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__985__1_2_f_0(
  MR_Word parse_tree__parse_tree_out__Context_13,
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_53);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__941__1_3_p_0(
  MR_Word parse_tree__parse_tree_out__HeadVar__1_11);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__601__1_2_f_0(
  MR_Word parse_tree__parse_tree_out__Context_12,
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_45);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__388__1_2_p_0(
  MR_Word parse_tree__parse_tree_out__Incls_10,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_19);

static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_6,
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_5,
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out__output_class_method_4_p_0(
  MR_Word parse_tree__parse_tree_out__Lang_5,
  MR_Word parse_tree__parse_tree_out__Method_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3,
  MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_0_11,
  MR_Box * parse_tree__parse_tree_out__STATE_VARIABLE_U_12);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(
  MR_Word parse_tree__parse_tree_out__Assertion_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__Use_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__Avail_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemInclude_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(
  MR_Word parse_tree__parse_tree_out__ModuleName_5,
  MR_Word parse_tree__parse_tree_out__VersionNumbers_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(
  MR_Word parse_tree__parse_tree_out__Info_1,
  MR_Word parse_tree__parse_tree_out__MaybePrevSectionKind_2,
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_tree_out__ItemInstance_6);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_tree_out__ItemPromise_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemMutable_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemTypeClass_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemPredDecl_6);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemModeDefn_6);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemInstDefn_6);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0(
  MR_Word parse_tree__parse_tree_out__InstVarSet_4,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
  MR_Word parse_tree__parse_tree_out__Args0_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemTypeDefn_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(
  MR_Word parse_tree__parse_tree_out__VarSet_1,
  MR_Word parse_tree__parse_tree_out__First_2,
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(
  MR_Integer parse_tree__parse_tree_out__NumBits_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(
  MR_Word parse_tree__parse_tree_out__Ctors_4);

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001(
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001(
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_4);


static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[5][6];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[5][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[8][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[1][1];

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_8[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_9[3][9];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[1][8];


/* sealed */ struct parse_tree__parse_tree_out__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_5_0_s parse_tree__parse_tree_out_vector_common_5[4];



static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[7][2] = {
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
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[4])),
    ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[8][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
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

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_8[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_9[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0])),
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
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0])),
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
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[1][8] = {
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



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0
  }
};

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

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out__parse_tree__parse_tree_out__type_ctor_info_output_parse_tree_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
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

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1237__1_6_p_0(
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out__HeadVar__4_31,
  MR_Box parse_tree__parse_tree_out__HeadVar__5_32,
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_33)
{
  {
    {
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out__TypeClassInfo_for_output_25, parse_tree__parse_tree_out__TypeVarSet_6, parse_tree__parse_tree_out__VarNamePrint_7, parse_tree__parse_tree_out__HeadVar__4_31, parse_tree__parse_tree_out__HeadVar__5_32, parse_tree__parse_tree_out__HeadVar__6_33);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1235__1_6_p_0(
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out__HeadVar__4_26,
  MR_Box parse_tree__parse_tree_out__HeadVar__5_27,
  MR_Box * parse_tree__parse_tree_out__HeadVar__6_28)
{
  {
    {
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out__TypeClassInfo_for_output_25, parse_tree__parse_tree_out__TypeVarSet_6, parse_tree__parse_tree_out__VarNamePrint_7, parse_tree__parse_tree_out__HeadVar__4_26, parse_tree__parse_tree_out__HeadVar__5_27, parse_tree__parse_tree_out__HeadVar__6_28);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1179__1_4_p_0(
  MR_Word parse_tree__parse_tree_out__VarSet_13,
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_32)
{
  {
    MR_String parse_tree__parse_tree_out__VarName_19;

    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out__VarSet_13, parse_tree__parse_tree_out__LambdaHeadVar__1_32, &parse_tree__parse_tree_out__VarName_19);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__VarName_19);
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1054__1_2_f_0(
  MR_Word parse_tree__parse_tree_out__Context_14,
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_24)
{
  {
    MR_Word parse_tree__parse_tree_out__LambdaHeadVar__2_25;

    {
      parse_tree__parse_tree_out__LambdaHeadVar__2_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_25, 0) = ((MR_Box) (parse_tree__parse_tree_out__LambdaHeadVar__1_24));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_25, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_14));
    }
    return parse_tree__parse_tree_out__LambdaHeadVar__2_25;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1020__1_1_f_0(
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_17)
{
  {
    MR_Word parse_tree__parse_tree_out__LambdaHeadVar__2_18;
    MR_Word parse_tree__parse_tree_out__Var_19;
    MR_Word parse_tree__parse_tree_out__Var_20;

    {
      parse_tree__parse_tree_out__Var_19 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_out__LambdaHeadVar__1_17);
    }
    {
      parse_tree__parse_tree_out__Var_20 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__parse_tree_out__LambdaHeadVar__2_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_18, 0) = ((MR_Box) (parse_tree__parse_tree_out__Var_19));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__Var_20));
    }
    return parse_tree__parse_tree_out__LambdaHeadVar__2_18;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__993__1_2_f_0(
  MR_Word parse_tree__parse_tree_out__Context_13,
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_31)
{
  {
    MR_Word parse_tree__parse_tree_out__LambdaHeadVar__2_32;

    {
      parse_tree__parse_tree_out__LambdaHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_32, 0) = ((MR_Box) (parse_tree__parse_tree_out__LambdaHeadVar__1_31));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_32, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_13));
    }
    return parse_tree__parse_tree_out__LambdaHeadVar__2_32;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__985__1_2_f_0(
  MR_Word parse_tree__parse_tree_out__Context_13,
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_53)
{
  {
    MR_Word parse_tree__parse_tree_out__LambdaHeadVar__2_54;

    {
      parse_tree__parse_tree_out__LambdaHeadVar__2_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_54, 0) = ((MR_Box) (parse_tree__parse_tree_out__LambdaHeadVar__1_53));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_54, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_13));
    }
    return parse_tree__parse_tree_out__LambdaHeadVar__2_54;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__941__1_3_p_0(
  MR_Word parse_tree__parse_tree_out__HeadVar__1_11)
{
  {
    MR_Box parse_tree__parse_tree_out__conv0_HeadVar__3_13;

    {
      parse_tree__mercury_to_mercury__mercury_format_sym_name_and_arity_3_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__HeadVar__1_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_HeadVar__3_13);
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__601__1_2_f_0(
  MR_Word parse_tree__parse_tree_out__Context_12,
  MR_Word parse_tree__parse_tree_out__LambdaHeadVar__1_45)
{
  {
    MR_Word parse_tree__parse_tree_out__LambdaHeadVar__2_46;

    {
      parse_tree__parse_tree_out__LambdaHeadVar__2_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_46, 0) = ((MR_Box) (parse_tree__parse_tree_out__LambdaHeadVar__1_45));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__LambdaHeadVar__2_46, 1) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
    }
    return parse_tree__parse_tree_out__LambdaHeadVar__2_46;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__388__1_2_p_0(
  MR_Word parse_tree__parse_tree_out__Incls_10,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_19)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;

    {
      parse_tree__parse_tree_out__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[0], ((MR_Box) (parse_tree__parse_tree_out__Incls_10)), ((MR_Box) (parse_tree__parse_tree_out__HeadVar__2_19)));
    }
    return parse_tree__parse_tree_out__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_6,
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
{
  {
    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_tree_out__HeadVar__1_1, parse_tree__parse_tree_out__HeadVar__2_2, parse_tree__parse_tree_out__HeadVar__3_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * parse_tree__parse_tree_out__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
{
  {
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar1_4 = parse_tree__parse_tree_out__HeadVar__2_2;
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar2_5 = parse_tree__parse_tree_out__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__parse_tree_out__HeadVar__1_1, (MR_Word) parse_tree__parse_tree_out__Cast_HeadVar1_4, (MR_Word) parse_tree__parse_tree_out__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(
  MR_Word parse_tree__parse_tree_out__TypeInfo_for_PT_5,
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;

    {
      parse_tree__parse_tree_out__succeeded = parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__parse_tree_out__HeadVar__1_1, parse_tree__parse_tree_out__HeadVar__2_2);
    }
    return parse_tree__parse_tree_out__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar1_3 = parse_tree__parse_tree_out__HeadVar__1_1;
    MR_Word parse_tree__parse_tree_out__Cast_HeadVar2_4 = parse_tree__parse_tree_out__HeadVar__2_2;

    {
      parse_tree__parse_tree_out__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__parse_tree_out__Cast_HeadVar1_3, (MR_Word) parse_tree__parse_tree_out__Cast_HeadVar2_4);
    }
    return parse_tree__parse_tree_out__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__output_class_method_4_p_0(
  MR_Word parse_tree__parse_tree_out__Lang_5,
  MR_Word parse_tree__parse_tree_out__Method_6)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Method_6)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_tree_out__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_out__TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 2)));
        MR_Word parse_tree__parse_tree_out__WithType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 3)));
        MR_Word parse_tree__parse_tree_out__WithInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 4)));
        MR_Word parse_tree__parse_tree_out__MaybeDetism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 5)));
        MR_Word parse_tree__parse_tree_out__TypeVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 6)));
        MR_Word parse_tree__parse_tree_out__InstVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 7)));
        MR_Word parse_tree__parse_tree_out__ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 8)));
        MR_Word parse_tree__parse_tree_out__Purity_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 9)));
        MR_Word parse_tree__parse_tree_out__ClassContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 10)));
        MR_String parse_tree__parse_tree_out__Name_20;
        MR_Word parse_tree__parse_tree_out___Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_6, (MR_Integer) 11)));

        {
          parse_tree__parse_tree_out__Name_20 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out__SymName_8);
        }
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__PredOrFunc_9 == (MR_Integer) 1);
        if (parse_tree__parse_tree_out__succeeded)
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_tree_out__succeeded)
          {
            MR_Word parse_tree__parse_tree_out__FuncTypesAndModes_21;
            MR_Word parse_tree__parse_tree_out__RetTypeAndMode_22;
            MR_Word parse_tree__parse_tree_out__Var_39;
            MR_Box parse_tree__parse_tree_out__conv0_RetTypeAndMode_22;
            MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27;

            {
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__parse_tree_out__TypesAndModes_10, &parse_tree__parse_tree_out__FuncTypesAndModes_21, &parse_tree__parse_tree_out__conv0_RetTypeAndMode_22);
            }
            parse_tree__parse_tree_out__RetTypeAndMode_22 = ((MR_Word) parse_tree__parse_tree_out__conv0_RetTypeAndMode_22);
            {
              parse_tree__parse_tree_out__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_39, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_20));
            }
            {
              parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__TypeVarSet_14, parse_tree__parse_tree_out__InstVarSet_15, parse_tree__parse_tree_out__ExistQVars_16, parse_tree__parse_tree_out__Var_39, parse_tree__parse_tree_out__FuncTypesAndModes_21, parse_tree__parse_tree_out__RetTypeAndMode_22, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_17, parse_tree__parse_tree_out__ClassContext_18, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27);
            }
          }
        else
          {
            MR_Word parse_tree__parse_tree_out__Var_44;
            MR_Box parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27;

            {
              parse_tree__parse_tree_out__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_44, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_20));
            }
            {
              parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__TypeVarSet_14, parse_tree__parse_tree_out__InstVarSet_15, parse_tree__parse_tree_out__PredOrFunc_9, parse_tree__parse_tree_out__ExistQVars_16, parse_tree__parse_tree_out__Var_44, parse_tree__parse_tree_out__TypesAndModes_10, parse_tree__parse_tree_out__WithType_11, parse_tree__parse_tree_out__WithInst_12, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_17, parse_tree__parse_tree_out__ClassContext_18, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27);
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 2)));
        MR_Word parse_tree__parse_tree_out__SymName_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__PredOrFunc_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_out__WithInst_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 3)));
        MR_Word parse_tree__parse_tree_out__MaybeDetism_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 4)));
        MR_Word parse_tree__parse_tree_out__InstVarSet_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 5)));
        MR_String parse_tree__parse_tree_out__Name_56;
        MR_Word parse_tree__parse_tree_out___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Method_6, (MR_Integer) 6)));
        MR_Word parse_tree__parse_tree_out__Var_30;

        {
          parse_tree__parse_tree_out__Name_56 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out__SymName_50);
        }
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithInst_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_tree_out__succeeded)
          {
            parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__PredOrFunc_51)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_out__succeeded)
              {
                parse_tree__parse_tree_out__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__PredOrFunc_51, (MR_Integer) 0)));
                parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__Var_30 == (MR_Integer) 1);
              }
          }
        if (parse_tree__parse_tree_out__succeeded)
          {
            MR_Word parse_tree__parse_tree_out__FuncModes_24;
            MR_Word parse_tree__parse_tree_out__RetMode_25;
            MR_Word parse_tree__parse_tree_out__Var_31;
            MR_Box parse_tree__parse_tree_out__conv3_RetMode_25;
            MR_Box parse_tree__parse_tree_out__conv4_STATE_VARIABLE_IO_27;

            {
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out__Modes_23, &parse_tree__parse_tree_out__FuncModes_24, &parse_tree__parse_tree_out__conv3_RetMode_25);
            }
            parse_tree__parse_tree_out__RetMode_25 = ((MR_Word) parse_tree__parse_tree_out__conv3_RetMode_25);
            {
              parse_tree__parse_tree_out__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_31, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_56));
            }
            {
              parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__InstVarSet_54, parse_tree__parse_tree_out__Var_31, parse_tree__parse_tree_out__FuncModes_24, parse_tree__parse_tree_out__RetMode_25, parse_tree__parse_tree_out__MaybeDetism_53, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv4_STATE_VARIABLE_IO_27);
            }
          }
        else
          {
            MR_Word parse_tree__parse_tree_out__Var_35;
            MR_Box parse_tree__parse_tree_out__conv5_STATE_VARIABLE_IO_27;

            {
              parse_tree__parse_tree_out__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_35, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_56));
            }
            {
              parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_5, parse_tree__parse_tree_out__InstVarSet_54, parse_tree__parse_tree_out__Var_35, parse_tree__parse_tree_out__Modes_23, parse_tree__parse_tree_out__WithInst_52, parse_tree__parse_tree_out__MaybeDetism_53, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv5_STATE_VARIABLE_IO_27);
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1237__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1235__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(
  MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_25,
  MR_Word parse_tree__parse_tree_out__TypeVarSet_6,
  MR_Word parse_tree__parse_tree_out__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3,
  MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_0_11,
  MR_Box * parse_tree__parse_tree_out__STATE_VARIABLE_U_12)
{
  {
    MR_Word parse_tree__parse_tree_out__TypeInfo_30_30;
    MR_Word parse_tree__parse_tree_out__Domain_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Range_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_14_14;
    MR_Word parse_tree__parse_tree_out__Var_16;
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_17_17;
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_19_19;
    MR_Word parse_tree__parse_tree_out__Var_21;
    MR_Box parse_tree__parse_tree_out__STATE_VARIABLE_U_22_22;
    void MR_CALL (* parse_tree__parse_tree_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* parse_tree__parse_tree_out__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out__func_0(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out__STATE_VARIABLE_U_0_11, &parse_tree__parse_tree_out__STATE_VARIABLE_U_14_14);
    }
    {
      parse_tree__parse_tree_out__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_25));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 4) = ((MR_Box) (parse_tree__parse_tree_out__TypeVarSet_6));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 5) = ((MR_Box) (parse_tree__parse_tree_out__VarNamePrint_7));
    }
    parse_tree__parse_tree_out__TypeInfo_30_30 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2];
    parse_tree__parse_tree_out__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 25)));
    {
      parse_tree__parse_tree_out__func_1(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) (parse_tree__parse_tree_out__TypeInfo_30_30)), ((MR_Box) (parse_tree__parse_tree_out__Domain_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__Var_16)), parse_tree__parse_tree_out__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out__STATE_VARIABLE_U_17_17);
    }
    parse_tree__parse_tree_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out__func_2(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) " -> ")), parse_tree__parse_tree_out__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out__STATE_VARIABLE_U_19_19);
    }
    {
      parse_tree__parse_tree_out__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_21, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_21, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_25));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_21, 4) = ((MR_Box) (parse_tree__parse_tree_out__TypeVarSet_6));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_21, 5) = ((MR_Box) (parse_tree__parse_tree_out__VarNamePrint_7));
    }
    parse_tree__parse_tree_out__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 25)));
    {
      parse_tree__parse_tree_out__func_3(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) (parse_tree__parse_tree_out__TypeInfo_30_30)), ((MR_Box) (parse_tree__parse_tree_out__Range_9)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__Var_21)), parse_tree__parse_tree_out__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out__STATE_VARIABLE_U_22_22);
    }
    parse_tree__parse_tree_out__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out__func_4(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out__STATE_VARIABLE_U_22_22, parse_tree__parse_tree_out__STATE_VARIABLE_U_12);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(
  MR_Word parse_tree__parse_tree_out__Assertion_4)
{
  switch (parse_tree__parse_tree_out__Assertion_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "can_pass_as_mercury_type");
        }
      }
      break;
    case (MR_Integer) 1:
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "stable");
        }
      }
      break;
    case (MR_Integer) 2:
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "word_aligned_pointer");
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__Use_6)
{
  {
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Use_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Use_6, (MR_Integer) 1)));
    MR_Integer parse_tree__parse_tree_out___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Use_6, (MR_Integer) 2)));

    {
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":- ");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "use_module");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__Avail_6)
{
  {
    MR_Word parse_tree__parse_tree_out__ModuleName_8;
    MR_Word parse_tree__parse_tree_out__Context_9;
    MR_String parse_tree__parse_tree_out__Decl_11;

    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Avail_6)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_tree_out__Var_15 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Avail_6), (MR_Integer) 0);
        MR_Integer parse_tree__parse_tree_out___SeqNum_10;

        parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, (MR_Integer) 0)));
        parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, (MR_Integer) 1)));
        parse_tree__parse_tree_out___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, (MR_Integer) 2)));
        parse_tree__parse_tree_out__Decl_11 = (MR_String) "import_module";
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__Var_14 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Avail_6), (MR_Integer) 1);
        MR_Integer parse_tree__parse_tree_out___SeqNum_18;

        parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_14, (MR_Integer) 0)));
        parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_14, (MR_Integer) 1)));
        parse_tree__parse_tree_out___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_14, (MR_Integer) 2)));
        parse_tree__parse_tree_out__Decl_11 = (MR_String) "use_module";
      }
    {
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":- ");
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Decl_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemInclude_6)
{
  {
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInclude_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInclude_6, (MR_Integer) 1)));
    MR_Integer parse_tree__parse_tree_out___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInclude_6, (MR_Integer) 2)));

    {
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":- ");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "include_module");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out_clause__output_instance_method_clause_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0(
  MR_Word parse_tree__parse_tree_out__Method_4)
{
  {
    MR_Word parse_tree__parse_tree_out__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out__Defn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_4, (MR_Integer) 2)));
    MR_Integer parse_tree__parse_tree_out__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_4, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Method_4, (MR_Integer) 4)));

    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Defn_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Defn_8, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__Var_18;

        {
          mercury__io__write_string_3_p_0((MR_String) "\t(");
        }
        {
          parse_tree__parse_tree_out__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 3) = ((MR_Box) (parse_tree__parse_tree_out__MethodName_7));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, parse_tree__parse_tree_out__Items_12, (MR_String) "),\n\t(", parse_tree__parse_tree_out__Var_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__PredName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Defn_8, (MR_Integer) 0)));

        {
          mercury__io__write_char_3_p_0((MR_Char) 9);
        }
        switch (parse_tree__parse_tree_out__PredOrFunc_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "func(");
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "pred(");
              }
            }
            break;
        }
        {
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out__MethodName_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
        {
          mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__Arity_9);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ") is ");
        }
        {
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__PredName_11);
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_4)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_2));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__AugCompUnit_6)
{
  {
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__ModuleVersionNumbers_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__DirectIntItemBlocks_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__IndirectIntItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out__OptItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 6)));
    MR_Word parse_tree__parse_tree_out__IntForOptItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 7)));
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__AugCompUnit_6, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_26_26;

    {
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% The module version numbers.\n");
    }
    {
      mercury__map__foldl_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[4], parse_tree__parse_tree_out__ModuleVersionNumbers_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_26_26);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% The src item blocks.\n");
    }
    {
      parse_tree__parse_tree_out__mercury_output_src_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SrcItemBlocks_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% The direct interface item blocks.\n");
    }
    {
      parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__DirectIntItemBlocks_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% The indirect interface item blocks.\n");
    }
    {
      parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__IndirectIntItemBlocks_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% The optimization item blocks.\n");
    }
    {
      parse_tree__parse_tree_out__mercury_output_opt_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__OptItemBlocks_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% The interface item blocks for optimization.\n");
    }
    {
      parse_tree__parse_tree_out__mercury_output_int_for_opt_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__IntForOptItemBlocks_15);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_blocks_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word parse_tree__parse_tree_out__IntForOptItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__IntForOptItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

          {
            parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__IntForOptItemBlock_10);
          }
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__parse_tree_out__next_value_of_HeadVar__2_2 = parse_tree__parse_tree_out__IntForOptItemBlocks_11;

            parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__IntForOptItemBlock_6)
{
  {
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
    MR_Word parse_tree__parse_tree_out__IntForOptSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__Var_15;
    MR_Word parse_tree__parse_tree_out__Var_17;
    MR_Word parse_tree__parse_tree_out__ModuleName_34;
    MR_Word parse_tree__parse_tree_out__IntFileKind_35;
    MR_String parse_tree__parse_tree_out__Var_38;
    MR_String parse_tree__parse_tree_out__Var_40;
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptItemBlock_6, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16;
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18;

    {
      parse_tree__parse_tree_out__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
    }
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__Var_15, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16);
    }
    {
      parse_tree__parse_tree_out__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_17, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__Var_17, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18);
    }
    parse_tree__parse_tree_out__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptSectionKind_8, (MR_Integer) 0)));
    parse_tree__parse_tree_out__IntFileKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntForOptSectionKind_8, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) ":- ioms_opt_imported(");
    }
    {
      parse_tree__parse_tree_out__Var_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_34);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Var_38);
    }
    {
      parse_tree__parse_tree_out__Var_40 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_35);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Var_40);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    {
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_blocks_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word parse_tree__parse_tree_out__OptItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__OptItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

          {
            parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__OptItemBlock_10);
          }
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__parse_tree_out__next_value_of_HeadVar__2_2 = parse_tree__parse_tree_out__OptItemBlocks_11;

            parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__succeeded = parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__388__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))));
    }
    return parse_tree__parse_tree_out__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__OptItemBlock_6)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;
    MR_Word parse_tree__parse_tree_out__OptSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__Var_15;
    MR_Word parse_tree__parse_tree_out__Var_20;
    MR_Word parse_tree__parse_tree_out__ModuleName_34;
    MR_Word parse_tree__parse_tree_out__OptFileKind_35;
    MR_String parse_tree__parse_tree_out__Var_38;
    MR_String parse_tree__parse_tree_out__Var_40;
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptItemBlock_6, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21;

    {
      parse_tree__parse_tree_out__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 3) = ((MR_Box) (parse_tree__parse_tree_out__Incls_10));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(parse_tree__parse_tree_out__Var_15, (MR_String) "parse_tree.parse_tree_out", (MR_String) "predicate \140parse_tree.parse_tree_out.mercury_output_opt_item_block\'/4", (MR_String) "Incls != []");
    }
    {
      parse_tree__parse_tree_out__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_20, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_20, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out__Var_20, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21);
    }
    parse_tree__parse_tree_out__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptSectionKind_8, (MR_Integer) 0)));
    parse_tree__parse_tree_out__OptFileKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__OptSectionKind_8, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) ":- oms_opt_imported(");
    }
    {
      parse_tree__parse_tree_out__Var_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_34);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Var_38);
    }
    {
      parse_tree__parse_tree_out__Var_40 = parse_tree__file_kind__opt_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__OptFileKind_35);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Var_40);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    {
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word parse_tree__parse_tree_out__IntItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__IntItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

          {
            parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__IntItemBlock_10);
          }
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__parse_tree_out__next_value_of_HeadVar__2_2 = parse_tree__parse_tree_out__IntItemBlocks_11;

            parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__IntItemBlock_6)
{
  {
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
    MR_Word parse_tree__parse_tree_out__IntSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__Var_15;
    MR_Word parse_tree__parse_tree_out__Var_17;
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_6, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16;
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18;

    {
      parse_tree__parse_tree_out__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_15, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
    }
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__Var_15, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_16_16);
    }
    {
      parse_tree__parse_tree_out__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_17, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__Var_17, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_18_18);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__IntSectionKind_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String parse_tree__parse_tree_out__Var_40;
        MR_String parse_tree__parse_tree_out__Var_42;
        MR_Word parse_tree__parse_tree_out__ModuleName_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__IntFileKind_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)));

        {
          mercury__io__write_string_3_p_0((MR_String) ":- ims_abstract_imported(");
        }
        {
          parse_tree__parse_tree_out__Var_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_63);
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Var_40);
        }
        {
          parse_tree__parse_tree_out__Var_42 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_64);
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Var_42);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__IntFileKind_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) & (MR_Integer) 3);
        MR_Word parse_tree__parse_tree_out__ImportLocn_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
        MR_Word parse_tree__parse_tree_out__ImportedOrUsed_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntSectionKind_8, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
        MR_String parse_tree__parse_tree_out__Var_54;
        MR_String parse_tree__parse_tree_out__Var_56;

        switch (parse_tree__parse_tree_out__ImportedOrUsed_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ":- ims_imported");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ":- ims_used");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ":- ims_used_and_imported");
              }
            }
            break;
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
        {
          parse_tree__parse_tree_out__Var_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_out__ModuleName_34);
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Var_54);
        }
        {
          parse_tree__parse_tree_out__Var_56 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(parse_tree__parse_tree_out__IntFileKind_35);
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Var_56);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        {
          mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0, ((MR_Box) (parse_tree__parse_tree_out__ImportLocn_36)));
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
      }
    {
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_blocks_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word parse_tree__parse_tree_out__SrcItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

          {
            parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__SrcItemBlock_10);
          }
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__parse_tree_out__next_value_of_HeadVar__2_2 = parse_tree__parse_tree_out__SrcItemBlocks_11;

            parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__SrcItemBlock_6)
{
  {
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
    MR_Word parse_tree__parse_tree_out__SrcSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__Var_16;
    MR_Word parse_tree__parse_tree_out__Var_18;
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SrcItemBlock_6, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17;
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19;

    switch (parse_tree__parse_tree_out__SrcSectionKind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ":- ams_impl_but_exported_to_submodules.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
          }
        }
        break;
    }
    {
      parse_tree__parse_tree_out__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
    }
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__Var_16, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17);
    }
    {
      parse_tree__parse_tree_out__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__Var_18, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19);
    }
    {
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_compilation_unit_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__CompUnit_6)
{
  {
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__CompUnit_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__ItemBlocks_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__CompUnit_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__CompUnit_6, (MR_Integer) 1)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
    {
      parse_tree__parse_tree_out__mercury_output_raw_item_blocks_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemBlocks_10);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_blocks_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word parse_tree__parse_tree_out__RawItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__RawItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

          {
            parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__RawItemBlock_10);
          }
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__parse_tree_out__next_value_of_HeadVar__2_2 = parse_tree__parse_tree_out__RawItemBlocks_11;

            parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      break;
    }
}

void MR_CALL 
parse_tree__parse_tree_out__convert_to_mercury_opt_5_p_0(
  MR_Word parse_tree__parse_tree_out__Globals_6,
  MR_String parse_tree__parse_tree_out__OutputFileName_7,
  MR_Word parse_tree__parse_tree_out__ParseTreeOpt_8)
{
  {
    MR_Word parse_tree__parse_tree_out__Res_27;

    {
      mercury__io__open_output_4_p_0(parse_tree__parse_tree_out__OutputFileName_7, &parse_tree__parse_tree_out__Res_27);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Res_27)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Res_27, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__Verbose_29;
        MR_Word parse_tree__parse_tree_out__Info_31;

        {
          libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 56, &parse_tree__parse_tree_out__Verbose_29);
        }
        {
          parse_tree__parse_tree_out__Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 0, (MR_Integer) 0);
        }
        switch (parse_tree__parse_tree_out__Verbose_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out__OutputStream_30;
              MR_Word parse_tree__parse_tree_out__Var_32;

              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_30);
              }
              {
                parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeOpt_8);
              }
              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_30, &parse_tree__parse_tree_out__Var_32);
              }
              {
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out__OutputStream_57;
              MR_Word parse_tree__parse_tree_out__Var_56;

              {
                mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
              }
              {
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "...");
              }
              {
                mercury__io__flush_output_2_p_0();
              }
              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_57);
              }
              {
                parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeOpt_8);
              }
              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_57, &parse_tree__parse_tree_out__Var_56);
              }
              {
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " done\n");
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ParseTree_6)
{
  {
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Use_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__Var_20;
    MR_Word parse_tree__parse_tree_out___OptFileKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 2)));
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21;

    {
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
    {
      parse_tree__parse_tree_out__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_20, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_20, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out__Var_20, parse_tree__parse_tree_out__Use_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_21_21);
    }
    {
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__convert_to_mercury_int_5_p_0(
  MR_Word parse_tree__parse_tree_out__Globals_6,
  MR_String parse_tree__parse_tree_out__OutputFileName_7,
  MR_Word parse_tree__parse_tree_out__ParseTreeInt_8)
{
  {
    MR_Word parse_tree__parse_tree_out__Res_27;

    {
      mercury__io__open_output_4_p_0(parse_tree__parse_tree_out__OutputFileName_7, &parse_tree__parse_tree_out__Res_27);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Res_27)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Res_27, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__Verbose_29;
        MR_Word parse_tree__parse_tree_out__Info_31;

        {
          libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 56, &parse_tree__parse_tree_out__Verbose_29);
        }
        {
          parse_tree__parse_tree_out__Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 0, (MR_Integer) 0);
        }
        switch (parse_tree__parse_tree_out__Verbose_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out__OutputStream_30;
              MR_Word parse_tree__parse_tree_out__Var_32;

              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_30);
              }
              {
                parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeInt_8);
              }
              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_30, &parse_tree__parse_tree_out__Var_32);
              }
              {
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out__OutputStream_57;
              MR_Word parse_tree__parse_tree_out__Var_56;

              {
                mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
              }
              {
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "...");
              }
              {
                mercury__io__flush_output_2_p_0();
              }
              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_57);
              }
              {
                parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeInt_8);
              }
              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_57, &parse_tree__parse_tree_out__Var_56);
              }
              {
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " done\n");
              }
            }
            break;
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ParseTree_6)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__ModuleContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__MaybeVersionNumbers_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__IntIncls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__ImpIncls_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out__IntAvails_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 6)));
    MR_Word parse_tree__parse_tree_out__ImpAvails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 7)));
    MR_Word parse_tree__parse_tree_out__IntItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 8)));
    MR_Word parse_tree__parse_tree_out__ImpItems_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 9)));
    MR_Word parse_tree__parse_tree_out___IntFileKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 1)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
    if ((parse_tree__parse_tree_out__MaybeVersionNumbers_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__VersionNumbers_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeVersionNumbers_11, (MR_Integer) 0)));

        {
          parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(parse_tree__parse_tree_out__ModuleName_8, parse_tree__parse_tree_out__VersionNumbers_18);
        }
      }
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__IntIncls_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_tree_out__succeeded)
      {
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__IntAvails_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_tree_out__succeeded)
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__IntItems_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_tree_out__succeeded)
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__IntItemBlock_19;

        {
          parse_tree__parse_tree_out__IntItemBlock_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 1) = ((MR_Box) (parse_tree__parse_tree_out__ModuleContext_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 2) = ((MR_Box) (parse_tree__parse_tree_out__IntIncls_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 3) = ((MR_Box) (parse_tree__parse_tree_out__IntAvails_14));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__IntItemBlock_19, 4) = ((MR_Box) (parse_tree__parse_tree_out__IntItems_16));
        }
        {
          parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__IntItemBlock_19);
        }
      }
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__ImpIncls_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_tree_out__succeeded)
      {
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__ImpAvails_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_tree_out__succeeded)
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__ImpItems_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_tree_out__succeeded)
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__ImpItemBlock_20;

        {
          parse_tree__parse_tree_out__ImpItemBlock_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__ModuleContext_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 2) = ((MR_Box) (parse_tree__parse_tree_out__ImpIncls_13));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 3) = ((MR_Box) (parse_tree__parse_tree_out__ImpAvails_15));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ImpItemBlock_20, 4) = ((MR_Box) (parse_tree__parse_tree_out__ImpItems_17));
        }
        {
          parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ImpItemBlock_20);
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(
  MR_Word parse_tree__parse_tree_out__ModuleName_5,
  MR_Word parse_tree__parse_tree_out__VersionNumbers_6)
{
  {
    MR_Integer parse_tree__parse_tree_out__Var_12;

    {
      mercury__io__write_string_3_p_0((MR_String) ":- version_numbers(");
    }
    {
      parse_tree__parse_tree_out__Var_12 = recompilation__version__version_numbers_version_number_0_f_0();
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__Var_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      recompilation__version__write_version_numbers_3_p_0(parse_tree__parse_tree_out__VersionNumbers_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__RawItemBlock_6)
{
  {
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_25_25;
    MR_Word parse_tree__parse_tree_out__SectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__Var_16;
    MR_Word parse_tree__parse_tree_out__Var_18;
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__RawItemBlock_6, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17;
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19;

    switch (parse_tree__parse_tree_out__SectionKind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
          }
        }
        break;
    }
    {
      parse_tree__parse_tree_out__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_16, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
    }
    parse_tree__parse_tree_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__Var_16, parse_tree__parse_tree_out__Incls_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_17_17);
    }
    {
      parse_tree__parse_tree_out__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_18, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_5));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_tree_out__TypeCtorInfo_25_25, parse_tree__parse_tree_out__Var_18, parse_tree__parse_tree_out__Avails_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_19_19);
    }
    {
      parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Items_12);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__convert_to_mercury_src_5_p_0(
  MR_Word parse_tree__parse_tree_out__Globals_6,
  MR_String parse_tree__parse_tree_out__OutputFileName_7,
  MR_Word parse_tree__parse_tree_out__ParseTreeSrc_8)
{
  {
    MR_Word parse_tree__parse_tree_out__Res_27;

    {
      mercury__io__open_output_4_p_0(parse_tree__parse_tree_out__OutputFileName_7, &parse_tree__parse_tree_out__Res_27);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Res_27)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Res_27, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__Verbose_29;
        MR_Word parse_tree__parse_tree_out__Info_31;

        {
          libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 56, &parse_tree__parse_tree_out__Verbose_29);
        }
        {
          parse_tree__parse_tree_out__Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(parse_tree__parse_tree_out__Globals_6, (MR_Integer) 0, (MR_Integer) 0);
        }
        switch (parse_tree__parse_tree_out__Verbose_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out__OutputStream_30;
              MR_Word parse_tree__parse_tree_out__Var_32;

              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_30);
              }
              {
                parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeSrc_8);
              }
              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_30, &parse_tree__parse_tree_out__Var_32);
              }
              {
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out__OutputStream_57;
              MR_Word parse_tree__parse_tree_out__Var_56;

              {
                mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
              }
              {
                mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__OutputFileName_7);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "...");
              }
              {
                mercury__io__flush_output_2_p_0();
              }
              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__FileStream_28, &parse_tree__parse_tree_out__OutputStream_57);
              }
              {
                parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(parse_tree__parse_tree_out__Info_31, parse_tree__parse_tree_out__ParseTreeSrc_8);
              }
              {
                mercury__io__set_output_stream_4_p_0(parse_tree__parse_tree_out__OutputStream_57, &parse_tree__parse_tree_out__Var_56);
              }
              {
                mercury__io__close_output_3_p_0(parse_tree__parse_tree_out__FileStream_28);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " done\n");
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(
  MR_Word parse_tree__parse_tree_out__Info_1,
  MR_Word parse_tree__parse_tree_out__MaybePrevSectionKind_2,
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out__succeeded;

        if ((parse_tree__parse_tree_out__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__parse_tree_out__Component_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out__Components_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word parse_tree__parse_tree_out__MaybeCurSectionKind_21;

            if (((MR_tag((MR_Word) parse_tree__parse_tree_out__Component_13)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word parse_tree__parse_tree_out__SubParseTree_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Component_13, (MR_Integer) 2)));
                MR_Word parse_tree__parse_tree_out__Lang_24;
                MR_Word parse_tree__parse_tree_out__SectionKind_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Component_13, (MR_Integer) 0)));
                MR_Word parse_tree__parse_tree_out___SectionContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Component_13, (MR_Integer) 1)));

                {
                  parse_tree__parse_tree_out__Lang_24 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_1);
                }
                switch (parse_tree__parse_tree_out__Lang_24) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    switch (parse_tree__parse_tree_out__SectionKind_45) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) "% nested submodule in implementation\n");
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) "% nested submodule in interface\n");
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word parse_tree__parse_tree_out__PrevSectionKind_25;

                      parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybePrevSectionKind_2)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_tree_out__succeeded)
                        {
                          parse_tree__parse_tree_out__PrevSectionKind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybePrevSectionKind_2, (MR_Integer) 0)));
                          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__PrevSectionKind_25 == parse_tree__parse_tree_out__SectionKind_45);
                        }
                      if (parse_tree__parse_tree_out__succeeded)
                        {
                        }
                      else
                        switch (parse_tree__parse_tree_out__SectionKind_45) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              {
                                mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                              }
                            }
                            break;
                        }
                    }
                    break;
                }
                {
                  parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__SubParseTree_23);
                }
                parse_tree__parse_tree_out__MaybeCurSectionKind_21 = parse_tree__parse_tree_out__MaybePrevSectionKind_2;
              }
            else
              {
                MR_Word parse_tree__parse_tree_out__TypeCtorInfo_49_49;
                MR_Word parse_tree__parse_tree_out__TypeCtorInfo_50_50;
                MR_Word parse_tree__parse_tree_out__TypeCtorInfo_54_54;
                MR_Word parse_tree__parse_tree_out__SectionKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 0)));
                MR_Word parse_tree__parse_tree_out__InclsCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 2)));
                MR_Word parse_tree__parse_tree_out__AvailsCord_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 3)));
                MR_Word parse_tree__parse_tree_out__ItemsCord_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 4)));
                MR_Word parse_tree__parse_tree_out__Var_36;
                MR_Word parse_tree__parse_tree_out__Var_37;
                MR_Word parse_tree__parse_tree_out__Var_39;
                MR_Word parse_tree__parse_tree_out__Var_40;
                MR_Word parse_tree__parse_tree_out__Var_42;
                MR_Word parse_tree__parse_tree_out___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Component_13, (MR_Integer) 1)));
                MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_38_38;
                MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_41_41;

                switch (parse_tree__parse_tree_out__SectionKind_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                      }
                    }
                    break;
                }
                {
                  parse_tree__parse_tree_out__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_36, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_36, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_1));
                }
                parse_tree__parse_tree_out__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
                {
                  parse_tree__parse_tree_out__Var_37 = mercury__cord__list_1_f_0(parse_tree__parse_tree_out__TypeCtorInfo_49_49, parse_tree__parse_tree_out__InclsCord_18);
                }
                parse_tree__parse_tree_out__TypeCtorInfo_50_50 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
                {
                  mercury__list__foldl_4_p_2(parse_tree__parse_tree_out__TypeCtorInfo_49_49, parse_tree__parse_tree_out__TypeCtorInfo_50_50, parse_tree__parse_tree_out__Var_36, parse_tree__parse_tree_out__Var_37, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_38_38);
                }
                {
                  parse_tree__parse_tree_out__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_39, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_1));
                }
                parse_tree__parse_tree_out__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
                {
                  parse_tree__parse_tree_out__Var_40 = mercury__cord__list_1_f_0(parse_tree__parse_tree_out__TypeCtorInfo_54_54, parse_tree__parse_tree_out__AvailsCord_19);
                }
                {
                  mercury__list__foldl_4_p_2(parse_tree__parse_tree_out__TypeCtorInfo_54_54, parse_tree__parse_tree_out__TypeCtorInfo_50_50, parse_tree__parse_tree_out__Var_39, parse_tree__parse_tree_out__Var_40, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_41_41);
                }
                {
                  parse_tree__parse_tree_out__Var_42 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__parse_tree_out__ItemsCord_20);
                }
                {
                  parse_tree__parse_tree_out__mercury_output_items_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__Var_42);
                }
                {
                  parse_tree__parse_tree_out__MaybeCurSectionKind_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeCurSectionKind_21, 0) = ((MR_Box) (parse_tree__parse_tree_out__SectionKind_16));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_tree_out__next_value_of_MaybePrevSectionKind_2 = parse_tree__parse_tree_out__MaybeCurSectionKind_21;
              MR_Word parse_tree__parse_tree_out__next_value_of_HeadVar__3_3 = parse_tree__parse_tree_out__Components_14;

              parse_tree__parse_tree_out__HeadVar__3_3 = parse_tree__parse_tree_out__next_value_of_HeadVar__3_3;
              parse_tree__parse_tree_out__MaybePrevSectionKind_2 = parse_tree__parse_tree_out__next_value_of_MaybePrevSectionKind_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ParseTree_6)
{
  {
    MR_Word parse_tree__parse_tree_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__ModuleComponentsCord_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__ModuleComponents_11;
    MR_Word parse_tree__parse_tree_out___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ParseTree_6, (MR_Integer) 1)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
    {
      parse_tree__parse_tree_out__ModuleComponents_11 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__parse_tree_out__ModuleComponentsCord_10);
    }
    {
      parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(parse_tree__parse_tree_out__Info_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out__ModuleComponents_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":- end_module ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word parse_tree__parse_tree_out__Item_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));

          {
            parse_tree__parse_tree_out__mercury_output_item_4_p_0(parse_tree__parse_tree_out__Info_1, parse_tree__parse_tree_out__Item_10);
          }
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__parse_tree_out__next_value_of_HeadVar__2_2 = parse_tree__parse_tree_out__Items_11;

            parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      break;
    }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__Item_6)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;

    switch (MR_tag((MR_Word) parse_tree__parse_tree_out__Item_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_out__ItemClause_8 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Item_6), (MR_Integer) 0);

          {
            parse_tree__parse_tree_out_clause__mercury_output_item_clause_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemClause_8);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out__ItemTypeDefn_9 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Item_6), (MR_Integer) 1);

          {
            parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemTypeDefn_9);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_tree_out__ItemInstDefn_10 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__Item_6), (MR_Integer) 2);

          {
            parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemInstDefn_10);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out__ItemModeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemModeDefn_11);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out__ItemPredDecl_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemPredDecl_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_out__ItemModeDecl_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out__PredName0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out__PredOrFunc_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out__Modes_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out__WithInst_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 3)));
              MR_Word parse_tree__parse_tree_out__MaybeDet_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 4)));
              MR_Word parse_tree__parse_tree_out__VarSet_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 5)));
              MR_Word parse_tree__parse_tree_out__Context_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 6)));
              MR_Word parse_tree__parse_tree_out__PredName_86;
              MR_Word parse_tree__parse_tree_out__Lang_87;
              MR_Integer parse_tree__parse_tree_out___SeqNum_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDecl_13, (MR_Integer) 7)));
              MR_Word parse_tree__parse_tree_out__Var_91;

              {
                parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__PredName0_78, &parse_tree__parse_tree_out__PredName_86);
              }
              {
                parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_84);
              }
              {
                parse_tree__parse_tree_out__Lang_87 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
              }
              parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithInst_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (parse_tree__parse_tree_out__succeeded)
                {
                  parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__PredOrFunc_79)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_tree_out__succeeded)
                    {
                      parse_tree__parse_tree_out__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__PredOrFunc_79, (MR_Integer) 0)));
                      parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__Var_91 == (MR_Integer) 1);
                    }
                }
              if (parse_tree__parse_tree_out__succeeded)
                {
                  MR_Word parse_tree__parse_tree_out__FuncModes_88;
                  MR_Word parse_tree__parse_tree_out__RetMode_89;
                  MR_Box parse_tree__parse_tree_out__conv0_RetMode_89;

                  {
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out__Modes_80, &parse_tree__parse_tree_out__FuncModes_88, &parse_tree__parse_tree_out__conv0_RetMode_89);
                  }
                  parse_tree__parse_tree_out__RetMode_89 = ((MR_Word) parse_tree__parse_tree_out__conv0_RetMode_89);
                  {
                    parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0(parse_tree__parse_tree_out__Lang_87, parse_tree__parse_tree_out__VarSet_83, parse_tree__parse_tree_out__PredName_86, parse_tree__parse_tree_out__FuncModes_88, parse_tree__parse_tree_out__RetMode_89, parse_tree__parse_tree_out__MaybeDet_82);
                  }
                }
              else
                {
                  parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0(parse_tree__parse_tree_out__Lang_87, parse_tree__parse_tree_out__VarSet_83, parse_tree__parse_tree_out__PredName_86, parse_tree__parse_tree_out__Modes_80, parse_tree__parse_tree_out__WithInst_81, parse_tree__parse_tree_out__MaybeDet_82);
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__parse_tree_out__ItemPragma_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_item_pragma_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemPragma_14);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__parse_tree_out__ItemPromise_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_tree_out__ItemPromise_15);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__parse_tree_out__ItemTypeClass_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemTypeClass_16);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word parse_tree__parse_tree_out__ItemInstance_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_tree_out__ItemInstance_17);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word parse_tree__parse_tree_out__ItemInitialise_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out__PredSymName_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out__Arity_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out___Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 3)));
              MR_Integer parse_tree__parse_tree_out___SeqNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInitialise_18, (MR_Integer) 4)));

              {
                mercury__io__write_string_3_p_0((MR_String) ":- initialise ");
              }
              {
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__PredSymName_60);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "/");
              }
              {
                mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__Arity_61);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word parse_tree__parse_tree_out__ItemFinalise_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out__PredSymName_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out__Arity_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out___Context_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 3)));
              MR_Integer parse_tree__parse_tree_out___SeqNum_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemFinalise_19, (MR_Integer) 4)));

              {
                mercury__io__write_string_3_p_0((MR_String) ":- finalise ");
              }
              {
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__PredSymName_42);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "/");
              }
              {
                mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__Arity_43);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word parse_tree__parse_tree_out__ItemMutable_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Item_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ItemMutable_20);
              }
            }
            break;
          case (MR_Integer) 10:
            {
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_tree_out__ItemInstance_6)
{
  {
    MR_Word parse_tree__parse_tree_out__ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Body_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out__Var_28;
    MR_Word parse_tree__parse_tree_out___OriginalTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out___InstanceModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 6)));
    MR_Word parse_tree__parse_tree_out___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 7)));
    MR_Integer parse_tree__parse_tree_out___SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstance_6, (MR_Integer) 8)));
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_37_37;

    {
      mercury__io__write_string_3_p_0((MR_String) ":- instance ");
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__ClassName_8);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
    {
      parse_tree__parse_tree_out__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_28, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_28, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_28, 3) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_28, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_tree_out__Types_9, (MR_String) ", ", parse_tree__parse_tree_out__Var_28);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__VarSet_13, (MR_Integer) 0, (MR_String) "<=", parse_tree__parse_tree_out__Constraints_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_37_37);
    }
    if ((parse_tree__parse_tree_out__Body_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__Methods_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Body_12, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) " where [\n");
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, parse_tree__parse_tree_out__Methods_17, (MR_String) ",\n", (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[3]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n]");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_tree_out__ItemPromise_6)
{
  {
    MR_Word parse_tree__parse_tree_out__PromiseType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out__VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__UnivVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Goal_17;
    MR_Word parse_tree__parse_tree_out___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 4)));
    MR_Integer parse_tree__parse_tree_out___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPromise_6, (MR_Integer) 5)));

    switch (parse_tree__parse_tree_out__PromiseType_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ":- all [");
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out__VarSet_10, (MR_Integer) 0, parse_tree__parse_tree_out__UnivVars_11);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          {
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0((MR_Integer) 1);
          }
          {
            parse_tree__prog_out__write_promise_type_3_p_0(parse_tree__parse_tree_out__PromiseType_8);
          }
          parse_tree__parse_tree_out__Goal_17 = parse_tree__parse_tree_out__Goal0_9;
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ":- promise ");
          }
          if ((parse_tree__parse_tree_out__UnivVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            parse_tree__parse_tree_out__Goal_17 = parse_tree__parse_tree_out__Goal0_9;
          else
            {
              MR_Word parse_tree__parse_tree_out__Var_32;

              {
                parse_tree__parse_tree_out__Var_32 = parse_tree__prog_item__goal_get_context_1_f_0(parse_tree__parse_tree_out__Goal0_9);
              }
              {
                parse_tree__parse_tree_out__Goal_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 1) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 0 << (MR_Integer) 1)))));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 2) = ((MR_Box) (parse_tree__parse_tree_out__Var_32));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 3) = ((MR_Box) (parse_tree__parse_tree_out__UnivVars_11));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Goal_17, 4) = ((MR_Box) (parse_tree__parse_tree_out__Goal0_9));
              }
            }
        }
        break;
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0((MR_Integer) 1);
    }
    {
      parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out__VarSet_10, (MR_Integer) 1, parse_tree__parse_tree_out__Goal_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemMutable_6)
{
  {
    MR_String parse_tree__parse_tree_out__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__InitTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out__MutVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 6)));
    MR_Word parse_tree__parse_tree_out__Attrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 7)));
    MR_Word parse_tree__parse_tree_out__Lang_18;
    MR_Word parse_tree__parse_tree_out__Var_26;
    MR_Word parse_tree__parse_tree_out__Var_35;
    MR_Word parse_tree__parse_tree_out___OrigType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out___OrigInst_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 8)));
    MR_Integer parse_tree__parse_tree_out___SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemMutable_6, (MR_Integer) 9)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- mutable(");
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__Name_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__parse_tree_out__Var_26 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__Var_26, (MR_Integer) 0, parse_tree__parse_tree_out__Type_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out__MutVarSet_14, (MR_Integer) 0, parse_tree__parse_tree_out__InitTerm_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__parse_tree_out__Lang_18 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
    {
      parse_tree__parse_tree_out__Var_35 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
    {
      parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_18, parse_tree__parse_tree_out__Var_35, parse_tree__parse_tree_out__Inst_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__print_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, ((MR_Box) (parse_tree__parse_tree_out__Attrs_15)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__output_class_method_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), parse_tree__parse_tree_out__wrapper_arg_2, parse_tree__parse_tree_out__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1179__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemTypeClass_6)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;
    MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_51;
    MR_Word parse_tree__parse_tree_out__ClassName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__FunDeps_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Interface_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out__ClassName_16;
    MR_Word parse_tree__parse_tree_out__Var_30;
    MR_Word parse_tree__parse_tree_out___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 6)));
    MR_Integer parse_tree__parse_tree_out___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeClass_6, (MR_Integer) 7)));

    {
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__ClassName0_8, &parse_tree__parse_tree_out__ClassName_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":- typeclass ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__ClassName_16);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
    {
      parse_tree__parse_tree_out__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_30, 3) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2], parse_tree__parse_tree_out__Vars_9, (MR_String) ", ", parse_tree__parse_tree_out__Var_30);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
    parse_tree__parse_tree_out__TypeClassInfo_for_output_51 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__FunDeps_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_tree_out__succeeded)
      parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__Constraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_tree_out__succeeded)
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__Var_66;
        void MR_CALL (* parse_tree__parse_tree_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_19_64;
        void MR_CALL (* parse_tree__parse_tree_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_22_67;
        void MR_CALL (* parse_tree__parse_tree_out__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out__conv9_STATE_VARIABLE_IO_38_38;

        {
          parse_tree__parse_tree_out__func_0(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) " <= (")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_19_64);
        }
        {
          parse_tree__parse_tree_out__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_66, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_51));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_66, 4) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_66, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        parse_tree__parse_tree_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 25)));
        {
          parse_tree__parse_tree_out__func_2(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)), ((MR_Box) (parse_tree__parse_tree_out__FunDeps_11)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__Var_66)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_22_67);
        }
        if ((parse_tree__parse_tree_out__Constraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__parse_tree_out__Var_71;
            void MR_CALL (* parse_tree__parse_tree_out__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box parse_tree__parse_tree_out__conv7_STATE_VARIABLE_U_27_72;

            if ((parse_tree__parse_tree_out__FunDeps_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                void MR_CALL (* parse_tree__parse_tree_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
                MR_Box parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_24_69;

                {
                  parse_tree__parse_tree_out__func_4(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_24_69);
                }
              }
            {
              parse_tree__parse_tree_out__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_71, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[1]));
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_71, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3));
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_71, 3) = ((MR_Box) (parse_tree__parse_tree_out__TypeClassInfo_for_output_51));
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_71, 4) = ((MR_Box) (parse_tree__parse_tree_out__VarSet_13));
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_71, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            parse_tree__parse_tree_out__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 25)));
            {
              parse_tree__parse_tree_out__func_6(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (parse_tree__parse_tree_out__Constraints_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out__Var_71)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv7_STATE_VARIABLE_U_27_72);
            }
          }
        parse_tree__parse_tree_out__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out__func_8(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv9_STATE_VARIABLE_IO_38_38);
        }
      }
    if ((parse_tree__parse_tree_out__Interface_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__Methods_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Interface_12, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__Lang_21;
        MR_Word parse_tree__parse_tree_out__Var_89;

        {
          mercury__io__write_string_3_p_0((MR_String) " where [\n");
        }
        {
          parse_tree__parse_tree_out__Lang_21 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
        }
        {
          parse_tree__parse_tree_out__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_89, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_89, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_89, 3) = ((MR_Box) (parse_tree__parse_tree_out__Lang_21));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0, parse_tree__parse_tree_out__Methods_20, (MR_String) ",\n", parse_tree__parse_tree_out__Var_89);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n].\n");
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemPredDecl_6)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;
    MR_Word parse_tree__parse_tree_out__PredName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out__TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__WithType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__WithInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__MaybeDetism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out__TypeVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 7)));
    MR_Word parse_tree__parse_tree_out__InstVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 8)));
    MR_Word parse_tree__parse_tree_out__ExistQVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 9)));
    MR_Word parse_tree__parse_tree_out__Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 10)));
    MR_Word parse_tree__parse_tree_out__Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 11)));
    MR_Word parse_tree__parse_tree_out__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 12)));
    MR_Word parse_tree__parse_tree_out__PredName_22;
    MR_Word parse_tree__parse_tree_out__Lang_23;
    MR_Word parse_tree__parse_tree_out___Origin_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 6)));
    MR_Integer parse_tree__parse_tree_out___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemPredDecl_6, (MR_Integer) 13)));

    {
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__PredName0_8, &parse_tree__parse_tree_out__PredName_22);
    }
    {
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_20);
    }
    {
      parse_tree__parse_tree_out__Lang_23 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__PredOrFunc_9 == (MR_Integer) 1);
    if (parse_tree__parse_tree_out__succeeded)
      parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__WithType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_tree_out__succeeded)
      {
        MR_Word parse_tree__parse_tree_out__FuncTypesAndModes_24;
        MR_Word parse_tree__parse_tree_out__RetTypeAndMode_25;
        MR_Box parse_tree__parse_tree_out__conv0_RetTypeAndMode_25;
        MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27;

        {
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__parse_tree_out__TypesAndModes_10, &parse_tree__parse_tree_out__FuncTypesAndModes_24, &parse_tree__parse_tree_out__conv0_RetTypeAndMode_25);
        }
        parse_tree__parse_tree_out__RetTypeAndMode_25 = ((MR_Word) parse_tree__parse_tree_out__conv0_RetTypeAndMode_25);
        {
          parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_23, parse_tree__parse_tree_out__TypeVarSet_15, parse_tree__parse_tree_out__InstVarSet_16, parse_tree__parse_tree_out__ExistQVars_17, parse_tree__parse_tree_out__PredName_22, parse_tree__parse_tree_out__FuncTypesAndModes_24, parse_tree__parse_tree_out__RetTypeAndMode_25, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_18, parse_tree__parse_tree_out__Constraints_19, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_IO_27);
        }
      }
    else
      {
        MR_Box parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27;

        {
          parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], parse_tree__parse_tree_out__Lang_23, parse_tree__parse_tree_out__TypeVarSet_15, parse_tree__parse_tree_out__InstVarSet_16, parse_tree__parse_tree_out__PredOrFunc_9, parse_tree__parse_tree_out__ExistQVars_17, parse_tree__parse_tree_out__PredName_22, parse_tree__parse_tree_out__TypesAndModes_10, parse_tree__parse_tree_out__WithType_11, parse_tree__parse_tree_out__WithInst_12, parse_tree__parse_tree_out__MaybeDetism_13, parse_tree__parse_tree_out__Purity_18, parse_tree__parse_tree_out__Constraints_19, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv2_STATE_VARIABLE_IO_27);
        }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
    MR_Word parse_tree__parse_tree_out__conv2_LambdaHeadVar__2_25;

    {
      parse_tree__parse_tree_out__conv2_LambdaHeadVar__2_25 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1054__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv2_LambdaHeadVar__2_25));
    return parse_tree__parse_tree_out__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemModeDefn_6)
{
  {
    MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_20;
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_37_48;
    MR_Word parse_tree__parse_tree_out__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__InstParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out__ModeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__UnQualSymName_14;
    MR_Word parse_tree__parse_tree_out__Lang_15;
    MR_Word parse_tree__parse_tree_out__Mode_28;
    MR_Word parse_tree__parse_tree_out__ArgTerms_30;
    MR_Word parse_tree__parse_tree_out__ModeTerm_32;
    MR_Word parse_tree__parse_tree_out__Var_35;
    MR_Integer parse_tree__parse_tree_out___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemModeDefn_6, (MR_Integer) 5)));
    void MR_CALL (* parse_tree__parse_tree_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_22_34;
    MR_Box parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_27_39;
    void MR_CALL (* parse_tree__parse_tree_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_29_41;
    MR_Box parse_tree__parse_tree_out__conv6_STATE_VARIABLE_U_30_42;
    void MR_CALL (* parse_tree__parse_tree_out__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out__conv8_STATE_VARIABLE_IO_17;

    {
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SymName_8, &parse_tree__parse_tree_out__UnQualSymName_14);
    }
    {
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_12);
    }
    {
      parse_tree__parse_tree_out__Lang_15 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
    parse_tree__parse_tree_out__TypeClassInfo_for_output_20 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
    parse_tree__parse_tree_out__Mode_28 = (MR_Word) parse_tree__parse_tree_out__ModeDefn_10;
    parse_tree__parse_tree_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out__func_0(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ":- mode (")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv1_STATE_VARIABLE_U_22_34);
    }
    {
      parse_tree__parse_tree_out__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_35, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_35, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_35, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
    }
    {
      parse_tree__parse_tree_out__ArgTerms_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], parse_tree__parse_tree_out__Var_35, parse_tree__parse_tree_out__InstParams_9);
    }
    parse_tree__parse_tree_out__TypeCtorInfo_37_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_37_48, parse_tree__parse_tree_out__UnQualSymName_14, parse_tree__parse_tree_out__ArgTerms_30, parse_tree__parse_tree_out__Context_12, &parse_tree__parse_tree_out__ModeTerm_32);
    }
    {
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_37_48, parse_tree__parse_tree_out__TypeClassInfo_for_output_20, parse_tree__parse_tree_out__VarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__ModeTerm_32, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv3_STATE_VARIABLE_U_27_39);
    }
    parse_tree__parse_tree_out__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out__func_4(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ") == ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv5_STATE_VARIABLE_U_29_41);
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out__TypeClassInfo_for_output_20, parse_tree__parse_tree_out__Lang_15, parse_tree__parse_tree_out__VarSet_11, parse_tree__parse_tree_out__Mode_28, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv6_STATE_VARIABLE_U_30_42);
    }
    parse_tree__parse_tree_out__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out__func_7(((MR_Box) parse_tree__parse_tree_out__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv8_STATE_VARIABLE_IO_17);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
    MR_Word parse_tree__parse_tree_out__conv1_LambdaHeadVar__2_32;

    {
      parse_tree__parse_tree_out__conv1_LambdaHeadVar__2_32 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__993__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv1_LambdaHeadVar__2_32));
    return parse_tree__parse_tree_out__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
    MR_Word parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_54;

    {
      parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_54 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__985__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_54));
    return parse_tree__parse_tree_out__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemInstDefn_6)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;
    MR_Word parse_tree__parse_tree_out__SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__InstParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out__MaybeForTypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__InstDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__InstVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out__UnQualSymName_15;
    MR_Word parse_tree__parse_tree_out__SymName_16;
    MR_Word parse_tree__parse_tree_out__Lang_17;
    MR_Integer parse_tree__parse_tree_out___SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemInstDefn_6, (MR_Integer) 6)));

    {
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SymName0_8, &parse_tree__parse_tree_out__UnQualSymName_15);
    }
    {
      parse_tree__parse_tree_out__succeeded = parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0(parse_tree__parse_tree_out__InstVarSet_12, parse_tree__parse_tree_out__UnQualSymName_15, parse_tree__parse_tree_out__InstParams_9);
    }
    if (parse_tree__parse_tree_out__succeeded)
      parse_tree__parse_tree_out__SymName_16 = parse_tree__parse_tree_out__SymName0_8;
    else
      parse_tree__parse_tree_out__SymName_16 = parse_tree__parse_tree_out__UnQualSymName_15;
    {
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_13);
    }
    {
      parse_tree__parse_tree_out__Lang_17 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_5);
    }
    if ((parse_tree__parse_tree_out__InstDefn_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__parse_tree_out__TypeCtorInfo_65_65;
        MR_Word parse_tree__parse_tree_out__ArgTerms_18;
        MR_Word parse_tree__parse_tree_out__InstTerm_20;
        MR_Word parse_tree__parse_tree_out__Var_52;

        {
          mercury__io__write_string_3_p_0((MR_String) ":- inst (");
        }
        {
          parse_tree__parse_tree_out__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_52, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_13));
        }
        {
          parse_tree__parse_tree_out__ArgTerms_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], parse_tree__parse_tree_out__Var_52, parse_tree__parse_tree_out__InstParams_9);
        }
        parse_tree__parse_tree_out__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
        {
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_65_65, parse_tree__parse_tree_out__SymName_16, parse_tree__parse_tree_out__ArgTerms_18, parse_tree__parse_tree_out__Context_13, &parse_tree__parse_tree_out__InstTerm_20);
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_65_65, parse_tree__parse_tree_out__InstVarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out__InstTerm_20);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__TypeCtorInfo_68_68;
        MR_Word parse_tree__parse_tree_out__Body_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__InstDefn_11, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__Var_30;
        MR_Word parse_tree__parse_tree_out__ArgTerms_61;
        MR_Word parse_tree__parse_tree_out__InstTerm_62;

        {
          mercury__io__write_string_3_p_0((MR_String) ":- inst (");
        }
        {
          parse_tree__parse_tree_out__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_30, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_13));
        }
        {
          parse_tree__parse_tree_out__ArgTerms_61 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], parse_tree__parse_tree_out__Var_30, parse_tree__parse_tree_out__InstParams_9);
        }
        parse_tree__parse_tree_out__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
        {
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_68_68, parse_tree__parse_tree_out__SymName_16, parse_tree__parse_tree_out__ArgTerms_61, parse_tree__parse_tree_out__Context_13, &parse_tree__parse_tree_out__InstTerm_62);
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_68_68, parse_tree__parse_tree_out__InstVarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out__InstTerm_62);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
        if ((parse_tree__parse_tree_out__MaybeForTypeCtor_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__parse_tree_out__ForTypeCtor_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeForTypeCtor_10, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out__ForTypeCtorSymName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ForTypeCtor_22, (MR_Integer) 0)));
            MR_Integer parse_tree__parse_tree_out__ForTypeCtorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ForTypeCtor_22, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "for ");
            }
            {
              parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__ForTypeCtorSymName_23);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
            {
              mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__ForTypeCtorArity_24);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
          }
        {
          mercury__io__write_string_3_p_0((MR_String) "== ");
        }
        {
          parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_17, parse_tree__parse_tree_out__InstVarSet_12, parse_tree__parse_tree_out__Body_21);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
    MR_Word parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_18;

    {
      parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_18 = parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1020__1_1_f_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_18));
    return parse_tree__parse_tree_out__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0(
  MR_Word parse_tree__parse_tree_out__InstVarSet_4,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2,
  MR_Word parse_tree__parse_tree_out__Args0_6)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__TypeInfo_27_27;
    MR_Word parse_tree__parse_tree_out__TypeInfo_28_28;
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_31_31;
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_32_32;
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_33_33;
    MR_String parse_tree__parse_tree_out__Name_5;
    MR_Word parse_tree__parse_tree_out__Args1_7;
    MR_Word parse_tree__parse_tree_out__Term_9;
    MR_Word parse_tree__parse_tree_out__VarSet_10;
    MR_Word parse_tree__parse_tree_out__ContextPieces_11;
    MR_Word parse_tree__parse_tree_out__MaybeInst_12;
    MR_Word parse_tree__parse_tree_out__Inst_13;
    MR_Word parse_tree__parse_tree_out__Var_16;
    MR_Word parse_tree__parse_tree_out__Var_21;
    MR_Word parse_tree__parse_tree_out__Var_22;
    MR_Word parse_tree__parse_tree_out__Var_23;
    MR_Word parse_tree__parse_tree_out__Var_24;
    MR_Word parse_tree__parse_tree_out__Var_25;
    MR_Word parse_tree__parse_tree_out__Var_14;
    MR_Word parse_tree__parse_tree_out__Var_15;

    if (parse_tree__parse_tree_out__succeeded)
      {
        parse_tree__parse_tree_out__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
        parse_tree__parse_tree_out__TypeInfo_27_27 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4];
        parse_tree__parse_tree_out__TypeInfo_28_28 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[6];
        parse_tree__parse_tree_out__Var_16 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[2];
        {
          parse_tree__parse_tree_out__Args1_7 = mercury__list__map_2_f_0(parse_tree__parse_tree_out__TypeInfo_27_27, parse_tree__parse_tree_out__TypeInfo_28_28, parse_tree__parse_tree_out__Var_16, parse_tree__parse_tree_out__Args0_6);
        }
        {
          parse_tree__parse_tree_out__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_21, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_5));
        }
        {
          parse_tree__parse_tree_out__Var_22 = mercury__term__context_init_0_f_0();
        }
        parse_tree__parse_tree_out__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
        parse_tree__parse_tree_out__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        {
          parse_tree__parse_tree_out__Term_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Term_9, 0) = ((MR_Box) (parse_tree__parse_tree_out__Var_21));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Term_9, 1) = ((MR_Box) (parse_tree__parse_tree_out__Args1_7));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Term_9, 2) = ((MR_Box) (parse_tree__parse_tree_out__Var_22));
        }
        {
          mercury__varset__coerce_2_p_0(parse_tree__parse_tree_out__TypeCtorInfo_31_31, parse_tree__parse_tree_out__TypeCtorInfo_32_32, parse_tree__parse_tree_out__InstVarSet_4, &parse_tree__parse_tree_out__VarSet_10);
        }
        parse_tree__parse_tree_out__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          parse_tree__parse_tree_out__ContextPieces_11 = mercury__cord__init_0_f_0(parse_tree__parse_tree_out__TypeCtorInfo_33_33);
        }
        parse_tree__parse_tree_out__Var_24 = (MR_Integer) 1;
        parse_tree__parse_tree_out__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_scalar_common_7[0]);
        {
          parse_tree__parse_inst_mode_name__parse_inst_5_p_0(parse_tree__parse_tree_out__Var_23, parse_tree__parse_tree_out__VarSet_10, parse_tree__parse_tree_out__ContextPieces_11, parse_tree__parse_tree_out__Term_9, &parse_tree__parse_tree_out__MaybeInst_12);
        }
        parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeInst_12)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_tree_out__succeeded)
          {
            parse_tree__parse_tree_out__Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeInst_12, (MR_Integer) 0)));
            parse_tree__parse_tree_out__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out__Inst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Inst_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (parse_tree__parse_tree_out__succeeded)
              {
                parse_tree__parse_tree_out__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__Inst_13, (MR_Integer) 1)));
                parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__Var_25)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_tree_out__succeeded)
                  {
                    parse_tree__parse_tree_out__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_25, (MR_Integer) 0)));
                    parse_tree__parse_tree_out__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_25, (MR_Integer) 1)));
                  }
              }
            parse_tree__parse_tree_out__succeeded = !(parse_tree__parse_tree_out__succeeded);
          }
      }
    return parse_tree__parse_tree_out__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_out__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;
    MR_Word parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_46;

    {
      parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_46 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__601__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
    parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv0_LambdaHeadVar__2_46));
    return parse_tree__parse_tree_out__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(
  MR_Word parse_tree__parse_tree_out__Info_5,
  MR_Word parse_tree__parse_tree_out__ItemTypeDefn_6)
{
  {
    MR_Word parse_tree__parse_tree_out__TypeCtorInfo_124_124;
    MR_Word parse_tree__parse_tree_out__SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__TypeParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out__TypeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__TypeVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out__SymName_14;
    MR_Word parse_tree__parse_tree_out__Args_15;
    MR_Word parse_tree__parse_tree_out__TypeTerm_17;
    MR_Word parse_tree__parse_tree_out__Var_44;
    MR_Integer parse_tree__parse_tree_out___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ItemTypeDefn_6, (MR_Integer) 5)));

    {
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__SymName0_8, &parse_tree__parse_tree_out__SymName_14);
    }
    {
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__Context_12);
    }
    {
      parse_tree__parse_tree_out__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_44, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_44, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_44, 3) = ((MR_Box) (parse_tree__parse_tree_out__Context_12));
    }
    {
      parse_tree__parse_tree_out__Args_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[3], parse_tree__parse_tree_out__Var_44, parse_tree__parse_tree_out__TypeParams_9);
    }
    parse_tree__parse_tree_out__TypeCtorInfo_124_124 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_out__TypeCtorInfo_124_124, parse_tree__parse_tree_out__SymName_14, parse_tree__parse_tree_out__Args_15, parse_tree__parse_tree_out__Context_12, &parse_tree__parse_tree_out__TypeTerm_17);
    }
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out__TypeDefn_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_out__DetailsDu_24 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__TypeDefn_10), (MR_Integer) 0);
          MR_Word parse_tree__parse_tree_out__Ctors_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__DetailsDu_24, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__DetailsDu_24, (MR_Integer) 1)));
          MR_Word parse_tree__parse_tree_out__MaybeDirectArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__DetailsDu_24, (MR_Integer) 2)));

          {
            mercury__io__write_string_3_p_0((MR_String) ":- type ");
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_124_124, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
          }
          {
            parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 1, parse_tree__parse_tree_out__Ctors_25);
          }
          {
            parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out__MaybeUserEqComp_26, parse_tree__parse_tree_out__MaybeDirectArgs_27);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out__DetailsSolver_28 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__TypeDefn_10), (MR_Integer) 1);
          MR_Word parse_tree__parse_tree_out__SolverTypeDetails_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__DetailsSolver_28, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__Var_87;
          MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__DetailsSolver_28, (MR_Integer) 1)));

          {
            mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_124_124, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
          }
          {
            parse_tree__parse_tree_out__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Var_87, 0) = ((MR_Box) (parse_tree__parse_tree_out__SolverTypeDetails_29));
          }
          {
            parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__TypeVarSet_11, parse_tree__parse_tree_out__Var_87, parse_tree__parse_tree_out__MaybeUserEqComp_120, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_tree_out__TypeCtorInfo_125_125;
          MR_Word parse_tree__parse_tree_out__DetailsForeign_30 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out__TypeDefn_10), (MR_Integer) 2);
          MR_Word parse_tree__parse_tree_out__ForeignType_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__DetailsForeign_30, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__Assertions_32;
          MR_String parse_tree__parse_tree_out__ForeignTypeStr_37;
          MR_Word parse_tree__parse_tree_out__AssertionsList_38;
          MR_Word parse_tree__parse_tree_out__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__DetailsForeign_30, (MR_Integer) 2)));
          MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__DetailsForeign_30, (MR_Integer) 1)));

          parse_tree__parse_tree_out__Assertions_32 = (MR_Word) parse_tree__parse_tree_out__Var_47;
          {
            mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_type(");
          }
          switch (MR_tag((MR_Word) parse_tree__parse_tree_out__ForeignType_31)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__parse_tree_out__Var_65;

                {
                  mercury__io__write_string_3_p_0((MR_String) "c, ");
                }
                parse_tree__parse_tree_out__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__ForeignType_31, (MR_Integer) 0)));
                parse_tree__parse_tree_out__ForeignTypeStr_37 = (MR_String) parse_tree__parse_tree_out__Var_65;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__parse_tree_out__Var_64;

                {
                  mercury__io__write_string_3_p_0((MR_String) "java, ");
                }
                parse_tree__parse_tree_out__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__ForeignType_31, (MR_Integer) 0)));
                parse_tree__parse_tree_out__ForeignTypeStr_37 = (MR_String) parse_tree__parse_tree_out__Var_64;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__parse_tree_out__Var_63;

                {
                  mercury__io__write_string_3_p_0((MR_String) "csharp, ");
                }
                parse_tree__parse_tree_out__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out__ForeignType_31, (MR_Integer) 0)));
                parse_tree__parse_tree_out__ForeignTypeStr_37 = (MR_String) parse_tree__parse_tree_out__Var_63;
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "erlang, ");
                }
                parse_tree__parse_tree_out__ForeignTypeStr_37 = (MR_String) "";
              }
              break;
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_124_124, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ", \"");
          }
          {
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out__ForeignTypeStr_37);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\"");
          }
          parse_tree__parse_tree_out__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;
          {
            mercury__set__to_sorted_list_2_p_0(parse_tree__parse_tree_out__TypeCtorInfo_125_125, parse_tree__parse_tree_out__Assertions_32, &parse_tree__parse_tree_out__AssertionsList_38);
          }
          if ((parse_tree__parse_tree_out__AssertionsList_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ", [");
              }
              {
                mercury__io__write_list_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_125_125, parse_tree__parse_tree_out__AssertionsList_38, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[1]);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
            }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          {
            parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(parse_tree__parse_tree_out__Info_5, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out__MaybeUserEqComp_121, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out__DetailsEqv_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out__EqvType_23 = (MR_Word) parse_tree__parse_tree_out__DetailsEqv_22;

              {
                mercury__io__write_string_3_p_0((MR_String) ":- type ");
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out__TypeCtorInfo_124_124, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " == ");
              }
              {
                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out__EqvType_23);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out__DetailsAbstract_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out__TypeDefn_10, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) parse_tree__parse_tree_out__DetailsAbstract_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__parse_tree_out__DetailsAbstract_18)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) ":- type ");
                        }
                        {
                          parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out__TypeCtorInfo_124_124, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
                        }
                        if ((parse_tree__parse_tree_out__DetailsAbstract_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                          }
                        else
                          {
                            MR_Integer parse_tree__parse_tree_out__NumBits_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__DetailsAbstract_18, (MR_Integer) 0)));

                            {
                              parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(parse_tree__parse_tree_out__NumBits_21);
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
                        }
                        {
                          parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out__TypeCtorInfo_124_124, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) ":- type ");
                    }
                    {
                      parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out__TypeCtorInfo_124_124, parse_tree__parse_tree_out__TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out__TypeTerm_17);
                    }
                    if ((parse_tree__parse_tree_out__DetailsAbstract_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                      }
                    else
                      {
                        MR_Integer parse_tree__parse_tree_out__NumBits_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__DetailsAbstract_18, (MR_Integer) 0)));

                        {
                          parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(parse_tree__parse_tree_out__NumBits_21);
                        }
                      }
                  }
                  break;
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(
  MR_Word parse_tree__parse_tree_out__VarSet_1,
  MR_Word parse_tree__parse_tree_out__First_2,
  MR_Word parse_tree__parse_tree_out__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((parse_tree__parse_tree_out__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word parse_tree__parse_tree_out__Ctor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__3_3, (MR_Integer) 1)));

          switch (parse_tree__parse_tree_out__First_2) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n    ;       ");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n    --->    ");
                }
              }
              break;
          }
          {
            parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(parse_tree__parse_tree_out__VarSet_1, parse_tree__parse_tree_out__Ctor_13);
          }
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__parse_tree_out__next_value_of_HeadVar__3_3 = parse_tree__parse_tree_out__Ctors_14;

            parse_tree__parse_tree_out__HeadVar__3_3 = parse_tree__parse_tree_out__next_value_of_HeadVar__3_3;
            parse_tree__parse_tree_out__First_2 = (MR_Integer) 0;
          }
          continue;
        }
      break;
    }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(
  MR_Word parse_tree__parse_tree_out__TypeVarSet_5,
  MR_Word parse_tree__parse_tree_out__Ctor_6)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;
    MR_Word parse_tree__parse_tree_out__TypeClassInfo_for_output_48;
    MR_Word parse_tree__parse_tree_out__ExistQVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 3)));
    MR_Integer parse_tree__parse_tree_out__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 4)));
    MR_String parse_tree__parse_tree_out__Name_14;
    MR_Word parse_tree__parse_tree_out__ParenWrap_15;
    MR_Word parse_tree__parse_tree_out__BraceWrap_18;
    MR_Word parse_tree__parse_tree_out__Var_43;
    MR_String parse_tree__parse_tree_out__Var_44;
    MR_Word parse_tree__parse_tree_out___Ctxt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Ctor_6, (MR_Integer) 5)));
    MR_Integer parse_tree__parse_tree_out__lo_0;
    MR_Integer parse_tree__parse_tree_out__hi_1;
    MR_Integer parse_tree__parse_tree_out__mid_2;
    MR_Integer parse_tree__parse_tree_out__result_3;
    MR_Box parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_45_45;

    {
      parse_tree__parse_tree_out__Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out__SymName_10);
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_quantifier_5_p_0(parse_tree__parse_tree_out__TypeVarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out__ExistQVars_8);
    }
    if ((parse_tree__parse_tree_out__ExistQVars_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out__ParenWrap_15 = (MR_Integer) 0;
    else
      {
        parse_tree__parse_tree_out__ParenWrap_15 = (MR_Integer) 1;
        {
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
      }
    parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__Arity_12 == (MR_Integer) 2);
    if (parse_tree__parse_tree_out__succeeded)
      {
        /* binary string simple lookup switch */
        parse_tree__parse_tree_out__lo_0 = (MR_Integer) 0;
        parse_tree__parse_tree_out__hi_1 = (MR_Integer) 3;
        do
          {
            parse_tree__parse_tree_out__mid_2 = (((parse_tree__parse_tree_out__lo_0 + parse_tree__parse_tree_out__hi_1)) / (MR_Integer) 2);
            parse_tree__parse_tree_out__result_3 = MR_strcmp(parse_tree__parse_tree_out__Name_14, ((&parse_tree__parse_tree_out_vector_common_5[0 + parse_tree__parse_tree_out__mid_2]))->parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0);
            if ((parse_tree__parse_tree_out__result_3 == (MR_Integer) 0))
              {
                parse_tree__parse_tree_out__succeeded = MR_TRUE;
                /* jump out of search loop */
                goto label_0;
              }
            else
            if ((parse_tree__parse_tree_out__result_3 < (MR_Integer) 0))
              parse_tree__parse_tree_out__hi_1 = (parse_tree__parse_tree_out__mid_2 - (MR_Integer) 1);
            else
              parse_tree__parse_tree_out__lo_0 = (parse_tree__parse_tree_out__mid_2 + (MR_Integer) 1);
          }
        while ((parse_tree__parse_tree_out__lo_0 <= parse_tree__parse_tree_out__hi_1));
        parse_tree__parse_tree_out__succeeded = MR_FALSE;
      label_0:;
      }
    if (parse_tree__parse_tree_out__succeeded)
      {
        parse_tree__parse_tree_out__BraceWrap_18 = (MR_Integer) 1;
        {
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
      }
    else
      parse_tree__parse_tree_out__BraceWrap_18 = (MR_Integer) 0;
    if ((parse_tree__parse_tree_out__Args_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__parse_tree_out__Var_29;

        {
          parse_tree__parse_tree_out__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_29, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_14));
        }
        {
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__Var_29);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Args_11, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out__Rest_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Args_11, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_out__Var_33;
        MR_Word parse_tree__parse_tree_out__Name_54;
        MR_Word parse_tree__parse_tree_out__Type_55;
        MR_Word parse_tree__parse_tree_out___Width_56;
        MR_Word parse_tree__parse_tree_out___Context_57;

        {
          parse_tree__parse_tree_out__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_33, 0) = ((MR_Box) (parse_tree__parse_tree_out__Name_14));
        }
        {
          parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out__Var_33);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
        parse_tree__parse_tree_out__Name_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 0)));
        parse_tree__parse_tree_out__Type_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 1)));
        parse_tree__parse_tree_out___Width_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 2)));
        parse_tree__parse_tree_out___Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_19, (MR_Integer) 3)));
        if ((parse_tree__parse_tree_out__Name_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__parse_tree_out__FieldName_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Name_54, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out__Name_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_64, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out___Ctxt_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_64, (MR_Integer) 1)));

            {
              parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__Name_66);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " :: ");
            }
          }
        {
          parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__TypeVarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out__Type_55);
        }
        {
          parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(parse_tree__parse_tree_out__TypeVarSet_5, parse_tree__parse_tree_out__Rest_20);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
    switch (parse_tree__parse_tree_out__BraceWrap_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) " }");
          }
        }
        break;
    }
    parse_tree__parse_tree_out__Var_43 = (MR_Integer) 0;
    parse_tree__parse_tree_out__Var_44 = (MR_String) "=>";
    parse_tree__parse_tree_out__TypeClassInfo_for_output_48 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
    {
      parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(parse_tree__parse_tree_out__TypeClassInfo_for_output_48, parse_tree__parse_tree_out__TypeVarSet_5, parse_tree__parse_tree_out__Var_43, parse_tree__parse_tree_out__Var_44, parse_tree__parse_tree_out__Constraints_9, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out__conv0_STATE_VARIABLE_IO_45_45);
    }
    switch (parse_tree__parse_tree_out__ParenWrap_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(
  MR_Word parse_tree__parse_tree_out__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((parse_tree__parse_tree_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word parse_tree__parse_tree_out__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word parse_tree__parse_tree_out__Name_24;
          MR_Word parse_tree__parse_tree_out__Type_25;
          MR_Word parse_tree__parse_tree_out___Width_26;
          MR_Word parse_tree__parse_tree_out___Context_27;

          {
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
          parse_tree__parse_tree_out__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 0)));
          parse_tree__parse_tree_out__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 1)));
          parse_tree__parse_tree_out___Width_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 2)));
          parse_tree__parse_tree_out___Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Arg_10, (MR_Integer) 3)));
          if ((parse_tree__parse_tree_out__Name_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word parse_tree__parse_tree_out__FieldName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Name_24, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out__Name_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_34, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out___Ctxt_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__FieldName_34, (MR_Integer) 1)));

              {
                parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__Name_36);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " :: ");
              }
            }
          {
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__HeadVar__1_1, (MR_Integer) 0, parse_tree__parse_tree_out__Type_25);
          }
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__parse_tree_out__next_value_of_HeadVar__2_2 = parse_tree__parse_tree_out__Args_11;

            parse_tree__parse_tree_out__HeadVar__2_2 = parse_tree__parse_tree_out__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(
  MR_Integer parse_tree__parse_tree_out__NumBits_4)
{
  {
    {
      mercury__io__write_string_3_p_0((MR_String) "\n\twhere\t");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "type_is_abstract_enum(");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out__NumBits_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(
  MR_Word parse_tree__parse_tree_out__Info_8,
  MR_Word parse_tree__parse_tree_out__TypeVarSet_9,
  MR_Word parse_tree__parse_tree_out__MaybeSolverTypeDetails_10,
  MR_Word parse_tree__parse_tree_out__MaybeUserEqComp_11,
  MR_Word parse_tree__parse_tree_out__MaybeDirectArgs_12)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (parse_tree__parse_tree_out__succeeded)
      {
        parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__MaybeUserEqComp_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_tree_out__succeeded)
          parse_tree__parse_tree_out__succeeded = (parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_tree_out__succeeded)
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out__MaybeUnifyPred_17;
        MR_Word parse_tree__parse_tree_out__MaybeComparePred_18;
        MR_Word parse_tree__parse_tree_out__MaybeUnifyPred0_15;
        MR_Word parse_tree__parse_tree_out__MaybeComparePred0_16;
        MR_Word parse_tree__parse_tree_out__UserEqComp_14;
        MR_Word parse_tree__parse_tree_out__Var_32;
        MR_Word parse_tree__parse_tree_out__Var_19;

        parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeUserEqComp_11)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_tree_out__succeeded)
          {
            parse_tree__parse_tree_out__UserEqComp_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUserEqComp_11, (MR_Integer) 0)));
            parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__UserEqComp_14)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_tree_out__succeeded)
              {
                parse_tree__parse_tree_out__MaybeUnifyPred0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__UserEqComp_14, (MR_Integer) 0)));
                parse_tree__parse_tree_out__MaybeComparePred0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__UserEqComp_14, (MR_Integer) 1)));
              }
          }
        if (parse_tree__parse_tree_out__succeeded)
          {
            parse_tree__parse_tree_out__MaybeUnifyPred_17 = parse_tree__parse_tree_out__MaybeUnifyPred0_15;
            parse_tree__parse_tree_out__MaybeComparePred_18 = parse_tree__parse_tree_out__MaybeComparePred0_16;
          }
        else
          {
            parse_tree__parse_tree_out__MaybeUnifyPred_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__parse_tree_out__MaybeComparePred_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n\twhere\t");
        }
        parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeUserEqComp_11)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_tree_out__succeeded)
          {
            parse_tree__parse_tree_out__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUserEqComp_11, (MR_Integer) 0)));
            parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__Var_32)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_out__succeeded)
              parse_tree__parse_tree_out__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__Var_32, (MR_Integer) 0)));
          }
        if (parse_tree__parse_tree_out__succeeded)
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "type_is_abstract_noncanonical");
            }
          }
        else
        if ((parse_tree__parse_tree_out__MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__parse_tree_out__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeSolverTypeDetails_10, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out__RepresentationType_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out__GroundInst_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 1)));
            MR_Word parse_tree__parse_tree_out__AnyInst_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 2)));
            MR_Word parse_tree__parse_tree_out__MutableInfos_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__SolverTypeDetails_20, (MR_Integer) 3)));
            MR_Word parse_tree__parse_tree_out__Lang_63;
            MR_Word parse_tree__parse_tree_out__EmptyInstVarSet_64;

            {
              mercury__io__write_string_3_p_0((MR_String) "representation is ");
            }
            {
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out__TypeVarSet_9, (MR_Integer) 0, parse_tree__parse_tree_out__RepresentationType_59);
            }
            {
              parse_tree__parse_tree_out__Lang_63 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out__Info_8);
            }
            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out__EmptyInstVarSet_64);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\tground is ");
            }
            {
              parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_63, parse_tree__parse_tree_out__EmptyInstVarSet_64, parse_tree__parse_tree_out__GroundInst_60);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n\t\tany is ");
            }
            {
              parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(parse_tree__parse_tree_out__Lang_63, parse_tree__parse_tree_out__EmptyInstVarSet_64, parse_tree__parse_tree_out__AnyInst_61);
            }
            if ((parse_tree__parse_tree_out__MutableInfos_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word parse_tree__parse_tree_out__Var_80;

                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\tconstraint_store is [\n\t\t\t");
                }
                {
                  parse_tree__parse_tree_out__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_80, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_80, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out__Var_80, 3) = ((MR_Box) (parse_tree__parse_tree_out__Info_8));
                }
                {
                  mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__parse_tree_out__MutableInfos_62, (MR_String) ",\n\t\t\t", parse_tree__parse_tree_out__Var_80);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n\t\t]");
                }
              }
            {
              MR_Word parse_tree__parse_tree_out__Var_21;

              parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeUnifyPred_17)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_tree_out__succeeded)
                parse_tree__parse_tree_out__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUnifyPred_17, (MR_Integer) 0)));
            }
            if (!(parse_tree__parse_tree_out__succeeded))
              {
                MR_Word parse_tree__parse_tree_out__Var_22;

                parse_tree__parse_tree_out__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out__MaybeComparePred_18)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_tree_out__succeeded)
                  parse_tree__parse_tree_out__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeComparePred_18, (MR_Integer) 0)));
              }
            if (parse_tree__parse_tree_out__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                }
              }
            else
              {
              }
          }
        if ((parse_tree__parse_tree_out__MaybeUnifyPred_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((parse_tree__parse_tree_out__MaybeComparePred_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word parse_tree__parse_tree_out__ComparePredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeComparePred_18, (MR_Integer) 0)));

              {
                mercury__io__write_string_3_p_0((MR_String) "comparison is ");
              }
              {
                parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ComparePredName_25);
              }
              if ((parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                  }
                }
            }
        else
          {
            MR_Word parse_tree__parse_tree_out__UnifyPredName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeUnifyPred_17, (MR_Integer) 0)));

            {
              mercury__io__write_string_3_p_0((MR_String) "equality is ");
            }
            {
              parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__UnifyPredName_23);
            }
            if ((parse_tree__parse_tree_out__MaybeComparePred_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word parse_tree__parse_tree_out__ComparePredName_259;

                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                }
                parse_tree__parse_tree_out__ComparePredName_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeComparePred_18, (MR_Integer) 0)));
                {
                  mercury__io__write_string_3_p_0((MR_String) "comparison is ");
                }
                {
                  parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out__ComparePredName_259);
                }
                if ((parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
                    }
                  }
              }
          }
        if ((parse_tree__parse_tree_out__MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__parse_tree_out__DirectArgFunctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out__MaybeDirectArgs_12, (MR_Integer) 0)));

            {
              mercury__io__write_string_3_p_0((MR_String) "direct_arg is [");
            }
            {
              parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(parse_tree__parse_tree_out__DirectArgFunctors_27);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1(
  MR_Box parse_tree__parse_tree_out__closure_arg,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out__closure = parse_tree__parse_tree_out__closure_arg;

    {
      parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__941__1_3_p_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(
  MR_Word parse_tree__parse_tree_out__Ctors_4)
{
  {
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__parse_tree_out__Ctors_4, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_scalar_common_3[0]);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001(
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_tree_out__succeeded;

    {
      parse_tree__parse_tree_out__succeeded = parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_3));
    }
    return parse_tree__parse_tree_out__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001(
  MR_Box parse_tree__parse_tree_out__wrapper_arg_1,
  MR_Box * parse_tree__parse_tree_out__wrapper_arg_2,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_3,
  MR_Box parse_tree__parse_tree_out__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_tree_out__conv0_HeadVar__1_1;

    {
      parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(((MR_Word) parse_tree__parse_tree_out__wrapper_arg_1), &parse_tree__parse_tree_out__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_3), ((MR_Word) parse_tree__parse_tree_out__wrapper_arg_4));
    }
    *parse_tree__parse_tree_out__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.parse_tree_out. */
