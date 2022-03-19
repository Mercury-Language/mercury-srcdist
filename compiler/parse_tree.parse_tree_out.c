/*
** Automatically generated from `parse_tree_out.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-19
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
#include "libs.maybe_succeeded.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

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

static const MR_VA_PseudoTypeInfo_Struct5 parse_tree__parse_tree_out____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__plain_io__type_ctor_info_output_stream_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo parse_tree__parse_tree_out__parse_tree__parse_tree_out__field_types_simple_bound_inst_0_0[2];

static const MR_DuFunctorDesc parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_functor_desc_simple_bound_inst_0_0;

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_stag_ordered_simple_bound_inst_0_0[1];

static const MR_DuPtagLayout parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_ptag_ordered_simple_bound_inst_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_name_ordered_simple_bound_inst_0[1];

static const MR_Integer parse_tree__parse_tree_out__parse_tree__parse_tree_out__functor_number_map_simple_bound_inst_0[1];

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1978__1_7_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_34,
  MR_Box HeadVar__5_35,
  MR_Box HeadVar__6_36,
  MR_Box * HeadVar__7_37);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1975__1_7_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_28,
  MR_Box HeadVar__5_29,
  MR_Box HeadVar__6_30,
  MR_Box * HeadVar__7_31);

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_promise__1894__1_2_f_0(
  MR_Word VarSet_12,
  MR_Word HeadVar__2_41);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1701__1_2_f_0(
  MR_Word Context_9,
  MR_Word LambdaHeadVar__1_20);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1597__1_1_f_0(
  MR_Word LambdaHeadVar__1_17);

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_typeclass__1921__1_2_f_0(
  MR_Word VarSet_15,
  MR_Word HeadVar__2_47);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1520__1_2_f_0(
  MR_Word Context_15,
  MR_Word LambdaHeadVar__1_40);

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_where_attributes__1315__1_1_f_0(
  MR_String LambdaHeadVar__1_63);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1113__1_2_f_0(
  MR_Word Context_14,
  MR_Word LambdaHeadVar__1_52);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__881__1_1_f_0(
  MR_Word HeadVar__1_115);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__878__1_1_f_0(
  MR_Word HeadVar__1_107);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__875__1_1_f_0(
  MR_Word HeadVar__1_99);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__872__1_1_f_0(
  MR_Word HeadVar__1_91);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__869__1_1_f_0(
  MR_Word HeadVar__1_83);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__866__1_1_f_0(
  MR_Word HeadVar__1_75);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__863__1_1_f_0(
  MR_Word HeadVar__1_66);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__853__1_1_f_0(
  MR_Word HeadVar__1_257);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__850__1_1_f_0(
  MR_Word HeadVar__1_249);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__847__1_1_f_0(
  MR_Word HeadVar__1_241);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__844__1_1_f_0(
  MR_Word HeadVar__1_233);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__841__1_1_f_0(
  MR_Word HeadVar__1_225);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__838__1_1_f_0(
  MR_Word HeadVar__1_217);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__835__1_1_f_0(
  MR_Word HeadVar__1_209);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__832__1_1_f_0(
  MR_Word HeadVar__1_201);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__827__1_1_f_0(
  MR_Word HeadVar__1_189);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__824__1_1_f_0(
  MR_Word HeadVar__1_177);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__821__1_1_f_0(
  MR_Word HeadVar__1_169);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__786__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_135);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_55_56_54_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_135);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__690__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_156);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_54_57_48_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_156);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__620__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_197);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_50_48_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_197);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__419__1_5_p_0(
  MR_Word Info_6,
  MR_Word HeadVar__2_290,
  MR_Word HeadVar__3_291);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_49_57_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_290,
  MR_Word HeadVar__3_291);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__417__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_285);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_49_55_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_285);

static void MR_CALL 
parse_tree__parse_tree_out____Compare____simple_bound_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____simple_bound_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
parse_tree__parse_tree_out__output_class_decl_6_p_0(
  MR_Word Lang_7,
  MR_Word VarNamePrint_8,
  MR_Word Decl_9,
  MR_Word Stream_10);

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

static MR_bool MR_CALL 
parse_tree__parse_tree_out__name_is_simple_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__name_is_simple_1_p_0(
  MR_String Name_2);

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
  MR_Box * wrapper_arg_3);

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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_6_p_0(
  MR_Word Info_1,
  MR_Word VarNamePrint_2,
  MR_Word Stream_3,
  MR_Word HeadVar__4_4);

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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemMutable_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_mu_mc_6_p_0(
  MR_Word Info_7,
  MR_Word VarNamePrint_8,
  MR_Word Stream_9,
  MR_Word ItemPredDecl0_10);

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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decls_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word VarNamePrint_9,
  MR_Word ClassDecls_10);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__output_bound_inst_being_defined_8_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_String ArrowOrSemi_12,
  MR_Word HeadBI_13,
  MR_Word TailBIs_14);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0(
  MR_Word InstVarSet_4,
  MR_Word HeadVar__2_2,
  MR_Word Args0_6);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____simple_bound_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out____Compare____simple_bound_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[25][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[30][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[29][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_5[16][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[4][6];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_8[2][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_9[5][9];

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_10[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_11[3][10];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_12[8][7];


/* sealed */ struct parse_tree__parse_tree_out__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_tree_out__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_6_0_s parse_tree__parse_tree_out_vector_common_6[8];



