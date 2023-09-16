/*
** Automatically generated from `parse_tree_out.m'
** by the Mercury compiler,
** version rotd-2023-09-16
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.canonicalize_interface.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_out_type_repn.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.version.mih"
#include "string.builder.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_VA_PseudoTypeInfo_Struct5 parse_tree__parse_tree_out____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__plain_io__type_ctor_info_text_output_stream_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo parse_tree__parse_tree_out__parse_tree__parse_tree_out__field_types_simple_bound_inst_0_0[2];

static const MR_DuFunctorDesc parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_functor_desc_simple_bound_inst_0_0;

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_stag_ordered_simple_bound_inst_0_0[1];

static const MR_DuPtagLayout parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_ptag_ordered_simple_bound_inst_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_name_ordered_simple_bound_inst_0[1];

static const MR_Integer parse_tree__parse_tree_out__parse_tree__parse_tree_out__functor_number_map_simple_bound_inst_0[1];

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2047__1_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_33,
  MR_Box HeadVar__5_34,
  MR_Box HeadVar__6_35,
  MR_Box * HeadVar__7_36);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2044__1_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_27,
  MR_Box HeadVar__5_28,
  MR_Box HeadVar__6_29,
  MR_Box * HeadVar__7_30);

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_promise__1942__1_2_f_0(
  MR_Word VarSet_12,
  MR_Word HeadVar__2_40);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1749__1_2_f_0(
  MR_Word Context_9,
  MR_Word LambdaHeadVar__1_20);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1645__1_1_f_0(
  MR_Word LambdaHeadVar__1_17);

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_item_abstract_typeclass__1998__1_2_f_0(
  MR_Word VarSet_14,
  MR_Word HeadVar__2_40);

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_typeclass__1969__1_2_f_0(
  MR_Word VarSet_15,
  MR_Word HeadVar__2_50);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1568__1_2_f_0(
  MR_Word Context_15,
  MR_Word LambdaHeadVar__1_40);

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_where_attributes__1363__1_1_f_0(
  MR_String LambdaHeadVar__1_63);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1161__1_2_f_0(
  MR_Word Context_14,
  MR_Word LambdaHeadVar__1_52);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__875__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_151);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__873__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_146);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__839__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_117);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_56_51_57_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_117);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int3__818__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_86);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_56_49_56_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_86);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int3__816__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_81);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int3__800__1_1_p_0(
  MR_Word ImpInclModules_22);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int2__771__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_111);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_50_95_95_55_55_49_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_111);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__735__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_176);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__733__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_171);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_55_51_51_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_171);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__708__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_145);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__701__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_136);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_55_48_49_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_136);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__662__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_229);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__658__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_221);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_53_56_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_221);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__652__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_217);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_53_50_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_217);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__612__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_184);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__605__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_175);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_48_53_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_175);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__455__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_328);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__451__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_320);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__447__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_312);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_52_55_95_95_49_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_52_55_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_312);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__445__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_307);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_52_53_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_307);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__413__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_257);

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
  MR_Word TypeClassInfo_for_pt_output_26,
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
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_unqual_sym_name_string_pair_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_17,
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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Box * wrapper_arg_3);

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

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(
  MR_Word Stream_5,
  MR_Word Section_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_9(
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

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_10(
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
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_14(
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
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_14(
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
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_6_p_0(
  MR_Word Info_1,
  MR_Word VarNamePrint_2,
  MR_Word Stream_3,
  MR_Word HeadVar__4_4);

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
parse_tree__parse_tree_out__mercury_output_item_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_methods_5_p_0(
  MR_Word Stream_6,
  MR_Word HeadMethod_7,
  MR_Word TailMethods_8);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0_1(
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
parse_tree__parse_tree_out__output_class_decls_7_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Word VarNamePrint_10,
  MR_Word HeadClassDecl_11,
  MR_Word TailClassDecls_12);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
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
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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


static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[13][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[15][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[9][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[7][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_5[2][1];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[32][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_8[4][6];

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_9[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[3][10];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_11[9][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_12[1][13];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_13[3][9];


struct parse_tree__parse_tree_out__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_tree_out__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_7_0_s parse_tree__parse_tree_out_vector_common_7[8];



static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[13][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[15][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[2])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[4])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[4])),
    ((MR_Box) (parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[4])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_12[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_13[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_13[0])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[7])),
    ((MR_Box) (parse_tree__parse_tree_out__name_is_simple_1_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[9][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[2])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[1]))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_52_55_95_95_49_95_95_91_49_93_95_48_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[1]))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[7][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[2])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_5[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[32][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  23 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  24 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  25 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  26 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  27 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  28 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  29 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  30 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  31 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_8[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_9[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67695
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[3][10] = {
  /* row   0 */
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
  /* row   1 */
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
  /* row   2 */
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

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_11[9][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_12[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_13[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_7_0_s parse_tree__parse_tree_out_vector_common_7[8] = {
  /* row   0 */   { (MR_String) ";" },
  /* row   1 */   { (MR_String) "=>" },
  /* row   2 */   { (MR_String) "some" },
  /* row   3 */   { (MR_String) "{}" },
  /* row   4 */   { (MR_String) ";" },
  /* row   5 */   { (MR_String) "=>" },
  /* row   6 */   { (MR_String) "some" },
  /* row   7 */   { (MR_String) "{}" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_VA_PseudoTypeInfo_Struct5 parse_tree__parse_tree_out____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__plain_io__type_ctor_info_text_output_stream_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
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
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__plain_io__type_ctor_info_text_output_stream_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0) }
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

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_stag_ordered_simple_bound_inst_0_0[1] = { &parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_functor_desc_simple_bound_inst_0_0 };

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

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_name_ordered_simple_bound_inst_0[1] = { &parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_functor_desc_simple_bound_inst_0_0 };

static const MR_Integer parse_tree__parse_tree_out__parse_tree__parse_tree_out__functor_number_map_simple_bound_inst_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out__parse_tree__parse_tree_out__type_ctor_info_simple_bound_inst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_tree_out____Unify____simple_bound_inst_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out____Compare____simple_bound_inst_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out",
  (MR_String) "simple_bound_inst",
  { parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_name_ordered_simple_bound_inst_0 },
  { parse_tree__parse_tree_out__parse_tree__parse_tree_out__du_ptag_ordered_simple_bound_inst_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_tree_out__parse_tree__parse_tree_out__functor_number_map_simple_bound_inst_0,

};

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2047__1_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_33,
  MR_Box HeadVar__5_34,
  MR_Box HeadVar__6_35,
  MR_Box * HeadVar__7_36)
{
  parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_pt_output_26, TypeVarSet_7, VarNamePrint_8, HeadVar__4_33, HeadVar__5_34, HeadVar__6_35, HeadVar__7_36);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2044__1_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_27,
  MR_Box HeadVar__5_28,
  MR_Box HeadVar__6_29,
  MR_Box * HeadVar__7_30)
{
  parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_pt_output_26, TypeVarSet_7, VarNamePrint_8, HeadVar__4_27, HeadVar__5_28, HeadVar__6_29, HeadVar__7_30);
}

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_promise__1942__1_2_f_0(
  MR_Word VarSet_12,
  MR_Word HeadVar__2_40)
{
  MR_String HeadVar__3_41;

  HeadVar__3_41 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, HeadVar__2_40);
  return HeadVar__3_41;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1749__1_2_f_0(
  MR_Word Context_9,
  MR_Word LambdaHeadVar__1_20)
{
  MR_Word LambdaHeadVar__2_21;

  {
    LambdaHeadVar__2_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_21, 0) = ((MR_Box) (LambdaHeadVar__1_20));
    MR_hl_field(1, LambdaHeadVar__2_21, 1) = ((MR_Box) (Context_9));
  }
  return LambdaHeadVar__2_21;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1645__1_1_f_0(
  MR_Word LambdaHeadVar__1_17)
{
  MR_Word LambdaHeadVar__2_18;
  MR_Word Var_19;
  MR_Word Var_20;

  Var_19 = mercury__term__coerce_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LambdaHeadVar__1_17);
  Var_20 = mercury__term_context__dummy_context_0_f_0();
  {
    LambdaHeadVar__2_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, LambdaHeadVar__2_18, 1) = ((MR_Box) (Var_20));
  }
  return LambdaHeadVar__2_18;
}

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_item_abstract_typeclass__1998__1_2_f_0(
  MR_Word VarSet_14,
  MR_Word HeadVar__2_40)
{
  MR_String HeadVar__3_41;

  HeadVar__3_41 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_14, HeadVar__2_40);
  return HeadVar__3_41;
}

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_typeclass__1969__1_2_f_0(
  MR_Word VarSet_15,
  MR_Word HeadVar__2_50)
{
  MR_String HeadVar__3_51;

  HeadVar__3_51 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_15, HeadVar__2_50);
  return HeadVar__3_51;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1568__1_2_f_0(
  MR_Word Context_15,
  MR_Word LambdaHeadVar__1_40)
{
  MR_Word LambdaHeadVar__2_41;

  {
    LambdaHeadVar__2_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_41, 0) = ((MR_Box) (LambdaHeadVar__1_40));
    MR_hl_field(1, LambdaHeadVar__2_41, 1) = ((MR_Box) (Context_15));
  }
  return LambdaHeadVar__2_41;
}

static MR_String MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_where_attributes__1363__1_1_f_0(
  MR_String LambdaHeadVar__1_63)
{
  MR_String LambdaHeadVar__2_64;

  mercury__string__append_3_p_2((MR_String) "        ", LambdaHeadVar__1_63, &LambdaHeadVar__2_64);
  return LambdaHeadVar__2_64;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1161__1_2_f_0(
  MR_Word Context_14,
  MR_Word LambdaHeadVar__1_52)
{
  MR_Word LambdaHeadVar__2_53;

  {
    LambdaHeadVar__2_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_53, 0) = ((MR_Box) (LambdaHeadVar__1_52));
    MR_hl_field(1, LambdaHeadVar__2_53, 1) = ((MR_Box) (Context_14));
  }
  return LambdaHeadVar__2_53;
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__875__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_151)
{
  MR_Box conv0_HeadVar__4_153;

  parse_tree__parse_tree_out_pragma__mercury_format_item_impl_marker_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__2_151, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_153);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__873__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_146)
{
  MR_Box conv0_HeadVar__4_148;

  parse_tree__parse_tree_out_pragma__mercury_format_item_decl_marker_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__2_146, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_148);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__839__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_117)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_56_51_57_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_117);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_56_51_57_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_117)
{
  MR_Box conv0_HeadVar__5_119;

  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__3_117, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_119);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int3__818__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_86)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_56_49_56_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_86);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_56_49_56_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_86)
{
  MR_Box conv0_HeadVar__5_88;

  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__3_86, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_88);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int3__816__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_81)
{
  MR_Box conv0_HeadVar__5_83;

  parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Info_6, ((MR_Box) (Stream_7)), HeadVar__3_81, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_83);
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int3__800__1_1_p_0(
  MR_Word ImpInclModules_22)
{
  MR_bool succeeded;

  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpInclModules_22);
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int2__771__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_111)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_50_95_95_55_55_49_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_111);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_50_95_95_55_55_49_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_111)
{
  MR_Box conv0_HeadVar__5_113;

  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__3_111, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_113);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__735__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_176)
{
  MR_Box conv0_HeadVar__5_178;

  parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Info_6, ((MR_Box) (Stream_7)), HeadVar__3_176, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_178);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__733__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_171)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_55_51_51_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_171);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_55_51_51_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_171)
{
  MR_Box conv0_HeadVar__5_173;

  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__3_171, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_173);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__708__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_145)
{
  MR_Box conv0_HeadVar__4_147;

  parse_tree__parse_tree_out_pragma__mercury_format_item_decl_marker_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__2_145, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_147);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__701__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_136)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_55_48_49_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_136);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_55_48_49_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_136)
{
  MR_Box conv0_HeadVar__5_138;

  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__3_136, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_138);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__662__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_229)
{
  MR_Box conv0_HeadVar__4_231;

  parse_tree__parse_tree_out_pragma__mercury_format_item_decl_marker_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__2_229, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_231);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__658__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_221)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_53_56_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_221);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_53_56_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_221)
{
  MR_Box conv0_HeadVar__5_223;

  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__3_221, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_223);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__652__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_217)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_53_50_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_217);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_53_50_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_217)
{
  MR_Box conv0_HeadVar__5_219;

  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__3_217, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_219);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__612__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_184)
{
  MR_Box conv0_HeadVar__4_186;

  parse_tree__parse_tree_out_pragma__mercury_format_item_decl_marker_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__2_184, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_186);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__605__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_175)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_48_53_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_175);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_54_48_53_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_175)
{
  MR_Box conv0_HeadVar__5_177;

  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__3_175, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_177);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__455__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_328)
{
  MR_Box conv0_HeadVar__4_330;

  parse_tree__parse_tree_out_pragma__mercury_format_item_impl_marker_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__2_328, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_330);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__451__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_320)
{
  MR_Box conv0_HeadVar__4_322;

  parse_tree__parse_tree_out_pragma__mercury_format_item_decl_marker_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__2_320, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_322);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__447__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_312)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_52_55_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_312);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_52_55_95_95_49_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_format_sym_name_string_pair_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_52_55_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_312)
{
  MR_Word Lang_316 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_312, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor_317 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_312, (MR_Integer) 1))));
  MR_Word Attributes_318 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_312, (MR_Integer) 2))));
  MR_Word Overrides_319 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_312, (MR_Integer) 3))));
  MR_Word TypeName_322;
  MR_Integer TypeArity_323;
  MR_Word MaybePrefix_341;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_STATE_VARIABLE_U_21_325;
  MR_Box conv2_STATE_VARIABLE_U_22_326;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_U_24_328;
  MR_Box conv5_STATE_VARIABLE_U_26_330;
  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv7_STATE_VARIABLE_U_28_332;
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv9_STATE_VARIABLE_U_29_333;
  void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv11_STATE_VARIABLE_U_31_335;
  void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv13_STATE_VARIABLE_U_13_344;
  void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv21_STATE_VARIABLE_U_32_336;
  void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv23_STATE_VARIABLE_U_34_338;
  void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv25_STATE_VARIABLE_U_11_353;
  void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv27_STATE_VARIABLE_U_14_356;
  void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv29_STATE_VARIABLE_U_35_339;
  void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv31_HeadVar__5_314;

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ":- pragma foreign_export_enum(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_21_325);
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Lang_316, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_22_326);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_24_328);
  TypeName_322 = ((MR_Word) ((MR_hl_field(0, TypeCtor_317, (MR_Integer) 0))));
  TypeArity_323 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_317, (MR_Integer) 1))));
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0, TypeName_322, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_26_330);
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_28_332);
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 10))));
  func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (TypeArity_323)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_29_333);
  func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_31_335);
  MaybePrefix_341 = ((MR_Word) ((MR_hl_field(0, Attributes_318, (MR_Integer) 0))));
  func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) "[")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_13_344);
  if (!((MaybePrefix_341 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Prefix_342 = ((MR_String) ((MR_hl_field(1, MaybePrefix_341, (MR_Integer) 0))));
    void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv15_STATE_VARIABLE_U_15_346;
    void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv17_STATE_VARIABLE_U_16_347;
    void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv19_STATE_VARIABLE_U_18_349;

    func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) "prefix(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_15_346);
    func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 9))));
    func_16(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (Prefix_342)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_16_347);
    func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_18(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_18_349);
  }
  func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_32_336);
  func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_34_338);
  func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (MR_Word) ((MR_Char) 91)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_11_353);
  func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 26))));
  func_26(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[1])), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[8])), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Overrides_319)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_U_14_356);
  func_28 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_28(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (MR_Word) ((MR_Char) 93)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_U_35_339);
  func_30 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_30(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv31_HeadVar__5_314);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__445__1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_307)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_52_53_95_95_49_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_307);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_109_111_100_117_108_101_95_115_114_99_95_95_52_52_53_95_95_49_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__3_307)
{
  MR_Box conv0_HeadVar__5_309;

  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__3_307, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_309);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__413__1_4_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_257)
{
  MR_Box conv0_HeadVar__4_259;

  parse_tree__parse_tree_out_pragma__mercury_format_item_decl_marker_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), HeadVar__2_257, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_259);
}

static void MR_CALL 
parse_tree__parse_tree_out____Compare____simple_bound_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____simple_bound_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
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
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_4_p_0(
  MR_Word Stream_5,
  MR_Word ItemFIM_6)
{
  MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(0, ItemFIM_6, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, ItemFIM_6, (MR_Integer) 1))));
  MR_Word FIMSpec_12;

  {
    FIMSpec_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FIMSpec_12, 0) = (MR_Box) ((MR_Unsigned) (Lang_8));
    MR_hl_field(0, FIMSpec_12, 1) = ((MR_Box) (ModuleName_9));
  }
  parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(Stream_5, FIMSpec_12);
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
parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2047__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__2044__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_fundep_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__3_3,
  MR_Box S_11,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  MR_Word Domain_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word Range_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Box STATE_VARIABLE_U_16_16;
  MR_Word Var_17;
  MR_Box STATE_VARIABLE_U_19_19;
  MR_Box STATE_VARIABLE_U_21_21;
  MR_Word Var_22;
  MR_Box STATE_VARIABLE_U_24_24;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, (MR_Integer) 0)), (MR_Integer) 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), S_11, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_16_16);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[2]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_26));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (TypeVarSet_7));
    MR_hl_field(0, Var_17, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, (MR_Integer) 0)), (MR_Integer) 26))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[6])), ((MR_Box) (Var_17)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Domain_9)), S_11, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_19_19);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) " -> ")), S_11, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_21_21);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[2]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_fundep_6_p_0_2));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_26));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (TypeVarSet_7));
    MR_hl_field(0, Var_22, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, (MR_Integer) 0)), (MR_Integer) 26))));
  func_3(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[6])), ((MR_Box) (Var_22)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Range_10)), S_11, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_24_24);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, (MR_Integer) 0)), (MR_Integer) 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), S_11, STATE_VARIABLE_U_24_24, STATE_VARIABLE_U_14);
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
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_String String_6 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Box STATE_VARIABLE_U_12_12;
  MR_Box STATE_VARIABLE_U_14_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_15, (MR_Integer) 0, SymName_5, S_7, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_12_12);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, (MR_Integer) 0)), (MR_Integer) 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) ((MR_String) " - ")), S_7, STATE_VARIABLE_U_12_12, &STATE_VARIABLE_U_14_14);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, (MR_Integer) 0)), (MR_Integer) 9))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) (String_6)), S_7, STATE_VARIABLE_U_14_14, STATE_VARIABLE_U_10);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_unqual_sym_name_string_pair_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12)
{
  MR_Word SymName0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_String String_6 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_String Name_9;
  MR_Word SymName_10;
  MR_Box STATE_VARIABLE_U_14_14;
  MR_Box STATE_VARIABLE_U_16_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  Name_9 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_5);
  {
    SymName_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SymName_10, 0) = ((MR_Box) (Name_9));
  }
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_17, (MR_Integer) 0, SymName_10, S_7, STATE_VARIABLE_U_0_11, &STATE_VARIABLE_U_14_14);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, (MR_Integer) 0)), (MR_Integer) 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) " - ")), S_7, STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_16_16);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, (MR_Integer) 0)), (MR_Integer) 9))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) (String_6)), S_7, STATE_VARIABLE_U_16_16, STATE_VARIABLE_U_12);
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__name_is_simple_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_alnum_or_underscore_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__name_is_simple_1_p_0(
  MR_String Name_2)
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
    HeadChar_4 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars_3, (MR_Integer) 0)));
    TailChars_5 = ((MR_Word) ((MR_hl_field(1, Chars_3, (MR_Integer) 1))));
    succeeded = mercury__char__is_lower_1_p_0(HeadChar_4);
    if (succeeded)
    {
      Var_6 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[14]);
      TypeCtorInfo_8_8 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
      succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_8_8, Var_6, TailChars_5);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_avail_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Avail_8)
{
  MR_Word ModuleName_10;
  MR_Word Context_11;
  MR_String Decl_13;

  if (((MR_tag((MR_Word) Avail_8)) == (MR_Integer) 0))
  {
    MR_Word Var_16 = (MR_Word) ((MR_Word) (Avail_8));

    ModuleName_10 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
    Context_11 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
    Decl_13 = (MR_String) "import_module";
  }
  else
  {
    MR_Word Var_17 = (MR_Word) (MR_body((MR_Word) (Avail_8), (MR_Integer) 1));

    ModuleName_10 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
    Context_11 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
    Decl_13 = (MR_String) "use_module";
  }
  parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_11, Stream_7);
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, Decl_13, ModuleName_10);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_include_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemInclude_8)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ItemInclude_8, (MR_Integer) 0))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, ItemInclude_8, (MR_Integer) 1))));

  parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_11, Stream_7);
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "include_module", ModuleName_10);
}

