/*
** Automatically generated from `parse_tree_out.m'
** by the Mercury compiler,
** version rotd-2020-08-15
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
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.canonicalize_interface.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type_repn.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_c_java_csharp_erlang_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_VA_PseudoTypeInfo_Struct4 parse_tree__parse_tree_out____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2012__1_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__4_31,
  MR_Box HeadVar__5_32,
  MR_Box * HeadVar__6_33);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2010__1_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__4_26,
  MR_Box HeadVar__5_27,
  MR_Box * HeadVar__6_28);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1954__1_4_p_0(
  MR_Word VarSet_13,
  MR_Word LambdaHeadVar__1_32);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1721__1_2_f_0(
  MR_Word Context_8,
  MR_Word LambdaHeadVar__1_18);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1663__1_1_f_0(
  MR_Word LambdaHeadVar__1_17);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1617__1_2_f_0(
  MR_Word Context_13,
  MR_Word LambdaHeadVar__1_29);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__1588__1_3_p_0(
  MR_Word HeadVar__1_11);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1211__1_2_f_0(
  MR_Word Context_12,
  MR_Word LambdaHeadVar__1_47);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1174__1_1_f_0(
  MR_Word LambdaHeadVar__1_42);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1170__1_1_f_0(
  MR_Word LambdaHeadVar__1_38);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1166__1_1_f_0(
  MR_Word LambdaHeadVar__1_34);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1162__1_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1158__1_1_f_0(
  MR_Word LambdaHeadVar__1_26);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__913__1_2_p_0(
  MR_Word Incls_10,
  MR_Word HeadVar__2_20);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__743__1_1_f_0(
  MR_Word HeadVar__1_117);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__741__1_1_f_0(
  MR_Word HeadVar__1_109);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__739__1_1_f_0(
  MR_Word HeadVar__1_101);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__737__1_1_f_0(
  MR_Word HeadVar__1_95);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__735__1_1_f_0(
  MR_Word HeadVar__1_87);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__733__1_1_f_0(
  MR_Word HeadVar__1_79);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__731__1_1_f_0(
  MR_Word HeadVar__1_71);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__729__1_1_f_0(
  MR_Word HeadVar__1_62);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__719__1_1_f_0(
  MR_Word HeadVar__1_258);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__717__1_1_f_0(
  MR_Word HeadVar__1_250);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__715__1_1_f_0(
  MR_Word HeadVar__1_242);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__713__1_1_f_0(
  MR_Word HeadVar__1_236);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__711__1_1_f_0(
  MR_Word HeadVar__1_228);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__709__1_1_f_0(
  MR_Word HeadVar__1_220);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__707__1_1_f_0(
  MR_Word HeadVar__1_212);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__705__1_1_f_0(
  MR_Word HeadVar__1_204);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__703__1_1_f_0(
  MR_Word HeadVar__1_196);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__699__1_1_f_0(
  MR_Word HeadVar__1_184);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__696__1_1_f_0(
  MR_Word HeadVar__1_172);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__694__1_1_f_0(
  MR_Word HeadVar__1_164);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__682__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_126);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_54_56_50_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_126);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__597__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_157);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__571__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_128);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__533__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_200);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__487__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_160);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__346__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_302);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_52_54_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_302);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__345__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_297);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_52_53_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_297);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__322__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_241);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_50_50_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_241);

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
parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_3_p_0(
  MR_Word ItemFIM_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_finalise_4_p_0(
  MR_Word HeadVar__1_5,
  MR_Word ItemFinalise_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_initialise_4_p_0(
  MR_Word HeadVar__1_5,
  MR_Word ItemInitialise_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_instance_4_p_0(
  MR_Word HeadVar__1_5,
  MR_Word ItemInstance_6);

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decl_4_p_0(
  MR_Word Lang_5,
  MR_Word Decl_6);

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
parse_tree__parse_tree_out__mercury_output_item_promise_4_p_0(
  MR_Word HeadVar__1_5,
  MR_Word ItemPromise_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_sym_name_string_pair_3_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_unqual_sym_name_string_pair_3_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_foreign_enum_4_p_0(
  MR_Word TypeClassInfo_for_output_33,
  MR_Word _Info_5,
  MR_Word ItemForeignEnum_6,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_enums_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_enums_4_p_0(
  MR_Word TypeClassInfo_for_output_22,
  MR_Word Info_5,
  MR_Word CJCsEEnums_6,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_4_p_0(
  MR_Word Info_5,
  MR_Word ModeCtorAllDefns_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_4_p_0(
  MR_Word Info_5,
  MR_Word InstCtorAllDefns_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0(
  MR_Word Info_5,
  MR_Word TypeCtorAllDefns_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(
  MR_Word Info_5,
  MR_Word Avail_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(
  MR_Word Info_5,
  MR_Word ItemInclude_6);

static void MR_CALL 
parse_tree__parse_tree_out__write_import_use_map_entry_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ImportAndOrUse_6);

static void MR_CALL 
parse_tree__parse_tree_out__write_include_module_map_entry_4_p_0(
  MR_Word ModuleName_5,
  MR_Word InclInfo_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_3(
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
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_3(
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
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_2(
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
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_36(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_35(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_section_marker_3_p_0(
  MR_Word Section_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VersionNumbers_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_3(
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
parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(
  MR_String Decl_5,
  MR_Word ModuleName_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_105_110_97_108_105_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemFinalise_6);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemInitialise_6);

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
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_output_36,
  MR_Word ItemForeignExportEnum_6,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_output_33,
  MR_Word ItemForeignEnum_6,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17);

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
parse_tree__parse_tree_out__mercury_output_item_mode_decl_4_p_0(
  MR_Word Info_5,
  MR_Word ItemModeDecl_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(
  MR_Word Info_5,
  MR_Word ItemPredDecl_6);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
parse_tree__parse_tree_out__mercury_output_ctors_6_p_0(
  MR_Word VarSet_7,
  MR_Word First_8,
  MR_Word HeadCtor_9,
  MR_Word TailCtors_10);

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


static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[31][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[59][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[42][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[12][6];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[19][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[1][1];

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_8[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_9[3][9];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[3][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_11[13][4];


/* sealed */ struct parse_tree__parse_tree_out__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_5_0_s parse_tree__parse_tree_out_vector_common_5[4];



static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[31][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[24]))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 27 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 28 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 29 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 30 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[59][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[2])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4])),
    ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[2])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[3])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_19)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[4])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_20)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_22)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_24)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_25)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[7])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_27)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[8])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_29)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_30)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_31)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_32)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_34)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_36)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[7])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[8])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 39 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 41 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[28])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[29])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[12])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[34])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[14])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[15])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 56 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[16])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 57 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[17])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 58 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[18])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[42][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_c_java_csharp_erlang_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 23 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 24 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 25 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 26 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 27 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 28 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 29 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 30 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 31 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 32 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 33 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 34 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 35 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 36 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 37 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 38 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 39 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 40 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 41 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[12][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[19][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_11[13][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "use_module"))
  },
};