static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[25][2] = {
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0))
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[30][3] = {
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
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[3])),
    ((MR_Box) (parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[0])),
    ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[4])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[7])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_20)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[8])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_22)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_24)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[12])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_30)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[13])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_32)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[14])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_34)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[8])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[12])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[13])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[14])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[15])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_5[15])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[1])),
    ((MR_Box) (parse_tree__parse_tree_out__name_is_simple_1_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[2][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[29][8] = {
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
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
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
  /* row 3 */
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
  /* row 4 */
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
  /* row 5 */
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
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
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
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
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
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
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
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 16 */
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
  /* row 17 */
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
  /* row 18 */
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
  /* row 19 */
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
  /* row 20 */
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
  /* row 21 */
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
  /* row 22 */
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
  /* row 23 */
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
  /* row 24 */
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
  /* row 25 */
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
  /* row 26 */
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
  /* row 27 */
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
  /* row 28 */
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

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_5[16][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[4][6] = {
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_8[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_9[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
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
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_10[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_11[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[0])),
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
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[0])),
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
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[0])),
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

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_12[8][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
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


static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_6_0_s parse_tree__parse_tree_out_vector_common_6[8] = {
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_tree_out__parse_tree__parse_tree_out__field_types_simple_bound_inst_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_functor_desc_simple_bound_inst_0_0 = {
  (MR_String) "simple_bound_functor",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_tree_out__parse_tree__parse_tree_out__field_types_simple_bound_inst_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_stag_ordered_simple_bound_inst_0_0[1] = {
  &parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_functor_desc_simple_bound_inst_0_0
};

static const MR_DuPtagLayout parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_ptag_ordered_simple_bound_inst_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_stag_ordered_simple_bound_inst_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_name_ordered_simple_bound_inst_0[1] = {
  &parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_functor_desc_simple_bound_inst_0_0
};

static const MR_Integer parse_tree__parse_tree_out__parse_tree__parse_tree_out__functor_number_map_simple_bound_inst_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out__parse_tree__parse_tree_out__type_ctor_info_simple_bound_inst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_tree_out____Unify____simple_bound_inst_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out____Compare____simple_bound_inst_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out",
  (MR_String) "simple_bound_inst",
  {     parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_name_ordered_simple_bound_inst_0 },
  {     parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_ptag_ordered_simple_bound_inst_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_tree_out__parse_tree__parse_tree_out__functor_number_map_simple_bound_inst_0,

};

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1978__1_7_p_0(
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
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1975__1_7_p_0(
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

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_promise__1894__1_2_f_0(
  MR_Word VarSet_12,
  MR_Word HeadVar__2_41)
{
  {
    MR_String HeadVar__3_42;

    HeadVar__3_42 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, HeadVar__2_41);
    return HeadVar__3_42;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1701__1_2_f_0(
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
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1597__1_1_f_0(
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

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_typeclass__1921__1_2_f_0(
  MR_Word VarSet_15,
  MR_Word HeadVar__2_47)
{
  {
    MR_String HeadVar__3_48;

    HeadVar__3_48 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_15, HeadVar__2_47);
    return HeadVar__3_48;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1520__1_2_f_0(
  MR_Word Context_15,
  MR_Word LambdaHeadVar__1_40)
{
  {
    MR_Word LambdaHeadVar__2_41;

    {
      LambdaHeadVar__2_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_41, 0) = ((MR_Box) (LambdaHeadVar__1_40));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_41, 1) = ((MR_Box) (Context_15));
    }
    return LambdaHeadVar__2_41;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_where_attributes__1315__1_1_f_0(
  MR_String LambdaHeadVar__1_63)
{
  {
    MR_String LambdaHeadVar__2_64;

    mercury__string__append_3_p_2((MR_String) "        ", LambdaHeadVar__1_63, &LambdaHeadVar__2_64);
    return LambdaHeadVar__2_64;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1113__1_2_f_0(
  MR_Word Context_14,
  MR_Word LambdaHeadVar__1_52)
{
  {
    MR_Word LambdaHeadVar__2_53;

    {
      LambdaHeadVar__2_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_53, 0) = ((MR_Box) (LambdaHeadVar__1_52));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_53, 1) = ((MR_Box) (Context_14));
    }
    return LambdaHeadVar__2_53;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__881__1_1_f_0(
  MR_Word HeadVar__1_115)
{
  {
    MR_Word HeadVar__2_116;
    MR_Box conv0_HeadVar__2_116;

    conv0_HeadVar__2_116 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), HeadVar__1_115);
    HeadVar__2_116 = ((MR_Word) (conv0_HeadVar__2_116));
    return HeadVar__2_116;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__878__1_1_f_0(
  MR_Word HeadVar__1_107)
{
  {
    MR_Word HeadVar__2_108;
    MR_Box conv0_HeadVar__2_108;

    conv0_HeadVar__2_108 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), HeadVar__1_107);
    HeadVar__2_108 = ((MR_Word) (conv0_HeadVar__2_108));
    return HeadVar__2_108;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__875__1_1_f_0(
  MR_Word HeadVar__1_99)
{
  {
    MR_Word HeadVar__2_100;
    MR_Box conv0_HeadVar__2_100;

    conv0_HeadVar__2_100 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_99);
    HeadVar__2_100 = ((MR_Word) (conv0_HeadVar__2_100));
    return HeadVar__2_100;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__872__1_1_f_0(
  MR_Word HeadVar__1_91)
{
  {
    MR_Word HeadVar__2_92;
    MR_Box conv0_HeadVar__2_92;

    conv0_HeadVar__2_92 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), HeadVar__1_91);
    HeadVar__2_92 = ((MR_Word) (conv0_HeadVar__2_92));
    return HeadVar__2_92;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__869__1_1_f_0(
  MR_Word HeadVar__1_83)
{
  {
    MR_Word HeadVar__2_84;
    MR_Box conv0_HeadVar__2_84;

    conv0_HeadVar__2_84 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), HeadVar__1_83);
    HeadVar__2_84 = ((MR_Word) (conv0_HeadVar__2_84));
    return HeadVar__2_84;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__866__1_1_f_0(
  MR_Word HeadVar__1_75)
{
  {
    MR_Word HeadVar__2_76;
    MR_Box conv0_HeadVar__2_76;

    conv0_HeadVar__2_76 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), HeadVar__1_75);
    HeadVar__2_76 = ((MR_Word) (conv0_HeadVar__2_76));
    return HeadVar__2_76;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__863__1_1_f_0(
  MR_Word HeadVar__1_66)
{
  {
    MR_Word HeadVar__2_67;
    MR_Box conv0_HeadVar__2_67;

    conv0_HeadVar__2_67 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), HeadVar__1_66);
    HeadVar__2_67 = ((MR_Word) (conv0_HeadVar__2_67));
    return HeadVar__2_67;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__853__1_1_f_0(
  MR_Word HeadVar__1_257)
{
  {
    MR_Word HeadVar__2_258;
    MR_Box conv0_HeadVar__2_258;

    conv0_HeadVar__2_258 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), HeadVar__1_257);
    HeadVar__2_258 = ((MR_Word) (conv0_HeadVar__2_258));
    return HeadVar__2_258;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__850__1_1_f_0(
  MR_Word HeadVar__1_249)
{
  {
    MR_Word HeadVar__2_250;
    MR_Box conv0_HeadVar__2_250;

    conv0_HeadVar__2_250 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), HeadVar__1_249);
    HeadVar__2_250 = ((MR_Word) (conv0_HeadVar__2_250));
    return HeadVar__2_250;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__847__1_1_f_0(
  MR_Word HeadVar__1_241)
{
  {
    MR_Word HeadVar__2_242;
    MR_Box conv0_HeadVar__2_242;

    conv0_HeadVar__2_242 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_241);
    HeadVar__2_242 = ((MR_Word) (conv0_HeadVar__2_242));
    return HeadVar__2_242;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__844__1_1_f_0(
  MR_Word HeadVar__1_233)
{
  {
    MR_Word HeadVar__2_234;
    MR_Box conv0_HeadVar__2_234;

    conv0_HeadVar__2_234 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), HeadVar__1_233);
    HeadVar__2_234 = ((MR_Word) (conv0_HeadVar__2_234));
    return HeadVar__2_234;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__841__1_1_f_0(
  MR_Word HeadVar__1_225)
{
  {
    MR_Word HeadVar__2_226;
    MR_Box conv0_HeadVar__2_226;

    conv0_HeadVar__2_226 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), HeadVar__1_225);
    HeadVar__2_226 = ((MR_Word) (conv0_HeadVar__2_226));
    return HeadVar__2_226;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__838__1_1_f_0(
  MR_Word HeadVar__1_217)
{
  {
    MR_Word HeadVar__2_218;
    MR_Box conv0_HeadVar__2_218;

    conv0_HeadVar__2_218 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), HeadVar__1_217);
    HeadVar__2_218 = ((MR_Word) (conv0_HeadVar__2_218));
    return HeadVar__2_218;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__835__1_1_f_0(
  MR_Word HeadVar__1_209)
{
  {
    MR_Word HeadVar__2_210;
    MR_Box conv0_HeadVar__2_210;

    conv0_HeadVar__2_210 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), HeadVar__1_209);
    HeadVar__2_210 = ((MR_Word) (conv0_HeadVar__2_210));
    return HeadVar__2_210;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__832__1_1_f_0(
  MR_Word HeadVar__1_201)
{
  {
    MR_Word HeadVar__2_202;
    MR_Box conv0_HeadVar__2_202;

    conv0_HeadVar__2_202 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), HeadVar__1_201);
    HeadVar__2_202 = ((MR_Word) (conv0_HeadVar__2_202));
    return HeadVar__2_202;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__827__1_1_f_0(
  MR_Word HeadVar__1_189)
{
  {
    MR_Word HeadVar__2_190;
    MR_Box conv0_HeadVar__2_190;

    conv0_HeadVar__2_190 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), HeadVar__1_189);
    HeadVar__2_190 = ((MR_Word) (conv0_HeadVar__2_190));
    return HeadVar__2_190;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__824__1_1_f_0(
  MR_Word HeadVar__1_177)
{
  {
    MR_Word HeadVar__2_178;
    MR_Box conv0_HeadVar__2_178;

    conv0_HeadVar__2_178 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), HeadVar__1_177);
    HeadVar__2_178 = ((MR_Word) (conv0_HeadVar__2_178));
    return HeadVar__2_178;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__821__1_1_f_0(
  MR_Word HeadVar__1_169)
{
  {
    MR_Word HeadVar__2_170;
    MR_Box conv0_HeadVar__2_170;

    conv0_HeadVar__2_170 = parse_tree__item_util__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), HeadVar__1_169);
    HeadVar__2_170 = ((MR_Word) (conv0_HeadVar__2_170));
    return HeadVar__2_170;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__786__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_135)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_55_56_54_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_135);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_55_56_54_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_135)
{
  {
    MR_Box conv0_HeadVar__5_137;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), ((MR_Box) (Stream_7)), HeadVar__3_135, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_137);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__690__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_156)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_54_57_48_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_156);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_54_57_48_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_156)
{
  {
    MR_Box conv0_HeadVar__5_158;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), ((MR_Box) (Stream_7)), HeadVar__3_156, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_158);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__620__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_197)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_50_48_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_197);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_50_48_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_197)
{
  {
    MR_Box conv0_HeadVar__5_199;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), ((MR_Box) (Stream_7)), HeadVar__3_197, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_199);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__419__1_5_p_0(
  MR_Word Info_6,
  MR_Word HeadVar__2_290,
  MR_Word HeadVar__3_291)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_49_57_95_95_49_95_95_91_49_93_95_48_5_p_0(HeadVar__2_290, HeadVar__3_291);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_49_57_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_290,
  MR_Word HeadVar__3_291)
{
  {
    MR_Box conv0_HeadVar__5_293;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), HeadVar__2_290, ((MR_Box) (HeadVar__3_291)), ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_293);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__417__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_285)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_49_55_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_285);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_49_55_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_285)
{
  {
    MR_Box conv0_HeadVar__5_287;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), ((MR_Box) (Stream_7)), HeadVar__3_285, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_287);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out____Compare____simple_bound_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[24]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____simple_bound_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[24]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
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
parse_tree__parse_tree_out__output_class_decl_6_p_0(
  MR_Word Lang_7,
  MR_Word VarNamePrint_8,
  MR_Word Decl_9,
  MR_Word Stream_10)
{
  {
    MR_bool succeeded;

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\t");
    if (((MR_tag((MR_Word) Decl_9)) == (MR_Integer) 1))
    {
      MR_Word ModeInfo_28 = (MR_Word) (MR_body((MR_Word) (Decl_9), (MR_Integer) 1));
      MR_Word Modes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_28, (MR_Integer) 2))));
      MR_Word SymName_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_28, (MR_Integer) 0))));
      MR_Word PredOrFunc_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_28, (MR_Integer) 1))));
      MR_Word WithInst_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_28, (MR_Integer) 3))));
      MR_Word MaybeDetism_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_28, (MR_Integer) 4))));
      MR_Word InstVarSet_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_28, (MR_Integer) 5))));
      MR_String Name_62;
      MR_Word Var_36;

      Name_62 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_56);
      succeeded = (WithInst_58 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (PredOrFunc_57 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredOrFunc_57, (MR_Integer) 0))));
          succeeded = (Var_36 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word FuncModes_30;
        MR_Word RetMode_31;
        MR_Word Var_37;
        MR_Box conv0_RetMode_31;
        MR_Box conv1_STATE_VARIABLE_IO_33;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_29, &FuncModes_30, &conv0_RetMode_31);
        RetMode_31 = ((MR_Word) (conv0_RetMode_31));
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Name_62));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_7, InstVarSet_60, Var_37, FuncModes_30, RetMode_31, MaybeDetism_59, (MR_String) "", (MR_String) "", ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_33);
      }
      else
      {
        MR_Word Var_41;
        MR_Box conv2_STATE_VARIABLE_IO_33;

        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Name_62));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_7, InstVarSet_60, Var_41, Modes_29, WithInst_58, MaybeDetism_59, (MR_String) "", (MR_String) "", ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_33);
      }
    }
    else
    {
      MR_Word PredOrFuncInfo_12 = (MR_Word) ((MR_Word) (Decl_9));
      MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 0))));
      MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word TypesAndModes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 2))));
      MR_Word WithType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 3))));
      MR_Word WithInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 4))));
      MR_Word MaybeDetism_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 5))));
      MR_Word TypeVarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 6))));
      MR_Word InstVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 7))));
      MR_Word ExistQVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 8))));
      MR_Word Purity_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 9))) & (MR_Integer) 3);
      MR_Word Constraints_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 10))));
      MR_String Name_25;

      Name_25 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_13);
      succeeded = (PredOrFunc_14 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (WithType_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word FuncTypesAndModes_26;
        MR_Word RetTypeAndMode_27;
        MR_Word Var_45;
        MR_Box conv3_RetTypeAndMode_27;
        MR_Box conv4_STATE_VARIABLE_IO_33;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_15, &FuncTypesAndModes_26, &conv3_RetTypeAndMode_27);
        RetTypeAndMode_27 = ((MR_Word) (conv3_RetTypeAndMode_27));
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Name_25));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_17_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_7, VarNamePrint_8, TypeVarSet_19, InstVarSet_20, ExistQVars_21, Var_45, FuncTypesAndModes_26, RetTypeAndMode_27, MaybeDetism_18, Purity_22, Constraints_23, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_33);
      }
      else
      {
        MR_Word Var_50;
        MR_Box conv5_STATE_VARIABLE_IO_33;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Name_25));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_19_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_7, VarNamePrint_8, TypeVarSet_19, InstVarSet_20, PredOrFunc_14, ExistQVars_21, Var_50, TypesAndModes_15, WithType_16, WithInst_17, MaybeDetism_18, Purity_22, Constraints_23, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_33);
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1978__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1975__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
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
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TypeClassInfo_for_output_27));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (TypeVarSet_7));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (VarNamePrint_8));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 27))));
    func_1(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[18])), ((MR_Box) (Var_17)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Domain_9)), S_11, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_19_19);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) " -> ")), S_11, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_21_21);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (TypeClassInfo_for_output_27));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (TypeVarSet_7));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (VarNamePrint_8));
    }
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 27))));
    func_3(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[18])), ((MR_Box) (Var_22)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Range_10)), S_11, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_24_24);
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

static MR_bool MR_CALL 
parse_tree__parse_tree_out__name_is_simple_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_alnum_or_underscore_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__name_is_simple_1_p_0(
  MR_String Name_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_8_8;
    MR_Word Chars_3;
    MR_Char HeadChar_4;
    MR_Word TailChars_5;
    MR_Word Var_6;

    mercury__string__to_char_list_2_p_0(Name_2, &Chars_3);
    succeeded = (Chars_3 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadChar_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars_3, (MR_Integer) 0)));
      TailChars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars_3, (MR_Integer) 1))));
      succeeded = mercury__char__is_lower_1_p_0(HeadChar_4);
      if (succeeded)
      {
        Var_6 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[29]);
        TypeCtorInfo_8_8 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
        succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_8_8, Var_6, TailChars_5);
      }
    }
    return succeeded;
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
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[28]));
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
parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(
  MR_Word HeadVar__1_6,
  MR_Word Stream_7,
  MR_Word ItemInstance_8)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemInstance_8);
}