static void MR_CALL 
parse_tree__parse_tree_out__write_import_use_map_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word ImportAndOrUse_8)
{
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% ");
  parse_tree__parse_tree_out_sym_name__mercury_output_bracketed_sym_name_4_p_0(ModuleName_7, Stream_6);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " -> ");
  if (((MR_tag((MR_Word) ImportAndOrUse_8)) == (MR_Integer) 0))
  {
    MR_Word SectionImportAndOrUse_10 = ((MR_Word) ((MR_hl_field(0, ImportAndOrUse_8, (MR_Integer) 0))));

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
        switch (((MR_Integer) ((MR_hl_field(3, SectionImportAndOrUse_10, (MR_Integer) 0))))) {
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
    MR_Word ImplicitImportAndOrUse_17 = ((MR_Unsigned) ((MR_hl_field(1, ImportAndOrUse_8, (MR_Integer) 0))) & (MR_Integer) 3);

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

static void MR_CALL 
parse_tree__parse_tree_out__write_include_module_map_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8)
{
  MR_Word Section_10 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_8, (MR_Integer) 0))) & (MR_Integer) 1);

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% ");
  parse_tree__parse_tree_out_sym_name__mercury_output_bracketed_sym_name_4_p_0(ModuleName_7, Stream_6);
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

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(
  MR_Word Stream_5,
  MR_Word FIMSpec_6)
{
  MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_6, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, FIMSpec_6, (MR_Integer) 1))));
  MR_Box conv0_STATE_VARIABLE_IO_14_14;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma foreign_import_module(");
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Lang_8, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  parse_tree__parse_tree_out_sym_name__mercury_output_bracketed_sym_name_ngt_5_p_0((MR_Integer) 1, ModuleName_9, Stream_5);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ").\n");
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_abstract_instance_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_19,
  MR_Word _Info_6,
  MR_Box S_7,
  MR_Word ItemAbstractInstance_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0(TypeClassInfo_for_pt_output_19, S_7, ItemAbstractInstance_8, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

MR_String MR_CALL 
parse_tree__parse_tree_out__item_abstract_instance_to_string_2_f_0(
  MR_Word Info_4,
  MR_Word ItemAbstractInstance_5)
{
  MR_String Str_6;

  Str_6 = parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_116_111_95_115_116_114_105_110_103_95_95_91_49_93_95_48_2_f_0(ItemAbstractInstance_5);
  return Str_6;
}

MR_String MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_116_111_95_115_116_114_105_110_103_95_95_91_49_93_95_48_2_f_0(
  MR_Word ItemAbstractInstance_5)
{
  MR_String Str_6;
  MR_Word State0_7;
  MR_Word State_8;
  MR_Box conv0_State_8;

  State0_7 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[3]), ((MR_Box) ((MR_Integer) 0)), ItemAbstractInstance_5, ((MR_Box) (State0_7)), &conv0_State_8);
  State_8 = ((MR_Word) (conv0_State_8));
  Str_6 = mercury__string__builder__to_string_1_f_0(State_8);
  return Str_6;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_19,
  MR_Box S_7,
  MR_Word ItemAbstractInstance_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_bool succeeded;
  MR_String HeaderStr_10;
  MR_String DeclStr_11;
  MR_Word Var_14 = (MR_Word) (ItemAbstractInstance_8);
  MR_Word ClassName_21 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
  MR_Word Types_22 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 1))));
  MR_Word Constraints_24 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 3))));
  MR_Word VarSet_26 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 5))));
  MR_String ClassNameStr_30;
  MR_Word TypeStrs_31;
  MR_String TypesStr_32;
  MR_String ConstraintsStr_33;
  MR_Word Var_34;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  ClassNameStr_30 = parse_tree__parse_tree_out_sym_name__mercury_sym_name_to_string_1_f_0(ClassName_21);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[0]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_5_p_0_1));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (VarSet_26));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  TypeStrs_31 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, Types_22);
  TypesStr_32 = mercury__string__join_list_2_f_0((MR_String) ", ", TypeStrs_31);
  ConstraintsStr_33 = parse_tree__parse_tree_out_type__mercury_prog_constraint_list_to_string_4_f_0(VarSet_26, (MR_Integer) 0, (MR_String) "<=", Constraints_24);
  succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(ClassNameStr_30);
  if (!(succeeded))
  {
    succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(ClassNameStr_30);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_String Var_42;
    MR_String Var_43;
    MR_String Var_45;
    MR_String Var_46;

    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "))", ConstraintsStr_33);
    Var_43 = mercury__string__f_43_43_2_f_0(TypesStr_32, Var_42);
    Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_43);
    Var_46 = mercury__string__f_43_43_2_f_0(ClassNameStr_30, Var_45);
    HeaderStr_10 = mercury__string__f_43_43_2_f_0((MR_String) ":- instance (", Var_46);
  }
  else
  {
    MR_String Var_49;
    MR_String Var_50;
    MR_String Var_52;
    MR_String Var_53;

    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ")", ConstraintsStr_33);
    Var_50 = mercury__string__f_43_43_2_f_0(TypesStr_32, Var_49);
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_50);
    Var_53 = mercury__string__f_43_43_2_f_0(ClassNameStr_30, Var_52);
    HeaderStr_10 = mercury__string__f_43_43_2_f_0((MR_String) ":- instance ", Var_53);
  }
  DeclStr_11 = mercury__string__f_43_43_2_f_0(HeaderStr_10, (MR_String) ".\n");
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) (DeclStr_11)), S_7, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(
  MR_Word _Info_6,
  MR_Word Stream_7,
  MR_Word ItemInstance_8)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemInstance_8);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type__mercury_format_constraint_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_format_fundep_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_41;

  conv0_HeadVar__3_41 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_item_abstract_typeclass__1998__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_41));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_37,
  MR_Word Info_6,
  MR_Box S_7,
  MR_Word ItemTypeClass_8,
  MR_Box STATE_VARIABLE_U_0_22,
  MR_Box * STATE_VARIABLE_U_23)
{
  MR_bool succeeded;
  MR_Word ClassName0_10 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 0))));
  MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 1))));
  MR_Word Constraints_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 2))));
  MR_Word FunDeps_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 3))));
  MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 5))));
  MR_Word ClassName_17;
  MR_String ClassNameStr_18;
  MR_Word VarStrs_19;
  MR_String VarsStr_20;
  MR_String StartStr_21;
  MR_Word Var_25;
  MR_Box STATE_VARIABLE_U_33_33;
  MR_Box STATE_VARIABLE_U_35_35;
  MR_String Var_44;
  MR_String Var_46;
  MR_String Var_47;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, ClassName0_10, &ClassName_17);
  ClassNameStr_18 = parse_tree__parse_tree_out_sym_name__mercury_sym_name_to_string_1_f_0(ClassName_17);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[2]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (VarSet_14));
  }
  VarStrs_19 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, Vars_11);
  VarsStr_20 = mercury__string__join_list_2_f_0((MR_String) ", ", VarStrs_19);
  Var_44 = mercury__string__f_43_43_2_f_0(VarsStr_20, (MR_String) ")");
  Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_44);
  Var_47 = mercury__string__f_43_43_2_f_0(ClassNameStr_18, Var_46);
  StartStr_21 = mercury__string__f_43_43_2_f_0((MR_String) ":- typeclass ", Var_47);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) (StartStr_21)), S_7, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_33_33);
  succeeded = (FunDeps_13 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (Constraints_12 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    STATE_VARIABLE_U_35_35 = STATE_VARIABLE_U_33_33;
  else
  {
    MR_Box STATE_VARIABLE_U_21_50;
    MR_Word Var_51;
    MR_Box STATE_VARIABLE_U_24_53;
    MR_Box STATE_VARIABLE_U_29_58;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, (MR_Integer) 0)), (MR_Integer) 6))));
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_2(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) " <= (")), S_7, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_21_50);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[0]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0_2));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_37));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (VarSet_14));
      MR_hl_field(0, Var_51, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, (MR_Integer) 0)), (MR_Integer) 26))));
    func_3(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)), ((MR_Box) (Var_51)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (FunDeps_13)), S_7, STATE_VARIABLE_U_21_50, &STATE_VARIABLE_U_24_53);
    if ((Constraints_12 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_29_58 = STATE_VARIABLE_U_24_53;
    else
    {
      MR_Box STATE_VARIABLE_U_26_55;
      MR_Word Var_56;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      if ((FunDeps_13 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_U_26_55 = STATE_VARIABLE_U_24_53;
      else
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, (MR_Integer) 0)), (MR_Integer) 6))));

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) ", ")), S_7, STATE_VARIABLE_U_24_53, &STATE_VARIABLE_U_26_55);
      }
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[1]));
        MR_hl_field(0, Var_56, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_format_item_abstract_typeclass_5_p_0_3));
        MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_56, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_37));
        MR_hl_field(0, Var_56, 4) = ((MR_Box) (VarSet_14));
        MR_hl_field(0, Var_56, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, (MR_Integer) 0)), (MR_Integer) 26))));
      func_5(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (Var_56)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Constraints_12)), S_7, STATE_VARIABLE_U_26_55, &STATE_VARIABLE_U_29_58);
    }
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, (MR_Integer) 0)), (MR_Integer) 6))));
    func_6(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) ")")), S_7, STATE_VARIABLE_U_29_58, &STATE_VARIABLE_U_35_35);
  }
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, (MR_Integer) 0)), (MR_Integer) 6))));
  func_7(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) ".\n")), S_7, STATE_VARIABLE_U_35_35, STATE_VARIABLE_U_23);
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_format_item_foreign_enum_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_34,
  MR_Word _Info_6,
  MR_Box S_7,
  MR_Word ItemForeignEnum_8,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0(TypeClassInfo_for_pt_output_34, S_7, ItemForeignEnum_8, STATE_VARIABLE_U_0_18, STATE_VARIABLE_U_19);
}

