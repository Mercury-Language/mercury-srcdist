/*
** Automatically generated from `parse_tree_out.m'
** by the Mercury compiler,
** version rotd-2018-04-07
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module parse_tree.parse_tree_out.
// :- implementation.

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
#include "multi_map.mih"
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
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_type_repn__1464__1_5_p_0(
  MR_Word TVarSet_11,
  MR_Word HeadVar__2_27,
  MR_Word HeadVar__3_54);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1271__1_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__4_31,
  MR_Box HeadVar__5_32,
  MR_Box * HeadVar__6_33);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1269__1_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__4_26,
  MR_Box HeadVar__5_27,
  MR_Box * HeadVar__6_28);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1213__1_4_p_0(
  MR_Word VarSet_13,
  MR_Word LambdaHeadVar__1_32);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1088__1_2_f_0(
  MR_Word Context_14,
  MR_Word LambdaHeadVar__1_24);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1054__1_1_f_0(
  MR_Word LambdaHeadVar__1_17);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1027__1_2_f_0(
  MR_Word Context_13,
  MR_Word LambdaHeadVar__1_31);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1019__1_2_f_0(
  MR_Word Context_13,
  MR_Word LambdaHeadVar__1_53);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__975__1_3_p_0(
  MR_Word HeadVar__1_11);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__604__1_2_f_0(
  MR_Word Context_12,
  MR_Word LambdaHeadVar__1_45);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__388__1_2_p_0(
  MR_Word Incls_10,
  MR_Word HeadVar__2_19);

static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out__output_class_method_4_p_0(
  MR_Word Lang_5,
  MR_Word Method_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(
  MR_Word Assertion_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(
  MR_Word Info_5,
  MR_Word Use_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(
  MR_Word Info_5,
  MR_Word Avail_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(
  MR_Word Info_5,
  MR_Word ItemInclude_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VersionNumbers_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(
  MR_Word Info_1,
  MR_Word MaybePrevSectionKind_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemTypeRepn_6);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemInstance_6);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemPromise_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(
  MR_Word Info_5,
  MR_Word ItemMutable_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(
  MR_Word Info_5,
  MR_Word ItemTypeClass_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(
  MR_Word Info_5,
  MR_Word ItemPredDecl_6);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ItemModeDefn_6);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ItemInstDefn_6);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0(
  MR_Word InstVarSet_4,
  MR_Word HeadVar__2_2,
  MR_Word Args0_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ItemTypeDefn_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(
  MR_Word VarSet_1,
  MR_Word First_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(
  MR_Integer NumBits_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(
  MR_Word Ctors_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(
  MR_Word Info_6,
  MR_Word TypeVarSet_7,
  MR_Word Details_8);

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[8][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[5][6];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[1][1];

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_8[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_9[3][9];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[2][8];


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

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[8][7] = {
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

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[5][6] = {
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

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[2])),
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
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[4])),
    ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[2][8] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
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
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_type_repn__1464__1_5_p_0(
  MR_Word TVarSet_11,
  MR_Word HeadVar__2_27,
  MR_Word HeadVar__3_54)
{
  {
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_11, HeadVar__2_27, HeadVar__3_54);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1271__1_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__4_31,
  MR_Box HeadVar__5_32,
  MR_Box * HeadVar__6_33)
{
  {
    parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TypeClassInfo_for_output_25, TypeVarSet_6, VarNamePrint_7, HeadVar__4_31, HeadVar__5_32, HeadVar__6_33);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1269__1_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__4_26,
  MR_Box HeadVar__5_27,
  MR_Box * HeadVar__6_28)
{
  {
    parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TypeClassInfo_for_output_25, TypeVarSet_6, VarNamePrint_7, HeadVar__4_26, HeadVar__5_27, HeadVar__6_28);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1213__1_4_p_0(
  MR_Word VarSet_13,
  MR_Word LambdaHeadVar__1_32)
{
  {
    MR_String VarName_19;

    mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_13, LambdaHeadVar__1_32, &VarName_19);
    mercury__io__write_string_3_p_0(VarName_19);
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1088__1_2_f_0(
  MR_Word Context_14,
  MR_Word LambdaHeadVar__1_24)
{
  {
    MR_Word LambdaHeadVar__2_25;

    {
      LambdaHeadVar__2_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_25, 0) = ((MR_Box) (LambdaHeadVar__1_24));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_25, 1) = ((MR_Box) (Context_14));
    }
    return LambdaHeadVar__2_25;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1054__1_1_f_0(
  MR_Word LambdaHeadVar__1_17)
{
  {
    MR_Word LambdaHeadVar__2_18;
    MR_Word Var_19;
    MR_Word Var_20;

    Var_19 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, LambdaHeadVar__1_17);
    Var_20 = mercury__term__context_init_0_f_0();
    {
      LambdaHeadVar__2_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_18, 1) = ((MR_Box) (Var_20));
    }
    return LambdaHeadVar__2_18;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1027__1_2_f_0(
  MR_Word Context_13,
  MR_Word LambdaHeadVar__1_31)
{
  {
    MR_Word LambdaHeadVar__2_32;

    {
      LambdaHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_32, 0) = ((MR_Box) (LambdaHeadVar__1_31));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_32, 1) = ((MR_Box) (Context_13));
    }
    return LambdaHeadVar__2_32;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1019__1_2_f_0(
  MR_Word Context_13,
  MR_Word LambdaHeadVar__1_53)
{
  {
    MR_Word LambdaHeadVar__2_54;

    {
      LambdaHeadVar__2_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_54, 0) = ((MR_Box) (LambdaHeadVar__1_53));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_54, 1) = ((MR_Box) (Context_13));
    }
    return LambdaHeadVar__2_54;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__975__1_3_p_0(
  MR_Word HeadVar__1_11)
{
  {
    MR_Box conv0_HeadVar__3_13;

    parse_tree__mercury_to_mercury__mercury_format_sym_name_and_arity_3_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], HeadVar__1_11, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__3_13);
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__604__1_2_f_0(
  MR_Word Context_12,
  MR_Word LambdaHeadVar__1_45)
{
  {
    MR_Word LambdaHeadVar__2_46;

    {
      LambdaHeadVar__2_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_46, 0) = ((MR_Box) (LambdaHeadVar__1_45));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_46, 1) = ((MR_Box) (Context_12));
    }
    return LambdaHeadVar__2_46;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__388__1_2_p_0(
  MR_Word Incls_10,
  MR_Word HeadVar__2_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[0], ((MR_Box) (Incls_10)), ((MR_Box) (HeadVar__2_19)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__output_class_method_4_p_0(
  MR_Word Lang_5,
  MR_Word Method_6)
{
  {
    MR_bool succeeded;

    mercury__io__write_string_3_p_0((MR_String) "\t");
    if (((MR_tag((MR_Word) Method_6)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 0)));
      MR_Word PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 1)));
      MR_Word TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 2)));
      MR_Word WithType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 3)));
      MR_Word WithInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 4)));
      MR_Word MaybeDetism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 5)));
      MR_Word TypeVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 6)));
      MR_Word InstVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 7)));
      MR_Word ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 8)));
      MR_Word Purity_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 9)));
      MR_Word ClassContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 10)));
      MR_String Name_20;
      MR_Word _Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 11)));

      Name_20 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_8);
      succeeded = (PredOrFunc_9 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (WithType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        MR_Word FuncTypesAndModes_21;
        MR_Word RetTypeAndMode_22;
        MR_Word Var_39;
        MR_Box conv0_RetTypeAndMode_22;
        MR_Box conv1_STATE_VARIABLE_IO_27;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, TypesAndModes_10, &FuncTypesAndModes_21, &conv0_RetTypeAndMode_22);
        RetTypeAndMode_22 = ((MR_Word) conv0_RetTypeAndMode_22);
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Name_20));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], Lang_5, TypeVarSet_14, InstVarSet_15, ExistQVars_16, Var_39, FuncTypesAndModes_21, RetTypeAndMode_22, MaybeDetism_13, Purity_17, ClassContext_18, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27);
      }
      else
      {
        MR_Word Var_44;
        MR_Box conv2_STATE_VARIABLE_IO_27;

        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Name_20));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], Lang_5, TypeVarSet_14, InstVarSet_15, PredOrFunc_9, ExistQVars_16, Var_44, TypesAndModes_10, WithType_11, WithInst_12, MaybeDetism_13, Purity_17, ClassContext_18, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_27);
      }
    }
    else
    {
      MR_Word Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method_6, (MR_Integer) 2)));
      MR_Word SymName_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method_6, (MR_Integer) 0)));
      MR_Word PredOrFunc_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method_6, (MR_Integer) 1)));
      MR_Word WithInst_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method_6, (MR_Integer) 3)));
      MR_Word MaybeDetism_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method_6, (MR_Integer) 4)));
      MR_Word InstVarSet_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method_6, (MR_Integer) 5)));
      MR_String Name_56;
      MR_Word _Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method_6, (MR_Integer) 6)));
      MR_Word Var_30;

      Name_56 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_50);
      succeeded = (WithInst_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) PredOrFunc_51)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredOrFunc_51, (MR_Integer) 0)));
          succeeded = (Var_30 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word FuncModes_24;
        MR_Word RetMode_25;
        MR_Word Var_31;
        MR_Box conv3_RetMode_25;
        MR_Box conv4_STATE_VARIABLE_IO_27;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_23, &FuncModes_24, &conv3_RetMode_25);
        RetMode_25 = ((MR_Word) conv3_RetMode_25);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Name_56));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], Lang_5, InstVarSet_54, Var_31, FuncModes_24, RetMode_25, MaybeDetism_53, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_27);
      }
      else
      {
        MR_Word Var_35;
        MR_Box conv5_STATE_VARIABLE_IO_27;

        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Name_56));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], Lang_5, InstVarSet_54, Var_35, Modes_23, WithInst_52, MaybeDetism_53, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_27);
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1271__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1269__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12)
{
  {
    MR_Word TypeInfo_30_30;
    MR_Word Domain_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Range_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Box STATE_VARIABLE_U_14_14;
    MR_Word Var_16;
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Word Var_21;
    MR_Box STATE_VARIABLE_U_22_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_0_11, &STATE_VARIABLE_U_14_14);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeClassInfo_for_output_25));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (TypeVarSet_6));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (VarNamePrint_7));
    }
    TypeInfo_30_30 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2];
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 27)));
    func_1(((MR_Box) TypeClassInfo_for_output_25), ((MR_Box) (TypeInfo_30_30)), ((MR_Box) (Domain_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_16)), STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_17_17);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
    func_2(((MR_Box) TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) " -> ")), STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_19_19);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (TypeClassInfo_for_output_25));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (TypeVarSet_6));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (VarNamePrint_7));
    }
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 27)));
    func_3(((MR_Box) TypeClassInfo_for_output_25), ((MR_Box) (TypeInfo_30_30)), ((MR_Box) (Range_9)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_21)), STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_22_22);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5)));
    func_4(((MR_Box) TypeClassInfo_for_output_25), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_22_22, STATE_VARIABLE_U_12);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(
  MR_Word Assertion_4)
{
  switch (Assertion_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_3_p_0((MR_String) "can_pass_as_mercury_type");
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "stable");
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__io__write_string_3_p_0((MR_String) "word_aligned_pointer");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(
  MR_Word Info_5,
  MR_Word Use_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Use_6, (MR_Integer) 0)));
    MR_Word Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Use_6, (MR_Integer) 1)));
    MR_Integer _SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Use_6, (MR_Integer) 2)));

    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_9);
    mercury__io__write_string_3_p_0((MR_String) ":- ");
    mercury__io__write_string_3_p_0((MR_String) "use_module");
    mercury__io__write_string_3_p_0((MR_String) " ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(
  MR_Word Info_5,
  MR_Word Avail_6)
{
  {
    MR_Word ModuleName_8;
    MR_Word Context_9;
    MR_String Decl_11;

    if (((MR_tag((MR_Word) Avail_6)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_15 = (MR_Word) MR_body(((MR_Word) Avail_6), (MR_Integer) 0);
      MR_Integer _SeqNum_10;

      ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0)));
      Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1)));
      _SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 2)));
      Decl_11 = (MR_String) "import_module";
    }
    else
    {
      MR_Word Var_14 = (MR_Word) MR_body(((MR_Word) Avail_6), (MR_Integer) 1);
      MR_Integer _SeqNum_18;

      ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
      Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
      _SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 2)));
      Decl_11 = (MR_String) "use_module";
    }
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_9);
    mercury__io__write_string_3_p_0((MR_String) ":- ");
    mercury__io__write_string_3_p_0(Decl_11);
    mercury__io__write_string_3_p_0((MR_String) " ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(
  MR_Word Info_5,
  MR_Word ItemInclude_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInclude_6, (MR_Integer) 0)));
    MR_Word Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInclude_6, (MR_Integer) 1)));
    MR_Integer _SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInclude_6, (MR_Integer) 2)));

    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_9);
    mercury__io__write_string_3_p_0((MR_String) ":- ");
    mercury__io__write_string_3_p_0((MR_String) "include_module");
    mercury__io__write_string_3_p_0((MR_String) " ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_clause__output_instance_method_clause_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0(
  MR_Word Method_4)
{
  {
    MR_Word PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_4, (MR_Integer) 0)));
    MR_Word MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_4, (MR_Integer) 1)));
    MR_Word Defn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_4, (MR_Integer) 2)));
    MR_Integer Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Method_4, (MR_Integer) 3)));
    MR_Word _Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_4, (MR_Integer) 4)));

    if (((MR_tag((MR_Word) Defn_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Defn_8, (MR_Integer) 0)));
      MR_Word Var_18;

      mercury__io__write_string_3_p_0((MR_String) "\t(");
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[7]));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (MethodName_7));
      }
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, Items_12, (MR_String) "),\n\t(", Var_18);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
    {
      MR_Word PredName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Defn_8, (MR_Integer) 0)));

      mercury__io__write_char_3_p_0((MR_Char) 9);
      switch (PredOrFunc_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "func(");
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "pred(");
          }
          break;
      }
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, MethodName_7);
      mercury__io__write_string_3_p_0((MR_String) "/");
      mercury__io__write_int_3_p_0(Arity_9);
      mercury__io__write_string_3_p_0((MR_String) ") is ");
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(PredName_11);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0(
  MR_Word Info_5,
  MR_Word AugCompUnit_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 0)));
    MR_Word ModuleVersionNumbers_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 2)));
    MR_Word SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 3)));
    MR_Word DirectIntItemBlocks_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 4)));
    MR_Word IndirectIntItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 5)));
    MR_Word OptItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 6)));
    MR_Word IntForOptItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 7)));
    MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 1)));
    MR_Box conv0_STATE_VARIABLE_IO_26_26;

    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    mercury__io__write_string_3_p_0((MR_String) "% The module version numbers.\n");
    mercury__map__foldl_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &parse_tree__parse_tree_out_scalar_common_4[5], ModuleVersionNumbers_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_26_26);
    mercury__io__write_string_3_p_0((MR_String) "% The src item blocks.\n");
    parse_tree__parse_tree_out__mercury_output_src_item_blocks_4_p_0(Info_5, SrcItemBlocks_11);
    mercury__io__write_string_3_p_0((MR_String) "% The direct interface item blocks.\n");
    parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(Info_5, DirectIntItemBlocks_12);
    mercury__io__write_string_3_p_0((MR_String) "% The indirect interface item blocks.\n");
    parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(Info_5, IndirectIntItemBlocks_13);
    mercury__io__write_string_3_p_0((MR_String) "% The optimization item blocks.\n");
    parse_tree__parse_tree_out__mercury_output_opt_item_blocks_4_p_0(Info_5, OptItemBlocks_14);
    mercury__io__write_string_3_p_0((MR_String) "% The interface item blocks for optimization.\n");
    parse_tree__parse_tree_out__mercury_output_int_for_opt_item_blocks_4_p_0(Info_5, IntForOptItemBlocks_15);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_blocks_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word IntForOptItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word IntForOptItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0(Info_1, IntForOptItemBlock_10);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = IntForOptItemBlocks_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0(
  MR_Word Info_5,
  MR_Word IntForOptItemBlock_6)
{
  {
    MR_Word TypeCtorInfo_25_25;
    MR_Word IntForOptSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptItemBlock_6, (MR_Integer) 0)));
    MR_Word Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptItemBlock_6, (MR_Integer) 2)));
    MR_Word Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptItemBlock_6, (MR_Integer) 3)));
    MR_Word Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptItemBlock_6, (MR_Integer) 4)));
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word ModuleName_34;
    MR_Word IntFileKind_35;
    MR_String Var_38;
    MR_String Var_40;
    MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptItemBlock_6, (MR_Integer) 1)));
    MR_Box conv0_STATE_VARIABLE_IO_16_16;
    MR_Box conv1_STATE_VARIABLE_IO_18_18;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Info_5));
    }
    TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, TypeCtorInfo_25_25, Var_15, Incls_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, TypeCtorInfo_25_25, Var_17, Avails_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
    ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptSectionKind_8, (MR_Integer) 0)));
    IntFileKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptSectionKind_8, (MR_Integer) 1)));
    mercury__io__write_string_3_p_0((MR_String) ":- ioms_opt_imported(");
    Var_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_34);
    mercury__io__write_string_3_p_0(Var_38);
    Var_40 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_35);
    mercury__io__write_string_3_p_0(Var_40);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_12);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_blocks_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word OptItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word OptItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0(Info_1, OptItemBlock_10);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = OptItemBlocks_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__388__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0(
  MR_Word Info_5,
  MR_Word OptItemBlock_6)
{
  {
    MR_bool succeeded;
    MR_Word OptSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptItemBlock_6, (MR_Integer) 0)));
    MR_Word Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptItemBlock_6, (MR_Integer) 2)));
    MR_Word Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptItemBlock_6, (MR_Integer) 3)));
    MR_Word Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptItemBlock_6, (MR_Integer) 4)));
    MR_Word Var_15;
    MR_Word Var_20;
    MR_Word ModuleName_34;
    MR_Word OptFileKind_35;
    MR_String Var_38;
    MR_String Var_40;
    MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptItemBlock_6, (MR_Integer) 1)));
    MR_Box conv0_STATE_VARIABLE_IO_21_21;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Incls_10));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_15, (MR_String) "parse_tree.parse_tree_out", (MR_String) "predicate \140parse_tree.parse_tree_out.mercury_output_opt_item_block\'/4", (MR_String) "Incls != []");
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_20, Avails_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_21_21);
    ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptSectionKind_8, (MR_Integer) 0)));
    OptFileKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptSectionKind_8, (MR_Integer) 1)));
    mercury__io__write_string_3_p_0((MR_String) ":- oms_opt_imported(");
    Var_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_34);
    mercury__io__write_string_3_p_0(Var_38);
    Var_40 = parse_tree__file_kind__opt_file_kind_to_extension_1_f_0(OptFileKind_35);
    mercury__io__write_string_3_p_0(Var_40);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_12);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_blocks_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word IntItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word IntItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0(Info_1, IntItemBlock_10);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = IntItemBlocks_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0(
  MR_Word Info_5,
  MR_Word IntItemBlock_6)
{
  {
    MR_Word TypeCtorInfo_25_25;
    MR_Word IntSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntItemBlock_6, (MR_Integer) 0)));
    MR_Word Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntItemBlock_6, (MR_Integer) 2)));
    MR_Word Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntItemBlock_6, (MR_Integer) 3)));
    MR_Word Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntItemBlock_6, (MR_Integer) 4)));
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntItemBlock_6, (MR_Integer) 1)));
    MR_Box conv0_STATE_VARIABLE_IO_16_16;
    MR_Box conv1_STATE_VARIABLE_IO_18_18;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Info_5));
    }
    TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, TypeCtorInfo_25_25, Var_15, Incls_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, TypeCtorInfo_25_25, Var_17, Avails_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
    if (((MR_tag((MR_Word) IntSectionKind_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Var_40;
      MR_String Var_42;
      MR_Word ModuleName_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), IntSectionKind_8, (MR_Integer) 0)));
      MR_Word IntFileKind_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), IntSectionKind_8, (MR_Integer) 1)));

      mercury__io__write_string_3_p_0((MR_String) ":- ims_abstract_imported(");
      Var_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_63);
      mercury__io__write_string_3_p_0(Var_40);
      Var_42 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_64);
      mercury__io__write_string_3_p_0(Var_42);
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    else
    {
      MR_Word ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntSectionKind_8, (MR_Integer) 0)));
      MR_Word IntFileKind_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), IntSectionKind_8, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ImportLocn_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), IntSectionKind_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
      MR_Word ImportedOrUsed_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), IntSectionKind_8, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
      MR_String Var_54;
      MR_String Var_56;

      switch (ImportedOrUsed_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) ":- ims_imported");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) ":- ims_used");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) ":- ims_used_and_imported");
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "(");
      Var_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_34);
      mercury__io__write_string_3_p_0(Var_54);
      Var_56 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_35);
      mercury__io__write_string_3_p_0(Var_56);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0, ((MR_Box) (ImportLocn_36)));
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_12);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_blocks_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word SrcItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0(Info_1, SrcItemBlock_10);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = SrcItemBlocks_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0(
  MR_Word Info_5,
  MR_Word SrcItemBlock_6)
{
  {
    MR_Word TypeCtorInfo_25_25;
    MR_Word SrcSectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), SrcItemBlock_6, (MR_Integer) 0)));
    MR_Word Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), SrcItemBlock_6, (MR_Integer) 2)));
    MR_Word Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), SrcItemBlock_6, (MR_Integer) 3)));
    MR_Word Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), SrcItemBlock_6, (MR_Integer) 4)));
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), SrcItemBlock_6, (MR_Integer) 1)));
    MR_Box conv0_STATE_VARIABLE_IO_17_17;
    MR_Box conv1_STATE_VARIABLE_IO_19_19;

    switch (SrcSectionKind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- ams_impl_but_exported_to_submodules.\n");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
        }
        break;
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Info_5));
    }
    TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, TypeCtorInfo_25_25, Var_16, Incls_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17_17);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, TypeCtorInfo_25_25, Var_18, Avails_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_12);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_compilation_unit_4_p_0(
  MR_Word Info_5,
  MR_Word CompUnit_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompUnit_6, (MR_Integer) 0)));
    MR_Word ItemBlocks_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompUnit_6, (MR_Integer) 2)));
    MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompUnit_6, (MR_Integer) 1)));

    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    parse_tree__parse_tree_out__mercury_output_raw_item_blocks_4_p_0(Info_5, ItemBlocks_10);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_blocks_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word RawItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word RawItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(Info_1, RawItemBlock_10);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = RawItemBlocks_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__convert_to_mercury_opt_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeOpt_8)
{
  {
    MR_Word Res_27;

    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_mktag((MR_Integer) 1))))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_3_p_0(OutputFileName_7);
      mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0)));
      MR_Word Verbose_29;
      MR_Word Info_31;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 58, &Verbose_29);
      Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OutputStream_30;
            MR_Word Var_32;

            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_30);
            parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(Info_31, ParseTreeOpt_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_30, &Var_32);
            mercury__io__close_output_3_p_0(FileStream_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutputStream_57;
            MR_Word Var_56;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_57);
            parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(Info_31, ParseTreeOpt_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_57, &Var_56);
            mercury__io__close_output_3_p_0(FileStream_28);
            mercury__io__write_string_3_p_0((MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTree_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 0)));
    MR_Word Use_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 3)));
    MR_Word Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 4)));
    MR_Word Var_20;
    MR_Word _OptFileKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 1)));
    MR_Word _Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 2)));
    MR_Box conv0_STATE_VARIABLE_IO_21_21;

    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[5]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_20, Use_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_21_21);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_12);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__convert_to_mercury_int_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeInt_8)
{
  {
    MR_Word Res_27;

    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_mktag((MR_Integer) 1))))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_3_p_0(OutputFileName_7);
      mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0)));
      MR_Word Verbose_29;
      MR_Word Info_31;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 58, &Verbose_29);
      Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OutputStream_30;
            MR_Word Var_32;

            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_30);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(Info_31, ParseTreeInt_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_30, &Var_32);
            mercury__io__close_output_3_p_0(FileStream_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutputStream_57;
            MR_Word Var_56;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_57);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(Info_31, ParseTreeInt_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_57, &Var_56);
            mercury__io__close_output_3_p_0(FileStream_28);
            mercury__io__write_string_3_p_0((MR_String) " done\n");
          }
          break;
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTree_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 0)));
    MR_Word ModuleContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 2)));
    MR_Word MaybeVersionNumbers_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 3)));
    MR_Word IntIncls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 4)));
    MR_Word ImpIncls_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 5)));
    MR_Word IntAvails_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 6)));
    MR_Word ImpAvails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 7)));
    MR_Word IntItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 8)));
    MR_Word ImpItems_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 9)));
    MR_Word _IntFileKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 1)));

    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    if (!((MaybeVersionNumbers_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word VersionNumbers_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeVersionNumbers_11, (MR_Integer) 0)));

      parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(ModuleName_8, VersionNumbers_18);
    }
    succeeded = (IntIncls_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = (IntAvails_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (IntItems_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (!(succeeded))
    {
      MR_Word IntItemBlock_19;

      {
        IntItemBlock_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IntItemBlock_19, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), IntItemBlock_19, 1) = ((MR_Box) (ModuleContext_10));
        MR_hl_field(MR_mktag(0), IntItemBlock_19, 2) = ((MR_Box) (IntIncls_12));
        MR_hl_field(MR_mktag(0), IntItemBlock_19, 3) = ((MR_Box) (IntAvails_14));
        MR_hl_field(MR_mktag(0), IntItemBlock_19, 4) = ((MR_Box) (IntItems_16));
      }
      parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(Info_5, IntItemBlock_19);
    }
    succeeded = (ImpIncls_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = (ImpAvails_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (ImpItems_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (!(succeeded))
    {
      MR_Word ImpItemBlock_20;

      {
        ImpItemBlock_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImpItemBlock_20, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ImpItemBlock_20, 1) = ((MR_Box) (ModuleContext_10));
        MR_hl_field(MR_mktag(0), ImpItemBlock_20, 2) = ((MR_Box) (ImpIncls_13));
        MR_hl_field(MR_mktag(0), ImpItemBlock_20, 3) = ((MR_Box) (ImpAvails_15));
        MR_hl_field(MR_mktag(0), ImpItemBlock_20, 4) = ((MR_Box) (ImpItems_17));
      }
      parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(Info_5, ImpItemBlock_20);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VersionNumbers_6)
{
  {
    MR_Integer Var_12;

    mercury__io__write_string_3_p_0((MR_String) ":- version_numbers(");
    Var_12 = recompilation__version__version_numbers_version_number_0_f_0();
    mercury__io__write_int_3_p_0(Var_12);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_5);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    recompilation__version__write_version_numbers_3_p_0(VersionNumbers_6);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(
  MR_Word Info_5,
  MR_Word RawItemBlock_6)
{
  {
    MR_Word TypeCtorInfo_25_25;
    MR_Word SectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 0)));
    MR_Word Incls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 2)));
    MR_Word Avails_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 3)));
    MR_Word Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 4)));
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 1)));
    MR_Box conv0_STATE_VARIABLE_IO_17_17;
    MR_Box conv1_STATE_VARIABLE_IO_19_19;

    switch (SectionKind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
        }
        break;
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Info_5));
    }
    TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, TypeCtorInfo_25_25, Var_16, Incls_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17_17);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, TypeCtorInfo_25_25, Var_18, Avails_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_12);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__convert_to_mercury_src_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeSrc_8)
{
  {
    MR_Word Res_27;

    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_mktag((MR_Integer) 1))))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_3_p_0(OutputFileName_7);
      mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0)));
      MR_Word Verbose_29;
      MR_Word Info_31;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 58, &Verbose_29);
      Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OutputStream_30;
            MR_Word Var_32;

            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_30);
            parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(Info_31, ParseTreeSrc_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_30, &Var_32);
            mercury__io__close_output_3_p_0(FileStream_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutputStream_57;
            MR_Word Var_56;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_57);
            parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(Info_31, ParseTreeSrc_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_57, &Var_56);
            mercury__io__close_output_3_p_0(FileStream_28);
            mercury__io__write_string_3_p_0((MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(
  MR_Word Info_1,
  MR_Word MaybePrevSectionKind_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Component_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Components_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word MaybeCurSectionKind_21;
      MR_Word next_value_of_MaybePrevSectionKind_2;
      MR_Word next_value_of_HeadVar__3_3;

      if (((MR_tag((MR_Word) Component_13)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word SubParseTree_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Component_13, (MR_Integer) 2)));
        MR_Word Lang_24;
        MR_Word SectionKind_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Component_13, (MR_Integer) 0)));
        MR_Word _SectionContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Component_13, (MR_Integer) 1)));

        Lang_24 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_1);
        switch (Lang_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (SectionKind_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                  mercury__io__write_string_3_p_0((MR_String) "% nested submodule in implementation\n");
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                  mercury__io__write_string_3_p_0((MR_String) "% nested submodule in interface\n");
                }
                break;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word PrevSectionKind_25;

              succeeded = ((MR_tag((MR_Word) MaybePrevSectionKind_2)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                PrevSectionKind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePrevSectionKind_2, (MR_Integer) 0)));
                succeeded = (PrevSectionKind_25 == SectionKind_45);
              }
              if (!(succeeded))
                switch (SectionKind_45) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                    }
                    break;
                }
            }
            break;
        }
        parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(Info_1, SubParseTree_23);
        MaybeCurSectionKind_21 = MaybePrevSectionKind_2;
      }
      else
      {
        MR_Word TypeCtorInfo_49_49;
        MR_Word TypeCtorInfo_50_50;
        MR_Word TypeCtorInfo_54_54;
        MR_Word SectionKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Component_13, (MR_Integer) 0)));
        MR_Word InclsCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Component_13, (MR_Integer) 2)));
        MR_Word AvailsCord_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Component_13, (MR_Integer) 3)));
        MR_Word ItemsCord_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Component_13, (MR_Integer) 4)));
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_42;
        MR_Word _Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Component_13, (MR_Integer) 1)));
        MR_Box conv0_STATE_VARIABLE_IO_38_38;
        MR_Box conv1_STATE_VARIABLE_IO_41_41;

        switch (SectionKind_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
            }
            break;
        }
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[3]));
          MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Info_1));
        }
        TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
        Var_37 = mercury__cord__list_1_f_0(TypeCtorInfo_49_49, InclsCord_18);
        TypeCtorInfo_50_50 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
        mercury__list__foldl_4_p_2(TypeCtorInfo_49_49, TypeCtorInfo_50_50, Var_36, Var_37, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_38_38);
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[4]));
          MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Info_1));
        }
        TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
        Var_40 = mercury__cord__list_1_f_0(TypeCtorInfo_54_54, AvailsCord_19);
        mercury__list__foldl_4_p_2(TypeCtorInfo_54_54, TypeCtorInfo_50_50, Var_39, Var_40, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_41_41);
        Var_42 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, ItemsCord_20);
        parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_1, Var_42);
        {
          MaybeCurSectionKind_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeCurSectionKind_21, 0) = ((MR_Box) (SectionKind_16));
        }
      }
      // direct tailcall eliminated
      next_value_of_MaybePrevSectionKind_2 = MaybeCurSectionKind_21;
      next_value_of_HeadVar__3_3 = Components_14;
      MaybePrevSectionKind_2 = next_value_of_MaybePrevSectionKind_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTree_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 0)));
    MR_Word ModuleComponentsCord_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 2)));
    MR_Word ModuleComponents_11;
    MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 1)));

    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    ModuleComponents_11 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, ModuleComponentsCord_10);
    parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(Info_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ModuleComponents_11);
    mercury__io__write_string_3_p_0((MR_String) ":- end_module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Item_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_item_4_p_0(Info_1, Item_10);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Items_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_4_p_0(
  MR_Word Info_5,
  MR_Word Item_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Item_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ItemClause_8 = (MR_Word) MR_body(((MR_Word) Item_6), (MR_Integer) 0);

          parse_tree__parse_tree_out_clause__mercury_output_item_clause_4_p_0(Info_5, ItemClause_8);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemTypeDefn_9 = (MR_Word) MR_body(((MR_Word) Item_6), (MR_Integer) 1);

          parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(Info_5, ItemTypeDefn_9);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemInstDefn_10 = (MR_Word) MR_body(((MR_Word) Item_6), (MR_Integer) 2);

          parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(Info_5, ItemInstDefn_10);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ItemModeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(Info_5, ItemModeDefn_11);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ItemPredDecl_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(Info_5, ItemPredDecl_12);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ItemModeDecl_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
              MR_Word PredName0_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 0)));
              MR_Word PredOrFunc_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 1)));
              MR_Word Modes_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 2)));
              MR_Word WithInst_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 3)));
              MR_Word MaybeDet_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 4)));
              MR_Word VarSet_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 5)));
              MR_Word Context_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 6)));
              MR_Word PredName_88;
              MR_Word Lang_89;
              MR_Integer _SeqNum_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 7)));
              MR_Word Var_93;

              parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, PredName0_80, &PredName_88);
              parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_86);
              Lang_89 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
              succeeded = (WithInst_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) PredOrFunc_81)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredOrFunc_81, (MR_Integer) 0)));
                  succeeded = (Var_93 == (MR_Integer) 1);
                }
              }
              if (succeeded)
              {
                MR_Word FuncModes_90;
                MR_Word RetMode_91;
                MR_Box conv0_RetMode_91;

                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_82, &FuncModes_90, &conv0_RetMode_91);
                RetMode_91 = ((MR_Word) conv0_RetMode_91);
                parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0(Lang_89, VarSet_85, PredName_88, FuncModes_90, RetMode_91, MaybeDet_84);
              }
              else
                parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0(Lang_89, VarSet_85, PredName_88, Modes_82, WithInst_83, MaybeDet_84);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ItemPragma_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out_pragma__mercury_output_item_pragma_4_p_0(Info_5, ItemPragma_14);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ItemPromise_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(ItemPromise_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ItemTypeClass_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(Info_5, ItemTypeClass_16);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ItemInstance_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(ItemInstance_17);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ItemInitialise_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
              MR_Word PredSymName_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise_18, (MR_Integer) 0)));
              MR_Integer Arity_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInitialise_18, (MR_Integer) 1)));
              MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise_18, (MR_Integer) 2)));
              MR_Word _Context_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise_18, (MR_Integer) 3)));
              MR_Integer _SeqNum_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInitialise_18, (MR_Integer) 4)));

              mercury__io__write_string_3_p_0((MR_String) ":- initialise ");
              parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(PredSymName_62);
              mercury__io__write_string_3_p_0((MR_String) "/");
              mercury__io__write_int_3_p_0(Arity_63);
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ItemFinalise_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
              MR_Word PredSymName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinalise_19, (MR_Integer) 0)));
              MR_Integer Arity_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemFinalise_19, (MR_Integer) 1)));
              MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinalise_19, (MR_Integer) 2)));
              MR_Word _Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinalise_19, (MR_Integer) 3)));
              MR_Integer _SeqNum_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemFinalise_19, (MR_Integer) 4)));

              mercury__io__write_string_3_p_0((MR_String) ":- finalise ");
              parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(PredSymName_44);
              mercury__io__write_string_3_p_0((MR_String) "/");
              mercury__io__write_int_3_p_0(Arity_45);
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ItemMutable_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(Info_5, ItemMutable_20);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ItemTypeRepn_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0(ItemTypeRepn_21);
            }
            break;
          case (MR_Integer) 11:
            {
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__prog_out__write_sym_name_and_arity_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_type_repn__1464__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemTypeRepn_6)
{
  {
    MR_Word TypeCtorSymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 0)));
    MR_Word ArgTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 1)));
    MR_Word RepnInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 2)));
    MR_Word TVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 3)));
    MR_Word Var_25;
    MR_Word _Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 4)));
    MR_Integer _SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 5)));

    mercury__io__write_string_3_p_0((MR_String) ":- type_representation(");
    parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(TypeCtorSymName_8);
    mercury__io__write_string_3_p_0((MR_String) ", [");
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2], ArgTVars_9, (MR_String) ", ", Var_25);
    mercury__io__write_string_3_p_0((MR_String) "], ");
    switch (MR_tag((MR_Word) RepnInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(RepnInfo_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "is_direct_dummy");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "is_notag");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word EqvType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), RepnInfo_10, (MR_Integer) 0)));

          mercury__io__write_string_3_p_0((MR_String) "is_eqv_to(");
          parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_11, (MR_Integer) 2, EqvType_15);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer NumBits_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RepnInfo_10, (MR_Integer) 0)));

          mercury__io__write_string_3_p_0((MR_String) "fits_in_n_bits(");
          mercury__io__write_int_3_p_0(NumBits_14);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word SymNameAndArities_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), RepnInfo_10, (MR_Integer) 0)));

          mercury__io__write_string_3_p_0((MR_String) "has_direct_arg_functors([");
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, SymNameAndArities_16, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_scalar_common_4[4]);
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemInstance_6)
{
  {
    MR_Word ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 0)));
    MR_Word Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 1)));
    MR_Word Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 3)));
    MR_Word Body_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 4)));
    MR_Word VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 5)));
    MR_Word Var_28;
    MR_Word _OriginalTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 2)));
    MR_Word _InstanceModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 6)));
    MR_Word _Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 7)));
    MR_Integer _SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 8)));
    MR_Box conv0_STATE_VARIABLE_IO_37_37;

    mercury__io__write_string_3_p_0((MR_String) ":- instance ");
    mercury__io__write_char_3_p_0((MR_Char) 40);
    parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(ClassName_8);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (VarSet_13));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, Types_9, (MR_String) ", ", Var_28);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], VarSet_13, (MR_Integer) 0, (MR_String) "<=", Constraints_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_37_37);
    if (!((Body_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Methods_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_12, (MR_Integer) 0)));

      mercury__io__write_string_3_p_0((MR_String) " where [\n");
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, Methods_17, (MR_String) ",\n", (MR_Word) &parse_tree__parse_tree_out_scalar_common_4[3]);
      mercury__io__write_string_3_p_0((MR_String) "\n]");
    }
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemPromise_6)
{
  {
    MR_Word PromiseType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 0)));
    MR_Word Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 1)));
    MR_Word VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 2)));
    MR_Word UnivVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 3)));
    MR_Word Goal_17;
    MR_Word _Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 4)));
    MR_Integer _SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 5)));

    switch (PromiseType_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- all [");
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_10, (MR_Integer) 0, UnivVars_11);
          mercury__io__write_string_3_p_0((MR_String) "]");
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0((MR_Integer) 1);
          parse_tree__prog_out__write_promise_type_3_p_0(PromiseType_8);
          Goal_17 = Goal0_9;
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- promise ");
          if ((UnivVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            Goal_17 = Goal0_9;
          else
          {
            MR_Word Var_32;

            Var_32 = parse_tree__prog_item__goal_get_context_1_f_0(Goal0_9);
            {
              Goal_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Goal_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), Goal_17, 1) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 0 << (MR_Integer) 1)))));
              MR_hl_field(MR_mktag(3), Goal_17, 2) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(3), Goal_17, 3) = ((MR_Box) (UnivVars_11));
              MR_hl_field(MR_mktag(3), Goal_17, 4) = ((MR_Box) (Goal0_9));
            }
          }
        }
        break;
    }
    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0((MR_Integer) 1);
    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_10, (MR_Integer) 1, Goal_17);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(
  MR_Word Info_5,
  MR_Word ItemMutable_6)
{
  {
    MR_String Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 0)));
    MR_Word Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 2)));
    MR_Word Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 4)));
    MR_Word InitTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 5)));
    MR_Word MutVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 6)));
    MR_Word Attrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 7)));
    MR_Word Lang_18;
    MR_Word Var_26;
    MR_Word Var_35;
    MR_Word _OrigType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 1)));
    MR_Word _OrigInst_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 3)));
    MR_Word _Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 8)));
    MR_Integer _SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 9)));

    mercury__io__write_string_3_p_0((MR_String) ":- mutable(");
    mercury__io__write_string_3_p_0(Name_8);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    Var_26 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(Var_26, (MR_Integer) 0, Type_10);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, MutVarSet_14, (MR_Integer) 0, InitTerm_13);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    Lang_18 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    Var_35 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(Lang_18, Var_35, Inst_12);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__print_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, ((MR_Box) (Attrs_15)));
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__output_class_method_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1213__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(
  MR_Word Info_5,
  MR_Word ItemTypeClass_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_output_51;
    MR_Word ClassName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 0)));
    MR_Word Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 1)));
    MR_Word Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 2)));
    MR_Word FunDeps_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 3)));
    MR_Word Interface_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 4)));
    MR_Word VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 5)));
    MR_Word ClassName_16;
    MR_Word Var_30;
    MR_Word _Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 6)));
    MR_Integer _SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 7)));

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, ClassName0_8, &ClassName_16);
    mercury__io__write_string_3_p_0((MR_String) ":- typeclass ");
    parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(ClassName_16);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (VarSet_13));
    }
    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2], Vars_9, (MR_String) ", ", Var_30);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    TypeClassInfo_for_output_51 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
    succeeded = (FunDeps_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (Constraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (!(succeeded))
    {
      MR_Word Var_66;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_U_19_64;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_22_67;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv9_STATE_VARIABLE_IO_38_38;

      func_0(((MR_Box) TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) " <= (")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_19_64);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (TypeClassInfo_for_output_51));
        MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (VarSet_13));
        MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 27)));
      func_2(((MR_Box) TypeClassInfo_for_output_51), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)), ((MR_Box) (FunDeps_11)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_66)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_22_67);
      if (!((Constraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word Var_71;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_U_27_72;

        if (!((FunDeps_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box conv5_STATE_VARIABLE_U_24_69;

          func_4(((MR_Box) TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_24_69);
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3));
          MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (TypeClassInfo_for_output_51));
          MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (VarSet_13));
          MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 27)));
        func_6(((MR_Box) TypeClassInfo_for_output_51), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (Constraints_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_71)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_27_72);
      }
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5)));
      func_8(((MR_Box) TypeClassInfo_for_output_51), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_38_38);
    }
    if ((Interface_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
    else
    {
      MR_Word Methods_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Interface_12, (MR_Integer) 0)));
      MR_Word Lang_21;
      MR_Word Var_89;

      mercury__io__write_string_3_p_0((MR_String) " where [\n");
      Lang_21 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
      {
        Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2]));
        MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4));
        MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (Lang_21));
      }
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0, Methods_20, (MR_String) ",\n", Var_89);
      mercury__io__write_string_3_p_0((MR_String) "\n].\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(
  MR_Word Info_5,
  MR_Word ItemPredDecl_6)
{
  {
    MR_bool succeeded;
    MR_Word PredName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 0)));
    MR_Word PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 1)));
    MR_Word TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 2)));
    MR_Word WithType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 3)));
    MR_Word WithInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 4)));
    MR_Word MaybeDetism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 5)));
    MR_Word TypeVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 7)));
    MR_Word InstVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 8)));
    MR_Word ExistQVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 9)));
    MR_Word Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 10)));
    MR_Word Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 11)));
    MR_Word Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 12)));
    MR_Word PredName_22;
    MR_Word Lang_23;
    MR_Word _Origin_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 6)));
    MR_Integer _SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 13)));

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, PredName0_8, &PredName_22);
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_20);
    Lang_23 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    succeeded = (PredOrFunc_9 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WithType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      MR_Word FuncTypesAndModes_24;
      MR_Word RetTypeAndMode_25;
      MR_Box conv0_RetTypeAndMode_25;
      MR_Box conv1_STATE_VARIABLE_IO_27;

      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, TypesAndModes_10, &FuncTypesAndModes_24, &conv0_RetTypeAndMode_25);
      RetTypeAndMode_25 = ((MR_Word) conv0_RetTypeAndMode_25);
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], Lang_23, TypeVarSet_15, InstVarSet_16, ExistQVars_17, PredName_22, FuncTypesAndModes_24, RetTypeAndMode_25, MaybeDetism_13, Purity_18, Constraints_19, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27);
    }
    else
    {
      MR_Box conv2_STATE_VARIABLE_IO_27;

      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1], Lang_23, TypeVarSet_15, InstVarSet_16, PredOrFunc_9, ExistQVars_17, PredName_22, TypesAndModes_10, WithType_11, WithInst_12, MaybeDetism_13, Purity_18, Constraints_19, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_27);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_25;

    conv2_LambdaHeadVar__2_25 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn__1088__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_25));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ItemModeDefn_6)
{
  {
    MR_Word TypeClassInfo_for_output_20;
    MR_Word TypeCtorInfo_37_48;
    MR_Word SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 0)));
    MR_Word InstParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 1)));
    MR_Word ModeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 2)));
    MR_Word VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 3)));
    MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 4)));
    MR_Word UnQualSymName_14;
    MR_Word Lang_15;
    MR_Word Mode_28;
    MR_Word ArgTerms_30;
    MR_Word ModeTerm_32;
    MR_Word Var_35;
    MR_Integer _SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 5)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_22_34;
    MR_Box conv3_STATE_VARIABLE_U_27_39;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_29_41;
    MR_Box conv6_STATE_VARIABLE_U_30_42;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_IO_17;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, SymName_8, &UnQualSymName_14);
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_12);
    Lang_15 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    TypeClassInfo_for_output_20 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
    Mode_28 = (MR_Word) ModeDefn_10;
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
    func_0(((MR_Box) TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ":- mode (")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_22_34);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Context_12));
    }
    ArgTerms_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], Var_35, InstParams_9);
    TypeCtorInfo_37_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeCtorInfo_37_48, UnQualSymName_14, ArgTerms_30, Context_12, &ModeTerm_32);
    parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(TypeCtorInfo_37_48, TypeClassInfo_for_output_20, VarSet_11, (MR_Integer) 0, ModeTerm_32, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_27_39);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
    func_4(((MR_Box) TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ") == ")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_29_41);
    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_20, Lang_15, VarSet_11, Mode_28, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_30_42);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
    func_7(((MR_Box) TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_17);
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_32;

    conv1_LambdaHeadVar__2_32 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1027__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_32));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_54;

    conv0_LambdaHeadVar__2_54 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1019__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_54));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ItemInstDefn_6)
{
  {
    MR_bool succeeded;
    MR_Word SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 0)));
    MR_Word InstParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 1)));
    MR_Word MaybeForTypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 2)));
    MR_Word InstDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 3)));
    MR_Word InstVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 4)));
    MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 5)));
    MR_Word UnQualSymName_15;
    MR_Word SymName_16;
    MR_Word Lang_17;
    MR_Integer _SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 6)));

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, SymName0_8, &UnQualSymName_15);
    succeeded = parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0(InstVarSet_12, UnQualSymName_15, InstParams_9);
    if (succeeded)
      SymName_16 = SymName0_8;
    else
      SymName_16 = UnQualSymName_15;
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_13);
    Lang_17 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    if ((InstDefn_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_65_65;
      MR_Word ArgTerms_18;
      MR_Word InstTerm_20;
      MR_Word Var_52;

      mercury__io__write_string_3_p_0((MR_String) ":- inst (");
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[3]));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Context_13));
      }
      ArgTerms_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], Var_52, InstParams_9);
      TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeCtorInfo_65_65, SymName_16, ArgTerms_18, Context_13, &InstTerm_20);
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_65_65, InstVarSet_12, (MR_Integer) 0, InstTerm_20);
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    else
    {
      MR_Word TypeCtorInfo_68_68;
      MR_Word Body_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstDefn_11, (MR_Integer) 0)));
      MR_Word Var_30;
      MR_Word ArgTerms_61;
      MR_Word InstTerm_62;

      mercury__io__write_string_3_p_0((MR_String) ":- inst (");
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[3]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Context_13));
      }
      ArgTerms_61 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[5], Var_30, InstParams_9);
      TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeCtorInfo_68_68, SymName_16, ArgTerms_61, Context_13, &InstTerm_62);
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_68_68, InstVarSet_12, (MR_Integer) 0, InstTerm_62);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      if (!((MaybeForTypeCtor_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word ForTypeCtor_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeForTypeCtor_10, (MR_Integer) 0)));
        MR_Word ForTypeCtorSymName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForTypeCtor_22, (MR_Integer) 0)));
        MR_Integer ForTypeCtorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ForTypeCtor_22, (MR_Integer) 1)));

        mercury__io__write_string_3_p_0((MR_String) "for ");
        parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(ForTypeCtorSymName_23);
        mercury__io__write_string_3_p_0((MR_String) "/");
        mercury__io__write_int_3_p_0(ForTypeCtorArity_24);
        mercury__io__write_string_3_p_0((MR_String) " ");
      }
      mercury__io__write_string_3_p_0((MR_String) "== ");
      parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(Lang_17, InstVarSet_12, Body_21);
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_18;

    conv0_LambdaHeadVar__2_18 = parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1054__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0(
  MR_Word InstVarSet_4,
  MR_Word HeadVar__2_2,
  MR_Word Args0_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word TypeCtorInfo_31_31;
    MR_Word TypeCtorInfo_32_32;
    MR_Word TypeCtorInfo_33_33;
    MR_String Name_5;
    MR_Word Args1_7;
    MR_Word Term_9;
    MR_Word VarSet_10;
    MR_Word ContextPieces_11;
    MR_Word MaybeInst_12;
    MR_Word Inst_13;
    MR_Word Var_16;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_14;
    MR_Word Var_15;

    if (succeeded)
    {
      Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      TypeInfo_27_27 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[4];
      TypeInfo_28_28 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[6];
      Var_16 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_4[2];
      Args1_7 = mercury__list__map_2_f_0(TypeInfo_27_27, TypeInfo_28_28, Var_16, Args0_6);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Name_5));
      }
      Var_22 = mercury__term__context_init_0_f_0();
      TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
      TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      {
        Term_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_9, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), Term_9, 1) = ((MR_Box) (Args1_7));
        MR_hl_field(MR_mktag(0), Term_9, 2) = ((MR_Box) (Var_22));
      }
      mercury__varset__coerce_2_p_0(TypeCtorInfo_31_31, TypeCtorInfo_32_32, InstVarSet_4, &VarSet_10);
      TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      ContextPieces_11 = mercury__cord__init_0_f_0(TypeCtorInfo_33_33);
      Var_24 = (MR_Integer) 1;
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_scalar_common_7[0]);
      parse_tree__parse_inst_mode_name__parse_inst_5_p_0(Var_23, VarSet_10, ContextPieces_11, Term_9, &MaybeInst_12);
      succeeded = ((MR_tag((MR_Word) MaybeInst_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst_12, (MR_Integer) 0)));
        succeeded = ((((MR_tag((MR_Word) Inst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
            Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));
          }
        }
        succeeded = !(succeeded);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_46;

    conv0_LambdaHeadVar__2_46 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__604__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_46));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ItemTypeDefn_6)
{
  {
    MR_Word TypeCtorInfo_124_124;
    MR_Word SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 0)));
    MR_Word TypeParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 1)));
    MR_Word TypeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 2)));
    MR_Word TypeVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 3)));
    MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 4)));
    MR_Word SymName_14;
    MR_Word Args_15;
    MR_Word TypeTerm_17;
    MR_Word Var_44;
    MR_Integer _SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 5)));

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, SymName0_8, &SymName_14);
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_12);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Context_12));
    }
    Args_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_scalar_common_1[2], (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[3], Var_44, TypeParams_9);
    TypeCtorInfo_124_124 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeCtorInfo_124_124, SymName_14, Args_15, Context_12, &TypeTerm_17);
    switch (MR_tag((MR_Word) TypeDefn_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_24 = (MR_Word) MR_body(((MR_Word) TypeDefn_10), (MR_Integer) 0);
          MR_Word Ctors_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsDu_24, (MR_Integer) 0)));
          MR_Word MaybeCanonical_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsDu_24, (MR_Integer) 1)));
          MR_Word MaybeDirectArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsDu_24, (MR_Integer) 2)));

          mercury__io__write_string_3_p_0((MR_String) ":- type ");
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_124_124, TypeVarSet_11, (MR_Integer) 0, TypeTerm_17);
          parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(TypeVarSet_11, (MR_Integer) 1, Ctors_25);
          parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(Info_5, TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), MaybeCanonical_26, MaybeDirectArgs_27);
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DetailsSolver_28 = (MR_Word) MR_body(((MR_Word) TypeDefn_10), (MR_Integer) 1);
          MR_Word SolverTypeDetails_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_28, (MR_Integer) 0)));
          MR_Word Var_87;
          MR_Word MaybeCanonical_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_28, (MR_Integer) 1)));

          mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_124_124, TypeVarSet_11, (MR_Integer) 0, TypeTerm_17);
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (SolverTypeDetails_29));
          }
          parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(Info_5, TypeVarSet_11, Var_87, MaybeCanonical_120, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_125_125;
          MR_Word DetailsForeign_30 = (MR_Word) MR_body(((MR_Word) TypeDefn_10), (MR_Integer) 2);
          MR_Word ForeignType_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsForeign_30, (MR_Integer) 0)));
          MR_Word Assertions_32;
          MR_String ForeignTypeStr_37;
          MR_Word AssertionsList_38;
          MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsForeign_30, (MR_Integer) 2)));
          MR_Word MaybeCanonical_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsForeign_30, (MR_Integer) 1)));

          Assertions_32 = (MR_Word) Var_47;
          mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_type(");
          switch (MR_tag((MR_Word) ForeignType_31)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_65;

                mercury__io__write_string_3_p_0((MR_String) "c, ");
                Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_31, (MR_Integer) 0)));
                ForeignTypeStr_37 = (MR_String) Var_65;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_64;

                mercury__io__write_string_3_p_0((MR_String) "java, ");
                Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ForeignType_31, (MR_Integer) 0)));
                ForeignTypeStr_37 = (MR_String) Var_64;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_63;

                mercury__io__write_string_3_p_0((MR_String) "csharp, ");
                Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), ForeignType_31, (MR_Integer) 0)));
                ForeignTypeStr_37 = (MR_String) Var_63;
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "erlang, ");
                ForeignTypeStr_37 = (MR_String) "";
              }
              break;
          }
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_124_124, TypeVarSet_11, (MR_Integer) 0, TypeTerm_17);
          mercury__io__write_string_3_p_0((MR_String) ", \"");
          mercury__io__write_string_3_p_0(ForeignTypeStr_37);
          mercury__io__write_string_3_p_0((MR_String) "\"");
          TypeCtorInfo_125_125 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;
          mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_125_125, Assertions_32, &AssertionsList_38);
          if (!((AssertionsList_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            mercury__io__write_string_3_p_0((MR_String) ", [");
            mercury__io__write_list_5_p_0(TypeCtorInfo_125_125, AssertionsList_38, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_scalar_common_4[1]);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          mercury__io__write_string_3_p_0((MR_String) ")");
          parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(Info_5, TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), MaybeCanonical_121, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeDefn_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsEqv_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeDefn_10, (MR_Integer) 1)));
              MR_Word EqvType_23 = (MR_Word) DetailsEqv_22;

              mercury__io__write_string_3_p_0((MR_String) ":- type ");
              parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(TypeCtorInfo_124_124, TypeVarSet_11, (MR_Integer) 0, TypeTerm_17);
              mercury__io__write_string_3_p_0((MR_String) " == ");
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TypeVarSet_11, (MR_Integer) 0, EqvType_23);
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DetailsAbstract_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeDefn_10, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) DetailsAbstract_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(DetailsAbstract_18)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        mercury__io__write_string_3_p_0((MR_String) ":- type ");
                        parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(TypeCtorInfo_124_124, TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_17);
                        switch (MR_tag((MR_Word) DetailsAbstract_18)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(DetailsAbstract_18)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Integer NumBits_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), DetailsAbstract_18, (MR_Integer) 0)));

                              parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(NumBits_21);
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
                        parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(TypeCtorInfo_124_124, TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_17);
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) ":- type ");
                    parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(TypeCtorInfo_124_124, TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_17);
                    switch (MR_tag((MR_Word) DetailsAbstract_18)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(DetailsAbstract_18)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer NumBits_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), DetailsAbstract_18, (MR_Integer) 0)));

                          parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(NumBits_21);
                        }
                        break;
                    }
                  }
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_5_p_0(
  MR_Word VarSet_1,
  MR_Word First_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Ctor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__3_3;

      switch (First_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "\n    ;       ");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "\n    --->    ");
          }
          break;
      }
      parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(VarSet_1, Ctor_13);
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = Ctors_14;
      First_2 = (MR_Integer) 0;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(
  MR_Word TypeVarSet_5,
  MR_Word Ctor_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_output_48;
    MR_Word MaybeExistConstraints_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 0)));
    MR_Word SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 1)));
    MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 2)));
    MR_Integer Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 3)));
    MR_String Name_13;
    MR_Word Constraints_14;
    MR_Word ParenWrap_15;
    MR_Word BraceWrap_18;
    MR_Word Var_43;
    MR_String Var_44;
    MR_Word _Ctxt_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 4)));
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;
    MR_Box conv0_STATE_VARIABLE_IO_45_45;

    Name_13 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_9);
    if ((MaybeExistConstraints_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      Constraints_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ParenWrap_15 = (MR_Integer) 0;
    }
    else
    {
      MR_Word ExistConstraints_16 = (MR_Word) MR_body(((MR_Word) MaybeExistConstraints_8), (MR_Integer) 1);
      MR_Word ExistQVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistConstraints_16, (MR_Integer) 0)));

      Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistConstraints_16, (MR_Integer) 1)));
      parse_tree__mercury_to_mercury__mercury_output_quantifier_5_p_0(TypeVarSet_5, (MR_Integer) 0, ExistQVars_17);
      mercury__io__write_string_3_p_0((MR_String) "(");
      ParenWrap_15 = (MR_Integer) 1;
    }
    succeeded = (Arity_11 == (MR_Integer) 2);
    if (succeeded)
    {
      // binary string simple lookup switch
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(Name_13, ((&parse_tree__parse_tree_out_vector_common_5[0 + mid_2]))->parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          succeeded = MR_TRUE;
          // jump out of search loop
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (mid_2 - (MR_Integer) 1);
        else
          lo_0 = (mid_2 + (MR_Integer) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_0:;
    }
    if (succeeded)
    {
      BraceWrap_18 = (MR_Integer) 1;
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    else
      BraceWrap_18 = (MR_Integer) 0;
    if ((Args_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Name_13));
      }
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Var_29);
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    else
    {
      MR_Word Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0)));
      MR_Word Rest_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1)));
      MR_Word Var_33;
      MR_Word Name_54;
      MR_Word Type_55;
      MR_Word _Context_56;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Name_13));
      }
      parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(Var_33);
      mercury__io__write_string_3_p_0((MR_String) "(");
      Name_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_19, (MR_Integer) 0)));
      Type_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_19, (MR_Integer) 1)));
      _Context_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_19, (MR_Integer) 2)));
      if (!((Name_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word FieldName_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), Name_54, (MR_Integer) 0)));
        MR_Word Name_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldName_63, (MR_Integer) 0)));
        MR_Word _Ctxt_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldName_63, (MR_Integer) 1)));

        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Name_65);
        mercury__io__write_string_3_p_0((MR_String) " :: ");
      }
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TypeVarSet_5, (MR_Integer) 0, Type_55);
      parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(TypeVarSet_5, Rest_20);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    switch (BraceWrap_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) " }");
        }
        break;
    }
    Var_43 = (MR_Integer) 0;
    Var_44 = (MR_String) "=>";
    TypeClassInfo_for_output_48 = (MR_Word) &parse_tree__parse_tree_out_scalar_common_1[1];
    parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(TypeClassInfo_for_output_48, TypeVarSet_5, Var_43, Var_44, Constraints_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_45_45);
    switch (ParenWrap_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Name_24;
      MR_Word Type_25;
      MR_Word _Context_26;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 0)));
      Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 1)));
      _Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 2)));
      if (!((Name_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word FieldName_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Name_24, (MR_Integer) 0)));
        MR_Word Name_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldName_33, (MR_Integer) 0)));
        MR_Word _Ctxt_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldName_33, (MR_Integer) 1)));

        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Name_35);
        mercury__io__write_string_3_p_0((MR_String) " :: ");
      }
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(HeadVar__1_1, (MR_Integer) 0, Type_25);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Args_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(
  MR_Integer NumBits_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\n\twhere\t");
    mercury__io__write_string_3_p_0((MR_String) "type_is_abstract_enum(");
    mercury__io__write_int_3_p_0(NumBits_4);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(
  MR_Word Info_8,
  MR_Word TypeVarSet_9,
  MR_Word MaybeSolverTypeDetails_10,
  MR_Word MaybeCanonical_11,
  MR_Word MaybeDirectArgs_12)
{
  {
    MR_bool succeeded = (MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (MaybeCanonical_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (!(succeeded))
    {
      MR_Word MaybeCmpPred_16;

      mercury__io__write_string_3_p_0((MR_String) "\n\twhere\t");
      if ((MaybeCanonical_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MaybeCmpPred_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        if (!((MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word SolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_10, (MR_Integer) 0)));

          parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(Info_8, TypeVarSet_9, SolverTypeDetails_19);
          succeeded = (MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (!(succeeded))
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          }
        }
      }
      else
      {
        MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCanonical_11, (MR_Integer) 0)));
        MR_Word MaybeUniPred_91;

        switch (MR_tag((MR_Word) Var_90)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UniPred_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_90, (MR_Integer) 0)));
              MR_Word CmpPred_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_90, (MR_Integer) 1)));

              {
                MaybeUniPred_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUniPred_91, 0) = ((MR_Box) (UniPred_17));
              }
              {
                MaybeCmpPred_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeCmpPred_16, 0) = ((MR_Box) (CmpPred_18));
              }
              if (!((MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
              {
                MR_Word SolverTypeDetails_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_10, (MR_Integer) 0)));

                parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(Info_8, TypeVarSet_9, SolverTypeDetails_56);
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word UniPred_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0)));

              {
                MaybeUniPred_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUniPred_91, 0) = ((MR_Box) (UniPred_52));
              }
              MaybeCmpPred_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              if (!((MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
              {
                MR_Word SolverTypeDetails_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_10, (MR_Integer) 0)));

                parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(Info_8, TypeVarSet_9, SolverTypeDetails_67);
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word CmpPred_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_90, (MR_Integer) 0)));

              MaybeUniPred_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                MaybeCmpPred_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeCmpPred_16, 0) = ((MR_Box) (CmpPred_53));
              }
              if (!((MaybeSolverTypeDetails_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
              {
                MR_Word SolverTypeDetails_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_10, (MR_Integer) 0)));

                parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(Info_8, TypeVarSet_9, SolverTypeDetails_78);
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MaybeUniPred_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MaybeCmpPred_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__io__write_string_3_p_0((MR_String) "type_is_abstract_noncanonical");
            }
            break;
        }
        if (!((MaybeUniPred_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word UniPredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUniPred_91, (MR_Integer) 0)));

          mercury__io__write_string_3_p_0((MR_String) "equality is ");
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(UniPredName_20);
          succeeded = (MaybeCmpPred_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
            succeeded = (MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (!(succeeded))
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          }
        }
      }
      if ((MaybeCmpPred_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if (!((MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word DirectArgFunctors_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDirectArgs_12, (MR_Integer) 0)));

          mercury__io__write_string_3_p_0((MR_String) "direct_arg is [");
          parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(DirectArgFunctors_23);
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
      }
      else
      {
        MR_Word CmpPredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCmpPred_16, (MR_Integer) 0)));

        mercury__io__write_string_3_p_0((MR_String) "comparison is ");
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(CmpPredName_21);
        if (!((MaybeDirectArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word DirectArgFunctors_94;

          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          DirectArgFunctors_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDirectArgs_12, (MR_Integer) 0)));
          mercury__io__write_string_3_p_0((MR_String) "direct_arg is [");
          parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(DirectArgFunctors_94);
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__975__1_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(
  MR_Word Ctors_4)
{
  {
    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, Ctors_4, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_scalar_common_4[0]);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(
  MR_Word Info_6,
  MR_Word TypeVarSet_7,
  MR_Word Details_8)
{
  {
    MR_Word RepresentationType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Details_8, (MR_Integer) 0)));
    MR_Word GroundInst_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Details_8, (MR_Integer) 1)));
    MR_Word AnyInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Details_8, (MR_Integer) 2)));
    MR_Word MutableInfos_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Details_8, (MR_Integer) 3)));
    MR_Word Lang_14;
    MR_Word EmptyInstVarSet_15;

    mercury__io__write_string_3_p_0((MR_String) "representation is ");
    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TypeVarSet_7, (MR_Integer) 0, RepresentationType_10);
    Lang_14 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &EmptyInstVarSet_15);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t\tground is ");
    parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(Lang_14, EmptyInstVarSet_15, GroundInst_11);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t\tany is ");
    parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(Lang_14, EmptyInstVarSet_15, AnyInst_12);
    if (!((MutableInfos_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_33;

      mercury__io__write_string_3_p_0((MR_String) ",\n\t\tconstraint_store is [\n\t\t\t");
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Info_6));
      }
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, MutableInfos_13, (MR_String) ",\n\t\t\t", Var_33);
      mercury__io__write_string_3_p_0((MR_String) "\n\t\t]");
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module parse_tree.parse_tree_out.