void MR_CALL 
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
        result_3 = MR_strcmp(Name_6, ((&parse_tree__parse_tree_out_vector_common_6[4 + mid_2]))->parse_tree__parse_tree_out__vector_common_type_6_0__vct_6_f_0);
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
parse_tree__parse_tree_out__mercury_output_type_repn_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TypeRepnSpec_8)
{
  {
    MR_Word ParseTreeInt1_10 = (MR_Word) (TypeRepnSpec_8);

    parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_6, Stream_7, ParseTreeInt1_10);
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
parse_tree__parse_tree_out__mercury_output_indirect_int3_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word IndirectInt3Spec_8)
{
  {
    MR_Word ParseTreeInt3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectInt3Spec_8, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_6, Stream_7, ParseTreeInt3_10);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_indirect_int2_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word IndirectInt2Spec_8)
{
  {
    MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectInt2Spec_8, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(Info_6, Stream_7, ParseTreeInt2_10);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_int3_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word DirectInt3Spec_8)
{
  {
    MR_Word ParseTreeInt3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectInt3Spec_8, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_6, Stream_7, ParseTreeInt3_10);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_int1_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word DirectInt1Spec_8)
{
  {
    MR_Word ParseTreeInt1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectInt1Spec_8, (MR_Integer) 0))));

    parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_6, Stream_7, ParseTreeInt1_10);
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__419__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__417__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_pred_decl_mu_mc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
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
    MR_Word IntSelfFIMLangs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 12))));
    MR_Word ImpSelfFIMLangs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 13))));
    MR_Word TypeCtorCheckedMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 14))));
    MR_Word InstCtorCheckedMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 15))));
    MR_Word ModeCtorCheckedMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 16))));
    MR_Word IntTypeClasses_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 19))));
    MR_Word IntInstances_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 20))));
    MR_Word IntPredDecls_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 21))));
    MR_Word IntModeDecls_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 22))));
    MR_Word IntDeclPragmas_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 23))));
    MR_Word IntPromises_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 24))));
    MR_Word ImpTypeClasses_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 26))));
    MR_Word ImpInstances_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 27))));
    MR_Word ImpPredDecls_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 28))));
    MR_Word ImpModeDecls_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 29))));
    MR_Word ImpClauses_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 30))));
    MR_Word ImpForeignExportEnums_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 31))));
    MR_Word ImpDeclPragmas_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 32))));
    MR_Word ImpImplPragmas_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 33))));
    MR_Word ImpPromises_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 34))));
    MR_Word ImpInitialises_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 35))));
    MR_Word ImpFinalises_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 36))));
    MR_Word ImpMutables_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 37))));
    MR_Word IntTypeDefns_48;
    MR_Word ImpTypeDefns_49;
    MR_Word ImpForeignEnums_50;
    MR_Word IntInstDefns_51;
    MR_Word ImpInstDefns_52;
    MR_Word IntModeDefns_53;
    MR_Word ImpModeDefns_54;
    MR_Word IntSelfFIMLangStrs_55;
    MR_Word ImpSelfFIMLangStrs_56;
    MR_Word Var_65;
    MR_Word Var_69;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_89;
    MR_Word Var_91;
    MR_String Var_96;
    MR_String Var_103;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_128;
    MR_Word Var_132;
    MR_Word Var_136;
    MR_Word Var_140;
    MR_Word Var_157;
    MR_Word Var_159;
    MR_Word Var_161;
    MR_Word Var_166;
    MR_Word Var_170;
    MR_Word Var_172;
    MR_Word Var_174;
    MR_Box conv0_STATE_VARIABLE_IO_66_66;
    MR_Box conv1_STATE_VARIABLE_IO_70_70;
    MR_Box conv2_STATE_VARIABLE_IO_75_75;
    MR_Box conv3_STATE_VARIABLE_IO_79_79;
    MR_Box conv4_STATE_VARIABLE_IO_83_83;
    MR_Box conv5_STATE_VARIABLE_IO_87_87;
    MR_Box conv8_STATE_VARIABLE_IO_107_107;
    MR_Box conv9_STATE_VARIABLE_IO_109_109;
    MR_Box conv10_STATE_VARIABLE_IO_111_111;
    MR_Box conv11_STATE_VARIABLE_IO_113_113;
    MR_Box conv12_STATE_VARIABLE_IO_115_115;
    MR_Box conv13_STATE_VARIABLE_IO_117_117;
    MR_Box conv14_STATE_VARIABLE_IO_120_120;
    MR_Box conv15_STATE_VARIABLE_IO_122_122;
    MR_Box conv16_STATE_VARIABLE_IO_124_124;
    MR_Box conv17_STATE_VARIABLE_IO_129_129;
    MR_Box conv18_STATE_VARIABLE_IO_133_133;
    MR_Box conv19_STATE_VARIABLE_IO_137_137;
    MR_Box conv20_STATE_VARIABLE_IO_141_141;
    MR_Box conv21_STATE_VARIABLE_IO_143_143;
    MR_Box conv22_STATE_VARIABLE_IO_145_145;
    MR_Box conv23_STATE_VARIABLE_IO_147_147;
    MR_Box conv24_STATE_VARIABLE_IO_149_149;
    MR_Box conv25_STATE_VARIABLE_IO_151_151;
    MR_Box conv26_STATE_VARIABLE_IO_153_153;
    MR_Box conv27_STATE_VARIABLE_IO_156_156;
    MR_Box conv28_STATE_VARIABLE_IO_158_158;
    MR_Box conv29_STATE_VARIABLE_IO_160_160;
    MR_Box conv30_STATE_VARIABLE_IO_163_163;
    MR_Box conv31_STATE_VARIABLE_IO_165_165;
    MR_Box conv32_STATE_VARIABLE_IO_167_167;
    MR_Box conv33_STATE_VARIABLE_IO_169_169;
    MR_Box conv34_STATE_VARIABLE_IO_171_171;
    MR_Box conv35_STATE_VARIABLE_IO_173_173;
    MR_Box conv36_STATE_VARIABLE_IO_175_175;

    parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_24, &IntTypeDefns_48, &ImpTypeDefns_49, &ImpForeignEnums_50);
    parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_25, &IntInstDefns_51, &ImpInstDefns_52);
    parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_26, &IntModeDefns_53, &ImpModeDefns_54);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% module src\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% include_module_map\n");
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[21]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, InclMap_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_66_66);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% section_import_and_or_use_map\n");
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[22]));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, ImportUseMap_19, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_70_70);
    parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(Stream_7, (MR_Integer) 0);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_String) "include_module"));
    }
    Var_74 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntIncludeMap_12);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, Var_74, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_75_75);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) ((MR_String) "import_module"));
    }
    Var_78 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntImportMap_15);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, Var_78, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_79_79);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) ((MR_String) "use_module"));
    }
    Var_82 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_16);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, Var_82, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_83_83);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[2]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (Stream_7));
    }
    Var_86 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_20);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, Var_86, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_87_87);
    Var_89 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), IntSelfFIMLangs_22);
    IntSelfFIMLangStrs_55 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[27]), Var_89);
    Var_91 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ImpSelfFIMLangs_23);
    ImpSelfFIMLangStrs_56 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[28]), Var_91);
    Var_96 = mercury__string__join_list_2_f_0((MR_String) ", ", IntSelfFIMLangStrs_55);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% implicit interface FIM self-import languages: ");
    mercury__io__write_string_4_p_0(Stream_7, Var_96);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    Var_103 = mercury__string__join_list_2_f_0((MR_String) ", ", ImpSelfFIMLangStrs_56);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% implicit implementation FIM self-import languages: ");
    mercury__io__write_string_4_p_0(Stream_7, Var_103);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_106, IntTypeDefns_48, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_107_107);
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_10));
      MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, IntInstDefns_51, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_109_109);
    {
      Var_110 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_11));
      MR_hl_field(MR_mktag(0), Var_110, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_110, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_110, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_110, IntModeDefns_53, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_111_111);
    {
      Var_112 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_12));
      MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_112, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_112, IntTypeClasses_29, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_113_113);
    {
      Var_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_13));
      MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, IntInstances_30, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_115_115);
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[4]));
      MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_14));
      MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_116, 5) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_116, IntPredDecls_31, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_117_117);
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_15));
      MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_119, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_119, IntModeDecls_32, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_120_120);
    {
      Var_121 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_16));
      MR_hl_field(MR_mktag(0), Var_121, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_121, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_121, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_121, IntDeclPragmas_33, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_122_122);
    {
      Var_123 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_17));
      MR_hl_field(MR_mktag(0), Var_123, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_123, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_123, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_123, IntPromises_34, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_124_124);
    parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(Stream_7, (MR_Integer) 1);
    Var_128 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpIncludeMap_13);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, Var_128, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_129_129);
    Var_132 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpImportMap_17);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, Var_132, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_133_133);
    Var_136 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_18);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, Var_136, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_137_137);
    Var_140 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_21);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, Var_140, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_141_141);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_106, ImpTypeDefns_49, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_143_143);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, ImpInstDefns_52, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_145_145);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_110, ImpModeDefns_54, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_147_147);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_112, ImpTypeClasses_36, ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_IO_149_149);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, ImpInstances_37, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_151_151);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_116, ImpPredDecls_38, ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_IO_153_153);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_119, ImpModeDecls_39, ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_156_156);
    {
      Var_157 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[15]));
      MR_hl_field(MR_mktag(0), Var_157, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_18));
      MR_hl_field(MR_mktag(0), Var_157, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_157, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_157, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_157, ImpClauses_40, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_158_158);
    {
      Var_159 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[12]));
      MR_hl_field(MR_mktag(0), Var_159, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_19));
      MR_hl_field(MR_mktag(0), Var_159, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_159, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_159, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_159, ImpForeignEnums_50, ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_IO_160_160);
    {
      Var_161 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[23]));
      MR_hl_field(MR_mktag(0), Var_161, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_20));
      MR_hl_field(MR_mktag(0), Var_161, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_161, 3) = ((MR_Box) (Info_6));
    }
    parse_tree__parse_tree_out_info__add_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Var_161, (MR_String) "", ImpForeignExportEnums_41, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_IO_163_163);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_121, ImpDeclPragmas_42, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_165_165);
    {
      Var_166 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_166, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[24]));
      MR_hl_field(MR_mktag(0), Var_166, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_21));
      MR_hl_field(MR_mktag(0), Var_166, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_166, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_166, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[5]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_166, ImpImplPragmas_43, ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_IO_167_167);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_123, ImpPromises_44, ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_IO_169_169);
    {
      Var_170 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_170, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[25]));
      MR_hl_field(MR_mktag(0), Var_170, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_22));
      MR_hl_field(MR_mktag(0), Var_170, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_170, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_170, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_170, ImpInitialises_45, ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_IO_171_171);
    {
      Var_172 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_172, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[26]));
      MR_hl_field(MR_mktag(0), Var_172, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_23));
      MR_hl_field(MR_mktag(0), Var_172, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_172, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_172, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_172, ImpFinalises_46, ((MR_Box) ((MR_Integer) 0)), &conv35_STATE_VARIABLE_IO_173_173);
    {
      Var_174 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_174, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[27]));
      MR_hl_field(MR_mktag(0), Var_174, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_24));
      MR_hl_field(MR_mktag(0), Var_174, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_174, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_174, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_174, ImpMutables_47, ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_IO_175_175);
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "end_module", ModuleName_10);
    mercury__io__nl_3_p_0(Stream_7);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_trans_opt_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Globals_11,
  MR_String OutputFileName_12,
  MR_Word ParseTreeTransOpt_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word Res_37;

    mercury__io__open_output_4_p_0(OutputFileName_12, &Res_37);
    if (((MR_tag((MR_Word) Res_37)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
      *Succeeded_14 = (MR_Integer) 0;
    }
    else
    {
      MR_Word FileStream_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_37, (MR_Integer) 0))));
      MR_Word Verbose_39;
      MR_Word Info_40;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 70, &Verbose_39);
      Info_40 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0(Info_40, FileStream_38, ParseTreeTransOpt_13);
            mercury__io__close_output_3_p_0(FileStream_38);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
            mercury__io__flush_output_3_p_0(ProgressStream_9);
            parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0(Info_40, FileStream_38, ParseTreeTransOpt_13);
            mercury__io__close_output_3_p_0(FileStream_38);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
          }
          break;
      }
      *Succeeded_14 = (MR_Integer) 1;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__2_116;

    conv12_HeadVar__2_116 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__881__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_116));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_13(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_108;

    conv10_HeadVar__2_108 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__878__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_108));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_11(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_100;

    conv8_HeadVar__2_100 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__875__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_100));
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
    MR_Word conv6_HeadVar__2_92;

    conv6_HeadVar__2_92 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__872__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_92));
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
    MR_Word conv4_HeadVar__2_84;

    conv4_HeadVar__2_84 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__869__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_84));
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
    MR_Word conv2_HeadVar__2_76;

    conv2_HeadVar__2_76 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__866__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_76));
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
    MR_Word conv0_HeadVar__2_67;

    conv0_HeadVar__2_67 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__863__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_67));
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
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Box conv1_STATE_VARIABLE_IO_29_29;
    MR_Box conv3_STATE_VARIABLE_IO_34_34;
    MR_Box conv5_STATE_VARIABLE_IO_39_39;
    MR_Box conv7_STATE_VARIABLE_IO_44_44;
    MR_Box conv9_STATE_VARIABLE_IO_49_49;
    MR_Box conv11_STATE_VARIABLE_IO_54_54;
    MR_Box conv13_STATE_VARIABLE_IO_21;

    Lang_19 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% .trans_opt file\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[11]), Stream_7, Terms_12);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[17]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (Lang_19));
    }
    Var_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[11]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[20]), Terms_12);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, Var_28, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29_29);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), Stream_7, Term2s_13);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[18]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (Lang_19));
    }
    Var_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[21]), Term2s_13);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, Var_33, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_34_34);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[13]), Stream_7, Exceptions_14);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[5]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Stream_7));
    }
    Var_38 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[13]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[22]), Exceptions_14);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, Var_38, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_39_39);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), Stream_7, Trailings_15);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[6]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Stream_7));
    }
    Var_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[23]), Trailings_15);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Var_43, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_44_44);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), Stream_7, MMTablings_16);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[7]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Stream_7));
    }
    Var_48 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[24]), MMTablings_16);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_48, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_49_49);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), Stream_7, Sharings_17);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[19]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_11));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Lang_19));
    }
    Var_53 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[25]), Sharings_17);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, Var_53, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_54_54);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), Stream_7, Reuses_18);
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[20]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_13));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Lang_19));
    }
    Var_58 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[26]), Reuses_18);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, Var_58, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_21);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_plain_opt_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Globals_11,
  MR_String OutputFileName_12,
  MR_Word ParseTreePlainOpt_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word Res_37;

    mercury__io__open_output_4_p_0(OutputFileName_12, &Res_37);
    if (((MR_tag((MR_Word) Res_37)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
      *Succeeded_14 = (MR_Integer) 0;
    }
    else
    {
      MR_Word FileStream_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_37, (MR_Integer) 0))));
      MR_Word Verbose_39;
      MR_Word Info_40;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 70, &Verbose_39);
      Info_40 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0(Info_40, FileStream_38, ParseTreePlainOpt_13);
            mercury__io__close_output_3_p_0(FileStream_38);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
            mercury__io__flush_output_3_p_0(ProgressStream_9);
            parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0(Info_40, FileStream_38, ParseTreePlainOpt_13);
            mercury__io__close_output_3_p_0(FileStream_38);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
          }
          break;
      }
      *Succeeded_14 = (MR_Integer) 1;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv32_HeadVar__2_258;

    conv32_HeadVar__2_258 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__853__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv32_HeadVar__2_258));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_33(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv30_HeadVar__2_250;

    conv30_HeadVar__2_250 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__850__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv30_HeadVar__2_250));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_31(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv28_HeadVar__2_242;

    conv28_HeadVar__2_242 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__847__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv28_HeadVar__2_242));
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
    MR_Word conv26_HeadVar__2_234;

    conv26_HeadVar__2_234 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__844__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv26_HeadVar__2_234));
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
    MR_Word conv24_HeadVar__2_226;

    conv24_HeadVar__2_226 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__841__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv24_HeadVar__2_226));
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
    MR_Word conv22_HeadVar__2_218;

    conv22_HeadVar__2_218 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__838__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv22_HeadVar__2_218));
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
    MR_Word conv20_HeadVar__2_210;

    conv20_HeadVar__2_210 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__835__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv20_HeadVar__2_210));
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
    MR_Word conv18_HeadVar__2_202;

    conv18_HeadVar__2_202 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__832__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv18_HeadVar__2_202));
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
    MR_Word conv15_HeadVar__2_190;

    conv15_HeadVar__2_190 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__827__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv15_HeadVar__2_190));
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
    MR_Word conv12_HeadVar__2_178;

    conv12_HeadVar__2_178 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__824__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_178));
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
    MR_Word conv10_HeadVar__2_170;

    conv10_HeadVar__2_170 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__821__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_170));
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

    parse_tree__parse_tree_out__mercury_output_item_pred_decl_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__786__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Box conv0_STATE_VARIABLE_IO_45_45;
    MR_Box conv1_STATE_VARIABLE_IO_48_48;
    MR_Box conv2_STATE_VARIABLE_IO_50_50;
    MR_Box conv3_STATE_VARIABLE_IO_52_52;
    MR_Box conv4_STATE_VARIABLE_IO_54_54;
    MR_Box conv5_STATE_VARIABLE_IO_56_56;
    MR_Box conv6_STATE_VARIABLE_IO_58_58;
    MR_Box conv7_STATE_VARIABLE_IO_60_60;
    MR_Box conv8_STATE_VARIABLE_IO_62_62;
    MR_Box conv9_STATE_VARIABLE_IO_64_64;
    MR_Box conv11_STATE_VARIABLE_IO_67_67;
    MR_Box conv13_STATE_VARIABLE_IO_71_71;
    MR_Box conv14_STATE_VARIABLE_IO_74_74;
    MR_Box conv16_STATE_VARIABLE_IO_77_77;
    MR_Box conv17_STATE_VARIABLE_IO_80_80;
    MR_Box conv19_STATE_VARIABLE_IO_84_84;
    MR_Box conv21_STATE_VARIABLE_IO_89_89;
    MR_Box conv23_STATE_VARIABLE_IO_94_94;
    MR_Box conv25_STATE_VARIABLE_IO_99_99;
    MR_Box conv27_STATE_VARIABLE_IO_104_104;
    MR_Box conv29_STATE_VARIABLE_IO_109_109;
    MR_Box conv31_STATE_VARIABLE_IO_114_114;
    MR_Box conv33_STATE_VARIABLE_IO_38;

    Lang_35 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% .opt file\n");
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_String) "use_module"));
    }
    Var_44 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), UseMap_12);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, Var_44, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_45_45);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[2]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Stream_7));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, FIMSpecs_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_48_48);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, TypeDefns_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_50_50);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[12]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, ForeignEnums_15, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_52_52);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, InstDefns_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_54_54);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, ModeDefns_17, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_56_56);
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, TypeClasses_18, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_58_58);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, Instances_19, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_60_60);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Lang_35));
      MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_61, 5) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, PredDecls_20, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_62_62);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_10));
      MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_63, ModeDecls_21, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_64_64);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[3]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_11));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Stream_7));
    }
    Var_66 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[9]), PredMarkers_25);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, Var_66, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_67_67);
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_13));
      MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_69, 5) = ((MR_Box) (Lang_35));
    }
    Var_70 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[8]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[10]), TypeSpecs_26);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, Var_70, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_71_71);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[15]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_15));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, Clauses_22, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_74_74);
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[16]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_16));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (Lang_35));
    }
    Var_76 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[11]), ForeignProcs_23);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, Var_76, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_77_77);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_18));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, Promises_24, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_80_80);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[10]), Stream_7, UnusedArgs_27);
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[4]));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_19));
      MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (Stream_7));
    }
    Var_83 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[12]), UnusedArgs_27);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, Var_83, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_84_84);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[11]), Stream_7, Terms_28);
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[17]));
      MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_21));
      MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) (Lang_35));
    }
    Var_88 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[11]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[13]), Terms_28);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_87, Var_88, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_89_89);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), Stream_7, Term2s_29);
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[18]));
      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_23));
      MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_92, 4) = ((MR_Box) (Lang_35));
    }
    Var_93 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[14]), Term2s_29);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_92, Var_93, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_94_94);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[13]), Stream_7, Exceptions_30);
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[5]));
      MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_25));
      MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (Stream_7));
    }
    Var_98 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[13]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[15]), Exceptions_30);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_97, Var_98, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_99_99);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), Stream_7, Trailings_31);
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[6]));
      MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_27));
      MR_hl_field(MR_mktag(0), Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_102, 3) = ((MR_Box) (Stream_7));
    }
    Var_103 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[16]), Trailings_31);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_102, Var_103, ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_104_104);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), Stream_7, MMTablings_32);
    {
      Var_107 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[7]));
      MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_29));
      MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (Stream_7));
    }
    Var_108 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[17]), MMTablings_32);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_107, Var_108, ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_IO_109_109);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), Stream_7, Sharings_33);
    {
      Var_112 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[19]));
      MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_31));
      MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_112, 4) = ((MR_Box) (Lang_35));
    }
    Var_113 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[18]), Sharings_33);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_112, Var_113, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_114_114);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), Stream_7, Reuses_34);
    {
      Var_117 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[20]));
      MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_33));
      MR_hl_field(MR_mktag(0), Var_117, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_117, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_117, 4) = ((MR_Box) (Lang_35));
    }
    Var_118 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[19]), Reuses_34);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_117, Var_118, ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_IO_38);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_5,
  MR_Word Items_6)
{
  if (!((Items_6 == (MR_Word) ((MR_Unsigned) 0U))))
    mercury__io__nl_3_p_0(Stream_5);
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int3_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Globals_11,
  MR_String OutputFileName_12,
  MR_Word ParseTreeInt3_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word Res_37;

    mercury__io__open_output_4_p_0(OutputFileName_12, &Res_37);
    if (((MR_tag((MR_Word) Res_37)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
      *Succeeded_14 = (MR_Integer) 0;
    }
    else
    {
      MR_Word FileStream_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_37, (MR_Integer) 0))));
      MR_Word Verbose_39;
      MR_Word Info_40;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 70, &Verbose_39);
      Info_40 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_40, FileStream_38, ParseTreeInt3_13);
            mercury__io__close_output_3_p_0(FileStream_38);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
            mercury__io__flush_output_3_p_0(ProgressStream_9);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_40, FileStream_38, ParseTreeInt3_13);
            mercury__io__close_output_3_p_0(FileStream_38);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
          }
          break;
      }
      *Succeeded_14 = (MR_Integer) 1;
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

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word TypeCtorCheckedMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 6))));
    MR_Word InstCtorCheckedMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 7))));
    MR_Word ModeCtorCheckedMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 8))));
    MR_Word IntTypeClasses_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 9))));
    MR_Word IntInstances_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 10))));
    MR_Word IntTypeRepnMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 11))));
    MR_Word IntTypeDefns_22;
    MR_Word IntInstDefns_25;
    MR_Word IntModeDefns_27;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word _ImpTypeDefns_23;
    MR_Word _ImpForeignEnums_24;
    MR_Word _ImpInstDefns_26;
    MR_Word _ImpModeDefns_28;
    MR_Box conv0_STATE_VARIABLE_IO_37_37;
    MR_Box conv1_STATE_VARIABLE_IO_41_41;
    MR_Box conv2_STATE_VARIABLE_IO_44_44;
    MR_Box conv3_STATE_VARIABLE_IO_46_46;
    MR_Box conv4_STATE_VARIABLE_IO_48_48;
    MR_Box conv5_STATE_VARIABLE_IO_51_51;
    MR_Box conv6_STATE_VARIABLE_IO_54_54;
    MR_Box conv7_STATE_VARIABLE_IO_30;

    parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_16, &IntTypeDefns_22, &_ImpTypeDefns_23, &_ImpForeignEnums_24);
    parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_17, &IntInstDefns_25, &_ImpInstDefns_26);
    parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_18, &IntModeDefns_27, &_ImpModeDefns_28);
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- interface.\n");
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) ((MR_String) "include_module"));
    }
    Var_36 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_12);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, Var_36, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_37_37);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_String) "import_module"));
    }
    Var_40 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntImportMap_14);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, Var_40, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_41_41);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, IntTypeDefns_22, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_44_44);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, IntInstDefns_25, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_46_46);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, IntModeDefns_27, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_48_48);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (Stream_7));
    }
    Var_50 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_19);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, Var_50, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_51_51);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Stream_7));
    }
    Var_53 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_20);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, Var_53, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_54_54);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[13]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_55, IntTypeRepnMap_21, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_30);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int2_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Globals_11,
  MR_String OutputFileName_12,
  MR_Word ParseTreeInt2_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word Res_37;

    mercury__io__open_output_4_p_0(OutputFileName_12, &Res_37);
    if (((MR_tag((MR_Word) Res_37)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
      *Succeeded_14 = (MR_Integer) 0;
    }
    else
    {
      MR_Word FileStream_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_37, (MR_Integer) 0))));
      MR_Word Verbose_39;
      MR_Word Info_40;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 70, &Verbose_39);
      Info_40 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(Info_40, FileStream_38, ParseTreeInt2_13);
            mercury__io__close_output_3_p_0(FileStream_38);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
            mercury__io__flush_output_3_p_0(ProgressStream_9);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(Info_40, FileStream_38, ParseTreeInt2_13);
            mercury__io__close_output_3_p_0(FileStream_38);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
          }
          break;
      }
      *Succeeded_14 = (MR_Integer) 1;
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

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word TypeCtorCheckedMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 9))));
    MR_Word InstCtorCheckedMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 10))));
    MR_Word ModeCtorCheckedMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 11))));
    MR_Word IntTypeClasses_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 12))));
    MR_Word IntInstances_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 13))));
    MR_Word IntTypeRepnMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 14))));
    MR_Word IntTypeDefns_25;
    MR_Word ImpTypeDefns_26;
    MR_Word IntInstDefns_28;
    MR_Word IntModeDefns_30;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word _ImpForeignEnums_27;
    MR_Word _ImpInstDefns_29;
    MR_Word _ImpModeDefns_31;
    MR_Box conv0_STATE_VARIABLE_IO_41_41;
    MR_Box conv1_STATE_VARIABLE_IO_45_45;
    MR_Box conv2_STATE_VARIABLE_IO_48_48;
    MR_Box conv3_STATE_VARIABLE_IO_50_50;
    MR_Box conv4_STATE_VARIABLE_IO_52_52;
    MR_Box conv5_STATE_VARIABLE_IO_54_54;
    MR_Box conv6_STATE_VARIABLE_IO_57_57;
    MR_Box conv7_STATE_VARIABLE_IO_60_60;
    MR_Box conv8_STATE_VARIABLE_IO_62_62;

    parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_19, &IntTypeDefns_25, &ImpTypeDefns_26, &_ImpForeignEnums_27);
    parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_20, &IntInstDefns_28, &_ImpInstDefns_29);
    parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_21, &IntModeDefns_30, &_ImpModeDefns_31);
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(Stream_7, ModuleName_10, MaybeVersionNumbers_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- interface.\n");
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_String) "include_module"));
    }
    Var_40 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_13);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, Var_40, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_41_41);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_String) "use_module"));
    }
    Var_44 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_15);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, Var_44, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_45_45);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[2]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Stream_7));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, IntFIMSpecs_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_48_48);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, IntTypeDefns_25, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_50_50);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, IntInstDefns_28, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_52_52);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, IntModeDefns_30, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_54_54);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Stream_7));
    }
    Var_56 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_22);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, Var_56, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_57_57);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (Stream_7));
    }
    Var_59 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_23);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, Var_59, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_60_60);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[13]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_61, IntTypeRepnMap_24, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_62_62);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_18);
    if (succeeded)
      succeeded = (ImpTypeDefns_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
    {
      MR_Box conv9_STATE_VARIABLE_IO_66_66;
      MR_Box conv10_STATE_VARIABLE_IO_33;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- implementation.\n");
      mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, ImpFIMSpecs_18, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_66_66);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, ImpTypeDefns_26, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_33);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int1_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Globals_11,
  MR_String OutputFileName_12,
  MR_Word ParseTreeInt1_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word Res_37;

    mercury__io__open_output_4_p_0(OutputFileName_12, &Res_37);
    if (((MR_tag((MR_Word) Res_37)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
      *Succeeded_14 = (MR_Integer) 0;
    }
    else
    {
      MR_Word FileStream_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_37, (MR_Integer) 0))));
      MR_Word Verbose_39;
      MR_Word Info_40;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 70, &Verbose_39);
      Info_40 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_40, FileStream_38, ParseTreeInt1_13);
            mercury__io__close_output_3_p_0(FileStream_38);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
            mercury__io__flush_output_3_p_0(ProgressStream_9);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_40, FileStream_38, ParseTreeInt1_13);
            mercury__io__close_output_3_p_0(FileStream_38);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
          }
          break;
      }
      *Succeeded_14 = (MR_Integer) 1;
    }
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__690__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word TypeCtorCheckedMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 11))));
    MR_Word InstCtorCheckedMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 12))));
    MR_Word ModeCtorCheckedMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 13))));
    MR_Word IntTypeClasses_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 14))));
    MR_Word IntInstances_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 15))));
    MR_Word IntPredDecls_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 16))));
    MR_Word IntModeDecls_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 17))));
    MR_Word IntDeclPragmas_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 18))));
    MR_Word IntPromises_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 19))));
    MR_Word IntTypeRepnMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 20))));
    MR_Word ImpTypeClasses_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 21))));
    MR_Word IntTypeDefns_32;
    MR_Word ImpTypeDefns_33;
    MR_Word ImpForeignEnums_34;
    MR_Word IntInstDefns_35;
    MR_Word IntModeDefns_37;
    MR_Word IntPredOrModeDecls_39;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word _ImpInstDefns_36;
    MR_Word _ImpModeDefns_38;
    MR_Box conv0_STATE_VARIABLE_IO_49_49;
    MR_Box conv1_STATE_VARIABLE_IO_53_53;
    MR_Box conv2_STATE_VARIABLE_IO_56_56;
    MR_Box conv3_STATE_VARIABLE_IO_58_58;
    MR_Box conv4_STATE_VARIABLE_IO_60_60;
    MR_Box conv5_STATE_VARIABLE_IO_62_62;
    MR_Box conv6_STATE_VARIABLE_IO_65_65;
    MR_Box conv7_STATE_VARIABLE_IO_68_68;
    MR_Box conv8_STATE_VARIABLE_IO_73_73;
    MR_Box conv9_STATE_VARIABLE_IO_76_76;
    MR_Box conv10_STATE_VARIABLE_IO_78_78;

    parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_21, &IntTypeDefns_32, &ImpTypeDefns_33, &ImpForeignEnums_34);
    parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_22, &IntInstDefns_35, &_ImpInstDefns_36);
    parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_23, &IntModeDefns_37, &_ImpModeDefns_38);
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(Stream_7, ModuleName_10, MaybeVersionNumbers_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- interface.\n");
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) ((MR_String) "include_module"));
    }
    Var_48 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_13);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_48, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_49_49);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) ((MR_String) "use_module"));
    }
    Var_52 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_16);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, Var_52, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_53_53);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[2]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Stream_7));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, IntFIMSpecs_19, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_56_56);
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, IntTypeDefns_32, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_58_58);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, IntInstDefns_35, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_60_60);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, IntModeDefns_37, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_62_62);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (Stream_7));
    }
    Var_64 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_24);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_63, Var_64, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_65_65);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (Stream_7));
    }
    Var_67 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_25);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, Var_67, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_68_68);
    parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(IntPredDecls_26, IntModeDecls_27, &IntPredOrModeDecls_39);
    parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_6_p_0(Info_6, (MR_Integer) 0, Stream_7, IntPredOrModeDecls_39);
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (Stream_7));
    }
    Var_72 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), IntDeclPragmas_28);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, Var_72, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_73_73);
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_10));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (Stream_7));
    }
    Var_75 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises_29);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, Var_75, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_76_76);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[13]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_11));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (Stream_7));
    }
    mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_77, IntTypeRepnMap_30, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_78_78);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_14);
    if (succeeded)
    {
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_17);
      if (succeeded)
      {
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_20);
        if (succeeded)
        {
          succeeded = (ImpTypeDefns_33 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (ImpForeignEnums_34 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (ImpTypeClasses_31 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (!(succeeded))
    {
      MR_Word Var_82;
      MR_Word Var_86;
      MR_Word Var_93;
      MR_Word Var_96;
      MR_Box conv11_STATE_VARIABLE_IO_83_83;
      MR_Box conv12_STATE_VARIABLE_IO_87_87;
      MR_Box conv13_STATE_VARIABLE_IO_90_90;
      MR_Box conv14_STATE_VARIABLE_IO_92_92;
      MR_Box conv15_STATE_VARIABLE_IO_94_94;
      MR_Box conv16_STATE_VARIABLE_IO_41;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- implementation.\n");
      Var_82 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_14);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, Var_82, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_83_83);
      Var_86 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_17);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, Var_86, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_87_87);
      mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, ImpFIMSpecs_20, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_90_90);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, ImpTypeDefns_33, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_92_92);
      {
        Var_93 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[12]));
        MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_12));
        MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_93, 4) = ((MR_Box) (Stream_7));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_93, ImpForeignEnums_34, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_94_94);
      Var_96 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses_31);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_63, Var_96, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_41);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int0_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Globals_11,
  MR_String OutputFileName_12,
  MR_Word ParseTreeInt0_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word Res_37;

    mercury__io__open_output_4_p_0(OutputFileName_12, &Res_37);
    if (((MR_tag((MR_Word) Res_37)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
      *Succeeded_14 = (MR_Integer) 0;
    }
    else
    {
      MR_Word FileStream_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_37, (MR_Integer) 0))));
      MR_Word Verbose_39;
      MR_Word Info_40;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 70, &Verbose_39);
      Info_40 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(Info_40, FileStream_38, ParseTreeInt0_13);
            mercury__io__close_output_3_p_0(FileStream_38);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
            mercury__io__flush_output_3_p_0(ProgressStream_9);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(Info_40, FileStream_38, ParseTreeInt0_13);
            mercury__io__close_output_3_p_0(FileStream_38);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
          }
          break;
      }
      *Succeeded_14 = (MR_Integer) 1;
    }
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__620__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word TypeCtorCheckedMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 13))));
    MR_Word InstCtorCheckedMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 14))));
    MR_Word ModeCtorCheckedMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 15))));
    MR_Word IntTypeClasses_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 16))));
    MR_Word IntInstances_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 17))));
    MR_Word IntPredDecls_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 18))));
    MR_Word IntModeDecls_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 19))));
    MR_Word IntDeclPragmas_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 20))));
    MR_Word IntPromises_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 21))));
    MR_Word ImpTypeClasses_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 22))));
    MR_Word ImpInstances_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 23))));
    MR_Word ImpPredDecls_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 24))));
    MR_Word ImpModeDecls_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 25))));
    MR_Word ImpDeclPragmas_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 26))));
    MR_Word ImpPromises_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 27))));
    MR_Word IntTypeDefns_38;
    MR_Word ImpTypeDefns_39;
    MR_Word ImpForeignEnums_40;
    MR_Word IntInstDefns_41;
    MR_Word ImpInstDefns_42;
    MR_Word IntModeDefns_43;
    MR_Word ImpModeDefns_44;
    MR_Word IntPredOrModeDecls_45;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Box conv0_STATE_VARIABLE_IO_56_56;
    MR_Box conv1_STATE_VARIABLE_IO_60_60;
    MR_Box conv2_STATE_VARIABLE_IO_64_64;
    MR_Box conv3_STATE_VARIABLE_IO_67_67;
    MR_Box conv4_STATE_VARIABLE_IO_69_69;
    MR_Box conv5_STATE_VARIABLE_IO_71_71;
    MR_Box conv6_STATE_VARIABLE_IO_73_73;
    MR_Box conv7_STATE_VARIABLE_IO_76_76;
    MR_Box conv8_STATE_VARIABLE_IO_79_79;
    MR_Box conv9_STATE_VARIABLE_IO_84_84;
    MR_Box conv10_STATE_VARIABLE_IO_87_87;

    parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_23, &IntTypeDefns_38, &ImpTypeDefns_39, &ImpForeignEnums_40);
    parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_24, &IntInstDefns_41, &ImpInstDefns_42);
    parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_25, &IntModeDefns_43, &ImpModeDefns_44);
    parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
    parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(Stream_7, ModuleName_10, MaybeVersionNumbers_12);
    parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(Stream_7, (MR_Integer) 0);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) ((MR_String) "include_module"));
    }
    Var_55 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntInclMap_13);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, Var_55, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_56_56);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_String) "import_module"));
    }
    Var_59 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntImportMap_16);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, Var_59, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_60_60);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_String) "use_module"));
    }
    Var_63 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), IntUseMap_17);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Var_63, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_64_64);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[2]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Stream_7));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, IntFIMSpecs_21, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_67_67);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, IntTypeDefns_38, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_69_69);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, IntInstDefns_41, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_71_71);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, IntModeDefns_43, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_73_73);
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (Stream_7));
    }
    Var_75 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_26);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, Var_75, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_76_76);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (Stream_7));
    }
    Var_78 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances_27);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, Var_78, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_79_79);
    parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(IntPredDecls_28, IntModeDecls_29, &IntPredOrModeDecls_45);
    parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_6_p_0(Info_6, (MR_Integer) 0, Stream_7, IntPredOrModeDecls_45);
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_10));
      MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (Stream_7));
    }
    Var_83 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), IntDeclPragmas_30);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, Var_83, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_84_84);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_11));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (Stream_7));
    }
    Var_86 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises_31);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, Var_86, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_87_87);
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
            succeeded = (ImpTypeDefns_39 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (ImpInstDefns_42 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (ImpModeDefns_44 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (ImpTypeClasses_32 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (ImpInstances_33 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (ImpPredDecls_34 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (ImpModeDecls_35 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = (ImpForeignEnums_40 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = (ImpDeclPragmas_36 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                              succeeded = (ImpPromises_37 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word ImpPredOrModeDecls_46;
      MR_Word Var_91;
      MR_Word Var_95;
      MR_Word Var_99;
      MR_Word Var_111;
      MR_Word Var_114;
      MR_Word Var_118;
      MR_Word Var_121;
      MR_Word Var_124;
      MR_Box conv11_STATE_VARIABLE_IO_92_92;
      MR_Box conv12_STATE_VARIABLE_IO_96_96;
      MR_Box conv13_STATE_VARIABLE_IO_100_100;
      MR_Box conv14_STATE_VARIABLE_IO_103_103;
      MR_Box conv15_STATE_VARIABLE_IO_105_105;
      MR_Box conv16_STATE_VARIABLE_IO_107_107;
      MR_Box conv17_STATE_VARIABLE_IO_109_109;
      MR_Box conv18_STATE_VARIABLE_IO_112_112;
      MR_Box conv19_STATE_VARIABLE_IO_115_115;
      MR_Box conv20_STATE_VARIABLE_IO_119_119;
      MR_Box conv21_STATE_VARIABLE_IO_122_122;
      MR_Box conv22_STATE_VARIABLE_IO_48;

      parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(Stream_7, (MR_Integer) 1);
      Var_91 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpInclMap_14);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, Var_91, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_92_92);
      Var_95 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpImportMap_18);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, Var_95, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_96_96);
      Var_99 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), ImpUseMap_19);
      mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Var_99, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_100_100);
      mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, ImpFIMSpecs_22, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_103_103);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, ImpTypeDefns_39, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_105_105);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, ImpInstDefns_42, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_107_107);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, ImpModeDefns_44, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_109_109);
      Var_111 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses_32);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, Var_111, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_112_112);
      Var_114 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpInstances_33);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, Var_114, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_115_115);
      parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(ImpPredDecls_34, ImpModeDecls_35, &ImpPredOrModeDecls_46);
      parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_6_p_0(Info_6, (MR_Integer) 0, Stream_7, ImpPredOrModeDecls_46);
      {
        Var_118 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[12]));
        MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_12));
        MR_hl_field(MR_mktag(0), Var_118, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_118, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_118, 4) = ((MR_Box) (Stream_7));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_118, ImpForeignEnums_40, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_119_119);
      Var_121 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), ImpDeclPragmas_36);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, Var_121, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_122_122);
      Var_124 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromises_37);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, Var_124, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_48);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_6_p_0(
  MR_Word Info_1,
  MR_Word VarNamePrint_2,
  MR_Word Stream_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Item_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      if (((MR_tag((MR_Word) Item_16)) == (MR_Integer) 1))
      {
        MR_Word ItemModeDecl_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Item_16, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(Info_1, Stream_3, ItemModeDecl_31);
      }
      else
      {
        MR_Word ItemPredDecl_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Item_16, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_item_pred_decl_mu_mc_6_p_0(Info_1, VarNamePrint_2, Stream_3, ItemPredDecl_30);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
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
    MR_Integer Var_24;
    MR_String Var_27;
    MR_String Var_30;
    MR_String Var_35;

    Var_24 = recompilation__version__module_item_version_numbers_version_number_0_f_0();
    Var_27 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_7);
    Var_30 = recompilation__version__module_item_version_numbers_to_string_1_f_0(VersionNumbers_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- version_numbers(");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[0]), Var_24, &Var_35);
    mercury__io__write_string_4_p_0(Stream_6, Var_35);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_6, Var_27);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    mercury__io__write_string_4_p_0(Stream_6, Var_30);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_src_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Globals_11,
  MR_String OutputFileName_12,
  MR_Word ParseTreeSrc_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word Res_37;

    mercury__io__open_output_4_p_0(OutputFileName_12, &Res_37);
    if (((MR_tag((MR_Word) Res_37)) == (MR_Integer) 1))
    {
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
      mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
      *Succeeded_14 = (MR_Integer) 0;
    }
    else
    {
      MR_Word FileStream_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_37, (MR_Integer) 0))));
      MR_Word Verbose_39;
      MR_Word Info_40;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 70, &Verbose_39);
      Info_40 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
      switch (Verbose_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out__mercury_output_parse_tree_src_5_p_0(Info_40, FileStream_38, ParseTreeSrc_13);
            mercury__io__close_output_3_p_0(FileStream_38);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
            mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
            mercury__io__flush_output_3_p_0(ProgressStream_9);
            parse_tree__parse_tree_out__mercury_output_parse_tree_src_5_p_0(Info_40, FileStream_38, ParseTreeSrc_13);
            mercury__io__close_output_3_p_0(FileStream_38);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
          }
          break;
      }
      *Succeeded_14 = (MR_Integer) 1;
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
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Info_1));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Stream_2));
        }
        Var_43 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_22);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Var_43, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_44_44);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Info_1));
          MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Stream_2));
        }
        Var_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_23);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, Var_46, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[1]));
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
        MR_Word ItemPredDecl_14 = (MR_Word) (MR_body((MR_Word) (Item_8), (MR_Integer) 1));

        parse_tree__parse_tree_out__mercury_output_item_pred_decl_mu_mc_6_p_0(Info_6, (MR_Integer) 0, Stream_7, ItemPredDecl_14);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ItemModeDecl_15 = (MR_Word) (MR_body((MR_Word) (Item_8), (MR_Integer) 2));

        parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(Info_6, Stream_7, ItemModeDecl_15);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemForeignEnum_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));
            MR_Box conv0_STATE_VARIABLE_IO_29;

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), ((MR_Box) (Stream_7)), ItemForeignEnum_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_29);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemForeignExportEnum_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_29;

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), ItemForeignExportEnum_17, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemPromise_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemPromise_21);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemTypeClass_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(Info_6, Stream_7, ItemTypeClass_22);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ItemInstance_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemInstance_23);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemInitialise_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemInitialise_24);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ItemFinalise_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_105_110_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemFinalise_25);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ItemMutable_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_mutable_5_p_0(Info_6, Stream_7, ItemMutable_26);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ItemTypeDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(Info_6, Stream_7, ItemTypeDefn_11);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ItemInstDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(Info_6, Stream_7, ItemInstDefn_12);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ItemModeDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(Info_6, Stream_7, ItemModeDefn_13);
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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_42;

    conv0_HeadVar__3_42 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_promise__1894__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_42));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemPromise_8)
{
  {
    MR_Word PromiseType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_8, (MR_Integer) 1))));
    MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_8, (MR_Integer) 2))));
    MR_Word UnivVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_8, (MR_Integer) 3))));
    MR_Word UnivVarStrs_16;
    MR_String UnivVarsStr_17;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (VarSet_12));
    }
    UnivVarStrs_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[23]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, UnivVars_13);
    UnivVarsStr_17 = mercury__string__join_list_2_f_0((MR_String) ", ", UnivVarStrs_16);
    switch (PromiseType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String Var_29;

          Var_29 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_10);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- all [");
          mercury__io__write_string_4_p_0(Stream_7, UnivVarsStr_17);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]\n");
          mercury__io__write_string_4_p_0(Stream_7, Var_29);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n(\n");
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- promise all [");
          mercury__io__write_string_4_p_0(Stream_7, UnivVarsStr_17);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (\n");
        }
        break;
    }
    parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_12, (MR_Integer) 1, Goal_11);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n).\n");
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
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[1]));
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

