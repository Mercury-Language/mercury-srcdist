/*
** Automatically generated from `parse_tree_out.m'
** by the Mercury compiler,
** version rotd-2019-11-12
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_VA_PseudoTypeInfo_Struct4 parse_tree__parse_tree_out____vpti_pred_4__plain_parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_type_repn__1743__1_5_p_0(
  MR_Word TVarSet_11,
  MR_Word HeadVar__2_33,
  MR_Word HeadVar__3_77);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1523__1_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__4_31,
  MR_Box HeadVar__5_32,
  MR_Box * HeadVar__6_33);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1521__1_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__4_26,
  MR_Box HeadVar__5_27,
  MR_Box * HeadVar__6_28);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1465__1_4_p_0(
  MR_Word VarSet_13,
  MR_Word LambdaHeadVar__1_32);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1246__1_2_f_0(
  MR_Word Context_8,
  MR_Word LambdaHeadVar__1_18);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1196__1_1_f_0(
  MR_Word LambdaHeadVar__1_17);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1150__1_2_f_0(
  MR_Word Context_13,
  MR_Word LambdaHeadVar__1_29);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__1109__1_3_p_0(
  MR_Word HeadVar__1_11);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__732__1_2_f_0(
  MR_Word Context_12,
  MR_Word LambdaHeadVar__1_47);

static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__510__1_2_p_0(
  MR_Word Incls_10,
  MR_Word HeadVar__2_20);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__365__1_1_f_0(
  MR_Word HeadVar__1_117);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__363__1_1_f_0(
  MR_Word HeadVar__1_109);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__361__1_1_f_0(
  MR_Word HeadVar__1_101);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__359__1_1_f_0(
  MR_Word HeadVar__1_95);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__357__1_1_f_0(
  MR_Word HeadVar__1_87);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__355__1_1_f_0(
  MR_Word HeadVar__1_79);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__353__1_1_f_0(
  MR_Word HeadVar__1_71);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__351__1_1_f_0(
  MR_Word HeadVar__1_62);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__341__1_1_f_0(
  MR_Word HeadVar__1_249);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__339__1_1_f_0(
  MR_Word HeadVar__1_241);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__337__1_1_f_0(
  MR_Word HeadVar__1_233);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__335__1_1_f_0(
  MR_Word HeadVar__1_227);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__333__1_1_f_0(
  MR_Word HeadVar__1_219);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__331__1_1_f_0(
  MR_Word HeadVar__1_211);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__329__1_1_f_0(
  MR_Word HeadVar__1_203);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__327__1_1_f_0(
  MR_Word HeadVar__1_195);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__325__1_1_f_0(
  MR_Word HeadVar__1_187);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__322__1_1_f_0(
  MR_Word HeadVar__1_179);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__319__1_1_f_0(
  MR_Word HeadVar__1_167);

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__317__1_1_f_0(
  MR_Word HeadVar__1_159);

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__305__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_121);

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_51_48_53_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_121);

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
parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0(
  MR_String Decl_5,
  MR_Word ModuleName_6);

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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_35(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_2(
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
parse_tree__parse_tree_out__mercury_output_du_type_repn_3_p_0(
  MR_Word DuRepn_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_only_functor_args_3_p_0(
  MR_Word OnlyFunctorArgs_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_only_functor_remote_args_4_p_0(
  MR_Word RemoteArg_5,
  MR_Word RemoteArgs_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_only_functor_local_args_4_p_0(
  MR_Word LocalArg_5,
  MR_Word LocalArgs_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_gen_du_functors_4_p_0(
  MR_Word Functor_5,
  MR_Word Functors_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_gen_du_functor_4_p_0(
  MR_Word Functor_5,
  MR_String Suffix_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_sectag_size_3_p_0(
  MR_Word SectagSize_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ptag_sectag_3_p_0(
  MR_Word PtagSectag_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_maybe_direct_args_4_p_0(
  MR_Word Arg_5,
  MR_Word Args_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_arg_pos_size_3_p_0(
  MR_Word ArgPosSize_4);

static MR_String MR_CALL 
parse_tree__parse_tree_out__fill_kind_size_to_string_1_f_0(
  MR_Word FillKindSize_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_3_p_0(
  MR_Word MaybeCJCsERepn_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_4_p_0(
  MR_Word Lang_5,
  MR_Word TypeRepn_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_or_enum_3_p_0(
  MR_Word MaybeCJCsERepnOrEnum_4);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_or_enum_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_or_enum_4_p_0(
  MR_Word Lang_5,
  MR_Word TypeRepnOrEnum_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_enum_functor_names_4_p_0(
  MR_String FunctorName_5,
  MR_Word FunctorNames_6);

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_enum_functor_name_3_p_0(
  MR_String FunctorName_4);

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


static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[19][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[48][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[24][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_4[12][6];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[13][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[2][1];

static /* final */ const MR_Integer parse_tree__parse_tree_out_scalar_common_8[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_9[3][9];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_10[3][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_11[1][4];


/* sealed */ struct parse_tree__parse_tree_out__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_5_0_s parse_tree__parse_tree_out_vector_common_5[12];



static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_1[19][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_2[48][3] = {
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
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[2])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_or_enum_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[2])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[2])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_module_components_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_2)),
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
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[4])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_19)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_21)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[6])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_23)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_24)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[7])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_25)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[8])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_27)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_29)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_30)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[9])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_31)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[10])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_33)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[11])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_35)),
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
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_src_item_block_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_item_block_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_opt_item_block_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[5])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_int_for_opt_item_block_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[22])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_aug_compilation_unit_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_3[24][7] = {
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
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 23 */
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
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

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_6[13][5] = {
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
    ((MR_Box) (&parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_7[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
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
    ((MR_Box) (&parse_tree__parse_tree_out__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
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
};

static /* final */ const MR_Box parse_tree__parse_tree_out_scalar_common_11[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[7])),
    ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "use_module"))
  },
};


static /* final */ const struct parse_tree__parse_tree_out__vector_common_type_5_0_s parse_tree__parse_tree_out_vector_common_5[12] = {
  /* row 0 */   {     (MR_String) ";" },
  /* row 1 */   {     (MR_String) "=>" },
  /* row 2 */   {     (MR_String) "some" },
  /* row 3 */   {     (MR_String) "{}" },
  /* row 4 */   {     (MR_String) "c" },
  /* row 5 */   {     (MR_String) "csharp" },
  /* row 6 */   {     (MR_String) "java" },
  /* row 7 */   {     (MR_String) "erlang" },
  /* row 8 */   {     (MR_String) "c" },
  /* row 9 */   {     (MR_String) "csharp" },
  /* row 10 */   {     (MR_String) "java" },
  /* row 11 */   {     (MR_String) "erlang" },
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
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
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_type_repn__1743__1_5_p_0(
  MR_Word TVarSet_11,
  MR_Word HeadVar__2_33,
  MR_Word HeadVar__3_77)
{
  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_11, HeadVar__2_33, HeadVar__3_77);
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1523__1_6_p_0(
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
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1521__1_6_p_0(
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
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1465__1_4_p_0(
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
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1246__1_2_f_0(
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
parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1196__1_1_f_0(
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
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1150__1_2_f_0(
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
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__1109__1_3_p_0(
  MR_Word HeadVar__1_11)
{
  {
    MR_Box conv0_HeadVar__3_13;

    parse_tree__mercury_to_mercury__mercury_format_sym_name_and_arity_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), HeadVar__1_11, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__3_13);
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__732__1_2_f_0(
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

static MR_bool MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__510__1_2_p_0(
  MR_Word Incls_10,
  MR_Word HeadVar__2_20)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[13]), ((MR_Box) (Incls_10)), ((MR_Box) (HeadVar__2_20)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__365__1_1_f_0(
  MR_Word HeadVar__1_117)
{
  {
    MR_Word HeadVar__2_118;
    MR_Box conv0_HeadVar__2_118;

    conv0_HeadVar__2_118 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), HeadVar__1_117);
    HeadVar__2_118 = ((MR_Word) (conv0_HeadVar__2_118));
    return HeadVar__2_118;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__363__1_1_f_0(
  MR_Word HeadVar__1_109)
{
  {
    MR_Word HeadVar__2_110;
    MR_Box conv0_HeadVar__2_110;

    conv0_HeadVar__2_110 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), HeadVar__1_109);
    HeadVar__2_110 = ((MR_Word) (conv0_HeadVar__2_110));
    return HeadVar__2_110;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__361__1_1_f_0(
  MR_Word HeadVar__1_101)
{
  {
    MR_Word HeadVar__2_102;
    MR_Box conv0_HeadVar__2_102;

    conv0_HeadVar__2_102 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_101);
    HeadVar__2_102 = ((MR_Word) (conv0_HeadVar__2_102));
    return HeadVar__2_102;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__359__1_1_f_0(
  MR_Word HeadVar__1_95)
{
  {
    MR_Word HeadVar__2_96;
    MR_Box conv0_HeadVar__2_96;

    conv0_HeadVar__2_96 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_95);
    HeadVar__2_96 = ((MR_Word) (conv0_HeadVar__2_96));
    return HeadVar__2_96;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__357__1_1_f_0(
  MR_Word HeadVar__1_87)
{
  {
    MR_Word HeadVar__2_88;
    MR_Box conv0_HeadVar__2_88;

    conv0_HeadVar__2_88 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), HeadVar__1_87);
    HeadVar__2_88 = ((MR_Word) (conv0_HeadVar__2_88));
    return HeadVar__2_88;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__355__1_1_f_0(
  MR_Word HeadVar__1_79)
{
  {
    MR_Word HeadVar__2_80;
    MR_Box conv0_HeadVar__2_80;

    conv0_HeadVar__2_80 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), HeadVar__1_79);
    HeadVar__2_80 = ((MR_Word) (conv0_HeadVar__2_80));
    return HeadVar__2_80;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__353__1_1_f_0(
  MR_Word HeadVar__1_71)
{
  {
    MR_Word HeadVar__2_72;
    MR_Box conv0_HeadVar__2_72;

    conv0_HeadVar__2_72 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), HeadVar__1_71);
    HeadVar__2_72 = ((MR_Word) (conv0_HeadVar__2_72));
    return HeadVar__2_72;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__351__1_1_f_0(
  MR_Word HeadVar__1_62)
{
  {
    MR_Word HeadVar__2_63;
    MR_Box conv0_HeadVar__2_63;

    conv0_HeadVar__2_63 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), HeadVar__1_62);
    HeadVar__2_63 = ((MR_Word) (conv0_HeadVar__2_63));
    return HeadVar__2_63;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__341__1_1_f_0(
  MR_Word HeadVar__1_249)
{
  {
    MR_Word HeadVar__2_250;
    MR_Box conv0_HeadVar__2_250;

    conv0_HeadVar__2_250 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), HeadVar__1_249);
    HeadVar__2_250 = ((MR_Word) (conv0_HeadVar__2_250));
    return HeadVar__2_250;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__339__1_1_f_0(
  MR_Word HeadVar__1_241)
{
  {
    MR_Word HeadVar__2_242;
    MR_Box conv0_HeadVar__2_242;

    conv0_HeadVar__2_242 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), HeadVar__1_241);
    HeadVar__2_242 = ((MR_Word) (conv0_HeadVar__2_242));
    return HeadVar__2_242;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__337__1_1_f_0(
  MR_Word HeadVar__1_233)
{
  {
    MR_Word HeadVar__2_234;
    MR_Box conv0_HeadVar__2_234;

    conv0_HeadVar__2_234 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_233);
    HeadVar__2_234 = ((MR_Word) (conv0_HeadVar__2_234));
    return HeadVar__2_234;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__335__1_1_f_0(
  MR_Word HeadVar__1_227)
{
  {
    MR_Word HeadVar__2_228;
    MR_Box conv0_HeadVar__2_228;

    conv0_HeadVar__2_228 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), HeadVar__1_227);
    HeadVar__2_228 = ((MR_Word) (conv0_HeadVar__2_228));
    return HeadVar__2_228;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__333__1_1_f_0(
  MR_Word HeadVar__1_219)
{
  {
    MR_Word HeadVar__2_220;
    MR_Box conv0_HeadVar__2_220;

    conv0_HeadVar__2_220 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), HeadVar__1_219);
    HeadVar__2_220 = ((MR_Word) (conv0_HeadVar__2_220));
    return HeadVar__2_220;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__331__1_1_f_0(
  MR_Word HeadVar__1_211)
{
  {
    MR_Word HeadVar__2_212;
    MR_Box conv0_HeadVar__2_212;

    conv0_HeadVar__2_212 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), HeadVar__1_211);
    HeadVar__2_212 = ((MR_Word) (conv0_HeadVar__2_212));
    return HeadVar__2_212;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__329__1_1_f_0(
  MR_Word HeadVar__1_203)
{
  {
    MR_Word HeadVar__2_204;
    MR_Box conv0_HeadVar__2_204;

    conv0_HeadVar__2_204 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), HeadVar__1_203);
    HeadVar__2_204 = ((MR_Word) (conv0_HeadVar__2_204));
    return HeadVar__2_204;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__327__1_1_f_0(
  MR_Word HeadVar__1_195)
{
  {
    MR_Word HeadVar__2_196;
    MR_Box conv0_HeadVar__2_196;

    conv0_HeadVar__2_196 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), HeadVar__1_195);
    HeadVar__2_196 = ((MR_Word) (conv0_HeadVar__2_196));
    return HeadVar__2_196;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__325__1_1_f_0(
  MR_Word HeadVar__1_187)
{
  {
    MR_Word HeadVar__2_188;
    MR_Box conv0_HeadVar__2_188;

    conv0_HeadVar__2_188 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), HeadVar__1_187);
    HeadVar__2_188 = ((MR_Word) (conv0_HeadVar__2_188));
    return HeadVar__2_188;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__322__1_1_f_0(
  MR_Word HeadVar__1_179)
{
  {
    MR_Word HeadVar__2_180;
    MR_Box conv0_HeadVar__2_180;

    conv0_HeadVar__2_180 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), HeadVar__1_179);
    HeadVar__2_180 = ((MR_Word) (conv0_HeadVar__2_180));
    return HeadVar__2_180;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__319__1_1_f_0(
  MR_Word HeadVar__1_167)
{
  {
    MR_Word HeadVar__2_168;
    MR_Box conv0_HeadVar__2_168;

    conv0_HeadVar__2_168 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), HeadVar__1_167);
    HeadVar__2_168 = ((MR_Word) (conv0_HeadVar__2_168));
    return HeadVar__2_168;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__317__1_1_f_0(
  MR_Word HeadVar__1_159)
{
  {
    MR_Word HeadVar__2_160;
    MR_Box conv0_HeadVar__2_160;

    conv0_HeadVar__2_160 = parse_tree__prog_item__project_pragma_type_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), HeadVar__1_159);
    HeadVar__2_160 = ((MR_Word) (conv0_HeadVar__2_160));
    return HeadVar__2_160;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__305__1_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_121)
{
  parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_51_48_53_95_95_49_95_95_91_49_93_95_48_4_p_0(HeadVar__2_121);
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_51_48_53_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_121)
{
  {
    MR_Box conv0_HeadVar__4_123;

    parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), HeadVar__2_121, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_123);
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
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), Lang_5, InstVarSet_56, Var_33, FuncModes_26, RetMode_27, MaybeDetism_55, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29);
      }
      else
      {
        MR_Word Var_37;
        MR_Box conv2_STATE_VARIABLE_IO_29;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Name_58));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), Lang_5, InstVarSet_56, Var_37, Modes_25, WithInst_54, MaybeDetism_55, (MR_String) "", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_29);
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
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), Lang_5, TypeVarSet_15, InstVarSet_16, ExistQVars_17, Var_41, FuncTypesAndModes_22, RetTypeAndMode_23, MaybeDetism_14, Purity_18, Constraints_19, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_29);
      }
      else
      {
        MR_Word Var_46;
        MR_Box conv5_STATE_VARIABLE_IO_29;

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Name_21));
        }
        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), Lang_5, TypeVarSet_15, InstVarSet_16, PredOrFunc_10, ExistQVars_17, Var_46, TypesAndModes_11, WithType_12, WithInst_13, MaybeDetism_14, Purity_18, Constraints_19, (MR_String) "", (MR_String) ",\n\t", (MR_String) "", ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_29);
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1523__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_format_fundep__1521__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
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
    func_1(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[14])), ((MR_Box) (Domain_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_16)), STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_17_17);
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
    func_3(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[14])), ((MR_Box) (Range_9)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_21)), STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_22_22);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_22_22, STATE_VARIABLE_U_12);
  }
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
parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(
  MR_Word Assertion_4)
{
  switch (Assertion_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_3_p_0((MR_String) "can_pass_as_mercury_type");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_3_p_0((MR_String) "stable");
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_3_p_0((MR_String) "word_aligned_pointer");
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(
  MR_Word Info_5,
  MR_Word Use_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Use_6, (MR_Integer) 0))));
    MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Use_6, (MR_Integer) 1))));

    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_9);
    parse_tree__parse_tree_out__mercury_output_module_decl_4_p_0((MR_String) "use_module", ModuleName_8);
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

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(
  MR_Word FIMSpec_4)
{
  {
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMSpec_4, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIMSpec_4, (MR_Integer) 1))));
    MR_Box conv0_STATE_VARIABLE_IO_12_12;

    mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_import_module(");
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), Lang_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
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
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[23]));
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
    MR_Word SrcItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 3))));
    MR_Word DirectIntItemBlocks_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 4))));
    MR_Word IndirectIntItemBlocks_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 5))));
    MR_Word OptItemBlocks_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 6))));
    MR_Word IntForOptItemBlocks_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 7))));
    MR_Box conv0_STATE_VARIABLE_IO_26_26;

    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    mercury__io__write_string_3_p_0((MR_String) "% The module version numbers.\n");
    mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[47]), ModuleVersionNumbers_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_26_26);
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
    MR_String Var_45;
    MR_String Var_47;
    MR_Box conv0_STATE_VARIABLE_IO_18_18;
    MR_Box conv1_STATE_VARIABLE_IO_20_20;
    MR_Box conv2_STATE_VARIABLE_IO_22_22;

    mercury__io__write_string_3_p_0((MR_String) ":- ioms_opt_imported(");
    Var_45 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_41);
    mercury__io__write_string_3_p_0(Var_45);
    Var_47 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_42);
    mercury__io__write_string_3_p_0(Var_47);
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
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[46]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22_22);
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

    succeeded = parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_opt_item_block__510__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_String Var_44;
    MR_String Var_46;
    MR_Box conv0_STATE_VARIABLE_IO_22_22;
    MR_Box conv1_STATE_VARIABLE_IO_24_24;

    mercury__io__write_string_3_p_0((MR_String) ":- oms_opt_imported(");
    Var_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_40);
    mercury__io__write_string_3_p_0(Var_44);
    Var_46 = parse_tree__file_kind__opt_file_kind_to_extension_1_f_0(OptFileKind_41);
    mercury__io__write_string_3_p_0(Var_46);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_6[12]));
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
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[45]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
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
      MR_String Var_47;
      MR_String Var_49;
      MR_Word ModuleName_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntSectionKind_9, (MR_Integer) 0))));
      MR_Word IntFileKind_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntSectionKind_9, (MR_Integer) 1))) & (MR_Integer) 3);

      mercury__io__write_string_3_p_0((MR_String) ":- ims_abstract_imported(");
      Var_47 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_70);
      mercury__io__write_string_3_p_0(Var_47);
      Var_49 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_71);
      mercury__io__write_string_3_p_0(Var_49);
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    else
    {
      MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntSectionKind_9, (MR_Integer) 0))));
      MR_Word IntFileKind_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSectionKind_9, (MR_Integer) 1))) >> 5)) & (MR_Integer) 3);
      MR_Word ImportLocn_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSectionKind_9, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
      MR_Word ImportedOrUsed_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSectionKind_9, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_String Var_61;
      MR_String Var_63;

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
      Var_61 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_41);
      mercury__io__write_string_3_p_0(Var_61);
      Var_63 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_42);
      mercury__io__write_string_3_p_0(Var_63);
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
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[44]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22_22);
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
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[43]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22_22);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_13);
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

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 63, &Verbose_29);
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

    conv14_HeadVar__2_118 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__365__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv12_HeadVar__2_110 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__363__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv10_HeadVar__2_102 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__361__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv8_HeadVar__2_96 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__359__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv6_HeadVar__2_88 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__357__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv4_HeadVar__2_80 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__355__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv2_HeadVar__2_72 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__353__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv0_HeadVar__2_63 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_trans_opt__351__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_34;
    MR_Word Var_38;
    MR_Word Var_42;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Box conv1_STATE_VARIABLE_IO_27_27;
    MR_Box conv3_STATE_VARIABLE_IO_31_31;
    MR_Box conv5_STATE_VARIABLE_IO_35_35;
    MR_Box conv7_STATE_VARIABLE_IO_39_39;
    MR_Box conv9_STATE_VARIABLE_IO_43_43;
    MR_Box conv11_STATE_VARIABLE_IO_47_47;
    MR_Box conv13_STATE_VARIABLE_IO_51_51;
    MR_Box conv15_STATE_VARIABLE_IO_19;

    Lang_17 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[18]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Lang_17));
    }
    Var_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[31]), Terms_10);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, Var_26, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27_27);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[19]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Lang_17));
    }
    Var_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[32]), Term2s_11);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, Var_30, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_31_31);
    Var_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[8]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[34]), Exceptions_12);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[33]), Var_34, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_35_35);
    Var_38 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[36]), Trailings_13);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[35]), Var_38, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_39_39);
    Var_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[38]), MMTablings_14);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[37]), Var_42, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_43_43);
    Var_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[40]), MMTablings_14);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[39]), Var_46, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_47_47);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[20]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_13));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Lang_17));
    }
    Var_50 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[11]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[41]), Sharings_15);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, Var_50, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_51_51);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[21]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0_15));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Lang_17));
    }
    Var_54 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[42]), Reuses_16);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, Var_54, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_19);
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

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 63, &Verbose_29);
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_35(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv33_HeadVar__2_250;

    conv33_HeadVar__2_250 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__341__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv33_HeadVar__2_250));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_34(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv31_HeadVar__2_242;

    conv31_HeadVar__2_242 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__339__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv31_HeadVar__2_242));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_32(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv29_HeadVar__2_234;

    conv29_HeadVar__2_234 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__337__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv29_HeadVar__2_234));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_30(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv27_HeadVar__2_228;

    conv27_HeadVar__2_228 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__335__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv27_HeadVar__2_228));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_28(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv25_HeadVar__2_220;

    conv25_HeadVar__2_220 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__333__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv25_HeadVar__2_220));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_26(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv23_HeadVar__2_212;

    conv23_HeadVar__2_212 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__331__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv23_HeadVar__2_212));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_24(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv21_HeadVar__2_204;

    conv21_HeadVar__2_204 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__329__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv21_HeadVar__2_204));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_22(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv19_HeadVar__2_196;

    conv19_HeadVar__2_196 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__327__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv19_HeadVar__2_196));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_20(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv17_HeadVar__2_188;

    conv17_HeadVar__2_188 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__325__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv17_HeadVar__2_188));
    return wrapper_arg_2;
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

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(((MR_Word) (wrapper_arg_1)));
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
    MR_Word conv15_HeadVar__2_180;

    conv15_HeadVar__2_180 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__322__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv15_HeadVar__2_180));
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
    MR_Word conv12_HeadVar__2_168;

    conv12_HeadVar__2_168 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__319__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_168));
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
    MR_Word conv10_HeadVar__2_160;

    conv10_HeadVar__2_160 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_parse_tree_plain_opt__317__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_160));
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_parse_tree_plain_opt__305__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word UsedModuleNames_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 2))));
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
    MR_Word PredMarkers_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 14))));
    MR_Word TypeSpecs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 15))));
    MR_Word UnusedArgs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 16))));
    MR_Word Terms_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 17))));
    MR_Word Term2s_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 18))));
    MR_Word Exceptions_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 19))));
    MR_Word Trailings_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 20))));
    MR_Word MMTablings_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 21))));
    MR_Word Sharings_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 22))));
    MR_Word Reuses_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 23))));
    MR_Word Lang_32;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_89;
    MR_Word Var_93;
    MR_Word Var_97;
    MR_Word Var_101;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Box conv0_STATE_VARIABLE_IO_41_41;
    MR_Box conv1_STATE_VARIABLE_IO_44_44;
    MR_Box conv2_STATE_VARIABLE_IO_46_46;
    MR_Box conv3_STATE_VARIABLE_IO_48_48;
    MR_Box conv4_STATE_VARIABLE_IO_50_50;
    MR_Box conv5_STATE_VARIABLE_IO_52_52;
    MR_Box conv6_STATE_VARIABLE_IO_54_54;
    MR_Box conv7_STATE_VARIABLE_IO_56_56;
    MR_Box conv8_STATE_VARIABLE_IO_58_58;
    MR_Box conv9_STATE_VARIABLE_IO_60_60;
    MR_Box conv11_STATE_VARIABLE_IO_63_63;
    MR_Box conv13_STATE_VARIABLE_IO_67_67;
    MR_Box conv14_STATE_VARIABLE_IO_71_71;
    MR_Box conv16_STATE_VARIABLE_IO_74_74;
    MR_Box conv18_STATE_VARIABLE_IO_78_78;
    MR_Box conv20_STATE_VARIABLE_IO_82_82;
    MR_Box conv22_STATE_VARIABLE_IO_86_86;
    MR_Box conv24_STATE_VARIABLE_IO_90_90;
    MR_Box conv26_STATE_VARIABLE_IO_94_94;
    MR_Box conv28_STATE_VARIABLE_IO_98_98;
    MR_Box conv30_STATE_VARIABLE_IO_102_102;
    MR_Box conv32_STATE_VARIABLE_IO_106_106;
    MR_Box conv34_STATE_VARIABLE_IO_34;

    Lang_32 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    mercury__set__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_11[0]), UsedModuleNames_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_41_41);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[8]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, TypeDefns_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_44_44);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[9]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, ForeignEnums_13, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_46_46);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[10]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, InstDefns_14, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_48_48);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[11]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, ModeDefns_15, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_50_50);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[12]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, TypeClasses_16, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_52_52);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[13]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, Instances_17, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_54_54);
    mercury__set__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[12]), FIMSpecs_11, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_56_56);
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[14]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_9));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, PredDecls_18, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_58_58);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[15]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_10));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, ModeDecls_19, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_60_60);
    Var_62 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[14]), PredMarkers_22);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[13]), Var_62, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_63_63);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_13));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (Lang_32));
    }
    Var_66 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[15]), TypeSpecs_23);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, Var_66, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_67_67);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[16]));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_15));
      MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, Clauses_20, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_71_71);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[17]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_16));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Lang_32));
    }
    Var_73 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[16]), ForeignProcs_21);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, Var_73, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_74_74);
    Var_77 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[18]), UnusedArgs_24);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[17]), Var_77, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_78_78);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[18]));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_20));
      MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (Lang_32));
    }
    Var_81 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[19]), Terms_25);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_80, Var_81, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_82_82);
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[19]));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_22));
      MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (Lang_32));
    }
    Var_85 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[20]), Term2s_26);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Var_85, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_86_86);
    Var_89 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[8]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[22]), Exceptions_27);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[21]), Var_89, ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_IO_90_90);
    Var_93 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[24]), Trailings_28);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[23]), Var_93, ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_IO_94_94);
    Var_97 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[26]), MMTablings_29);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[25]), Var_97, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_98_98);
    Var_101 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[28]), MMTablings_29);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[27]), Var_101, ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_IO_102_102);
    {
      Var_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[20]));
      MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_32));
      MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (Lang_32));
    }
    Var_105 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[11]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[29]), Sharings_30);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_104, Var_105, ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_IO_106_106);
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[21]));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_plain_opt_4_p_0_34));
      MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (Lang_32));
    }
    Var_109 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[30]), Reuses_31);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, Var_109, ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_IO_34);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_opt_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeOpt_8)
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

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 63, &Verbose_29);
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
            MR_Word OutputStream_65;
            MR_Word Var_64;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_65);
            parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(Info_31, ParseTreeOpt_8);
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
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_2(
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
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_item_use_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0(
  MR_Word Info_5,
  MR_Word ParseTree_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 0))));
    MR_Word Use_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 3))));
    MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 4))));
    MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 5))));
    MR_Word Var_21;
    MR_Box conv0_STATE_VARIABLE_IO_22_22;
    MR_Box conv1_STATE_VARIABLE_IO_24_24;

    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_parse_tree_opt_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, Use_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_22_22);
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[11]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_13);
  }
}

