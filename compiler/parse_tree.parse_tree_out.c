/*
** Automatically generated from `parse_tree_out.m'
** by the Mercury compiler,
** version rotd-2021-05-05
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
#include "getopt.mih"
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
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.canonicalize_interface.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_c_java_csharp_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_VA_PseudoTypeInfo_Struct5 parse_tree__parse_tree_out____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__plain_io__type_ctor_info_output_stream_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1898__1_7_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_34,
  MR_Box HeadVar__5_35,
  MR_Box HeadVar__6_36,
  MR_Box * HeadVar__7_37);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1895__1_7_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_28,
  MR_Box HeadVar__5_29,
  MR_Box HeadVar__6_30,
  MR_Box * HeadVar__7_31);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1839__1_5_p_0(
  MR_Word VarSet_15,
  MR_Word LambdaHeadVar__1_35,
  MR_Word LambdaHeadVar__2_36);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1600__1_2_f_0(
  MR_Word Context_9,
  MR_Word LambdaHeadVar__1_20);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1541__1_1_f_0(
  MR_Word LambdaHeadVar__1_17);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1493__1_2_f_0(
  MR_Word Context_15,
  MR_Word LambdaHeadVar__1_31);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__1286__1_4_p_0(
  MR_Word HeadVar__1_13,
  MR_Word HeadVar__2_14);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1043__1_2_f_0(
  MR_Word Context_14,
  MR_Word LambdaHeadVar__1_54);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1008__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1004__1_1_f_0(
  MR_Word LambdaHeadVar__1_39);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1000__1_1_f_0(
  MR_Word LambdaHeadVar__1_35);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__996__1_1_f_0(
  MR_Word LambdaHeadVar__1_31);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__992__1_1_f_0(
  MR_Word LambdaHeadVar__1_27);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__758__1_1_f_0(
  MR_Word HeadVar__1_119);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__756__1_1_f_0(
  MR_Word HeadVar__1_111);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__754__1_1_f_0(
  MR_Word HeadVar__1_103);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__752__1_1_f_0(
  MR_Word HeadVar__1_97);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__750__1_1_f_0(
  MR_Word HeadVar__1_89);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__748__1_1_f_0(
  MR_Word HeadVar__1_81);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__746__1_1_f_0(
  MR_Word HeadVar__1_73);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__744__1_1_f_0(
  MR_Word HeadVar__1_64);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__734__1_1_f_0(
  MR_Word HeadVar__1_260);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__732__1_1_f_0(
  MR_Word HeadVar__1_252);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__730__1_1_f_0(
  MR_Word HeadVar__1_244);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__728__1_1_f_0(
  MR_Word HeadVar__1_238);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__726__1_1_f_0(
  MR_Word HeadVar__1_230);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__724__1_1_f_0(
  MR_Word HeadVar__1_222);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__722__1_1_f_0(
  MR_Word HeadVar__1_214);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__720__1_1_f_0(
  MR_Word HeadVar__1_206);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__718__1_1_f_0(
  MR_Word HeadVar__1_198);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__714__1_1_f_0(
  MR_Word HeadVar__1_186);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__711__1_1_f_0(
  MR_Word HeadVar__1_174);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__709__1_1_f_0(
  MR_Word HeadVar__1_166);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__696__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_128);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_54_57_54_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_128);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__609__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_160);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__582__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_131);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__544__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_203);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__497__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_163);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__350__1_5_p_0(
  MR_Word Info_6,
  MR_Word HeadVar__2_308,
  MR_Word HeadVar__3_309);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_53_48_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_308,
  MR_Word HeadVar__3_309);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__348__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_303);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_52_56_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_303);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__313__1_5_p_0(
  MR_Word Info_6,
  MR_Word HeadVar__2_245,
  MR_Word HeadVar__3_246);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_49_51_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_245,
  MR_Word HeadVar__3_246);

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
parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_4_p_0(
  MR_Word Stream_5,
  MR_Word ItemFIM_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_2_5_p_0(
  MR_Word Info_6,
  MR_Word ItemMutable_7,
  MR_Word Stream_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_finalise_5_p_0(
  MR_Word HeadVar__1_6,
  MR_Word Stream_7,
  MR_Word ItemFinalise_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_initialise_5_p_0(
  MR_Word HeadVar__1_6,
  MR_Word Stream_7,
  MR_Word ItemInitialise_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(
  MR_Word HeadVar__1_6,
  MR_Word Stream_7,
  MR_Word ItemInstance_8);

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decl_5_p_0(
  MR_Word Lang_6,
  MR_Word Decl_7,
  MR_Word Stream_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_6_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__3_3,
  MR_Box S_11,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(
  MR_Word HeadVar__1_6,
  MR_Word Stream_7,
  MR_Word ItemPromise_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_sym_name_string_pair_4_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_unqual_sym_name_string_pair_4_p_0(
  MR_Word TypeClassInfo_for_output_18,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_foreign_enum_5_p_0(
  MR_Word TypeClassInfo_for_output_35,
  MR_Word _Info_6,
  MR_Box S_7,
  MR_Word ItemForeignEnum_8,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_foreign_enums_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_foreign_enums_5_p_0(
  MR_Word TypeClassInfo_for_output_21,
  MR_Word Info_6,
  MR_Box S_7,
  MR_Word CJCsnums_8,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ModeCtorAllDefns_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word InstCtorAllDefns_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TypeCtorAllDefns_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Avail_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemInclude_8);

static void MR_CALL 
parse_tree__parse_tree_out__write_import_use_map_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word ImportAndOrUse_8);

static void MR_CALL 
parse_tree__parse_tree_out__write_include_module_map_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_35(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(
  MR_Word Stream_5,
  MR_Word Section_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word MaybeVersionNumbers_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word MaybePrevSectionKind_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(
  MR_Word Stream_6,
  MR_String Decl_7,
  MR_Word ModuleName_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_105_110_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemFinalise_8);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemInitialise_8);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemInstance_8);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemPromise_8);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_output_38,
  MR_Word ItemForeignExportEnum_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_output_35,
  MR_Box S_7,
  MR_Word ItemForeignEnum_8,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemMutable_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemTypeClass_8);

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decls_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word ClassDecls_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemModeDecl_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemPredDecl_8);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemModeDefn_8);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemInstDefn_8);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemTypeDefn_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_7_p_0(
  MR_Word VarSet_8,
  MR_Word First_9,
  MR_Word HeadCtor_10,
  MR_Word TailCtors_11,
  MR_Word Stream_12);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctor_args_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Word HeadArg_9,
  MR_Word TailArgs_10);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_subtype_4_p_0(
  MR_Word Stream_5,
  MR_Word TypeCtor_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_4_p_0(
  MR_Word Stream_5,
  MR_Integer NumBits_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word TypeVarSet_9,
  MR_Word Details_10);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_4_p_0(
  MR_Word Stream_5,
  MR_Word Ctors_6);

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


static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[29][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[32][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[9][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[36][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[2][6];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[19][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_8[1][1];

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_9[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[3][10];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_11[3][9];


/* sealed */ struct parse_tree__parse_tree_out__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_5_0_s parse_tree__parse_tree_out_vector_common_5[8];