void MR_CALL 
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
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[1]));
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
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[8]), (MR_String) ",\n", Methods_19, Stream_7);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n]");
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
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

void MR_CALL 
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
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[1]));
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
parse_tree__parse_tree_out__mercury_output_item_pred_decl_mu_mc_6_p_0(
  MR_Word Info_7,
  MR_Word VarNamePrint_8,
  MR_Word Stream_9,
  MR_Word ItemPredDecl0_10)
{
  {
    MR_Word MaybeQualifiedItemNames_12;
    MR_Word ItemPredDecl_13;
    MR_Word Lang_16;
    MR_Word Var_20;

    MaybeQualifiedItemNames_12 = parse_tree__parse_tree_out_info__get_maybe_qualified_item_names_1_f_0(Info_7);
    switch (MaybeQualifiedItemNames_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ItemPredDecl_13 = ItemPredDecl0_10;
        break;
      case (MR_Integer) 0:
        {
          MR_Word PredSymName0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 0))));
          MR_Word PredSymName_15;
          MR_String Var_19;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;

          Var_19 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName0_14);
          {
            PredSymName_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PredSymName_15, 0) = ((MR_Box) (Var_19));
          }
          Var_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 2))));
          Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 3))));
          Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 4))));
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 5))));
          Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 6))));
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 7))));
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 8))));
          Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 9))));
          Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 10))) & (MR_Integer) 3);
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 11))));
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 12))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_10, (MR_Integer) 13))));
          {
            ItemPredDecl_13 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 0) = ((MR_Box) (PredSymName_15));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 1) = (MR_Box) ((MR_Unsigned) (Var_37));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 2) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 3) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 4) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 5) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 6) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 7) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 8) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 9) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 10) = (MR_Box) ((MR_Unsigned) (Var_46));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 11) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 12) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(0), ItemPredDecl_13, 13) = ((MR_Box) (Var_49));
          }
        }
        break;
    }
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 12))));
    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_7, Var_20, Stream_9);
    Lang_16 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_7);
    parse_tree__parse_tree_out__mercury_output_item_pred_decl_6_p_0(Lang_16, VarNamePrint_8, Stream_9, ItemPredDecl_13);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_6_p_0(
  MR_Word Lang_7,
  MR_Word VarNamePrint_8,
  MR_Word Stream_9,
  MR_Word ItemPredDecl_10)
{
  {
    MR_bool succeeded;
    MR_Word PredSymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 0))));
    MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 2))));
    MR_Word WithType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 3))));
    MR_Word WithInst_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 4))));
    MR_Word MaybeDetism_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 5))));
    MR_Word TypeVarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 7))));
    MR_Word InstVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 8))));
    MR_Word ExistQVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 9))));
    MR_Word Purity_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 10))) & (MR_Integer) 3);
    MR_Word Constraints_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 11))));

    succeeded = (PredOrFunc_13 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WithType_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word FuncTypesAndModes_26;
      MR_Word RetTypeAndMode_27;
      MR_Box conv0_RetTypeAndMode_27;
      MR_Box conv1_STATE_VARIABLE_IO_29;

      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_14, &FuncTypesAndModes_26, &conv0_RetTypeAndMode_27);
      RetTypeAndMode_27 = ((MR_Word) (conv0_RetTypeAndMode_27));
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_17_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_7, VarNamePrint_8, TypeVarSet_19, InstVarSet_20, ExistQVars_21, PredSymName_12, FuncTypesAndModes_26, RetTypeAndMode_27, MaybeDetism_17, Purity_22, Constraints_23, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29);
    }
    else
    {
      MR_Box conv2_STATE_VARIABLE_IO_29;

      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_19_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), Lang_7, VarNamePrint_8, TypeVarSet_19, InstVarSet_20, PredOrFunc_13, ExistQVars_21, PredSymName_12, TypesAndModes_14, WithType_15, WithInst_16, MaybeDetism_17, Purity_22, Constraints_23, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_29);
    }
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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_48;

    conv0_HeadVar__3_48 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_typeclass__1921__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_48));
    return wrapper_arg_2;
  }
}