void MR_CALL 
parse_tree__parse_tree_out__maybe_brace_for_name_prefix_suffix_4_p_0(
  MR_Integer Arity_5,
  MR_String Name_6,
  MR_String * Prefix_7,
  MR_String * Suffix_8)
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
      result_3 = MR_strcmp(Name_6, ((&parse_tree__parse_tree_out_vector_common_7[4 + mid_2]))->parse_tree__parse_tree_out__vector_common_type_7_0__vct_7_f_0);
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

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_type_repn_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TypeRepnSpec_8)
{
  MR_Word ParseTreeInt1_10 = (MR_Word) (TypeRepnSpec_8);

  parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_6, Stream_7, ParseTreeInt1_10);
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
        MR_Word ParseTreeInt0_10 = ((MR_Word) ((MR_hl_field(0, ForOptIntSpec_8, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(Info_6, Stream_7, ParseTreeInt0_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_12 = ((MR_Word) ((MR_hl_field(1, ForOptIntSpec_8, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_6, Stream_7, ParseTreeInt1_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_14 = ((MR_Word) ((MR_hl_field(2, ForOptIntSpec_8, (MR_Integer) 0))));

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
  MR_Word ParseTreeInt3_10 = ((MR_Word) ((MR_hl_field(0, IndirectInt3Spec_8, (MR_Integer) 0))));

  parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_6, Stream_7, ParseTreeInt3_10);
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_indirect_int2_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word IndirectInt2Spec_8)
{
  MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(0, IndirectInt2Spec_8, (MR_Integer) 0))));

  parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(Info_6, Stream_7, ParseTreeInt2_10);
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_int3_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word DirectInt3Spec_8)
{
  MR_Word ParseTreeInt3_10 = ((MR_Word) ((MR_hl_field(0, DirectInt3Spec_8, (MR_Integer) 0))));

  parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_6, Stream_7, ParseTreeInt3_10);
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_int1_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word DirectInt1Spec_8)
{
  MR_Word ParseTreeInt1_10 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_8, (MR_Integer) 0))));

  parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_6, Stream_7, ParseTreeInt1_10);
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ancestor_int_spec_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word AncestorIntSpec_8)
{
  MR_Word ParseTreeInt0_10 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_8, (MR_Integer) 0))));

  parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(Info_6, Stream_7, ParseTreeInt0_10);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_mutable_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_finalise_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_initialise_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__455__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__451__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__447__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__445__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_item_foreign_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_clause__mercury_output_item_clause_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_module_src__413__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_pred_decl_mu_mc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_HeadVar__2_2;

  conv7_HeadVar__2_2 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__write_import_use_map_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__write_include_module_map_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTreeModuleSrc_8)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 0))));
  MR_Word InclMap_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 2))));
  MR_Word ImportUseMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 3))));
  MR_Word IntFIMSpecMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 4))));
  MR_Word ImpFIMSpecMap_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 5))));
  MR_Word IntSelfFIMLangs_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 6))));
  MR_Word ImpSelfFIMLangs_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 7))));
  MR_Word TypeCtorCheckedMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 8))));
  MR_Word InstCtorCheckedMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 9))));
  MR_Word ModeCtorCheckedMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 10))));
  MR_Word IntTypeClasses_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 13))));
  MR_Word IntInstances_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 14))));
  MR_Word IntPredDecls_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 15))));
  MR_Word IntModeDecls_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 16))));
  MR_Word IntDeclPragmas_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 17))));
  MR_Word IntDeclMarkers_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 18))));
  MR_Word IntPromises_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 19))));
  MR_Word ImpTypeClasses_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 21))));
  MR_Word ImpInstances_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 22))));
  MR_Word ImpPredDecls_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 23))));
  MR_Word ImpModeDecls_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 24))));
  MR_Word ImpClauses_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 25))));
  MR_Word ImpForeignProcs_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 26))));
  MR_Word ImpForeignExportEnums_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 27))));
  MR_Word ImpDeclPragmas_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 28))));
  MR_Word ImpDeclMarkers_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 29))));
  MR_Word ImpImplPragmas_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 30))));
  MR_Word ImpImplMarkers_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 31))));
  MR_Word ImpPromises_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 32))));
  MR_Word ImpInitialises_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 33))));
  MR_Word ImpFinalises_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 34))));
  MR_Word ImpMutables_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 35))));
  MR_Word IntInclModules_46;
  MR_Word ImpInclModules_47;
  MR_Word IntImportMap_49;
  MR_Word IntUseMap_50;
  MR_Word ImpImportMap_51;
  MR_Word ImpUseMap_52;
  MR_Word IntImportMap0_53;
  MR_Word IntUseMap0_54;
  MR_Word ImpImportMap0_55;
  MR_Word ImpUseMap0_56;
  MR_Word IntTypeDefns_57;
  MR_Word ImpTypeDefns_58;
  MR_Word ImpForeignEnums_59;
  MR_Word IntInstDefns_60;
  MR_Word ImpInstDefns_61;
  MR_Word IntModeDefns_62;
  MR_Word ImpModeDefns_63;
  MR_Word IntSelfFIMLangStrs_64;
  MR_Word ImpSelfFIMLangStrs_65;
  MR_Word Var_74;
  MR_Word Var_78;
  MR_Word Var_82;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_String Var_104;
  MR_String Var_111;
  MR_Word Var_114;
  MR_Word Var_116;
  MR_Word Var_118;
  MR_Word Var_120;
  MR_Word Var_122;
  MR_Word Var_124;
  MR_Word Var_127;
  MR_Word Var_129;
  MR_Word Var_131;
  MR_Word Var_133;
  MR_Word Var_141;
  MR_Word Var_145;
  MR_Word Var_149;
  MR_Word Var_166;
  MR_Word Var_168;
  MR_Word Var_170;
  MR_Word Var_171;
  MR_Word Var_173;
  MR_Word Var_177;
  MR_Word Var_179;
  MR_Word Var_181;
  MR_Word Var_185;
  MR_Word Var_187;
  MR_Word Var_189;
  MR_Word _SectionImportUseMap_48;
  MR_Box conv0_STATE_VARIABLE_IO_75_75;
  MR_Box conv1_STATE_VARIABLE_IO_79_79;
  MR_Box conv2_STATE_VARIABLE_IO_83_83;
  MR_Box conv3_STATE_VARIABLE_IO_87_87;
  MR_Box conv4_STATE_VARIABLE_IO_91_91;
  MR_Box conv5_STATE_VARIABLE_IO_95_95;
  MR_Box conv8_STATE_VARIABLE_IO_115_115;
  MR_Box conv9_STATE_VARIABLE_IO_117_117;
  MR_Box conv10_STATE_VARIABLE_IO_119_119;
  MR_Box conv11_STATE_VARIABLE_IO_121_121;
  MR_Box conv12_STATE_VARIABLE_IO_123_123;
  MR_Box conv13_STATE_VARIABLE_IO_125_125;
  MR_Box conv14_STATE_VARIABLE_IO_128_128;
  MR_Box conv15_STATE_VARIABLE_IO_130_130;
  MR_Box conv16_STATE_VARIABLE_IO_132_132;
  MR_Box conv17_STATE_VARIABLE_IO_134_134;
  MR_Box conv18_STATE_VARIABLE_IO_138_138;
  MR_Box conv19_STATE_VARIABLE_IO_142_142;
  MR_Box conv20_STATE_VARIABLE_IO_146_146;
  MR_Box conv21_STATE_VARIABLE_IO_150_150;
  MR_Box conv22_STATE_VARIABLE_IO_152_152;
  MR_Box conv23_STATE_VARIABLE_IO_154_154;
  MR_Box conv24_STATE_VARIABLE_IO_156_156;
  MR_Box conv25_STATE_VARIABLE_IO_158_158;
  MR_Box conv26_STATE_VARIABLE_IO_160_160;
  MR_Box conv27_STATE_VARIABLE_IO_162_162;
  MR_Box conv28_STATE_VARIABLE_IO_165_165;
  MR_Box conv29_STATE_VARIABLE_IO_167_167;
  MR_Box conv30_STATE_VARIABLE_IO_169_169;
  MR_Box conv31_STATE_VARIABLE_IO_172_172;
  MR_Box conv32_STATE_VARIABLE_IO_174_174;
  MR_Box conv33_STATE_VARIABLE_IO_176_176;
  MR_Box conv34_STATE_VARIABLE_IO_178_178;
  MR_Box conv35_STATE_VARIABLE_IO_180_180;
  MR_Box conv36_STATE_VARIABLE_IO_182_182;
  MR_Box conv37_STATE_VARIABLE_IO_184_184;
  MR_Box conv38_STATE_VARIABLE_IO_186_186;
  MR_Box conv39_STATE_VARIABLE_IO_188_188;
  MR_Box conv40_STATE_VARIABLE_IO_190_190;

  parse_tree__item_util__include_map_to_int_imp_modules_3_p_0(InclMap_12, &IntInclModules_46, &ImpInclModules_47);
  parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_6_p_0(ImportUseMap_13, &_SectionImportUseMap_48, &IntImportMap_49, &IntUseMap_50, &ImpImportMap_51, &ImpUseMap_52);
  IntImportMap0_53 = (MR_Word) (IntImportMap_49);
  IntUseMap0_54 = (MR_Word) (IntUseMap_50);
  ImpImportMap0_55 = (MR_Word) (ImpImportMap_51);
  ImpUseMap0_56 = (MR_Word) (ImpUseMap_52);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_18, &IntTypeDefns_57, &ImpTypeDefns_58, &ImpForeignEnums_59);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_19, &IntInstDefns_60, &ImpInstDefns_61);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_20, &IntModeDefns_62, &ImpModeDefns_63);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% module src\n");
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% include_module_map\n");
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[25]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_1));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (Stream_7));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, InclMap_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_75_75);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% section_import_and_or_use_map\n");
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[26]));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_2));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (Stream_7));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, ImportUseMap_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_79_79);
  parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(Stream_7, (MR_Integer) 0);
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_3));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) ((MR_String) "include_module"));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, IntInclModules_46, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_83_83);
  {
    Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_85, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_4));
    MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_85, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_85, 4) = ((MR_Box) ((MR_String) "import_module"));
  }
  Var_86 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntImportMap0_53);
  mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, Var_86, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_87_87);
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_5));
    MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_89, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_89, 4) = ((MR_Box) ((MR_String) "use_module"));
  }
  Var_90 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseMap0_54);
  mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_89, Var_90, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_91_91);
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[2]));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_6));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_93, 3) = ((MR_Box) (Stream_7));
  }
  Var_94 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMSpecMap_14);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_93, Var_94, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_95_95);
  Var_97 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), IntSelfFIMLangs_16);
  IntSelfFIMLangStrs_64 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[12]), Var_97);
  Var_99 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ImpSelfFIMLangs_17);
  ImpSelfFIMLangStrs_65 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[13]), Var_99);
  Var_104 = mercury__string__join_list_2_f_0((MR_String) ", ", IntSelfFIMLangStrs_64);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% implicit interface FIM self-import languages: ");
  mercury__io__write_string_4_p_0(Stream_7, Var_104);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  Var_111 = mercury__string__join_list_2_f_0((MR_String) ", ", ImpSelfFIMLangStrs_65);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% implicit implementation FIM self-import languages: ");
  mercury__io__write_string_4_p_0(Stream_7, Var_111);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[6]));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_9));
    MR_hl_field(0, Var_114, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_114, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_114, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, IntTypeDefns_57, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_115_115);
  {
    Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_116, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[7]));
    MR_hl_field(0, Var_116, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_10));
    MR_hl_field(0, Var_116, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_116, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_116, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_116, IntInstDefns_60, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_117_117);
  {
    Var_118 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_118, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[8]));
    MR_hl_field(0, Var_118, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_11));
    MR_hl_field(0, Var_118, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_118, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_118, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_118, IntModeDefns_62, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_119_119);
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9]));
    MR_hl_field(0, Var_120, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_12));
    MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_120, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_120, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_120, IntTypeClasses_23, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_121_121);
  {
    Var_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_122, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[16]));
    MR_hl_field(0, Var_122, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_13));
    MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_122, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_122, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_122, IntInstances_24, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_123_123);
  {
    Var_124 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_124, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_13[2]));
    MR_hl_field(0, Var_124, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_14));
    MR_hl_field(0, Var_124, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_124, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_124, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_124, 5) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_124, IntPredDecls_25, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_125_125);
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_127, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[17]));
    MR_hl_field(0, Var_127, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_15));
    MR_hl_field(0, Var_127, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_127, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_127, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_127, IntModeDecls_26, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_128_128);
  {
    Var_129 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_129, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[11]));
    MR_hl_field(0, Var_129, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_16));
    MR_hl_field(0, Var_129, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_129, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_129, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_129, IntDeclPragmas_27, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_130_130);
  {
    Var_131 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_131, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[3]));
    MR_hl_field(0, Var_131, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_17));
    MR_hl_field(0, Var_131, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_131, 3) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_131, IntDeclMarkers_28, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_132_132);
  {
    Var_133 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_133, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[12]));
    MR_hl_field(0, Var_133, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_18));
    MR_hl_field(0, Var_133, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_133, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_133, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_133, IntPromises_29, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_134_134);
  parse_tree__parse_tree_out__mercury_output_section_marker_4_p_0(Stream_7, (MR_Integer) 1);
  mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, ImpInclModules_47, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_138_138);
  Var_141 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpImportMap0_55);
  mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, Var_141, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_142_142);
  Var_145 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpUseMap0_56);
  mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_89, Var_145, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_146_146);
  Var_149 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpFIMSpecMap_15);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_93, Var_149, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_150_150);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, ImpTypeDefns_58, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_152_152);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_116, ImpInstDefns_61, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_154_154);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_118, ImpModeDefns_63, ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_IO_156_156);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_120, ImpTypeClasses_31, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_158_158);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_122, ImpInstances_32, ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_IO_160_160);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_124, ImpPredDecls_33, ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_162_162);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_127, ImpModeDecls_34, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_165_165);
  {
    Var_166 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_166, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[19]));
    MR_hl_field(0, Var_166, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_19));
    MR_hl_field(0, Var_166, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_166, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_166, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_166, ImpClauses_35, ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_IO_167_167);
  Var_170 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
  {
    Var_168 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_168, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[20]));
    MR_hl_field(0, Var_168, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_20));
    MR_hl_field(0, Var_168, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_168, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_168, 4) = ((MR_Box) (Var_170));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_168, ImpForeignProcs_36, ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_IO_169_169);
  {
    Var_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_171, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[13]));
    MR_hl_field(0, Var_171, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_21));
    MR_hl_field(0, Var_171, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_171, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_171, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_171, ImpForeignEnums_59, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_172_172);
  {
    Var_173 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_173, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[27]));
    MR_hl_field(0, Var_173, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_22));
    MR_hl_field(0, Var_173, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_173, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_173, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_173, ImpForeignExportEnums_37, ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_IO_174_174);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_129, ImpDeclPragmas_38, ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_IO_176_176);
  {
    Var_177 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_177, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[3]));
    MR_hl_field(0, Var_177, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_23));
    MR_hl_field(0, Var_177, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_177, 3) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_177, ImpDeclMarkers_39, ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_IO_178_178);
  {
    Var_179 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_179, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[28]));
    MR_hl_field(0, Var_179, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_24));
    MR_hl_field(0, Var_179, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_179, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_179, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_179, ImpImplPragmas_40, ((MR_Box) ((MR_Integer) 0)), &conv35_STATE_VARIABLE_IO_180_180);
  {
    Var_181 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_181, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[4]));
    MR_hl_field(0, Var_181, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_25));
    MR_hl_field(0, Var_181, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_181, 3) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_181, ImpImplMarkers_41, ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_IO_182_182);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_133, ImpPromises_42, ((MR_Box) ((MR_Integer) 0)), &conv37_STATE_VARIABLE_IO_184_184);
  {
    Var_185 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_185, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[29]));
    MR_hl_field(0, Var_185, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_26));
    MR_hl_field(0, Var_185, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_185, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_185, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_185, ImpInitialises_43, ((MR_Box) ((MR_Integer) 0)), &conv38_STATE_VARIABLE_IO_186_186);
  {
    Var_187 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_187, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[30]));
    MR_hl_field(0, Var_187, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_27));
    MR_hl_field(0, Var_187, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_187, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_187, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_187, ImpFinalises_44, ((MR_Box) ((MR_Integer) 0)), &conv39_STATE_VARIABLE_IO_188_188);
  {
    Var_189 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_189, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[31]));
    MR_hl_field(0, Var_189, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_module_src_5_p_0_28));
    MR_hl_field(0, Var_189, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_189, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_189, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_189, ImpMutables_45, ((MR_Box) ((MR_Integer) 0)), &conv40_STATE_VARIABLE_IO_190_190);
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "end_module", ModuleName_10);
  mercury__io__nl_3_p_0(Stream_7);
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

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_trans_opt_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Globals_11,
  MR_String OutputFileName_12,
  MR_Word ParseTreeTransOpt_13,
  MR_Word * Succeeded_14)
{
  MR_Word Res_26;

  mercury__io__open_output_4_p_0(OutputFileName_12, &Res_26);
  if (((MR_tag((MR_Word) Res_26)) == (MR_Integer) 1))
  {
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
    mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
    *Succeeded_14 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_27 = ((MR_Word) ((MR_hl_field(0, Res_26, (MR_Integer) 0))));
    MR_Word Verbose_28;
    MR_Word Info_29;

    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 72, &Verbose_28);
    Info_29 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
    switch (Verbose_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0(Info_29, FileStream_27, ParseTreeTransOpt_13);
          mercury__io__close_output_3_p_0(FileStream_27);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
          mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
          mercury__io__flush_output_3_p_0(ProgressStream_9);
          parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0(Info_29, FileStream_27, ParseTreeTransOpt_13);
          mercury__io__close_output_3_p_0(FileStream_27);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
        }
        break;
    }
    *Succeeded_14 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__write_pragma_struct_reuse_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__write_pragma_struct_sharing_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__write_pragma_termination2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__write_pragma_termination_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTree_8)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 0))));
  MR_Word Terms_12 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 2))));
  MR_Word Term2s_13 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 3))));
  MR_Word Exceptions_14 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 4))));
  MR_Word Trailings_15 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 5))));
  MR_Word MMTablings_16 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 6))));
  MR_Word Sharings_17 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 7))));
  MR_Word Reuses_18 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 8))));
  MR_Word Lang_19;
  MR_Word Var_27;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Box conv0_STATE_VARIABLE_IO_28_28;
  MR_Box conv1_STATE_VARIABLE_IO_31_31;
  MR_Box conv2_STATE_VARIABLE_IO_34_34;
  MR_Box conv3_STATE_VARIABLE_IO_37_37;
  MR_Box conv4_STATE_VARIABLE_IO_40_40;
  MR_Box conv5_STATE_VARIABLE_IO_43_43;
  MR_Box conv6_STATE_VARIABLE_IO_21;

  Lang_19 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% .trans_opt file\n");
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
  if (!((Terms_12 == (MR_Word) ((MR_Unsigned) 0U))))
    mercury__io__nl_3_p_0(Stream_7);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[21]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_27, 4) = ((MR_Box) (Lang_19));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, Terms_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_28_28);
  if (!((Term2s_13 == (MR_Word) ((MR_Unsigned) 0U))))
    mercury__io__nl_3_p_0(Stream_7);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[22]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_2));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (Lang_19));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, Term2s_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
  if (!((Exceptions_14 == (MR_Word) ((MR_Unsigned) 0U))))
    mercury__io__nl_3_p_0(Stream_7);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[6]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_3));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, Exceptions_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_34_34);
  if (!((Trailings_15 == (MR_Word) ((MR_Unsigned) 0U))))
    mercury__io__nl_3_p_0(Stream_7);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[7]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_4));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, Trailings_15, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_37_37);
  if (!((MMTablings_16 == (MR_Word) ((MR_Unsigned) 0U))))
    mercury__io__nl_3_p_0(Stream_7);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[8]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_5));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, MMTablings_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_40_40);
  if (!((Sharings_17 == (MR_Word) ((MR_Unsigned) 0U))))
    mercury__io__nl_3_p_0(Stream_7);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[23]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_6));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_42, 4) = ((MR_Box) (Lang_19));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Sharings_17, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_43_43);
  if (!((Reuses_18 == (MR_Word) ((MR_Unsigned) 0U))))
    mercury__io__nl_3_p_0(Stream_7);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[24]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0_7));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (Lang_19));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, Reuses_18, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_21);
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
  MR_Word Res_26;

  mercury__io__open_output_4_p_0(OutputFileName_12, &Res_26);
  if (((MR_tag((MR_Word) Res_26)) == (MR_Integer) 1))
  {
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
    mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
    *Succeeded_14 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_27 = ((MR_Word) ((MR_hl_field(0, Res_26, (MR_Integer) 0))));
    MR_Word Verbose_28;
    MR_Word Info_29;

    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 72, &Verbose_28);
    Info_29 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
    switch (Verbose_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0(Info_29, FileStream_27, ParseTreePlainOpt_13);
          mercury__io__close_output_3_p_0(FileStream_27);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
          mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
          mercury__io__flush_output_3_p_0(ProgressStream_9);
          parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0(Info_29, FileStream_27, ParseTreePlainOpt_13);
          mercury__io__close_output_3_p_0(FileStream_27);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
        }
        break;
    }
    *Succeeded_14 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__write_pragma_struct_reuse_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__write_pragma_struct_sharing_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__write_pragma_termination2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__write_pragma_termination_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_item_foreign_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_clause__mercury_output_item_clause_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__875__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__873__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_pred_decl_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_instance_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__839__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTree_8)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 0))));
  MR_Word UseMap_12 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 2))));
  MR_Word FIMSpecs_13 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 3))));
  MR_Word TypeDefns_14 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 4))));
  MR_Word ForeignEnums_15 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 5))));
  MR_Word InstDefns_16 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 6))));
  MR_Word ModeDefns_17 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 7))));
  MR_Word TypeClasses_18 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 8))));
  MR_Word Instances_19 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 9))));
  MR_Word PredDecls_20 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 10))));
  MR_Word ModeDecls_21 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 11))));
  MR_Word Clauses_22 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 12))));
  MR_Word ForeignProcs_23 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 13))));
  MR_Word Promises_24 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 14))));
  MR_Word DeclMarkers_25 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 15))));
  MR_Word ImplMarkers_26 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 16))));
  MR_Word TypeSpecs_27 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 17))));
  MR_Word UnusedArgs_28 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 18))));
  MR_Word Terms_29 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 19))));
  MR_Word Term2s_30 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 20))));
  MR_Word Exceptions_31 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 21))));
  MR_Word Trailings_32 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 22))));
  MR_Word MMTablings_33 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 23))));
  MR_Word Sharings_34 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 24))));
  MR_Word Reuses_35 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 25))));
  MR_Word Lang_36;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_81;
  MR_Word Var_84;
  MR_Word Var_87;
  MR_Word Var_90;
  MR_Word Var_93;
  MR_Word Var_96;
  MR_Word Var_99;
  MR_Word Var_102;
  MR_Box conv0_STATE_VARIABLE_IO_46_46;
  MR_Box conv1_STATE_VARIABLE_IO_49_49;
  MR_Box conv2_STATE_VARIABLE_IO_51_51;
  MR_Box conv3_STATE_VARIABLE_IO_53_53;
  MR_Box conv4_STATE_VARIABLE_IO_55_55;
  MR_Box conv5_STATE_VARIABLE_IO_57_57;
  MR_Box conv6_STATE_VARIABLE_IO_59_59;
  MR_Box conv7_STATE_VARIABLE_IO_61_61;
  MR_Box conv8_STATE_VARIABLE_IO_63_63;
  MR_Box conv9_STATE_VARIABLE_IO_65_65;
  MR_Box conv10_STATE_VARIABLE_IO_68_68;
  MR_Box conv11_STATE_VARIABLE_IO_71_71;
  MR_Box conv12_STATE_VARIABLE_IO_73_73;
  MR_Box conv13_STATE_VARIABLE_IO_75_75;
  MR_Box conv14_STATE_VARIABLE_IO_77_77;
  MR_Box conv15_STATE_VARIABLE_IO_79_79;
  MR_Box conv16_STATE_VARIABLE_IO_82_82;
  MR_Box conv17_STATE_VARIABLE_IO_85_85;
  MR_Box conv18_STATE_VARIABLE_IO_88_88;
  MR_Box conv19_STATE_VARIABLE_IO_91_91;
  MR_Box conv20_STATE_VARIABLE_IO_94_94;
  MR_Box conv21_STATE_VARIABLE_IO_97_97;
  MR_Box conv22_STATE_VARIABLE_IO_100_100;
  MR_Box conv23_STATE_VARIABLE_IO_39;

  Lang_36 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% .opt file\n");
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) ((MR_String) "use_module"));
  }
  Var_45 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[5]), UseMap_12);
  mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, Var_45, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_46_46);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[2]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_2));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (Stream_7));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, FIMSpecs_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_49_49);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[6]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_3));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, TypeDefns_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_51_51);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[13]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_4));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_52, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, ForeignEnums_15, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_53_53);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[7]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_5));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, InstDefns_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_55_55);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[8]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_6));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_56, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, ModeDefns_17, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_57_57);
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9]));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_7));
    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_58, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_58, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, TypeClasses_18, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_59_59);
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[16]));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_8));
    MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_60, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_60, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, Instances_19, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_61_61);
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_13[1]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_9));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (Lang_36));
    MR_hl_field(0, Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_62, 5) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, PredDecls_20, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_63_63);
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[17]));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_10));
    MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_64, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_64, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, ModeDecls_21, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_65_65);
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[3]));
    MR_hl_field(0, Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_11));
    MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_66, 3) = ((MR_Box) (Stream_7));
  }
  Var_67 = (MR_Word) (DeclMarkers_25);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, Var_67, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_68_68);
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[4]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_12));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (Stream_7));
  }
  Var_70 = (MR_Word) (ImplMarkers_26);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, Var_70, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_71_71);
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[18]));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_13));
    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_72, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_72, 4) = ((MR_Box) (Lang_36));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, TypeSpecs_27, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_73_73);
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[19]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_14));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_74, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, Clauses_22, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_75_75);
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[20]));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_15));
    MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_76, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_76, 4) = ((MR_Box) (Lang_36));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, ForeignProcs_23, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_77_77);
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[12]));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_16));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_78, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, Promises_24, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_79_79);
  parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), Stream_7, UnusedArgs_28);
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[5]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_17));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, UnusedArgs_28, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_82_82);
  parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), Stream_7, Terms_29);
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[21]));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_18));
    MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_84, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_84, 4) = ((MR_Box) (Lang_36));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Terms_29, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_85_85);
  parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), Stream_7, Term2s_30);
  {
    Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_87, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[22]));
    MR_hl_field(0, Var_87, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_19));
    MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_87, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_87, 4) = ((MR_Box) (Lang_36));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_87, Term2s_30, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_88_88);
  parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), Stream_7, Exceptions_31);
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_90, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[6]));
    MR_hl_field(0, Var_90, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_20));
    MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_90, 3) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_90, Exceptions_31, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_91_91);
  parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), Stream_7, Trailings_32);
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[7]));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_21));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_93, 3) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_93, Trailings_32, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_94_94);
  parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), Stream_7, MMTablings_33);
  {
    Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_96, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[8]));
    MR_hl_field(0, Var_96, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_22));
    MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_96, 3) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, MMTablings_33, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_97_97);
  parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), Stream_7, Sharings_34);
  {
    Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_99, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[23]));
    MR_hl_field(0, Var_99, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_23));
    MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_99, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_99, 4) = ((MR_Box) (Lang_36));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_99, Sharings_34, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_100_100);
  parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), Stream_7, Reuses_35);
  {
    Var_102 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_102, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[24]));
    MR_hl_field(0, Var_102, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_5_p_0_24));
    MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_102, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_102, 4) = ((MR_Box) (Lang_36));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_102, Reuses_35, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_39);
}