static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[29][2] = {
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[22]))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 27 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 28 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[32][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_direct_arg_functors_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[1])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[2])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[3])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[4])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_20)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_22)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[7])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_24)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[8])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_30)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_31)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_33)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[12])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_35)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[7])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[8])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[12])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[13])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[14])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[15])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[16])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[17])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[18])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[9][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[36][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_c_java_csharp_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 23 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 24 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 25 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 26 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 27 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 28 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 29 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 30 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 31 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 32 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 33 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 34 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 35 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[19][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_8[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_9[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_11[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};


static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_5_0_s parse_tree__parse_tree_out_vector_common_5[8] = {
  /* row 0 */   {     (MR_String) ";" },
  /* row 1 */   {     (MR_String) "=>" },
  /* row 2 */   {     (MR_String) "some" },
  /* row 3 */   {     (MR_String) "{}" },
  /* row 4 */   {     (MR_String) ";" },
  /* row 5 */   {     (MR_String) "=>" },
  /* row 6 */   {     (MR_String) "some" },
  /* row 7 */   {     (MR_String) "{}" },
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_c_java_csharp_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
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

static const MR_VA_PseudoTypeInfo_Struct5 parse_tree__parse_tree_out____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__plain_io__type_ctor_info_output_stream_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out__parse_tree__parse_tree_out__type_ctor_info_output_parse_tree_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.parse_tree_out",
  (MR_String) "output_parse_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__plain_io__type_ctor_info_output_stream_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1898__1_7_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_34,
  MR_Box HeadVar__5_35,
  MR_Box HeadVar__6_36,
  MR_Box * HeadVar__7_37)
{
  parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_output_27, TypeVarSet_7, VarNamePrint_8, HeadVar__4_34, HeadVar__5_35, HeadVar__6_36, HeadVar__7_37);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1895__1_7_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_28,
  MR_Box HeadVar__5_29,
  MR_Box HeadVar__6_30,
  MR_Box * HeadVar__7_31)
{
  parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_output_27, TypeVarSet_7, VarNamePrint_8, HeadVar__4_28, HeadVar__5_29, HeadVar__6_30, HeadVar__7_31);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1839__1_5_p_0(
  MR_Word VarSet_15,
  MR_Word LambdaHeadVar__1_35,
  MR_Word LambdaHeadVar__2_36)
{
  {
    MR_String VarName_22;

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_15, LambdaHeadVar__1_35, &VarName_22);
    mercury__io__write_string_4_p_0(LambdaHeadVar__2_36, VarName_22);
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1600__1_2_f_0(
  MR_Word Context_9,
  MR_Word LambdaHeadVar__1_20)
{
  {
    MR_Word LambdaHeadVar__2_21;

    {
      LambdaHeadVar__2_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_21, 0) = ((MR_Box) (LambdaHeadVar__1_20));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_21, 1) = ((MR_Box) (Context_9));
    }
    return LambdaHeadVar__2_21;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1541__1_1_f_0(
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
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1493__1_2_f_0(
  MR_Word Context_15,
  MR_Word LambdaHeadVar__1_31)
{
  {
    MR_Word LambdaHeadVar__2_32;

    {
      LambdaHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_32, 0) = ((MR_Box) (LambdaHeadVar__1_31));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_32, 1) = ((MR_Box) (Context_15));
    }
    return LambdaHeadVar__2_32;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__1286__1_4_p_0(
  MR_Word HeadVar__1_13,
  MR_Word HeadVar__2_14)
{
  {
    MR_Box conv0_HeadVar__4_16;

    parse_tree__mercury_to_mercury__mercury_format_sym_name_arity_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), HeadVar__1_13, ((MR_Box) (HeadVar__2_14)), ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_16);
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1043__1_2_f_0(
  MR_Word Context_14,
  MR_Word LambdaHeadVar__1_54)
{
  {
    MR_Word LambdaHeadVar__2_55;

    {
      LambdaHeadVar__2_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_55, 0) = ((MR_Box) (LambdaHeadVar__1_54));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_55, 1) = ((MR_Box) (Context_14));
    }
    return LambdaHeadVar__2_55;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1008__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  {
    MR_Word LambdaHeadVar__2_44;
    MR_Word Var_45;
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 2))));
    MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 0))));
    MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 1))));
    MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 3))));
    MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 4))));
    MR_Integer Var_124 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 5))));

    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      LambdaHeadVar__2_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_44, 0) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_44, 1) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_44, 2) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_44, 3) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_44, 4) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_44, 5) = ((MR_Box) (Var_124));
    }
    return LambdaHeadVar__2_44;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1004__1_1_f_0(
  MR_Word LambdaHeadVar__1_39)
{
  {
    MR_Word LambdaHeadVar__2_40;
    MR_Word Var_41;
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_39, (MR_Integer) 2))));
    MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_39, (MR_Integer) 0))));
    MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_39, (MR_Integer) 1))));
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_39, (MR_Integer) 3))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_39, (MR_Integer) 4))));
    MR_Integer Var_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_39, (MR_Integer) 5))));

    Var_41 = (MR_Word) ((MR_Word) (Var_42));
    {
      LambdaHeadVar__2_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_40, 0) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_40, 1) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_40, 2) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_40, 3) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_40, 4) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_40, 5) = ((MR_Box) (Var_113));
    }
    return LambdaHeadVar__2_40;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1000__1_1_f_0(
  MR_Word LambdaHeadVar__1_35)
{
  {
    MR_Word LambdaHeadVar__2_36;
    MR_Word Var_37;
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 2))));
    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 0))));
    MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 1))));
    MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 3))));
    MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 4))));
    MR_Integer Var_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 5))));

    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (Var_38));
    }
    {
      LambdaHeadVar__2_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_36, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_36, 1) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_36, 2) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_36, 3) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_36, 4) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_36, 5) = ((MR_Box) (Var_102));
    }
    return LambdaHeadVar__2_36;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__996__1_1_f_0(
  MR_Word LambdaHeadVar__1_31)
{
  {
    MR_Word LambdaHeadVar__2_32;
    MR_Word Var_33;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 2))));
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 0))));
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 1))));
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 3))));
    MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 4))));
    MR_Integer Var_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 5))));

    Var_33 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_34)));
    {
      LambdaHeadVar__2_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 0) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 1) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 3) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 4) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 5) = ((MR_Box) (Var_91));
    }
    return LambdaHeadVar__2_32;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__992__1_1_f_0(
  MR_Word LambdaHeadVar__1_27)
{
  {
    MR_Word LambdaHeadVar__2_28;
    MR_Word Var_29;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_27, (MR_Integer) 2))));
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_27, (MR_Integer) 0))));
    MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_27, (MR_Integer) 1))));
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_27, (MR_Integer) 3))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_27, (MR_Integer) 4))));
    MR_Integer Var_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_27, (MR_Integer) 5))));

    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      LambdaHeadVar__2_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, 1) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, 3) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, 4) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, 5) = ((MR_Box) (Var_80));
    }
    return LambdaHeadVar__2_28;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__758__1_1_f_0(
  MR_Word HeadVar__1_119)
{
  {
    MR_Word HeadVar__2_120;
    MR_Box conv0_HeadVar__2_120;

    conv0_HeadVar__2_120 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), HeadVar__1_119);
    HeadVar__2_120 = ((MR_Word) (conv0_HeadVar__2_120));
    return HeadVar__2_120;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__756__1_1_f_0(
  MR_Word HeadVar__1_111)
{
  {
    MR_Word HeadVar__2_112;
    MR_Box conv0_HeadVar__2_112;

    conv0_HeadVar__2_112 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), HeadVar__1_111);
    HeadVar__2_112 = ((MR_Word) (conv0_HeadVar__2_112));
    return HeadVar__2_112;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__754__1_1_f_0(
  MR_Word HeadVar__1_103)
{
  {
    MR_Word HeadVar__2_104;
    MR_Box conv0_HeadVar__2_104;

    conv0_HeadVar__2_104 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_103);
    HeadVar__2_104 = ((MR_Word) (conv0_HeadVar__2_104));
    return HeadVar__2_104;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__752__1_1_f_0(
  MR_Word HeadVar__1_97)
{
  {
    MR_Word HeadVar__2_98;
    MR_Box conv0_HeadVar__2_98;

    conv0_HeadVar__2_98 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_97);
    HeadVar__2_98 = ((MR_Word) (conv0_HeadVar__2_98));
    return HeadVar__2_98;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__750__1_1_f_0(
  MR_Word HeadVar__1_89)
{
  {
    MR_Word HeadVar__2_90;
    MR_Box conv0_HeadVar__2_90;

    conv0_HeadVar__2_90 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), HeadVar__1_89);
    HeadVar__2_90 = ((MR_Word) (conv0_HeadVar__2_90));
    return HeadVar__2_90;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__748__1_1_f_0(
  MR_Word HeadVar__1_81)
{
  {
    MR_Word HeadVar__2_82;
    MR_Box conv0_HeadVar__2_82;

    conv0_HeadVar__2_82 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), HeadVar__1_81);
    HeadVar__2_82 = ((MR_Word) (conv0_HeadVar__2_82));
    return HeadVar__2_82;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__746__1_1_f_0(
  MR_Word HeadVar__1_73)
{
  {
    MR_Word HeadVar__2_74;
    MR_Box conv0_HeadVar__2_74;

    conv0_HeadVar__2_74 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), HeadVar__1_73);
    HeadVar__2_74 = ((MR_Word) (conv0_HeadVar__2_74));
    return HeadVar__2_74;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__744__1_1_f_0(
  MR_Word HeadVar__1_64)
{
  {
    MR_Word HeadVar__2_65;
    MR_Box conv0_HeadVar__2_65;

    conv0_HeadVar__2_65 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), HeadVar__1_64);
    HeadVar__2_65 = ((MR_Word) (conv0_HeadVar__2_65));
    return HeadVar__2_65;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__734__1_1_f_0(
  MR_Word HeadVar__1_260)
{
  {
    MR_Word HeadVar__2_261;
    MR_Box conv0_HeadVar__2_261;

    conv0_HeadVar__2_261 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), HeadVar__1_260);
    HeadVar__2_261 = ((MR_Word) (conv0_HeadVar__2_261));
    return HeadVar__2_261;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__732__1_1_f_0(
  MR_Word HeadVar__1_252)
{
  {
    MR_Word HeadVar__2_253;
    MR_Box conv0_HeadVar__2_253;

    conv0_HeadVar__2_253 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), HeadVar__1_252);
    HeadVar__2_253 = ((MR_Word) (conv0_HeadVar__2_253));
    return HeadVar__2_253;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__730__1_1_f_0(
  MR_Word HeadVar__1_244)
{
  {
    MR_Word HeadVar__2_245;
    MR_Box conv0_HeadVar__2_245;

    conv0_HeadVar__2_245 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_244);
    HeadVar__2_245 = ((MR_Word) (conv0_HeadVar__2_245));
    return HeadVar__2_245;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__728__1_1_f_0(
  MR_Word HeadVar__1_238)
{
  {
    MR_Word HeadVar__2_239;
    MR_Box conv0_HeadVar__2_239;

    conv0_HeadVar__2_239 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_238);
    HeadVar__2_239 = ((MR_Word) (conv0_HeadVar__2_239));
    return HeadVar__2_239;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__726__1_1_f_0(
  MR_Word HeadVar__1_230)
{
  {
    MR_Word HeadVar__2_231;
    MR_Box conv0_HeadVar__2_231;

    conv0_HeadVar__2_231 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), HeadVar__1_230);
    HeadVar__2_231 = ((MR_Word) (conv0_HeadVar__2_231));
    return HeadVar__2_231;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__724__1_1_f_0(
  MR_Word HeadVar__1_222)
{
  {
    MR_Word HeadVar__2_223;
    MR_Box conv0_HeadVar__2_223;

    conv0_HeadVar__2_223 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), HeadVar__1_222);
    HeadVar__2_223 = ((MR_Word) (conv0_HeadVar__2_223));
    return HeadVar__2_223;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__722__1_1_f_0(
  MR_Word HeadVar__1_214)
{
  {
    MR_Word HeadVar__2_215;
    MR_Box conv0_HeadVar__2_215;

    conv0_HeadVar__2_215 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), HeadVar__1_214);
    HeadVar__2_215 = ((MR_Word) (conv0_HeadVar__2_215));
    return HeadVar__2_215;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__720__1_1_f_0(
  MR_Word HeadVar__1_206)
{
  {
    MR_Word HeadVar__2_207;
    MR_Box conv0_HeadVar__2_207;

    conv0_HeadVar__2_207 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), HeadVar__1_206);
    HeadVar__2_207 = ((MR_Word) (conv0_HeadVar__2_207));
    return HeadVar__2_207;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__718__1_1_f_0(
  MR_Word HeadVar__1_198)
{
  {
    MR_Word HeadVar__2_199;
    MR_Box conv0_HeadVar__2_199;

    conv0_HeadVar__2_199 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), HeadVar__1_198);
    HeadVar__2_199 = ((MR_Word) (conv0_HeadVar__2_199));
    return HeadVar__2_199;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__714__1_1_f_0(
  MR_Word HeadVar__1_186)
{
  {
    MR_Word HeadVar__2_187;
    MR_Box conv0_HeadVar__2_187;

    conv0_HeadVar__2_187 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), HeadVar__1_186);
    HeadVar__2_187 = ((MR_Word) (conv0_HeadVar__2_187));
    return HeadVar__2_187;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__711__1_1_f_0(
  MR_Word HeadVar__1_174)
{
  {
    MR_Word HeadVar__2_175;
    MR_Box conv0_HeadVar__2_175;

    conv0_HeadVar__2_175 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), HeadVar__1_174);
    HeadVar__2_175 = ((MR_Word) (conv0_HeadVar__2_175));
    return HeadVar__2_175;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__709__1_1_f_0(
  MR_Word HeadVar__1_166)
{
  {
    MR_Word HeadVar__2_167;
    MR_Box conv0_HeadVar__2_167;

    conv0_HeadVar__2_167 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), HeadVar__1_166);
    HeadVar__2_167 = ((MR_Word) (conv0_HeadVar__2_167));
    return HeadVar__2_167;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__696__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_128)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_54_57_54_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_128);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_54_57_54_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_128)
{
  {
    MR_Box conv0_HeadVar__5_130;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), ((MR_Box) (Stream_7)), HeadVar__3_128, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_130);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__609__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_160)
{
  {
    MR_Box conv0_HeadVar__5_162;

    parse_tree__parse_tree_out__mercury_format_foreign_enums_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Info_6, ((MR_Box) (Stream_7)), HeadVar__3_160, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_162);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__582__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_131)
{
  {
    MR_Box conv0_HeadVar__5_133;

    parse_tree__parse_tree_out__mercury_format_foreign_enums_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Info_6, ((MR_Box) (Stream_7)), HeadVar__3_131, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_133);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__544__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_203)
{
  {
    MR_Box conv0_HeadVar__5_205;

    parse_tree__parse_tree_out__mercury_format_foreign_enums_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Info_6, ((MR_Box) (Stream_7)), HeadVar__3_203, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_205);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__497__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_163)
{
  {
    MR_Box conv0_HeadVar__5_165;

    parse_tree__parse_tree_out__mercury_format_foreign_enums_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Info_6, ((MR_Box) (Stream_7)), HeadVar__3_163, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_165);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__350__1_5_p_0(
  MR_Word Info_6,
  MR_Word HeadVar__2_308,
  MR_Word HeadVar__3_309)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_53_48_95_95_49_95_95_91_49_93_95_48_5_p_0(HeadVar__2_308, HeadVar__3_309);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_53_48_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_308,
  MR_Word HeadVar__3_309)
{
  {
    MR_Box conv0_HeadVar__5_311;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), HeadVar__2_308, ((MR_Box) (HeadVar__3_309)), ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_311);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__348__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_303)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_52_56_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_303);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_52_56_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_303)
{
  {
    MR_Box conv0_HeadVar__5_305;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), ((MR_Box) (Stream_7)), HeadVar__3_303, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_305);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__313__1_5_p_0(
  MR_Word Info_6,
  MR_Word HeadVar__2_245,
  MR_Word HeadVar__3_246)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_49_51_95_95_49_95_95_91_49_93_95_48_5_p_0(HeadVar__2_245, HeadVar__3_246);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_51_49_51_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_245,
  MR_Word HeadVar__3_246)
{
  {
    MR_Box conv0_HeadVar__5_248;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), HeadVar__2_245, ((MR_Box) (HeadVar__3_246)), ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_248);
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
parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_4_p_0(
  MR_Word Stream_5,
  MR_Word ItemFIM_6)
{
  {
    MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemFIM_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFIM_6, (MR_Integer) 1))));
    MR_Word FIMSpec_12;

    {
      FIMSpec_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIMSpec_12, 0) = (MR_Box) ((MR_Unsigned) (Lang_8));
      MR_hl_field(MR_mktag(0), FIMSpec_12, 1) = ((MR_Box) (ModuleName_9));
    }
    parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(Stream_5, FIMSpec_12);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_2_5_p_0(
  MR_Word Info_6,
  MR_Word ItemMutable_7,
  MR_Word Stream_8)
{
  parse_tree__parse_tree_out__mercury_output_item_mutable_5_p_0(Info_6, Stream_8, ItemMutable_7);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_finalise_5_p_0(
  MR_Word HeadVar__1_6,
  MR_Word Stream_7,
  MR_Word ItemFinalise_8)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_105_110_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemFinalise_8);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_initialise_5_p_0(
  MR_Word HeadVar__1_6,
  MR_Word Stream_7,
  MR_Word ItemInitialise_8)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemInitialise_8);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(
  MR_Word HeadVar__1_6,
  MR_Word Stream_7,
  MR_Word ItemInstance_8)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemInstance_8);
}

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decl_5_p_0(
  MR_Word Lang_6,
  MR_Word Decl_7,
  MR_Word Stream_8)
{
  {
    MR_bool succeeded;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
    if (((MR_tag((MR_Word) Decl_7)) == (MR_Integer) 1))
    {
      MR_Word ModeInfo_26 = (MR_Word) (MR_body((MR_Word) (Decl_7), (MR_Integer) 1));
      MR_Word Modes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_26, (MR_Integer) 2))));
      MR_Word SymName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_26, (MR_Integer) 0))));
      MR_Word PredOrFunc_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_26, (MR_Integer) 1))));
      MR_Word WithInst_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_26, (MR_Integer) 3))));
      MR_Word MaybeDetism_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_26, (MR_Integer) 4))));
      MR_Word InstVarSet_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_26, (MR_Integer) 5))));
      MR_String Name_60;
      MR_Word Var_34;

      Name_60 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_54);
      succeeded = (WithInst_56 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (PredOrFunc_55 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredOrFunc_55, (MR_Integer) 0))));
          succeeded = (Var_34 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word FuncModes_28;
        MR_Word RetMode_29;
        MR_Word Var_35;
        MR_Box conv0_RetMode_29;
        MR_Box conv1_STATE_VARIABLE_IO_31;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_27, &FuncModes_28, &conv0_RetMode_29);
        RetMode_29 = ((MR_Word) (conv0_RetMode_29));
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Name_60));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_6, InstVarSet_58, Var_35, FuncModes_28, RetMode_29, MaybeDetism_57, (MR_String) "", (MR_String) "", ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31);
      }
      else
      {
        MR_Word Var_39;
        MR_Box conv2_STATE_VARIABLE_IO_31;

        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Name_60));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_6, InstVarSet_58, Var_39, Modes_27, WithInst_56, MaybeDetism_57, (MR_String) "", (MR_String) "", ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31);
      }
    }
    else
    {
      MR_Word PredOrFuncInfo_10 = (MR_Word) ((MR_Word) (Decl_7));
      MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 0))));
      MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word TypesAndModes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 2))));
      MR_Word WithType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 3))));
      MR_Word WithInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 4))));
      MR_Word MaybeDetism_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 5))));
      MR_Word TypeVarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 6))));
      MR_Word InstVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 7))));
      MR_Word ExistQVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 8))));
      MR_Word Purity_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 9))) & (MR_Integer) 3);
      MR_Word Constraints_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_10, (MR_Integer) 10))));
      MR_String Name_23;

      Name_23 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_11);
      succeeded = (PredOrFunc_12 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (WithType_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word FuncTypesAndModes_24;
        MR_Word RetTypeAndMode_25;
        MR_Word Var_43;
        MR_Box conv3_RetTypeAndMode_25;
        MR_Box conv4_STATE_VARIABLE_IO_31;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_13, &FuncTypesAndModes_24, &conv3_RetTypeAndMode_25);
        RetTypeAndMode_25 = ((MR_Word) (conv3_RetTypeAndMode_25));
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Name_23));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_16_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_6, TypeVarSet_17, InstVarSet_18, ExistQVars_19, Var_43, FuncTypesAndModes_24, RetTypeAndMode_25, MaybeDetism_16, Purity_20, Constraints_21, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_31);
      }
      else
      {
        MR_Word Var_48;
        MR_Box conv5_STATE_VARIABLE_IO_31;

        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Name_23));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_18_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_6, TypeVarSet_17, InstVarSet_18, PredOrFunc_12, ExistQVars_19, Var_48, TypesAndModes_13, WithType_14, WithInst_15, MaybeDetism_16, Purity_20, Constraints_21, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_31);
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1898__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1895__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_6_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__3_3,
  MR_Box S_11,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  {
    MR_Word Domain_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Range_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_16_16;
    MR_Word Var_17;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Box STATE_VARIABLE_U_21_21;
    MR_Word Var_22;
    MR_Box STATE_VARIABLE_U_24_24;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) "(")), S_11, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_16_16);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TypeClassInfo_for_output_27));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (TypeVarSet_7));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (VarNamePrint_8));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 27))));
    func_1(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[24])), ((MR_Box) (Var_17)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Domain_9)), S_11, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_19_19);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) " -> ")), S_11, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_21_21);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (TypeClassInfo_for_output_27));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (TypeVarSet_7));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (VarNamePrint_8));
    }
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 27))));
    func_3(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[24])), ((MR_Box) (Var_22)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Range_10)), S_11, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_24_24);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) ")")), S_11, STATE_VARIABLE_U_24_24, STATE_VARIABLE_U_14);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(
  MR_Word HeadVar__1_6,
  MR_Word Stream_7,
  MR_Word ItemPromise_8)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemPromise_8);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_sym_name_string_pair_4_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  {
    MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String String_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_12_12;
    MR_Box STATE_VARIABLE_U_14_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_16, (MR_Integer) 0, SymName_5, S_7, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_12_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) ((MR_String) " - ")), S_7, STATE_VARIABLE_U_12_12, &STATE_VARIABLE_U_14_14);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 21))));
    func_1(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (String_6)), S_7, STATE_VARIABLE_U_14_14, STATE_VARIABLE_U_10);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_unqual_sym_name_string_pair_4_p_0(
  MR_Word TypeClassInfo_for_output_18,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12)
{
  {
    MR_Word SymName0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String String_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Name_9;
    MR_Word SymName_10;
    MR_Box STATE_VARIABLE_U_14_14;
    MR_Box STATE_VARIABLE_U_16_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    Name_9 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_5);
    {
      SymName_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SymName_10, 0) = ((MR_Box) (Name_9));
    }
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_18, (MR_Integer) 0, SymName_10, S_7, STATE_VARIABLE_U_0_11, &STATE_VARIABLE_U_14_14);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) ((MR_String) " - ")), S_7, STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_16_16);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 21))));
    func_1(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) (String_6)), S_7, STATE_VARIABLE_U_16_16, STATE_VARIABLE_U_12);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_foreign_enum_5_p_0(
  MR_Word TypeClassInfo_for_output_35,
  MR_Word _Info_6,
  MR_Box S_7,
  MR_Word ItemForeignEnum_8,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0(TypeClassInfo_for_output_35, S_7, ItemForeignEnum_8, STATE_VARIABLE_U_0_18, STATE_VARIABLE_U_19);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_foreign_enums_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_format_item_foreign_enum_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_foreign_enums_5_p_0(
  MR_Word TypeClassInfo_for_output_21,
  MR_Word Info_6,
  MR_Box S_7,
  MR_Word CJCsnums_8,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  {
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_35_35;
    MR_Word CEnums_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsnums_8, (MR_Integer) 0))));
    MR_Word JavaEnums_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsnums_8, (MR_Integer) 1))));
    MR_Word CsharpEnums_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsnums_8, (MR_Integer) 2))));
    MR_Word Var_15;
    MR_Box STATE_VARIABLE_U_16_16;
    MR_Box STATE_VARIABLE_U_18_18;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_foreign_enums_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TypeClassInfo_for_output_21));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_15, 5) = S_7;
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_output_21, (MR_Integer) 2, &TypeInfo_27_27);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), TypeInfo_27_27, Var_15, CEnums_10, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_16_16);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_output_21, (MR_Integer) 2, &TypeInfo_31_31);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), TypeInfo_31_31, Var_15, JavaEnums_11, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_18_18);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_output_21, (MR_Integer) 2, &TypeInfo_35_35);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), TypeInfo_35_35, Var_15, CsharpEnums_12, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_14);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ModeCtorAllDefns_8)
{
  {
    MR_Word Abs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtorAllDefns_8, (MR_Integer) 0))));
    MR_Word Eqv_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtorAllDefns_8, (MR_Integer) 1))));
    MR_Word Var_14;
    MR_Box conv0_STATE_VARIABLE_IO_15_15;
    MR_Box conv1_STATE_VARIABLE_IO_13;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[19]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Abs_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15_15);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Eqv_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word InstCtorAllDefns_8)
{
  {
    MR_Word Abs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtorAllDefns_8, (MR_Integer) 0))));
    MR_Word Eqv_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtorAllDefns_8, (MR_Integer) 1))));
    MR_Word Var_14;
    MR_Box conv0_STATE_VARIABLE_IO_15_15;
    MR_Box conv1_STATE_VARIABLE_IO_13;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[18]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Abs_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15_15);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Eqv_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_44;

    conv4_LambdaHeadVar__2_44 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1008__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_44));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_40;

    conv3_LambdaHeadVar__2_40 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1004__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_40));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_36;

    conv2_LambdaHeadVar__2_36 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__1000__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_36));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_32;

    conv1_LambdaHeadVar__2_32 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__996__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_32));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_28;

    conv0_LambdaHeadVar__2_28 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_type_ctor_all_defns__992__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_28));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TypeCtorAllDefns_8)
{
  {
    MR_Word SolverAbs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_8, (MR_Integer) 0))));
    MR_Word SolverNonAbs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_8, (MR_Integer) 1))));
    MR_Word StdAbs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_8, (MR_Integer) 2))));
    MR_Word StdEqv_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_8, (MR_Integer) 3))));
    MR_Word StdDu_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_8, (MR_Integer) 4))));
    MR_Word CJCs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAllDefns_8, (MR_Integer) 5))));
    MR_Word ForeignC_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCs_15, (MR_Integer) 0))));
    MR_Word ForeignJava_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCs_15, (MR_Integer) 1))));
    MR_Word ForeignCsharp_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCs_15, (MR_Integer) 2))));
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_66;
    MR_Word Var_69;
    MR_Box conv5_STATE_VARIABLE_IO_49_49;
    MR_Box conv6_STATE_VARIABLE_IO_52_52;
    MR_Box conv7_STATE_VARIABLE_IO_55_55;
    MR_Box conv8_STATE_VARIABLE_IO_58_58;
    MR_Box conv9_STATE_VARIABLE_IO_61_61;
    MR_Box conv10_STATE_VARIABLE_IO_64_64;
    MR_Box conv11_STATE_VARIABLE_IO_67_67;
    MR_Box conv12_STATE_VARIABLE_IO_26;

    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[16]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (Stream_7));
    }
    Var_48 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[18]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[27]), SolverAbs_10);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_48, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_49_49);
    Var_51 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[19]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[28]), SolverNonAbs_11);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_51, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_52_52);
    Var_54 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[18]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[27]), StdAbs_12);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_54, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_55_55);
    Var_57 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[20]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[29]), StdEqv_13);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_57, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_58_58);
    Var_60 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[21]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[30]), StdDu_14);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_60, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_61_61);
    Var_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[23]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[31]), ForeignC_16);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_63, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_64_64);
    Var_66 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[23]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[31]), ForeignJava_17);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_66, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_67_67);
    Var_69 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[23]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[31]), ForeignCsharp_18);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_69, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_26);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Avail_8)
{
  {
    MR_Word ModuleName_10;
    MR_Word Context_11;
    MR_String Decl_13;

    if (((MR_tag((MR_Word) Avail_8)) == (MR_Integer) 0))
    {
      MR_Word Var_17 = (MR_Word) ((MR_Word) (Avail_8));

      ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      Decl_13 = (MR_String) "import_module";
    }
    else
    {
      MR_Word Var_16 = (MR_Word) (MR_body((MR_Word) (Avail_8), (MR_Integer) 1));

      ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
      Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
      Decl_13 = (MR_String) "use_module";
    }
    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_11, Stream_7);
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, Decl_13, ModuleName_10);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemInclude_8)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInclude_8, (MR_Integer) 0))));
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInclude_8, (MR_Integer) 1))));

    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_11, Stream_7);
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "include_module", ModuleName_10);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__write_import_use_map_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word ImportAndOrUse_8)
{
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(ModuleName_7, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " -> ");
    if (((MR_tag((MR_Word) ImportAndOrUse_8)) == (MR_Integer) 0))
    {
      MR_Word SectionImportAndOrUse_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportAndOrUse_8, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) SectionImportAndOrUse_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "int_import");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "int_use");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "imp_import");
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SectionImportAndOrUse_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "imp_use");
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "int_use_imp_import");
              break;
          }
          break;
      }
    }
    else
    {
      MR_Word ImplicitImportAndOrUse_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ImportAndOrUse_8, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (ImplicitImportAndOrUse_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "implicit_imp_use");
          break;
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "implicit_int_import");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "implicit_int_use");
          break;
      }
    }
    mercury__io__nl_3_p_0(Stream_6);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__write_include_module_map_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8)
{
  {
    MR_Word Section_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InclInfo_8, (MR_Integer) 0))) & (MR_Integer) 1);

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(ModuleName_7, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " -> ");
    switch (Section_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "implementation");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "interface");
        break;
    }
    mercury__io__nl_3_p_0(Stream_6);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(
  MR_Word Stream_5,
  MR_Word FIMSpec_6)
{
  {
    MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMSpec_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIMSpec_6, (MR_Integer) 1))));
    MR_Box conv0_STATE_VARIABLE_IO_14_14;

    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma foreign_import_module(");
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_8, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_5_p_0((MR_Integer) 1, ModuleName_9, Stream_5);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_clause__output_instance_method_clause_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0(
  MR_Word Method_5,
  MR_Word Stream_6)
{
  {
    MR_Word PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word MethodName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_5, (MR_Integer) 1))));
    MR_Word Defn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_5, (MR_Integer) 2))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Method_5, (MR_Integer) 3))));

    if (((MR_tag((MR_Word) Defn_10)) == (MR_Integer) 1))
    {
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Defn_10, (MR_Integer) 0))));
      MR_Word Var_19;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t(");
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[35]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (MethodName_9));
      }
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), Var_19, (MR_String) "),\n\t(", Items_14, Stream_6);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
    }
    else
    {
      MR_Word PredName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_10, (MR_Integer) 0))));

      mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 9);
      switch (PredOrFunc_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "func(");
          break;
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "pred(");
          break;
      }
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_5_p_0((MR_Integer) 0, MethodName_9, Stream_6);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "/");
      mercury__io__write_int_4_p_0(Stream_6, Arity_11);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ") is ");
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(PredName_13, Stream_6);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__maybe_brace_for_name_prefix_suffix_4_p_0(
  MR_Integer Arity_5,
  MR_String Name_6,
  MR_String * Prefix_7,
  MR_String * Suffix_8)
{
  {
    MR_bool succeeded = (Arity_5 == (MR_Integer) 2);
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      // binary string simple lookup switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(Name_6, ((&parse_tree__parse_tree_out_vector_common_5[4 + mid_2]))->parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0);
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
      *Prefix_7 = (MR_String) "{ ";
      *Suffix_8 = (MR_String) " }";
    }
    else
    {
      *Prefix_7 = (MR_String) "";
      *Suffix_8 = (MR_String) "";
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_int_for_opt_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ForOptIntSpec_8)
{
  switch (MR_tag((MR_Word) ForOptIntSpec_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForOptIntSpec_8, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(Info_6, Stream_7, ParseTreeInt0_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForOptIntSpec_8, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_6, Stream_7, ParseTreeInt1_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForOptIntSpec_8, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(Info_6, Stream_7, ParseTreeInt2_14);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_indirect_int_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word IndirectIntSpec_8)
{
  if (((MR_tag((MR_Word) IndirectIntSpec_8)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectIntSpec_8, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(Info_6, Stream_7, ParseTreeInt2_10);
  }
  else
  {
    MR_Word ParseTreeInt3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IndirectIntSpec_8, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_6, Stream_7, ParseTreeInt3_12);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_int_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word DirectIntSpec_8)
{
  if (((MR_tag((MR_Word) DirectIntSpec_8)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectIntSpec_8, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_6, Stream_7, ParseTreeInt1_10);
  }
  else
  {
    MR_Word ParseTreeInt3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DirectIntSpec_8, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_6, Stream_7, ParseTreeInt3_12);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ancestor_int_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word AncestorIntSpec_8)
{
  {
    MR_Word ParseTreeInt0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AncestorIntSpec_8, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(Info_6, Stream_7, ParseTreeInt0_10);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mutable_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_finalise_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_initialise_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__350__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__348__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_clause__mercury_output_item_clause_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__313__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_pred_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_7(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__write_import_use_map_entry_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__write_include_module_map_entry_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTreeModuleSrc_8)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 0))));
    MR_Word IntIncludeMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 2))));
    MR_Word ImpIncludeMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 3))));
    MR_Word InclMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 4))));
    MR_Word IntImportMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 5))));
    MR_Word IntUseMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 6))));
    MR_Word ImpImportMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 7))));
    MR_Word ImpUseMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 8))));
    MR_Word ImportUseMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 9))));
    MR_Word IntFIMSpecMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 11))));
    MR_Word MaybeImplicitFIMLangs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 12))));
    MR_Word IntTypeDefnsAbs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 13))));
    MR_Word IntTypeDefnsMer_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 14))));
    MR_Word IntTypeDefnsForeign_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 15))));
    MR_Word IntInstDefns_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 16))));
    MR_Word IntModeDefns_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 17))));
    MR_Word IntTypeClasses_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 18))));
    MR_Word IntInstances_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 19))));
    MR_Word IntPredDecls_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 20))));
    MR_Word IntModeDecls_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 21))));
    MR_Word IntForeignExportEnums_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 22))));
    MR_Word IntDeclPragmas_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 23))));
    MR_Word IntPromises_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 24))));
    MR_Word ImpTypeDefnsAbs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 26))));
    MR_Word ImpTypeDefnsMer_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 27))));
    MR_Word ImpTypeDefnsForeign_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 28))));
    MR_Word ImpInstDefns_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 29))));
    MR_Word ImpModeDefns_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 30))));
    MR_Word ImpTypeClasses_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 31))));
    MR_Word ImpInstances_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 32))));
    MR_Word ImpPredDecls_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 33))));
    MR_Word ImpModeDecls_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 34))));
    MR_Word ImpClauses_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 35))));
    MR_Word ImpForeignEnums_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 36))));
    MR_Word ImpForeignExportEnums_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 37))));
    MR_Word ImpDeclPragmas_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 38))));
    MR_Word ImpImplPragmas_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 39))));
    MR_Word ImpPromises_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 40))));
    MR_Word ImpInitialises_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 41))));
    MR_Word ImpFinalises_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 42))));
    MR_Word ImpMutables_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 43))));
    MR_Word Var_64;
    MR_Word Var_68;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_98;
    MR_Word Var_104;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_121;
    MR_Word Var_126;
    MR_Word Var_130;
    MR_Word Var_134;
    MR_Word Var_138;
    MR_Word Var_158;
    MR_Word Var_160;
    MR_Word Var_162;
    MR_Word Var_167;
    MR_Word Var_171;
    MR_Word Var_173;
    MR_Word Var_175;
    MR_Box conv0_STATE_VARIABLE_IO_65_65;
    MR_Box conv1_STATE_VARIABLE_IO_69_69;
    MR_Box conv2_STATE_VARIABLE_IO_74_74;
    MR_Box conv3_STATE_VARIABLE_IO_78_78;
    MR_Box conv4_STATE_VARIABLE_IO_82_82;
    MR_Box conv5_STATE_VARIABLE_IO_86_86;
    MR_Box conv7_STATE_VARIABLE_IO_99_99;
    MR_Box conv8_STATE_VARIABLE_IO_101_101;
    MR_Box conv9_STATE_VARIABLE_IO_103_103;
    MR_Box conv10_STATE_VARIABLE_IO_105_105;
    MR_Box conv11_STATE_VARIABLE_IO_107_107;
    MR_Box conv12_STATE_VARIABLE_IO_109_109;
    MR_Box conv13_STATE_VARIABLE_IO_111_111;
    MR_Box conv14_STATE_VARIABLE_IO_113_113;
    MR_Box conv15_STATE_VARIABLE_IO_115_115;
    MR_Box conv16_STATE_VARIABLE_IO_118_118;
    MR_Box conv17_STATE_VARIABLE_IO_120_120;
    MR_Box conv18_STATE_VARIABLE_IO_122_122;
    MR_Box conv19_STATE_VARIABLE_IO_127_127;
    MR_Box conv20_STATE_VARIABLE_IO_131_131;
    MR_Box conv21_STATE_VARIABLE_IO_135_135;
    MR_Box conv22_STATE_VARIABLE_IO_139_139;
    MR_Box conv23_STATE_VARIABLE_IO_141_141;
    MR_Box conv24_STATE_VARIABLE_IO_143_143;
    MR_Box conv25_STATE_VARIABLE_IO_145_145;
    MR_Box conv26_STATE_VARIABLE_IO_147_147;
    MR_Box conv27_STATE_VARIABLE_IO_149_149;
    MR_Box conv28_STATE_VARIABLE_IO_151_151;
    MR_Box conv29_STATE_VARIABLE_IO_153_153;
    MR_Box conv30_STATE_VARIABLE_IO_155_155;
    MR_Box conv31_STATE_VARIABLE_IO_157_157;
    MR_Box conv32_STATE_VARIABLE_IO_159_159;
    MR_Box conv33_STATE_VARIABLE_IO_161_161;
    MR_Box conv34_STATE_VARIABLE_IO_164_164;
    MR_Box conv35_STATE_VARIABLE_IO_166_166;
    MR_Box conv36_STATE_VARIABLE_IO_168_168;
    MR_Box conv37_STATE_VARIABLE_IO_170_170;
    MR_Box conv38_STATE_VARIABLE_IO_172_172;
    MR_Box conv39_STATE_VARIABLE_IO_174_174;
    MR_Box conv40_STATE_VARIABLE_IO_176_176;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% module src\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% include_module_map\n");
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[28]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, InclMap_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_65_65);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% section_import_and_or_use_map\n");
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[29]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, ImportUseMap_19, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_69_69);
    parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(Stream_7, (MR_Integer) 0);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_String) "include_module"));
    }
    Var_73 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntIncludeMap_12);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, Var_73, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_74_74);
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) ((MR_String) "import_module"));
    }
    Var_77 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntImportMap_15);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, Var_77, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_78_78);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) ((MR_String) "use_module"));
    }
    Var_81 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_16);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_80, Var_81, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_82_82);
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (Stream_7));
    }
    Var_85 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_20);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Var_85, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_86_86);
    if ((MaybeImplicitFIMLangs_22 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% implicit FIM self-import languages not set\n");
    else
    {
      MR_Word ImplicitFIMLangs_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitFIMLangs_22, (MR_Integer) 0))));
      MR_Word ImplicitFIMLangStrs_55;
      MR_Word Var_88;
      MR_String Var_93;

      Var_88 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ImplicitFIMLangs_54);
      ImplicitFIMLangStrs_55 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[26]), Var_88);
      Var_93 = mercury__string__join_list_2_f_0((MR_String) ", ", ImplicitFIMLangStrs_55);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% implicit FIM self-import languages: ");
      mercury__io__write_string_4_p_0(Stream_7, Var_93);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    }
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[16]));
      MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_98, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_98, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, IntTypeDefnsAbs_23, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_99_99);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, IntTypeDefnsMer_24, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_101_101);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, IntTypeDefnsForeign_25, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_103_103);
    {
      Var_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[18]));
      MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_104, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_104, IntInstDefns_26, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_105_105);
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[19]));
      MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_10));
      MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_106, IntModeDefns_27, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_107_107);
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_11));
      MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, IntTypeClasses_28, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_109_109);
    {
      Var_110 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_12));
      MR_hl_field(MR_mktag(0), Var_110, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_110, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_110, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_110, IntInstances_29, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_111_111);
    {
      Var_112 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[20]));
      MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_13));
      MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_112, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_112, IntPredDecls_30, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_113_113);
    {
      Var_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[21]));
      MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_14));
      MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, IntModeDecls_31, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_115_115);
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[30]));
      MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_15));
      MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (Info_6));
    }
    parse_tree__parse_tree_out_info__add_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Var_116, (MR_String) "", IntForeignExportEnums_32, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_118_118);
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[13]));
      MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_16));
      MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_119, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_119, IntDeclPragmas_33, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_120_120);
    {
      Var_121 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_17));
      MR_hl_field(MR_mktag(0), Var_121, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_121, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_121, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_121, IntPromises_34, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_122_122);
    parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(Stream_7, (MR_Integer) 1);
    Var_126 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpIncludeMap_13);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, Var_126, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_127_127);
    Var_130 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpImportMap_17);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, Var_130, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_131_131);
    Var_134 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_18);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_80, Var_134, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_135_135);
    Var_138 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_21);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Var_138, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_139_139);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, ImpTypeDefnsAbs_36, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_141_141);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, ImpTypeDefnsMer_37, ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_IO_143_143);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, ImpTypeDefnsForeign_38, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_145_145);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_104, ImpInstDefns_39, ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_IO_147_147);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_106, ImpModeDefns_40, ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_149_149);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, ImpTypeClasses_41, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_151_151);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_110, ImpInstances_42, ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_IO_153_153);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_112, ImpPredDecls_43, ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_IO_155_155);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, ImpModeDecls_44, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_157_157);
    {
      Var_158 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[22]));
      MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_18));
      MR_hl_field(MR_mktag(0), Var_158, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_158, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_158, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_158, ImpClauses_45, ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_IO_159_159);
    {
      Var_160 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[17]));
      MR_hl_field(MR_mktag(0), Var_160, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_19));
      MR_hl_field(MR_mktag(0), Var_160, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_160, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_160, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_160, ImpForeignEnums_46, ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_IO_161_161);
    {
      Var_162 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[30]));
      MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_20));
      MR_hl_field(MR_mktag(0), Var_162, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_162, 3) = ((MR_Box) (Info_6));
    }
    parse_tree__parse_tree_out_info__add_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Var_162, (MR_String) "", ImpForeignExportEnums_47, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_IO_164_164);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_119, ImpDeclPragmas_48, ((MR_Box) ((MR_Integer) 0)), &conv35_STATE_VARIABLE_IO_166_166);
    {
      Var_167 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[31]));
      MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_21));
      MR_hl_field(MR_mktag(0), Var_167, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_167, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_167, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_167, ImpImplPragmas_49, ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_IO_168_168);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_121, ImpPromises_50, ((MR_Box) ((MR_Integer) 0)), &conv37_STATE_VARIABLE_IO_170_170);
    {
      Var_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_171, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[32]));
      MR_hl_field(MR_mktag(0), Var_171, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_22));
      MR_hl_field(MR_mktag(0), Var_171, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_171, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_171, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_171, ImpInitialises_51, ((MR_Box) ((MR_Integer) 0)), &conv38_STATE_VARIABLE_IO_172_172);
    {
      Var_173 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_173, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[33]));
      MR_hl_field(MR_mktag(0), Var_173, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_23));
      MR_hl_field(MR_mktag(0), Var_173, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_173, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_173, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_173, ImpFinalises_52, ((MR_Box) ((MR_Integer) 0)), &conv39_STATE_VARIABLE_IO_174_174);
    {
      Var_175 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[34]));
      MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_24));
      MR_hl_field(MR_mktag(0), Var_175, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_175, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_175, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_175, ImpMutables_53, ((MR_Box) ((MR_Integer) 0)), &conv40_STATE_VARIABLE_IO_176_176);
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "end_module", ModuleName_10);
    mercury__io__nl_3_p_0(Stream_7);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_trans_opt_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeTransOpt_8)
{
  {
    MR_Word CurOutputStream_28;
    MR_Word Res_29;

    mercury__io__output_stream_3_p_0(&CurOutputStream_28);
    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_29);
    if (((MR_tag((MR_Word) Res_29)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_29, (MR_Integer) 0))));
      MR_Word Verbose_31;
      MR_Word Info_32;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_31);
      Info_32 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0(Info_32, FileStream_30, ParseTreeTransOpt_8);
            mercury__io__close_output_3_p_0(FileStream_30);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "...");
            mercury__io__flush_output_3_p_0(CurOutputStream_28);
            parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0(Info_32, FileStream_30, ParseTreeTransOpt_8);
            mercury__io__close_output_3_p_0(FileStream_30);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__2_120;

    conv14_HeadVar__2_120 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__758__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__2_120));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__2_112;

    conv12_HeadVar__2_112 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__756__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_112));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_104;

    conv10_HeadVar__2_104 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__754__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_104));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_98;

    conv8_HeadVar__2_98 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__752__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_98));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_90;

    conv6_HeadVar__2_90 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__750__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_90));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_82;

    conv4_HeadVar__2_82 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__748__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_82));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_74;

    conv2_HeadVar__2_74 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__746__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_74));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_65;

    conv0_HeadVar__2_65 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__744__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_65));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_termination_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTree_8)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 0))));
    MR_Word Terms_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 2))));
    MR_Word Term2s_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 3))));
    MR_Word Exceptions_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 4))));
    MR_Word Trailings_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 5))));
    MR_Word MMTablings_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 6))));
    MR_Word Sharings_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 7))));
    MR_Word Reuses_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 8))));
    MR_Word Lang_19;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Box conv1_STATE_VARIABLE_IO_28_28;
    MR_Box conv3_STATE_VARIABLE_IO_32_32;
    MR_Box conv5_STATE_VARIABLE_IO_36_36;
    MR_Box conv7_STATE_VARIABLE_IO_40_40;
    MR_Box conv9_STATE_VARIABLE_IO_44_44;
    MR_Box conv11_STATE_VARIABLE_IO_48_48;
    MR_Box conv13_STATE_VARIABLE_IO_52_52;
    MR_Box conv15_STATE_VARIABLE_IO_56_56;

    Lang_19 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% .trans_opt file\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[24]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (Lang_19));
    }
    Var_27 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[11]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[18]), Terms_12);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, Var_27, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[25]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (Lang_19));
    }
    Var_31 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[19]), Term2s_13);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, Var_31, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_32_32);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Stream_7));
    }
    Var_35 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[13]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[20]), Exceptions_14);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, Var_35, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_36_36);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[7]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Stream_7));
    }
    Var_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[21]), Trailings_15);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, Var_39, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_40_40);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[8]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Stream_7));
    }
    Var_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[22]), MMTablings_16);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Var_43, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_44_44);
    Var_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[23]), MMTablings_16);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Var_47, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_48_48);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[26]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_12));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (Lang_19));
    }
    Var_51 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[24]), Sharings_17);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, Var_51, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_52_52);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[27]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_14));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (Lang_19));
    }
    Var_55 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[25]), Reuses_18);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, Var_55, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_56_56);
    mercury__io__nl_3_p_0(Stream_7);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_plain_opt_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreePlainOpt_8)
{
  {
    MR_Word CurOutputStream_28;
    MR_Word Res_29;

    mercury__io__output_stream_3_p_0(&CurOutputStream_28);
    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_29);
    if (((MR_tag((MR_Word) Res_29)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_29, (MR_Integer) 0))));
      MR_Word Verbose_31;
      MR_Word Info_32;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_31);
      Info_32 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0(Info_32, FileStream_30, ParseTreePlainOpt_8);
            mercury__io__close_output_3_p_0(FileStream_30);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "...");
            mercury__io__flush_output_3_p_0(CurOutputStream_28);
            parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0(Info_32, FileStream_30, ParseTreePlainOpt_8);
            mercury__io__close_output_3_p_0(FileStream_30);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_35(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv34_HeadVar__2_261;

    conv34_HeadVar__2_261 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__734__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv34_HeadVar__2_261));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv32_HeadVar__2_253;

    conv32_HeadVar__2_253 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__732__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv32_HeadVar__2_253));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv30_HeadVar__2_245;

    conv30_HeadVar__2_245 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__730__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv30_HeadVar__2_245));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv28_HeadVar__2_239;

    conv28_HeadVar__2_239 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__728__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv28_HeadVar__2_239));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv26_HeadVar__2_231;

    conv26_HeadVar__2_231 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__726__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv26_HeadVar__2_231));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv24_HeadVar__2_223;

    conv24_HeadVar__2_223 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__724__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv24_HeadVar__2_223));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv22_HeadVar__2_215;

    conv22_HeadVar__2_215 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__722__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv22_HeadVar__2_215));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv20_HeadVar__2_207;

    conv20_HeadVar__2_207 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__720__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv20_HeadVar__2_207));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_termination_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv18_HeadVar__2_199;

    conv18_HeadVar__2_199 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__718__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv18_HeadVar__2_199));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv15_HeadVar__2_187;

    conv15_HeadVar__2_187 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__714__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv15_HeadVar__2_187));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_clause__mercury_output_item_clause_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__2_175;

    conv12_HeadVar__2_175 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__711__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_175));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_167;

    conv10_HeadVar__2_167 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__709__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_167));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_item_pred_marker_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_pred_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__696__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTree_8)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 0))));
    MR_Word UseMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 2))));
    MR_Word FIMSpecs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 3))));
    MR_Word TypeDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 4))));
    MR_Word ForeignEnums_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 5))));
    MR_Word InstDefns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 6))));
    MR_Word ModeDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 7))));
    MR_Word TypeClasses_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 8))));
    MR_Word Instances_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 9))));
    MR_Word PredDecls_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 10))));
    MR_Word ModeDecls_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 11))));
    MR_Word Clauses_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 12))));
    MR_Word ForeignProcs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 13))));
    MR_Word Promises_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 14))));
    MR_Word PredMarkers_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 15))));
    MR_Word TypeSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 16))));
    MR_Word UnusedArgs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 17))));
    MR_Word Terms_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 18))));
    MR_Word Term2s_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 19))));
    MR_Word Exceptions_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 20))));
    MR_Word Trailings_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 21))));
    MR_Word MMTablings_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 22))));
    MR_Word Sharings_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 23))));
    MR_Word Reuses_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 24))));
    MR_Word Lang_35;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_106;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Box conv0_STATE_VARIABLE_IO_44_44;
    MR_Box conv1_STATE_VARIABLE_IO_47_47;
    MR_Box conv2_STATE_VARIABLE_IO_49_49;
    MR_Box conv3_STATE_VARIABLE_IO_51_51;
    MR_Box conv4_STATE_VARIABLE_IO_53_53;
    MR_Box conv5_STATE_VARIABLE_IO_55_55;
    MR_Box conv6_STATE_VARIABLE_IO_57_57;
    MR_Box conv7_STATE_VARIABLE_IO_59_59;
    MR_Box conv8_STATE_VARIABLE_IO_61_61;
    MR_Box conv9_STATE_VARIABLE_IO_63_63;
    MR_Box conv11_STATE_VARIABLE_IO_66_66;
    MR_Box conv13_STATE_VARIABLE_IO_70_70;
    MR_Box conv14_STATE_VARIABLE_IO_74_74;
    MR_Box conv16_STATE_VARIABLE_IO_77_77;
    MR_Box conv17_STATE_VARIABLE_IO_80_80;
    MR_Box conv19_STATE_VARIABLE_IO_83_83;
    MR_Box conv21_STATE_VARIABLE_IO_87_87;
    MR_Box conv23_STATE_VARIABLE_IO_91_91;
    MR_Box conv25_STATE_VARIABLE_IO_95_95;
    MR_Box conv27_STATE_VARIABLE_IO_99_99;
    MR_Box conv29_STATE_VARIABLE_IO_103_103;
    MR_Box conv31_STATE_VARIABLE_IO_107_107;
    MR_Box conv33_STATE_VARIABLE_IO_111_111;
    MR_Box conv35_STATE_VARIABLE_IO_115_115;

    Lang_35 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% .opt file\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) ((MR_String) "use_module"));
    }
    Var_43 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), UseMap_12);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Var_43, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_44_44);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[16]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, TypeDefns_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[17]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, ForeignEnums_15, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_49_49);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[18]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, InstDefns_16, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_51_51);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[19]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, ModeDefns_17, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_53_53);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, TypeClasses_18, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_55_55);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, Instances_19, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_57_57);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Stream_7));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, FIMSpecs_13, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_59_59);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[20]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, PredDecls_20, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_61_61);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[21]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_10));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, ModeDecls_21, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_63_63);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_11));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Stream_7));
    }
    Var_65 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[6]), PredMarkers_25);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, Var_65, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_66_66);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_13));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) (Lang_35));
    }
    Var_69 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[8]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[7]), TypeSpecs_26);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, Var_69, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_70_70);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[22]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_15));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, Clauses_22, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_74_74);
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[23]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_16));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (Lang_35));
    }
    Var_76 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[8]), ForeignProcs_23);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, Var_76, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_77_77);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_18));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, Promises_24, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_80_80);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_19));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (Stream_7));
    }
    Var_82 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[9]), UnusedArgs_27);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, Var_82, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_83_83);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[24]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_21));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (Lang_35));
    }
    Var_86 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[11]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[10]), Terms_28);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, Var_86, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_87_87);
    {
      Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[25]));
      MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_23));
      MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_89, 4) = ((MR_Box) (Lang_35));
    }
    Var_90 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[11]), Term2s_29);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_89, Var_90, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_91_91);
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_25));
      MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (Stream_7));
    }
    Var_94 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[13]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[12]), Exceptions_30);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_93, Var_94, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_95_95);
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[7]));
      MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_27));
      MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (Stream_7));
    }
    Var_98 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[13]), Trailings_31);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_97, Var_98, ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_99_99);
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[8]));
      MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_29));
      MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (Stream_7));
    }
    Var_102 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[14]), MMTablings_32);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_101, Var_102, ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_IO_103_103);
    Var_106 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[15]), MMTablings_32);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_101, Var_106, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_107_107);
    {
      Var_109 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[26]));
      MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_32));
      MR_hl_field(MR_mktag(0), Var_109, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_109, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_109, 4) = ((MR_Box) (Lang_35));
    }
    Var_110 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[16]), Sharings_33);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_109, Var_110, ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_IO_111_111);
    {
      Var_113 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[27]));
      MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_34));
      MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_113, 4) = ((MR_Box) (Lang_35));
    }
    Var_114 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[17]), Reuses_34);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_113, Var_114, ((MR_Box) ((MR_Integer) 0)), &conv35_STATE_VARIABLE_IO_115_115);
    mercury__io__nl_3_p_0(Stream_7);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int3_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeInt3_8)
{
  {
    MR_Word CurOutputStream_28;
    MR_Word Res_29;

    mercury__io__output_stream_3_p_0(&CurOutputStream_28);
    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_29);
    if (((MR_tag((MR_Word) Res_29)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_29, (MR_Integer) 0))));
      MR_Word Verbose_31;
      MR_Word Info_32;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_31);
      Info_32 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_32, FileStream_30, ParseTreeInt3_8);
            mercury__io__close_output_3_p_0(FileStream_30);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "...");
            mercury__io__flush_output_3_p_0(CurOutputStream_28);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_32, FileStream_30, ParseTreeInt3_8);
            mercury__io__close_output_3_p_0(FileStream_30);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTreeInt3_8)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 0))));
    MR_Word IntInclMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 2))));
    MR_Word IntImportMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 4))));
    MR_Word IntTypeDefnMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 6))));
    MR_Word IntInstDefnMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 7))));
    MR_Word IntModeDefnMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 8))));
    MR_Word IntTypeClasses_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 9))));
    MR_Word IntInstances_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 10))));
    MR_Word IntTypeRepnMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 11))));
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Box conv0_STATE_VARIABLE_IO_30_30;
    MR_Box conv1_STATE_VARIABLE_IO_34_34;
    MR_Box conv2_STATE_VARIABLE_IO_37_37;
    MR_Box conv3_STATE_VARIABLE_IO_39_39;
    MR_Box conv4_STATE_VARIABLE_IO_41_41;
    MR_Box conv5_STATE_VARIABLE_IO_44_44;
    MR_Box conv6_STATE_VARIABLE_IO_47_47;
    MR_Box conv7_STATE_VARIABLE_IO_23;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- interface.\n");
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) ((MR_String) "include_module"));
    }
    Var_29 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_12);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, Var_29, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_30_30);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_String) "import_module"));
    }
    Var_33 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntImportMap_14);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, Var_33, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_36, IntTypeDefnMap_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_37_37);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), Var_38, IntInstDefnMap_17, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_39_39);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), Var_40, IntModeDefnMap_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_41_41);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Stream_7));
    }
    Var_43 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_19);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Var_43, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_44_44);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Stream_7));
    }
    Var_46 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_20);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, Var_46, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_47_47);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[15]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_48, IntTypeRepnMap_21, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_23);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int2_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeInt2_8)
{
  {
    MR_Word CurOutputStream_28;
    MR_Word Res_29;

    mercury__io__output_stream_3_p_0(&CurOutputStream_28);
    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_29);
    if (((MR_tag((MR_Word) Res_29)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_29, (MR_Integer) 0))));
      MR_Word Verbose_31;
      MR_Word Info_32;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_31);
      Info_32 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(Info_32, FileStream_30, ParseTreeInt2_8);
            mercury__io__close_output_3_p_0(FileStream_30);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "...");
            mercury__io__flush_output_3_p_0(CurOutputStream_28);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(Info_32, FileStream_30, ParseTreeInt2_8);
            mercury__io__close_output_3_p_0(FileStream_30);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTreeInt2_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 0))));
    MR_Word MaybeVersionNumbers_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 2))));
    MR_Word IntInclMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 3))));
    MR_Word IntUseMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 5))));
    MR_Word IntFIMSpecs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 7))));
    MR_Word ImpFIMSpecs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 8))));
    MR_Word IntTypeDefnMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 9))));
    MR_Word IntInstDefnMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 10))));
    MR_Word IntModeDefnMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 11))));
    MR_Word IntTypeClasses_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 12))));
    MR_Word IntInstances_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 13))));
    MR_Word IntTypeRepnMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 14))));
    MR_Word ImpTypeDefnMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 15))));
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Box conv0_STATE_VARIABLE_IO_35_35;
    MR_Box conv1_STATE_VARIABLE_IO_39_39;
    MR_Box conv2_STATE_VARIABLE_IO_42_42;
    MR_Box conv3_STATE_VARIABLE_IO_44_44;
    MR_Box conv4_STATE_VARIABLE_IO_46_46;
    MR_Box conv5_STATE_VARIABLE_IO_48_48;
    MR_Box conv6_STATE_VARIABLE_IO_51_51;
    MR_Box conv7_STATE_VARIABLE_IO_54_54;
    MR_Box conv8_STATE_VARIABLE_IO_56_56;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(Stream_7, ModuleName_10, MaybeVersionNumbers_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- interface.\n");
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_String) "include_module"));
    }
    Var_34 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_13);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, Var_34, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_35_35);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) ((MR_String) "use_module"));
    }
    Var_38 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_15);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, Var_38, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_39_39);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Stream_7));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, IntFIMSpecs_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_42_42);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_43, IntTypeDefnMap_19, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_44_44);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), Var_45, IntInstDefnMap_20, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_46_46);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), Var_47, IntModeDefnMap_21, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_48_48);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (Stream_7));
    }
    Var_50 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_22);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, Var_50, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_51_51);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Stream_7));
    }
    Var_53 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_23);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, Var_53, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_54_54);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[15]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_55, IntTypeRepnMap_24, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_56_56);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_18);
    if (succeeded)
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ImpTypeDefnMap_25);
    if (!(succeeded))
    {
      MR_Box conv9_STATE_VARIABLE_IO_60_60;
      MR_Box conv10_STATE_VARIABLE_IO_27;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- implementation.\n");
      mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, ImpFIMSpecs_18, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_60_60);
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_43, ImpTypeDefnMap_25, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_27);
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
    MR_Word CurOutputStream_28;
    MR_Word Res_29;

    mercury__io__output_stream_3_p_0(&CurOutputStream_28);
    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_29);
    if (((MR_tag((MR_Word) Res_29)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_29, (MR_Integer) 0))));
      MR_Word Verbose_31;
      MR_Word Info_32;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_31);
      Info_32 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_32, FileStream_30, ParseTreeInt1_8);
            mercury__io__close_output_3_p_0(FileStream_30);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "...");
            mercury__io__flush_output_3_p_0(CurOutputStream_28);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_32, FileStream_30, ParseTreeInt1_8);
            mercury__io__close_output_3_p_0(FileStream_30);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__609__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__582__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTreeInt1_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 0))));
    MR_Word MaybeVersionNumbers_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 2))));
    MR_Word IntInclMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 3))));
    MR_Word ImpInclMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 4))));
    MR_Word IntUseMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 6))));
    MR_Word ImpUseMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 7))));
    MR_Word IntFIMSpecs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 9))));
    MR_Word ImpFIMSpecs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 10))));
    MR_Word IntTypeDefnMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 11))));
    MR_Word IntInstDefnMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 12))));
    MR_Word IntModeDefnMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 13))));
    MR_Word IntTypeClasses_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 14))));
    MR_Word IntInstances_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 15))));
    MR_Word IntPredDecls_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 16))));
    MR_Word IntModeDecls_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 17))));
    MR_Word IntForeignEnumMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 18))));
    MR_Word IntDeclPragmas_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 19))));
    MR_Word IntPromises_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 20))));
    MR_Word IntTypeRepnMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 21))));
    MR_Word ImpTypeDefnMap_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 22))));
    MR_Word ImpForeignEnumMap_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 23))));
    MR_Word ImpTypeClasses_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 24))));
    MR_Word IntPredOrModeDecls_35;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Box conv0_STATE_VARIABLE_IO_45_45;
    MR_Box conv1_STATE_VARIABLE_IO_49_49;
    MR_Box conv2_STATE_VARIABLE_IO_52_52;
    MR_Box conv3_STATE_VARIABLE_IO_54_54;
    MR_Box conv4_STATE_VARIABLE_IO_56_56;
    MR_Box conv5_STATE_VARIABLE_IO_58_58;
    MR_Box conv6_STATE_VARIABLE_IO_61_61;
    MR_Box conv7_STATE_VARIABLE_IO_64_64;
    MR_Box conv8_STATE_VARIABLE_IO_67_67;
    MR_Box conv9_STATE_VARIABLE_IO_70_70;
    MR_Box conv10_STATE_VARIABLE_IO_73_73;
    MR_Box conv11_STATE_VARIABLE_IO_75_75;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(Stream_7, ModuleName_10, MaybeVersionNumbers_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- interface.\n");
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_String) "include_module"));
    }
    Var_44 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_13);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, Var_44, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_45_45);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) ((MR_String) "use_module"));
    }
    Var_48 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_16);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_48, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_49_49);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Stream_7));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, IntFIMSpecs_19, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_52_52);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_53, IntTypeDefnMap_21, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_54_54);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), Var_55, IntInstDefnMap_22, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_56_56);
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), Var_57, IntModeDefnMap_23, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_58_58);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Stream_7));
    }
    Var_60 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_24);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, Var_60, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_61_61);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (Stream_7));
    }
    Var_63 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_25);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Var_63, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_64_64);
    parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(IntPredDecls_26, IntModeDecls_27, &IntPredOrModeDecls_35);
    parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_5_p_0(Info_6, Stream_7, IntPredOrModeDecls_35);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[12]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[5]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_66, IntForeignEnumMap_28, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_67_67);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[13]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_10));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (Stream_7));
    }
    Var_69 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), IntDeclPragmas_29);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, Var_69, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_70_70);
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_11));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (Stream_7));
    }
    Var_72 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises_30);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, Var_72, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_73_73);
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[15]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_12));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_74, IntTypeRepnMap_31, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_75_75);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_14);
    if (succeeded)
    {
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_17);
      if (succeeded)
      {
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_20);
        if (succeeded)
        {
          succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ImpTypeDefnMap_32);
          if (succeeded)
          {
            succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[5]), ImpForeignEnumMap_33);
            if (succeeded)
              succeeded = (ImpTypeClasses_34 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (!(succeeded))
    {
      MR_Word Var_79;
      MR_Word Var_83;
      MR_Word Var_90;
      MR_Word Var_93;
      MR_Box conv12_STATE_VARIABLE_IO_80_80;
      MR_Box conv13_STATE_VARIABLE_IO_84_84;
      MR_Box conv14_STATE_VARIABLE_IO_87_87;
      MR_Box conv15_STATE_VARIABLE_IO_89_89;
      MR_Box conv16_STATE_VARIABLE_IO_91_91;
      MR_Box conv17_STATE_VARIABLE_IO_37;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- implementation.\n");
      Var_79 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_14);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, Var_79, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_80_80);
      Var_83 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_17);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_83, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_84_84);
      mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, ImpFIMSpecs_20, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_87_87);
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_53, ImpTypeDefnMap_32, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_89_89);
      {
        Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[12]));
        MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_13));
        MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (Stream_7));
      }
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[5]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_90, ImpForeignEnumMap_33, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_91_91);
      Var_93 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses_34);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, Var_93, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_37);
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
    MR_Word CurOutputStream_28;
    MR_Word Res_29;

    mercury__io__output_stream_3_p_0(&CurOutputStream_28);
    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_29);
    if (((MR_tag((MR_Word) Res_29)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_29, (MR_Integer) 0))));
      MR_Word Verbose_31;
      MR_Word Info_32;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_31);
      Info_32 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(Info_32, FileStream_30, ParseTreeInt0_8);
            mercury__io__close_output_3_p_0(FileStream_30);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "...");
            mercury__io__flush_output_3_p_0(CurOutputStream_28);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(Info_32, FileStream_30, ParseTreeInt0_8);
            mercury__io__close_output_3_p_0(FileStream_30);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__544__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__497__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_mode_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_inst_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_type_ctor_all_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTreeInt0_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 0))));
    MR_Word MaybeVersionNumbers_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 2))));
    MR_Word IntInclMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 3))));
    MR_Word ImpInclMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 4))));
    MR_Word IntImportMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 6))));
    MR_Word IntUseMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 7))));
    MR_Word ImpImportMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 8))));
    MR_Word ImpUseMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 9))));
    MR_Word IntFIMSpecs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 11))));
    MR_Word ImpFIMSpecs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 12))));
    MR_Word IntTypeDefnMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 13))));
    MR_Word IntInstDefnMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 14))));
    MR_Word IntModeDefnMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 15))));
    MR_Word IntTypeClasses_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 16))));
    MR_Word IntInstances_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 17))));
    MR_Word IntPredDecls_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 18))));
    MR_Word IntModeDecls_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 19))));
    MR_Word IntForeignEnumMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 20))));
    MR_Word IntDeclPragmas_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 21))));
    MR_Word IntPromises_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 22))));
    MR_Word ImpTypeDefnMap_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 23))));
    MR_Word ImpInstDefnMap_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 24))));
    MR_Word ImpModeDefnMap_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 25))));
    MR_Word ImpTypeClasses_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 26))));
    MR_Word ImpInstances_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 27))));
    MR_Word ImpPredDecls_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 28))));
    MR_Word ImpModeDecls_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 29))));
    MR_Word ImpForeignEnumMap_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 30))));
    MR_Word ImpDeclPragmas_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 31))));
    MR_Word ImpPromises_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 32))));
    MR_Word IntPredOrModeDecls_43;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Box conv0_STATE_VARIABLE_IO_54_54;
    MR_Box conv1_STATE_VARIABLE_IO_58_58;
    MR_Box conv2_STATE_VARIABLE_IO_62_62;
    MR_Box conv3_STATE_VARIABLE_IO_65_65;
    MR_Box conv4_STATE_VARIABLE_IO_67_67;
    MR_Box conv5_STATE_VARIABLE_IO_69_69;
    MR_Box conv6_STATE_VARIABLE_IO_71_71;
    MR_Box conv7_STATE_VARIABLE_IO_74_74;
    MR_Box conv8_STATE_VARIABLE_IO_77_77;
    MR_Box conv9_STATE_VARIABLE_IO_80_80;
    MR_Box conv10_STATE_VARIABLE_IO_83_83;
    MR_Box conv11_STATE_VARIABLE_IO_86_86;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(Stream_7, ModuleName_10, MaybeVersionNumbers_12);
    parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(Stream_7, (MR_Integer) 0);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) ((MR_String) "include_module"));
    }
    Var_53 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_13);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, Var_53, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_54_54);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) ((MR_String) "import_module"));
    }
    Var_57 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntImportMap_16);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, Var_57, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_58_58);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) ((MR_String) "use_module"));
    }
    Var_61 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_17);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, Var_61, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_62_62);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Stream_7));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, IntFIMSpecs_21, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_65_65);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_66, IntTypeDefnMap_23, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_67_67);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), Var_68, IntInstDefnMap_24, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_69_69);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), Var_70, IntModeDefnMap_25, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_71_71);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (Stream_7));
    }
    Var_73 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_26);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, Var_73, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_74_74);
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (Stream_7));
    }
    Var_76 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_27);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, Var_76, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_77_77);
    parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(IntPredDecls_28, IntModeDecls_29, &IntPredOrModeDecls_43);
    parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_5_p_0(Info_6, Stream_7, IntPredOrModeDecls_43);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[12]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_10));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[5]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_79, IntForeignEnumMap_30, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_80_80);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[13]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_11));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (Stream_7));
    }
    Var_82 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), IntDeclPragmas_31);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, Var_82, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_83_83);
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_12));
      MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) (Stream_7));
    }
    Var_85 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises_32);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Var_85, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_86_86);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_14);
    if (succeeded)
    {
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpImportMap_18);
      if (succeeded)
      {
        succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_19);
        if (succeeded)
        {
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_22);
          if (succeeded)
          {
            succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ImpTypeDefnMap_33);
            if (succeeded)
            {
              succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ImpInstDefnMap_34);
              if (succeeded)
              {
                succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ImpModeDefnMap_35);
                if (succeeded)
                {
                  succeeded = (ImpTypeClasses_36 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (ImpInstances_37 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (ImpPredDecls_38 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (ImpModeDecls_39 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[5]), ImpForeignEnumMap_40);
                          if (succeeded)
                          {
                            succeeded = (ImpDeclPragmas_41 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                              succeeded = (ImpPromises_42 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word ImpPredOrModeDecls_44;
      MR_Word Var_90;
      MR_Word Var_94;
      MR_Word Var_98;
      MR_Word Var_110;
      MR_Word Var_113;
      MR_Word Var_116;
      MR_Word Var_119;
      MR_Word Var_122;
      MR_Box conv12_STATE_VARIABLE_IO_91_91;
      MR_Box conv13_STATE_VARIABLE_IO_95_95;
      MR_Box conv14_STATE_VARIABLE_IO_99_99;
      MR_Box conv15_STATE_VARIABLE_IO_102_102;
      MR_Box conv16_STATE_VARIABLE_IO_104_104;
      MR_Box conv17_STATE_VARIABLE_IO_106_106;
      MR_Box conv18_STATE_VARIABLE_IO_108_108;
      MR_Box conv19_STATE_VARIABLE_IO_111_111;
      MR_Box conv20_STATE_VARIABLE_IO_114_114;
      MR_Box conv21_STATE_VARIABLE_IO_117_117;
      MR_Box conv22_STATE_VARIABLE_IO_120_120;
      MR_Box conv23_STATE_VARIABLE_IO_46;

      parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(Stream_7, (MR_Integer) 1);
      Var_90 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_14);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, Var_90, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_91_91);
      Var_94 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpImportMap_18);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, Var_94, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_95_95);
      Var_98 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_19);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, Var_98, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_99_99);
      mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, ImpFIMSpecs_22, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_102_102);
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_66, ImpTypeDefnMap_33, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_104_104);
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), Var_68, ImpInstDefnMap_34, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_106_106);
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), Var_70, ImpModeDefnMap_35, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_108_108);
      Var_110 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses_36);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, Var_110, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_111_111);
      Var_113 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpInstances_37);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, Var_113, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_114_114);
      parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(ImpPredDecls_38, ImpModeDecls_39, &ImpPredOrModeDecls_44);
      parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_5_p_0(Info_6, Stream_7, ImpPredOrModeDecls_44);
      {
        Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[12]));
        MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_13));
        MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (Stream_7));
      }
      mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[5]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_116, ImpForeignEnumMap_40, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_117_117);
      Var_119 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), ImpDeclPragmas_41);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, Var_119, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_120_120);
      Var_122 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromises_42);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Var_122, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_46);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Item_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      if (((MR_tag((MR_Word) Item_13)) == (MR_Integer) 1))
      {
        MR_Word ItemModeDecl_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Item_13, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(Info_1, Stream_2, ItemModeDecl_27);
      }
      else
      {
        MR_Word ItemPredDecl_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Item_13, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_item_pred_decl_5_p_0(Info_1, Stream_2, ItemPredDecl_26);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Items_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(
  MR_Word Stream_5,
  MR_Word Section_6)
{
  switch (Section_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- implementation.\n");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- interface.\n");
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word MaybeVersionNumbers_8)
{
  if (!((MaybeVersionNumbers_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word VersionNumbers_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVersionNumbers_8, (MR_Integer) 0))));
    MR_Integer Var_22;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- version_numbers(");
    Var_22 = recompilation__version__version_numbers_version_number_0_f_0();
    mercury__io__write_int_4_p_0(Stream_6, Var_22);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(ModuleName_7, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    recompilation__version__write_version_numbers_4_p_0(Stream_6, VersionNumbers_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_src_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeSrc_8)
{
  {
    MR_Word CurOutputStream_28;
    MR_Word Res_29;

    mercury__io__output_stream_3_p_0(&CurOutputStream_28);
    mercury__io__open_output_4_p_0(OutputFileName_7, &Res_29);
    if (((MR_tag((MR_Word) Res_29)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
      mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "\' for output.\n");
    }
    else
    {
      MR_Word FileStream_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_29, (MR_Integer) 0))));
      MR_Word Verbose_31;
      MR_Word Info_32;

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_31);
      Info_32 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_6, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_src_5_p_0(Info_32, FileStream_30, ParseTreeSrc_8);
            mercury__io__close_output_3_p_0(FileStream_30);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(CurOutputStream_28, OutputFileName_7);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) "...");
            mercury__io__flush_output_3_p_0(CurOutputStream_28);
            parse_tree__parse_tree_out__mercury_output_parse_tree_src_5_p_0(Info_32, FileStream_30, ParseTreeSrc_8);
            mercury__io__close_output_3_p_0(FileStream_30);
            mercury__io__write_string_4_p_0(CurOutputStream_28, (MR_String) " done\n");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_avail_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_include_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word MaybePrevSectionKind_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Component_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Components_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MaybeCurSectionKind_26;
      MR_Word next_value_of_MaybePrevSectionKind_3;
      MR_Word next_value_of_HeadVar__4_4;

      if (((MR_tag((MR_Word) Component_16)) == (MR_Integer) 1))
      {
        MR_Word SubParseTree_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_16, (MR_Integer) 3))));
        MR_Word Lang_30;
        MR_Word SectionKind_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Component_16, (MR_Integer) 1))) & (MR_Integer) 1);

        Lang_30 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_1);
        switch (Lang_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (SectionKind_54) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_2, (MR_String) ":- implementation.\n");
                  mercury__io__write_string_4_p_0(Stream_2, (MR_String) "% nested submodule in implementation\n");
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_2, (MR_String) ":- interface.\n");
                  mercury__io__write_string_4_p_0(Stream_2, (MR_String) "% nested submodule in interface\n");
                }
                break;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word PrevSectionKind_31;

              succeeded = (MaybePrevSectionKind_3 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PrevSectionKind_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevSectionKind_3, (MR_Integer) 0))));
                succeeded = (PrevSectionKind_31 == SectionKind_54);
              }
              if (!(succeeded))
                switch (SectionKind_54) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_2, (MR_String) ":- implementation.\n");
                    break;
                  case (MR_Integer) 0:
                    mercury__io__write_string_4_p_0(Stream_2, (MR_String) ":- interface.\n");
                    break;
                }
            }
            break;
        }
        parse_tree__parse_tree_out__mercury_output_parse_tree_src_5_p_0(Info_1, Stream_2, SubParseTree_29);
        MaybeCurSectionKind_26 = MaybePrevSectionKind_3;
      }
      else
      {
        MR_Word SectionKind_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Component_16, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word InclsCord_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_16, (MR_Integer) 3))));
        MR_Word AvailsCord_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_16, (MR_Integer) 4))));
        MR_Word FIMsCord_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_16, (MR_Integer) 5))));
        MR_Word ItemsCord_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_16, (MR_Integer) 6))));
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_51;
        MR_Box conv0_STATE_VARIABLE_IO_44_44;
        MR_Box conv1_STATE_VARIABLE_IO_47_47;
        MR_Box conv2_STATE_VARIABLE_IO_50_50;

        switch (SectionKind_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_2, (MR_String) ":- implementation.\n");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_2, (MR_String) ":- interface.\n");
            break;
        }
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Info_1));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Stream_2));
        }
        Var_43 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_22);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Var_43, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_44_44);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5]));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Info_1));
          MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Stream_2));
        }
        Var_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_23);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, Var_46, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_3));
          MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Stream_2));
        }
        Var_49 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_24);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, Var_49, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_50_50);
        Var_51 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_25);
        parse_tree__parse_tree_out__mercury_output_items_5_p_0(Info_1, Stream_2, Var_51);
        {
          MaybeCurSectionKind_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeCurSectionKind_26, 0) = ((MR_Box) (SectionKind_20));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_MaybePrevSectionKind_3 = MaybeCurSectionKind_26;
      next_value_of_HeadVar__4_4 = Components_17;
      MaybePrevSectionKind_3 = next_value_of_MaybePrevSectionKind_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_src_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTree_8)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 0))));
    MR_Word ModuleComponentsCord_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_8, (MR_Integer) 2))));
    MR_Word ModuleComponents_13;

    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    ModuleComponents_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), ModuleComponentsCord_12);
    parse_tree__parse_tree_out__mercury_output_module_components_6_p_0(Info_6, Stream_7, (MR_Word) ((MR_Unsigned) 0U), ModuleComponents_13);
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "end_module", ModuleName_10);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(
  MR_Word Stream_6,
  MR_String Decl_7,
  MR_Word ModuleName_8)
{
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- ");
    mercury__io__write_string_4_p_0(Stream_6, Decl_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(ModuleName_8, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_items_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Item_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      parse_tree__parse_tree_out__mercury_output_item_5_p_0(Info_1, Stream_2, Item_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Items_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Item_8)
{
  switch (MR_tag((MR_Word) Item_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ItemClause_10 = (MR_Word) ((MR_Word) (Item_8));

        parse_tree__parse_tree_out_clause__mercury_output_item_clause_5_p_0(Info_6, Stream_7, ItemClause_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemInstDefn_12 = (MR_Word) (MR_body((MR_Word) (Item_8), (MR_Integer) 1));

        parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(Info_6, Stream_7, ItemInstDefn_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ItemModeDefn_13 = (MR_Word) (MR_body((MR_Word) (Item_8), (MR_Integer) 2));

        parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(Info_6, Stream_7, ItemModeDefn_13);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemPredDecl_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_pred_decl_5_p_0(Info_6, Stream_7, ItemPredDecl_14);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemModeDecl_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(Info_6, Stream_7, ItemModeDecl_15);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemForeignEnum_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));
            MR_Box conv0_STATE_VARIABLE_IO_29;

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), ((MR_Box) (Stream_7)), ItemForeignEnum_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_29);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemForeignExportEnum_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_29;

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), ItemForeignExportEnum_17, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ItemPromise_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemPromise_21);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemTypeClass_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(Info_6, Stream_7, ItemTypeClass_22);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ItemInstance_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemInstance_23);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ItemInitialise_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemInitialise_24);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ItemFinalise_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_105_110_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemFinalise_25);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ItemMutable_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_mutable_5_p_0(Info_6, Stream_7, ItemMutable_26);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ItemTypeDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(Info_6, Stream_7, ItemTypeDefn_11);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ItemDeclPragma_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(Info_6, Stream_7, ItemDeclPragma_18);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word ItemImplPragma_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_5_p_0(Info_6, Stream_7, ItemImplPragma_19);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word ItemGenPragma_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_item_generated_pragma_5_p_0(Info_6, Stream_7, ItemGenPragma_20);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word ItemTypeRepn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0(Info_6, Stream_7, ItemTypeRepn_27);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_105_110_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemFinalise_8)
{
  {
    MR_Word PredSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFinalise_8, (MR_Integer) 0))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemFinalise_8, (MR_Integer) 1))));

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- finalise ");
    parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(PredSymName_10, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
    mercury__io__write_int_4_p_0(Stream_7, Arity_11);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemInitialise_8)
{
  {
    MR_Word PredSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInitialise_8, (MR_Integer) 0))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInitialise_8, (MR_Integer) 1))));

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- initialise ");
    parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(PredSymName_10, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
    mercury__io__write_int_4_p_0(Stream_7, Arity_11);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemInstance_8)
{
  {
    MR_Word ClassName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_8, (MR_Integer) 0))));
    MR_Word Types_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_8, (MR_Integer) 1))));
    MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_8, (MR_Integer) 3))));
    MR_Word Body_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_8, (MR_Integer) 4))));
    MR_Word VarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_8, (MR_Integer) 5))));
    MR_Word Var_29;
    MR_Box conv0_STATE_VARIABLE_IO_39_39;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- instance ");
    mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 40);
    parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(ClassName_10, Stream_7);
    mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 40);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (VarSet_15));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_29, (MR_String) ", ", Types_11, Stream_7);
    mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 41);
    mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 41);
    parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_7_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), VarSet_15, (MR_Integer) 0, (MR_String) "<=", Constraints_13, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_39_39);
    if (!((Body_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Methods_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_14, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " where [\n");
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[5]), (MR_String) ",\n", Methods_19, Stream_7);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n]");
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemPromise_8)
{
  {
    MR_Word PromiseType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_8, (MR_Integer) 1))));
    MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_8, (MR_Integer) 2))));
    MR_Word UnivVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_8, (MR_Integer) 3))));
    MR_Word Goal_19;

    switch (PromiseType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String Var_29;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- all [");
          parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, (MR_Integer) 0, UnivVars_13, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
          parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0((MR_Integer) 1, Stream_7);
          Var_29 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_10);
          mercury__io__write_string_4_p_0(Stream_7, Var_29);
          Goal_19 = Goal0_11;
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- promise ");
          if ((UnivVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
            Goal_19 = Goal0_11;
          else
          {
            MR_Word Var_35;

            Var_35 = parse_tree__prog_item__get_goal_context_1_f_0(Goal0_11);
            {
              Goal_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Goal_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Goal_19, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
              MR_hl_field(MR_mktag(3), Goal_19, 2) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(3), Goal_19, 3) = ((MR_Box) (UnivVars_13));
              MR_hl_field(MR_mktag(3), Goal_19, 4) = ((MR_Box) (Goal0_11));
            }
          }
        }
        break;
    }
    parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0((MR_Integer) 1, Stream_7);
    parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_12, (MR_Integer) 1, Goal_19);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_format_sym_name_string_pair_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_output_38,
  MR_Word ItemForeignExportEnum_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19)
{
  {
    MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_7, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_7, (MR_Integer) 1))));
    MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_7, (MR_Integer) 2))));
    MR_Word Overrides_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_7, (MR_Integer) 3))));
    MR_Word TypeName_16;
    MR_Integer TypeArity_17;
    MR_Box STATE_VARIABLE_U_21_21;
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_28_28;
    MR_Box STATE_VARIABLE_U_29_29;
    MR_Box STATE_VARIABLE_U_31_31;
    MR_Box STATE_VARIABLE_U_32_32;
    MR_Box STATE_VARIABLE_U_34_34;
    MR_Box STATE_VARIABLE_U_35_35;
    MR_Word MaybePrefix_44;
    MR_Box STATE_VARIABLE_U_13_47;
    MR_Box STATE_VARIABLE_U_18_52;
    MR_Box STATE_VARIABLE_U_11_62;
    MR_Word Var_63;
    MR_Box STATE_VARIABLE_U_14_65;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) ((MR_String) ":- pragma foreign_export_enum(")), S_8, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_21_21);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_4_p_0(TypeClassInfo_for_output_38, Lang_10, S_8, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_22_22);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
    TypeName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 0))));
    TypeArity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_38, (MR_Integer) 0, TypeName_16, S_8, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) ((MR_String) "/")), S_8, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 8))));
    func_3(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) (TypeArity_17)), S_8, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_29_29);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_31_31);
    MaybePrefix_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_12, (MR_Integer) 0))));
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) ((MR_String) "[")), S_8, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_13_47);
    if ((MaybePrefix_44 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_18_52 = STATE_VARIABLE_U_13_47;
    else
    {
      MR_String Prefix_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePrefix_44, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_15_49;
      MR_Box STATE_VARIABLE_U_16_50;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_6(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) ((MR_String) "prefix(")), S_8, STATE_VARIABLE_U_13_47, &STATE_VARIABLE_U_15_49);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 21))));
      func_7(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) (Prefix_45)), S_8, STATE_VARIABLE_U_15_49, &STATE_VARIABLE_U_16_50);
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 7))));
      func_8(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) (MR_Word) ((MR_Char) 41)), S_8, STATE_VARIABLE_U_16_50, &STATE_VARIABLE_U_18_52);
    }
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) ((MR_String) "]")), S_8, STATE_VARIABLE_U_18_52, &STATE_VARIABLE_U_32_32);
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 5))));
    func_10(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_34_34);
    func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 7))));
    func_11(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) (MR_Word) ((MR_Char) 91)), S_8, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_11_62);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (TypeClassInfo_for_output_38));
    }
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 27))));
    func_12(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[1])), ((MR_Box) (Var_63)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Overrides_13)), S_8, STATE_VARIABLE_U_11_62, &STATE_VARIABLE_U_14_65);
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 7))));
    func_13(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) (MR_Word) ((MR_Char) 93)), S_8, STATE_VARIABLE_U_14_65, &STATE_VARIABLE_U_35_35);
    func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_38, (MR_Integer) 0)), (MR_Integer) 5))));
    func_14(((MR_Box) (TypeClassInfo_for_output_38)), ((MR_Box) ((MR_String) ").\n")), S_8, STATE_VARIABLE_U_35_35, STATE_VARIABLE_U_19);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_format_unqual_sym_name_string_pair_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_output_35,
  MR_Box S_7,
  MR_Word ItemForeignEnum_8,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19)
{
  {
    MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_8, (MR_Integer) 1))));
    MR_Word OoMValues_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_8, (MR_Integer) 2))));
    MR_Word TypeName_15;
    MR_Integer TypeArity_16;
    MR_Word Values_17;
    MR_Box STATE_VARIABLE_U_21_21;
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_28_28;
    MR_Box STATE_VARIABLE_U_29_29;
    MR_Box STATE_VARIABLE_U_31_31;
    MR_Box STATE_VARIABLE_U_32_32;
    MR_Box STATE_VARIABLE_U_11_43;
    MR_Word Var_44;
    MR_Box STATE_VARIABLE_U_14_46;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) ":- pragma foreign_enum(")), S_7, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_21_21);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_4_p_0(TypeClassInfo_for_output_35, Lang_10, S_7, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_22_22);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) ", ")), S_7, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
    TypeName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 0))));
    TypeArity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_35, (MR_Integer) 0, TypeName_15, S_7, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) "/")), S_7, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 8))));
    func_3(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) (TypeArity_16)), S_7, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_29_29);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) ", ")), S_7, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_31_31);
    Values_17 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[1]), OoMValues_12);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 7))));
    func_5(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) (MR_Word) ((MR_Char) 91)), S_7, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_11_43);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TypeClassInfo_for_output_35));
    }
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 27))));
    func_6(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[1])), ((MR_Box) (Var_44)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Values_17)), S_7, STATE_VARIABLE_U_11_43, &STATE_VARIABLE_U_14_46);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 7))));
    func_7(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) (MR_Word) ((MR_Char) 93)), S_7, STATE_VARIABLE_U_14_46, &STATE_VARIABLE_U_32_32);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) ").\n")), S_7, STATE_VARIABLE_U_32_32, STATE_VARIABLE_U_19);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemMutable_8)
{
  {
    MR_String Name_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 0))));
    MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 2))));
    MR_Word Inst_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 4))));
    MR_Word InitTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 5))));
    MR_Word MutVarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 6))));
    MR_Word Attrs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 7))));
    MR_Word Lang_20;
    MR_Word Var_28;
    MR_Word Var_37;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- mutable(");
    mercury__io__write_string_4_p_0(Stream_7, Name_10);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
    Var_28 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(Var_28, (MR_Integer) 0, Type_12, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MutVarSet_16, (MR_Integer) 0, InitTerm_15, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
    Lang_20 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    Var_37 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_7, Lang_20, Var_37, Inst_14);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
    mercury__io__print_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0), Stream_7, ((MR_Box) (Attrs_17)));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_format_constraint_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_format_fundep_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1839__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemTypeClass_8)
{
  {
    MR_bool succeeded;
    MR_Word ClassName0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_8, (MR_Integer) 0))));
    MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_8, (MR_Integer) 1))));
    MR_Word Constraints_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_8, (MR_Integer) 2))));
    MR_Word FunDeps_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_8, (MR_Integer) 3))));
    MR_Word Interface_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_8, (MR_Integer) 4))));
    MR_Word VarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_8, (MR_Integer) 5))));
    MR_Word ClassName_18;
    MR_Word Var_32;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, ClassName0_10, &ClassName_18);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- typeclass ");
    parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(ClassName_18, Stream_7);
    mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 40);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (VarSet_15));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[24]), Var_32, (MR_String) ", ", Vars_11, Stream_7);
    mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 41);
    succeeded = (FunDeps_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Constraints_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
    {
      MR_Word Var_71;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_U_21_70;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_24_73;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv9_STATE_VARIABLE_IO_42_42;

      func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) " <= (")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_21_70);
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (VarSet_15));
        MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 27))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)), ((MR_Box) (Var_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (FunDeps_13)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_24_73);
      if (!((Constraints_12 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Var_76;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_U_29_78;

        if (!((FunDeps_13 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv5_STATE_VARIABLE_U_26_75;

          func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_26_75);
        }
        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_3));
          MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (VarSet_15));
          MR_hl_field(MR_mktag(0), Var_76, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 27))));
        func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (Var_76)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Constraints_12)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_29_78);
      }
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_42_42);
    }
    if ((Interface_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
    else
    {
      MR_Word ClassDecls_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface_14, (MR_Integer) 0))));
      MR_Word Lang_24;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " where [\n");
      Lang_24 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
      parse_tree__parse_tree_out__output_class_decls_5_p_0(Stream_7, Lang_24, ClassDecls_23);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n].\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__output_class_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decls_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word ClassDecls_8)
{
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__parse_tree_out__output_class_decls_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Lang_7));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), Var_12, (MR_String) ",\n", ClassDecls_8, Stream_6);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemModeDecl_8)
{
  {
    MR_bool succeeded;
    MR_Word PredName0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 0))));
    MR_Word PredOrFunc_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 1))));
    MR_Word Modes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 2))));
    MR_Word WithInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 3))));
    MR_Word MaybeDet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 4))));
    MR_Word VarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 5))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 6))));
    MR_Word PredName_18;
    MR_Word Lang_19;
    MR_Word Var_25;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, PredName0_10, &PredName_18);
    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_16, Stream_7);
    Lang_19 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    succeeded = (WithInst_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (PredOrFunc_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredOrFunc_11, (MR_Integer) 0))));
        succeeded = (Var_25 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word FuncModes_20;
      MR_Word RetMode_21;
      MR_Box conv0_RetMode_21;

      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_12, &FuncModes_20, &conv0_RetMode_21);
      RetMode_21 = ((MR_Word) (conv0_RetMode_21));
      parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_9_p_0(Stream_7, Lang_19, VarSet_15, PredName_18, FuncModes_20, RetMode_21, MaybeDet_14);
    }
    else
      parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_9_p_0(Stream_7, Lang_19, VarSet_15, PredName_18, Modes_12, WithInst_13, MaybeDet_14);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemPredDecl_8)
{
  {
    MR_bool succeeded;
    MR_Word PredName0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 0))));
    MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 2))));
    MR_Word WithType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 3))));
    MR_Word WithInst_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 4))));
    MR_Word MaybeDetism_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 5))));
    MR_Word TypeVarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 7))));
    MR_Word InstVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 8))));
    MR_Word ExistQVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 9))));
    MR_Word Purity_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 10))) & (MR_Integer) 3);
    MR_Word Constraints_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 11))));
    MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 12))));
    MR_Word PredName_24;
    MR_Word Lang_25;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, PredName0_10, &PredName_24);
    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_22, Stream_7);
    Lang_25 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    succeeded = (PredOrFunc_11 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WithType_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word FuncTypesAndModes_26;
      MR_Word RetTypeAndMode_27;
      MR_Box conv0_RetTypeAndMode_27;
      MR_Box conv1_STATE_VARIABLE_IO_29;

      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_12, &FuncTypesAndModes_26, &conv0_RetTypeAndMode_27);
      RetTypeAndMode_27 = ((MR_Word) (conv0_RetTypeAndMode_27));
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_16_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_25, TypeVarSet_17, InstVarSet_18, ExistQVars_19, PredName_24, FuncTypesAndModes_26, RetTypeAndMode_27, MaybeDetism_15, Purity_20, Constraints_21, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29);
    }
    else
    {
      MR_Box conv2_STATE_VARIABLE_IO_29;

      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_18_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_25, TypeVarSet_17, InstVarSet_18, PredOrFunc_11, ExistQVars_19, PredName_24, TypesAndModes_12, WithType_13, WithInst_14, MaybeDetism_15, Purity_20, Constraints_21, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_29);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_LambdaHeadVar__2_21;

    conv8_LambdaHeadVar__2_21 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1600__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_21;

    conv2_LambdaHeadVar__2_21 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1600__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemModeDefn_8)
{
  {
    MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_8, (MR_Integer) 0))));
    MR_Word InstParams_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_8, (MR_Integer) 1))));
    MR_Word MaybeAbstractModeDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_8, (MR_Integer) 2))));
    MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_8, (MR_Integer) 3))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_8, (MR_Integer) 4))));
    MR_Word UnQualSymName_16;
    MR_Word Lang_17;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, SymName_10, &UnQualSymName_16);
    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_14, Stream_7);
    Lang_17 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    if ((MaybeAbstractModeDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ArgTerms_56;
      MR_Word ModeTerm_58;
      MR_Word Var_59;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_U_31_44;
      MR_Box conv3_STATE_VARIABLE_U_32_45;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv5_STATE_VARIABLE_IO_19;

      func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) ":- abstract_mode((")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_31_44);
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Context_14));
      }
      ArgTerms_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[26]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[27]), Var_59, InstParams_11);
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), UnQualSymName_16, ArgTerms_56, Context_14, &ModeTerm_58);
      parse_tree__parse_tree_out_term__mercury_format_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), VarSet_13, (MR_Integer) 0, ModeTerm_58, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_32_45);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) ")).\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_19);
    }
    else
    {
      MR_Word Mode_33;
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_12, (MR_Integer) 0))));
      MR_Word ArgTerms_76;
      MR_Word ModeTerm_78;
      MR_Word Var_79;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv7_STATE_VARIABLE_U_23_36;
      MR_Box conv9_STATE_VARIABLE_U_24_37;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv11_STATE_VARIABLE_U_26_39;
      MR_Box conv12_STATE_VARIABLE_U_27_40;
      void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv14_STATE_VARIABLE_IO_19;

      Mode_33 = (MR_Word) (Var_34);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) ":- mode (")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_23_36);
      {
        Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Context_14));
      }
      ArgTerms_76 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[26]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[27]), Var_79, InstParams_11);
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), UnQualSymName_16, ArgTerms_76, Context_14, &ModeTerm_78);
      parse_tree__parse_tree_out_term__mercury_format_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), VarSet_13, (MR_Integer) 0, ModeTerm_78, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_24_37);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) ") == ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_26_39);
      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_17, VarSet_13, Mode_33, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_27_40);
      func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_19);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_32;

    conv1_LambdaHeadVar__2_32 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1493__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_32));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_18;

    conv0_LambdaHeadVar__2_18 = parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1541__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemInstDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word SymName0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_8, (MR_Integer) 0))));
    MR_Word InstParams_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_8, (MR_Integer) 1))));
    MR_Word MaybeForTypeCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_8, (MR_Integer) 2))));
    MR_Word MaybeAbstractInstDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_8, (MR_Integer) 3))));
    MR_Word InstVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_8, (MR_Integer) 4))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_8, (MR_Integer) 5))));
    MR_Word UnQualSymName_17;
    MR_Word SymName_18;
    MR_Word Lang_19;
    MR_Word ArgTerms_20;
    MR_Word InstTerm_22;
    MR_Word Var_30;
    MR_Word TypeInfo_27_86;
    MR_Word TypeInfo_28_87;
    MR_Word TypeCtorInfo_31_90;
    MR_Word TypeCtorInfo_32_91;
    MR_Word TypeCtorInfo_33_92;
    MR_String Name_65;
    MR_Word Args1_66;
    MR_Word Term_68;
    MR_Word VarSet_69;
    MR_Word ContextPieces_70;
    MR_Word MaybeInst_71;
    MR_Word Inst_72;
    MR_Word Var_75;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_84;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, SymName0_10, &UnQualSymName_17);
    succeeded = ((MR_tag((MR_Word) UnQualSymName_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Name_65 = ((MR_String) ((MR_hl_field(MR_mktag(0), UnQualSymName_17, (MR_Integer) 0))));
      TypeInfo_27_86 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[26]);
      TypeInfo_28_87 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[28]);
      Var_75 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[4]);
      Args1_66 = mercury__list__map_2_f_0(TypeInfo_27_86, TypeInfo_28_87, Var_75, InstParams_11);
      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Name_65));
      }
      Var_81 = mercury__term__context_init_0_f_0();
      TypeCtorInfo_31_90 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
      TypeCtorInfo_32_91 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
      {
        Term_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_68, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), Term_68, 1) = ((MR_Box) (Args1_66));
        MR_hl_field(MR_mktag(0), Term_68, 2) = ((MR_Box) (Var_81));
      }
      mercury__varset__coerce_2_p_0(TypeCtorInfo_31_90, TypeCtorInfo_32_91, InstVarSet_14, &VarSet_69);
      TypeCtorInfo_33_92 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
      ContextPieces_70 = mercury__cord__init_0_f_0(TypeCtorInfo_33_92);
      Var_82 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_scalar_common_8[0]));
      parse_tree__parse_inst_mode_name__parse_inst_5_p_0(Var_82, VarSet_69, ContextPieces_70, Term_68, &MaybeInst_71);
      succeeded = ((MR_tag((MR_Word) MaybeInst_71)) == (MR_Integer) 1);
      if (succeeded)
      {
        Inst_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_71, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Inst_72)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_72, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_72, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      SymName_18 = SymName0_10;
    else
      SymName_18 = UnQualSymName_17;
    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_15, Stream_7);
    Lang_19 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Context_15));
    }
    ArgTerms_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[26]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[27]), Var_30, InstParams_11);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), SymName_18, ArgTerms_20, Context_15, &InstTerm_22);
    if ((MaybeAbstractInstDefn_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- abstract_inst((");
      parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_14, (MR_Integer) 0, InstTerm_22, Stream_7);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")).\n");
    }
    else
    {
      MR_Word Inst_23;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_13, (MR_Integer) 0))));

      Inst_23 = (MR_Word) (Var_33);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- inst (");
      parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_14, (MR_Integer) 0, InstTerm_22, Stream_7);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
      if (!((MaybeForTypeCtor_12 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ForTypeCtor_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeCtor_12, (MR_Integer) 0))));
        MR_Word ForTypeCtorSymName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_24, (MR_Integer) 0))));
        MR_Integer ForTypeCtorArity_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_24, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "for ");
        parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(ForTypeCtorSymName_25, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
        mercury__io__write_int_4_p_0(Stream_7, ForTypeCtorArity_26);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
      }
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "== ");
      parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_7, Lang_19, InstVarSet_14, Inst_23);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__parse_tree_out_type_repn__foreign_type_assertion_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_55;

    conv0_LambdaHeadVar__2_55 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1043__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_55));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemTypeDefn_8)
{
  {
    MR_Word SymName0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 0))));
    MR_Word TypeParams_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 1))));
    MR_Word TypeDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 2))));
    MR_Word TypeVarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 3))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 4))));
    MR_Word SymName_16;
    MR_Word Args_17;
    MR_Word TypeTerm_19;
    MR_Word Var_53;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, SymName0_10, &SymName_16);
    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_14, Stream_7);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Context_14));
    }
    Args_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[24]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[25]), Var_53, TypeParams_11);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), SymName_16, Args_17, Context_14, &TypeTerm_19);
    switch (MR_tag((MR_Word) TypeDefn_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_28 = (MR_Word) ((MR_Word) (TypeDefn_12));
          MR_Word MaybeSuperType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 0))));
          MR_Word OoMCtors_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 1))));
          MR_Word MaybeCanonical_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 2))));
          MR_Word MaybeDirectArgs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 3))));
          MR_Word HeadCtor_34;
          MR_Word TailCtors_35;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
          parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
          if (!((MaybeSuperType_29 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word SuperType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_29, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) " =< ");
            parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TypeVarSet_13, (MR_Integer) 0, SuperType_33, Stream_7);
          }
          HeadCtor_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_30, (MR_Integer) 0))));
          TailCtors_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_30, (MR_Integer) 1))));
          parse_tree__parse_tree_out__mercury_output_ctors_7_p_0(TypeVarSet_13, (MR_Integer) 1, HeadCtor_34, TailCtors_35, Stream_7);
          parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(Info_6, TypeVarSet_13, (MR_Word) ((MR_Unsigned) 0U), MaybeCanonical_31, MaybeDirectArgs_32, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DetailsSolver_36 = (MR_Word) (MR_body((MR_Word) (TypeDefn_12), (MR_Integer) 1));
          MR_Word SolverTypeDetails_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_36, (MR_Integer) 0))));
          MR_Word Var_93;
          MR_Word MaybeCanonical_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_36, (MR_Integer) 1))));

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- solver type ");
          parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (SolverTypeDetails_37));
          }
          parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(Info_6, TypeVarSet_13, Var_93, MaybeCanonical_131, (MR_Word) ((MR_Unsigned) 0U), Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsEqv_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeDefn_12, (MR_Integer) 0))));
          MR_Word EqvType_27 = (MR_Word) (DetailsEqv_26);

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
          parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " == ");
          parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TypeVarSet_13, (MR_Integer) 0, EqvType_27, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsAbstract_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_12, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) DetailsAbstract_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(DetailsAbstract_20)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
                        parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_19, Stream_7);
                        switch (MR_tag((MR_Word) DetailsAbstract_20)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(DetailsAbstract_20)) {
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
                              MR_Word SuperTypeCtor_25 = (MR_Word) (MR_body((MR_Word) (DetailsAbstract_20), (MR_Integer) 1));

                              parse_tree__parse_tree_out__mercury_output_where_abstract_subtype_4_p_0(Stream_7, SuperTypeCtor_25);
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Integer NumBits_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DetailsAbstract_20, (MR_Integer) 0))));

                              parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_4_p_0(Stream_7, NumBits_24);
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- solver type ");
                        parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_19, Stream_7);
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
                    parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_19, Stream_7);
                    switch (MR_tag((MR_Word) DetailsAbstract_20)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(DetailsAbstract_20)) {
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
                          MR_Word SuperTypeCtor_25 = (MR_Word) (MR_body((MR_Word) (DetailsAbstract_20), (MR_Integer) 1));

                          parse_tree__parse_tree_out__mercury_output_where_abstract_subtype_4_p_0(Stream_7, SuperTypeCtor_25);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer NumBits_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DetailsAbstract_20, (MR_Integer) 0))));

                          parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_4_p_0(Stream_7, NumBits_24);
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
                    parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_19, Stream_7);
                    switch (MR_tag((MR_Word) DetailsAbstract_20)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(DetailsAbstract_20)) {
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
                          MR_Word SuperTypeCtor_25 = (MR_Word) (MR_body((MR_Word) (DetailsAbstract_20), (MR_Integer) 1));

                          parse_tree__parse_tree_out__mercury_output_where_abstract_subtype_4_p_0(Stream_7, SuperTypeCtor_25);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer NumBits_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DetailsAbstract_20, (MR_Integer) 0))));

                          parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_4_p_0(Stream_7, NumBits_24);
                        }
                        break;
                    }
                  }
                  break;
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DetailsForeign_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_12, (MR_Integer) 1))));
              MR_Word ForeignType_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_38, (MR_Integer) 0))));
              MR_Word Assertions_40;
              MR_String ForeignTypeStr_44;
              MR_Word AssertionsList_45;
              MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_38, (MR_Integer) 2))));
              MR_Word MaybeCanonical_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_38, (MR_Integer) 1))));

              Assertions_40 = (MR_Word) (Var_56);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- pragma foreign_type(");
              switch (MR_tag((MR_Word) ForeignType_39)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_71;

                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "c, ");
                    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_39, (MR_Integer) 0))));
                    ForeignTypeStr_44 = (MR_String) (Var_71);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_70;

                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "java, ");
                    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignType_39, (MR_Integer) 0))));
                    ForeignTypeStr_44 = (MR_String) (Var_70);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_69;

                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "csharp, ");
                    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_39, (MR_Integer) 0))));
                    ForeignTypeStr_44 = (MR_String) (Var_69);
                  }
                  break;
              }
              parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", \"");
              mercury__io__write_string_4_p_0(Stream_7, ForeignTypeStr_44);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\"");
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_40, &AssertionsList_45);
              if (!((AssertionsList_45 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word AssertionStrs_48;
                MR_String AssertionsStr_49;

                AssertionStrs_48 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[3]), AssertionsList_45);
                AssertionsStr_49 = mercury__string__join_list_2_f_0((MR_String) ", ", AssertionStrs_48);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", [");
                mercury__io__write_string_4_p_0(Stream_7, AssertionsStr_49);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(Info_6, TypeVarSet_13, (MR_Word) ((MR_Unsigned) 0U), MaybeCanonical_132, (MR_Word) ((MR_Unsigned) 0U), Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctors_7_p_0(
  MR_Word VarSet_8,
  MR_Word First_9,
  MR_Word HeadCtor_10,
  MR_Word TailCtors_11,
  MR_Word Stream_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (First_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n    ;       ");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n    --->    ");
        break;
    }
    parse_tree__parse_tree_out__mercury_output_ctor_5_p_0(VarSet_8, HeadCtor_10, Stream_12);
    if (!((TailCtors_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadTailCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors_11, (MR_Integer) 0))));
      MR_Word TailTailCtors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors_11, (MR_Integer) 1))));
      MR_Word next_value_of_HeadCtor_10 = HeadTailCtor_14;
      MR_Word next_value_of_TailCtors_11 = TailTailCtors_15;

      // direct tailcall eliminated
      ;
      First_9 = (MR_Integer) 0;
      HeadCtor_10 = next_value_of_HeadCtor_10;
      TailCtors_11 = next_value_of_TailCtors_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctor_5_p_0(
  MR_Word TVarSet_6,
  MR_Word Ctor_7,
  MR_Word Stream_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 1))));
    MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 2))));
    MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 3))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 4))));
    MR_String Name_16;
    MR_String ExistConstraintsPrefix_17;
    MR_String ExistConstraintsSuffix_18;
    MR_String BracePrefix_19;
    MR_String BraceSuffix_20;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
    parse_tree__parse_tree_out__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_6, (MR_String) "", (MR_String) "", MaybeExistConstraints_11, &ExistConstraintsPrefix_17, &ExistConstraintsSuffix_18);
    succeeded = (Arity_14 == (MR_Integer) 2);
    if (succeeded)
    {
      // binary string simple lookup switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(Name_16, ((&parse_tree__parse_tree_out_vector_common_5[0 + mid_2]))->parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0);
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
      BracePrefix_19 = (MR_String) "{ ";
      BraceSuffix_20 = (MR_String) " }";
    }
    else
    {
      BracePrefix_19 = (MR_String) "";
      BraceSuffix_20 = (MR_String) "";
    }
    mercury__io__write_string_4_p_0(Stream_8, ExistConstraintsPrefix_17);
    mercury__io__write_string_4_p_0(Stream_8, BracePrefix_19);
    if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Name_16));
      }
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(Var_36, Stream_8);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
    }
    else
    {
      MR_Word HeadArg_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
      MR_Word TailArgs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Name_16));
      }
      parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(Var_29, Stream_8);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
      parse_tree__parse_tree_out__mercury_output_ctor_args_6_p_0(Stream_8, TVarSet_6, HeadArg_21, TailArgs_22);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
    }
    mercury__io__write_string_4_p_0(Stream_8, BraceSuffix_20);
    mercury__io__write_string_4_p_0(Stream_8, ExistConstraintsSuffix_18);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ctor_args_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Word HeadArg_9,
  MR_Word TailArgs_10)
{
  while (MR_TRUE)
  {
    MR_Word Name_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArg_9, (MR_Integer) 0))));
    MR_Word Type_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArg_9, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Name_26 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FieldName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name_26, (MR_Integer) 0))));
      MR_Word Name_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldName_37, (MR_Integer) 0))));

      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(Name_39, Stream_7);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " :: ");
    }
    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_8, (MR_Integer) 0, Type_27, Stream_7);
    if (!((TailArgs_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadTailArg_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgs_10, (MR_Integer) 0))));
      MR_Word TailTailArgs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgs_10, (MR_Integer) 1))));
      MR_Word next_value_of_HeadArg_9;
      MR_Word next_value_of_TailArgs_10;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_HeadArg_9 = HeadTailArg_12;
      next_value_of_TailArgs_10 = TailTailArgs_13;
      HeadArg_9 = next_value_of_HeadArg_9;
      TailArgs_10 = next_value_of_TailArgs_10;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(
  MR_Word TVarSet_7,
  MR_String SuffixStart_8,
  MR_String SuffixEnd_9,
  MR_Word MaybeExistConstraints_10,
  MR_String * Prefix_11,
  MR_String * Suffix_12)
{
  if ((MaybeExistConstraints_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Prefix_11 = (MR_String) "";
    *Suffix_12 = (MR_String) "";
  }
  else
  {
    MR_Word ExistConstraints_13 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_10), (MR_Integer) 1));
    MR_Word ExistQVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_13, (MR_Integer) 0))));
    MR_Word Constraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_13, (MR_Integer) 1))));
    MR_String ExistQVarsStr_18;
    MR_String ConstraintsStr_19;
    MR_String Var_24;
    MR_String Var_25;

    ExistQVarsStr_18 = parse_tree__mercury_to_mercury__mercury_quantifier_to_string_3_f_0(TVarSet_7, (MR_Integer) 0, ExistQVars_14);
    ConstraintsStr_19 = parse_tree__mercury_to_mercury__mercury_prog_constraint_list_to_string_4_f_0(TVarSet_7, (MR_Integer) 0, (MR_String) "=>", Constraints_15);
    *Prefix_11 = mercury__string__f_43_43_2_f_0(ExistQVarsStr_18, (MR_String) "(");
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) ")", SuffixEnd_9);
    Var_24 = mercury__string__f_43_43_2_f_0(ConstraintsStr_19, Var_25);
    *Suffix_12 = mercury__string__f_43_43_2_f_0(SuffixStart_8, Var_24);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_subtype_4_p_0(
  MR_Word Stream_5,
  MR_Word TypeCtor_6)
{
  {
    MR_Word SymName_8;
    MR_Integer Arity_9;

    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n\twhere\t");
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "type_is_abstract_subtype(");
    SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 0))));
    Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(SymName_8, Stream_5);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "/");
    mercury__io__write_int_4_p_0(Stream_5, Arity_9);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_4_p_0(
  MR_Word Stream_5,
  MR_Integer NumBits_6)
{
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n\twhere\t");
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "type_is_abstract_enum(");
    mercury__io__write_int_4_p_0(Stream_5, NumBits_6);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(
  MR_Word Info_9,
  MR_Word TypeVarSet_10,
  MR_Word MaybeSolverTypeDetails_11,
  MR_Word MaybeCanonical_12,
  MR_Word MaybeDirectArgs_13,
  MR_Word Stream_14)
{
  {
    MR_bool succeeded = (MaybeSolverTypeDetails_11 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      if ((MaybeCanonical_12 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCanonical_12, (MR_Integer) 0))));

        succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        succeeded = (MaybeDirectArgs_13 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
    {
      MR_Word MaybeCmpPred_18;

      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n    where   ");
      if ((MaybeCanonical_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeCmpPred_18 = (MR_Word) ((MR_Unsigned) 0U);
        if (!((MaybeSolverTypeDetails_11 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word SolverTypeDetails_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_11, (MR_Integer) 0))));

          parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0(Info_9, Stream_14, TypeVarSet_10, SolverTypeDetails_21);
          succeeded = (MaybeDirectArgs_13 == (MR_Word) ((MR_Unsigned) 0U));
          if (!(succeeded))
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n\t\t");
        }
      }
      else
      {
        MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCanonical_12, (MR_Integer) 0))));
        MR_Word MaybeUniPred_95;

        switch (MR_tag((MR_Word) Var_94)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MaybeUniPred_95 = (MR_Word) ((MR_Unsigned) 0U);
              MaybeCmpPred_18 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word UniPred_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0))));
              MR_Word CmpPred_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 1))));

              {
                MaybeUniPred_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUniPred_95, 0) = ((MR_Box) (UniPred_19));
              }
              {
                MaybeCmpPred_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeCmpPred_18, 0) = ((MR_Box) (CmpPred_20));
              }
              if (!((MaybeSolverTypeDetails_11 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word SolverTypeDetails_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_11, (MR_Integer) 0))));

                parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0(Info_9, Stream_14, TypeVarSet_10, SolverTypeDetails_60);
                mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n\t\t");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word UniPred_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_94, (MR_Integer) 0))));

              {
                MaybeUniPred_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUniPred_95, 0) = ((MR_Box) (UniPred_56));
              }
              MaybeCmpPred_18 = (MR_Word) ((MR_Unsigned) 0U);
              if (!((MaybeSolverTypeDetails_11 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word SolverTypeDetails_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_11, (MR_Integer) 0))));

                parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0(Info_9, Stream_14, TypeVarSet_10, SolverTypeDetails_71);
                mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n\t\t");
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_94, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CmpPred_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_94, (MR_Integer) 1))));

                  MaybeUniPred_95 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    MaybeCmpPred_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeCmpPred_18, 0) = ((MR_Box) (CmpPred_57));
                  }
                  if (!((MaybeSolverTypeDetails_11 == (MR_Word) ((MR_Unsigned) 0U))))
                  {
                    MR_Word SolverTypeDetails_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_11, (MR_Integer) 0))));

                    parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0(Info_9, Stream_14, TypeVarSet_10, SolverTypeDetails_82);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n\t\t");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MaybeUniPred_95 = (MR_Word) ((MR_Unsigned) 0U);
                  MaybeCmpPred_18 = (MR_Word) ((MR_Unsigned) 0U);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "type_is_abstract_noncanonical");
                }
                break;
            }
            break;
        }
        if (!((MaybeUniPred_95 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word UniPredName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUniPred_95, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_14, (MR_String) "equality is ");
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(UniPredName_22, Stream_14);
          succeeded = (MaybeCmpPred_18 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybeDirectArgs_13 == (MR_Word) ((MR_Unsigned) 0U));
          if (!(succeeded))
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n\t\t");
        }
      }
      if ((MaybeCmpPred_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        if (!((MaybeDirectArgs_13 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word DirectArgFunctors_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgs_13, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_14, (MR_String) "direct_arg is [");
          parse_tree__parse_tree_out__mercury_output_direct_arg_functors_4_p_0(Stream_14, DirectArgFunctors_25);
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) "]");
        }
      }
      else
      {
        MR_Word CmpPredName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCmpPred_18, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_14, (MR_String) "comparison is ");
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(CmpPredName_23, Stream_14);
        if (!((MaybeDirectArgs_13 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word DirectArgFunctors_98;

          mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n\t\t");
          DirectArgFunctors_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgs_13, (MR_Integer) 0))));
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) "direct_arg is [");
          parse_tree__parse_tree_out__mercury_output_direct_arg_functors_4_p_0(Stream_14, DirectArgFunctors_98);
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) "]");
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mutable_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word TypeVarSet_9,
  MR_Word Details_10)
{
  {
    MR_Word RepresentationType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_10, (MR_Integer) 0))));
    MR_Word GroundInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_10, (MR_Integer) 1))));
    MR_Word AnyInst_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_10, (MR_Integer) 2))));
    MR_Word MutableInfos_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_10, (MR_Integer) 3))));
    MR_Word Lang_16;
    MR_Word EmptyInstVarSet_17;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "representation is ");
    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TypeVarSet_9, (MR_Integer) 0, RepresentationType_12, Stream_8);
    Lang_16 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_7);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &EmptyInstVarSet_17);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n\t\tground is ");
    parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_8, Lang_16, EmptyInstVarSet_17, GroundInst_13);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n\t\tany is ");
    parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_8, Lang_16, EmptyInstVarSet_17, AnyInst_14);
    if (!((MutableInfos_15 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_34;

      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n\t\tconstraint_store is [\n\t\t\t");
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Info_7));
      }
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), Var_34, (MR_String) ",\n\t\t\t", MutableInfos_15, Stream_8);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n\t\t]");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__1286__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_4_p_0(
  MR_Word Stream_5,
  MR_Word Ctors_6)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 27))));
    MR_Box conv1_STATE_VARIABLE_IO_9;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2])), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Ctors_6)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_9);
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