void MR_CALL 
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
    MR_String ClassNameStr_19;
    MR_Word VarStrs_20;
    MR_String VarsStr_21;
    MR_Word Var_26;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, ClassName0_10, &ClassName_18);
    ClassNameStr_19 = parse_tree__mercury_to_mercury__mercury_sym_name_to_string_1_f_0(ClassName_18);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (VarSet_15));
    }
    VarStrs_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[18]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_26, Vars_11);
    VarsStr_21 = mercury__string__join_list_2_f_0((MR_String) ", ", VarStrs_20);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- typeclass ");
    mercury__io__write_string_4_p_0(Stream_7, ClassNameStr_19);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_7, VarsStr_21);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
    succeeded = (FunDeps_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Constraints_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
    {
      MR_Word Var_72;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv2_STATE_VARIABLE_U_21_71;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_U_24_74;
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv10_STATE_VARIABLE_IO_36_36;

      func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) " <= (")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_21_71);
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (VarSet_15));
        MR_hl_field(MR_mktag(0), Var_72, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 27))));
      func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)), ((MR_Box) (Var_72)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (FunDeps_13)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_24_74);
      if (!((Constraints_12 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Var_77;
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv8_STATE_VARIABLE_U_29_79;

        if (!((FunDeps_13 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv6_STATE_VARIABLE_U_26_76;

          func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_26_76);
        }
        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[1]));
          MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_3));
          MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (VarSet_15));
          MR_hl_field(MR_mktag(0), Var_77, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 27))));
        func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (Var_77)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Constraints_12)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_29_79);
      }
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_36_36);
    }
    if ((Interface_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
    else
    {
      MR_Word ClassDecls_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface_14, (MR_Integer) 0))));
      MR_Word Lang_23;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " where [\n");
      Lang_23 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
      parse_tree__parse_tree_out__output_class_decls_6_p_0(Stream_7, Lang_23, (MR_Integer) 0, ClassDecls_22);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n].\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__output_class_decl_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decls_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word VarNamePrint_9,
  MR_Word ClassDecls_10)
{
  {
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out__output_class_decls_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Lang_8));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (VarNamePrint_9));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), Var_14, (MR_String) ",\n", ClassDecls_10, Stream_7);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemModeDecl_8)
{
  {
    MR_bool succeeded;
    MR_Word PredSymName0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 0))));
    MR_Word MaybePredOrFunc_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 1))));
    MR_Word ArgModes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 2))));
    MR_Word MaybeWithInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 3))));
    MR_Word MaybeDetism_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 4))));
    MR_Word InstVarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 5))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_8, (MR_Integer) 6))));
    MR_Word PredSymName_18;
    MR_Word Lang_19;
    MR_Word Var_25;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, PredSymName0_10, &PredSymName_18);
    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_16, Stream_7);
    Lang_19 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    succeeded = (MaybeWithInst_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybePredOrFunc_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_11, (MR_Integer) 0))));
        succeeded = (Var_25 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word FuncArgModes_20;
      MR_Word ReturnMode_21;
      MR_Box conv0_ReturnMode_21;

      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_12, &FuncArgModes_20, &conv0_ReturnMode_21);
      ReturnMode_21 = ((MR_Word) (conv0_ReturnMode_21));
      parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_9_p_0(Stream_7, Lang_19, InstVarSet_15, PredSymName_18, FuncArgModes_20, ReturnMode_21, MaybeDetism_14);
    }
    else
      parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_9_p_0(Stream_7, Lang_19, InstVarSet_15, PredSymName_18, ArgModes_12, MaybeWithInst_13, MaybeDetism_14);
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

    conv8_LambdaHeadVar__2_21 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1701__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    conv2_LambdaHeadVar__2_21 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1701__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