void MR_CALL 
parse_tree__parse_tree_out__output_parse_tree_int_5_p_0(
  MR_Word Globals_6,
  MR_String OutputFileName_7,
  MR_Word ParseTreeInt_8)
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

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 63, &Verbose_29);
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
            MR_Word OutputStream_65;
            MR_Word Var_64;

            mercury__io__write_string_3_p_0((MR_String) "% Writing output to ");
            mercury__io__write_string_3_p_0(OutputFileName_7);
            mercury__io__write_string_3_p_0((MR_String) "...");
            mercury__io__flush_output_2_p_0();
            mercury__io__set_output_stream_4_p_0(FileStream_28, &OutputStream_65);
            parse_tree__parse_tree_out__mercury_output_parse_tree_int_4_p_0(Info_31, ParseTreeInt_8);
            mercury__io__set_output_stream_4_p_0(OutputStream_65, &Var_64);
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
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 0))));
    MR_Word MaybeVersionNumbers_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 3))));
    MR_Word IntIncls_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 4))));
    MR_Word ImpIncls_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 5))));
    MR_Word IntAvails_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 6))));
    MR_Word ImpAvails_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 7))));
    MR_Word IntFIMs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 8))));
    MR_Word ImpFIMs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 9))));
    MR_Word IntItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 10))));
    MR_Word ImpItems_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_6, (MR_Integer) 11))));

    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    if (!((MaybeVersionNumbers_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word VersionNumbers_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVersionNumbers_11, (MR_Integer) 0))));

      parse_tree__parse_tree_out__mercury_output_module_version_numbers_4_p_0(ModuleName_8, VersionNumbers_20);
    }
    succeeded = (IntIncls_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (IntAvails_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (IntFIMs_16 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (IntItems_18 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (!(succeeded))
    {
      MR_Word IntItemBlock_21;

      {
        IntItemBlock_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IntItemBlock_21, 0) = ((MR_Box) (ModuleName_8));
        MR_hl_field(MR_mktag(0), IntItemBlock_21, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), IntItemBlock_21, 2) = ((MR_Box) (IntIncls_12));
        MR_hl_field(MR_mktag(0), IntItemBlock_21, 3) = ((MR_Box) (IntAvails_14));
        MR_hl_field(MR_mktag(0), IntItemBlock_21, 4) = ((MR_Box) (IntFIMs_16));
        MR_hl_field(MR_mktag(0), IntItemBlock_21, 5) = ((MR_Box) (IntItems_18));
      }
      parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(Info_5, IntItemBlock_21);
    }
    succeeded = (ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (ImpAvails_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ImpFIMs_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ImpItems_19 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (!(succeeded))
    {
      MR_Word ImpItemBlock_22;

      {
        ImpItemBlock_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImpItemBlock_22, 0) = ((MR_Box) (ModuleName_8));
        MR_hl_field(MR_mktag(0), ImpItemBlock_22, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ImpItemBlock_22, 2) = ((MR_Box) (ImpIncls_13));
        MR_hl_field(MR_mktag(0), ImpItemBlock_22, 3) = ((MR_Box) (ImpAvails_15));
        MR_hl_field(MR_mktag(0), ImpItemBlock_22, 4) = ((MR_Box) (ImpFIMs_17));
        MR_hl_field(MR_mktag(0), ImpItemBlock_22, 5) = ((MR_Box) (ImpItems_19));
      }
      parse_tree__parse_tree_out__mercury_output_raw_item_block_4_p_0(Info_5, ImpItemBlock_22);
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
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[10]), FIMs_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22_22);
    parse_tree__parse_tree_out__mercury_output_items_4_p_0(Info_5, Items_13);
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

      libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 63, &Verbose_29);
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
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[9]), Var_46, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_47_47);
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

    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    ModuleComponents_11 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), ModuleComponentsCord_10);
    parse_tree__parse_tree_out__mercury_output_module_components_5_p_0(Info_5, (MR_Word) ((MR_Unsigned) 0U), ModuleComponents_11);
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
            MR_Box conv0_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), ItemForeignEnum_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemForeignExportEnum_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_4_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), ItemForeignExportEnum_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ItemPromise_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_4_p_0(ItemPromise_17);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemTypeClass_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0(Info_5, ItemTypeClass_18);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ItemInstance_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_49_93_95_48_4_p_0(ItemInstance_19);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ItemInitialise_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
            MR_Word PredSymName_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInitialise_20, (MR_Integer) 0))));
            MR_Integer Arity_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInitialise_20, (MR_Integer) 1))));

            mercury__io__write_string_3_p_0((MR_String) ":- initialise ");
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(PredSymName_67);
            mercury__io__write_string_3_p_0((MR_String) "/");
            mercury__io__write_int_3_p_0(Arity_68);
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ItemFinalise_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
            MR_Word PredSymName_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFinalise_21, (MR_Integer) 0))));
            MR_Integer Arity_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemFinalise_21, (MR_Integer) 1))));

            mercury__io__write_string_3_p_0((MR_String) ":- finalise ");
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(PredSymName_49);
            mercury__io__write_string_3_p_0((MR_String) "/");
            mercury__io__write_int_3_p_0(Arity_50);
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ItemMutable_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_mutable_4_p_0(Info_5, ItemMutable_22);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ItemTypeRepn_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0(ItemTypeRepn_23);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ItemTypeDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out__mercury_output_item_type_defn_4_p_0(Info_5, ItemTypeDefn_9);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word ItemPragma_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_item_pragma_4_p_0(Info_5, ItemPragma_16);
          }
          break;
      }
      break;
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

    parse_tree__prog_out__write_sym_name_and_arity_3_p_0(((MR_Word) (wrapper_arg_1)));
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_type_repn__1743__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0(
  MR_Word ItemTypeRepn_6)
{
  {
    MR_Word TypeCtorSymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 0))));
    MR_Word ArgTVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 1))));
    MR_Word RepnInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 2))));
    MR_Word TVarSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 3))));

    mercury__io__write_string_3_p_0((MR_String) ":- type_representation(");
    parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(TypeCtorSymName_8);
    if ((ArgTVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) ", ");
    else
    {
      MR_Word Var_31;

      mercury__io__write_string_3_p_0((MR_String) "(");
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_10[1]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (parse_tree__parse_tree_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_105_116_101_109_95_116_121_112_101_95_114_101_112_110_95_95_91_49_93_95_48_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (TVarSet_11));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), ArgTVars_9, (MR_String) ", ", Var_31);
      mercury__io__write_string_3_p_0((MR_String) "), ");
    }
    switch (MR_tag((MR_Word) RepnInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(RepnInfo_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_3_p_0((MR_String) "is_direct_dummy");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) "is_notag");
            break;
          case (MR_Integer) 2:
            mercury__io__write_string_3_p_0((MR_String) "is_word_aligned_ptr");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer NumBits_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), RepnInfo_10, (MR_Integer) 0))));
          MR_Word FillKind_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), RepnInfo_10, (MR_Integer) 1))) & (MR_Integer) 7);
          MR_String FillKindStr_18;

          parse_tree__prog_data__fill_kind_string_2_p_0(FillKind_17, &FillKindStr_18);
          mercury__io__write_string_3_p_0((MR_String) "fits_in_n_bits(");
          mercury__io__write_int_3_p_0(NumBits_16);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          mercury__io__write_string_3_p_0(FillKindStr_18);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SymNameAndArities_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RepnInfo_10, (MR_Integer) 0))));

          mercury__io__write_string_3_p_0((MR_String) "has_direct_arg_functors([");
          mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), SymNameAndArities_20, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[8]));
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), RepnInfo_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word EqvType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RepnInfo_10, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "is_eqv_to(");
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_11, (MR_Integer) 2, EqvType_19);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DuRepn_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RepnInfo_10, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "du_repn(");
              parse_tree__parse_tree_out__mercury_output_du_type_repn_3_p_0(DuRepn_21);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MaybeCJCsERepn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RepnInfo_10, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "foreign_type_repn(");
              parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_3_p_0(MaybeCJCsERepn_22);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_du_type_repn_3_p_0(
  MR_Word DuRepn_4)
{
  switch (MR_tag((MR_Word) DuRepn_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DummyRepn_9 = (MR_Word) ((MR_Word) (DuRepn_4));
        MR_Word MaybeCJCsERepnOrEnum_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DummyRepn_9, (MR_Integer) 1))));
        MR_String FunctorName_89 = ((MR_String) ((MR_hl_field(MR_mktag(0), DummyRepn_9, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "direct_dummy(");
        mercury__term_io__quote_string_3_p_0(FunctorName_89);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
        parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_or_enum_3_p_0(MaybeCJCsERepnOrEnum_10);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word EnumRepn_11 = (MR_Word) (MR_body((MR_Word) (DuRepn_4), (MR_Integer) 1));
        MR_String Functor1_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), EnumRepn_11, (MR_Integer) 0))));
        MR_String Functor2_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), EnumRepn_11, (MR_Integer) 1))));
        MR_Word OtherFunctors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EnumRepn_11, (MR_Integer) 2))));
        MR_Word MaybeCJCsERepnOrEnum_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EnumRepn_11, (MR_Integer) 3))));

        mercury__io__write_string_3_p_0((MR_String) "enum(");
        parse_tree__parse_tree_out__mercury_output_enum_functor_name_3_p_0(Functor1_12);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
        parse_tree__parse_tree_out__mercury_output_enum_functor_name_3_p_0(Functor2_13);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
        if ((OtherFunctors_14 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_3_p_0((MR_String) "[]");
        else
        {
          MR_String HeadFunctor_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), OtherFunctors_14, (MR_Integer) 0))));
          MR_Word TailFunctors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherFunctors_14, (MR_Integer) 1))));

          mercury__io__write_string_3_p_0((MR_String) "[");
          parse_tree__parse_tree_out__mercury_output_enum_functor_names_4_p_0(HeadFunctor_15, TailFunctors_16);
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
        mercury__io__write_string_3_p_0((MR_String) ",\n");
        parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_or_enum_3_p_0(MaybeCJCsERepnOrEnum_90);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NotagRepn_6 = (MR_Word) (MR_body((MR_Word) (DuRepn_4), (MR_Integer) 2));
        MR_String FunctorName_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), NotagRepn_6, (MR_Integer) 0))));
        MR_Word MaybeCJCsERepn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NotagRepn_6, (MR_Integer) 1))));

        mercury__io__write_string_3_p_0((MR_String) "notag(");
        mercury__term_io__quote_string_3_p_0(FunctorName_7);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
        parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_3_p_0(MaybeCJCsERepn_8);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), DuRepn_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OnlyFunctor_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DuRepn_4, (MR_Integer) 1))));
            MR_Word OnlyFunctorArgs64_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OnlyFunctor_18, (MR_Integer) 1))));
            MR_Word OnlyFunctorArgs32_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OnlyFunctor_18, (MR_Integer) 2))));
            MR_String FunctorName_101 = ((MR_String) ((MR_hl_field(MR_mktag(0), OnlyFunctor_18, (MR_Integer) 0))));
            MR_Word MaybeCJCsERepn_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OnlyFunctor_18, (MR_Integer) 3))));

            mercury__io__write_string_3_p_0((MR_String) "gen_du_only_functor(");
            mercury__term_io__quote_string_3_p_0(FunctorName_101);
            mercury__io__write_string_3_p_0((MR_String) ",\n");
            parse_tree__parse_tree_out__mercury_output_only_functor_args_3_p_0(OnlyFunctorArgs64_19);
            mercury__io__write_string_3_p_0((MR_String) ",\n");
            parse_tree__parse_tree_out__mercury_output_only_functor_args_3_p_0(OnlyFunctorArgs32_20);
            mercury__io__write_string_3_p_0((MR_String) ",\n");
            parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_3_p_0(MaybeCJCsERepn_102);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MoreFunctors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DuRepn_4, (MR_Integer) 1))));
            MR_Word MaybeCJCsERepn_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MoreFunctors_17, (MR_Integer) 3))));
            MR_Word Functor1_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MoreFunctors_17, (MR_Integer) 0))));
            MR_Word Functor2_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MoreFunctors_17, (MR_Integer) 1))));
            MR_Word OtherFunctors_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MoreFunctors_17, (MR_Integer) 2))));

            mercury__io__write_string_3_p_0((MR_String) "gen_du(\n");
            parse_tree__parse_tree_out__mercury_output_gen_du_functor_4_p_0(Functor1_96, (MR_String) ",\n");
            parse_tree__parse_tree_out__mercury_output_gen_du_functor_4_p_0(Functor2_97, (MR_String) ",\n");
            if ((OtherFunctors_98 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_3_p_0((MR_String) "[],\n");
            else
            {
              MR_Word HeadFunctor_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherFunctors_98, (MR_Integer) 0))));
              MR_Word TailFunctors_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherFunctors_98, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "[");
              parse_tree__parse_tree_out__mercury_output_gen_du_functors_4_p_0(HeadFunctor_91, TailFunctors_92);
              mercury__io__write_string_3_p_0((MR_String) "],\n");
            }
            parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_3_p_0(MaybeCJCsERepn_95);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_only_functor_args_3_p_0(
  MR_Word OnlyFunctorArgs_4)
{
  if (((MR_tag((MR_Word) OnlyFunctorArgs_4)) == (MR_Integer) 0))
  {
    MR_Word LocalArgs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OnlyFunctorArgs_4, (MR_Integer) 0))));
    MR_Word HeadLocalArg_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalArgs_6, (MR_Integer) 0))));
    MR_Word TailLocalArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalArgs_6, (MR_Integer) 1))));

    mercury__io__write_string_3_p_0((MR_String) "local_args([");
    parse_tree__parse_tree_out__mercury_output_only_functor_local_args_4_p_0(HeadLocalArg_7, TailLocalArgs_8);
    mercury__io__write_string_3_p_0((MR_String) "])");
  }
  else
  {
    MR_Word RemoteArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OnlyFunctorArgs_4, (MR_Integer) 0))));
    MR_Word HeadRemoteArg_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteArgs_9, (MR_Integer) 0))));
    MR_Word TailRemoteArgs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteArgs_9, (MR_Integer) 1))));

    mercury__io__write_string_3_p_0((MR_String) "remote_args([");
    parse_tree__parse_tree_out__mercury_output_only_functor_remote_args_4_p_0(HeadRemoteArg_10, TailRemoteArgs_11);
    mercury__io__write_string_3_p_0((MR_String) "])");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_only_functor_remote_args_4_p_0(
  MR_Word RemoteArg_5,
  MR_Word RemoteArgs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out__mercury_output_arg_pos_size_3_p_0(RemoteArg_5);
    if (!((RemoteArgs_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadRemoteArg_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgs_6, (MR_Integer) 0))));
      MR_Word TailRemoteArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgs_6, (MR_Integer) 1))));
      MR_Word next_value_of_RemoteArg_5;
      MR_Word next_value_of_RemoteArgs_6;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_RemoteArg_5 = HeadRemoteArg_8;
      next_value_of_RemoteArgs_6 = TailRemoteArgs_9;
      RemoteArg_5 = next_value_of_RemoteArg_5;
      RemoteArgs_6 = next_value_of_RemoteArgs_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_only_functor_local_args_4_p_0(
  MR_Word LocalArg_5,
  MR_Word LocalArgs_6)
{
  while (MR_TRUE)
  {
    MR_Unsigned Shift_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalArg_5, (MR_Integer) 0))));
    MR_Word FillKindSize_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalArg_5, (MR_Integer) 1))));
    MR_Integer Var_26;
    MR_String Var_29;
    MR_String Var_34;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_26 = mercury__uint__cast_to_int_1_f_0(Shift_20);
    switch (MR_tag((MR_Word) FillKindSize_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(FillKindSize_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_29 = (MR_String) "int8";
            break;
          case (MR_Integer) 1:
            Var_29 = (MR_String) "int16";
            break;
          case (MR_Integer) 2:
            Var_29 = (MR_String) "int32";
            break;
          case (MR_Integer) 3:
            Var_29 = (MR_String) "uint8";
            break;
          case (MR_Integer) 4:
            Var_29 = (MR_String) "uint16";
            break;
          case (MR_Integer) 5:
            Var_29 = (MR_String) "uint32";
            break;
          case (MR_Integer) 6:
            Var_29 = (MR_String) "char21";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned NumBits_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), FillKindSize_21, (MR_Integer) 0))));
          MR_Integer Var_51;
          MR_String Var_54;
          MR_String Var_61;

          Var_51 = mercury__uint__cast_to_int_1_f_0(NumBits_47);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Var_51, &Var_54);
          Var_61 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) ")");
          Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", Var_61);
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "local(");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Var_26, &Var_34);
    mercury__io__write_string_3_p_0(Var_34);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_string_3_p_0(Var_29);
    mercury__io__write_string_3_p_0((MR_String) ")");
    if (!((LocalArgs_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadLocalArg_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgs_6, (MR_Integer) 0))));
      MR_Word TailLocalArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgs_6, (MR_Integer) 1))));
      MR_Word next_value_of_LocalArg_5;
      MR_Word next_value_of_LocalArgs_6;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_LocalArg_5 = HeadLocalArg_8;
      next_value_of_LocalArgs_6 = TailLocalArgs_9;
      LocalArg_5 = next_value_of_LocalArg_5;
      LocalArgs_6 = next_value_of_LocalArgs_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_gen_du_functors_4_p_0(
  MR_Word Functor_5,
  MR_Word Functors_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Functors_6 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__parse_tree_out__mercury_output_gen_du_functor_4_p_0(Functor_5, (MR_String) "");
    else
    {
      MR_Word HeadFunctor_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functors_6, (MR_Integer) 0))));
      MR_Word TailFunctors_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functors_6, (MR_Integer) 1))));
      MR_Word next_value_of_Functor_5;
      MR_Word next_value_of_Functors_6;

      parse_tree__parse_tree_out__mercury_output_gen_du_functor_4_p_0(Functor_5, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_Functor_5 = HeadFunctor_8;
      next_value_of_Functors_6 = TailFunctors_9;
      Functor_5 = next_value_of_Functor_5;
      Functors_6 = next_value_of_Functors_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_gen_du_functor_4_p_0(
  MR_Word Functor_5,
  MR_String Suffix_6)
{
  if (((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 0))
  {
    MR_String FunctorName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_5, (MR_Integer) 0))));
    MR_Word SectagSize64_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Functor_5, (MR_Integer) 1))));
    MR_Word SectagSize32_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Functor_5, (MR_Integer) 2))));

    mercury__io__write_string_3_p_0((MR_String) "constant_functor(");
    mercury__term_io__quote_string_3_p_0(FunctorName_8);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if ((SectagSize64_9 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "sectag_rest_of_word");
    else
    {
      MR_Unsigned NumBits_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SectagSize64_9, (MR_Integer) 0))));
      MR_Integer Var_69;
      MR_String Var_76;

      Var_69 = mercury__uint__cast_to_int_1_f_0(NumBits_64);
      mercury__io__write_string_3_p_0((MR_String) "sectag_bits(");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Var_69, &Var_76);
      mercury__io__write_string_3_p_0(Var_76);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__parse_tree_out__mercury_output_sectag_size_3_p_0(SectagSize32_10);
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__write_string_3_p_0(Suffix_6);
  }
  else
  {
    MR_Word Tags64_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functor_5, (MR_Integer) 1))));
    MR_Word Tags32_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functor_5, (MR_Integer) 2))));
    MR_Word Args64_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functor_5, (MR_Integer) 3))));
    MR_Word Args32_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functor_5, (MR_Integer) 4))));
    MR_Word HeadArg64_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Args64_13, (MR_Integer) 0))));
    MR_Word TailArgs64_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Args64_13, (MR_Integer) 1))));
    MR_Word HeadArg32_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Args32_14, (MR_Integer) 0))));
    MR_Word TailArgs32_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Args32_14, (MR_Integer) 1))));
    MR_String FunctorName_55 = ((MR_String) ((MR_hl_field(MR_mktag(1), Functor_5, (MR_Integer) 0))));

    mercury__io__write_string_3_p_0((MR_String) "nonconstant_functor(");
    mercury__term_io__quote_string_3_p_0(FunctorName_55);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__parse_tree_out__mercury_output_ptag_sectag_3_p_0(Tags64_11);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__parse_tree_out__mercury_output_ptag_sectag_3_p_0(Tags32_12);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__parse_tree_out__mercury_output_maybe_direct_args_4_p_0(HeadArg64_15, TailArgs64_16);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__parse_tree_out__mercury_output_maybe_direct_args_4_p_0(HeadArg32_17, TailArgs32_18);
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__write_string_3_p_0(Suffix_6);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_sectag_size_3_p_0(
  MR_Word SectagSize_4)
{
  if ((SectagSize_4 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_3_p_0((MR_String) "sectag_rest_of_word");
  else
  {
    MR_Unsigned NumBits_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SectagSize_4, (MR_Integer) 0))));
    MR_Integer Var_13;
    MR_String Var_20;

    Var_13 = mercury__uint__cast_to_int_1_f_0(NumBits_6);
    mercury__io__write_string_3_p_0((MR_String) "sectag_bits(");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Var_13, &Var_20);
    mercury__io__write_string_3_p_0(Var_20);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_ptag_sectag_3_p_0(
  MR_Word PtagSectag_4)
{
  {
    MR_Unsigned PtagUint_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PtagSectag_4, (MR_Integer) 0))));
    MR_Word MaybeSectag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagSectag_4, (MR_Integer) 1))));
    MR_Integer Ptag_8;

    Ptag_8 = mercury__uint__cast_to_int_1_f_0(PtagUint_6);
    switch (MR_tag((MR_Word) MaybeSectag_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_167;

          mercury__io__write_string_3_p_0((MR_String) "ptag_only(");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Ptag_8, &Var_167);
          mercury__io__write_string_3_p_0(Var_167);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned SectagUint_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeSectag_7, (MR_Integer) 0))));
          MR_Word SectagSize_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSectag_7, (MR_Integer) 1))));
          MR_Integer Sectag_12;

          Sectag_12 = mercury__uint__cast_to_int_1_f_0(SectagUint_9);
          if ((SectagSize_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_181;
            MR_String Var_191;

            mercury__io__write_string_3_p_0((MR_String) "ptag_");
            mercury__io__write_string_3_p_0((MR_String) "local");
            mercury__io__write_string_3_p_0((MR_String) "_sectag(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Ptag_8, &Var_181);
            mercury__io__write_string_3_p_0(Var_181);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Sectag_12, &Var_191);
            mercury__io__write_string_3_p_0(Var_191);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          else
          {
            MR_Unsigned NumBitsUint_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SectagSize_10, (MR_Integer) 0))));
            MR_Integer NumBits_14;
            MR_String Var_205;
            MR_String Var_215;
            MR_String Var_225;

            NumBits_14 = mercury__uint__cast_to_int_1_f_0(NumBitsUint_13);
            mercury__io__write_string_3_p_0((MR_String) "ptag_");
            mercury__io__write_string_3_p_0((MR_String) "local");
            mercury__io__write_string_3_p_0((MR_String) "_sectag_bits(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Ptag_8, &Var_205);
            mercury__io__write_string_3_p_0(Var_205);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Sectag_12, &Var_215);
            mercury__io__write_string_3_p_0(Var_215);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), NumBits_14, &Var_225);
            mercury__io__write_string_3_p_0(Var_225);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned SectagUint_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), MaybeSectag_7, (MR_Integer) 0))));
          MR_Word SectagSize_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeSectag_7, (MR_Integer) 1))));
          MR_Integer Sectag_85;

          Sectag_85 = mercury__uint__cast_to_int_1_f_0(SectagUint_82);
          if ((SectagSize_83 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_112;
            MR_String Var_122;

            mercury__io__write_string_3_p_0((MR_String) "ptag_");
            mercury__io__write_string_3_p_0((MR_String) "remote");
            mercury__io__write_string_3_p_0((MR_String) "_sectag(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Ptag_8, &Var_112);
            mercury__io__write_string_3_p_0(Var_112);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Sectag_85, &Var_122);
            mercury__io__write_string_3_p_0(Var_122);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          else
          {
            MR_Unsigned NumBitsUint_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SectagSize_83, (MR_Integer) 0))));
            MR_Integer NumBits_43;
            MR_String Var_136;
            MR_String Var_146;
            MR_String Var_156;

            NumBits_43 = mercury__uint__cast_to_int_1_f_0(NumBitsUint_42);
            mercury__io__write_string_3_p_0((MR_String) "ptag_");
            mercury__io__write_string_3_p_0((MR_String) "remote");
            mercury__io__write_string_3_p_0((MR_String) "_sectag_bits(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Ptag_8, &Var_136);
            mercury__io__write_string_3_p_0(Var_136);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Sectag_85, &Var_146);
            mercury__io__write_string_3_p_0(Var_146);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), NumBits_43, &Var_156);
            mercury__io__write_string_3_p_0(Var_156);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_maybe_direct_args_4_p_0(
  MR_Word Arg_5,
  MR_Word Args_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Arg_5)) == (MR_Integer) 1))
    {
      MR_Unsigned Ptag_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Arg_5, (MR_Integer) 0))));
      MR_Integer Var_23;
      MR_String Var_31;

      Var_23 = mercury__uint__cast_to_int_1_f_0(Ptag_8);
      mercury__io__write_string_3_p_0((MR_String) "direct_arg(");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Var_23, &Var_31);
      mercury__io__write_string_3_p_0(Var_31);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
    {
      MR_Word ArgPosSize_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_5, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "nondirect_arg(");
      parse_tree__parse_tree_out__mercury_output_arg_pos_size_3_p_0(ArgPosSize_9);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    if (!((Args_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadArg_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0))));
      MR_Word TailArgs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1))));
      MR_Word next_value_of_Arg_5;
      MR_Word next_value_of_Args_6;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_Arg_5 = HeadArg_10;
      next_value_of_Args_6 = TailArgs_11;
      Arg_5 = next_value_of_Arg_5;
      Args_6 = next_value_of_Args_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_arg_pos_size_3_p_0(
  MR_Word ArgPosSize_4)
{
  switch (MR_tag((MR_Word) ArgPosSize_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_3_p_0((MR_String) "none_nowhere");
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgOnlyOffset_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosSize_4, (MR_Integer) 0))));
        MR_Word CellOffset_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosSize_4, (MR_Integer) 1))));
        MR_Integer ArgOnlyOffsetInt_8 = (MR_Integer) (ArgOnlyOffset_6);
        MR_Integer CellOffsetInt_9 = (MR_Integer) (CellOffset_7);
        MR_String Var_188;
        MR_String Var_198;

        mercury__io__write_string_3_p_0((MR_String) "full(");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), ArgOnlyOffsetInt_8, &Var_188);
        mercury__io__write_string_3_p_0(Var_188);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), CellOffsetInt_9, &Var_198);
        mercury__io__write_string_3_p_0(Var_198);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DoubleKind_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ArgPosSize_4, (MR_Integer) 2))) & (MR_Integer) 3);
        MR_String DoubleKindStr_11;
        MR_Word ArgOnlyOffset_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosSize_4, (MR_Integer) 0))));
        MR_Word CellOffset_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosSize_4, (MR_Integer) 1))));
        MR_Integer ArgOnlyOffsetInt_59 = (MR_Integer) (ArgOnlyOffset_57);
        MR_Integer CellOffsetInt_60 = (MR_Integer) (CellOffset_58);
        MR_String Var_209;
        MR_String Var_219;

        parse_tree__prog_data__double_word_kind_string_2_p_0(DoubleKind_10, &DoubleKindStr_11);
        mercury__io__write_string_3_p_0((MR_String) "double(");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), ArgOnlyOffsetInt_59, &Var_209);
        mercury__io__write_string_3_p_0(Var_209);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), CellOffsetInt_60, &Var_219);
        mercury__io__write_string_3_p_0(Var_219);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__io__write_string_3_p_0(DoubleKindStr_11);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Unsigned Shift_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 3))));
            MR_Word FillKindSize_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 4))));
            MR_Integer Var_36;
            MR_String Var_39;
            MR_Word ArgOnlyOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 1))));
            MR_Word CellOffset_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 2))));
            MR_Integer ArgOnlyOffsetInt_63 = (MR_Integer) (ArgOnlyOffset_61);
            MR_Integer CellOffsetInt_64 = (MR_Integer) (CellOffset_62);
            MR_String Var_133;
            MR_String Var_143;
            MR_String Var_153;

            Var_36 = mercury__uint__cast_to_int_1_f_0(Shift_12);
            Var_39 = parse_tree__parse_tree_out__fill_kind_size_to_string_1_f_0(FillKindSize_13);
            mercury__io__write_string_3_p_0((MR_String) "partial_");
            mercury__io__write_string_3_p_0((MR_String) "first");
            mercury__io__write_string_3_p_0((MR_String) "(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), ArgOnlyOffsetInt_63, &Var_133);
            mercury__io__write_string_3_p_0(Var_133);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), CellOffsetInt_64, &Var_143);
            mercury__io__write_string_3_p_0(Var_143);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Var_36, &Var_153);
            mercury__io__write_string_3_p_0(Var_153);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__io__write_string_3_p_0(Var_39);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Unsigned Shift_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 3))));
            MR_Word FillKindSize_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 4))));
            MR_Integer Var_81;
            MR_String Var_84;
            MR_Word ArgOnlyOffset_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 1))));
            MR_Word CellOffset_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 2))));
            MR_Integer ArgOnlyOffsetInt_88 = (MR_Integer) (ArgOnlyOffset_86);
            MR_Integer CellOffsetInt_89 = (MR_Integer) (CellOffset_87);
            MR_String Var_96;
            MR_String Var_106;
            MR_String Var_116;

            Var_81 = mercury__uint__cast_to_int_1_f_0(Shift_69);
            Var_84 = parse_tree__parse_tree_out__fill_kind_size_to_string_1_f_0(FillKindSize_70);
            mercury__io__write_string_3_p_0((MR_String) "partial_");
            mercury__io__write_string_3_p_0((MR_String) "shifted");
            mercury__io__write_string_3_p_0((MR_String) "(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), ArgOnlyOffsetInt_88, &Var_96);
            mercury__io__write_string_3_p_0(Var_96);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), CellOffsetInt_89, &Var_106);
            mercury__io__write_string_3_p_0(Var_106);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Var_81, &Var_116);
            mercury__io__write_string_3_p_0(Var_116);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__io__write_string_3_p_0(Var_84);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgOnlyOffset_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 1))));
            MR_Word CellOffset_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosSize_4, (MR_Integer) 2))));
            MR_Integer ArgOnlyOffsetInt_67 = (MR_Integer) (ArgOnlyOffset_65);
            MR_Integer CellOffsetInt_68 = (MR_Integer) (CellOffset_66);
            MR_String Var_167;
            MR_String Var_177;

            mercury__io__write_string_3_p_0((MR_String) "none_shifted(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), ArgOnlyOffsetInt_67, &Var_167);
            mercury__io__write_string_3_p_0(Var_167);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), CellOffsetInt_68, &Var_177);
            mercury__io__write_string_3_p_0(Var_177);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
      break;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out__fill_kind_size_to_string_1_f_0(
  MR_Word FillKindSize_3)
{
  {
    MR_String Str_4;

    switch (MR_tag((MR_Word) FillKindSize_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(FillKindSize_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_4 = (MR_String) "int8";
            break;
          case (MR_Integer) 1:
            Str_4 = (MR_String) "int16";
            break;
          case (MR_Integer) 2:
            Str_4 = (MR_String) "int32";
            break;
          case (MR_Integer) 3:
            Str_4 = (MR_String) "uint8";
            break;
          case (MR_Integer) 4:
            Str_4 = (MR_String) "uint16";
            break;
          case (MR_Integer) 5:
            Str_4 = (MR_String) "uint32";
            break;
          case (MR_Integer) 6:
            Str_4 = (MR_String) "char21";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned NumBits_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), FillKindSize_3, (MR_Integer) 0))));
          MR_Integer Var_9;
          MR_String Var_12;
          MR_String Var_19;

          Var_9 = mercury__uint__cast_to_int_1_f_0(NumBits_5);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_7[1]), Var_9, &Var_12);
          Var_19 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) ")");
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", Var_19);
        }
        break;
    }
    return Str_4;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_3_p_0(
  MR_Word MaybeCJCsERepn_4)
{
  {
    MR_Word MaybeRepnC_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepn_4, (MR_Integer) 0))));
    MR_Word MaybeRepnJava_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepn_4, (MR_Integer) 1))));
    MR_Word MaybeRepnCsharp_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepn_4, (MR_Integer) 2))));
    MR_Word MaybeRepnErlang_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepn_4, (MR_Integer) 3))));
    MR_String STATE_VARIABLE_Separator_22_22;
    MR_String STATE_VARIABLE_Separator_26_26;
    MR_String STATE_VARIABLE_Separator_30_30;

    mercury__io__write_string_3_p_0((MR_String) "[");
    if ((MaybeRepnC_6 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Separator_22_22 = (MR_String) "";
    else
    {
      MR_Word RepnC_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnC_6, (MR_Integer) 0))));
      MR_String ForeignTypeName_41 = ((MR_String) ((MR_hl_field(MR_mktag(0), RepnC_11, (MR_Integer) 0))));
      MR_Word ForeignTypeAssertions_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnC_11, (MR_Integer) 1))));
      MR_Word Assertions_43 = (MR_Word) (ForeignTypeAssertions_42);
      MR_Word AssertionsList_44;

      mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_43, &AssertionsList_44);
      mercury__io__write_string_3_p_0((MR_String) "c");
      mercury__io__write_string_3_p_0((MR_String) "(\"");
      mercury__io__write_string_3_p_0(ForeignTypeName_41);
      mercury__io__write_string_3_p_0((MR_String) "\", [");
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), AssertionsList_44, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[7]));
      mercury__io__write_string_3_p_0((MR_String) "])");
      STATE_VARIABLE_Separator_22_22 = (MR_String) ",\n";
    }
    if ((MaybeRepnJava_7 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Separator_26_26 = STATE_VARIABLE_Separator_22_22;
    else
    {
      MR_Word RepnJava_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnJava_7, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0(STATE_VARIABLE_Separator_22_22);
      parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_4_p_0((MR_Integer) 2, RepnJava_12);
      STATE_VARIABLE_Separator_26_26 = (MR_String) ",\n";
    }
    if ((MaybeRepnCsharp_8 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Separator_30_30 = STATE_VARIABLE_Separator_26_26;
    else
    {
      MR_Word RepnCsharp_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnCsharp_8, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0(STATE_VARIABLE_Separator_26_26);
      parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_4_p_0((MR_Integer) 1, RepnCsharp_13);
      STATE_VARIABLE_Separator_30_30 = (MR_String) ",\n";
    }
    if (!((MaybeRepnErlang_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word RepnErlang_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnErlang_9, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0(STATE_VARIABLE_Separator_30_30);
      parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_4_p_0((MR_Integer) 3, RepnErlang_14);
    }
    mercury__io__write_string_3_p_0((MR_String) "]");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_4_p_0(
  MR_Word Lang_5,
  MR_Word TypeRepn_6)
{
  {
    MR_String ForeignTypeName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeRepn_6, (MR_Integer) 0))));
    MR_Word ForeignTypeAssertions_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepn_6, (MR_Integer) 1))));
    MR_Word Assertions_10 = (MR_Word) (ForeignTypeAssertions_9);
    MR_Word AssertionsList_11;
    MR_String LangStr_12;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_10, &AssertionsList_11);
    LangStr_12 = ((&parse_tree__parse_tree_out_vector_common_5[8 + Lang_5]))->parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0;
    mercury__io__write_string_3_p_0(LangStr_12);
    mercury__io__write_string_3_p_0((MR_String) "(\"");
    mercury__io__write_string_3_p_0(ForeignTypeName_8);
    mercury__io__write_string_3_p_0((MR_String) "\", [");
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), AssertionsList_11, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[6]));
    mercury__io__write_string_3_p_0((MR_String) "])");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_c_j_cs_e_repn_or_enum_3_p_0(
  MR_Word MaybeCJCsERepnOrEnum_4)
{
  {
    MR_Word MaybeRepnOrEnumC_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepnOrEnum_4, (MR_Integer) 0))));
    MR_Word MaybeRepnOrEnumJava_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepnOrEnum_4, (MR_Integer) 1))));
    MR_Word MaybeRepnOrEnumCsharp_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepnOrEnum_4, (MR_Integer) 2))));
    MR_Word MaybeRepnOrEnumErlang_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepnOrEnum_4, (MR_Integer) 3))));
    MR_String STATE_VARIABLE_Separator_22_22;
    MR_String STATE_VARIABLE_Separator_26_26;
    MR_String STATE_VARIABLE_Separator_30_30;

    mercury__io__write_string_3_p_0((MR_String) "[");
    if ((MaybeRepnOrEnumC_6 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Separator_22_22 = (MR_String) "";
    else
    {
      MR_Word RepnOrEnumC_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnOrEnumC_6, (MR_Integer) 0))));

      parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_or_enum_4_p_0((MR_Integer) 0, RepnOrEnumC_11);
      STATE_VARIABLE_Separator_22_22 = (MR_String) ",\n";
    }
    if ((MaybeRepnOrEnumJava_7 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Separator_26_26 = STATE_VARIABLE_Separator_22_22;
    else
    {
      MR_Word RepnOrEnumJava_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnOrEnumJava_7, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0(STATE_VARIABLE_Separator_22_22);
      parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_or_enum_4_p_0((MR_Integer) 2, RepnOrEnumJava_12);
      STATE_VARIABLE_Separator_26_26 = (MR_String) ",\n";
    }
    if ((MaybeRepnOrEnumCsharp_8 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Separator_30_30 = STATE_VARIABLE_Separator_26_26;
    else
    {
      MR_Word RepnOrEnumCsharp_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnOrEnumCsharp_8, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0(STATE_VARIABLE_Separator_26_26);
      parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_or_enum_4_p_0((MR_Integer) 1, RepnOrEnumCsharp_13);
      STATE_VARIABLE_Separator_30_30 = (MR_String) ",\n";
    }
    if (!((MaybeRepnOrEnumErlang_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word RepnOrEnumErlang_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnOrEnumErlang_9, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0(STATE_VARIABLE_Separator_30_30);
      parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_or_enum_4_p_0((MR_Integer) 3, RepnOrEnumErlang_14);
    }
    mercury__io__write_string_3_p_0((MR_String) "]");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_or_enum_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_foreign_lang_type_repn_or_enum_4_p_0(
  MR_Word Lang_5,
  MR_Word TypeRepnOrEnum_6)
{
  if (((MR_tag((MR_Word) TypeRepnOrEnum_6)) == (MR_Integer) 1))
  {
    MR_Word Enums_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeRepnOrEnum_6, (MR_Integer) 0))));
    MR_String HeadEnum_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Enums_9, (MR_Integer) 0))));
    MR_Word TailEnums_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enums_9, (MR_Integer) 1))));
    MR_String LangStr_12;

    libs__globals__simple_foreign_language_string_2_p_0(Lang_5, &LangStr_12);
    mercury__io__write_string_3_p_0((MR_String) "foreign_enum(");
    mercury__io__write_string_3_p_0(LangStr_12);
    mercury__io__write_string_3_p_0((MR_String) ", [");
    parse_tree__parse_tree_out__mercury_output_enum_functor_names_4_p_0(HeadEnum_10, TailEnums_11);
    mercury__io__write_string_3_p_0((MR_String) "])");
  }
  else
  {
    MR_Word TypeRepn_8 = (MR_Word) ((MR_Word) (TypeRepnOrEnum_6));
    MR_String ForeignTypeName_37;
    MR_Word ForeignTypeAssertions_38;
    MR_Word Assertions_39;
    MR_Word AssertionsList_40;
    MR_String LangStr_41;

    mercury__io__write_string_3_p_0((MR_String) "foreign_type(");
    ForeignTypeName_37 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeRepn_8, (MR_Integer) 0))));
    ForeignTypeAssertions_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepn_8, (MR_Integer) 1))));
    Assertions_39 = (MR_Word) (ForeignTypeAssertions_38);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_39, &AssertionsList_40);
    LangStr_41 = ((&parse_tree__parse_tree_out_vector_common_5[4 + Lang_5]))->parse_tree__parse_tree_out__vector_common_type_5_0__vct_5_f_0;
    mercury__io__write_string_3_p_0(LangStr_41);
    mercury__io__write_string_3_p_0((MR_String) "(\"");
    mercury__io__write_string_3_p_0(ForeignTypeName_37);
    mercury__io__write_string_3_p_0((MR_String) "\", [");
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), AssertionsList_40, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[5]));
    mercury__io__write_string_3_p_0((MR_String) "])");
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_enum_functor_names_4_p_0(
  MR_String FunctorName_5,
  MR_Word FunctorNames_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__term_io__quote_string_3_p_0(FunctorName_5);
    if (!((FunctorNames_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String HeadFunctorName_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), FunctorNames_6, (MR_Integer) 0))));
      MR_Word TailFunctorNames_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorNames_6, (MR_Integer) 1))));
      MR_String next_value_of_FunctorName_5;
      MR_Word next_value_of_FunctorNames_6;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_FunctorName_5 = HeadFunctorName_8;
      next_value_of_FunctorNames_6 = TailFunctorNames_9;
      FunctorName_5 = next_value_of_FunctorName_5;
      FunctorNames_6 = next_value_of_FunctorNames_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_enum_functor_name_3_p_0(
  MR_String FunctorName_4)
{
  mercury__term_io__quote_string_3_p_0(FunctorName_4);
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
    parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), VarSet_13, (MR_Integer) 0, (MR_String) "<=", Constraints_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_37_37);
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

            Var_32 = parse_tree__prog_item__goal_get_context_1_f_0(Goal0_9);
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
    Values_15 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[0]), OoMValues_10);
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_item_typeclass__1465__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), Vars_9, (MR_String) ", ", Var_30);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    succeeded = (FunDeps_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Constraints_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
    {
      MR_Word Var_66;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_U_19_64;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_22_67;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv9_STATE_VARIABLE_IO_38_38;

      func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]))), ((MR_Box) ((MR_String) " <= (")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_19_64);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[1]));
        MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (VarSet_13));
        MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 27))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)), ((MR_Box) (FunDeps_11)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_66)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_22_67);
      if (!((Constraints_10 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Var_71;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_U_27_72;

        if (!((FunDeps_11 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv5_STATE_VARIABLE_U_24_69;

          func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_24_69);
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_typeclass_4_p_0_3));
          MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_1[1]));
          MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (VarSet_13));
          MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 27))));
        func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]))), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (Constraints_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_71)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_27_72);
      }
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_38_38);
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
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), Lang_23, TypeVarSet_15, InstVarSet_16, ExistQVars_17, PredName_22, FuncTypesAndModes_24, RetTypeAndMode_25, MaybeDetism_13, Purity_18, Constraints_19, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27);
    }
    else
    {
      MR_Box conv2_STATE_VARIABLE_IO_27;

      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), Lang_23, TypeVarSet_15, InstVarSet_16, PredOrFunc_9, ExistQVars_17, PredName_22, TypesAndModes_10, WithType_11, WithInst_12, MaybeDetism_13, Purity_18, Constraints_19, (MR_String) ":- ", (MR_String) ".\n", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_27);
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

    conv8_LambdaHeadVar__2_19 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1246__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    conv2_LambdaHeadVar__2_19 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_format_mode_defn_head__1246__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_U_29_41;
      MR_Box conv3_STATE_VARIABLE_U_30_42;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv5_STATE_VARIABLE_IO_17;

      func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]))), ((MR_Box) ((MR_String) ":- abstract_mode((")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_29_41);
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Context_12));
      }
      ArgTerms_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), Var_55, InstParams_9);
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), UnQualSymName_14, ArgTerms_52, Context_12, &ModeTerm_54);
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), VarSet_11, (MR_Integer) 0, ModeTerm_54, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_30_42);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")).\n")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_17);
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
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]))), ((MR_Box) ((MR_String) ":- mode (")), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_21_33);
      {
        Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&parse_tree__parse_tree_out_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (parse_tree__parse_tree_out__mercury_output_item_mode_defn_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Context_12));
      }
      ArgTerms_71 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), Var_74, InstParams_9);
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), UnQualSymName_14, ArgTerms_71, Context_12, &ModeTerm_73);
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), VarSet_11, (MR_Integer) 0, ModeTerm_73, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_22_34);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]))), ((MR_Box) ((MR_String) ") == ")), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_24_36);
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), Lang_15, VarSet_11, Mode_30, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_25_37);
      func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]))), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_17);
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

    conv1_LambdaHeadVar__2_30 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_inst_defn__1150__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    conv0_LambdaHeadVar__2_18 = parse_tree__parse_tree_out__IntroducedFrom__func__is_builtin_inst_name__1196__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
      TypeInfo_27_84 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]);
      TypeInfo_28_85 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[18]);
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
    ArgTerms_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[16]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[17]), Var_28, InstParams_9);
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

    parse_tree__parse_tree_out__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) (wrapper_arg_1)));
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

    conv0_LambdaHeadVar__2_48 = parse_tree__parse_tree_out__IntroducedFrom__func__mercury_output_item_type_defn__732__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    Args_15 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[14]), (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[15]), Var_46, TypeParams_9);
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
    TypeClassInfo_for_output_51 = (MR_Word) (&parse_tree__parse_tree_out_scalar_common_1[1]);
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

    parse_tree__parse_tree_out__IntroducedFrom__pred__mercury_output_direct_arg_functors__1109__1_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out__mercury_output_direct_arg_functors_3_p_0(
  MR_Word Ctors_4)
{
  mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), Ctors_4, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_scalar_common_2[1]));
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