void MR_CALL 
parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0(
  MR_Word TypeInfo_for_T_12,
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
  MR_Word Res_26;

  mercury__io__open_output_4_p_0(OutputFileName_12, &Res_26);
  if (((MR_tag((MR_Word) Res_26)) == (MR_Integer) 1))
  {
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
    mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
    *Succeeded_14 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_27 = ((MR_Word) ((MR_hl_field(0, Res_26, (MR_Integer) 0))));
    MR_Word Verbose_28;
    MR_Word Info_29;

    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 72, &Verbose_28);
    Info_29 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
    switch (Verbose_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_29, FileStream_27, ParseTreeInt3_13);
          mercury__io__close_output_3_p_0(FileStream_27);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
          mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
          mercury__io__flush_output_3_p_0(ProgressStream_9);
          parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(Info_29, FileStream_27, ParseTreeInt3_13);
          mercury__io__close_output_3_p_0(FileStream_27);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
        }
        break;
    }
    *Succeeded_14 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int3__818__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int3__816__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int3__800__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTreeInt3_8)
{
  MR_bool succeeded;
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_8, (MR_Integer) 0))));
  MR_Word IntInclMap_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_8, (MR_Integer) 2))));
  MR_Word IntImportMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_8, (MR_Integer) 3))));
  MR_Word TypeCtorCheckedMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_8, (MR_Integer) 4))));
  MR_Word InstCtorCheckedMap_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_8, (MR_Integer) 5))));
  MR_Word ModeCtorCheckedMap_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_8, (MR_Integer) 6))));
  MR_Word IntTypeClasses_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_8, (MR_Integer) 7))));
  MR_Word IntInstances_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_8, (MR_Integer) 8))));
  MR_Word IntTypeRepnMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_8, (MR_Integer) 9))));
  MR_Word InclMap_20 = (MR_Word) (IntInclMap_12);
  MR_Word IntInclModules_21;
  MR_Word ImpInclModules_22;
  MR_Word IntTypeDefns_23;
  MR_Word IntInstDefns_26;
  MR_Word IntModeDefns_28;
  MR_Word Var_32;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_Word _ImpTypeDefns_24;
  MR_Word _ImpForeignEnums_25;
  MR_Word _ImpInstDefns_27;
  MR_Word _ImpModeDefns_29;
  MR_Box conv0_STATE_VARIABLE_IO_40_40;
  MR_Box conv1_STATE_VARIABLE_IO_44_44;
  MR_Box conv2_STATE_VARIABLE_IO_47_47;
  MR_Box conv3_STATE_VARIABLE_IO_49_49;
  MR_Box conv4_STATE_VARIABLE_IO_51_51;
  MR_Box conv5_STATE_VARIABLE_IO_54_54;
  MR_Box conv6_STATE_VARIABLE_IO_57_57;
  MR_Box conv7_STATE_VARIABLE_IO_31;

  parse_tree__item_util__include_map_to_int_imp_modules_3_p_0(InclMap_20, &IntInclModules_21, &ImpInclModules_22);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (ImpInclModules_22));
  }
  mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140parse_tree.parse_tree_out.mercury_output_parse_tree_int3\'/5", (MR_String) "ImpInclModules not empty");
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_14, &IntTypeDefns_23, &_ImpTypeDefns_24, &_ImpForeignEnums_25);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_15, &IntInstDefns_26, &_ImpInstDefns_27);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_16, &IntModeDefns_28, &_ImpModeDefns_29);
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- interface.\n");
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_2));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) ((MR_String) "include_module"));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, IntInclModules_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_40_40);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_3));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_42, 4) = ((MR_Box) ((MR_String) "import_module"));
  }
  Var_43 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0), IntImportMap_13);
  mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Var_43, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_44_44);
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[6]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_4));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, IntTypeDefns_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_47_47);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[7]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_5));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_48, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, IntInstDefns_26, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_49_49);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[8]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_6));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, IntModeDefns_28, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_51_51);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[15]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_7));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_52, 4) = ((MR_Box) (Stream_7));
  }
  Var_53 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), IntTypeClasses_17);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, Var_53, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_54_54);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[10]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_8));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) (Stream_7));
  }
  Var_56 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances_18);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, Var_56, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_57_57);
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[14]));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int3_5_p_0_9));
    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_58, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_58, 4) = ((MR_Box) (Stream_7));
  }
  mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_58, IntTypeRepnMap_19, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_31);
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
  MR_Word Res_26;

  mercury__io__open_output_4_p_0(OutputFileName_12, &Res_26);
  if (((MR_tag((MR_Word) Res_26)) == (MR_Integer) 1))
  {
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
    mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
    *Succeeded_14 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_27 = ((MR_Word) ((MR_hl_field(0, Res_26, (MR_Integer) 0))));
    MR_Word Verbose_28;
    MR_Word Info_29;

    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 72, &Verbose_28);
    Info_29 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
    switch (Verbose_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(Info_29, FileStream_27, ParseTreeInt2_13);
          mercury__io__close_output_3_p_0(FileStream_27);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
          mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
          mercury__io__flush_output_3_p_0(ProgressStream_9);
          parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(Info_29, FileStream_27, ParseTreeInt2_13);
          mercury__io__close_output_3_p_0(FileStream_27);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
        }
        break;
    }
    *Succeeded_14 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int2__771__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  parse_tree__item_util__get_uses_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTreeInt2_8)
{
  MR_bool succeeded;
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 0))));
  MR_Word MaybeVersionNumbers_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 2))));
  MR_Word IntInclMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 3))));
  MR_Word UseMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 4))));
  MR_Word IntFIMSpecs_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 5))));
  MR_Word ImpFIMSpecs_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 6))));
  MR_Word TypeCtorCheckedMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 7))));
  MR_Word InstCtorCheckedMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 8))));
  MR_Word ModeCtorCheckedMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 9))));
  MR_Word IntTypeClasses_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 10))));
  MR_Word IntInstances_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 11))));
  MR_Word IntTypeRepnMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 12))));
  MR_Word InclMap_23 = (MR_Word) (IntInclMap_13);
  MR_Word IntIncls_24;
  MR_Word IntUses_26;
  MR_Word ImpUses_27;
  MR_Word IntTypeDefns_28;
  MR_Word ImpTypeDefns_29;
  MR_Word IntInstDefns_31;
  MR_Word IntModeDefns_33;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Word _ImpIncls_25;
  MR_Box conv3_IntUses_26;
  MR_Box conv2_ImpUses_27;
  MR_Word _ImpForeignEnums_30;
  MR_Word _ImpInstDefns_32;
  MR_Word _ImpModeDefns_34;
  MR_Box conv4_STATE_VARIABLE_IO_46_46;
  MR_Box conv5_STATE_VARIABLE_IO_49_49;
  MR_Box conv6_STATE_VARIABLE_IO_52_52;
  MR_Box conv7_STATE_VARIABLE_IO_54_54;
  MR_Box conv8_STATE_VARIABLE_IO_56_56;
  MR_Box conv9_STATE_VARIABLE_IO_58_58;
  MR_Box conv10_STATE_VARIABLE_IO_61_61;
  MR_Box conv11_STATE_VARIABLE_IO_64_64;
  MR_Box conv12_STATE_VARIABLE_IO_66_66;

  parse_tree__item_util__include_map_to_int_imp_modules_3_p_0(InclMap_23, &IntIncls_24, &_ImpIncls_25);
  Var_38 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_39 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[11]), UseMap_14, ((MR_Box) (Var_38)), &conv3_IntUses_26, ((MR_Box) (Var_39)), &conv2_ImpUses_27);
  IntUses_26 = ((MR_Word) (conv3_IntUses_26));
  ImpUses_27 = ((MR_Word) (conv2_ImpUses_27));
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_17, &IntTypeDefns_28, &ImpTypeDefns_29, &_ImpForeignEnums_30);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_18, &IntInstDefns_31, &_ImpInstDefns_32);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_19, &IntModeDefns_33, &_ImpModeDefns_34);
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
  parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(Stream_7, ModuleName_10, MaybeVersionNumbers_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- interface.\n");
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_2));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_String) "include_module"));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, IntIncls_24, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_46_46);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_3));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_48, 4) = ((MR_Box) ((MR_String) "use_module"));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, IntUses_26, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_49_49);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[2]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_4));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (Stream_7));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, IntFIMSpecs_15, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_52_52);
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[6]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_5));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_53, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, IntTypeDefns_28, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_54_54);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[7]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_6));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, IntInstDefns_31, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_56_56);
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[8]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_7));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, IntModeDefns_33, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_58_58);
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_8));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_59, 4) = ((MR_Box) (Stream_7));
  }
  Var_60 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_20);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, Var_60, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_61_61);
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[10]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_9));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_62, 4) = ((MR_Box) (Stream_7));
  }
  Var_63 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances_21);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Var_63, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_64_64);
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[14]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int2_5_p_0_10));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_65, 4) = ((MR_Box) (Stream_7));
  }
  mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_65, IntTypeRepnMap_22, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_66_66);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_16);
  if (succeeded)
  {
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_27);
    if (succeeded)
      succeeded = (ImpTypeDefns_29 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (!(succeeded))
  {
    MR_Box conv13_STATE_VARIABLE_IO_70_70;
    MR_Box conv14_STATE_VARIABLE_IO_73_73;
    MR_Box conv15_STATE_VARIABLE_IO_36;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- implementation.\n");
    mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, ImpUses_27, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_70_70);
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, ImpFIMSpecs_16, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_73_73);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, ImpTypeDefns_29, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_36);
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
  MR_Word Res_26;

  mercury__io__open_output_4_p_0(OutputFileName_12, &Res_26);
  if (((MR_tag((MR_Word) Res_26)) == (MR_Integer) 1))
  {
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
    mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
    *Succeeded_14 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_27 = ((MR_Word) ((MR_hl_field(0, Res_26, (MR_Integer) 0))));
    MR_Word Verbose_28;
    MR_Word Info_29;

    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 72, &Verbose_28);
    Info_29 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
    switch (Verbose_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_29, FileStream_27, ParseTreeInt1_13);
          mercury__io__close_output_3_p_0(FileStream_27);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
          mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
          mercury__io__flush_output_3_p_0(ProgressStream_9);
          parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(Info_29, FileStream_27, ParseTreeInt1_13);
          mercury__io__close_output_3_p_0(FileStream_27);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
        }
        break;
    }
    *Succeeded_14 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__735__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__733__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__708__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int1__701__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  parse_tree__item_util__get_uses_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTreeInt1_8)
{
  MR_bool succeeded;
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 0))));
  MR_Word MaybeVersionNumbers_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 2))));
  MR_Word InclMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 3))));
  MR_Word UseMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 4))));
  MR_Word IntFIMSpecs_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 5))));
  MR_Word ImpFIMSpecs_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 6))));
  MR_Word TypeCtorCheckedMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 7))));
  MR_Word InstCtorCheckedMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 8))));
  MR_Word ModeCtorCheckedMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 9))));
  MR_Word IntTypeClasses_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 10))));
  MR_Word IntInstances_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 11))));
  MR_Word IntPredDecls_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 12))));
  MR_Word IntModeDecls_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 13))));
  MR_Word IntDeclPragmas_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 14))));
  MR_Word IntDeclMarkers_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 15))));
  MR_Word IntPromises_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 16))));
  MR_Word IntTypeRepnMap_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 17))));
  MR_Word ImpTypeClasses_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 18))));
  MR_Word IntIncls_29;
  MR_Word ImpIncls_30;
  MR_Word IntUses_31;
  MR_Word ImpUses_32;
  MR_Word IntTypeDefns_33;
  MR_Word ImpTypeDefns_34;
  MR_Word ImpForeignEnums_35;
  MR_Word IntInstDefns_36;
  MR_Word IntModeDefns_38;
  MR_Word IntPredOrModeDecls_40;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_51;
  MR_Word Var_54;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_82;
  MR_Box conv3_IntUses_31;
  MR_Box conv2_ImpUses_32;
  MR_Word _ImpInstDefns_37;
  MR_Word _ImpModeDefns_39;
  MR_Box conv4_STATE_VARIABLE_IO_52_52;
  MR_Box conv5_STATE_VARIABLE_IO_55_55;
  MR_Box conv6_STATE_VARIABLE_IO_58_58;
  MR_Box conv7_STATE_VARIABLE_IO_60_60;
  MR_Box conv8_STATE_VARIABLE_IO_62_62;
  MR_Box conv9_STATE_VARIABLE_IO_64_64;
  MR_Box conv10_STATE_VARIABLE_IO_67_67;
  MR_Box conv11_STATE_VARIABLE_IO_70_70;
  MR_Box conv12_STATE_VARIABLE_IO_75_75;
  MR_Box conv13_STATE_VARIABLE_IO_78_78;
  MR_Box conv14_STATE_VARIABLE_IO_81_81;
  MR_Box conv15_STATE_VARIABLE_IO_83_83;

  parse_tree__item_util__include_map_to_int_imp_modules_3_p_0(InclMap_13, &IntIncls_29, &ImpIncls_30);
  Var_44 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_45 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[10]), UseMap_14, ((MR_Box) (Var_44)), &conv3_IntUses_31, ((MR_Box) (Var_45)), &conv2_ImpUses_32);
  IntUses_31 = ((MR_Word) (conv3_IntUses_31));
  ImpUses_32 = ((MR_Word) (conv2_ImpUses_32));
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_17, &IntTypeDefns_33, &ImpTypeDefns_34, &ImpForeignEnums_35);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_18, &IntInstDefns_36, &_ImpInstDefns_37);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_19, &IntModeDefns_38, &_ImpModeDefns_39);
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
  parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(Stream_7, ModuleName_10, MaybeVersionNumbers_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- interface.\n");
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_2));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) ((MR_String) "include_module"));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, IntIncls_29, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_52_52);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_3));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_String) "use_module"));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, IntUses_31, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_55_55);
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[2]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_4));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (Stream_7));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, IntFIMSpecs_15, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_58_58);
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[6]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_5));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_59, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, IntTypeDefns_33, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_60_60);
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[7]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_6));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, IntInstDefns_36, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_62_62);
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_63, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[8]));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_7));
    MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_63, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_63, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_63, IntModeDefns_38, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_64_64);
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_8));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_65, 4) = ((MR_Box) (Stream_7));
  }
  Var_66 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_20);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, Var_66, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_67_67);
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[10]));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_9));
    MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_68, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_68, 4) = ((MR_Box) (Stream_7));
  }
  Var_69 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances_21);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, Var_69, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_70_70);
  parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(IntPredDecls_22, IntModeDecls_23, &IntPredOrModeDecls_40);
  parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_6_p_0(Info_6, (MR_Integer) 0, Stream_7, IntPredOrModeDecls_40);
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[11]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_10));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_73, 4) = ((MR_Box) (Stream_7));
  }
  Var_74 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), IntDeclPragmas_24);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, Var_74, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_75_75);
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[3]));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_11));
    MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_76, 3) = ((MR_Box) (Stream_7));
  }
  Var_77 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), IntDeclMarkers_25);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, Var_77, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_78_78);
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[12]));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_12));
    MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_79, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_79, 4) = ((MR_Box) (Stream_7));
  }
  Var_80 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises_26);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, Var_80, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_81_81);
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[14]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_13));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) (Stream_7));
  }
  mercury__map__foldl_values_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_82, IntTypeRepnMap_27, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_83_83);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpIncls_30);
  if (succeeded)
  {
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_32);
    if (succeeded)
    {
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_16);
      if (succeeded)
      {
        succeeded = (ImpTypeDefns_34 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (ImpForeignEnums_35 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (ImpTypeClasses_28 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  if (!(succeeded))
  {
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Box conv16_STATE_VARIABLE_IO_87_87;
    MR_Box conv17_STATE_VARIABLE_IO_90_90;
    MR_Box conv18_STATE_VARIABLE_IO_93_93;
    MR_Box conv19_STATE_VARIABLE_IO_95_95;
    MR_Box conv20_STATE_VARIABLE_IO_97_97;
    MR_Box conv21_STATE_VARIABLE_IO_42;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- implementation.\n");
    mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, ImpIncls_30, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_87_87);
    mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, ImpUses_32, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_90_90);
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, ImpFIMSpecs_16, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_93_93);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, ImpTypeDefns_34, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_95_95);
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_96, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[13]));
      MR_hl_field(0, Var_96, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_14));
      MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_96, 3) = ((MR_Box) (Info_6));
      MR_hl_field(0, Var_96, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, ImpForeignEnums_35, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_97_97);
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_98, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[15]));
      MR_hl_field(0, Var_98, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int1_5_p_0_15));
      MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_98, 3) = ((MR_Box) (Info_6));
      MR_hl_field(0, Var_98, 4) = ((MR_Box) (Stream_7));
    }
    Var_99 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), ImpTypeClasses_28);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, Var_99, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_42);
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
  MR_Word Res_26;

  mercury__io__open_output_4_p_0(OutputFileName_12, &Res_26);
  if (((MR_tag((MR_Word) Res_26)) == (MR_Integer) 1))
  {
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
    mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
    *Succeeded_14 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_27 = ((MR_Word) ((MR_hl_field(0, Res_26, (MR_Integer) 0))));
    MR_Word Verbose_28;
    MR_Word Info_29;

    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 72, &Verbose_28);
    Info_29 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
    switch (Verbose_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(Info_29, FileStream_27, ParseTreeInt0_13);
          mercury__io__close_output_3_p_0(FileStream_27);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
          mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
          mercury__io__flush_output_3_p_0(ProgressStream_9);
          parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(Info_29, FileStream_27, ParseTreeInt0_13);
          mercury__io__close_output_3_p_0(FileStream_27);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
        }
        break;
    }
    *Succeeded_14 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__662__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__658__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__652__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_promise_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__612__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_int0__605__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__4_4;
  MR_Word conv2_HeadVar__6_6;
  MR_Word conv1_HeadVar__8_8;
  MR_Word conv0_HeadVar__10_10;

  parse_tree__item_util__get_imports_uses_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_9)), &conv0_HeadVar__10_10);
  *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv2_HeadVar__6_6));
  *wrapper_arg_8 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_10 = ((MR_Box) (conv0_HeadVar__10_10));
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ParseTreeInt0_8)
{
  MR_bool succeeded;
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 0))));
  MR_Word MaybeVersionNumbers_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 2))));
  MR_Word InclMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 3))));
  MR_Word ImportUseMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 4))));
  MR_Word IntFIMSpecs_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 5))));
  MR_Word ImpFIMSpecs_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 6))));
  MR_Word TypeCtorCheckedMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 7))));
  MR_Word InstCtorCheckedMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 8))));
  MR_Word ModeCtorCheckedMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 9))));
  MR_Word IntTypeClasses_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 10))));
  MR_Word IntInstances_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 11))));
  MR_Word IntPredDecls_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 12))));
  MR_Word IntModeDecls_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 13))));
  MR_Word IntDeclPragmas_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 14))));
  MR_Word IntDeclMarkers_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 15))));
  MR_Word IntPromises_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 16))));
  MR_Word ImpTypeClasses_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 17))));
  MR_Word ImpInstances_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 18))));
  MR_Word ImpPredDecls_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 19))));
  MR_Word ImpModeDecls_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 20))));
  MR_Word ImpDeclPragmas_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 21))));
  MR_Word ImpDeclMarkers_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 22))));
  MR_Word ImpPromises_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 23))));
  MR_Word IntIncls_34;
  MR_Word ImpIncls_35;
  MR_Word IntImports_36;
  MR_Word ImpImports_37;
  MR_Word IntUses_38;
  MR_Word ImpUses_39;
  MR_Word IntTypeDefns_40;
  MR_Word ImpTypeDefns_41;
  MR_Word ImpForeignEnums_42;
  MR_Word IntInstDefns_43;
  MR_Word ImpInstDefns_44;
  MR_Word IntModeDefns_45;
  MR_Word ImpModeDefns_46;
  MR_Word IntPredOrModeDecls_47;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_61;
  MR_Word Var_64;
  MR_Word Var_67;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Box conv7_IntImports_36;
  MR_Box conv6_ImpImports_37;
  MR_Box conv5_IntUses_38;
  MR_Box conv4_ImpUses_39;
  MR_Box conv8_STATE_VARIABLE_IO_62_62;
  MR_Box conv9_STATE_VARIABLE_IO_65_65;
  MR_Box conv10_STATE_VARIABLE_IO_68_68;
  MR_Box conv11_STATE_VARIABLE_IO_71_71;
  MR_Box conv12_STATE_VARIABLE_IO_73_73;
  MR_Box conv13_STATE_VARIABLE_IO_75_75;
  MR_Box conv14_STATE_VARIABLE_IO_77_77;
  MR_Box conv15_STATE_VARIABLE_IO_80_80;
  MR_Box conv16_STATE_VARIABLE_IO_83_83;
  MR_Box conv17_STATE_VARIABLE_IO_88_88;
  MR_Box conv18_STATE_VARIABLE_IO_91_91;
  MR_Box conv19_STATE_VARIABLE_IO_94_94;

  parse_tree__item_util__include_map_to_int_imp_modules_3_p_0(InclMap_13, &IntIncls_34, &ImpIncls_35);
  Var_52 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_53 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_54 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_55 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__map__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[9]), ImportUseMap_14, ((MR_Box) (Var_52)), &conv7_IntImports_36, ((MR_Box) (Var_53)), &conv6_ImpImports_37, ((MR_Box) (Var_54)), &conv5_IntUses_38, ((MR_Box) (Var_55)), &conv4_ImpUses_39);
  IntImports_36 = ((MR_Word) (conv7_IntImports_36));
  ImpImports_37 = ((MR_Word) (conv6_ImpImports_37));
  IntUses_38 = ((MR_Word) (conv5_IntUses_38));
  ImpUses_39 = ((MR_Word) (conv4_ImpUses_39));
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_17, &IntTypeDefns_40, &ImpTypeDefns_41, &ImpForeignEnums_42);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_18, &IntInstDefns_43, &ImpInstDefns_44);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_19, &IntModeDefns_45, &ImpModeDefns_46);
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
  parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(Stream_7, ModuleName_10, MaybeVersionNumbers_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- interface.\n");
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_2));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_String) "include_module"));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, IntIncls_34, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_62_62);
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_3));
    MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_64, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_64, 4) = ((MR_Box) ((MR_String) "import_module"));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, IntImports_36, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_65_65);
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5]));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_4));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_67, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_67, 4) = ((MR_Box) ((MR_String) "use_module"));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, IntUses_38, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_68_68);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[2]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_5));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (Stream_7));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, IntFIMSpecs_15, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_71_71);
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[6]));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_6));
    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_72, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_72, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, IntTypeDefns_40, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_73_73);
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[7]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_7));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_74, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, IntInstDefns_43, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_75_75);
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[8]));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_8));
    MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_76, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_76, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, IntModeDefns_45, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_77_77);
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9]));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_9));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_78, 4) = ((MR_Box) (Stream_7));
  }
  Var_79 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_20);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, Var_79, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_80_80);
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[10]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_10));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_81, 4) = ((MR_Box) (Stream_7));
  }
  Var_82 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances_21);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, Var_82, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_83_83);
  parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(IntPredDecls_22, IntModeDecls_23, &IntPredOrModeDecls_47);
  parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_6_p_0(Info_6, (MR_Integer) 0, Stream_7, IntPredOrModeDecls_47);
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[11]));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_11));
    MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_86, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_86, 4) = ((MR_Box) (Stream_7));
  }
  Var_87 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), IntDeclPragmas_24);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, Var_87, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_88_88);
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[3]));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_12));
    MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_89, 3) = ((MR_Box) (Stream_7));
  }
  Var_90 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), IntDeclMarkers_25);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_89, Var_90, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_91_91);
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[12]));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_13));
    MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_92, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_92, 4) = ((MR_Box) (Stream_7));
  }
  Var_93 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises_26);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_92, Var_93, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_94_94);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpIncls_35);
  if (succeeded)
  {
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_37);
    if (succeeded)
    {
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_39);
      if (succeeded)
      {
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_16);
        if (succeeded)
        {
          succeeded = (ImpTypeDefns_41 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (ImpInstDefns_44 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (ImpModeDefns_46 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (ImpTypeClasses_27 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (ImpInstances_28 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (ImpPredDecls_29 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (ImpModeDecls_30 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (ImpForeignEnums_42 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = (ImpDeclPragmas_31 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = (ImpDeclMarkers_32 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                              succeeded = (ImpPromises_33 == (MR_Word) ((MR_Unsigned) 0U));
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
  }
  if (!(succeeded))
  {
    MR_Word ImpPredOrModeDecls_48;
    MR_Word Var_115;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_122;
    MR_Word Var_125;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_131;
    MR_Box conv20_STATE_VARIABLE_IO_98_98;
    MR_Box conv21_STATE_VARIABLE_IO_101_101;
    MR_Box conv22_STATE_VARIABLE_IO_104_104;
    MR_Box conv23_STATE_VARIABLE_IO_107_107;
    MR_Box conv24_STATE_VARIABLE_IO_109_109;
    MR_Box conv25_STATE_VARIABLE_IO_111_111;
    MR_Box conv26_STATE_VARIABLE_IO_113_113;
    MR_Box conv27_STATE_VARIABLE_IO_116_116;
    MR_Box conv28_STATE_VARIABLE_IO_119_119;
    MR_Box conv29_STATE_VARIABLE_IO_123_123;
    MR_Box conv30_STATE_VARIABLE_IO_126_126;
    MR_Box conv31_STATE_VARIABLE_IO_129_129;
    MR_Box conv32_STATE_VARIABLE_IO_50;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- implementation.\n");
    mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, ImpIncls_35, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_98_98);
    mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, ImpImports_37, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_101_101);
    mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, ImpUses_39, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_104_104);
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, ImpFIMSpecs_16, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_107_107);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, ImpTypeDefns_41, ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_IO_109_109);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, ImpInstDefns_44, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_111_111);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, ImpModeDefns_46, ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_IO_113_113);
    Var_115 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses_27);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, Var_115, ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_116_116);
    {
      Var_117 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_117, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[10]));
      MR_hl_field(0, Var_117, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_14));
      MR_hl_field(0, Var_117, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_117, 3) = ((MR_Box) (Info_6));
      MR_hl_field(0, Var_117, 4) = ((MR_Box) (Stream_7));
    }
    Var_118 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), ImpInstances_28);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_117, Var_118, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_119_119);
    parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(ImpPredDecls_29, ImpModeDecls_30, &ImpPredOrModeDecls_48);
    parse_tree__parse_tree_out__mercury_output_pred_or_mode_decls_6_p_0(Info_6, (MR_Integer) 0, Stream_7, ImpPredOrModeDecls_48);
    {
      Var_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_122, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[13]));
      MR_hl_field(0, Var_122, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_15));
      MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_122, 3) = ((MR_Box) (Info_6));
      MR_hl_field(0, Var_122, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_122, ImpForeignEnums_42, ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_IO_123_123);
    Var_125 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), ImpDeclPragmas_31);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, Var_125, ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_IO_126_126);
    {
      Var_127 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_127, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[3]));
      MR_hl_field(0, Var_127, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_int0_5_p_0_16));
      MR_hl_field(0, Var_127, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_127, 3) = ((MR_Box) (Stream_7));
    }
    Var_128 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), ImpDeclMarkers_32);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_127, Var_128, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_129_129);
    Var_131 = mercury__list__sort_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromises_33);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_92, Var_131, ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_IO_50);
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
      MR_Word Item_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      if (((MR_tag((MR_Word) Item_16)) == (MR_Integer) 1))
      {
        MR_Word ItemModeDecl_23 = ((MR_Word) ((MR_hl_field(1, Item_16, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(Info_1, Stream_3, ItemModeDecl_23);
      }
      else
      {
        MR_Word ItemPredDecl_22 = ((MR_Word) ((MR_hl_field(0, Item_16, (MR_Integer) 0))));

        parse_tree__parse_tree_out__mercury_output_item_pred_decl_mu_mc_6_p_0(Info_1, VarNamePrint_2, Stream_3, ItemPredDecl_22);
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
parse_tree__parse_tree_out__mercury_output_maybe_module_version_numbers_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word MaybeVersionNumbers_8)
{
  if (!((MaybeVersionNumbers_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word VersionNumbers_10 = ((MR_Word) ((MR_hl_field(1, MaybeVersionNumbers_8, (MR_Integer) 0))));
    MR_Integer Var_16;
    MR_String Var_19;
    MR_String Var_22;
    MR_String Var_27;

    Var_16 = recompilation__version__module_item_version_numbers_version_number_0_f_0();
    Var_19 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_7);
    Var_22 = recompilation__version__module_item_version_numbers_to_string_1_f_0(VersionNumbers_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- version_numbers(");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_5[0]), Var_16, &Var_27);
    mercury__io__write_string_4_p_0(Stream_6, Var_27);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_6, Var_19);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    mercury__io__write_string_4_p_0(Stream_6, Var_22);
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
  MR_Word Res_26;

  mercury__io__open_output_4_p_0(OutputFileName_12, &Res_26);
  if (((MR_tag((MR_Word) Res_26)) == (MR_Integer) 1))
  {
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error: couldn\'t open file \140");
    mercury__io__write_string_4_p_0(ErrorStream_10, OutputFileName_12);
    mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\' for output.\n");
    *Succeeded_14 = (MR_Integer) 0;
  }
  else
  {
    MR_Word FileStream_27 = ((MR_Word) ((MR_hl_field(0, Res_26, (MR_Integer) 0))));
    MR_Word Verbose_28;
    MR_Word Info_29;

    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 72, &Verbose_28);
    Info_29 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_11, (MR_Integer) 0, (MR_Integer) 0);
    switch (Verbose_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out__mercury_output_parse_tree_src_5_p_0(Info_29, FileStream_27, ParseTreeSrc_13);
          mercury__io__close_output_3_p_0(FileStream_27);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Writing output to ");
          mercury__io__write_string_4_p_0(ProgressStream_9, OutputFileName_12);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...");
          mercury__io__flush_output_3_p_0(ProgressStream_9);
          parse_tree__parse_tree_out__mercury_output_parse_tree_src_5_p_0(Info_29, FileStream_27, ParseTreeSrc_13);
          mercury__io__close_output_3_p_0(FileStream_27);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) " done\n");
        }
        break;
    }
    *Succeeded_14 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_foreign_import_module_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_avail_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_include_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
      MR_Word Component_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Components_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MaybeCurSectionKind_26;
      MR_Word next_value_of_MaybePrevSectionKind_3;
      MR_Word next_value_of_HeadVar__4_4;

      if (((MR_tag((MR_Word) Component_16)) == (MR_Integer) 1))
      {
        MR_Word SubParseTree_29 = ((MR_Word) ((MR_hl_field(1, Component_16, (MR_Integer) 3))));
        MR_Word Lang_30;
        MR_Word SectionKind_54 = ((MR_Unsigned) ((MR_hl_field(1, Component_16, (MR_Integer) 1))) & (MR_Integer) 1);

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
                PrevSectionKind_31 = ((MR_Word) ((MR_hl_field(1, MaybePrevSectionKind_3, (MR_Integer) 0))));
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
        MR_Word SectionKind_20 = ((MR_Unsigned) ((MR_hl_field(0, Component_16, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word InclsCord_22 = ((MR_Word) ((MR_hl_field(0, Component_16, (MR_Integer) 3))));
        MR_Word AvailsCord_23 = ((MR_Word) ((MR_hl_field(0, Component_16, (MR_Integer) 4))));
        MR_Word FIMsCord_24 = ((MR_Word) ((MR_hl_field(0, Component_16, (MR_Integer) 5))));
        MR_Word ItemsCord_25 = ((MR_Word) ((MR_hl_field(0, Component_16, (MR_Integer) 6))));
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_Box conv0_STATE_VARIABLE_IO_37_37;
        MR_Box conv1_STATE_VARIABLE_IO_40_40;
        MR_Box conv2_STATE_VARIABLE_IO_43_43;

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
          Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[3]));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_1));
          MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_35, 3) = ((MR_Box) (Info_1));
          MR_hl_field(0, Var_35, 4) = ((MR_Box) (Stream_2));
        }
        Var_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), InclsCord_22);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, Var_36, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_37_37);
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[4]));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_2));
          MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_38, 3) = ((MR_Box) (Info_1));
          MR_hl_field(0, Var_38, 4) = ((MR_Box) (Stream_2));
        }
        Var_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_23);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, Var_39, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_40_40);
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_41, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[1]));
          MR_hl_field(0, Var_41, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_6_p_0_3));
          MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_41, 3) = ((MR_Box) (Stream_2));
        }
        Var_42 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_24);
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, Var_42, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_43_43);
        Var_44 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_25);
        parse_tree__parse_tree_out__mercury_output_items_5_p_0(Info_1, Stream_2, Var_44);
        {
          MaybeCurSectionKind_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeCurSectionKind_26, 0) = ((MR_Box) (SectionKind_20));
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
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 0))));
  MR_Word ModuleComponentsCord_12 = ((MR_Word) ((MR_hl_field(0, ParseTree_8, (MR_Integer) 2))));
  MR_Word ModuleComponents_13;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "module", ModuleName_10);
  ModuleComponents_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), ModuleComponentsCord_12);
  parse_tree__parse_tree_out__mercury_output_module_components_6_p_0(Info_6, Stream_7, (MR_Word) ((MR_Unsigned) 0U), ModuleComponents_13);
  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(Stream_7, (MR_String) "end_module", ModuleName_10);
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
      MR_Word Item_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
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

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_format_sym_name_string_pair_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
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
        MR_Word ItemClause_15 = (MR_Word) ((MR_Word) (Item_8));

        parse_tree__parse_tree_out_clause__mercury_output_item_clause_5_p_0(Info_6, Stream_7, ItemClause_15);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemPredDecl_13 = (MR_Word) (MR_body((MR_Word) (Item_8), (MR_Integer) 1));

        parse_tree__parse_tree_out__mercury_output_item_pred_decl_mu_mc_6_p_0(Info_6, (MR_Integer) 0, Stream_7, ItemPredDecl_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ItemModeDecl_14 = (MR_Word) (MR_body((MR_Word) (Item_8), (MR_Integer) 2));

        parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(Info_6, Stream_7, ItemModeDecl_14);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Item_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemForeignProc_16 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));
            MR_Word Var_38;

            Var_38 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
            parse_tree__parse_tree_out_pragma__mercury_output_item_foreign_proc_5_p_0(Stream_7, Var_38, ItemForeignProc_16);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemForeignEnum_17 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_30;

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), ItemForeignEnum_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_30);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemForeignExportEnum_18 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));
            MR_Word Lang_60 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignExportEnum_18, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word TypeCtor_61 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_18, (MR_Integer) 1))));
            MR_Word Attributes_62 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_18, (MR_Integer) 2))));
            MR_Word Overrides_63 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_18, (MR_Integer) 3))));
            MR_Word TypeName_66;
            MR_Integer TypeArity_67;
            MR_Word MaybePrefix_85;
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            MR_Box conv3_STATE_VARIABLE_U_21_69;
            MR_Box conv4_STATE_VARIABLE_U_22_70;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv6_STATE_VARIABLE_U_24_72;
            MR_Box conv7_STATE_VARIABLE_U_26_74;
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv9_STATE_VARIABLE_U_28_76;
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv11_STATE_VARIABLE_U_29_77;
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv13_STATE_VARIABLE_U_31_79;
            void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv15_STATE_VARIABLE_U_13_88;
            void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv23_STATE_VARIABLE_U_32_80;
            void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv25_STATE_VARIABLE_U_34_82;
            void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv27_STATE_VARIABLE_U_11_97;
            void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv29_STATE_VARIABLE_U_14_100;
            void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv31_STATE_VARIABLE_U_35_83;
            void MR_CALL (* func_32)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv33_STATE_VARIABLE_IO_30;

            func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ":- pragma foreign_export_enum(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_21_69);
            parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Lang_60, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_22_70);
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_24_72);
            TypeName_66 = ((MR_Word) ((MR_hl_field(0, TypeCtor_61, (MR_Integer) 0))));
            TypeArity_67 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_61, (MR_Integer) 1))));
            parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0, TypeName_66, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_26_74);
            func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_28_76);
            func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 10))));
            func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (TypeArity_67)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_29_77);
            func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_31_79);
            MaybePrefix_85 = ((MR_Word) ((MR_hl_field(0, Attributes_62, (MR_Integer) 0))));
            func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) "[")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_13_88);
            if (!((MaybePrefix_85 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_String Prefix_86 = ((MR_String) ((MR_hl_field(1, MaybePrefix_85, (MR_Integer) 0))));
              void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
              MR_Box conv17_STATE_VARIABLE_U_15_90;
              void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv19_STATE_VARIABLE_U_16_91;
              void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv21_STATE_VARIABLE_U_18_93;

              func_16(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) "prefix(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_15_90);
              func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 9))));
              func_18(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (Prefix_86)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_16_91);
              func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
              func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_18_93);
            }
            func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_32_80);
            func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_34_82);
            func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_26(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (MR_Word) ((MR_Char) 91)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_U_11_97);
            func_28 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 26))));
            func_28(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[1])), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[5])), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Overrides_63)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_U_14_100);
            func_30 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_30(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (MR_Word) ((MR_Char) 93)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_U_35_83);
            func_32 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_32(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_IO_30);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemDeclPragma_54 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));
            MR_Box conv0_STATE_VARIABLE_IO_30;

            parse_tree__parse_tree_out_pragma__mercury_format_item_decl_marker_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), ItemDeclPragma_54, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_30);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ItemImplPragma_55 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));
            MR_Box conv34_STATE_VARIABLE_IO_30;

            parse_tree__parse_tree_out_pragma__mercury_format_item_impl_marker_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), ((MR_Box) (Stream_7)), ItemImplPragma_55, ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_IO_30);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemPromise_22 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemPromise_22);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ItemTypeClass_23 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(Info_6, Stream_7, ItemTypeClass_23);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ItemInstance_24 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemInstance_24);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ItemInitialise_25 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemInitialise_25);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ItemFinalise_26 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_105_110_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(Stream_7, ItemFinalise_26);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ItemMutable_27 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_mutable_5_p_0(Info_6, Stream_7, ItemMutable_27);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ItemTypeDefn_10 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(Info_6, Stream_7, ItemTypeDefn_10);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word ItemInstDefn_11 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(Info_6, Stream_7, ItemInstDefn_11);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word ItemModeDefn_12 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(Info_6, Stream_7, ItemModeDefn_12);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word ItemDeclPragma_19 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(Info_6, Stream_7, ItemDeclPragma_19);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word ItemImplPragma_20 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_5_p_0(Info_6, Stream_7, ItemImplPragma_20);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word ItemGenPragma_21 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_item_generated_pragma_5_p_0(Info_6, Stream_7, ItemGenPragma_21);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word ItemTypeRepn_28 = ((MR_Word) ((MR_hl_field(3, Item_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0(Info_6, Stream_7, ItemTypeRepn_28);
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
  MR_Word PredSymName_10 = ((MR_Word) ((MR_hl_field(0, ItemFinalise_8, (MR_Integer) 0))));
  MR_Word UserArity_11 = ((MR_Word) ((MR_hl_field(0, ItemFinalise_8, (MR_Integer) 1))));
  MR_String PredSymNameStr_15;
  MR_Integer UserArityInt_16;
  MR_String Var_32;

  PredSymNameStr_15 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(PredSymName_10);
  UserArityInt_16 = (MR_Integer) (UserArity_11);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- finalise ");
  mercury__io__write_string_4_p_0(Stream_7, PredSymNameStr_15);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_5[0]), UserArityInt_16, &Var_32);
  mercury__io__write_string_4_p_0(Stream_7, Var_32);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_105_116_105_97_108_105_115_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemInitialise_8)
{
  MR_Word PredSymName_10 = ((MR_Word) ((MR_hl_field(0, ItemInitialise_8, (MR_Integer) 0))));
  MR_Word UserArity_11 = ((MR_Word) ((MR_hl_field(0, ItemInitialise_8, (MR_Integer) 1))));
  MR_String PredSymNameStr_15;
  MR_Integer UserArityInt_16;
  MR_String Var_32;

  PredSymNameStr_15 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(PredSymName_10);
  UserArityInt_16 = (MR_Integer) (UserArity_11);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- initialise ");
  mercury__io__write_string_4_p_0(Stream_7, PredSymNameStr_15);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_5[0]), UserArityInt_16, &Var_32);
  mercury__io__write_string_4_p_0(Stream_7, Var_32);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_41;

  conv0_HeadVar__3_41 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_promise__1942__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_41));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemPromise_8)
{
  MR_Word PromiseType_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemPromise_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(0, ItemPromise_8, (MR_Integer) 1))));
  MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, ItemPromise_8, (MR_Integer) 2))));
  MR_Word UnivVars_13 = ((MR_Word) ((MR_hl_field(0, ItemPromise_8, (MR_Integer) 3))));
  MR_Word UnivVarStrs_16;
  MR_String UnivVarsStr_17;
  MR_Word Var_21;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[3]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_5_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (VarSet_12));
  }
  UnivVarStrs_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[11]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, UnivVars_13);
  UnivVarsStr_17 = mercury__string__join_list_2_f_0((MR_String) ", ", UnivVarStrs_16);
  switch (PromiseType_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_String Var_34;

        Var_34 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_10);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- all [");
        mercury__io__write_string_4_p_0(Stream_7, UnivVarsStr_17);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]\n");
        mercury__io__write_string_4_p_0(Stream_7, Var_34);
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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word ItemInstance_8)
{
  MR_bool succeeded;
  MR_String HeaderStr_19;
  MR_Word ClassName_48 = ((MR_Word) ((MR_hl_field(0, ItemInstance_8, (MR_Integer) 0))));
  MR_Word Types_49 = ((MR_Word) ((MR_hl_field(0, ItemInstance_8, (MR_Integer) 1))));
  MR_Word Constraints_51 = ((MR_Word) ((MR_hl_field(0, ItemInstance_8, (MR_Integer) 3))));
  MR_Word _Body_52 = ((MR_Word) ((MR_hl_field(0, ItemInstance_8, (MR_Integer) 4))));
  MR_Word VarSet_53 = ((MR_Word) ((MR_hl_field(0, ItemInstance_8, (MR_Integer) 5))));
  MR_String ClassNameStr_57;
  MR_Word TypeStrs_58;
  MR_String TypesStr_59;
  MR_String ConstraintsStr_60;
  MR_Word Var_61;

  ClassNameStr_57 = parse_tree__parse_tree_out_sym_name__mercury_sym_name_to_string_1_f_0(ClassName_48);
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_11[0]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_5_p_0_1));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (VarSet_53));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  TypeStrs_58 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_61, Types_49);
  TypesStr_59 = mercury__string__join_list_2_f_0((MR_String) ", ", TypeStrs_58);
  ConstraintsStr_60 = parse_tree__parse_tree_out_type__mercury_prog_constraint_list_to_string_4_f_0(VarSet_53, (MR_Integer) 0, (MR_String) "<=", Constraints_51);
  succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(ClassNameStr_57);
  if (!(succeeded))
  {
    succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(ClassNameStr_57);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_String Var_69;
    MR_String Var_70;
    MR_String Var_72;
    MR_String Var_73;

    Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "))", ConstraintsStr_60);
    Var_70 = mercury__string__f_43_43_2_f_0(TypesStr_59, Var_69);
    Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_70);
    Var_73 = mercury__string__f_43_43_2_f_0(ClassNameStr_57, Var_72);
    HeaderStr_19 = mercury__string__f_43_43_2_f_0((MR_String) ":- instance (", Var_73);
  }
  else
  {
    MR_String Var_76;
    MR_String Var_77;
    MR_String Var_79;
    MR_String Var_80;

    Var_76 = mercury__string__f_43_43_2_f_0((MR_String) ")", ConstraintsStr_60);
    Var_77 = mercury__string__f_43_43_2_f_0(TypesStr_59, Var_76);
    Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_77);
    Var_80 = mercury__string__f_43_43_2_f_0(ClassNameStr_57, Var_79);
    HeaderStr_19 = mercury__string__f_43_43_2_f_0((MR_String) ":- instance ", Var_80);
  }
  if ((_Body_52 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_7, HeaderStr_19);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
  }
  else
  {
    MR_Word Methods_20 = ((MR_Word) ((MR_hl_field(1, _Body_52, (MR_Integer) 0))));

    if ((Methods_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_7, HeaderStr_19);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " where [].\n");
    }
    else
    {
      MR_Word HeadMethod_21 = ((MR_Word) ((MR_hl_field(1, Methods_20, (MR_Integer) 0))));
      MR_Word TailMethods_22 = ((MR_Word) ((MR_hl_field(1, Methods_20, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Stream_7, HeaderStr_19);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " where [\n");
      parse_tree__parse_tree_out__mercury_output_instance_methods_5_p_0(Stream_7, HeadMethod_21, TailMethods_22);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "].\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_methods_5_p_0(
  MR_Word Stream_6,
  MR_Word HeadMethod_7,
  MR_Word TailMethods_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0(HeadMethod_7, Stream_6);
    if ((TailMethods_8 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    else
    {
      MR_Word HeadTailMethod_10 = ((MR_Word) ((MR_hl_field(1, TailMethods_8, (MR_Integer) 0))));
      MR_Word TailTailMethods_11 = ((MR_Word) ((MR_hl_field(1, TailMethods_8, (MR_Integer) 1))));
      MR_Word next_value_of_HeadMethod_7;
      MR_Word next_value_of_TailMethods_8;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadMethod_7 = HeadTailMethod_10;
      next_value_of_TailMethods_8 = TailTailMethods_11;
      HeadMethod_7 = next_value_of_HeadMethod_7;
      TailMethods_8 = next_value_of_TailMethods_8;
      continue;
    }
    break;
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
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_clause__output_instance_method_clause_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0(
  MR_Word Method_5,
  MR_Word Stream_6)
{
  MR_Word MethodId_8 = ((MR_Word) ((MR_hl_field(0, Method_5, (MR_Integer) 0))));
  MR_Word Defn_9 = ((MR_Word) ((MR_hl_field(0, Method_5, (MR_Integer) 1))));
  MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(0, MethodId_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word MethodSymName_12 = ((MR_Word) ((MR_hl_field(0, MethodId_8, (MR_Integer) 1))));
  MR_Word UserArity_13 = ((MR_Word) ((MR_hl_field(0, MethodId_8, (MR_Integer) 2))));
  MR_Integer UserArityInt_14 = (MR_Integer) (UserArity_13);

  if (((MR_tag((MR_Word) Defn_9)) == (MR_Integer) 1))
  {
    MR_Word ItemsCord_19 = ((MR_Word) ((MR_hl_field(1, Defn_9, (MR_Integer) 0))));
    MR_Word Items_20;
    MR_Word Var_37;

    Items_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ItemsCord_19);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t(");
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[2]));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0_1));
      MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_37, 3) = ((MR_Box) (MethodSymName_12));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), Var_37, (MR_String) "),\n\t(", Items_20, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
  else
  {
    MR_Word PredName_15 = ((MR_Word) ((MR_hl_field(0, Defn_9, (MR_Integer) 0))));
    MR_String PFStr_16;
    MR_String MethodSymNameStr_17;
    MR_String PredNameStr_18;
    MR_String Var_55;

    PFStr_16 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_11);
    MethodSymNameStr_17 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_ngt_2_f_0((MR_Integer) 0, MethodSymName_12);
    PredNameStr_18 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(PredName_15);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t");
    mercury__io__write_string_4_p_0(Stream_6, PFStr_16);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_6, MethodSymNameStr_17);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "/");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_5[0]), UserArityInt_14, &Var_55);
    mercury__io__write_string_4_p_0(Stream_6, Var_55);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ") is ");
    mercury__io__write_string_4_p_0(Stream_6, PredNameStr_18);
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
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_format_unqual_sym_name_string_pair_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_34,
  MR_Box S_7,
  MR_Word ItemForeignEnum_8,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19)
{
  MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnum_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum_8, (MR_Integer) 1))));
  MR_Word OoMValues_12 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum_8, (MR_Integer) 2))));
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
  MR_Box STATE_VARIABLE_U_11_37;
  MR_Word Var_38;
  MR_Box STATE_VARIABLE_U_14_40;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, (MR_Integer) 0)), (MR_Integer) 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) ":- pragma foreign_enum(")), S_7, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_21_21);
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0(TypeClassInfo_for_pt_output_34, Lang_10, S_7, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_22_22);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) ", ")), S_7, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
  TypeName_15 = ((MR_Word) ((MR_hl_field(0, TypeCtor_11, (MR_Integer) 0))));
  TypeArity_16 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_11, (MR_Integer) 1))));
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_34, (MR_Integer) 0, TypeName_15, S_7, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) "/")), S_7, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, (MR_Integer) 0)), (MR_Integer) 10))));
  func_3(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) (TypeArity_16)), S_7, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_29_29);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, (MR_Integer) 0)), (MR_Integer) 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) ", ")), S_7, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_31_31);
  Values_17 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[1]), OoMValues_12);
  func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, (MR_Integer) 0)), (MR_Integer) 5))));
  func_5(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) (MR_Word) ((MR_Char) 91)), S_7, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_11_37);
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[1]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_34));
  }
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, (MR_Integer) 0)), (MR_Integer) 26))));
  func_6(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_2[1])), ((MR_Box) (Var_38)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Values_17)), S_7, STATE_VARIABLE_U_11_37, &STATE_VARIABLE_U_14_40);
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, (MR_Integer) 0)), (MR_Integer) 5))));
  func_7(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) (MR_Word) ((MR_Char) 93)), S_7, STATE_VARIABLE_U_14_40, &STATE_VARIABLE_U_32_32);
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, (MR_Integer) 0)), (MR_Integer) 6))));
  func_8(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) ").\n")), S_7, STATE_VARIABLE_U_32_32, STATE_VARIABLE_U_19);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mutable_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemMutable_8)
{
  MR_String Name_10 = ((MR_String) ((MR_hl_field(0, ItemMutable_8, (MR_Integer) 0))));
  MR_Word Type_12 = ((MR_Word) ((MR_hl_field(0, ItemMutable_8, (MR_Integer) 2))));
  MR_Word Inst_14 = ((MR_Word) ((MR_hl_field(0, ItemMutable_8, (MR_Integer) 4))));
  MR_Word InitTerm_15 = ((MR_Word) ((MR_hl_field(0, ItemMutable_8, (MR_Integer) 5))));
  MR_Word MutVarSet_16 = ((MR_Word) ((MR_hl_field(0, ItemMutable_8, (MR_Integer) 6))));
  MR_Word Attrs_17 = ((MR_Word) ((MR_hl_field(0, ItemMutable_8, (MR_Integer) 7))));
  MR_Word Lang_20;
  MR_Word Var_28;
  MR_Word Var_37;

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- mutable(");
  mercury__io__write_string_4_p_0(Stream_7, Name_10);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
  Var_28 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
  parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(Var_28, (MR_Integer) 0, Type_12, Stream_7);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
  parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MutVarSet_16, (MR_Integer) 0, InitTerm_15, Stream_7);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
  Lang_20 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
  Var_37 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
  parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_7, Lang_20, Var_37, Inst_14);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
  mercury__io__print_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0), Stream_7, ((MR_Box) (Attrs_17)));
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ").\n");
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_mu_mc_6_p_0(
  MR_Word Info_7,
  MR_Word VarNamePrint_8,
  MR_Word Stream_9,
  MR_Word ItemPredDecl0_10)
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
        MR_Word PredSymName0_14 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 0))));
        MR_Word PredSymName_15;
        MR_String Var_19;
        MR_Word Var_36;
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

        Var_19 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName0_14);
        {
          PredSymName_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredSymName_15, 0) = ((MR_Box) (Var_19));
        }
        Var_36 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_37 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 2))));
        Var_38 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 3))));
        Var_39 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 4))));
        Var_40 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 5))));
        Var_41 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 6))));
        Var_42 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 7))));
        Var_43 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 8))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 9))));
        Var_45 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 10))) & (MR_Integer) 3);
        Var_46 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 11))));
        Var_47 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 12))));
        Var_48 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_10, (MR_Integer) 13))));
        {
          ItemPredDecl_13 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemPredDecl_13, 0) = ((MR_Box) (PredSymName_15));
          MR_hl_field(0, ItemPredDecl_13, 1) = (MR_Box) ((MR_Unsigned) (Var_36));
          MR_hl_field(0, ItemPredDecl_13, 2) = ((MR_Box) (Var_37));
          MR_hl_field(0, ItemPredDecl_13, 3) = ((MR_Box) (Var_38));
          MR_hl_field(0, ItemPredDecl_13, 4) = ((MR_Box) (Var_39));
          MR_hl_field(0, ItemPredDecl_13, 5) = ((MR_Box) (Var_40));
          MR_hl_field(0, ItemPredDecl_13, 6) = ((MR_Box) (Var_41));
          MR_hl_field(0, ItemPredDecl_13, 7) = ((MR_Box) (Var_42));
          MR_hl_field(0, ItemPredDecl_13, 8) = ((MR_Box) (Var_43));
          MR_hl_field(0, ItemPredDecl_13, 9) = ((MR_Box) (Var_44));
          MR_hl_field(0, ItemPredDecl_13, 10) = (MR_Box) ((MR_Unsigned) (Var_45));
          MR_hl_field(0, ItemPredDecl_13, 11) = ((MR_Box) (Var_46));
          MR_hl_field(0, ItemPredDecl_13, 12) = ((MR_Box) (Var_47));
          MR_hl_field(0, ItemPredDecl_13, 13) = ((MR_Box) (Var_48));
        }
      }
      break;
  }
  Var_20 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 12))));
  parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_7, Var_20, Stream_9);
  Lang_16 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_7);
  parse_tree__parse_tree_out__mercury_output_item_pred_decl_6_p_0(Lang_16, VarNamePrint_8, Stream_9, ItemPredDecl_13);
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_pred_decl_6_p_0(
  MR_Word Lang_7,
  MR_Word VarNamePrint_8,
  MR_Word Stream_9,
  MR_Word ItemPredDecl_10)
{
  MR_bool succeeded;
  MR_Word PredSymName_12 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 0))));
  MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word TypesAndModes_14 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 2))));
  MR_Word WithType_15 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 3))));
  MR_Word WithInst_16 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 4))));
  MR_Word MaybeDetism_17 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 5))));
  MR_Word TypeVarSet_19 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 7))));
  MR_Word InstVarSet_20 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 8))));
  MR_Word ExistQVars_21 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 9))));
  MR_Word Purity_22 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 10))) & (MR_Integer) 3);
  MR_Word Constraints_23 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_10, (MR_Integer) 11))));

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
    parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_17_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Lang_7, VarNamePrint_8, TypeVarSet_19, InstVarSet_20, ExistQVars_21, PredSymName_12, FuncTypesAndModes_26, RetTypeAndMode_27, MaybeDetism_17, Purity_22, Constraints_23, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29);
  }
  else
  {
    MR_Box conv2_STATE_VARIABLE_IO_29;

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_19_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Lang_7, VarNamePrint_8, TypeVarSet_19, InstVarSet_20, PredOrFunc_13, ExistQVars_21, PredSymName_12, TypesAndModes_14, WithType_15, WithInst_16, MaybeDetism_17, Purity_22, Constraints_23, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_29);
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
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type__mercury_format_constraint_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_format_fundep_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_51;

  conv0_HeadVar__3_51 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_typeclass__1969__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_51));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemTypeClass_8)
{
  MR_bool succeeded;
  MR_Word ClassName0_10 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 0))));
  MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 1))));
  MR_Word Constraints_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 2))));
  MR_Word FunDeps_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 3))));
  MR_Word Interface_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 4))));
  MR_Word VarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_8, (MR_Integer) 5))));
  MR_Word ClassName_18;
  MR_String ClassNameStr_19;
  MR_Word VarStrs_20;
  MR_String VarsStr_21;
  MR_Word Var_28;

  parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, ClassName0_10, &ClassName_18);
  ClassNameStr_19 = parse_tree__parse_tree_out_sym_name__mercury_sym_name_to_string_1_f_0(ClassName_18);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[2]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (VarSet_15));
  }
  VarStrs_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, Vars_11);
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
    MR_Word Var_63;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv2_STATE_VARIABLE_U_21_62;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv4_STATE_VARIABLE_U_24_65;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_IO_38_38;

    func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) " <= (")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_21_62);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_63, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[0]));
      MR_hl_field(0, Var_63, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_2));
      MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_63, 3) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[1]));
      MR_hl_field(0, Var_63, 4) = ((MR_Box) (VarSet_15));
      MR_hl_field(0, Var_63, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 26))));
    func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)), ((MR_Box) (Var_63)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (FunDeps_13)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_24_65);
    if (!((Constraints_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_68;
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv8_STATE_VARIABLE_U_29_70;

      if (!((FunDeps_13 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv6_STATE_VARIABLE_U_26_67;

        func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_26_67);
      }
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[1]));
        MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_5_p_0_3));
        MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_68, 3) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[1]));
        MR_hl_field(0, Var_68, 4) = ((MR_Box) (VarSet_15));
        MR_hl_field(0, Var_68, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 26))));
      func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (Var_68)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Constraints_12)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_29_70);
    }
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_38_38);
  }
  if ((Interface_14 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
  else
  {
    MR_Word ClassDecls_22 = ((MR_Word) ((MR_hl_field(1, Interface_14, (MR_Integer) 0))));

    if ((ClassDecls_22 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " where [].\n");
    else
    {
      MR_Word HeadClassDecl_23 = ((MR_Word) ((MR_hl_field(1, ClassDecls_22, (MR_Integer) 0))));
      MR_Word TailClassDecls_24 = ((MR_Word) ((MR_hl_field(1, ClassDecls_22, (MR_Integer) 1))));
      MR_Word Lang_25;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " where [\n");
      Lang_25 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
      parse_tree__parse_tree_out__output_class_decls_7_p_0(Stream_7, Lang_25, (MR_Integer) 0, HeadClassDecl_23, TailClassDecls_24);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "].\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__output_class_decls_7_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Word VarNamePrint_10,
  MR_Word HeadClassDecl_11,
  MR_Word TailClassDecls_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
    if (((MR_tag((MR_Word) HeadClassDecl_11)) == (MR_Integer) 1))
    {
      MR_Word ModeInfo_39 = (MR_Word) (MR_body((MR_Word) (HeadClassDecl_11), (MR_Integer) 1));
      MR_Word Modes_40 = ((MR_Word) ((MR_hl_field(0, ModeInfo_39, (MR_Integer) 2))));
      MR_Word SymName_61 = ((MR_Word) ((MR_hl_field(0, ModeInfo_39, (MR_Integer) 0))));
      MR_Word PredOrFunc_62 = ((MR_Word) ((MR_hl_field(0, ModeInfo_39, (MR_Integer) 1))));
      MR_Word WithInst_63 = ((MR_Word) ((MR_hl_field(0, ModeInfo_39, (MR_Integer) 3))));
      MR_Word MaybeDetism_64 = ((MR_Word) ((MR_hl_field(0, ModeInfo_39, (MR_Integer) 4))));
      MR_Word InstVarSet_65 = ((MR_Word) ((MR_hl_field(0, ModeInfo_39, (MR_Integer) 5))));
      MR_String Name_66;
      MR_Word Var_53;

      Name_66 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_61);
      succeeded = (WithInst_63 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (PredOrFunc_62 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_53 = ((MR_Word) ((MR_hl_field(1, PredOrFunc_62, (MR_Integer) 0))));
          succeeded = (Var_53 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word FuncModes_41;
        MR_Word RetMode_42;
        MR_Word Var_54;
        MR_Box conv0_RetMode_42;
        MR_Box conv1_STATE_VARIABLE_IO_18_18;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_40, &FuncModes_41, &conv0_RetMode_42);
        RetMode_42 = ((MR_Word) (conv0_RetMode_42));
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (Name_66));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Lang_9, InstVarSet_65, Var_54, FuncModes_41, RetMode_42, MaybeDetism_64, (MR_String) "", (MR_String) "", ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
      }
      else
      {
        MR_Word Var_57;
        MR_Box conv2_STATE_VARIABLE_IO_18_18;

        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (Name_66));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Lang_9, InstVarSet_65, Var_57, Modes_40, WithInst_63, MaybeDetism_64, (MR_String) "", (MR_String) "", ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18_18);
      }
    }
    else
    {
      MR_Word PredOrFuncInfo_23 = (MR_Word) ((MR_Word) (HeadClassDecl_11));
      MR_Word SymName_24 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 0))));
      MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word TypesAndModes_26 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 2))));
      MR_Word WithType_27 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 3))));
      MR_Word WithInst_28 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 4))));
      MR_Word MaybeDetism_29 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 5))));
      MR_Word TypeVarSet_30 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 6))));
      MR_Word InstVarSet_31 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 7))));
      MR_Word ExistQVars_32 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 8))));
      MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 9))) & (MR_Integer) 3);
      MR_Word Constraints_34 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_23, (MR_Integer) 10))));
      MR_String Name_36;

      Name_36 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_24);
      succeeded = (PredOrFunc_25 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (WithType_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word FuncTypesAndModes_37;
        MR_Word RetTypeAndMode_38;
        MR_Word Var_45;
        MR_Box conv3_RetTypeAndMode_38;
        MR_Box conv4_STATE_VARIABLE_IO_18_18;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_26, &FuncTypesAndModes_37, &conv3_RetTypeAndMode_38);
        RetTypeAndMode_38 = ((MR_Word) (conv3_RetTypeAndMode_38));
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (Name_36));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_17_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Lang_9, VarNamePrint_10, TypeVarSet_30, InstVarSet_31, ExistQVars_32, Var_45, FuncTypesAndModes_37, RetTypeAndMode_38, MaybeDetism_29, Purity_33, Constraints_34, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_18_18);
      }
      else
      {
        MR_Word Var_49;
        MR_Box conv5_STATE_VARIABLE_IO_18_18;

        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (Name_36));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_19_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Lang_9, VarNamePrint_10, TypeVarSet_30, InstVarSet_31, PredOrFunc_25, ExistQVars_32, Var_49, TypesAndModes_26, WithType_27, WithInst_28, MaybeDetism_29, Purity_33, Constraints_34, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_18_18);
      }
    }
    if ((TailClassDecls_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
    else
    {
      MR_Word HeadTailClassDecl_14 = ((MR_Word) ((MR_hl_field(1, TailClassDecls_12, (MR_Integer) 0))));
      MR_Word TailTailClassDecls_15 = ((MR_Word) ((MR_hl_field(1, TailClassDecls_12, (MR_Integer) 1))));
      MR_Word next_value_of_HeadClassDecl_11;
      MR_Word next_value_of_TailClassDecls_12;

      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadClassDecl_11 = HeadTailClassDecl_14;
      next_value_of_TailClassDecls_12 = TailTailClassDecls_15;
      HeadClassDecl_11 = next_value_of_HeadClassDecl_11;
      TailClassDecls_12 = next_value_of_TailClassDecls_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_decl_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemModeDecl_8)
{
  MR_bool succeeded;
  MR_Word PredSymName0_10 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 0))));
  MR_Word MaybePredOrFunc_11 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 1))));
  MR_Word ArgModes_12 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 2))));
  MR_Word MaybeWithInst_13 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 3))));
  MR_Word MaybeDetism_14 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 4))));
  MR_Word InstVarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 5))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 6))));
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
      Var_25 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_11, (MR_Integer) 0))));
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

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__2_21;

  conv8_LambdaHeadVar__2_21 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1749__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_21));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_21;

  conv2_LambdaHeadVar__2_21 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1749__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemModeDefn_8)
{
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_8, (MR_Integer) 0))));
  MR_Word InstParams_11 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_8, (MR_Integer) 1))));
  MR_Word MaybeAbstractModeDefn_12 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_8, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_8, (MR_Integer) 3))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_8, (MR_Integer) 4))));
  MR_Word UnQualSymName_16;
  MR_Word Lang_17;

  parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, SymName_10, &UnQualSymName_16);
  parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_14, Stream_7);
  Lang_17 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
  if ((MaybeAbstractModeDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ArgTerms_35;
    MR_Word ModeTerm_36;
    MR_Word Var_37;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv1_STATE_VARIABLE_U_22_24;
    MR_Box conv3_STATE_VARIABLE_U_23_25;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_IO_19;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ":- abstract_mode((")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_22_24);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[1]));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_1));
      MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_37, 3) = ((MR_Box) (Context_14));
    }
    ArgTerms_35 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[8]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[9]), Var_37, InstParams_11);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), UnQualSymName_16, ArgTerms_35, Context_14, &ModeTerm_36);
    parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), VarSet_13, (MR_Integer) 0, ModeTerm_36, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_23_25);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ")).\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_19);
  }
  else
  {
    MR_Word Mode_22;
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractModeDefn_12, (MR_Integer) 0))));
    MR_Word ArgTerms_42;
    MR_Word ModeTerm_43;
    MR_Word Var_44;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv7_STATE_VARIABLE_U_28_29;
    MR_Box conv9_STATE_VARIABLE_U_29_30;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv11_STATE_VARIABLE_U_31_32;
    MR_Box conv12_STATE_VARIABLE_U_32_33;
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv14_STATE_VARIABLE_IO_19;

    Mode_22 = (MR_Word) (Var_27);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ":- mode (")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_28_29);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[1]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_5_p_0_2));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Context_14));
    }
    ArgTerms_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[8]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[9]), Var_44, InstParams_11);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), UnQualSymName_16, ArgTerms_42, Context_14, &ModeTerm_43);
    parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), VarSet_13, (MR_Integer) 0, ModeTerm_43, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_29_30);
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ") == ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_31_32);
    parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), Lang_17, VarSet_13, Mode_22, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_32_33);
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]))), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_19);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_tree_out__name_is_simple_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_41;

  conv1_LambdaHeadVar__2_41 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1568__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_41));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_18;

  conv0_LambdaHeadVar__2_18 = parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1645__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemInstDefn_8)
{
  MR_bool succeeded;
  MR_Word SymName0_10 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_8, (MR_Integer) 0))));
  MR_Word InstParams_11 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_8, (MR_Integer) 1))));
  MR_Word MaybeForTypeCtor_12 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_8, (MR_Integer) 2))));
  MR_Word MaybeAbstractInstDefn_13 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_8, (MR_Integer) 3))));
  MR_Word InstVarSet_14 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_8, (MR_Integer) 4))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_8, (MR_Integer) 5))));
  MR_Word UnQualSymName_17;
  MR_Word SymName_18;
  MR_Word Lang_19;
  MR_Word ArgTerms_20;
  MR_Word InstTerm_22;
  MR_Word Var_39;
  MR_Word TypeInfo_27_103;
  MR_Word TypeInfo_28_104;
  MR_Word TypeCtorInfo_31_105;
  MR_Word TypeCtorInfo_32_106;
  MR_Word TypeCtorInfo_33_107;
  MR_String Name_89;
  MR_Word Args1_90;
  MR_Word Term_91;
  MR_Word VarSet_92;
  MR_Word ContextPieces_93;
  MR_Word MaybeInst_94;
  MR_Word Inst_95;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;

  parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, SymName0_10, &UnQualSymName_17);
  succeeded = ((MR_tag((MR_Word) UnQualSymName_17)) == (MR_Integer) 0);
  if (succeeded)
  {
    Name_89 = ((MR_String) ((MR_hl_field(0, UnQualSymName_17, (MR_Integer) 0))));
    TypeInfo_27_103 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[8]);
    TypeInfo_28_104 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[10]);
    Var_98 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[7]);
    Args1_90 = mercury__list__map_2_f_0(TypeInfo_27_103, TypeInfo_28_104, Var_98, InstParams_11);
    {
      Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_99, 0) = ((MR_Box) (Name_89));
    }
    Var_100 = mercury__term_context__dummy_context_0_f_0();
    TypeCtorInfo_31_105 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    TypeCtorInfo_32_106 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
    {
      Term_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Term_91, 0) = ((MR_Box) (Var_99));
      MR_hl_field(0, Term_91, 1) = ((MR_Box) (Args1_90));
      MR_hl_field(0, Term_91, 2) = ((MR_Box) (Var_100));
    }
    mercury__varset__coerce_2_p_0(TypeCtorInfo_31_105, TypeCtorInfo_32_106, InstVarSet_14, &VarSet_92);
    TypeCtorInfo_33_107 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
    ContextPieces_93 = mercury__cord__init_0_f_0(TypeCtorInfo_33_107);
    Var_101 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_scalar_common_5[1]));
    parse_tree__parse_inst_mode_name__parse_inst_5_p_0(Var_101, VarSet_92, ContextPieces_93, Term_91, &MaybeInst_94);
    succeeded = ((MR_tag((MR_Word) MaybeInst_94)) == (MR_Integer) 1);
    if (succeeded)
    {
      Inst_95 = ((MR_Word) ((MR_hl_field(1, MaybeInst_94, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Inst_95)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst_95, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_102 = ((MR_Word) ((MR_hl_field(3, Inst_95, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_102)) == (MR_Integer) 0);
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
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[1]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_inst_defn_5_p_0_2));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Context_15));
  }
  ArgTerms_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[8]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[9]), Var_39, InstParams_11);
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), SymName_18, ArgTerms_20, Context_15, &InstTerm_22);
  if ((MaybeAbstractInstDefn_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- abstract_inst((");
    parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_14, (MR_Integer) 0, InstTerm_22, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")).\n");
  }
  else
  {
    MR_Word Inst_23;
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractInstDefn_13, (MR_Integer) 0))));
    MR_Word Names_108;
    MR_String Name_24;
    MR_Word HeadSimpleBI_34;
    MR_Word TailSimpleBIs_35;
    MR_Word Uniq_30;
    MR_Word BoundInsts_32;
    MR_Word SimpleBIs_33;

    Inst_23 = (MR_Word) (Var_48);
    Names_108 = mdbcomp__sym_name__sym_name_to_list_1_f_0(SymName_18);
    succeeded = mercury__list__all_true_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[8]), Names_108);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Name_24 = ((MR_String) ((MR_hl_field(0, SymName_18, (MR_Integer) 0))));
        succeeded = parse_tree__parse_tree_out_term__mercury_op_1_p_0(Name_24);
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_String Var_53;

      Var_53 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_18);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- inst ");
      mercury__io__write_string_4_p_0(Stream_7, Var_53);
      if (!((ArgTerms_20 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word HeadArgTerm_25 = ((MR_Word) ((MR_hl_field(1, ArgTerms_20, (MR_Integer) 0))));
        MR_Word TailArgTerms_26 = ((MR_Word) ((MR_hl_field(1, ArgTerms_20, (MR_Integer) 1))));
        MR_Box conv2_STATE_VARIABLE_IO_58_58;

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
        parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_3[1]), InstVarSet_14, (MR_Integer) 0, HeadArgTerm_25, TailArgTerms_26, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_58_58);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
    }
    else
    {
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- inst (");
      parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_14, (MR_Integer) 0, InstTerm_22, Stream_7);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
    }
    if (!((MaybeForTypeCtor_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ForTypeCtor_27 = ((MR_Word) ((MR_hl_field(1, MaybeForTypeCtor_12, (MR_Integer) 0))));
      MR_Word ForTypeCtorSymName_28 = ((MR_Word) ((MR_hl_field(0, ForTypeCtor_27, (MR_Integer) 0))));
      MR_Integer ForTypeCtorArity_29 = ((MR_Integer) ((MR_hl_field(0, ForTypeCtor_27, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " for ");
      parse_tree__parse_tree_out_sym_name__mercury_output_sym_name_4_p_0(ForTypeCtorSymName_28, Stream_7);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
      mercury__io__write_int_4_p_0(Stream_7, ForTypeCtorArity_29);
    }
    succeeded = ((MR_tag((MR_Word) Inst_23)) == (MR_Integer) 2);
    if (succeeded)
    {
      Uniq_30 = ((MR_Unsigned) ((MR_hl_field(2, Inst_23, (MR_Integer) 0))) & (MR_Integer) 7);
      BoundInsts_32 = ((MR_Word) ((MR_hl_field(2, Inst_23, (MR_Integer) 2))));
      succeeded = (Uniq_30 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0(BoundInsts_32, &SimpleBIs_33);
        if (succeeded)
        {
          succeeded = (SimpleBIs_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadSimpleBI_34 = ((MR_Word) ((MR_hl_field(1, SimpleBIs_33, (MR_Integer) 0))));
            TailSimpleBIs_35 = ((MR_Word) ((MR_hl_field(1, SimpleBIs_33, (MR_Integer) 1))));
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
    MR_String Name_16 = ((MR_String) ((MR_hl_field(0, HeadBI_13, (MR_Integer) 0))));
    MR_Word ArgInsts_17 = ((MR_Word) ((MR_hl_field(0, HeadBI_13, (MR_Integer) 1))));

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
      MR_Word HeadTailBI_20 = ((MR_Word) ((MR_hl_field(1, TailBIs_14, (MR_Integer) 0))));
      MR_Word TailTailBIs_21 = ((MR_Word) ((MR_hl_field(1, TailBIs_14, (MR_Integer) 1))));
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_tree_out__name_is_simple_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeCtorInfo_6_15;
    MR_Word HeadBI_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailBIs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadSimpleBI_5;
    MR_Word TailSimpleBIs_6;
    MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(0, HeadBI_3, (MR_Integer) 0))));
    MR_Word ArgInsts_8 = ((MR_Word) ((MR_hl_field(0, HeadBI_3, (MR_Integer) 1))));
    MR_Word SymName_9;
    MR_String SimpleName_12;
    MR_Word Names_13;
    MR_Word Var_14;

    succeeded = ((((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      SymName_9 = ((MR_Word) ((MR_hl_field(3, ConsId_7, (MR_Integer) 1))));
      Names_13 = mdbcomp__sym_name__sym_name_to_list_1_f_0(SymName_9);
      Var_14 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[6]);
      TypeCtorInfo_6_15 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_6_15, Var_14, Names_13);
      if (succeeded)
      {
        SimpleName_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_9);
        {
          HeadSimpleBI_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadSimpleBI_5, 0) = ((MR_Box) (SimpleName_12));
          MR_hl_field(0, HeadSimpleBI_5, 1) = ((MR_Box) (ArgInsts_8));
        }
        succeeded = parse_tree__parse_tree_out__bound_inst_cons_ids_are_all_simple_2_p_0(TailBIs_4, &TailSimpleBIs_6);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadSimpleBI_5));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailSimpleBIs_6));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__parse_tree_out_type_repn__foreign_type_assertion_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_53;

  conv0_LambdaHeadVar__2_53 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__1161__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_53));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemTypeDefn_8)
{
  MR_Word SymName0_10 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 0))));
  MR_Word TypeParams_11 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 1))));
  MR_Word TypeDefn_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 2))));
  MR_Word TypeVarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 3))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 4))));
  MR_Word SymName_16;
  MR_Word Args_17;
  MR_Word TypeTerm_19;
  MR_Word Var_51;

  parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, SymName0_10, &SymName_16);
  parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_14, Stream_7);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_8[0]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_type_defn_5_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (Context_14));
  }
  Args_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[7]), Var_51, TypeParams_11);
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), SymName_16, Args_17, Context_14, &TypeTerm_19);
  switch (MR_tag((MR_Word) TypeDefn_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu_27 = (MR_Word) ((MR_Word) (TypeDefn_12));
        MR_Word OoMCtors_28 = ((MR_Word) ((MR_hl_field(0, DetailsDu_27, (MR_Integer) 0))));
        MR_Word MaybeCanonical_29 = ((MR_Word) ((MR_hl_field(0, DetailsDu_27, (MR_Integer) 1))));
        MR_Word MaybeDirectArgs_30 = ((MR_Word) ((MR_hl_field(0, DetailsDu_27, (MR_Integer) 2))));
        MR_Word HeadCtor_31;
        MR_Word TailCtors_32;

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
        parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
        HeadCtor_31 = ((MR_Word) ((MR_hl_field(0, OoMCtors_28, (MR_Integer) 0))));
        TailCtors_32 = ((MR_Word) ((MR_hl_field(0, OoMCtors_28, (MR_Integer) 1))));
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

        SuperType_33 = ((MR_Word) ((MR_hl_field(0, DetailsDu_140, (MR_Integer) 0))));
        OoMCtors_141 = ((MR_Word) ((MR_hl_field(0, DetailsDu_140, (MR_Integer) 1))));
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
        parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " =< ");
        parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TypeVarSet_13, (MR_Integer) 0, SuperType_33, Stream_7);
        HeadCtor_142 = ((MR_Word) ((MR_hl_field(0, OoMCtors_141, (MR_Integer) 0))));
        TailCtors_143 = ((MR_Word) ((MR_hl_field(0, OoMCtors_141, (MR_Integer) 1))));
        parse_tree__parse_tree_out__mercury_output_ctors_7_p_0(TypeVarSet_13, (MR_Integer) 1, HeadCtor_142, TailCtors_143, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver_34 = (MR_Word) (MR_body((MR_Word) (TypeDefn_12), (MR_Integer) 2));
        MR_Word SolverTypeDetails_35 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_34, (MR_Integer) 0))));
        MR_Word Var_101;
        MR_Word MaybeCanonical_144 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_34, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- solver type ");
        parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (SolverTypeDetails_35));
        }
        parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(Info_6, TypeVarSet_13, Var_101, MaybeCanonical_144, (MR_Word) ((MR_Unsigned) 0U), Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv_25 = ((MR_Word) ((MR_hl_field(3, TypeDefn_12, (MR_Integer) 1))));
            MR_Word EqvType_26 = (MR_Word) (DetailsEqv_25);

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
            parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) " == ");
            parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TypeVarSet_13, (MR_Integer) 0, EqvType_26, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DetailsAbstract_20 = ((MR_Word) ((MR_hl_field(3, TypeDefn_12, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) DetailsAbstract_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DetailsAbstract_20)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
                      parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_19, Stream_7);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
                      parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_19, Stream_7);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
                      parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_19, Stream_7);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- solver type ");
                      parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_19, Stream_7);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SuperTypeCtor_24;

                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
                  parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_19, Stream_7);
                  SuperTypeCtor_24 = (MR_Word) (MR_body((MR_Word) (DetailsAbstract_20), (MR_Integer) 1));
                  parse_tree__parse_tree_out__mercury_output_where_abstract_subtype_4_p_0(Stream_7, SuperTypeCtor_24);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer NumBits_23;

                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type ");
                  parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, (MR_Integer) 0, TypeTerm_19, Stream_7);
                  NumBits_23 = ((MR_Integer) ((MR_hl_field(2, DetailsAbstract_20, (MR_Integer) 0))));
                  parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_4_p_0(Stream_7, NumBits_23);
                }
                break;
            }
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsForeign_36 = ((MR_Word) ((MR_hl_field(3, TypeDefn_12, (MR_Integer) 1))));
            MR_Word ForeignType_37 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_36, (MR_Integer) 0))));
            MR_Word Assertions_38;
            MR_String ForeignTypeStr_42;
            MR_Word AssertionsList_43;
            MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_36, (MR_Integer) 2))));
            MR_Word MaybeCanonical_145 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_36, (MR_Integer) 1))));

            Assertions_38 = (MR_Word) (Var_106);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- pragma foreign_type(");
            switch (MR_tag((MR_Word) ForeignType_37)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_119;

                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "c, ");
                  Var_119 = ((MR_Word) ((MR_hl_field(0, ForeignType_37, (MR_Integer) 0))));
                  ForeignTypeStr_42 = (MR_String) (Var_119);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_120;

                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "java, ");
                  Var_120 = ((MR_Word) ((MR_hl_field(1, ForeignType_37, (MR_Integer) 0))));
                  ForeignTypeStr_42 = (MR_String) (Var_120);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_121;

                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "csharp, ");
                  Var_121 = ((MR_Word) ((MR_hl_field(2, ForeignType_37, (MR_Integer) 0))));
                  ForeignTypeStr_42 = (MR_String) (Var_121);
                }
                break;
            }
            parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_13, (MR_Integer) 0, TypeTerm_19, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", \"");
            mercury__io__write_string_4_p_0(Stream_7, ForeignTypeStr_42);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\"");
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_38, &AssertionsList_43);
            if (!((AssertionsList_43 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word AssertionStrs_46;
              MR_String AssertionsStr_47;

              AssertionStrs_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[5]), AssertionsList_43);
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
      MR_Word HeadTailCtor_14 = ((MR_Word) ((MR_hl_field(1, TailCtors_11, (MR_Integer) 0))));
      MR_Word TailTailCtors_15 = ((MR_Word) ((MR_hl_field(1, TailCtors_11, (MR_Integer) 1))));
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
  MR_bool succeeded;
  MR_Word MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(0, Ctor_7, (MR_Integer) 1))));
  MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, Ctor_7, (MR_Integer) 2))));
  MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, Ctor_7, (MR_Integer) 3))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, Ctor_7, (MR_Integer) 4))));
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
      result_3 = MR_strcmp(Name_16, ((&parse_tree__parse_tree_out_vector_common_7[0 + mid_2]))->parse_tree__parse_tree_out__vector_common_type_7_0__vct_7_f_0);
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
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (Name_16));
    }
    parse_tree__parse_tree_out_sym_name__mercury_output_bracketed_sym_name_4_p_0(Var_29, Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
  }
  else
  {
    MR_Word HeadArg_21 = ((MR_Word) ((MR_hl_field(1, Args_13, (MR_Integer) 0))));
    MR_Word TailArgs_22 = ((MR_Word) ((MR_hl_field(1, Args_13, (MR_Integer) 1))));
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (Name_16));
    }
    parse_tree__parse_tree_out_sym_name__mercury_output_sym_name_4_p_0(Var_33, Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    parse_tree__parse_tree_out__mercury_output_ctor_args_6_p_0(Stream_8, TVarSet_6, HeadArg_21, TailArgs_22);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  }
  mercury__io__write_string_4_p_0(Stream_8, BraceSuffix_20);
  mercury__io__write_string_4_p_0(Stream_8, ExistConstraintsSuffix_18);
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
    MR_Word Name_19 = ((MR_Word) ((MR_hl_field(0, HeadArg_9, (MR_Integer) 0))));
    MR_Word Type_20 = ((MR_Word) ((MR_hl_field(0, HeadArg_9, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Name_19 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FieldName_28 = ((MR_Word) ((MR_hl_field(1, Name_19, (MR_Integer) 0))));
      MR_Word Name_29 = ((MR_Word) ((MR_hl_field(0, FieldName_28, (MR_Integer) 0))));

      parse_tree__parse_tree_out_sym_name__mercury_output_bracketed_sym_name_4_p_0(Name_29, Stream_7);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " :: ");
    }
    parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TVarSet_8, (MR_Integer) 0, Type_20, Stream_7);
    if (!((TailArgs_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadTailArg_12 = ((MR_Word) ((MR_hl_field(1, TailArgs_10, (MR_Integer) 0))));
      MR_Word TailTailArgs_13 = ((MR_Word) ((MR_hl_field(1, TailArgs_10, (MR_Integer) 1))));
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
    MR_Word ExistQVars_14 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_13, (MR_Integer) 0))));
    MR_Word Constraints_15 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_13, (MR_Integer) 1))));
    MR_String ExistQVarsStr_18;
    MR_String ConstraintsStr_19;
    MR_String Var_24;
    MR_String Var_25;

    ExistQVarsStr_18 = parse_tree__parse_tree_out_misc__mercury_quantifier_to_string_3_f_0(TVarSet_7, (MR_Integer) 0, ExistQVars_14);
    ConstraintsStr_19 = parse_tree__parse_tree_out_type__mercury_prog_constraint_list_to_string_4_f_0(TVarSet_7, (MR_Integer) 0, (MR_String) "=>", Constraints_15);
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
  MR_Word SymName_8;
  MR_Integer Arity_9;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n\twhere\t");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "type_is_abstract_subtype(");
  SymName_8 = ((MR_Word) ((MR_hl_field(0, TypeCtor_6, (MR_Integer) 0))));
  Arity_9 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_6, (MR_Integer) 1))));
  parse_tree__parse_tree_out_sym_name__mercury_output_sym_name_4_p_0(SymName_8, Stream_5);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "/");
  mercury__io__write_int_4_p_0(Stream_5, Arity_9);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_abstract_enum_type_4_p_0(
  MR_Word Stream_5,
  MR_Integer NumBits_6)
{
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n\twhere\t");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "type_is_abstract_enum(");
  mercury__io__write_int_4_p_0(Stream_5, NumBits_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_64;

  conv1_LambdaHeadVar__2_64 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_where_attributes__1363__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_64));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_item_mutable_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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
  MR_bool succeeded;
  MR_Word Lines_29;
  MR_Word STATE_VARIABLE_LineCord_40_40;
  MR_Word STATE_VARIABLE_LineCord_42_42;
  MR_Word STATE_VARIABLE_LineCord_57_57;

  STATE_VARIABLE_LineCord_40_40 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  if ((MaybeCanonical_12 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_LineCord_42_42 = STATE_VARIABLE_LineCord_40_40;
  else
  {
    MR_Word NonCanon_17 = ((MR_Word) ((MR_hl_field(1, MaybeCanonical_12, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) NonCanon_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_LineCord_42_42 = STATE_VARIABLE_LineCord_40_40;
        break;
      case (MR_Integer) 1:
        {
          MR_Word UniPred_19 = ((MR_Word) ((MR_hl_field(1, NonCanon_17, (MR_Integer) 0))));
          MR_Word CmpPred_20 = ((MR_Word) ((MR_hl_field(1, NonCanon_17, (MR_Integer) 1))));
          MR_String UniPredStr_21;
          MR_String CmpPredStr_22;
          MR_String UniPredLine_23;
          MR_String CmpPredLine_24;
          MR_Word STATE_VARIABLE_LineCord_45_45;

          UniPredStr_21 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(UniPred_19);
          CmpPredStr_22 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(CmpPred_20);
          UniPredLine_23 = mercury__string__f_43_43_2_f_0((MR_String) "equality is ", UniPredStr_21);
          CmpPredLine_24 = mercury__string__f_43_43_2_f_0((MR_String) "comparison is ", CmpPredStr_22);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (UniPredLine_23)), STATE_VARIABLE_LineCord_40_40, &STATE_VARIABLE_LineCord_45_45);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CmpPredLine_24)), STATE_VARIABLE_LineCord_45_45, &STATE_VARIABLE_LineCord_42_42);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UniPred_68 = ((MR_Word) ((MR_hl_field(2, NonCanon_17, (MR_Integer) 0))));
          MR_String UniPredStr_69;
          MR_String UniPredLine_70;

          UniPredStr_69 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(UniPred_68);
          UniPredLine_70 = mercury__string__f_43_43_2_f_0((MR_String) "equality is ", UniPredStr_69);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (UniPredLine_70)), STATE_VARIABLE_LineCord_40_40, &STATE_VARIABLE_LineCord_42_42);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, NonCanon_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CmpPred_71 = ((MR_Word) ((MR_hl_field(3, NonCanon_17, (MR_Integer) 1))));
              MR_String CmpPredStr_72;
              MR_String CmpPredLine_73;

              CmpPredStr_72 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(CmpPred_71);
              CmpPredLine_73 = mercury__string__f_43_43_2_f_0((MR_String) "comparison is ", CmpPredStr_72);
              mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CmpPredLine_73)), STATE_VARIABLE_LineCord_40_40, &STATE_VARIABLE_LineCord_42_42);
            }
            break;
          case (MR_Integer) 1:
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "type_is_abstract_noncanonical")), STATE_VARIABLE_LineCord_40_40, &STATE_VARIABLE_LineCord_42_42);
            break;
        }
        break;
    }
  }
  if ((MaybeDirectArgs_13 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_LineCord_57_57 = STATE_VARIABLE_LineCord_42_42;
  else
  {
    MR_Word DirectArgFunctors_25 = ((MR_Word) ((MR_hl_field(1, MaybeDirectArgs_13, (MR_Integer) 0))));
    MR_Word FunctorStrs_26;
    MR_String FunctorsStr_27;
    MR_String DirectArgLine_28;
    MR_String Var_80;

    FunctorStrs_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[3]), DirectArgFunctors_25);
    FunctorsStr_27 = mercury__string__join_list_2_f_0((MR_String) ", ", FunctorStrs_26);
    Var_80 = mercury__string__f_43_43_2_f_0(FunctorsStr_27, (MR_String) "]");
    DirectArgLine_28 = mercury__string__f_43_43_2_f_0((MR_String) "direct_arg is [", Var_80);
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (DirectArgLine_28)), STATE_VARIABLE_LineCord_42_42, &STATE_VARIABLE_LineCord_57_57);
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
      MR_Word SolverTypeDetails_30 = ((MR_Word) ((MR_hl_field(1, MaybeSolverTypeDetails_11, (MR_Integer) 0))));
      MR_Word RepresentationType_82 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_30, (MR_Integer) 0))));
      MR_Word GroundInst_83 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_30, (MR_Integer) 1))));
      MR_Word AnyInst_84 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_30, (MR_Integer) 2))));
      MR_Word MutableInfos_85 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_30, (MR_Integer) 3))));
      MR_Word Lang_86;
      MR_Word EmptyInstVarSet_87;

      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "        representation is ");
      parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TypeVarSet_10, (MR_Integer) 0, RepresentationType_82, Stream_14);
      Lang_86 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_9);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &EmptyInstVarSet_87);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n        ground is ");
      parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_14, Lang_86, EmptyInstVarSet_87, GroundInst_83);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n        any is ");
      parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_14, Lang_86, EmptyInstVarSet_87, AnyInst_84);
      if (!((MutableInfos_85 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Var_100;

        mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n        constraint_store is [\n            ");
        {
          Var_100 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_100, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[0]));
          MR_hl_field(0, Var_100, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0_2));
          MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_100, 3) = ((MR_Box) (Info_9));
        }
        parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), Var_100, (MR_String) ",\n            ", MutableInfos_85, Stream_14);
        mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n        ]");
      }
      if (!((Lines_29 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__io__write_string_4_p_0(Stream_14, (MR_String) ",\n");
    }
    IndentedLines_36 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[4]), Lines_29);
    AllLines_37 = mercury__string__join_list_2_f_0((MR_String) ",\n", IndentedLines_36);
    mercury__io__write_string_4_p_0(Stream_14, AllLines_37);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(
  MR_Word Stream_6,
  MR_String Decl_7,
  MR_Word ModuleName_8)
{
  MR_String ModuleNameStr_10;

  ModuleNameStr_10 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- ");
  mercury__io__write_string_4_p_0(Stream_6, Decl_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_6, ModuleNameStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____output_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out____Unify____output_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out____Compare____output_parse_tree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out____Compare____output_parse_tree_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out____Unify____simple_bound_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out____Unify____simple_bound_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out____Compare____simple_bound_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out____Compare____simple_bound_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