void MR_CALL 
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
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Context_14));
      }
      ArgTerms_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[20]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[21]), Var_59, InstParams_11);
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
        MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Context_14));
      }
      ArgTerms_76 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[20]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[21]), Var_79, InstParams_11);
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

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_tree_out__name_is_simple_1_p_0(((MR_String) (wrapper_arg_1)));
    return succeeded;
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
    MR_Word conv0_LambdaHeadVar__2_41;

    conv0_LambdaHeadVar__2_41 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1520__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_41));
    return wrapper_arg_2;
  }
}

void MR_CALL 
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
    MR_Word Var_39;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, SymName0_10, &UnQualSymName_17);
    succeeded = parse_tree__parse_tree_out__is_builtin_inst_name_3_p_0(InstVarSet_14, UnQualSymName_17, InstParams_11);
    if (succeeded)
      SymName_18 = SymName0_10;
    else
      SymName_18 = UnQualSymName_17;
    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_15, Stream_7);
    Lang_19 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Context_15));
    }
    ArgTerms_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[20]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[21]), Var_39, InstParams_11);
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
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_13, (MR_Integer) 0))));
      MR_Word Names_90;
      MR_String Name_24;
      MR_Word HeadSimpleBI_34;
      MR_Word TailSimpleBIs_35;
      MR_Word Uniq_30;
      MR_Word BoundInsts_32;
      MR_Word SimpleBIs_33;

      Inst_23 = (MR_Word) (Var_42);
      Names_90 = mdbcomp__sym_name__sym_name_to_list_1_f_0(SymName_18);
      succeeded = mercury__list__all_true_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[7]), Names_90);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 0);
        if (succeeded)
        {
          Name_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_18, (MR_Integer) 0))));
          succeeded = parse_tree__parse_tree_out_term__mercury_op_1_p_0(Name_24);
        }
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_String Var_47;

        Var_47 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_18);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- inst ");
        mercury__io__write_string_4_p_0(Stream_7, Var_47);
        if (!((ArgTerms_20 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArgTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_20, (MR_Integer) 0))));
          MR_Word TailArgTerms_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_20, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_52_52;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), InstVarSet_14, (MR_Integer) 0, HeadArgTerm_25, TailArgTerms_26, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_52_52);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- inst (");
        parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_14, (MR_Integer) 0, InstTerm_22, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
      if (!((MaybeForTypeCtor_12 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ForTypeCtor_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeCtor_12, (MR_Integer) 0))));
        MR_Word ForTypeCtorSymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_27, (MR_Integer) 0))));
        MR_Integer ForTypeCtorArity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_27, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " for ");
        parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(ForTypeCtorSymName_28, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
        mercury__io__write_int_4_p_0(Stream_7, ForTypeCtorArity_29);
      }
      succeeded = ((((MR_tag((MR_Word) Inst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Uniq_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_23, (MR_Integer) 1))) & (MR_Integer) 7);
        BoundInsts_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_23, (MR_Integer) 3))));
        succeeded = (Uniq_30 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0(BoundInsts_32, &SimpleBIs_33);
          if (succeeded)
          {
            succeeded = (SimpleBIs_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadSimpleBI_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleBIs_33, (MR_Integer) 0))));
              TailSimpleBIs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleBIs_33, (MR_Integer) 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
        parse_tree__parse_tree_out__output_bound_inst_being_defined_8_p_0(Stream_7, Lang_19, InstVarSet_14, (MR_String) "    --->    ", HeadSimpleBI_34, TailSimpleBIs_35);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " == ");
        parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_7, Lang_19, InstVarSet_14, Inst_23);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__output_bound_inst_being_defined_8_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_String ArrowOrSemi_12,
  MR_Word HeadBI_13,
  MR_Word TailBIs_14)
{
  while (MR_TRUE)
  {
    MR_String Name_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadBI_13, (MR_Integer) 0))));
    MR_Word ArgInsts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadBI_13, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_4_p_0(Stream_9, ArrowOrSemi_12);
    mercury__io__write_string_4_p_0(Stream_9, Name_16);
    if (!((ArgInsts_17 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
      parse_tree__parse_tree_out_inst__mercury_output_inst_list_6_p_0(Stream_9, Lang_10, InstVarSet_11, ArgInsts_17);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
    }
    if ((TailBIs_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".\n");
    else
    {
      MR_Word HeadTailBI_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailBIs_14, (MR_Integer) 0))));
      MR_Word TailTailBIs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailBIs_14, (MR_Integer) 1))));
      MR_Word next_value_of_HeadBI_13;
      MR_Word next_value_of_TailBIs_14;

      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadBI_13 = HeadTailBI_20;
      next_value_of_TailBIs_14 = TailTailBIs_21;
      ArrowOrSemi_12 = (MR_String) "    ;       ";
      HeadBI_13 = next_value_of_HeadBI_13;
      TailBIs_14 = next_value_of_TailBIs_14;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_tree_out__name_is_simple_1_p_0(((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_6_17;
      MR_Word HeadBI_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailBIs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadSimpleBI_5;
      MR_Word TailSimpleBIs_6;
      MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadBI_3, (MR_Integer) 0))));
      MR_Word ArgInsts_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadBI_3, (MR_Integer) 1))));
      MR_Word SymName_9;
      MR_String SimpleName_12;
      MR_Word Names_14;
      MR_Word Var_15;

      succeeded = ((((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
        Names_14 = mdbcomp__sym_name__sym_name_to_list_1_f_0(SymName_9);
        Var_15 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[6]);
        TypeCtorInfo_6_17 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
        succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_6_17, Var_15, Names_14);
        if (succeeded)
        {
          SimpleName_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_9);
          {
            HeadSimpleBI_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadSimpleBI_5, 0) = ((MR_Box) (SimpleName_12));
            MR_hl_field(MR_mktag(0), HeadSimpleBI_5, 1) = ((MR_Box) (ArgInsts_8));
          }
          succeeded = parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0(TailBIs_4, &TailSimpleBIs_6);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadSimpleBI_5));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailSimpleBIs_6));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
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

    conv0_LambdaHeadVar__2_18 = parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1597__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
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
    MR_Word Var_25;

    if (succeeded)
    {
      Name_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_27_27 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[20]);
      TypeInfo_28_28 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[22]);
      Var_16 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[5]);
      Args1_7 = mercury__list__map_2_f_0(TypeInfo_27_27, TypeInfo_28_28, Var_16, Args0_6);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Name_5));
      }
      Var_22 = mercury__term__context_init_0_f_0();
      TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
      TypeCtorInfo_32_32 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
      {
        Term_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_9, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), Term_9, 1) = ((MR_Box) (Args1_7));
        MR_hl_field(MR_mktag(0), Term_9, 2) = ((MR_Box) (Var_22));
      }
      mercury__varset__coerce_2_p_0(TypeCtorInfo_31_31, TypeCtorInfo_32_32, InstVarSet_4, &VarSet_10);
      TypeCtorInfo_33_33 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
      ContextPieces_11 = mercury__cord__init_0_f_0(TypeCtorInfo_33_33);
      Var_23 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_scalar_common_3[1]));
      parse_tree__parse_inst_mode_name__parse_inst_5_p_0(Var_23, VarSet_10, ContextPieces_11, Term_9, &MaybeInst_12);
      succeeded = ((MR_tag((MR_Word) MaybeInst_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        Inst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_12, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        succeeded = !(succeeded);
      }
    }
    return succeeded;
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
    MR_Word conv0_LambdaHeadVar__2_53;

    conv0_LambdaHeadVar__2_53 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1113__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_53));
    return wrapper_arg_2;
  }
}