static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_5_0_s parse_tree__parse_tree_out_vector_common_5[4] = {
  /* row 0 */   {     (MR_String) ";" },
  /* row 1 */   {     (MR_String) "=>" },
  /* row 2 */   {     (MR_String) "some" },
  /* row 3 */   {     (MR_String) "{}" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_c_java_csharp_erlang_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 parse_tree__parse_tree_out____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out__parse_tree__parse_tree_out__type_ctor_info_output_parse_tree_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.parse_tree_out",
  (MR_String) "output_parse_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2012__1_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__4_31,
  MR_Box HeadVar__5_32,
  MR_Box * HeadVar__6_33)
{
  parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_output_25, TypeVarSet_6, VarNamePrint_7, HeadVar__4_31, HeadVar__5_32, HeadVar__6_33);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2010__1_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__4_26,
  MR_Box HeadVar__5_27,
  MR_Box * HeadVar__6_28)
{
  parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_output_25, TypeVarSet_6, VarNamePrint_7, HeadVar__4_26, HeadVar__5_27, HeadVar__6_28);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1954__1_4_p_0(
  MR_Word VarSet_13,
  MR_Word LambdaHeadVar__1_32)
{
  {
    MR_String VarName_19;

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_13, LambdaHeadVar__1_32, &VarName_19);
    mercury__io__write_string_3_p_0(VarName_19);
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1721__1_2_f_0(
  MR_Word Context_8,
  MR_Word LambdaHeadVar__1_18)
{
  {
    MR_Word LambdaHeadVar__2_19;

    {
      LambdaHeadVar__2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_19, 0) = ((MR_Box) (LambdaHeadVar__1_18));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_19, 1) = ((MR_Box) (Context_8));
    }
    return LambdaHeadVar__2_19;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1663__1_1_f_0(
  MR_Word LambdaHeadVar__1_17)
{
  {
    MR_Word LambdaHeadVar__2_18;
    MR_Word Var_19;
    MR_Word Var_20;

    Var_19 = mercury__term__coerce_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LambdaHeadVar__1_17);
    Var_20 = mercury__term__context_init_0_f_0();
    {
      LambdaHeadVar__2_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_18, 1) = ((MR_Box) (Var_20));
    }
    return LambdaHeadVar__2_18;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1617__1_2_f_0(
  MR_Word Context_13,
  MR_Word LambdaHeadVar__1_29)
{
  {
    MR_Word LambdaHeadVar__2_30;

    {
      LambdaHeadVar__2_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_30, 0) = ((MR_Box) (LambdaHeadVar__1_29));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_30, 1) = ((MR_Box) (Context_13));
    }
    return LambdaHeadVar__2_30;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__1588__1_3_p_0(
  MR_Word HeadVar__1_11)
{
  {
    MR_Box conv0_HeadVar__3_13;

    parse_tree__mercury_to_mercury__mercury_format_sym_name_arity_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), HeadVar__1_11, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__3_13);
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1211__1_2_f_0(
  MR_Word Context_12,
  MR_Word LambdaHeadVar__1_47)
{
  {
    MR_Word LambdaHeadVar__2_48;

    {
      LambdaHeadVar__2_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_48, 0) = ((MR_Box) (LambdaHeadVar__1_47));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_48, 1) = ((MR_Box) (Context_12));
    }
    return LambdaHeadVar__2_48;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1174__1_1_f_0(
  MR_Word LambdaHeadVar__1_42)
{
  {
    MR_Word LambdaHeadVar__2_43;
    MR_Word Var_44;
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 2))));
    MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 0))));
    MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 1))));
    MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 3))));
    MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 4))));
    MR_Integer Var_126 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 5))));

    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      LambdaHeadVar__2_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_43, 0) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_43, 1) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_43, 2) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_43, 3) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_43, 4) = ((MR_Box) (Var_125));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_43, 5) = ((MR_Box) (Var_126));
    }
    return LambdaHeadVar__2_43;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1170__1_1_f_0(
  MR_Word LambdaHeadVar__1_38)
{
  {
    MR_Word LambdaHeadVar__2_39;
    MR_Word Var_40;
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_38, (MR_Integer) 2))));
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_38, (MR_Integer) 0))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_38, (MR_Integer) 1))));
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_38, (MR_Integer) 3))));
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_38, (MR_Integer) 4))));
    MR_Integer Var_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_38, (MR_Integer) 5))));

    Var_40 = (MR_Word) ((MR_Word) (Var_41));
    {
      LambdaHeadVar__2_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_39, 0) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_39, 1) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_39, 2) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_39, 3) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_39, 4) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_39, 5) = ((MR_Box) (Var_115));
    }
    return LambdaHeadVar__2_39;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1166__1_1_f_0(
  MR_Word LambdaHeadVar__1_34)
{
  {
    MR_Word LambdaHeadVar__2_35;
    MR_Word Var_36;
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_34, (MR_Integer) 2))));
    MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_34, (MR_Integer) 0))));
    MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_34, (MR_Integer) 1))));
    MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_34, (MR_Integer) 3))));
    MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_34, (MR_Integer) 4))));
    MR_Integer Var_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_34, (MR_Integer) 5))));

    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (Var_37));
    }
    {
      LambdaHeadVar__2_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_35, 0) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_35, 1) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_35, 2) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_35, 3) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_35, 4) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_35, 5) = ((MR_Box) (Var_104));
    }
    return LambdaHeadVar__2_35;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1162__1_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  {
    MR_Word LambdaHeadVar__2_31;
    MR_Word Var_32;
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 2))));
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 0))));
    MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 1))));
    MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 3))));
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 4))));
    MR_Integer Var_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 5))));

    Var_32 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_33)));
    {
      LambdaHeadVar__2_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_31, 0) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_31, 1) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_31, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_31, 3) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_31, 4) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_31, 5) = ((MR_Box) (Var_93));
    }
    return LambdaHeadVar__2_31;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1158__1_1_f_0(
  MR_Word LambdaHeadVar__1_26)
{
  {
    MR_Word LambdaHeadVar__2_27;
    MR_Word Var_28;
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 2))));
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 0))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 1))));
    MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 3))));
    MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 4))));
    MR_Integer Var_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 5))));

    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      LambdaHeadVar__2_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, 1) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, 2) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, 3) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, 4) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, 5) = ((MR_Box) (Var_82));
    }
    return LambdaHeadVar__2_27;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__913__1_2_p_0(
  MR_Word Incls_10,
  MR_Word HeadVar__2_20)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[19]), ((MR_Box) (Incls_10)), ((MR_Box) (HeadVar__2_20)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__743__1_1_f_0(
  MR_Word HeadVar__1_117)
{
  {
    MR_Word HeadVar__2_118;
    MR_Box conv0_HeadVar__2_118;

    conv0_HeadVar__2_118 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), HeadVar__1_117);
    HeadVar__2_118 = ((MR_Word) (conv0_HeadVar__2_118));
    return HeadVar__2_118;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__741__1_1_f_0(
  MR_Word HeadVar__1_109)
{
  {
    MR_Word HeadVar__2_110;
    MR_Box conv0_HeadVar__2_110;

    conv0_HeadVar__2_110 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), HeadVar__1_109);
    HeadVar__2_110 = ((MR_Word) (conv0_HeadVar__2_110));
    return HeadVar__2_110;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__739__1_1_f_0(
  MR_Word HeadVar__1_101)
{
  {
    MR_Word HeadVar__2_102;
    MR_Box conv0_HeadVar__2_102;

    conv0_HeadVar__2_102 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_101);
    HeadVar__2_102 = ((MR_Word) (conv0_HeadVar__2_102));
    return HeadVar__2_102;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__737__1_1_f_0(
  MR_Word HeadVar__1_95)
{
  {
    MR_Word HeadVar__2_96;
    MR_Box conv0_HeadVar__2_96;

    conv0_HeadVar__2_96 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_95);
    HeadVar__2_96 = ((MR_Word) (conv0_HeadVar__2_96));
    return HeadVar__2_96;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__735__1_1_f_0(
  MR_Word HeadVar__1_87)
{
  {
    MR_Word HeadVar__2_88;
    MR_Box conv0_HeadVar__2_88;

    conv0_HeadVar__2_88 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), HeadVar__1_87);
    HeadVar__2_88 = ((MR_Word) (conv0_HeadVar__2_88));
    return HeadVar__2_88;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__733__1_1_f_0(
  MR_Word HeadVar__1_79)
{
  {
    MR_Word HeadVar__2_80;
    MR_Box conv0_HeadVar__2_80;

    conv0_HeadVar__2_80 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), HeadVar__1_79);
    HeadVar__2_80 = ((MR_Word) (conv0_HeadVar__2_80));
    return HeadVar__2_80;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__731__1_1_f_0(
  MR_Word HeadVar__1_71)
{
  {
    MR_Word HeadVar__2_72;
    MR_Box conv0_HeadVar__2_72;

    conv0_HeadVar__2_72 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), HeadVar__1_71);
    HeadVar__2_72 = ((MR_Word) (conv0_HeadVar__2_72));
    return HeadVar__2_72;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__729__1_1_f_0(
  MR_Word HeadVar__1_62)
{
  {
    MR_Word HeadVar__2_63;
    MR_Box conv0_HeadVar__2_63;

    conv0_HeadVar__2_63 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), HeadVar__1_62);
    HeadVar__2_63 = ((MR_Word) (conv0_HeadVar__2_63));
    return HeadVar__2_63;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__719__1_1_f_0(
  MR_Word HeadVar__1_258)
{
  {
    MR_Word HeadVar__2_259;
    MR_Box conv0_HeadVar__2_259;

    conv0_HeadVar__2_259 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), HeadVar__1_258);
    HeadVar__2_259 = ((MR_Word) (conv0_HeadVar__2_259));
    return HeadVar__2_259;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__717__1_1_f_0(
  MR_Word HeadVar__1_250)
{
  {
    MR_Word HeadVar__2_251;
    MR_Box conv0_HeadVar__2_251;

    conv0_HeadVar__2_251 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), HeadVar__1_250);
    HeadVar__2_251 = ((MR_Word) (conv0_HeadVar__2_251));
    return HeadVar__2_251;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__715__1_1_f_0(
  MR_Word HeadVar__1_242)
{
  {
    MR_Word HeadVar__2_243;
    MR_Box conv0_HeadVar__2_243;

    conv0_HeadVar__2_243 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_242);
    HeadVar__2_243 = ((MR_Word) (conv0_HeadVar__2_243));
    return HeadVar__2_243;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__713__1_1_f_0(
  MR_Word HeadVar__1_236)
{
  {
    MR_Word HeadVar__2_237;
    MR_Box conv0_HeadVar__2_237;

    conv0_HeadVar__2_237 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_236);
    HeadVar__2_237 = ((MR_Word) (conv0_HeadVar__2_237));
    return HeadVar__2_237;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__711__1_1_f_0(
  MR_Word HeadVar__1_228)
{
  {
    MR_Word HeadVar__2_229;
    MR_Box conv0_HeadVar__2_229;

    conv0_HeadVar__2_229 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), HeadVar__1_228);
    HeadVar__2_229 = ((MR_Word) (conv0_HeadVar__2_229));
    return HeadVar__2_229;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__709__1_1_f_0(
  MR_Word HeadVar__1_220)
{
  {
    MR_Word HeadVar__2_221;
    MR_Box conv0_HeadVar__2_221;

    conv0_HeadVar__2_221 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), HeadVar__1_220);
    HeadVar__2_221 = ((MR_Word) (conv0_HeadVar__2_221));
    return HeadVar__2_221;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__707__1_1_f_0(
  MR_Word HeadVar__1_212)
{
  {
    MR_Word HeadVar__2_213;
    MR_Box conv0_HeadVar__2_213;

    conv0_HeadVar__2_213 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), HeadVar__1_212);
    HeadVar__2_213 = ((MR_Word) (conv0_HeadVar__2_213));
    return HeadVar__2_213;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__705__1_1_f_0(
  MR_Word HeadVar__1_204)
{
  {
    MR_Word HeadVar__2_205;
    MR_Box conv0_HeadVar__2_205;

    conv0_HeadVar__2_205 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), HeadVar__1_204);
    HeadVar__2_205 = ((MR_Word) (conv0_HeadVar__2_205));
    return HeadVar__2_205;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__703__1_1_f_0(
  MR_Word HeadVar__1_196)
{
  {
    MR_Word HeadVar__2_197;
    MR_Box conv0_HeadVar__2_197;

    conv0_HeadVar__2_197 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), HeadVar__1_196);
    HeadVar__2_197 = ((MR_Word) (conv0_HeadVar__2_197));
    return HeadVar__2_197;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__699__1_1_f_0(
  MR_Word HeadVar__1_184)
{
  {
    MR_Word HeadVar__2_185;
    MR_Box conv0_HeadVar__2_185;

    conv0_HeadVar__2_185 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), HeadVar__1_184);
    HeadVar__2_185 = ((MR_Word) (conv0_HeadVar__2_185));
    return HeadVar__2_185;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__696__1_1_f_0(
  MR_Word HeadVar__1_172)
{
  {
    MR_Word HeadVar__2_173;
    MR_Box conv0_HeadVar__2_173;

    conv0_HeadVar__2_173 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), HeadVar__1_172);
    HeadVar__2_173 = ((MR_Word) (conv0_HeadVar__2_173));
    return HeadVar__2_173;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__694__1_1_f_0(
  MR_Word HeadVar__1_164)
{
  {
    MR_Word HeadVar__2_165;
    MR_Box conv0_HeadVar__2_165;

    conv0_HeadVar__2_165 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), HeadVar__1_164);
    HeadVar__2_165 = ((MR_Word) (conv0_HeadVar__2_165));
    return HeadVar__2_165;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__682__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_126)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_54_56_50_95_95_49_95_95_91_49_93_95_48_4_p_0(HeadVar__2_126);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_54_56_50_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_126)
{
  {
    MR_Box conv0_HeadVar__4_128;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), HeadVar__2_126, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_128);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__597__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_157)
{
  {
    MR_Box conv0_HeadVar__4_159;

    parse_tree__parse_tree_out__mercury_output_foreign_enums_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Info_5, HeadVar__2_157, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_159);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__571__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_128)
{
  {
    MR_Box conv0_HeadVar__4_130;

    parse_tree__parse_tree_out__mercury_output_foreign_enums_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Info_5, HeadVar__2_128, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_130);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__533__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_200)
{
  {
    MR_Box conv0_HeadVar__4_202;

    parse_tree__parse_tree_out__mercury_output_foreign_enums_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Info_5, HeadVar__2_200, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_202);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__487__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_160)
{
  {
    MR_Box conv0_HeadVar__4_162;

    parse_tree__parse_tree_out__mercury_output_foreign_enums_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Info_5, HeadVar__2_160, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_162);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__346__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_302)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_52_54_95_95_49_95_95_91_49_93_95_48_4_p_0(HeadVar__2_302);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_52_54_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_302)
{
  {
    MR_Box conv0_HeadVar__4_304;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), HeadVar__2_302, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_304);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__345__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_297)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_52_53_95_95_49_95_95_91_49_93_95_48_4_p_0(HeadVar__2_297);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_52_53_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_297)
{
  {
    MR_Box conv0_HeadVar__4_299;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), HeadVar__2_297, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_299);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__322__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_241)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_50_50_95_95_49_95_95_91_49_93_95_48_4_p_0(HeadVar__2_241);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_50_50_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_241)
{
  {
    MR_Box conv0_HeadVar__4_243;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), HeadVar__2_241, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_243);
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

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
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

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_3_p_0(
  MR_Word ItemFIM_4)
{
  {
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemFIM_4, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFIM_4, (MR_Integer) 1))));
    MR_Word FIMSpec_10;

    {
      FIMSpec_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIMSpec_10, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
      MR_hl_field(MR_mktag(0), FIMSpec_10, 1) = ((MR_Box) (ModuleName_7));
    }
    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(FIMSpec_10);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_finalise_4_p_0(
  MR_Word HeadVar__1_5,
  MR_Word ItemFinalise_6)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_105_110_97_108_105_115_101_95_95_91_49_93_95_48_4_p_0(ItemFinalise_6);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_initialise_4_p_0(
  MR_Word HeadVar__1_5,
  MR_Word ItemInitialise_6)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_4_p_0(ItemInitialise_6);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_instance_4_p_0(
  MR_Word HeadVar__1_5,
  MR_Word ItemInstance_6)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(ItemInstance_6);
}

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decl_4_p_0(
  MR_Word Lang_5,
  MR_Word Decl_6)
{
  {
    MR_bool succeeded;

    mercury__io__write_string_3_p_0((MR_String) "\t");
    if (((MR_tag((MR_Word) Decl_6)) == (MR_Integer) 1))
    {
      MR_Word ModeInfo_24 = (MR_Word) (MR_body((MR_Word) (Decl_6), (MR_Integer) 1));
      MR_Word Modes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_24, (MR_Integer) 2))));
      MR_Word SymName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_24, (MR_Integer) 0))));
      MR_Word PredOrFunc_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_24, (MR_Integer) 1))));
      MR_Word WithInst_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_24, (MR_Integer) 3))));
      MR_Word MaybeDetism_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_24, (MR_Integer) 4))));
      MR_Word InstVarSet_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_24, (MR_Integer) 5))));
      MR_String Name_58;
      MR_Word Var_32;

      Name_58 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_52);
      succeeded = (WithInst_54 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (PredOrFunc_53 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredOrFunc_53, (MR_Integer) 0))));
          succeeded = (Var_32 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word FuncModes_26;
        MR_Word RetMode_27;
        MR_Word Var_33;
        MR_Box conv0_RetMode_27;
        MR_Box conv1_STATE_VARIABLE_IO_29;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_25, &FuncModes_26, &conv0_RetMode_27);
        RetMode_27 = ((MR_Word) (conv0_RetMode_27));
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Name_58));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Lang_5, InstVarSet_56, Var_33, FuncModes_26, RetMode_27, MaybeDetism_55, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29);
      }
      else
      {
        MR_Word Var_37;
        MR_Box conv2_STATE_VARIABLE_IO_29;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Name_58));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Lang_5, InstVarSet_56, Var_37, Modes_25, WithInst_54, MaybeDetism_55, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_29);
      }
    }
    else
    {
      MR_Word PredOrFuncInfo_8 = (MR_Word) ((MR_Word) (Decl_6));
      MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 0))));
      MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word TypesAndModes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 2))));
      MR_Word WithType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 3))));
      MR_Word WithInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 4))));
      MR_Word MaybeDetism_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 5))));
      MR_Word TypeVarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 6))));
      MR_Word InstVarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 7))));
      MR_Word ExistQVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 8))));
      MR_Word Purity_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 9))) & (MR_Integer) 3);
      MR_Word Constraints_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 10))));
      MR_String Name_21;

      Name_21 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_9);
      succeeded = (PredOrFunc_10 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (WithType_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word FuncTypesAndModes_22;
        MR_Word RetTypeAndMode_23;
        MR_Word Var_41;
        MR_Box conv3_RetTypeAndMode_23;
        MR_Box conv4_STATE_VARIABLE_IO_29;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_11, &FuncTypesAndModes_22, &conv3_RetTypeAndMode_23);
        RetTypeAndMode_23 = ((MR_Word) (conv3_RetTypeAndMode_23));
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Name_21));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Lang_5, TypeVarSet_15, InstVarSet_16, ExistQVars_17, Var_41, FuncTypesAndModes_22, RetTypeAndMode_23, MaybeDetism_14, Purity_18, Constraints_19, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_29);
      }
      else
      {
        MR_Word Var_46;
        MR_Box conv5_STATE_VARIABLE_IO_29;

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Name_21));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Lang_5, TypeVarSet_15, InstVarSet_16, PredOrFunc_10, ExistQVars_17, Var_46, TypesAndModes_11, WithType_12, WithInst_13, MaybeDetism_14, Purity_18, Constraints_19, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_29);
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2012__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2010__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
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
    MR_Word Domain_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Range_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_14_14;
    MR_Word Var_16;
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Word Var_21;
    MR_Box STATE_VARIABLE_U_22_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_0_11, &STATE_VARIABLE_U_14_14);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeClassInfo_for_output_25));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (TypeVarSet_6));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (VarNamePrint_7));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 27))));
    func_1(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[26])), ((MR_Box) (Domain_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_16)), STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_17_17);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) " -> ")), STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_19_19);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (TypeClassInfo_for_output_25));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (TypeVarSet_6));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (VarNamePrint_7));
    }
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 27))));
    func_3(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[26])), ((MR_Box) (Range_9)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_21)), STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_22_22);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_22_22, STATE_VARIABLE_U_12);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_promise_4_p_0(
  MR_Word HeadVar__1_5,
  MR_Word ItemPromise_6)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(ItemPromise_6);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_sym_name_string_pair_3_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8)
{
  {
    MR_Word SymName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String String_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_10_10;
    MR_Box STATE_VARIABLE_U_12_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_14, (MR_Integer) 0, SymName_4, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_10_10);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) ((MR_String) " - ")), STATE_VARIABLE_U_10_10, &STATE_VARIABLE_U_12_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 21))));
    func_1(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) (String_5)), STATE_VARIABLE_U_12_12, STATE_VARIABLE_U_8);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_unqual_sym_name_string_pair_3_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  {
    MR_Word SymName0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String String_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Name_7;
    MR_Word SymName_8;
    MR_Box STATE_VARIABLE_U_12_12;
    MR_Box STATE_VARIABLE_U_14_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_4);
    {
      SymName_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SymName_8, 0) = ((MR_Box) (Name_7));
    }
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_16, (MR_Integer) 0, SymName_8, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_12_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) ((MR_String) " - ")), STATE_VARIABLE_U_12_12, &STATE_VARIABLE_U_14_14);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 21))));
    func_1(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (String_5)), STATE_VARIABLE_U_14_14, STATE_VARIABLE_U_10);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_foreign_enum_4_p_0(
  MR_Word TypeClassInfo_for_output_33,
  MR_Word _Info_5,
  MR_Word ItemForeignEnum_6,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_output_33, ItemForeignEnum_6, STATE_VARIABLE_U_0_16, STATE_VARIABLE_U_17);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_enums_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_foreign_enum_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_enums_4_p_0(
  MR_Word TypeClassInfo_for_output_22,
  MR_Word Info_5,
  MR_Word CJCsEEnums_6,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  {
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_40_40;
    MR_Word CEnums_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEEnums_6, (MR_Integer) 0))));
    MR_Word JavaEnums_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEEnums_6, (MR_Integer) 1))));
    MR_Word CsharpEnums_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEEnums_6, (MR_Integer) 2))));
    MR_Word ErlangEnums_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEEnums_6, (MR_Integer) 3))));
    MR_Word Var_14;
    MR_Box STATE_VARIABLE_U_15_15;
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_19_19;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_foreign_enums_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeClassInfo_for_output_22));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Info_5));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_output_22, (MR_Integer) 1, &TypeInfo_28_28);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), TypeInfo_28_28, Var_14, CEnums_8, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_15_15);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_output_22, (MR_Integer) 1, &TypeInfo_32_32);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), TypeInfo_32_32, Var_14, JavaEnums_9, STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_17_17);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_output_22, (MR_Integer) 1, &TypeInfo_36_36);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), TypeInfo_36_36, Var_14, CsharpEnums_10, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_19_19);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_output_22, (MR_Integer) 1, &TypeInfo_40_40);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), TypeInfo_40_40, Var_14, ErlangEnums_11, STATE_VARIABLE_U_19_19, STATE_VARIABLE_U_13);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_4_p_0(
  MR_Word Info_5,
  MR_Word ModeCtorAllDefns_6)
{
  {
    MR_Word Abs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtorAllDefns_6, (MR_Integer) 0))));
    MR_Word Eqv_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtorAllDefns_6, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_13_13;
    MR_Box conv1_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[19]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, Abs_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13_13);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, Eqv_9, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_4_p_0(
  MR_Word Info_5,
  MR_Word InstCtorAllDefns_6)
{
  {
    MR_Word Abs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtorAllDefns_6, (MR_Integer) 0))));
    MR_Word Eqv_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtorAllDefns_6, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_13_13;
    MR_Box conv1_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[18]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, Abs_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13_13);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, Eqv_9, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_43;

    conv4_LambdaHeadVar__2_43 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1174__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_43));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_39;

    conv3_LambdaHeadVar__2_39 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1170__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_39));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_35;

    conv2_LambdaHeadVar__2_35 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1166__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_35));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_31;

    conv1_LambdaHeadVar__2_31 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1162__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_31));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_27;

    conv0_LambdaHeadVar__2_27 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1158__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0(
  MR_Word Info_5,
  MR_Word TypeCtorAllDefns_6)
{
  {
    MR_Word SolverAbs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_6, (MR_Integer) 0))));
    MR_Word SolverNonAbs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_6, (MR_Integer) 1))));
    MR_Word StdAbs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_6, (MR_Integer) 2))));
    MR_Word StdEqv_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_6, (MR_Integer) 3))));
    MR_Word StdDu_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_6, (MR_Integer) 4))));
    MR_Word CJCsE_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_6, (MR_Integer) 5))));
    MR_Word ForeignC_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsE_13, (MR_Integer) 0))));
    MR_Word ForeignJava_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsE_13, (MR_Integer) 1))));
    MR_Word ForeignCsharp_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsE_13, (MR_Integer) 2))));
    MR_Word ForeignErlang_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsE_13, (MR_Integer) 3))));
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Box conv5_STATE_VARIABLE_IO_48_48;
    MR_Box conv6_STATE_VARIABLE_IO_51_51;
    MR_Box conv7_STATE_VARIABLE_IO_54_54;
    MR_Box conv8_STATE_VARIABLE_IO_57_57;
    MR_Box conv9_STATE_VARIABLE_IO_60_60;
    MR_Box conv10_STATE_VARIABLE_IO_63_63;
    MR_Box conv11_STATE_VARIABLE_IO_66_66;
    MR_Box conv12_STATE_VARIABLE_IO_69_69;
    MR_Box conv13_STATE_VARIABLE_IO_25;

    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[16]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Info_5));
    }
    Var_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[20]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[54]), SolverAbs_8);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, Var_47, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_48_48);
    Var_50 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[21]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[55]), SolverNonAbs_9);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, Var_50, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_51_51);
    Var_53 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[20]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[54]), StdAbs_10);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, Var_53, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_54_54);
    Var_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[22]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[56]), StdEqv_11);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, Var_56, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_57_57);
    Var_59 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[23]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[57]), StdDu_12);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, Var_59, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_60_60);
    Var_62 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[25]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[58]), ForeignC_14);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, Var_62, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_63_63);
    Var_65 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[25]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[58]), ForeignJava_15);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, Var_65, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_66_66);
    Var_68 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[25]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[58]), ForeignCsharp_16);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, Var_68, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_69_69);
    Var_71 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[25]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[58]), ForeignErlang_17);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, Var_71, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_25);
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

    if (((MR_tag((MR_Word) Avail_6)) == (MR_Integer) 0))
    {
      MR_Word Var_15 = (MR_Word) ((MR_Word) (Avail_6));

      ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
      Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
      Decl_11 = (MR_String) "import_module";
    }
    else
    {
      MR_Word Var_14 = (MR_Word) (MR_body((MR_Word) (Avail_6), (MR_Integer) 1));

      ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
      Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
      Decl_11 = (MR_String) "use_module";
    }
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_9);
    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(Decl_11, ModuleName_8);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(
  MR_Word Info_5,
  MR_Word ItemInclude_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInclude_6, (MR_Integer) 0))));
    MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInclude_6, (MR_Integer) 1))));

    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_9);
    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "include_module", ModuleName_8);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__write_import_use_map_entry_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ImportAndOrUse_6)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "% ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_5);
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    if (((MR_tag((MR_Word) ImportAndOrUse_6)) == (MR_Integer) 0))
    {
      MR_Word SectionImportAndOrUse_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportAndOrUse_6, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) SectionImportAndOrUse_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "int_import");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "int_use");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_3_p_0((MR_String) "imp_import");
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SectionImportAndOrUse_8, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "imp_use");
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_3_p_0((MR_String) "int_use_imp_import");
              break;
          }
          break;
      }
    }
    else
    {
      MR_Word ImplicitImportAndOrUse_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ImportAndOrUse_6, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (ImplicitImportAndOrUse_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          mercury__io__write_string_3_p_0((MR_String) "implicit_imp_use");
          break;
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "implicit_int_import");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "implicit_int_use");
          break;
      }
    }
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__write_include_module_map_entry_4_p_0(
  MR_Word ModuleName_5,
  MR_Word InclInfo_6)
{
  {
    MR_Word Section_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InclInfo_6, (MR_Integer) 0))) & (MR_Integer) 1);

    mercury__io__write_string_3_p_0((MR_String) "% ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_5);
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    switch (Section_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_3_p_0((MR_String) "implementation");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_3_p_0((MR_String) "interface");
        break;
    }
    mercury__io__nl_2_p_0();
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(
  MR_Word FIMSpec_4)
{
  {
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMSpec_4, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIMSpec_4, (MR_Integer) 1))));
    MR_Box conv0_STATE_VARIABLE_IO_12_12;

    mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_import_module(");
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Lang_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, ModuleName_7);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
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

    parse_tree__parse_tree_out_clause__output_instance_method_clause_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0(
  MR_Word Method_4)
{
  {
    MR_Word PredOrFunc_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method_4, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word MethodName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_4, (MR_Integer) 1))));
    MR_Word Defn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_4, (MR_Integer) 2))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Method_4, (MR_Integer) 3))));

    if (((MR_tag((MR_Word) Defn_8)) == (MR_Integer) 1))
    {
      MR_Word Items_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Defn_8, (MR_Integer) 0))));
      MR_Word Var_18;

      mercury__io__write_string_3_p_0((MR_String) "\t(");
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[41]));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (MethodName_7));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), Items_12, (MR_String) "),\n\t(", Var_18);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
    {
      MR_Word PredName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_8, (MR_Integer) 0))));

      mercury__io__write_char_3_p_0((MR_Char) 9);
      switch (PredOrFunc_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "func(");
          break;
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "pred(");
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

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_blocks_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word IntForOptItemBlock_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word IntForOptItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0(Info_1, IntForOptItemBlock_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = IntForOptItemBlocks_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_3_p_0(((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0(
  MR_Word Info_5,
  MR_Word IntForOptItemBlock_6)
{
  {
    MR_Word IntForOptSectionKind_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptItemBlock_6, (MR_Integer) 1))));
    MR_Word Incls_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptItemBlock_6, (MR_Integer) 2))));
    MR_Word Avails_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptItemBlock_6, (MR_Integer) 3))));
    MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptItemBlock_6, (MR_Integer) 4))));
    MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptItemBlock_6, (MR_Integer) 5))));
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptSectionKind_9, (MR_Integer) 0))));
    MR_Word IntFileKind_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntForOptSectionKind_9, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_String ExtStr_43;
    MR_String Var_47;
    MR_Word _Ext_44;
    MR_Box conv0_STATE_VARIABLE_IO_18_18;
    MR_Box conv1_STATE_VARIABLE_IO_20_20;
    MR_Box conv2_STATE_VARIABLE_IO_22_22;

    parse_tree__file_kind__int_file_kind_to_extension_3_p_0(IntFileKind_42, &ExtStr_43, &_Ext_44);
    mercury__io__write_string_3_p_0((MR_String) ":- ioms_opt_imported(");
    Var_47 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_41);
    mercury__io__write_string_3_p_0(Var_47);
    mercury__io__write_string_3_p_0(ExtStr_43);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Incls_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_18_18);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, Avails_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[53]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22_22);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_13);
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
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word OptItemBlock_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word OptItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0(Info_1, OptItemBlock_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = OptItemBlocks_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_3_p_0(((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__913__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_Word OptSectionKind_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptItemBlock_6, (MR_Integer) 1))));
    MR_Word Incls_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptItemBlock_6, (MR_Integer) 2))));
    MR_Word Avails_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptItemBlock_6, (MR_Integer) 3))));
    MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptItemBlock_6, (MR_Integer) 4))));
    MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptItemBlock_6, (MR_Integer) 5))));
    MR_Word Var_17;
    MR_Word Var_21;
    MR_Word ModuleName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptSectionKind_9, (MR_Integer) 0))));
    MR_Word OptFileKind_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptSectionKind_9, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_String ExtStr_42;
    MR_String Var_46;
    MR_Word _Ext_43;
    MR_Box conv0_STATE_VARIABLE_IO_22_22;
    MR_Box conv1_STATE_VARIABLE_IO_24_24;

    parse_tree__file_kind__opt_file_kind_to_extension_3_p_0(OptFileKind_41, &ExtStr_42, &_Ext_43);
    mercury__io__write_string_3_p_0((MR_String) ":- oms_opt_imported(");
    Var_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_40);
    mercury__io__write_string_3_p_0(Var_46);
    mercury__io__write_string_3_p_0(ExtStr_42);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[13]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Incls_10));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140parse_tree.parse_tree_out.mercury_output_opt_item_block\'/4", (MR_String) "Incls != []");
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, Avails_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_22_22);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[52]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_13);
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
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word IntItemBlock_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word IntItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0(Info_1, IntItemBlock_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = IntItemBlocks_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_3_p_0(((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0(
  MR_Word Info_5,
  MR_Word IntItemBlock_6)
{
  {
    MR_Word IntSectionKind_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntItemBlock_6, (MR_Integer) 1))));
    MR_Word Incls_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntItemBlock_6, (MR_Integer) 2))));
    MR_Word Avails_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntItemBlock_6, (MR_Integer) 3))));
    MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntItemBlock_6, (MR_Integer) 4))));
    MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntItemBlock_6, (MR_Integer) 5))));
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Box conv0_STATE_VARIABLE_IO_18_18;
    MR_Box conv1_STATE_VARIABLE_IO_20_20;
    MR_Box conv2_STATE_VARIABLE_IO_22_22;

    if (((MR_tag((MR_Word) IntSectionKind_9)) == (MR_Integer) 1))
    {
      MR_String Var_49;
      MR_Word ModuleName_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntSectionKind_9, (MR_Integer) 0))));
      MR_Word IntFileKind_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntSectionKind_9, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_String ExtStr_73;
      MR_Word _Ext_70;

      parse_tree__file_kind__int_file_kind_to_extension_3_p_0(IntFileKind_72, &ExtStr_73, &_Ext_70);
      mercury__io__write_string_3_p_0((MR_String) ":- ims_abstract_imported(");
      Var_49 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_71);
      mercury__io__write_string_3_p_0(Var_49);
      mercury__io__write_string_3_p_0(ExtStr_73);
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    else
    {
      MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntSectionKind_9, (MR_Integer) 0))));
      MR_Word IntFileKind_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSectionKind_9, (MR_Integer) 1))) >> 5)) & (MR_Integer) 3);
      MR_Word ImportLocn_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSectionKind_9, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
      MR_Word ImportedOrUsed_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSectionKind_9, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_String ExtStr_45;
      MR_String Var_62;
      MR_Word _Ext_46;

      parse_tree__file_kind__int_file_kind_to_extension_3_p_0(IntFileKind_42, &ExtStr_45, &_Ext_46);
      switch (ImportedOrUsed_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) ":- ims_imported");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) ":- ims_used");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_3_p_0((MR_String) ":- ims_used_and_imported");
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "(");
      Var_62 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_41);
      mercury__io__write_string_3_p_0(Var_62);
      mercury__io__write_string_3_p_0(ExtStr_45);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0), ((MR_Box) (ImportLocn_43)));
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Incls_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_18_18);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, Avails_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[51]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22_22);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_13);
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
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word SrcItemBlock_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word SrcItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0(Info_1, SrcItemBlock_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SrcItemBlocks_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_3_p_0(((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0(
  MR_Word Info_5,
  MR_Word SrcItemBlock_6)
{
  {
    MR_Word SrcSectionKind_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_6, (MR_Integer) 1))));
    MR_Word Incls_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_6, (MR_Integer) 2))));
    MR_Word Avails_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_6, (MR_Integer) 3))));
    MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_6, (MR_Integer) 4))));
    MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_6, (MR_Integer) 5))));
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Box conv0_STATE_VARIABLE_IO_18_18;
    MR_Box conv1_STATE_VARIABLE_IO_20_20;
    MR_Box conv2_STATE_VARIABLE_IO_22_22;

    switch (SrcSectionKind_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        mercury__io__write_string_3_p_0((MR_String) ":- ams_impl_but_exported_to_submodules.\n");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
        break;
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Incls_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_18_18);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, Avails_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[50]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22_22);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_13);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_int_for_opt_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_indirect_int_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_direct_int_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_ancestor_int_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0(
  MR_Word Info_5,
  MR_Word AugCompUnit_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 0))));
    MR_Word ModuleVersionNumbers_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 2))));
    MR_Word ParseTreeModuleSrc_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 3))));
    MR_Word AncestorIntSpecs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 4))));
    MR_Word DirectIntSpecs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 5))));
    MR_Word IndirectIntSpecs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 6))));
    MR_Word PlainOptSpecs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 7))));
    MR_Word TransOptSpecs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 8))));
    MR_Word IntForOptSpecs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 9))));
    MR_Word Var_33;
    MR_Word Var_37;
    MR_Word Var_41;
    MR_Word Var_45;
    MR_Word Var_49;
    MR_Word Var_53;
    MR_Box conv0_STATE_VARIABLE_IO_27_27;
    MR_Box conv1_STATE_VARIABLE_IO_34_34;
    MR_Box conv2_STATE_VARIABLE_IO_38_38;
    MR_Box conv3_STATE_VARIABLE_IO_42_42;
    MR_Box conv4_STATE_VARIABLE_IO_46_46;
    MR_Box conv5_STATE_VARIABLE_IO_50_50;
    MR_Box conv6_STATE_VARIABLE_IO_19;

    mercury__io__write_string_3_p_0((MR_String) "% augmented compilation unit\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "module", ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) "% The module version numbers.\n");
    mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[49]), ModuleVersionNumbers_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_27_27);
    mercury__io__write_string_3_p_0((MR_String) "% The main module.\n");
    parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0(Info_5, ParseTreeModuleSrc_11);
    mercury__io__write_string_3_p_0((MR_String) "% The ancestor interfaces.\n");
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[35]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_33, AncestorIntSpecs_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
    mercury__io__write_string_3_p_0((MR_String) "% The directly imported interfaces.\n");
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[36]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_37, DirectIntSpecs_13, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_38_38);
    mercury__io__write_string_3_p_0((MR_String) "% The indirectly imported interfaces.\n");
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[37]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_41, IndirectIntSpecs_14, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_42_42);
    mercury__io__write_string_3_p_0((MR_String) "% The plain optimization files.\n");
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[38]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_45, PlainOptSpecs_15, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_46_46);
    mercury__io__write_string_3_p_0((MR_String) "% The transitive optimization files.\n");
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[39]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, TransOptSpecs_16, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_50_50);
    mercury__io__write_string_3_p_0((MR_String) "% The interface item blocks for optimization.\n");
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[40]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_53, IntForOptSpecs_17, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_19);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_compilation_unit_4_p_0(
  MR_Word Info_5,
  MR_Word CompUnit_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompUnit_6, (MR_Integer) 0))));
    MR_Word ItemBlocks_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompUnit_6, (MR_Integer) 2))));

    mercury__io__write_string_3_p_0((MR_String) "% raw compilation unit\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "module", ModuleName_8);
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
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word RawItemBlock_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word RawItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(Info_1, RawItemBlock_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RawItemBlocks_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_3_p_0(((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(
  MR_Word Info_5,
  MR_Word RawItemBlock_6)
{
  {
    MR_Word SectionKind_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 1))));
    MR_Word Incls_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 2))));
    MR_Word Avails_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 3))));
    MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 4))));
    MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 5))));
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Box conv0_STATE_VARIABLE_IO_18_18;
    MR_Box conv1_STATE_VARIABLE_IO_20_20;
    MR_Box conv2_STATE_VARIABLE_IO_22_22;

    switch (SectionKind_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
        break;
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Incls_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_18_18);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, Avails_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[48]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22_22);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_13);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_spec_4_p_0(
  MR_Word Info_5,
  MR_Word ForOptIntSpec_6)
{
  switch (MR_tag((MR_Word) ForOptIntSpec_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForOptIntSpec_6, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0(Info_5, ParseTreeInt0_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForOptIntSpec_6, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0(Info_5, ParseTreeInt1_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForOptIntSpec_6, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0(Info_5, ParseTreeInt2_12);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_indirect_int_spec_4_p_0(
  MR_Word Info_5,
  MR_Word IndirectIntSpec_6)
{
  if (((MR_tag((MR_Word) IndirectIntSpec_6)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectIntSpec_6, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0(Info_5, ParseTreeInt2_8);
  }
  else
  {
    MR_Word ParseTreeInt3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IndirectIntSpec_6, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0(Info_5, ParseTreeInt3_10);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_int_spec_4_p_0(
  MR_Word Info_5,
  MR_Word DirectIntSpec_6)
{
  if (((MR_tag((MR_Word) DirectIntSpec_6)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectIntSpec_6, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0(Info_5, ParseTreeInt1_8);
  }
  else
  {
    MR_Word ParseTreeInt3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DirectIntSpec_6, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0(Info_5, ParseTreeInt3_10);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ancestor_int_spec_4_p_0(
  MR_Word Info_5,
  MR_Word AncestorIntSpec_6)
{
  {
    MR_Word ParseTreeInt0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AncestorIntSpec_6, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0(Info_5, ParseTreeInt0_8);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_finalise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_initialise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__346__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__345__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_clause__mercury_output_item_clause_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_promise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__322__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_decl_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__write_import_use_map_entry_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__write_include_module_map_entry_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTreeModuleSrc_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 0))));
    MR_Word IntIncludeMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 2))));
    MR_Word ImpIncludeMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 3))));
    MR_Word InclMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 4))));
    MR_Word IntImportMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 5))));
    MR_Word IntUseMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 6))));
    MR_Word ImpImportMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 7))));
    MR_Word ImpUseMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 8))));
    MR_Word ImportUseMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 9))));
    MR_Word IntFIMSpecMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 11))));
    MR_Word MaybeImplicitFIMLangs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 12))));
    MR_Word IntTypeDefnsAbs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 13))));
    MR_Word IntTypeDefnsMer_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 14))));
    MR_Word IntTypeDefnsForeign_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 15))));
    MR_Word IntInstDefns_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 16))));
    MR_Word IntModeDefns_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 17))));
    MR_Word IntTypeClasses_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 18))));
    MR_Word IntInstances_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 19))));
    MR_Word IntPredDecls_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 20))));
    MR_Word IntModeDecls_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 21))));
    MR_Word IntForeignExportEnums_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 22))));
    MR_Word IntDeclPragmas_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 23))));
    MR_Word IntPromises_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 24))));
    MR_Word ImpTypeDefnsAbs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 26))));
    MR_Word ImpTypeDefnsMer_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 27))));
    MR_Word ImpTypeDefnsForeign_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 28))));
    MR_Word ImpInstDefns_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 29))));
    MR_Word ImpModeDefns_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 30))));
    MR_Word ImpTypeClasses_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 31))));
    MR_Word ImpInstances_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 32))));
    MR_Word ImpPredDecls_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 33))));
    MR_Word ImpModeDecls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 34))));
    MR_Word ImpClauses_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 35))));
    MR_Word ImpForeignEnums_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 36))));
    MR_Word ImpForeignExportEnums_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 37))));
    MR_Word ImpDeclPragmas_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 38))));
    MR_Word ImpImplPragmas_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 39))));
    MR_Word ImpPromises_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 40))));
    MR_Word ImpInitialises_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 41))));
    MR_Word ImpFinalises_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 42))));
    MR_Word ImpMutables_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 43))));
    MR_Word Var_71;
    MR_Word Var_75;
    MR_Word Var_79;
    MR_Word Var_83;
    MR_Word Var_96;
    MR_Word Var_102;
    MR_Word Var_104;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_118;
    MR_Word Var_123;
    MR_Word Var_127;
    MR_Word Var_131;
    MR_Word Var_135;
    MR_Word Var_155;
    MR_Word Var_157;
    MR_Word Var_159;
    MR_Word Var_163;
    MR_Word Var_167;
    MR_Word Var_169;
    MR_Word Var_171;
    MR_Box conv0_STATE_VARIABLE_IO_63_63;
    MR_Box conv1_STATE_VARIABLE_IO_67_67;
    MR_Box conv2_STATE_VARIABLE_IO_72_72;
    MR_Box conv3_STATE_VARIABLE_IO_76_76;
    MR_Box conv4_STATE_VARIABLE_IO_80_80;
    MR_Box conv5_STATE_VARIABLE_IO_84_84;
    MR_Box conv7_STATE_VARIABLE_IO_97_97;
    MR_Box conv8_STATE_VARIABLE_IO_99_99;
    MR_Box conv9_STATE_VARIABLE_IO_101_101;
    MR_Box conv10_STATE_VARIABLE_IO_103_103;
    MR_Box conv11_STATE_VARIABLE_IO_105_105;
    MR_Box conv12_STATE_VARIABLE_IO_107_107;
    MR_Box conv13_STATE_VARIABLE_IO_109_109;
    MR_Box conv14_STATE_VARIABLE_IO_111_111;
    MR_Box conv15_STATE_VARIABLE_IO_113_113;
    MR_Box conv16_STATE_VARIABLE_IO_115_115;
    MR_Box conv17_STATE_VARIABLE_IO_117_117;
    MR_Box conv18_STATE_VARIABLE_IO_119_119;
    MR_Box conv19_STATE_VARIABLE_IO_124_124;
    MR_Box conv20_STATE_VARIABLE_IO_128_128;
    MR_Box conv21_STATE_VARIABLE_IO_132_132;
    MR_Box conv22_STATE_VARIABLE_IO_136_136;
    MR_Box conv23_STATE_VARIABLE_IO_138_138;
    MR_Box conv24_STATE_VARIABLE_IO_140_140;
    MR_Box conv25_STATE_VARIABLE_IO_142_142;
    MR_Box conv26_STATE_VARIABLE_IO_144_144;
    MR_Box conv27_STATE_VARIABLE_IO_146_146;
    MR_Box conv28_STATE_VARIABLE_IO_148_148;
    MR_Box conv29_STATE_VARIABLE_IO_150_150;
    MR_Box conv30_STATE_VARIABLE_IO_152_152;
    MR_Box conv31_STATE_VARIABLE_IO_154_154;
    MR_Box conv32_STATE_VARIABLE_IO_156_156;
    MR_Box conv33_STATE_VARIABLE_IO_158_158;
    MR_Box conv34_STATE_VARIABLE_IO_160_160;
    MR_Box conv35_STATE_VARIABLE_IO_162_162;
    MR_Box conv36_STATE_VARIABLE_IO_164_164;
    MR_Box conv37_STATE_VARIABLE_IO_166_166;
    MR_Box conv38_STATE_VARIABLE_IO_168_168;
    MR_Box conv39_STATE_VARIABLE_IO_170_170;
    MR_Box conv40_STATE_VARIABLE_IO_172_172;

    mercury__io__write_string_3_p_0((MR_String) "% module src\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "module", ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) "% include_module_map\n");
    mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[43]), InclMap_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_63_63);
    mercury__io__write_string_3_p_0((MR_String) "% section_import_and_or_use_map\n");
    mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[44]), ImportUseMap_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_67_67);
    parse_tree__parse_tree_out__mercury_output_section_marker_3_p_0((MR_Integer) 0);
    Var_71 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntIncludeMap_10);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[10]), Var_71, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_72_72);
    Var_75 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntImportMap_13);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[11]), Var_75, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_76_76);
    Var_79 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_14);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[12]), Var_79, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_80_80);
    Var_83 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_18);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[45]), Var_83, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_84_84);
    if ((MaybeImplicitFIMLangs_20 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "% implicit FIM self-import languages not set\n");
    else
    {
      MR_Word ImplicitFIMLangs_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitFIMLangs_20, (MR_Integer) 0))));
      MR_Word ImplicitFIMLangStrs_53;
      MR_Word Var_86;
      MR_String Var_91;

      Var_86 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ImplicitFIMLangs_52);
      ImplicitFIMLangStrs_53 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[46]), Var_86);
      Var_91 = mercury__string__join_list_2_f_0((MR_String) ", ", ImplicitFIMLangStrs_53);
      mercury__io__write_string_3_p_0((MR_String) "% implicit FIM self-import languages: ");
      mercury__io__write_string_3_p_0(Var_91);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[16]));
      MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_8));
      MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, IntTypeDefnsAbs_21, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_97_97);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, IntTypeDefnsMer_22, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_99_99);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, IntTypeDefnsForeign_23, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_101_101);
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[18]));
      MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_9));
      MR_hl_field(MR_mktag(0), Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_102, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_102, IntInstDefns_24, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_103_103);
    {
      Var_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[19]));
      MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_10));
      MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_104, IntModeDefns_25, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_105_105);
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[10]));
      MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_11));
      MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_106, IntTypeClasses_26, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_107_107);
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[11]));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_12));
      MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, IntInstances_27, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_109_109);
    {
      Var_110 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[20]));
      MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_13));
      MR_hl_field(MR_mktag(0), Var_110, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_110, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_110, IntPredDecls_28, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_111_111);
    {
      Var_112 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[21]));
      MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_14));
      MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_112, IntModeDecls_29, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_113_113);
    {
      Var_114 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[30]));
      MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_15));
      MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, IntForeignExportEnums_30, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_115_115);
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[13]));
      MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_16));
      MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_116, IntDeclPragmas_31, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_117_117);
    {
      Var_118 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[14]));
      MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_17));
      MR_hl_field(MR_mktag(0), Var_118, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_118, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_118, IntPromises_32, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_119_119);
    parse_tree__parse_tree_out__mercury_output_section_marker_3_p_0((MR_Integer) 1);
    Var_123 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpIncludeMap_11);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[10]), Var_123, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_124_124);
    Var_127 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpImportMap_15);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[11]), Var_127, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_128_128);
    Var_131 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_16);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[12]), Var_131, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_132_132);
    Var_135 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_19);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[47]), Var_135, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_136_136);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, ImpTypeDefnsAbs_34, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_138_138);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, ImpTypeDefnsMer_35, ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_IO_140_140);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, ImpTypeDefnsForeign_36, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_142_142);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_102, ImpInstDefns_37, ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_IO_144_144);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_104, ImpModeDefns_38, ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_146_146);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_106, ImpTypeClasses_39, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_148_148);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, ImpInstances_40, ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_IO_150_150);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_110, ImpPredDecls_41, ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_IO_152_152);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_112, ImpModeDecls_42, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_154_154);
    {
      Var_155 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_155, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[22]));
      MR_hl_field(MR_mktag(0), Var_155, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_19));
      MR_hl_field(MR_mktag(0), Var_155, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_155, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_155, ImpClauses_43, ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_IO_156_156);
    {
      Var_157 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[17]));
      MR_hl_field(MR_mktag(0), Var_157, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_20));
      MR_hl_field(MR_mktag(0), Var_157, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_157, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_157, ImpForeignEnums_44, ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_IO_158_158);
    {
      Var_159 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[30]));
      MR_hl_field(MR_mktag(0), Var_159, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_21));
      MR_hl_field(MR_mktag(0), Var_159, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_159, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_159, ImpForeignExportEnums_45, ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_IO_160_160);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_116, ImpDeclPragmas_46, ((MR_Box) ((MR_Integer) 0)), &conv35_STATE_VARIABLE_IO_162_162);
    {
      Var_163 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[31]));
      MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_22));
      MR_hl_field(MR_mktag(0), Var_163, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_163, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_163, ImpImplPragmas_47, ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_IO_164_164);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_118, ImpPromises_48, ((MR_Box) ((MR_Integer) 0)), &conv37_STATE_VARIABLE_IO_166_166);
    {
      Var_167 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[32]));
      MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_23));
      MR_hl_field(MR_mktag(0), Var_167, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_167, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_167, ImpInitialises_49, ((MR_Box) ((MR_Integer) 0)), &conv38_STATE_VARIABLE_IO_168_168);
    {
      Var_169 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[33]));
      MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_24));
      MR_hl_field(MR_mktag(0), Var_169, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_169, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_169, ImpFinalises_50, ((MR_Box) ((MR_Integer) 0)), &conv39_STATE_VARIABLE_IO_170_170);
    {
      Var_171 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_171, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_171, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_4_p_0_25));
      MR_hl_field(MR_mktag(0), Var_171, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_171, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_171, ImpMutables_51, ((MR_Box) ((MR_Integer) 0)), &conv40_STATE_VARIABLE_IO_172_172);
    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "end_module", ModuleName_8);
    mercury__io__nl_2_p_0();
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_trans_opt_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeTransOpt_8)
{
  {
    MR_Word Res_27;

    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_Integer) 1))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_3_p_0(OutputFileName_7);
      mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0))));
      MR_Word Verbose_29;
      MR_Word Info_31;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_29);
      Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OutputStream_30;
            MR_Word Var_32;

            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_30);
            parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0(Info_31, ParseTreeTransOpt_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_30, &Var_32);
            mercury__io__close_output_3_p_0(FileStream_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutputStream_65;
            MR_Word Var_64;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_65);
            parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0(Info_31, ParseTreeTransOpt_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_65, &Var_64);
            mercury__io__close_output_3_p_0(FileStream_28);
            mercury__io__write_string_3_p_0((MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__2_118;

    conv14_HeadVar__2_118 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__743__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__2_118));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__2_110;

    conv12_HeadVar__2_110 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__741__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_110));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_102;

    conv10_HeadVar__2_102 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__739__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_102));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_96;

    conv8_HeadVar__2_96 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__737__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_96));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_88;

    conv6_HeadVar__2_88 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__735__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_88));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_80;

    conv4_HeadVar__2_80 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__733__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_80));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_72;

    conv2_HeadVar__2_72 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__731__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_72));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_63;

    conv0_HeadVar__2_63 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__729__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_63));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTree_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 0))));
    MR_Word Terms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 2))));
    MR_Word Term2s_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 3))));
    MR_Word Exceptions_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 4))));
    MR_Word Trailings_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 5))));
    MR_Word MMTablings_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 6))));
    MR_Word Sharings_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 7))));
    MR_Word Reuses_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 8))));
    MR_Word Lang_17;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_33;
    MR_Word Var_37;
    MR_Word Var_41;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Box conv1_STATE_VARIABLE_IO_26_26;
    MR_Box conv3_STATE_VARIABLE_IO_30_30;
    MR_Box conv5_STATE_VARIABLE_IO_34_34;
    MR_Box conv7_STATE_VARIABLE_IO_38_38;
    MR_Box conv9_STATE_VARIABLE_IO_42_42;
    MR_Box conv11_STATE_VARIABLE_IO_46_46;
    MR_Box conv13_STATE_VARIABLE_IO_50_50;
    MR_Box conv15_STATE_VARIABLE_IO_54_54;

    Lang_17 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    mercury__io__write_string_3_p_0((MR_String) "% .trans_opt file\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "module", ModuleName_8);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[24]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Lang_17));
    }
    Var_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[31]), Terms_10);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Var_25, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[25]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Lang_17));
    }
    Var_29 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[13]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[32]), Term2s_11);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, Var_29, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_30_30);
    Var_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[34]), Exceptions_12);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[33]), Var_33, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_34_34);
    Var_37 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[36]), Trailings_13);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[35]), Var_37, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_38_38);
    Var_41 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[38]), MMTablings_14);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[37]), Var_41, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_42_42);
    Var_45 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[40]), MMTablings_14);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[39]), Var_45, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_46_46);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[26]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_13));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Lang_17));
    }
    Var_49 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[41]), Sharings_15);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, Var_49, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_50_50);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[27]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_15));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Lang_17));
    }
    Var_53 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[18]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[42]), Reuses_16);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, Var_53, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_54_54);
    mercury__io__nl_2_p_0();
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_plain_opt_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreePlainOpt_8)
{
  {
    MR_Word Res_27;

    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_Integer) 1))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_3_p_0(OutputFileName_7);
      mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0))));
      MR_Word Verbose_29;
      MR_Word Info_31;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_29);
      Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OutputStream_30;
            MR_Word Var_32;

            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_30);
            parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0(Info_31, ParseTreePlainOpt_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_30, &Var_32);
            mercury__io__close_output_3_p_0(FileStream_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutputStream_65;
            MR_Word Var_64;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_65);
            parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0(Info_31, ParseTreePlainOpt_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_65, &Var_64);
            mercury__io__close_output_3_p_0(FileStream_28);
            mercury__io__write_string_3_p_0((MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_36(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv34_HeadVar__2_259;

    conv34_HeadVar__2_259 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__719__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv34_HeadVar__2_259));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_35(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv32_HeadVar__2_251;

    conv32_HeadVar__2_251 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__717__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv32_HeadVar__2_251));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv30_HeadVar__2_243;

    conv30_HeadVar__2_243 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__715__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv30_HeadVar__2_243));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv28_HeadVar__2_237;

    conv28_HeadVar__2_237 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__713__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv28_HeadVar__2_237));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv26_HeadVar__2_229;

    conv26_HeadVar__2_229 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__711__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv26_HeadVar__2_229));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv24_HeadVar__2_221;

    conv24_HeadVar__2_221 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__709__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv24_HeadVar__2_221));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv22_HeadVar__2_213;

    conv22_HeadVar__2_213 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__707__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv22_HeadVar__2_213));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv20_HeadVar__2_205;

    conv20_HeadVar__2_205 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__705__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv20_HeadVar__2_205));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv18_HeadVar__2_197;

    conv18_HeadVar__2_197 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__703__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv18_HeadVar__2_197));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_promise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv15_HeadVar__2_185;

    conv15_HeadVar__2_185 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__699__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv15_HeadVar__2_185));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_clause__mercury_output_item_clause_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__2_173;

    conv12_HeadVar__2_173 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__696__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_173));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_165;

    conv10_HeadVar__2_165 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__694__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_165));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_item_pred_marker_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_decl_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__682__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTree_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 0))));
    MR_Word UseMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 2))));
    MR_Word FIMSpecs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 3))));
    MR_Word TypeDefns_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 4))));
    MR_Word ForeignEnums_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 5))));
    MR_Word InstDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 6))));
    MR_Word ModeDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 7))));
    MR_Word TypeClasses_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 8))));
    MR_Word Instances_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 9))));
    MR_Word PredDecls_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 10))));
    MR_Word ModeDecls_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 11))));
    MR_Word Clauses_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 12))));
    MR_Word ForeignProcs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 13))));
    MR_Word Promises_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 14))));
    MR_Word PredMarkers_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 15))));
    MR_Word TypeSpecs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 16))));
    MR_Word UnusedArgs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 17))));
    MR_Word Terms_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 18))));
    MR_Word Term2s_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 19))));
    MR_Word Exceptions_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 20))));
    MR_Word Trailings_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 21))));
    MR_Word MMTablings_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 22))));
    MR_Word Sharings_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 23))));
    MR_Word Reuses_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 24))));
    MR_Word Lang_33;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_92;
    MR_Word Var_96;
    MR_Word Var_100;
    MR_Word Var_104;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Box conv0_STATE_VARIABLE_IO_42_42;
    MR_Box conv1_STATE_VARIABLE_IO_45_45;
    MR_Box conv2_STATE_VARIABLE_IO_47_47;
    MR_Box conv3_STATE_VARIABLE_IO_49_49;
    MR_Box conv4_STATE_VARIABLE_IO_51_51;
    MR_Box conv5_STATE_VARIABLE_IO_53_53;
    MR_Box conv6_STATE_VARIABLE_IO_55_55;
    MR_Box conv7_STATE_VARIABLE_IO_57_57;
    MR_Box conv8_STATE_VARIABLE_IO_59_59;
    MR_Box conv9_STATE_VARIABLE_IO_61_61;
    MR_Box conv11_STATE_VARIABLE_IO_64_64;
    MR_Box conv13_STATE_VARIABLE_IO_68_68;
    MR_Box conv14_STATE_VARIABLE_IO_72_72;
    MR_Box conv16_STATE_VARIABLE_IO_75_75;
    MR_Box conv17_STATE_VARIABLE_IO_78_78;
    MR_Box conv19_STATE_VARIABLE_IO_81_81;
    MR_Box conv21_STATE_VARIABLE_IO_85_85;
    MR_Box conv23_STATE_VARIABLE_IO_89_89;
    MR_Box conv25_STATE_VARIABLE_IO_93_93;
    MR_Box conv27_STATE_VARIABLE_IO_97_97;
    MR_Box conv29_STATE_VARIABLE_IO_101_101;
    MR_Box conv31_STATE_VARIABLE_IO_105_105;
    MR_Box conv33_STATE_VARIABLE_IO_109_109;
    MR_Box conv35_STATE_VARIABLE_IO_113_113;

    Lang_33 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    mercury__io__write_string_3_p_0((MR_String) "% .opt file\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "module", ModuleName_8);
    Var_41 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), UseMap_10);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[9]), Var_41, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_42_42);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[16]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, TypeDefns_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_45_45);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[17]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, ForeignEnums_13, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_47_47);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[18]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, InstDefns_14, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_49_49);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[19]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, ModeDefns_15, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_51_51);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[10]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, TypeClasses_16, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_53_53);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[11]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, Instances_17, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_55_55);
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[12]), FIMSpecs_11, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_57_57);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[20]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_9));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, PredDecls_18, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_59_59);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[21]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_10));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, ModeDecls_19, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_61_61);
    Var_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[8]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[14]), PredMarkers_23);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[13]), Var_63, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_64_64);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_13));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (Lang_33));
    }
    Var_67 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[15]), TypeSpecs_24);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, Var_67, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_68_68);
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[22]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_15));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, Clauses_20, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_72_72);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[23]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_16));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Lang_33));
    }
    Var_74 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[16]), ForeignProcs_21);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, Var_74, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_75_75);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[14]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_18));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, Promises_22, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_78_78);
    Var_80 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[11]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[18]), UnusedArgs_25);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[17]), Var_80, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_81_81);
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[24]));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_21));
      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (Lang_33));
    }
    Var_84 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[19]), Terms_26);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_83, Var_84, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_85_85);
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[25]));
      MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_23));
      MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (Lang_33));
    }
    Var_88 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[13]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[20]), Term2s_27);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_87, Var_88, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_89_89);
    Var_92 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[22]), Exceptions_28);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[21]), Var_92, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_93_93);
    Var_96 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[24]), Trailings_29);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[23]), Var_96, ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_97_97);
    Var_100 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[26]), MMTablings_30);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[25]), Var_100, ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_IO_101_101);
    Var_104 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[28]), MMTablings_30);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[27]), Var_104, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_105_105);
    {
      Var_107 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[26]));
      MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_33));
      MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (Lang_33));
    }
    Var_108 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[29]), Sharings_31);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_107, Var_108, ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_IO_109_109);
    {
      Var_111 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[27]));
      MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_35));
      MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (Lang_33));
    }
    Var_112 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[18]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[30]), Reuses_32);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_111, Var_112, ((MR_Box) ((MR_Integer) 0)), &conv35_STATE_VARIABLE_IO_113_113);
    mercury__io__nl_2_p_0();
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int3_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeInt3_8)
{
  {
    MR_Word Res_27;

    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_Integer) 1))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_3_p_0(OutputFileName_7);
      mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0))));
      MR_Word Verbose_29;
      MR_Word Info_31;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_29);
      Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OutputStream_30;
            MR_Word Var_32;

            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_30);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0(Info_31, ParseTreeInt3_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_30, &Var_32);
            mercury__io__close_output_3_p_0(FileStream_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutputStream_65;
            MR_Word Var_64;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_65);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0(Info_31, ParseTreeInt3_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_65, &Var_64);
            mercury__io__close_output_3_p_0(FileStream_28);
            mercury__io__write_string_3_p_0((MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTreeInt3_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 0))));
    MR_Word IntInclMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 2))));
    MR_Word IntImportMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 4))));
    MR_Word IntTypeDefnMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 6))));
    MR_Word IntInstDefnMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 7))));
    MR_Word IntModeDefnMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 8))));
    MR_Word IntTypeClasses_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 9))));
    MR_Word IntInstances_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 10))));
    MR_Word IntTypeRepnMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 11))));
    MR_Word Var_27;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Box conv0_STATE_VARIABLE_IO_28_28;
    MR_Box conv1_STATE_VARIABLE_IO_32_32;
    MR_Box conv2_STATE_VARIABLE_IO_35_35;
    MR_Box conv3_STATE_VARIABLE_IO_37_37;
    MR_Box conv4_STATE_VARIABLE_IO_39_39;
    MR_Box conv5_STATE_VARIABLE_IO_42_42;
    MR_Box conv6_STATE_VARIABLE_IO_45_45;
    MR_Box conv7_STATE_VARIABLE_IO_21;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "module", ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
    Var_27 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_10);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[7]), Var_27, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_28_28);
    Var_31 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntImportMap_12);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[8]), Var_31, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[7]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_34, IntTypeDefnMap_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_35_35);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[8]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_36, IntInstDefnMap_15, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_37_37);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[9]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_38, IntModeDefnMap_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_39_39);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[10]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Info_5));
    }
    Var_41 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_17);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, Var_41, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_42_42);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[11]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Info_5));
    }
    Var_44 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_18);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, Var_44, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_45_45);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[15]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_4_p_0_8));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[7]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_46, IntTypeRepnMap_19, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_21);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int2_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeInt2_8)
{
  {
    MR_Word Res_27;

    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_Integer) 1))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_3_p_0(OutputFileName_7);
      mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0))));
      MR_Word Verbose_29;
      MR_Word Info_31;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_29);
      Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OutputStream_30;
            MR_Word Var_32;

            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_30);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0(Info_31, ParseTreeInt2_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_30, &Var_32);
            mercury__io__close_output_3_p_0(FileStream_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutputStream_65;
            MR_Word Var_64;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_65);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0(Info_31, ParseTreeInt2_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_65, &Var_64);
            mercury__io__close_output_3_p_0(FileStream_28);
            mercury__io__write_string_3_p_0((MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTreeInt2_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 0))));
    MR_Word MaybeVersionNumbers_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 2))));
    MR_Word IntInclMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 3))));
    MR_Word IntUseMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 5))));
    MR_Word IntFIMSpecs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 7))));
    MR_Word ImpFIMSpecs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 8))));
    MR_Word IntTypeDefnMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 9))));
    MR_Word IntInstDefnMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 10))));
    MR_Word IntModeDefnMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 11))));
    MR_Word IntTypeClasses_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 12))));
    MR_Word IntInstances_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 13))));
    MR_Word IntTypeRepnMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 14))));
    MR_Word ImpTypeDefnMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 15))));
    MR_Word Var_32;
    MR_Word Var_36;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Box conv0_STATE_VARIABLE_IO_33_33;
    MR_Box conv1_STATE_VARIABLE_IO_37_37;
    MR_Box conv2_STATE_VARIABLE_IO_40_40;
    MR_Box conv3_STATE_VARIABLE_IO_42_42;
    MR_Box conv4_STATE_VARIABLE_IO_44_44;
    MR_Box conv5_STATE_VARIABLE_IO_46_46;
    MR_Box conv6_STATE_VARIABLE_IO_49_49;
    MR_Box conv7_STATE_VARIABLE_IO_52_52;
    MR_Box conv8_STATE_VARIABLE_IO_54_54;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "module", ModuleName_8);
    parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_4_p_0(ModuleName_8, MaybeVersionNumbers_10);
    mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
    Var_32 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_11);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[5]), Var_32, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_33_33);
    Var_36 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_13);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[6]), Var_36, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_37_37);
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[10]), IntFIMSpecs_15, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_40_40);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[7]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_41, IntTypeDefnMap_17, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_42_42);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[8]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_43, IntInstDefnMap_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_44_44);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[9]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_45, IntModeDefnMap_19, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_46_46);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[10]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Info_5));
    }
    Var_48 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_20);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_48, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_49_49);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[11]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_8));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Info_5));
    }
    Var_51 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_21);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, Var_51, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_52_52);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[15]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_4_p_0_9));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[7]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_53, IntTypeRepnMap_22, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_54_54);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_16);
    if (succeeded)
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ImpTypeDefnMap_23);
    if (!(succeeded))
    {
      MR_Box conv9_STATE_VARIABLE_IO_58_58;
      MR_Box conv10_STATE_VARIABLE_IO_25;

      mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
      mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[11]), ImpFIMSpecs_16, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_58_58);
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_41, ImpTypeDefnMap_23, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_25);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int1_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeInt1_8)
{
  {
    MR_Word Res_27;

    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_Integer) 1))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_3_p_0(OutputFileName_7);
      mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0))));
      MR_Word Verbose_29;
      MR_Word Info_31;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_29);
      Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OutputStream_30;
            MR_Word Var_32;

            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_30);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0(Info_31, ParseTreeInt1_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_30, &Var_32);
            mercury__io__close_output_3_p_0(FileStream_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutputStream_65;
            MR_Word Var_64;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_65);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0(Info_31, ParseTreeInt1_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_65, &Var_64);
            mercury__io__close_output_3_p_0(FileStream_28);
            mercury__io__write_string_3_p_0((MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__597__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_promise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__571__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTreeInt1_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 0))));
    MR_Word MaybeVersionNumbers_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 2))));
    MR_Word IntInclMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 3))));
    MR_Word ImpInclMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 4))));
    MR_Word IntUseMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 6))));
    MR_Word ImpUseMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 7))));
    MR_Word IntFIMSpecs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 9))));
    MR_Word ImpFIMSpecs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 10))));
    MR_Word IntTypeDefnMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 11))));
    MR_Word IntInstDefnMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 12))));
    MR_Word IntModeDefnMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 13))));
    MR_Word IntTypeClasses_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 14))));
    MR_Word IntInstances_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 15))));
    MR_Word IntPredDecls_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 16))));
    MR_Word IntModeDecls_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 17))));
    MR_Word IntForeignEnumMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 18))));
    MR_Word IntDeclPragmas_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 19))));
    MR_Word IntPromises_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 20))));
    MR_Word IntTypeRepnMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 21))));
    MR_Word ImpTypeDefnMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 22))));
    MR_Word ImpForeignEnumMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 23))));
    MR_Word ImpTypeClasses_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 24))));
    MR_Word IntPredOrModeDecls_33;
    MR_Word Var_42;
    MR_Word Var_46;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Box conv0_STATE_VARIABLE_IO_43_43;
    MR_Box conv1_STATE_VARIABLE_IO_47_47;
    MR_Box conv2_STATE_VARIABLE_IO_50_50;
    MR_Box conv3_STATE_VARIABLE_IO_52_52;
    MR_Box conv4_STATE_VARIABLE_IO_54_54;
    MR_Box conv5_STATE_VARIABLE_IO_56_56;
    MR_Box conv6_STATE_VARIABLE_IO_59_59;
    MR_Box conv7_STATE_VARIABLE_IO_62_62;
    MR_Box conv8_STATE_VARIABLE_IO_65_65;
    MR_Box conv9_STATE_VARIABLE_IO_68_68;
    MR_Box conv10_STATE_VARIABLE_IO_71_71;
    MR_Box conv11_STATE_VARIABLE_IO_73_73;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "module", ModuleName_8);
    parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_4_p_0(ModuleName_8, MaybeVersionNumbers_10);
    mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
    Var_42 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_11);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[3]), Var_42, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_43_43);
    Var_46 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_14);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[4]), Var_46, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[8]), IntFIMSpecs_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_50_50);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[7]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_51, IntTypeDefnMap_19, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_52_52);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[8]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_53, IntInstDefnMap_20, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_54_54);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[9]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_55, IntModeDefnMap_21, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_56_56);
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[10]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Info_5));
    }
    Var_58 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_22);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, Var_58, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_59_59);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[11]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_8));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Info_5));
    }
    Var_61 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_23);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, Var_61, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_62_62);
    parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(IntPredDecls_24, IntModeDecls_25, &IntPredOrModeDecls_33);
    parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_4_p_0(Info_5, IntPredOrModeDecls_33);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[12]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_9));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_64, IntForeignEnumMap_26, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_65_65);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[13]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_10));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Info_5));
    }
    Var_67 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), IntDeclPragmas_27);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, Var_67, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_68_68);
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[14]));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_11));
      MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Info_5));
    }
    Var_70 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises_28);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, Var_70, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_71_71);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[15]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_12));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[7]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_72, IntTypeRepnMap_29, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_73_73);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_12);
    if (succeeded)
    {
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_15);
      if (succeeded)
      {
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_18);
        if (succeeded)
        {
          succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ImpTypeDefnMap_30);
          if (succeeded)
          {
            succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), ImpForeignEnumMap_31);
            if (succeeded)
              succeeded = (ImpTypeClasses_32 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (!(succeeded))
    {
      MR_Word Var_77;
      MR_Word Var_81;
      MR_Word Var_88;
      MR_Word Var_91;
      MR_Box conv12_STATE_VARIABLE_IO_78_78;
      MR_Box conv13_STATE_VARIABLE_IO_82_82;
      MR_Box conv14_STATE_VARIABLE_IO_85_85;
      MR_Box conv15_STATE_VARIABLE_IO_87_87;
      MR_Box conv16_STATE_VARIABLE_IO_89_89;
      MR_Box conv17_STATE_VARIABLE_IO_35;

      mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
      Var_77 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_12);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[3]), Var_77, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_78_78);
      Var_81 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_15);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[4]), Var_81, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_82_82);
      mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[9]), ImpFIMSpecs_18, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_85_85);
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_51, ImpTypeDefnMap_30, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_87_87);
      {
        Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[12]));
        MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_4_p_0_14));
        MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (Info_5));
      }
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_88, ImpForeignEnumMap_31, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_89_89);
      Var_91 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses_32);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, Var_91, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_35);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int0_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeInt0_8)
{
  {
    MR_Word Res_27;

    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_Integer) 1))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_3_p_0(OutputFileName_7);
      mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0))));
      MR_Word Verbose_29;
      MR_Word Info_31;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_29);
      Info_31 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OutputStream_30;
            MR_Word Var_32;

            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_30);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0(Info_31, ParseTreeInt0_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_30, &Var_32);
            mercury__io__close_output_3_p_0(FileStream_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutputStream_65;
            MR_Word Var_64;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_65);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0(Info_31, ParseTreeInt0_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_65, &Var_64);
            mercury__io__close_output_3_p_0(FileStream_28);
            mercury__io__write_string_3_p_0((MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__533__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_promise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__487__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTreeInt0_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 0))));
    MR_Word MaybeVersionNumbers_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 2))));
    MR_Word IntInclMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 3))));
    MR_Word ImpInclMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 4))));
    MR_Word IntImportMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 6))));
    MR_Word IntUseMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 7))));
    MR_Word ImpImportMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 8))));
    MR_Word ImpUseMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 9))));
    MR_Word IntFIMSpecs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 11))));
    MR_Word ImpFIMSpecs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 12))));
    MR_Word IntTypeDefnMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 13))));
    MR_Word IntInstDefnMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 14))));
    MR_Word IntModeDefnMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 15))));
    MR_Word IntTypeClasses_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 16))));
    MR_Word IntInstances_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 17))));
    MR_Word IntPredDecls_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 18))));
    MR_Word IntModeDecls_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 19))));
    MR_Word IntForeignEnumMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 20))));
    MR_Word IntDeclPragmas_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 21))));
    MR_Word IntPromises_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 22))));
    MR_Word ImpTypeDefnMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 23))));
    MR_Word ImpInstDefnMap_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 24))));
    MR_Word ImpModeDefnMap_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 25))));
    MR_Word ImpTypeClasses_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 26))));
    MR_Word ImpInstances_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 27))));
    MR_Word ImpPredDecls_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 28))));
    MR_Word ImpModeDecls_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 29))));
    MR_Word ImpForeignEnumMap_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 30))));
    MR_Word ImpDeclPragmas_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 31))));
    MR_Word ImpPromises_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 32))));
    MR_Word IntPredOrModeDecls_41;
    MR_Word Var_51;
    MR_Word Var_55;
    MR_Word Var_59;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Box conv0_STATE_VARIABLE_IO_52_52;
    MR_Box conv1_STATE_VARIABLE_IO_56_56;
    MR_Box conv2_STATE_VARIABLE_IO_60_60;
    MR_Box conv3_STATE_VARIABLE_IO_63_63;
    MR_Box conv4_STATE_VARIABLE_IO_65_65;
    MR_Box conv5_STATE_VARIABLE_IO_67_67;
    MR_Box conv6_STATE_VARIABLE_IO_69_69;
    MR_Box conv7_STATE_VARIABLE_IO_72_72;
    MR_Box conv8_STATE_VARIABLE_IO_75_75;
    MR_Box conv9_STATE_VARIABLE_IO_78_78;
    MR_Box conv10_STATE_VARIABLE_IO_81_81;
    MR_Box conv11_STATE_VARIABLE_IO_84_84;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "module", ModuleName_8);
    parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_4_p_0(ModuleName_8, MaybeVersionNumbers_10);
    parse_tree__parse_tree_out__mercury_output_section_marker_3_p_0((MR_Integer) 0);
    Var_51 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_11);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[0]), Var_51, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_52_52);
    Var_55 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntImportMap_14);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[1]), Var_55, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_56_56);
    Var_59 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_15);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[2]), Var_59, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_60_60);
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[6]), IntFIMSpecs_19, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_63_63);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[7]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_64, IntTypeDefnMap_21, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_65_65);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[8]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_66, IntInstDefnMap_22, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_67_67);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[9]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_68, IntModeDefnMap_23, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_69_69);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[10]));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_8));
      MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Info_5));
    }
    Var_71 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_24);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, Var_71, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_72_72);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[11]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_9));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Info_5));
    }
    Var_74 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_25);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, Var_74, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_75_75);
    parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(IntPredDecls_26, IntModeDecls_27, &IntPredOrModeDecls_41);
    parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_4_p_0(Info_5, IntPredOrModeDecls_41);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[12]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_10));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Info_5));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_77, IntForeignEnumMap_28, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_78_78);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[13]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_11));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Info_5));
    }
    Var_80 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), IntDeclPragmas_29);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, Var_80, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_81_81);
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[14]));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_12));
      MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (Info_5));
    }
    Var_83 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises_30);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, Var_83, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_84_84);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_12);
    if (succeeded)
    {
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpImportMap_16);
      if (succeeded)
      {
        succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_17);
        if (succeeded)
        {
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_20);
          if (succeeded)
          {
            succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ImpTypeDefnMap_31);
            if (succeeded)
            {
              succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ImpInstDefnMap_32);
              if (succeeded)
              {
                succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ImpModeDefnMap_33);
                if (succeeded)
                {
                  succeeded = (ImpTypeClasses_34 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (ImpInstances_35 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (ImpPredDecls_36 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (ImpModeDecls_37 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), ImpForeignEnumMap_38);
                          if (succeeded)
                          {
                            succeeded = (ImpDeclPragmas_39 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                              succeeded = (ImpPromises_40 == (MR_Word) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (!(succeeded))
    {
      MR_Word ImpPredOrModeDecls_42;
      MR_Word Var_88;
      MR_Word Var_92;
      MR_Word Var_96;
      MR_Word Var_108;
      MR_Word Var_111;
      MR_Word Var_114;
      MR_Word Var_117;
      MR_Word Var_120;
      MR_Box conv12_STATE_VARIABLE_IO_89_89;
      MR_Box conv13_STATE_VARIABLE_IO_93_93;
      MR_Box conv14_STATE_VARIABLE_IO_97_97;
      MR_Box conv15_STATE_VARIABLE_IO_100_100;
      MR_Box conv16_STATE_VARIABLE_IO_102_102;
      MR_Box conv17_STATE_VARIABLE_IO_104_104;
      MR_Box conv18_STATE_VARIABLE_IO_106_106;
      MR_Box conv19_STATE_VARIABLE_IO_109_109;
      MR_Box conv20_STATE_VARIABLE_IO_112_112;
      MR_Box conv21_STATE_VARIABLE_IO_115_115;
      MR_Box conv22_STATE_VARIABLE_IO_118_118;
      MR_Box conv23_STATE_VARIABLE_IO_44;

      parse_tree__parse_tree_out__mercury_output_section_marker_3_p_0((MR_Integer) 1);
      Var_88 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_12);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[0]), Var_88, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_89_89);
      Var_92 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpImportMap_16);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[1]), Var_92, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_93_93);
      Var_96 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_17);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[2]), Var_96, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_97_97);
      mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[7]), ImpFIMSpecs_20, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_100_100);
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_64, ImpTypeDefnMap_31, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_102_102);
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_66, ImpInstDefnMap_32, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_104_104);
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_68, ImpModeDefnMap_33, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_106_106);
      Var_108 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses_34);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, Var_108, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_109_109);
      Var_111 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpInstances_35);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, Var_111, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_112_112);
      parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(ImpPredDecls_36, ImpModeDecls_37, &ImpPredOrModeDecls_42);
      parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_4_p_0(Info_5, ImpPredOrModeDecls_42);
      {
        Var_114 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[12]));
        MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_4_p_0_14));
        MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (Info_5));
      }
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_114, ImpForeignEnumMap_38, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_115_115);
      Var_117 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), ImpDeclPragmas_39);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, Var_117, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_118_118);
      Var_120 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromises_40);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, Var_120, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_44);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Item_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      if (((MR_tag((MR_Word) Item_10)) == (MR_Integer) 1))
      {
        MR_Word ItemModeDecl_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Item_10, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_item_mode_decl_4_p_0(Info_1, ItemModeDecl_23);
      }
      else
      {
        MR_Word ItemPredDecl_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Item_10, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(Info_1, ItemPredDecl_22);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Items_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_section_marker_3_p_0(
  MR_Word Section_4)
{
  switch (Section_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6)
{
  if (!((MaybeVersionNumbers_6 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVersionNumbers_6, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(ModuleName_5, VersionNumbers_8);
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

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_src_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeSrc_8)
{
  {
    MR_Word Res_27;

    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_27);
    if (((MR_tag((MR_Word) Res_27)) == (MR_Integer) 1))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_3_p_0(OutputFileName_7);
      mercury__io__write_string_3_p_0((MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0))));
      MR_Word Verbose_29;
      MR_Word Info_31;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_29);
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
            MR_Word OutputStream_65;
            MR_Word Var_64;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_65);
            parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(Info_31, ParseTreeSrc_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_65, &Var_64);
            mercury__io__close_output_3_p_0(FileStream_28);
            mercury__io__write_string_3_p_0((MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_3_p_0(((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_avail_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_include_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Component_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Components_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word MaybeCurSectionKind_23;
      MR_Word next_value_of_MaybePrevSectionKind_2;
      MR_Word next_value_of_HeadVar__3_3;

      if (((MR_tag((MR_Word) Component_13)) == (MR_Integer) 1))
      {
        MR_Word SubParseTree_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_13, (MR_Integer) 3))));
        MR_Word Lang_27;
        MR_Word SectionKind_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Component_13, (MR_Integer) 1))) & (MR_Integer) 1);

        Lang_27 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_1);
        switch (Lang_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (SectionKind_51) {
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
              MR_Word PrevSectionKind_28;

              succeeded = (MaybePrevSectionKind_2 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PrevSectionKind_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSectionKind_2, (MR_Integer) 0))));
                succeeded = (PrevSectionKind_28 == SectionKind_51);
              }
              if (!(succeeded))
                switch (SectionKind_51) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
                    break;
                  case (MR_Integer) 0:
                    mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
                    break;
                }
            }
            break;
        }
        parse_tree__parse_tree_out__mercury_output_parse_tree_src_4_p_0(Info_1, SubParseTree_26);
        MaybeCurSectionKind_23 = MaybePrevSectionKind_2;
      }
      else
      {
        MR_Word SectionKind_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Component_13, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word InclsCord_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_13, (MR_Integer) 3))));
        MR_Word AvailsCord_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_13, (MR_Integer) 4))));
        MR_Word FIMsCord_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_13, (MR_Integer) 5))));
        MR_Word ItemsCord_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_13, (MR_Integer) 6))));
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Box conv0_STATE_VARIABLE_IO_41_41;
        MR_Box conv1_STATE_VARIABLE_IO_44_44;
        MR_Box conv2_STATE_VARIABLE_IO_47_47;

        switch (SectionKind_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) ":- implementation.\n");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_3_p_0((MR_String) ":- interface.\n");
            break;
        }
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[4]));
          MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Info_1));
        }
        Var_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_19);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, Var_40, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_41_41);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[5]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Info_1));
        }
        Var_43 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_20);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Var_43, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_44_44);
        Var_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_21);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[5]), Var_46, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_47_47);
        Var_48 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_22);
        parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_1, Var_48);
        {
          MaybeCurSectionKind_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeCurSectionKind_23, 0) = ((MR_Box) (SectionKind_17));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_MaybePrevSectionKind_2 = MaybeCurSectionKind_23;
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
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 0))));
    MR_Word ModuleComponentsCord_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 2))));
    MR_Word ModuleComponents_11;

    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "module", ModuleName_8);
    ModuleComponents_11 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), ModuleComponentsCord_10);
    parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(Info_5, (MR_Word) ((MR_Unsigned) 0U), ModuleComponents_11);
    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "end_module", ModuleName_8);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(
  MR_String Decl_5,
  MR_Word ModuleName_6)
{
  {
    mercury__io__write_string_3_p_0((MR_String) ":- ");
    mercury__io__write_string_3_p_0(Decl_5);
    mercury__io__write_string_3_p_0((MR_String) " ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_6);
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
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Item_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__parse_tree_out__mercury_output_item_4_p_0(Info_1, Item_10);
      // direct tailcall eliminated
      ;
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
  switch (MR_tag((MR_Word) Item_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ItemClause_8 = (MR_Word) ((MR_Word) (Item_6));

        parse_tree__parse_tree_out_clause__mercury_output_item_clause_4_p_0(Info_5, ItemClause_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemInstDefn_10 = (MR_Word) (MR_body((MR_Word) (Item_6), (MR_Integer) 1));

        parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0(Info_5, ItemInstDefn_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ItemModeDefn_11 = (MR_Word) (MR_body((MR_Word) (Item_6), (MR_Integer) 2));

        parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(Info_5, ItemModeDefn_11);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemPredDecl_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(Info_5, ItemPredDecl_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemModeDecl_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_mode_decl_4_p_0(Info_5, ItemModeDecl_13);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemForeignEnum_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
            MR_Box conv0_STATE_VARIABLE_IO_27;

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), ItemForeignEnum_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_27);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemForeignExportEnum_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_27;

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), ItemForeignExportEnum_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ItemPromise_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(ItemPromise_19);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemTypeClass_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(Info_5, ItemTypeClass_20);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ItemInstance_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(ItemInstance_21);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ItemInitialise_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_4_p_0(ItemInitialise_22);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ItemFinalise_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_105_110_97_108_105_115_101_95_95_91_49_93_95_48_4_p_0(ItemFinalise_23);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ItemMutable_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(Info_5, ItemMutable_24);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ItemTypeDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(Info_5, ItemTypeDefn_9);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ItemDeclPragma_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_4_p_0(Info_5, ItemDeclPragma_16);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word ItemImplPragma_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_4_p_0(Info_5, ItemImplPragma_17);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word ItemGenPragma_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_item_generated_pragma_4_p_0(Info_5, ItemGenPragma_18);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word ItemTypeRepn_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_4_p_0(Info_5, ItemTypeRepn_25);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_105_110_97_108_105_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemFinalise_6)
{
  {
    MR_Word PredSymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFinalise_6, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemFinalise_6, (MR_Integer) 1))));

    mercury__io__write_string_3_p_0((MR_String) ":- finalise ");
    parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(PredSymName_8);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(Arity_9);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemInitialise_6)
{
  {
    MR_Word PredSymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInitialise_6, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInitialise_6, (MR_Integer) 1))));

    mercury__io__write_string_3_p_0((MR_String) ":- initialise ");
    parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(PredSymName_8);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(Arity_9);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
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

    parse_tree__parse_tree_out__mercury_output_instance_method_3_p_0(((MR_Word) (wrapper_arg_1)));
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

    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemInstance_6)
{
  {
    MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 0))));
    MR_Word Types_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 1))));
    MR_Word Constraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 3))));
    MR_Word Body_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 4))));
    MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_6, (MR_Integer) 5))));
    MR_Word Var_28;
    MR_Box conv0_STATE_VARIABLE_IO_37_37;

    mercury__io__write_string_3_p_0((MR_String) ":- instance ");
    mercury__io__write_char_3_p_0((MR_Char) 40);
    parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(ClassName_8);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (VarSet_13));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_9, (MR_String) ", ", Var_28);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), VarSet_13, (MR_Integer) 0, (MR_String) "<=", Constraints_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_37_37);
    if (!((Body_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Methods_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_12, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) " where [\n");
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), Methods_17, (MR_String) ",\n", (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[4]));
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
    MR_Word PromiseType_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 1))));
    MR_Word VarSet_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 2))));
    MR_Word UnivVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 3))));
    MR_Word Goal_17;

    switch (PromiseType_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- all [");
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, (MR_Integer) 0, UnivVars_11);
          mercury__io__write_string_3_p_0((MR_String) "]");
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0((MR_Integer) 1);
          parse_tree__prog_out__write_promise_type_3_p_0(PromiseType_8);
          Goal_17 = Goal0_9;
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__io__write_string_3_p_0((MR_String) ":- promise ");
          if ((UnivVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
            Goal_17 = Goal0_9;
          else
          {
            MR_Word Var_32;

            Var_32 = parse_tree__prog_item__get_goal_context_1_f_0(Goal0_9);
            {
              Goal_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Goal_17, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Goal_17, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
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
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_output_36,
  MR_Word ItemForeignExportEnum_6,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17)
{
  {
    MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 1))));
    MR_Word Attributes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 2))));
    MR_Word Overrides_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 3))));
    MR_Word TypeName_14;
    MR_Integer TypeArity_15;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Box STATE_VARIABLE_U_20_20;
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_27_27;
    MR_Box STATE_VARIABLE_U_29_29;
    MR_Box STATE_VARIABLE_U_30_30;
    MR_Box STATE_VARIABLE_U_32_32;
    MR_Box STATE_VARIABLE_U_33_33;
    MR_Word MaybePrefix_41;
    MR_Box STATE_VARIABLE_U_11_44;
    MR_Box STATE_VARIABLE_U_16_49;
    MR_Box STATE_VARIABLE_U_9_58;
    MR_Word Var_60;
    MR_Box STATE_VARIABLE_U_12_61;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) ":- pragma foreign_export_enum(")), STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_19_19);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(TypeClassInfo_for_output_36, Lang_8, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_20_20);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
    TypeName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 0))));
    TypeArity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_36, (MR_Integer) 0, TypeName_14, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) "/")), STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 8))));
    func_3(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) (TypeArity_15)), STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
    MaybePrefix_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_10, (MR_Integer) 0))));
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) "[")), STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_11_44);
    if ((MaybePrefix_41 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_16_49 = STATE_VARIABLE_U_11_44;
    else
    {
      MR_String Prefix_42 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePrefix_41, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_13_46;
      MR_Box STATE_VARIABLE_U_14_47;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_6(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) "prefix(")), STATE_VARIABLE_U_11_44, &STATE_VARIABLE_U_13_46);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 21))));
      func_7(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) (Prefix_42)), STATE_VARIABLE_U_13_46, &STATE_VARIABLE_U_14_47);
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 7))));
      func_8(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_U_14_47, &STATE_VARIABLE_U_16_49);
    }
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) "]")), STATE_VARIABLE_U_16_49, &STATE_VARIABLE_U_30_30);
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
    func_10(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
    func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 7))));
    func_11(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) (MR_Word) ((MR_Char) 91)), STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_9_58);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (TypeClassInfo_for_output_36));
    }
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 27))));
    func_12(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0])), ((MR_Box) (Overrides_11)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_60)), STATE_VARIABLE_U_9_58, &STATE_VARIABLE_U_12_61);
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 7))));
    func_13(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) (MR_Word) ((MR_Char) 93)), STATE_VARIABLE_U_12_61, &STATE_VARIABLE_U_33_33);
    func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
    func_14(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) ").\n")), STATE_VARIABLE_U_33_33, STATE_VARIABLE_U_17);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_format_unqual_sym_name_string_pair_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_output_33,
  MR_Word ItemForeignEnum_6,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17)
{
  {
    MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_6, (MR_Integer) 1))));
    MR_Word OoMValues_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_6, (MR_Integer) 2))));
    MR_Word TypeName_13;
    MR_Integer TypeArity_14;
    MR_Word Values_15;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Box STATE_VARIABLE_U_20_20;
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_27_27;
    MR_Box STATE_VARIABLE_U_29_29;
    MR_Box STATE_VARIABLE_U_30_30;
    MR_Box STATE_VARIABLE_U_9_40;
    MR_Word Var_42;
    MR_Box STATE_VARIABLE_U_12_43;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_33, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_33)), ((MR_Box) ((MR_String) ":- pragma foreign_enum(")), STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_19_19);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(TypeClassInfo_for_output_33, Lang_8, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_20_20);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_33, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_33)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
    TypeName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 0))));
    TypeArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_33, (MR_Integer) 0, TypeName_13, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_33, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_33)), ((MR_Box) ((MR_String) "/")), STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_33, (MR_Integer) 0)), (MR_Integer) 8))));
    func_3(((MR_Box) (TypeClassInfo_for_output_33)), ((MR_Box) (TypeArity_14)), STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_33, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_33)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
    Values_15 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), OoMValues_10);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_33, (MR_Integer) 0)), (MR_Integer) 7))));
    func_5(((MR_Box) (TypeClassInfo_for_output_33)), ((MR_Box) (MR_Word) ((MR_Char) 91)), STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_9_40);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (TypeClassInfo_for_output_33));
    }
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_33, (MR_Integer) 0)), (MR_Integer) 27))));
    func_6(((MR_Box) (TypeClassInfo_for_output_33)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0])), ((MR_Box) (Values_15)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_42)), STATE_VARIABLE_U_9_40, &STATE_VARIABLE_U_12_43);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_33, (MR_Integer) 0)), (MR_Integer) 7))));
    func_7(((MR_Box) (TypeClassInfo_for_output_33)), ((MR_Box) (MR_Word) ((MR_Char) 93)), STATE_VARIABLE_U_12_43, &STATE_VARIABLE_U_30_30);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_33, (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) (TypeClassInfo_for_output_33)), ((MR_Box) ((MR_String) ").\n")), STATE_VARIABLE_U_30_30, STATE_VARIABLE_U_17);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(
  MR_Word Info_5,
  MR_Word ItemMutable_6)
{
  {
    MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 0))));
    MR_Word Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 2))));
    MR_Word Inst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 4))));
    MR_Word InitTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 5))));
    MR_Word MutVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 6))));
    MR_Word Attrs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 7))));
    MR_Word Lang_18;
    MR_Word Var_26;
    MR_Word Var_35;

    mercury__io__write_string_3_p_0((MR_String) ":- mutable(");
    mercury__io__write_string_3_p_0(Name_8);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    Var_26 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(Var_26, (MR_Integer) 0, Type_10);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MutVarSet_14, (MR_Integer) 0, InitTerm_13);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    Lang_18 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    Var_35 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(Lang_18, Var_35, Inst_12);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__print_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0), ((MR_Box) (Attrs_15)));
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

    parse_tree__parse_tree_out__output_class_decl_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
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

    parse_tree__parse_tree_out__mercury_format_fundep_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1954__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(
  MR_Word Info_5,
  MR_Word ItemTypeClass_6)
{
  {
    MR_bool succeeded;
    MR_Word ClassName0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 0))));
    MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 1))));
    MR_Word Constraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 2))));
    MR_Word FunDeps_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 3))));
    MR_Word Interface_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 4))));
    MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 5))));
    MR_Word ClassName_16;
    MR_Word Var_30;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, ClassName0_8, &ClassName_16);
    mercury__io__write_string_3_p_0((MR_String) ":- typeclass ");
    parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(ClassName_16);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (VarSet_13));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[26]), Vars_9, (MR_String) ", ", Var_30);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    succeeded = (FunDeps_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Constraints_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
    {
      MR_Word Var_66;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_U_19_64;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_22_67;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv9_STATE_VARIABLE_IO_38_38;

      func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]))), ((MR_Box) ((MR_String) " <= (")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_19_64);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[2]));
        MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (VarSet_13));
        MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 27))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)), ((MR_Box) (FunDeps_11)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_66)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_22_67);
      if (!((Constraints_10 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Var_71;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_U_27_72;

        if (!((FunDeps_11 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv5_STATE_VARIABLE_U_24_69;

          func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_24_69);
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3));
          MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[2]));
          MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (VarSet_13));
          MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 27))));
        func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (Constraints_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_71)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_27_72);
      }
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_38_38);
    }
    if ((Interface_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    else
    {
      MR_Word ClassDecls_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface_12, (MR_Integer) 0))));
      MR_Word Lang_21;
      MR_Word Var_89;

      mercury__io__write_string_3_p_0((MR_String) " where [\n");
      Lang_21 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
      {
        Var_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_4));
        MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (Lang_21));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), ClassDecls_20, (MR_String) ",\n", Var_89);
      mercury__io__write_string_3_p_0((MR_String) "\n].\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_decl_4_p_0(
  MR_Word Info_5,
  MR_Word ItemModeDecl_6)
{
  {
    MR_bool succeeded;
    MR_Word PredName0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_6, (MR_Integer) 0))));
    MR_Word PredOrFunc_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_6, (MR_Integer) 1))));
    MR_Word Modes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_6, (MR_Integer) 2))));
    MR_Word WithInst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_6, (MR_Integer) 3))));
    MR_Word MaybeDet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_6, (MR_Integer) 4))));
    MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_6, (MR_Integer) 5))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_6, (MR_Integer) 6))));
    MR_Word PredName_16;
    MR_Word Lang_17;
    MR_Word Var_23;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, PredName0_8, &PredName_16);
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_14);
    Lang_17 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    succeeded = (WithInst_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (PredOrFunc_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredOrFunc_9, (MR_Integer) 0))));
        succeeded = (Var_23 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word FuncModes_18;
      MR_Word RetMode_19;
      MR_Box conv0_RetMode_19;

      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_10, &FuncModes_18, &conv0_RetMode_19);
      RetMode_19 = ((MR_Word) (conv0_RetMode_19));
      parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0(Lang_17, VarSet_13, PredName_16, FuncModes_18, RetMode_19, MaybeDet_12);
    }
    else
      parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0(Lang_17, VarSet_13, PredName_16, Modes_10, WithInst_11, MaybeDet_12);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_4_p_0(
  MR_Word Info_5,
  MR_Word ItemPredDecl_6)
{
  {
    MR_bool succeeded;
    MR_Word PredName0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 0))));
    MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 2))));
    MR_Word WithType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 3))));
    MR_Word WithInst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 4))));
    MR_Word MaybeDetism_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 5))));
    MR_Word TypeVarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 7))));
    MR_Word InstVarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 8))));
    MR_Word ExistQVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 9))));
    MR_Word Purity_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 10))) & (MR_Integer) 3);
    MR_Word Constraints_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 11))));
    MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_6, (MR_Integer) 12))));
    MR_Word PredName_22;
    MR_Word Lang_23;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, PredName0_8, &PredName_22);
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_20);
    Lang_23 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    succeeded = (PredOrFunc_9 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WithType_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word FuncTypesAndModes_24;
      MR_Word RetTypeAndMode_25;
      MR_Box conv0_RetTypeAndMode_25;
      MR_Box conv1_STATE_VARIABLE_IO_27;

      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_10, &FuncTypesAndModes_24, &conv0_RetTypeAndMode_25);
      RetTypeAndMode_25 = ((MR_Word) (conv0_RetTypeAndMode_25));
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Lang_23, TypeVarSet_15, InstVarSet_16, ExistQVars_17, PredName_22, FuncTypesAndModes_24, RetTypeAndMode_25, MaybeDetism_13, Purity_18, Constraints_19, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27);
    }
    else
    {
      MR_Box conv2_STATE_VARIABLE_IO_27;

      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Lang_23, TypeVarSet_15, InstVarSet_16, PredOrFunc_9, ExistQVars_17, PredName_22, TypesAndModes_10, WithType_11, WithInst_12, MaybeDetism_13, Purity_18, Constraints_19, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_27);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_LambdaHeadVar__2_19;

    conv8_LambdaHeadVar__2_19 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1721__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_19));
    return wrapper_arg_2;
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
    MR_Word conv2_LambdaHeadVar__2_19;

    conv2_LambdaHeadVar__2_19 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1721__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_19));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ItemModeDefn_6)
{
  {
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 0))));
    MR_Word InstParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 1))));
    MR_Word MaybeAbstractModeDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 2))));
    MR_Word VarSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 3))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_6, (MR_Integer) 4))));
    MR_Word UnQualSymName_14;
    MR_Word Lang_15;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, SymName_8, &UnQualSymName_14);
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_12);
    Lang_15 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    if ((MaybeAbstractModeDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ArgTerms_52;
      MR_Word ModeTerm_54;
      MR_Word Var_55;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_U_29_41;
      MR_Box conv3_STATE_VARIABLE_U_30_42;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv5_STATE_VARIABLE_IO_17;

      func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]))), ((MR_Box) ((MR_String) ":- abstract_mode((")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_29_41);
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Context_12));
      }
      ArgTerms_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[28]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[29]), Var_55, InstParams_9);
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), UnQualSymName_14, ArgTerms_52, Context_12, &ModeTerm_54);
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), VarSet_11, (MR_Integer) 0, ModeTerm_54, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_30_42);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]))), ((MR_Box) ((MR_String) ")).\n")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_17);
    }
    else
    {
      MR_Word Mode_30;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_10, (MR_Integer) 0))));
      MR_Word ArgTerms_71;
      MR_Word ModeTerm_73;
      MR_Word Var_74;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv7_STATE_VARIABLE_U_21_33;
      MR_Box conv9_STATE_VARIABLE_U_22_34;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv11_STATE_VARIABLE_U_24_36;
      MR_Box conv12_STATE_VARIABLE_U_25_37;
      void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv14_STATE_VARIABLE_IO_17;

      Mode_30 = (MR_Word) (Var_31);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]))), ((MR_Box) ((MR_String) ":- mode (")), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_21_33);
      {
        Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Context_12));
      }
      ArgTerms_71 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[28]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[29]), Var_74, InstParams_9);
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), UnQualSymName_14, ArgTerms_71, Context_12, &ModeTerm_73);
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), VarSet_11, (MR_Integer) 0, ModeTerm_73, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_22_34);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]))), ((MR_Box) ((MR_String) ") == ")), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_24_36);
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), Lang_15, VarSet_11, Mode_30, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_25_37);
      func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]))), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_17);
    }
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
    MR_Word conv1_LambdaHeadVar__2_30;

    conv1_LambdaHeadVar__2_30 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1617__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_30));
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
    MR_Word conv0_LambdaHeadVar__2_18;

    conv0_LambdaHeadVar__2_18 = parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1663__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
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
    MR_Word SymName0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 0))));
    MR_Word InstParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 1))));
    MR_Word MaybeForTypeCtor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 2))));
    MR_Word MaybeAbstractInstDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 3))));
    MR_Word InstVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 4))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_6, (MR_Integer) 5))));
    MR_Word UnQualSymName_15;
    MR_Word SymName_16;
    MR_Word Lang_17;
    MR_Word ArgTerms_18;
    MR_Word InstTerm_20;
    MR_Word Var_28;
    MR_Word TypeInfo_27_84;
    MR_Word TypeInfo_28_85;
    MR_Word TypeCtorInfo_31_88;
    MR_Word TypeCtorInfo_32_89;
    MR_Word TypeCtorInfo_33_90;
    MR_String Name_63;
    MR_Word Args1_64;
    MR_Word Term_66;
    MR_Word VarSet_67;
    MR_Word ContextPieces_68;
    MR_Word MaybeInst_69;
    MR_Word Inst_70;
    MR_Word Var_73;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_82;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, SymName0_8, &UnQualSymName_15);
    succeeded = ((MR_tag((MR_Word) UnQualSymName_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Name_63 = ((MR_String) ((MR_hl_field(MR_mktag(0), UnQualSymName_15, (MR_Integer) 0))));
      TypeInfo_27_84 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[28]);
      TypeInfo_28_85 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[30]);
      Var_73 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[3]);
      Args1_64 = mercury__list__map_2_f_0(TypeInfo_27_84, TypeInfo_28_85, Var_73, InstParams_9);
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Name_63));
      }
      Var_79 = mercury__term__context_init_0_f_0();
      TypeCtorInfo_31_88 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
      TypeCtorInfo_32_89 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
      {
        Term_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_66, 0) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), Term_66, 1) = ((MR_Box) (Args1_64));
        MR_hl_field(MR_mktag(0), Term_66, 2) = ((MR_Box) (Var_79));
      }
      mercury__varset__coerce_2_p_0(TypeCtorInfo_31_88, TypeCtorInfo_32_89, InstVarSet_12, &VarSet_67);
      TypeCtorInfo_33_90 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
      ContextPieces_68 = mercury__cord__init_0_f_0(TypeCtorInfo_33_90);
      Var_80 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_scalar_common_7[0]));
      parse_tree__parse_inst_mode_name__parse_inst_5_p_0(Var_80, VarSet_67, ContextPieces_68, Term_66, &MaybeInst_69);
      succeeded = ((MR_tag((MR_Word) MaybeInst_69)) == (MR_Integer) 1);
      if (succeeded)
      {
        Inst_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_69, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Inst_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_70, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_70, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      SymName_16 = SymName0_8;
    else
      SymName_16 = UnQualSymName_15;
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_13);
    Lang_17 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Context_13));
    }
    ArgTerms_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[28]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[29]), Var_28, InstParams_9);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), SymName_16, ArgTerms_18, Context_13, &InstTerm_20);
    if ((MaybeAbstractInstDefn_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) ":- abstract_inst((");
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_12, (MR_Integer) 0, InstTerm_20);
      mercury__io__write_string_3_p_0((MR_String) ")).\n");
    }
    else
    {
      MR_Word Inst_21;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_11, (MR_Integer) 0))));

      Inst_21 = (MR_Word) (Var_31);
      mercury__io__write_string_3_p_0((MR_String) ":- inst (");
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_12, (MR_Integer) 0, InstTerm_20);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      if (!((MaybeForTypeCtor_10 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ForTypeCtor_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeCtor_10, (MR_Integer) 0))));
        MR_Word ForTypeCtorSymName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_22, (MR_Integer) 0))));
        MR_Integer ForTypeCtorArity_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_22, (MR_Integer) 1))));

        mercury__io__write_string_3_p_0((MR_String) "for ");
        parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(ForTypeCtorSymName_23);
        mercury__io__write_string_3_p_0((MR_String) "/");
        mercury__io__write_int_3_p_0(ForTypeCtorArity_24);
        mercury__io__write_string_3_p_0((MR_String) " ");
      }
      mercury__io__write_string_3_p_0((MR_String) "== ");
      parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(Lang_17, InstVarSet_12, Inst_21);
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
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

    parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) (wrapper_arg_1)));
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
    MR_Word conv0_LambdaHeadVar__2_48;

    conv0_LambdaHeadVar__2_48 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1211__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_48));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ItemTypeDefn_6)
{
  {
    MR_Word SymName0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 0))));
    MR_Word TypeParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 1))));
    MR_Word TypeDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 2))));
    MR_Word TypeVarSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 3))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 4))));
    MR_Word SymName_14;
    MR_Word Args_15;
    MR_Word TypeTerm_17;
    MR_Word Var_46;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, SymName0_8, &SymName_14);
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_12);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Context_12));
    }
    Args_15 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[26]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[27]), Var_46, TypeParams_9);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), SymName_14, Args_15, Context_12, &TypeTerm_17);
    switch (MR_tag((MR_Word) TypeDefn_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_24 = (MR_Word) ((MR_Word) (TypeDefn_10));
          MR_Word OoMCtors_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_24, (MR_Integer) 0))));
          MR_Word MaybeCanonical_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_24, (MR_Integer) 1))));
          MR_Word MaybeDirectArgs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_24, (MR_Integer) 2))));
          MR_Word HeadCtor_28;
          MR_Word TailCtors_29;

          mercury__io__write_string_3_p_0((MR_String) ":- type ");
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_11, (MR_Integer) 0, TypeTerm_17);
          HeadCtor_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_25, (MR_Integer) 0))));
          TailCtors_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_25, (MR_Integer) 1))));
          parse_tree__parse_tree_out__mercury_output_ctors_6_p_0(TypeVarSet_11, (MR_Integer) 1, HeadCtor_28, TailCtors_29);
          parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(Info_5, TypeVarSet_11, (MR_Word) ((MR_Unsigned) 0U), MaybeCanonical_26, MaybeDirectArgs_27);
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DetailsSolver_30 = (MR_Word) (MR_body((MR_Word) (TypeDefn_10), (MR_Integer) 1));
          MR_Word SolverTypeDetails_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_30, (MR_Integer) 0))));
          MR_Word Var_89;
          MR_Word MaybeCanonical_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_30, (MR_Integer) 1))));

          mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_11, (MR_Integer) 0, TypeTerm_17);
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (SolverTypeDetails_31));
          }
          parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(Info_5, TypeVarSet_11, Var_89, MaybeCanonical_122, (MR_Word) ((MR_Unsigned) 0U));
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsEqv_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeDefn_10, (MR_Integer) 0))));
          MR_Word EqvType_23 = (MR_Word) (DetailsEqv_22);

          mercury__io__write_string_3_p_0((MR_String) ":- type ");
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_11, (MR_Integer) 0, TypeTerm_17);
          mercury__io__write_string_3_p_0((MR_String) " == ");
          parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TypeVarSet_11, (MR_Integer) 0, EqvType_23);
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsAbstract_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_10, (MR_Integer) 1))));

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
                        parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_17);
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
                              MR_Integer NumBits_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), DetailsAbstract_18, (MR_Integer) 0))));

                              parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_3_p_0(NumBits_21);
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
                        parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_17);
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) ":- type ");
                    parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_11, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_17);
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
                          MR_Integer NumBits_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), DetailsAbstract_18, (MR_Integer) 0))));

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
          case (MR_Integer) 1:
            {
              MR_Word DetailsForeign_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_10, (MR_Integer) 1))));
              MR_Word ForeignType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_32, (MR_Integer) 0))));
              MR_Word Assertions_34;
              MR_String ForeignTypeStr_39;
              MR_Word AssertionsList_40;
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_32, (MR_Integer) 2))));
              MR_Word MaybeCanonical_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_32, (MR_Integer) 1))));

              Assertions_34 = (MR_Word) (Var_49);
              mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_type(");
              switch (MR_tag((MR_Word) ForeignType_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_67;

                    mercury__io__write_string_3_p_0((MR_String) "c, ");
                    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_33, (MR_Integer) 0))));
                    ForeignTypeStr_39 = (MR_String) (Var_67);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_66;

                    mercury__io__write_string_3_p_0((MR_String) "java, ");
                    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignType_33, (MR_Integer) 0))));
                    ForeignTypeStr_39 = (MR_String) (Var_66);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_65;

                    mercury__io__write_string_3_p_0((MR_String) "csharp, ");
                    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_33, (MR_Integer) 0))));
                    ForeignTypeStr_39 = (MR_String) (Var_65);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "erlang, ");
                    ForeignTypeStr_39 = (MR_String) "";
                  }
                  break;
              }
              parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_11, (MR_Integer) 0, TypeTerm_17);
              mercury__io__write_string_3_p_0((MR_String) ", \"");
              mercury__io__write_string_3_p_0(ForeignTypeStr_39);
              mercury__io__write_string_3_p_0((MR_String) "\"");
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_34, &AssertionsList_40);
              if (!((AssertionsList_40 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                mercury__io__write_string_3_p_0((MR_String) ", [");
                mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), AssertionsList_40, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[2]));
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              mercury__io__write_string_3_p_0((MR_String) ")");
              parse_tree__parse_tree_out__mercury_output_where_attributes_7_p_0(Info_5, TypeVarSet_11, (MR_Word) ((MR_Unsigned) 0U), MaybeCanonical_123, (MR_Word) ((MR_Unsigned) 0U));
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_6_p_0(
  MR_Word VarSet_7,
  MR_Word First_8,
  MR_Word HeadCtor_9,
  MR_Word TailCtors_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (First_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_3_p_0((MR_String) "\n    ;       ");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_3_p_0((MR_String) "\n    --->    ");
        break;
    }
    parse_tree__parse_tree_out__mercury_output_ctor_4_p_0(VarSet_7, HeadCtor_9);
    if (!((TailCtors_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadTailCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors_10, (MR_Integer) 0))));
      MR_Word TailTailCtors_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors_10, (MR_Integer) 1))));
      MR_Word next_value_of_HeadCtor_9 = HeadTailCtor_12;
      MR_Word next_value_of_TailCtors_10 = TailTailCtors_13;

      // direct tailcall eliminated
      ;
      First_8 = (MR_Integer) 0;
      HeadCtor_9 = next_value_of_HeadCtor_9;
      TailCtors_10 = next_value_of_TailCtors_10;
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
    MR_Word TypeClassInfo_for_output_51;
    MR_Word MaybeExistConstraints_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 1))));
    MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 2))));
    MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 3))));
    MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 4))));
    MR_String Name_14;
    MR_Word Constraints_15;
    MR_Word ParenWrap_16;
    MR_Word BraceWrap_21;
    MR_Word Var_46;
    MR_String Var_47;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;
    MR_Box conv0_STATE_VARIABLE_IO_48_48;

    Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
    if ((MaybeExistConstraints_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Constraints_15 = (MR_Word) ((MR_Unsigned) 0U);
      ParenWrap_16 = (MR_Integer) 0;
    }
    else
    {
      MR_Word ExistConstraints_17 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_9), (MR_Integer) 1));
      MR_Word ExistQVars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_17, (MR_Integer) 0))));

      Constraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_17, (MR_Integer) 1))));
      parse_tree__mercury_to_mercury__mercury_output_quantifier_5_p_0(TypeVarSet_5, (MR_Integer) 0, ExistQVars_18);
      mercury__io__write_string_3_p_0((MR_String) "(");
      ParenWrap_16 = (MR_Integer) 1;
    }
    succeeded = (Arity_12 == (MR_Integer) 2);
    if (succeeded)
    {
      // binary string simple lookup switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(Name_14, ((&parse_tree__parse_tree_out_vector_common_5[0 + mid_2]))->parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_0:;
    }
    if (succeeded)
    {
      BraceWrap_21 = (MR_Integer) 1;
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    else
      BraceWrap_21 = (MR_Integer) 0;
    if ((Args_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Name_14));
      }
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Var_32);
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    else
    {
      MR_Word Arg_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_11, (MR_Integer) 0))));
      MR_Word Rest_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_11, (MR_Integer) 1))));
      MR_Word Var_36;
      MR_Word Name_57;
      MR_Word Type_58;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Name_14));
      }
      parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(Var_36);
      mercury__io__write_string_3_p_0((MR_String) "(");
      Name_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_22, (MR_Integer) 0))));
      Type_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_22, (MR_Integer) 1))));
      if (!((Name_57 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word FieldName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name_57, (MR_Integer) 0))));
        MR_Word Name_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldName_66, (MR_Integer) 0))));

        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Name_68);
        mercury__io__write_string_3_p_0((MR_String) " :: ");
      }
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TypeVarSet_5, (MR_Integer) 0, Type_58);
      parse_tree__parse_tree_out__mercury_output_remaining_ctor_args_4_p_0(TypeVarSet_5, Rest_23);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    switch (BraceWrap_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_3_p_0((MR_String) " }");
        break;
    }
    Var_46 = (MR_Integer) 0;
    Var_47 = (MR_String) "=>";
    TypeClassInfo_for_output_51 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]);
    parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(TypeClassInfo_for_output_51, TypeVarSet_5, Var_46, Var_47, Constraints_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_48_48);
    switch (ParenWrap_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_3_p_0((MR_String) ")");
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
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Name_24;
      MR_Word Type_25;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      Name_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 0))));
      Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 1))));
      if (!((Name_24 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word FieldName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name_24, (MR_Integer) 0))));
        MR_Word Name_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldName_33, (MR_Integer) 0))));

        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Name_35);
        mercury__io__write_string_3_p_0((MR_String) " :: ");
      }
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(HeadVar__1_1, (MR_Integer) 0, Type_25);
      // direct tailcall eliminated
      ;
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
    MR_bool succeeded = (MaybeSolverTypeDetails_10 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (MaybeCanonical_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (MaybeDirectArgs_12 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
    {
      MR_Word MaybeCmpPred_16;

      mercury__io__write_string_3_p_0((MR_String) "\n    where   ");
      if ((MaybeCanonical_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeCmpPred_16 = (MR_Word) ((MR_Unsigned) 0U);
        if (!((MaybeSolverTypeDetails_10 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word SolverTypeDetails_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_10, (MR_Integer) 0))));

          parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(Info_8, TypeVarSet_9, SolverTypeDetails_19);
          succeeded = (MaybeDirectArgs_12 == (MR_Word) ((MR_Unsigned) 0U));
          if (!(succeeded))
            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
        }
      }
      else
      {
        MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCanonical_11, (MR_Integer) 0))));
        MR_Word MaybeUniPred_91;

        switch (MR_tag((MR_Word) Var_90)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UniPred_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_90, (MR_Integer) 0))));
              MR_Word CmpPred_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_90, (MR_Integer) 1))));

              {
                MaybeUniPred_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUniPred_91, 0) = ((MR_Box) (UniPred_17));
              }
              {
                MaybeCmpPred_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeCmpPred_16, 0) = ((MR_Box) (CmpPred_18));
              }
              if (!((MaybeSolverTypeDetails_10 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word SolverTypeDetails_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_10, (MR_Integer) 0))));

                parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(Info_8, TypeVarSet_9, SolverTypeDetails_56);
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word UniPred_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));

              {
                MaybeUniPred_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUniPred_91, 0) = ((MR_Box) (UniPred_52));
              }
              MaybeCmpPred_16 = (MR_Word) ((MR_Unsigned) 0U);
              if (!((MaybeSolverTypeDetails_10 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word SolverTypeDetails_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_10, (MR_Integer) 0))));

                parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(Info_8, TypeVarSet_9, SolverTypeDetails_67);
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word CmpPred_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_90, (MR_Integer) 0))));

              MaybeUniPred_91 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MaybeCmpPred_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeCmpPred_16, 0) = ((MR_Box) (CmpPred_53));
              }
              if (!((MaybeSolverTypeDetails_10 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word SolverTypeDetails_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_10, (MR_Integer) 0))));

                parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(Info_8, TypeVarSet_9, SolverTypeDetails_78);
                mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MaybeUniPred_91 = (MR_Word) ((MR_Unsigned) 0U);
              MaybeCmpPred_16 = (MR_Word) ((MR_Unsigned) 0U);
              mercury__io__write_string_3_p_0((MR_String) "type_is_abstract_noncanonical");
            }
            break;
        }
        if (!((MaybeUniPred_91 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word UniPredName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUniPred_91, (MR_Integer) 0))));

          mercury__io__write_string_3_p_0((MR_String) "equality is ");
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(UniPredName_20);
          succeeded = (MaybeCmpPred_16 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybeDirectArgs_12 == (MR_Word) ((MR_Unsigned) 0U));
          if (!(succeeded))
            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
        }
      }
      if ((MaybeCmpPred_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        if (!((MaybeDirectArgs_12 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word DirectArgFunctors_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgs_12, (MR_Integer) 0))));

          mercury__io__write_string_3_p_0((MR_String) "direct_arg is [");
          parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(DirectArgFunctors_23);
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
      }
      else
      {
        MR_Word CmpPredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCmpPred_16, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "comparison is ");
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(CmpPredName_21);
        if (!((MaybeDirectArgs_12 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word DirectArgFunctors_94;

          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          DirectArgFunctors_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgs_12, (MR_Integer) 0))));
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__1588__1_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(
  MR_Word Ctors_4)
{
  mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Ctors_4, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[1]));
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

    parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0(
  MR_Word Info_6,
  MR_Word TypeVarSet_7,
  MR_Word Details_8)
{
  {
    MR_Word RepresentationType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_8, (MR_Integer) 0))));
    MR_Word GroundInst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_8, (MR_Integer) 1))));
    MR_Word AnyInst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_8, (MR_Integer) 2))));
    MR_Word MutableInfos_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_8, (MR_Integer) 3))));
    MR_Word Lang_14;
    MR_Word EmptyInstVarSet_15;

    mercury__io__write_string_3_p_0((MR_String) "representation is ");
    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TypeVarSet_7, (MR_Integer) 0, RepresentationType_10);
    Lang_14 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &EmptyInstVarSet_15);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t\tground is ");
    parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(Lang_14, EmptyInstVarSet_15, GroundInst_11);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t\tany is ");
    parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(Lang_14, EmptyInstVarSet_15, AnyInst_12);
    if (!((MutableInfos_13 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_33;

      mercury__io__write_string_3_p_0((MR_String) ",\n\t\tconstraint_store is [\n\t\t\t");
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_solver_type_details_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Info_6));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), MutableInfos_13, (MR_String) ",\n\t\t\t", Var_33);
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

    succeeded = parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
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