void MR_CALL 
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
    MR_Word Var_51;

    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, SymName0_10, &SymName_16);
    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_14, Stream_7);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Context_14));
    }
    Args_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[18]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[19]), Var_51, TypeParams_11);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), SymName_16, Args_17, Context_14, &TypeTerm_19);
    switch (MR_tag((MR_Word) TypeDefn_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_27 = (MR_Word) ((MR_Word) (TypeDefn_12));
          MR_Word OoMCtors_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_27, (MR_Integer) 0))));
          MR_Word MaybeCanonical_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_27, (MR_Integer) 1))));
          MR_Word MaybeDirectArgs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_27, (MR_Integer) 2))));
          MR_Word HeadCtor_31;
          MR_Word TailCtors_32;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
          parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
          HeadCtor_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_28, (MR_Integer) 0))));
          TailCtors_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_28, (MR_Integer) 1))));
          parse_tree__parse_tree_out__mercury_output_ctors_7_p_0(TypeVarSet_13, (MR_Integer) 1, HeadCtor_31, TailCtors_32, Stream_7);
          parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(Info_6, TypeVarSet_13, (MR_Word) ((MR_Unsigned) 0U), MaybeCanonical_29, MaybeDirectArgs_30, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SuperType_33;
          MR_Word DetailsDu_140 = (MR_Word) (MR_body((MR_Word) (TypeDefn_12), (MR_Integer) 1));
          MR_Word OoMCtors_141;
          MR_Word HeadCtor_142;
          MR_Word TailCtors_143;

          SuperType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_140, (MR_Integer) 0))));
          OoMCtors_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_140, (MR_Integer) 1))));
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
          parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " =< ");
          parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TypeVarSet_13, (MR_Integer) 0, SuperType_33, Stream_7);
          HeadCtor_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_141, (MR_Integer) 0))));
          TailCtors_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_141, (MR_Integer) 1))));
          parse_tree__parse_tree_out__mercury_output_ctors_7_p_0(TypeVarSet_13, (MR_Integer) 1, HeadCtor_142, TailCtors_143, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsSolver_34 = (MR_Word) (MR_body((MR_Word) (TypeDefn_12), (MR_Integer) 2));
          MR_Word SolverTypeDetails_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_34, (MR_Integer) 0))));
          MR_Word Var_91;
          MR_Word MaybeCanonical_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_34, (MR_Integer) 1))));

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- solver type ");
          parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (SolverTypeDetails_35));
          }
          parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(Info_6, TypeVarSet_13, Var_91, MaybeCanonical_144, (MR_Word) ((MR_Unsigned) 0U), Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsEqv_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_12, (MR_Integer) 1))));
              MR_Word EqvType_26 = (MR_Word) (DetailsEqv_25);

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
              parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " == ");
              parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TypeVarSet_13, (MR_Integer) 0, EqvType_26, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
            }
            break;
          case (MR_Integer) 1:
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
                              MR_Word SuperTypeCtor_24 = (MR_Word) (MR_body((MR_Word) (DetailsAbstract_20), (MR_Integer) 1));

                              parse_tree__parse_tree_out__mercury_output_where_abstract_subtype_4_p_0(Stream_7, SuperTypeCtor_24);
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Integer NumBits_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DetailsAbstract_20, (MR_Integer) 0))));

                              parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_4_p_0(Stream_7, NumBits_23);
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
                          MR_Word SuperTypeCtor_24 = (MR_Word) (MR_body((MR_Word) (DetailsAbstract_20), (MR_Integer) 1));

                          parse_tree__parse_tree_out__mercury_output_where_abstract_subtype_4_p_0(Stream_7, SuperTypeCtor_24);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer NumBits_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DetailsAbstract_20, (MR_Integer) 0))));

                          parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_4_p_0(Stream_7, NumBits_23);
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
                          MR_Word SuperTypeCtor_24 = (MR_Word) (MR_body((MR_Word) (DetailsAbstract_20), (MR_Integer) 1));

                          parse_tree__parse_tree_out__mercury_output_where_abstract_subtype_4_p_0(Stream_7, SuperTypeCtor_24);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer NumBits_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DetailsAbstract_20, (MR_Integer) 0))));

                          parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_4_p_0(Stream_7, NumBits_23);
                        }
                        break;
                    }
                  }
                  break;
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word DetailsForeign_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_12, (MR_Integer) 1))));
              MR_Word ForeignType_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_36, (MR_Integer) 0))));
              MR_Word Assertions_38;
              MR_String ForeignTypeStr_42;
              MR_Word AssertionsList_43;
              MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_36, (MR_Integer) 2))));
              MR_Word MaybeCanonical_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_36, (MR_Integer) 1))));

              Assertions_38 = (MR_Word) (Var_54);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- pragma foreign_type(");
              switch (MR_tag((MR_Word) ForeignType_37)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_69;

                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "c, ");
                    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_37, (MR_Integer) 0))));
                    ForeignTypeStr_42 = (MR_String) (Var_69);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_68;

                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "java, ");
                    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignType_37, (MR_Integer) 0))));
                    ForeignTypeStr_42 = (MR_String) (Var_68);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_67;

                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "csharp, ");
                    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_37, (MR_Integer) 0))));
                    ForeignTypeStr_42 = (MR_String) (Var_67);
                  }
                  break;
              }
              parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", \"");
              mercury__io__write_string_4_p_0(Stream_7, ForeignTypeStr_42);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\"");
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_38, &AssertionsList_43);
              if (!((AssertionsList_43 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word AssertionStrs_46;
                MR_String AssertionsStr_47;

                AssertionStrs_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[4]), AssertionsList_43);
                AssertionsStr_47 = mercury__string__join_list_2_f_0((MR_String) ", ", AssertionStrs_46);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", [");
                mercury__io__write_string_4_p_0(Stream_7, AssertionsStr_47);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(Info_6, TypeVarSet_13, (MR_Word) ((MR_Unsigned) 0U), MaybeCanonical_145, (MR_Word) ((MR_Unsigned) 0U), Stream_7);
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
        result_3 = MR_strcmp(Name_16, ((&parse_tree__parse_tree_out_vector_common_6[0 + mid_2]))->parse_tree__parse_tree_out__vector_common_type_6_0__vct_6_f_0);
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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_LambdaHeadVar__2_64;

    conv1_LambdaHeadVar__2_64 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_where_attributes__1315__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_64));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
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
    MR_bool succeeded;
    MR_Word Lines_29;
    MR_Word STATE_VARIABLE_LineCord_40_40;
    MR_Word STATE_VARIABLE_LineCord_50_50;
    MR_Word STATE_VARIABLE_LineCord_57_57;

    STATE_VARIABLE_LineCord_40_40 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    if ((MaybeCanonical_12 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_LineCord_50_50 = STATE_VARIABLE_LineCord_40_40;
    else
    {
      MR_Word NonCanon_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCanonical_12, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) NonCanon_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_LineCord_50_50 = STATE_VARIABLE_LineCord_40_40;
          break;
        case (MR_Integer) 1:
          {
            MR_Word UniPred_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanon_17, (MR_Integer) 0))));
            MR_Word CmpPred_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanon_17, (MR_Integer) 1))));
            MR_String UniPredStr_21;
            MR_String CmpPredStr_22;
            MR_String UniPredLine_23;
            MR_String CmpPredLine_24;
            MR_Word STATE_VARIABLE_LineCord_47_47;

            UniPredStr_21 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(UniPred_19);
            CmpPredStr_22 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(CmpPred_20);
            UniPredLine_23 = mercury__string__f_43_43_2_f_0((MR_String) "equality is ", UniPredStr_21);
            CmpPredLine_24 = mercury__string__f_43_43_2_f_0((MR_String) "comparison is ", CmpPredStr_22);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (UniPredLine_23)), STATE_VARIABLE_LineCord_40_40, &STATE_VARIABLE_LineCord_47_47);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CmpPredLine_24)), STATE_VARIABLE_LineCord_47_47, &STATE_VARIABLE_LineCord_50_50);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word UniPred_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanon_17, (MR_Integer) 0))));
            MR_String UniPredStr_69;
            MR_String UniPredLine_70;

            UniPredStr_69 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(UniPred_68);
            UniPredLine_70 = mercury__string__f_43_43_2_f_0((MR_String) "equality is ", UniPredStr_69);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (UniPredLine_70)), STATE_VARIABLE_LineCord_40_40, &STATE_VARIABLE_LineCord_50_50);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), NonCanon_17, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CmpPred_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NonCanon_17, (MR_Integer) 1))));
                MR_String CmpPredStr_72;
                MR_String CmpPredLine_73;

                CmpPredStr_72 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(CmpPred_71);
                CmpPredLine_73 = mercury__string__f_43_43_2_f_0((MR_String) "comparison is ", CmpPredStr_72);
                mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CmpPredLine_73)), STATE_VARIABLE_LineCord_40_40, &STATE_VARIABLE_LineCord_50_50);
              }
              break;
            case (MR_Integer) 1:
              mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "type_is_abstract_noncanonical")), STATE_VARIABLE_LineCord_40_40, &STATE_VARIABLE_LineCord_50_50);
              break;
          }
          break;
      }
    }
    if ((MaybeDirectArgs_13 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_LineCord_57_57 = STATE_VARIABLE_LineCord_50_50;
    else
    {
      MR_Word DirectArgFunctors_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgs_13, (MR_Integer) 0))));
      MR_Word FunctorStrs_26;
      MR_String FunctorsStr_27;
      MR_String DirectArgLine_28;
      MR_String Var_80;

      FunctorStrs_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[2]), DirectArgFunctors_25);
      FunctorsStr_27 = mercury__string__join_list_2_f_0((MR_String) ", ", FunctorStrs_26);
      Var_80 = mercury__string__f_43_43_2_f_0(FunctorsStr_27, (MR_String) "]");
      DirectArgLine_28 = mercury__string__f_43_43_2_f_0((MR_String) "direct_arg is [", Var_80);
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (DirectArgLine_28)), STATE_VARIABLE_LineCord_50_50, &STATE_VARIABLE_LineCord_57_57);
    }
    Lines_29 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_57_57);
    succeeded = (MaybeSolverTypeDetails_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Lines_29 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
    {
      MR_Word IndentedLines_36;
      MR_String AllLines_37;

      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n    where\n");
      if (!((MaybeSolverTypeDetails_11 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word SolverTypeDetails_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_11, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0(Info_9, Stream_14, TypeVarSet_10, SolverTypeDetails_30);
        if (!((Lines_29 == (MR_Word) ((MR_Unsigned) 0U))))
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n");
      }
      IndentedLines_36 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[3]), Lines_29);
      AllLines_37 = mercury__string__join_list_2_f_0((MR_String) ",\n", IndentedLines_36);
      mercury__io__write_string_4_p_0(Stream_14, AllLines_37);
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

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "        representation is ");
    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TypeVarSet_9, (MR_Integer) 0, RepresentationType_12, Stream_8);
    Lang_16 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_7);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &EmptyInstVarSet_17);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n        ground is ");
    parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_8, Lang_16, EmptyInstVarSet_17, GroundInst_13);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n        any is ");
    parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_8, Lang_16, EmptyInstVarSet_17, AnyInst_14);
    if (!((MutableInfos_15 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_34;

      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n        constraint_store is [\n            ");
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_solver_type_details_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Info_7));
      }
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), Var_34, (MR_String) ",\n            ", MutableInfos_15, Stream_8);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n        ]");
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(
  MR_Word Stream_6,
  MR_String Decl_7,
  MR_Word ModuleName_8)
{
  {
    MR_String ModuleNameStr_10;

    ModuleNameStr_10 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- ");
    mercury__io__write_string_4_p_0(Stream_6, Decl_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, ModuleNameStr_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
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

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____simple_bound_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_tree_out____Unify____simple_bound_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out____Compare____simple_bound_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_tree_out____Compare____simple_bound_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&parse_tree__parse_tree_out__parse_tree__parse_tree_out__type_ctor_info_simple_bound_inst_0);
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
