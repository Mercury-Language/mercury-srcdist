/*
** Automatically generated from `grab_modules.m'
** by the Mercury compiler,
** version rotd-2025-07-30
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


// :- module parse_tree.grab_modules.
// :- implementation.

/*
INIT mercury__parse_tree__grab_modules__init
ENDINIT
*/

#include "parse_tree.grab_modules.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.check_import_accessibility.mih"
#include "parse_tree.convert_import_use.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_1;

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_maybe_opt_file_error_0[2];

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_maybe_opt_file_error_0[2];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_maybe_opt_file_error_0[2];

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_1;

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_read_decision_0[2];

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_read_decision_0[2];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_read_decision_0[2];

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__1725__1_4_p_0(
  MR_Word Stream_5,
  MR_String HeadVar__2_18);

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____read_decision_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleNames_6);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_trans_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_plain_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10);

static void MR_CALL 
parse_tree__grab_modules__add_missing_imp_module_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ImportAndOrUseMap_0_14,
  MR_Word * STATE_VARIABLE_ImportAndOrUseMap_15);

static void MR_CALL 
parse_tree__grab_modules__add_missing_int_module_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ImportAndOrUseMap_0_13,
  MR_Word * STATE_VARIABLE_ImportAndOrUseMap_14);

static void MR_CALL 
parse_tree__grab_modules__grab_trans_opt_files_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__read_trans_opt_files_12_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word VeryVerbose_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10);

static MR_Box MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__read_plain_opt_files_18_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word VeryVerbose_3,
  MR_Word ReadOptFilesTransitively_4,
  MR_Word HeadVar__5_5,
  MR_Word DontQueueOptModules0_6,
  MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_0_7,
  MR_Word * STATE_VARIABLE_ParseTreePlainOptsCord_8,
  MR_Word STATE_VARIABLE_ExplicitDeps_0_9,
  MR_Word * STATE_VARIABLE_ExplicitDeps_10,
  MR_Word STATE_VARIABLE_ImplicitNeeds_0_11,
  MR_Word * STATE_VARIABLE_ImplicitNeeds_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14,
  MR_Word STATE_VARIABLE_OptError_0_15,
  MR_Word * STATE_VARIABLE_OptError_16);

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_on_success_5_p_0(
  MR_Word ModuleErrors_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13,
  MR_Word STATE_VARIABLE_Error_0_14,
  MR_Word * STATE_VARIABLE_Error_15);

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_on_failure_8_p_0(
  MR_Word Globals_9,
  MR_Word WarnOption_10,
  MR_String FileName_11,
  MR_Word ReadModuleErrors_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21,
  MR_Word Error_14,
  MR_Word * Error_8);

static void MR_CALL 
parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(
  MR_Word KeepUnusedArgs_5,
  MR_Word KeepReuses_6,
  MR_Word ParseTreePlainOpt0_7,
  MR_Word * ParseTreePlainOpt_8);

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_8,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_9,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DirectImports_0_6,
  MR_Word * STATE_VARIABLE_DirectImports_7,
  MR_Word STATE_VARIABLE_DirectUses_0_8,
  MR_Word * STATE_VARIABLE_DirectUses_9,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15);

static void MR_CALL 
parse_tree__grab_modules__grab_module_int0_file_for_acu_16_p_0_1(
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
parse_tree__grab_modules__grab_module_int0_file_for_acu_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word ReadWhy0_19,
  MR_Word ModuleName_20,
  MR_Word * IntImports_21,
  MR_Word * ImpImports_22,
  MR_Word * IntUses_23,
  MR_Word * ImpUses_24,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_39,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_40,
  MR_Word STATE_VARIABLE_Baggage_0_41,
  MR_Word * STATE_VARIABLE_Baggage_42,
  MR_Word STATE_VARIABLE_AugCompUnit_0_43,
  MR_Word * STATE_VARIABLE_AugCompUnit_44);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static void MR_CALL 
parse_tree__grab_modules__do_we_need_timestamps_2_p_0(
  MR_Word Baggage_3,
  MR_Word * MaybeReturnTimestamp_4);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy2_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_25,
  MR_Word STATE_VARIABLE_Baggage_0_26,
  MR_Word * STATE_VARIABLE_Baggage_27,
  MR_Word STATE_VARIABLE_AugCompUnit_0_28,
  MR_Word * STATE_VARIABLE_AugCompUnit_29);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word ReadWhy2_19,
  MR_Word Modules_20,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_30,
  MR_Word STATE_VARIABLE_Baggage_0_31,
  MR_Word * STATE_VARIABLE_Baggage_32,
  MR_Word STATE_VARIABLE_AugCompUnit_0_33,
  MR_Word * STATE_VARIABLE_AugCompUnit_34);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_8,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_9,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15);

static void MR_CALL 
parse_tree__grab_modules__grab_module_int2_file_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__grab_modules__grab_module_int2_file_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word Globals_16,
  MR_Word ReadWhy2_17,
  MR_Word ModuleName_18,
  MR_Word * IntUses_19,
  MR_Word * ImpUses_20,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_35,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_36,
  MR_Word STATE_VARIABLE_Baggage_0_37,
  MR_Word * STATE_VARIABLE_Baggage_38,
  MR_Word STATE_VARIABLE_AugCompUnit_0_39,
  MR_Word * STATE_VARIABLE_AugCompUnit_40);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static void MR_CALL 
parse_tree__grab_modules__grab_module_int1_file_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__grab_modules__grab_module_int1_file_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word Globals_16,
  MR_Word ReadWhy1_17,
  MR_Word ModuleName_18,
  MR_Word * IntUses_19,
  MR_Word * ImpUses_20,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_37,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_38,
  MR_Word STATE_VARIABLE_Baggage_0_39,
  MR_Word * STATE_VARIABLE_Baggage_40,
  MR_Word STATE_VARIABLE_AugCompUnit_0_41,
  MR_Word * STATE_VARIABLE_AugCompUnit_42);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_type_repn_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_10,
  MR_Word * STATE_VARIABLE_AugCompUnit_11);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_15,
  MR_Word * STATE_VARIABLE_AugCompUnit_16);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static void MR_CALL 
parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectImports_0_5,
  MR_Word * STATE_VARIABLE_DirectImports_6,
  MR_Word STATE_VARIABLE_DirectUses_0_7,
  MR_Word * STATE_VARIABLE_DirectUses_8,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_10,
  MR_Word STATE_VARIABLE_Baggage_0_11,
  MR_Word * STATE_VARIABLE_Baggage_12,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_13,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_14);

static void MR_CALL 
parse_tree__grab_modules__grab_module_int0_file_for_amiu_15_p_0_1(
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
parse_tree__grab_modules__grab_module_int0_file_for_amiu_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word ModuleName_18,
  MR_Word * IntImports_19,
  MR_Word * ImpImports_20,
  MR_Word * IntUses_21,
  MR_Word * ImpUses_22,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_35,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_36,
  MR_Word STATE_VARIABLE_Baggage_0_37,
  MR_Word * STATE_VARIABLE_Baggage_38,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_39,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_40);

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_maybe_add_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12);

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_ancestor_int_3_p_0(
  MR_Word PT0_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_9,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_10);

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(
  MR_Word ModuleName_5,
  MR_Word FileWhy_6,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11);

static MR_bool MR_CALL 
parse_tree__grab_modules__should_read_interface_3_p_0(
  MR_Word Baggage_4,
  MR_Word ModuleName_5,
  MR_Word FileKind_6);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy3_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_25,
  MR_Word STATE_VARIABLE_Baggage_0_26,
  MR_Word * STATE_VARIABLE_Baggage_27,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_28,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_29);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_8,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_9,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_12,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_13);

static void MR_CALL 
parse_tree__grab_modules__grab_module_int3_file_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy3_16,
  MR_Word ModuleName_17,
  MR_Word * IntImports_18,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_35,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_36,
  MR_Word STATE_VARIABLE_Baggage_0_37,
  MR_Word * STATE_VARIABLE_Baggage_38,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_39,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_40);

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12);

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12);

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_errors_3_p_0(
  MR_Word Errors1_4,
  MR_Word STATE_VARIABLE_Baggage_0_23,
  MR_Word * STATE_VARIABLE_Baggage_24);

static void MR_CALL 
parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word RecompAvail_9,
  MR_Word MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Baggage_0_18,
  MR_Word * STATE_VARIABLE_Baggage_19);

static void MR_CALL 
parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * AugMakeIntUnit_4);

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____maybe_opt_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____maybe_opt_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____read_decision_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_1[12][3];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[6][2];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_4[1][13];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_5[3][6];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[1][9];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[2][7];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_8[1][17];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[2][5];




static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_1[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_module_int0_file_for_amiu_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_module_int1_file_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_module_int2_file_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_module_int0_file_for_acu_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[2])),
    ((MR_Box) (parse_tree__grab_modules__grab_trans_opt_files_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[1])),
    ((MR_Box) (parse_tree__grab_modules__dump_modules_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[3])))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_3[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 3U) },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_4[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_5[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_8[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_read_why_int1_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_0 = {
  (MR_String) "no_opt_file_error",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_1 = {
  (MR_String) "opt_file_error",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_maybe_opt_file_error_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_maybe_opt_file_error_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_1
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_maybe_opt_file_error_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_maybe_opt_file_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__grab_modules____Unify____maybe_opt_file_error_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____maybe_opt_file_error_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "maybe_opt_file_error",
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_maybe_opt_file_error_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_maybe_opt_file_error_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_maybe_opt_file_error_0,

};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_0 = {
  (MR_String) "decided_not_to_read",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_1 = {
  (MR_String) "decided_to_read",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_read_decision_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_read_decision_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_1
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_read_decision_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_read_decision_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__grab_modules____Unify____read_decision_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____read_decision_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "read_decision",
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_read_decision_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_read_decision_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_read_decision_0,

};

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__1725__1_4_p_0(
  MR_Word Stream_5,
  MR_String HeadVar__2_18)
{
  mercury__io__write_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Stream_5, ((MR_Box) (HeadVar__2_18)));
}

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____read_decision_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__grab_modules____Compare____maybe_opt_file_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
parse_tree__grab_modules____Unify____maybe_opt_file_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__1725__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdbcomp__sym_name__sym_name_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleNames_6)
{
  MR_Word ModuleNameStrs_8;
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Box conv1_STATE_VARIABLE_IO_10;

  Var_11 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[11]), ModuleNames_6);
  ModuleNameStrs_8 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[1]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (parse_tree__grab_modules__dump_modules_4_p_0_2));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Stream_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, ModuleNameStrs_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10);
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_trans_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 5))));
  MR_Word MN_7 = ((MR_Word) ((MR_hl_field(0, X_4, 0))));
  MR_Word Map_8;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), ((MR_Box) (MN_7)), ((MR_Box) (X_4)), Map0_6, &Map_8);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 6))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 7))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Map_8));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_35));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_plain_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 4))));
  MR_Word MN_7 = ((MR_Word) ((MR_hl_field(0, X_4, 0))));
  MR_Word Map_8;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), ((MR_Box) (MN_7)), ((MR_Box) (X_4)), Map0_6, &Map_8);
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 0))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 1))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 2))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 5))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 6))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 7))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 4) = ((MR_Box) (Map_8));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_52));
  }
}

static void MR_CALL 
parse_tree__grab_modules__add_missing_imp_module_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ImportAndOrUseMap_0_14,
  MR_Word * STATE_VARIABLE_ImportAndOrUseMap_15)
{
  MR_bool succeeded;
  MR_Word MaybeImplicit0_6;
  MR_Box conv0_MaybeImplicit0_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), STATE_VARIABLE_ImportAndOrUseMap_0_14, ((MR_Box) (ModuleName_4)), &conv0_MaybeImplicit0_6);
  if (succeeded)
  {
    MaybeImplicit0_6 = ((MR_Word) (conv0_MaybeImplicit0_6));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Implicit0_8;
    MR_Word ImportAndOrUse_11;
    MR_Word MaybeExplicit_12;
    MR_Word MaybeImplicit_13;

    if (((MR_tag((MR_Word) MaybeImplicit0_6)) == (MR_Integer) 0))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.grab_modules.add_missing_imp_module\'/3", (MR_String) "module missing from imp is in int or imp");
        return;
      }
    else
    {
      MR_Word MaybeExplicit0_9;

      Implicit0_8 = ((MR_Unsigned) ((MR_hl_field(1, MaybeImplicit0_6, 0))) & (MR_Integer) 3);
      MaybeExplicit0_9 = ((MR_Word) ((MR_hl_field(1, MaybeImplicit0_6, 1))));
      if ((MaybeExplicit0_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_20;

        Var_20 = mercury__term_context__dummy_context_0_f_0();
        {
          ImportAndOrUse_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ImportAndOrUse_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, ImportAndOrUse_11, 1) = ((MR_Box) (Var_20));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.grab_modules.add_missing_imp_module\'/3", (MR_String) "module missing from imp is in int or imp");
          return;
        }
    }
    {
      MaybeExplicit_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeExplicit_12, 0) = ((MR_Box) (ImportAndOrUse_11));
    }
    {
      MaybeImplicit_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeImplicit_13, 0) = (MR_Box) ((MR_Unsigned) (Implicit0_8));
      MR_hl_field(1, MaybeImplicit_13, 1) = ((MR_Box) (MaybeExplicit_12));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_4)), ((MR_Box) (MaybeImplicit_13)), STATE_VARIABLE_ImportAndOrUseMap_0_14, STATE_VARIABLE_ImportAndOrUseMap_15);
  }
  else
  {
    MR_Word Var_22;
    MR_Word ImportAndOrUse_24;
    MR_Word MaybeImplicit_25;

    Var_22 = mercury__term_context__dummy_context_0_f_0();
    {
      ImportAndOrUse_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ImportAndOrUse_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ImportAndOrUse_24, 1) = ((MR_Box) (Var_22));
    }
    {
      MaybeImplicit_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeImplicit_25, 0) = ((MR_Box) (ImportAndOrUse_24));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_4)), ((MR_Box) (MaybeImplicit_25)), STATE_VARIABLE_ImportAndOrUseMap_0_14, STATE_VARIABLE_ImportAndOrUseMap_15);
  }
}

static void MR_CALL 
parse_tree__grab_modules__add_missing_int_module_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ImportAndOrUseMap_0_13,
  MR_Word * STATE_VARIABLE_ImportAndOrUseMap_14)
{
  MR_bool succeeded;
  MR_Word MaybeImplicit0_6;
  MR_Box conv0_MaybeImplicit0_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), STATE_VARIABLE_ImportAndOrUseMap_0_13, ((MR_Box) (ModuleName_4)), &conv0_MaybeImplicit0_6);
  if (succeeded)
  {
    MaybeImplicit0_6 = ((MR_Word) (conv0_MaybeImplicit0_6));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MaybeImplicit_9;

    if (((MR_tag((MR_Word) MaybeImplicit0_6)) == (MR_Integer) 0))
    {
      MR_Word ImportAndOrUse0_7 = ((MR_Word) ((MR_hl_field(0, MaybeImplicit0_6, 0))));
      MR_Word ImportAndOrUse_8;

      switch (MR_tag((MR_Word) ImportAndOrUse0_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.grab_modules.update_missing_int_module\'/2", (MR_String) "module missing from int is in int");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ImpContext_36 = ((MR_Word) ((MR_hl_field(2, ImportAndOrUse0_7, 0))));
            MR_Word Var_40;

            Var_40 = mercury__term_context__dummy_context_0_f_0();
            {
              ImportAndOrUse_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ImportAndOrUse_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ImportAndOrUse_8, 1) = ((MR_Box) (Var_40));
              MR_hl_field(3, ImportAndOrUse_8, 2) = ((MR_Box) (ImpContext_36));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ImportAndOrUse0_7, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_39;

                Var_39 = mercury__term_context__dummy_context_0_f_0();
                {
                  ImportAndOrUse_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ImportAndOrUse_8, 0) = ((MR_Box) (Var_39));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.grab_modules.update_missing_int_module\'/2", (MR_String) "module missing from int is in int");
                return;
              }
              break;
          }
          break;
      }
      {
        MaybeImplicit_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeImplicit_9, 0) = ((MR_Box) (ImportAndOrUse_8));
      }
    }
    else
    {
      MR_Word Implicit0_10 = ((MR_Unsigned) ((MR_hl_field(1, MaybeImplicit0_6, 0))) & (MR_Integer) 3);
      MR_Word MaybeExplicit0_11 = ((MR_Word) ((MR_hl_field(1, MaybeImplicit0_6, 1))));
      MR_Word MaybeExplicit_12;
      MR_Word ImportAndOrUse_22;

      if ((MaybeExplicit0_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_15;

        Var_15 = mercury__term_context__dummy_context_0_f_0();
        {
          ImportAndOrUse_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ImportAndOrUse_22, 0) = ((MR_Box) (Var_15));
        }
      }
      else
      {
        MR_Word ImportAndOrUse0_19 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit0_11, 0))));

        switch (MR_tag((MR_Word) ImportAndOrUse0_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.grab_modules.update_missing_int_module\'/2", (MR_String) "module missing from int is in int");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ImpContext_46 = ((MR_Word) ((MR_hl_field(2, ImportAndOrUse0_19, 0))));
              MR_Word Var_50;

              Var_50 = mercury__term_context__dummy_context_0_f_0();
              {
                ImportAndOrUse_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ImportAndOrUse_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, ImportAndOrUse_22, 1) = ((MR_Box) (Var_50));
                MR_hl_field(3, ImportAndOrUse_22, 2) = ((MR_Box) (ImpContext_46));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ImportAndOrUse0_19, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_49;

                  Var_49 = mercury__term_context__dummy_context_0_f_0();
                  {
                    ImportAndOrUse_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ImportAndOrUse_22, 0) = ((MR_Box) (Var_49));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.grab_modules.update_missing_int_module\'/2", (MR_String) "module missing from int is in int");
                  return;
                }
                break;
            }
            break;
        }
      }
      {
        MaybeExplicit_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeExplicit_12, 0) = ((MR_Box) (ImportAndOrUse_22));
      }
      {
        MaybeImplicit_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeImplicit_9, 0) = (MR_Box) ((MR_Unsigned) (Implicit0_10));
        MR_hl_field(1, MaybeImplicit_9, 1) = ((MR_Box) (MaybeExplicit_12));
      }
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_4)), ((MR_Box) (MaybeImplicit_9)), STATE_VARIABLE_ImportAndOrUseMap_0_13, STATE_VARIABLE_ImportAndOrUseMap_14);
  }
  else
  {
    MR_Word Var_17;
    MR_Word ImportAndOrUse_23;
    MR_Word MaybeImplicit_24;

    Var_17 = mercury__term_context__dummy_context_0_f_0();
    {
      ImportAndOrUse_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ImportAndOrUse_23, 0) = ((MR_Box) (Var_17));
    }
    {
      MaybeImplicit_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeImplicit_24, 0) = ((MR_Box) (ImportAndOrUse_23));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_4)), ((MR_Box) (MaybeImplicit_24)), STATE_VARIABLE_ImportAndOrUseMap_0_13, STATE_VARIABLE_ImportAndOrUseMap_14);
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_trans_opt_files_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AugCompUnit_10;

  parse_tree__grab_modules__aug_compilation_unit_add_trans_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AugCompUnit_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AugCompUnit_10));
}

void MR_CALL 
parse_tree__grab_modules__grab_trans_opt_files_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word TransOptModuleNames_15,
  MR_Word * FoundError_16,
  MR_Word STATE_VARIABLE_Baggage_0_25,
  MR_Word * STATE_VARIABLE_Baggage_26,
  MR_Word STATE_VARIABLE_AugCompUnit_0_27,
  MR_Word * STATE_VARIABLE_AugCompUnit_28,
  MR_Word HaveParseTreeMaps_19,
  MR_Word * HaveParseTreeMaps_10)
{
  MR_Word Verbose_21;
  MR_Word VeryVerbose_22;
  MR_Word ParseTreeTransOptsCord_23;
  MR_Word TransOptSpecs_24;
  MR_Word Var_36;
  MR_Word Var_41;
  MR_Word STATE_VARIABLE_Baggage_1_43;
  MR_Word Var_45;
  MR_Word Errors0_60;
  MR_Word NonFatalErrorSpecs0_61;
  MR_Word NonFatalErrorSpecs_62;
  MR_Word Errors_63;
  MR_Box conv1_STATE_VARIABLE_AugCompUnit_28;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_String Var_80;
  MR_String Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_String Var_47;
  MR_String Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;

  *HaveParseTreeMaps_10 = HaveParseTreeMaps_19;
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 131, &Verbose_21);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_21, (MR_String) "% Reading .trans_opt files..\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_13, Verbose_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 132, &VeryVerbose_22);
  Var_36 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0));
  parse_tree__grab_modules__read_trans_opt_files_12_p_0(ProgressStream_13, Globals_14, VeryVerbose_22, TransOptModuleNames_15, Var_36, &ParseTreeTransOptsCord_23, (MR_Word) ((MR_Unsigned) 0U), &TransOptSpecs_24, (MR_Integer) 0, FoundError_16);
  Var_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), ParseTreeTransOptsCord_23);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[10]), Var_41, ((MR_Box) (STATE_VARIABLE_AugCompUnit_0_27)), &conv1_STATE_VARIABLE_AugCompUnit_28);
  *STATE_VARIABLE_AugCompUnit_28 = ((MR_Word) (conv1_STATE_VARIABLE_AugCompUnit_28));
  Errors0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, 7))));
  NonFatalErrorSpecs0_61 = ((MR_Word) ((MR_hl_field(0, Errors0_60, 3))));
  NonFatalErrorSpecs_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TransOptSpecs_24, NonFatalErrorSpecs0_61);
  Var_75 = ((MR_Word) ((MR_hl_field(0, Errors0_60, 0))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, Errors0_60, 1))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, Errors0_60, 2))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, Errors0_60, 4))));
  {
    Errors_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_63, 0) = ((MR_Box) (Var_75));
    MR_hl_field(0, Errors_63, 1) = ((MR_Box) (Var_76));
    MR_hl_field(0, Errors_63, 2) = ((MR_Box) (Var_77));
    MR_hl_field(0, Errors_63, 3) = ((MR_Box) (NonFatalErrorSpecs_62));
    MR_hl_field(0, Errors_63, 4) = ((MR_Box) (Var_79));
  }
  Var_80 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, 0))));
  Var_81 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, 1))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, 2))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, 3))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, 4))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, 5))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, 6))));
  {
    STATE_VARIABLE_Baggage_1_43 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 0) = ((MR_Box) (Var_80));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 1) = ((MR_Box) (Var_81));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 2) = ((MR_Box) (Var_82));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 3) = ((MR_Box) (Var_83));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 4) = ((MR_Box) (Var_84));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 5) = ((MR_Box) (Var_85));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 6) = ((MR_Box) (Var_86));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 7) = ((MR_Box) (Errors_63));
  }
  Var_45 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  Var_47 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 0))));
  Var_48 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 1))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 2))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 3))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 4))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 5))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_43, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_26 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_45));
  }
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_21, (MR_String) "% Done.\n");
}

static void MR_CALL 
parse_tree__grab_modules__read_trans_opt_files_12_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word VeryVerbose_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = HeadVar__9_9;
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *HeadVar__6_6 = HeadVar__5_5;
    }
    else
    {
      MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ModuleNames_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word HaveReadTransOpt_37;
      MR_Word STATE_VARIABLE_ParseTreeTransOptsCord_1_54;
      MR_Word STATE_VARIABLE_Specs_1_55;
      MR_Word STATE_VARIABLE_OptError_1_56;
      MR_Word STATE_VARIABLE_Specs_3_60;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;
      MR_Word next_value_of_HeadVar__9_9;

      parse_tree__read_modules__read_module_trans_opt_6_p_0(ProgressStream_1, Globals_2, ModuleName_31, &HaveReadTransOpt_37);
      if (((MR_tag((MR_Word) HaveReadTransOpt_37)) == (MR_Integer) 0))
      {
        MR_Word ParseTreeTransOpt_39 = ((MR_Word) ((MR_hl_field(0, HaveReadTransOpt_37, 1))));
        MR_Word Source_40 = ((MR_Word) ((MR_hl_field(0, HaveReadTransOpt_37, 2))));
        MR_Word ModuleErrors_42;
        MR_Word FatalErrors_63;
        MR_Word NonFatalErrors0_64;
        MR_Word NonFatalErrors_65;
        MR_Word Var_41;

        parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_40, &Var_41, &ModuleErrors_42);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), ((MR_Box) (ParseTreeTransOpt_39)), HeadVar__5_5, &STATE_VARIABLE_ParseTreeTransOptsCord_1_54);
        FatalErrors_63 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_42, 0))));
        NonFatalErrors0_64 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_42, 2))));
        mercury__set__delete_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), ((MR_Box) ((MR_Integer) 8)), NonFatalErrors0_64, &NonFatalErrors_65);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_63);
        if (succeeded)
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors_65);
        if (succeeded)
        {
          STATE_VARIABLE_OptError_1_56 = HeadVar__9_9;
          STATE_VARIABLE_Specs_1_55 = STATE_VARIABLE_Specs_0_7;
        }
        else
        {
          MR_Word Var_67;

          Var_67 = parse_tree__parse_error__get_read_module_specs_1_f_0(ModuleErrors_42);
          STATE_VARIABLE_Specs_1_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_67, STATE_VARIABLE_Specs_0_7);
          STATE_VARIABLE_OptError_1_56 = (MR_Integer) 1;
        }
      }
      else
      {
        MR_String FileName_43 = ((MR_String) ((MR_hl_field(1, HaveReadTransOpt_37, 0))));
        MR_Word Errors_44 = ((MR_Word) ((MR_hl_field(1, HaveReadTransOpt_37, 1))));
        MR_Word WarnOptionValue_79;

        STATE_VARIABLE_OptError_1_56 = HeadVar__9_9;
        libs__globals__lookup_bool_option_3_p_0(Globals_2, (MR_Integer) 191, &WarnOptionValue_79);
        switch (WarnOptionValue_79) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_1_55 = STATE_VARIABLE_Specs_0_7;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_80;
              MR_Word FatalErrors_81;
              MR_Word Phase_82;
              MR_Word Spec_83;
              MR_Word Var_86;
              MR_Word Var_87;

              {
                Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_87, 1) = ((MR_Box) (FileName_43));
              }
              {
                Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
                MR_hl_field(1, Var_86, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[5])));
              }
              {
                Pieces_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_80, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[2])));
                MR_hl_field(1, Pieces_80, 1) = ((MR_Box) (Var_86));
              }
              FatalErrors_81 = ((MR_Word) ((MR_hl_field(0, Errors_44, 0))));
              succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_81, ((MR_Box) ((MR_Integer) 0)));
              if (succeeded)
                {
                  Phase_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Phase_82, 0) = ((MR_Box) (FileName_43));
                }
              else
                Phase_82 = (MR_Word) ((MR_Unsigned) 16U);
              {
                Spec_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_83, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.update_opt_error_status_on_failure\'/8"));
                MR_hl_field(1, Spec_83, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(1, Spec_83, 2) = ((MR_Box) (Phase_82));
                MR_hl_field(1, Spec_83, 3) = ((MR_Box) (Pieces_80));
              }
              {
                STATE_VARIABLE_Specs_1_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_55, 0) = ((MR_Box) (Spec_83));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_55, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_7));
              }
            }
            break;
        }
        STATE_VARIABLE_ParseTreeTransOptsCord_1_54 = HeadVar__5_5;
      }
      parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ProgressStream_1, VeryVerbose_3, Globals_2, STATE_VARIABLE_Specs_1_55, &STATE_VARIABLE_Specs_3_60);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_32;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_ParseTreeTransOptsCord_1_54;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_3_60;
      next_value_of_HeadVar__9_9 = STATE_VARIABLE_OptError_1_56;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      HeadVar__9_9 = next_value_of_HeadVar__9_9;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AugCompUnit_10;

  parse_tree__grab_modules__aug_compilation_unit_add_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AugCompUnit_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AugCompUnit_10));
}

void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word Globals_15,
  MR_Word * FoundError_16,
  MR_Word STATE_VARIABLE_Baggage_0_63,
  MR_Word * STATE_VARIABLE_Baggage_64,
  MR_Word STATE_VARIABLE_AugCompUnit_0_65,
  MR_Word * STATE_VARIABLE_AugCompUnit_66,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_67,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_68)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_65, 0))));
  MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_21, 0))));
  MR_Word Ancestors0_23;
  MR_Word DirectDeps0_24;
  MR_Word DirectDeps_25;
  MR_Word OptModules_26;
  MR_Word VeryVerbose_27;
  MR_Word ReadOptFilesTransitively_28;
  MR_Word DontQueueOptModules_29;
  MR_Word ParseTreePlainOptsCord0_30;
  MR_Word ExplicitDeps_31;
  MR_Word ImplicitNeedsCord_32;
  MR_Word OptSpecs0_33;
  MR_Word OptError0_34;
  MR_Word ParseTreePlainOpts0_35;
  MR_Word OptTuple_36;
  MR_Word UnusedArgs_37;
  MR_Word StructureReuse_38;
  MR_Word ParseTreePlainOpts_46;
  MR_Word OptError_48;
  MR_Word OptSpecs_50;
  MR_Word OptModuleAncestors_51;
  MR_Word OldModuleAncestors_52;
  MR_Word OldModuleAndAncestors_53;
  MR_Word OptOnlyModuleAncestors_54;
  MR_Word OptAncestorImports_55;
  MR_Word OptAncestorUses_56;
  MR_Word AllImplicitNeeds_57;
  MR_Word ImplicitDeps_58;
  MR_Word NewDeps_59;
  MR_Word NewIndirectDeps_60;
  MR_Word NewImplIndirectDeps_61;
  MR_Word ModuleErrors_62;
  MR_Word Var_71;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_AugCompUnit_1_86;
  MR_Word STATE_VARIABLE_Baggage_1_87;
  MR_Word Var_88;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_95;
  MR_Word STATE_VARIABLE_Baggage_2_96;
  MR_Word STATE_VARIABLE_AugCompUnit_2_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_2_110;
  MR_Word STATE_VARIABLE_Baggage_3_111;
  MR_Word STATE_VARIABLE_AugCompUnit_3_112;
  MR_Word Var_116;
  MR_Box conv1_STATE_VARIABLE_AugCompUnit_1_86;

  Ancestors0_23 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  Var_71 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_21, 3))));
  DirectDeps0_24 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_71);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), DirectDeps0_24, &DirectDeps_25);
  OptModules_26 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors0_23, DirectDeps_25);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 132, &VeryVerbose_27);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 406, &ReadOptFilesTransitively_28);
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), OptModules_26, &DontQueueOptModules_29);
  Var_74 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModules_26);
  Var_75 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0));
  Var_76 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_77 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0));
  parse_tree__grab_modules__read_plain_opt_files_18_p_0(ProgressStream_13, Globals_15, VeryVerbose_27, ReadOptFilesTransitively_28, Var_74, DontQueueOptModules_29, Var_75, &ParseTreePlainOptsCord0_30, Var_76, &ExplicitDeps_31, Var_77, &ImplicitNeedsCord_32, (MR_Word) ((MR_Unsigned) 0U), &OptSpecs0_33, (MR_Integer) 0, &OptError0_34);
  ParseTreePlainOpts0_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), ParseTreePlainOptsCord0_30);
  libs__globals__get_opt_tuple_2_p_0(Globals_15, &OptTuple_36);
  UnusedArgs_37 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_36, 0))) >> 5)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 342, &StructureReuse_38);
  succeeded = (UnusedArgs_37 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (StructureReuse_38 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word HaveReadOwnPlainOpt0_39;
    MR_Word OptSpecs1_47;

    parse_tree__read_modules__read_module_plain_opt_6_p_0(ProgressStream_13, Globals_15, ModuleName_22, &HaveReadOwnPlainOpt0_39);
    if (((MR_tag((MR_Word) HaveReadOwnPlainOpt0_39)) == (MR_Integer) 0))
    {
      MR_Word OwnParseTreePlainOpt0_41 = ((MR_Word) ((MR_hl_field(0, HaveReadOwnPlainOpt0_39, 1))));
      MR_Word Source_42 = ((MR_Word) ((MR_hl_field(0, HaveReadOwnPlainOpt0_39, 2))));
      MR_Word OwnOptModuleErrors_44;
      MR_Word OwnParseTreePlainOpt_45;
      MR_Word Var_43;

      parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_42, &Var_43, &OwnOptModuleErrors_44);
      parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(UnusedArgs_37, StructureReuse_38, OwnParseTreePlainOpt0_41, &OwnParseTreePlainOpt_45);
      {
        ParseTreePlainOpts_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ParseTreePlainOpts_46, 0) = ((MR_Box) (OwnParseTreePlainOpt_45));
        MR_hl_field(1, ParseTreePlainOpts_46, 1) = ((MR_Box) (ParseTreePlainOpts0_35));
      }
      parse_tree__grab_modules__update_opt_error_status_on_success_5_p_0(OwnOptModuleErrors_44, OptSpecs0_33, &OptSpecs1_47, OptError0_34, &OptError_48);
    }
    else
    {
      MR_String OwnOptFileName_49 = ((MR_String) ((MR_hl_field(1, HaveReadOwnPlainOpt0_39, 0))));
      MR_Word OwnOptModuleErrors_123 = ((MR_Word) ((MR_hl_field(1, HaveReadOwnPlainOpt0_39, 1))));

      ParseTreePlainOpts_46 = ParseTreePlainOpts0_35;
      parse_tree__grab_modules__update_opt_error_status_on_failure_8_p_0(Globals_15, (MR_Integer) 190, OwnOptFileName_49, OwnOptModuleErrors_123, OptSpecs0_33, &OptSpecs1_47, OptError0_34, &OptError_48);
    }
    parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_14, VeryVerbose_27, Globals_15, OptSpecs1_47, &OptSpecs_50);
  }
  else
  {
    ParseTreePlainOpts_46 = ParseTreePlainOpts0_35;
    OptSpecs_50 = OptSpecs0_33;
    OptError_48 = OptError0_34;
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[8]), ParseTreePlainOpts_46, ((MR_Box) (STATE_VARIABLE_AugCompUnit_0_65)), &conv1_STATE_VARIABLE_AugCompUnit_1_86);
  STATE_VARIABLE_AugCompUnit_1_86 = ((MR_Word) (conv1_STATE_VARIABLE_AugCompUnit_1_86));
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(OptSpecs_50, STATE_VARIABLE_Baggage_0_63, &STATE_VARIABLE_Baggage_1_87);
  Var_88 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[9]), OptModules_26);
  OptModuleAncestors_51 = mercury__set__power_union_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_88);
  OldModuleAncestors_52 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), OldModuleAncestors_52, &OldModuleAndAncestors_53);
  OptOnlyModuleAncestors_54 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModuleAncestors_51, OldModuleAndAncestors_53);
  Var_92 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptOnlyModuleAncestors_54);
  Var_93 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_94 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_17_p_0(ProgressStream_13, Globals_15, (MR_Integer) 1, Var_92, Var_93, &OptAncestorImports_55, Var_94, &OptAncestorUses_56, STATE_VARIABLE_HaveParseTreeMaps_0_67, &STATE_VARIABLE_HaveParseTreeMaps_1_95, STATE_VARIABLE_Baggage_1_87, &STATE_VARIABLE_Baggage_2_96, STATE_VARIABLE_AugCompUnit_1_86, &STATE_VARIABLE_AugCompUnit_2_97);
  Var_99 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), ImplicitNeedsCord_32);
  parse_tree__get_dependencies__combine_implicit_needs_2_p_0(Var_99, &AllImplicitNeeds_57);
  parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_15, AllImplicitNeeds_57, &ImplicitDeps_58);
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (OptAncestorUses_56));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (OptAncestorImports_55));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (ImplicitDeps_58));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (ExplicitDeps_31));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
  }
  NewDeps_59 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_100);
  Var_107 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_59);
  Var_108 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_109 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_13, Globals_15, (MR_Integer) 5, Var_107, Var_108, &NewIndirectDeps_60, Var_109, &NewImplIndirectDeps_61, STATE_VARIABLE_HaveParseTreeMaps_1_95, &STATE_VARIABLE_HaveParseTreeMaps_2_110, STATE_VARIABLE_Baggage_2_96, &STATE_VARIABLE_Baggage_3_111, STATE_VARIABLE_AugCompUnit_2_97, &STATE_VARIABLE_AugCompUnit_3_112);
  Var_116 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewIndirectDeps_60, NewImplIndirectDeps_61);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_13, Globals_15, (MR_Integer) 3, Var_116, STATE_VARIABLE_HaveParseTreeMaps_2_110, STATE_VARIABLE_HaveParseTreeMaps_68, STATE_VARIABLE_Baggage_3_111, STATE_VARIABLE_Baggage_64, STATE_VARIABLE_AugCompUnit_3_112, STATE_VARIABLE_AugCompUnit_66);
  ModuleErrors_62 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Baggage_64, 7))));
  {
    MR_Word Var_121 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_62, 0))));

    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_121);
  }
  if (!(succeeded))
  {
    {
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_62, 2))));

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_122);
    }
    if (!(succeeded))
      succeeded = (OptError_48 == (MR_Integer) 1);
  }
  if (succeeded)
    *FoundError_16 = (MR_Integer) 1;
  else
    *FoundError_16 = (MR_Integer) 0;
}

static void MR_CALL 
parse_tree__grab_modules__read_plain_opt_files_18_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word VeryVerbose_3,
  MR_Word ReadOptFilesTransitively_4,
  MR_Word HeadVar__5_5,
  MR_Word DontQueueOptModules0_6,
  MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_0_7,
  MR_Word * STATE_VARIABLE_ParseTreePlainOptsCord_8,
  MR_Word STATE_VARIABLE_ExplicitDeps_0_9,
  MR_Word * STATE_VARIABLE_ExplicitDeps_10,
  MR_Word STATE_VARIABLE_ImplicitNeeds_0_11,
  MR_Word * STATE_VARIABLE_ImplicitNeeds_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14,
  MR_Word STATE_VARIABLE_OptError_0_15,
  MR_Word * STATE_VARIABLE_OptError_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_OptError_16 = STATE_VARIABLE_OptError_0_15;
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_ImplicitNeeds_12 = STATE_VARIABLE_ImplicitNeeds_0_11;
      *STATE_VARIABLE_ExplicitDeps_10 = STATE_VARIABLE_ExplicitDeps_0_9;
      *STATE_VARIABLE_ParseTreePlainOptsCord_8 = STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
    }
    else
    {
      MR_Word ModuleName_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ModuleNames0_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word HaveReadPlainOpt_55;
      MR_Word ModuleNames1_66;
      MR_Word DontQueueOptModules1_67;
      MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_1_82;
      MR_Word STATE_VARIABLE_Specs_1_83;
      MR_Word STATE_VARIABLE_OptError_1_84;
      MR_Word STATE_VARIABLE_ExplicitDeps_1_85;
      MR_Word STATE_VARIABLE_ImplicitNeeds_1_86;
      MR_Word STATE_VARIABLE_Specs_3_91;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_DontQueueOptModules0_6;
      MR_Word next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ExplicitDeps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;
      MR_Word next_value_of_STATE_VARIABLE_OptError_0_15;

      parse_tree__read_modules__read_module_plain_opt_6_p_0(ProgressStream_1, Globals_2, ModuleName_46, &HaveReadPlainOpt_55);
      if (((MR_tag((MR_Word) HaveReadPlainOpt_55)) == (MR_Integer) 0))
      {
        MR_Word ParseTreePlainOpt_57 = ((MR_Word) ((MR_hl_field(0, HaveReadPlainOpt_55, 1))));
        MR_Word Source_58 = ((MR_Word) ((MR_hl_field(0, HaveReadPlainOpt_55, 2))));
        MR_Word ModuleErrors_60;
        MR_Word ParseTreeExplicitDeps_61;
        MR_Word ParseTreeImplicitNeeds_62;
        MR_Word Var_59;

        parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_58, &Var_59, &ModuleErrors_60);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), ((MR_Box) (ParseTreePlainOpt_57)), STATE_VARIABLE_ParseTreePlainOptsCord_0_7, &STATE_VARIABLE_ParseTreePlainOptsCord_1_82);
        parse_tree__grab_modules__update_opt_error_status_on_success_5_p_0(ModuleErrors_60, STATE_VARIABLE_Specs_0_13, &STATE_VARIABLE_Specs_1_83, STATE_VARIABLE_OptError_0_15, &STATE_VARIABLE_OptError_1_84);
        parse_tree__get_dependencies__get_explicit_and_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(ParseTreePlainOpt_57, &ParseTreeExplicitDeps_61, &ParseTreeImplicitNeeds_62);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeExplicitDeps_61, STATE_VARIABLE_ExplicitDeps_0_9, &STATE_VARIABLE_ExplicitDeps_1_85);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), ((MR_Box) (ParseTreeImplicitNeeds_62)), STATE_VARIABLE_ImplicitNeeds_0_11, &STATE_VARIABLE_ImplicitNeeds_1_86);
        switch (ReadOptFilesTransitively_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ModuleNames1_66 = ModuleNames0_47;
              DontQueueOptModules1_67 = DontQueueOptModules0_6;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ParseTreeImplicitDeps_63;
              MR_Word ParseTreeDeps_64;
              MR_Word NewDeps_65;
              MR_Word Var_87;

              parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_2, ParseTreeImplicitNeeds_62, &ParseTreeImplicitDeps_63);
              mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeExplicitDeps_61, ParseTreeImplicitDeps_63, &ParseTreeDeps_64);
              mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeDeps_64, DontQueueOptModules0_6, &NewDeps_65);
              Var_87 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_65);
              ModuleNames1_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_87, ModuleNames0_47);
              mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_65, DontQueueOptModules0_6, &DontQueueOptModules1_67);
            }
            break;
        }
      }
      else
      {
        MR_String FileName_68 = ((MR_String) ((MR_hl_field(1, HaveReadPlainOpt_55, 0))));
        MR_Word ModuleErrors_99 = ((MR_Word) ((MR_hl_field(1, HaveReadPlainOpt_55, 1))));

        parse_tree__grab_modules__update_opt_error_status_on_failure_8_p_0(Globals_2, (MR_Integer) 190, FileName_68, ModuleErrors_99, STATE_VARIABLE_Specs_0_13, &STATE_VARIABLE_Specs_1_83, STATE_VARIABLE_OptError_0_15, &STATE_VARIABLE_OptError_1_84);
        ModuleNames1_66 = ModuleNames0_47;
        DontQueueOptModules1_67 = DontQueueOptModules0_6;
        STATE_VARIABLE_ParseTreePlainOptsCord_1_82 = STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
        STATE_VARIABLE_ExplicitDeps_1_85 = STATE_VARIABLE_ExplicitDeps_0_9;
        STATE_VARIABLE_ImplicitNeeds_1_86 = STATE_VARIABLE_ImplicitNeeds_0_11;
      }
      parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ProgressStream_1, VeryVerbose_3, Globals_2, STATE_VARIABLE_Specs_1_83, &STATE_VARIABLE_Specs_3_91);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames1_66;
      next_value_of_DontQueueOptModules0_6 = DontQueueOptModules1_67;
      next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7 = STATE_VARIABLE_ParseTreePlainOptsCord_1_82;
      next_value_of_STATE_VARIABLE_ExplicitDeps_0_9 = STATE_VARIABLE_ExplicitDeps_1_85;
      next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11 = STATE_VARIABLE_ImplicitNeeds_1_86;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_3_91;
      next_value_of_STATE_VARIABLE_OptError_0_15 = STATE_VARIABLE_OptError_1_84;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      DontQueueOptModules0_6 = next_value_of_DontQueueOptModules0_6;
      STATE_VARIABLE_ParseTreePlainOptsCord_0_7 = next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
      STATE_VARIABLE_ExplicitDeps_0_9 = next_value_of_STATE_VARIABLE_ExplicitDeps_0_9;
      STATE_VARIABLE_ImplicitNeeds_0_11 = next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      STATE_VARIABLE_OptError_0_15 = next_value_of_STATE_VARIABLE_OptError_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_on_success_5_p_0(
  MR_Word ModuleErrors_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13,
  MR_Word STATE_VARIABLE_Error_0_14,
  MR_Word * STATE_VARIABLE_Error_15)
{
  MR_bool succeeded;
  MR_Word FatalErrors_9 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_6, 0))));
  MR_Word NonFatalErrors0_10 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_6, 2))));
  MR_Word NonFatalErrors_11;

  mercury__set__delete_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), ((MR_Box) ((MR_Integer) 8)), NonFatalErrors0_10, &NonFatalErrors_11);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_9);
  if (succeeded)
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors_11);
  if (succeeded)
  {
    *STATE_VARIABLE_Error_15 = STATE_VARIABLE_Error_0_14;
    *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
  }
  else
  {
    MR_Word Var_18;

    Var_18 = parse_tree__parse_error__get_read_module_specs_1_f_0(ModuleErrors_6);
    *STATE_VARIABLE_Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_18, STATE_VARIABLE_Specs_0_12);
    *STATE_VARIABLE_Error_15 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_on_failure_8_p_0(
  MR_Word Globals_9,
  MR_Word WarnOption_10,
  MR_String FileName_11,
  MR_Word ReadModuleErrors_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21,
  MR_Word Error_14,
  MR_Word * Error_8)
{
  MR_bool succeeded;
  MR_Word WarnOptionValue_15;

  *Error_8 = Error_14;
  libs__globals__lookup_bool_option_3_p_0(Globals_9, WarnOption_10, &WarnOptionValue_15);
  switch (WarnOptionValue_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Pieces_16;
        MR_Word FatalErrors_17;
        MR_Word Phase_18;
        MR_Word Spec_19;
        MR_Word Var_24;
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_25, 1) = ((MR_Box) (FileName_11));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[5])));
        }
        {
          Pieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[2])));
          MR_hl_field(1, Pieces_16, 1) = ((MR_Box) (Var_24));
        }
        FatalErrors_17 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_12, 0))));
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_17, ((MR_Box) ((MR_Integer) 0)));
        if (succeeded)
          {
            Phase_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Phase_18, 0) = ((MR_Box) (FileName_11));
          }
        else
          Phase_18 = (MR_Word) ((MR_Unsigned) 16U);
        {
          Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.update_opt_error_status_on_failure\'/8"));
          MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(1, Spec_19, 2) = ((MR_Box) (Phase_18));
          MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Pieces_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_21 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(
  MR_Word KeepUnusedArgs_5,
  MR_Word KeepReuses_6,
  MR_Word ParseTreePlainOpt0_7,
  MR_Word * ParseTreePlainOpt_8)
{
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, 0))));
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, 1))));
  MR_Word UnusedArgs0_27 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, 18))));
  MR_Word Reuses0_34 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, 25))));
  MR_Word UnusedArgs_35;
  MR_Word Reuses_36;
  MR_Word Var_37;
  MR_Word Var_38;

  switch (KeepUnusedArgs_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      UnusedArgs_35 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      UnusedArgs_35 = UnusedArgs0_27;
      break;
  }
  switch (KeepReuses_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Reuses_36 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      Reuses_36 = Reuses0_34;
      break;
  }
  Var_37 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]));
  Var_38 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreePlainOpt_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 13) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 14) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 15) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 16) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 17) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 18) = ((MR_Box) (UnusedArgs_35));
    MR_hl_field(0, base, 19) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 20) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 21) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 22) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 25) = ((MR_Box) (Reuses_36));
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_IntUses_19;
  MR_Word conv6_ImpUses_20;
  MR_Word conv5_STATE_VARIABLE_HaveParseTreeMaps_38;
  MR_Word conv4_STATE_VARIABLE_Baggage_40;
  MR_Word conv3_STATE_VARIABLE_AugCompUnit_42;

  parse_tree__grab_modules__grab_module_int1_file_14_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv7_IntUses_19, &conv6_ImpUses_20, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_HaveParseTreeMaps_38, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_Baggage_40, ((MR_Word) (wrapper_arg_8)), &conv3_STATE_VARIABLE_AugCompUnit_42);
  *wrapper_arg_2 = ((MR_Box) (conv7_IntUses_19));
  *wrapper_arg_3 = ((MR_Box) (conv6_ImpUses_20));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_HaveParseTreeMaps_38));
  *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_Baggage_40));
  *wrapper_arg_9 = ((MR_Box) (conv3_STATE_VARIABLE_AugCompUnit_42));
}

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__item_util__add_implicit_fim_for_module_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word MaybeTimestamp_14,
  MR_Word ParseTreeModuleSrc0_15,
  MR_Word * STATE_VARIABLE_AugCompUnit_61,
  MR_Word STATE_VARIABLE_Baggage_0_62,
  MR_Word * STATE_VARIABLE_Baggage_63,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_64,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_65)
{
  MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 0))));
  MR_Word MaybeTimestampMap0_26;
  MR_Word IntFIMs0_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 4))));
  MR_Word ImpFIMs0_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 5))));
  MR_Word IntFIMs_29;
  MR_Word ImpFIMs_30;
  MR_Word ParseTreeModuleSrc_32;
  MR_Word GrabbedFileMap0_33;
  MR_Word GrabbedFileMap1_34;
  MR_Word SrcMap0_35;
  MR_Word SrcMap_36;
  MR_Word ImportUseMap_37;
  MR_Word IntImportMap_38;
  MR_Word IntUseMap_39;
  MR_Word ImpImportMap_40;
  MR_Word ImpUseMap_41;
  MR_Word IntUseImpImportMap_42;
  MR_Word IntImports0_43;
  MR_Word IntUses0_44;
  MR_Word ImpImports_45;
  MR_Word ImpUses_46;
  MR_Word IntUseImpImports_47;
  MR_Word Ancestors_48;
  MR_Word IntImports_49;
  MR_Word IntUses_50;
  MR_Word Experiment3_51;
  MR_Word ImportAccessibilityInfo_56;
  MR_Word DelayedSpecs_59;
  MR_Word AccessSpecs_60;
  MR_Word STATE_VARIABLE_Baggage_1_72;
  MR_Word Var_73;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_Baggage_2_78;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_79;
  MR_Word STATE_VARIABLE_AugCompUnit_1_80;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_2_83;
  MR_Word STATE_VARIABLE_Baggage_3_84;
  MR_Word STATE_VARIABLE_AugCompUnit_2_85;
  MR_Word STATE_VARIABLE_IntIndirectImported_1_87;
  MR_Word STATE_VARIABLE_ImpIndirectImported_1_88;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_1_89;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_1_90;
  MR_Word Var_93;
  MR_Word STATE_VARIABLE_IntIndirectImported_2_94;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_2_95;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_3_96;
  MR_Word STATE_VARIABLE_Baggage_4_97;
  MR_Word STATE_VARIABLE_AugCompUnit_3_98;
  MR_Word STATE_VARIABLE_ImpIndirectImported_2_102;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_2_103;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_4_104;
  MR_Word STATE_VARIABLE_Baggage_5_105;
  MR_Word STATE_VARIABLE_AugCompUnit_4_106;
  MR_Word Var_110;
  MR_Word STATE_VARIABLE_IntIndirectImported_3_111;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_3_112;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_5_113;
  MR_Word STATE_VARIABLE_Baggage_6_114;
  MR_Word STATE_VARIABLE_AugCompUnit_5_115;
  MR_Word STATE_VARIABLE_ImpIndirectImported_3_119;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_3_120;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_6_121;
  MR_Word STATE_VARIABLE_Baggage_7_122;
  MR_Word STATE_VARIABLE_AugCompUnit_6_123;
  MR_Word STATE_VARIABLE_IntIndirectImported_4_127;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_4_128;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_7_129;
  MR_Word STATE_VARIABLE_Baggage_8_130;
  MR_Word STATE_VARIABLE_AugCompUnit_7_131;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_5_135;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_8_136;
  MR_Word STATE_VARIABLE_Baggage_9_137;
  MR_Word STATE_VARIABLE_AugCompUnit_8_138;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_4_142;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_9_143;
  MR_Word STATE_VARIABLE_Baggage_10_144;
  MR_Word STATE_VARIABLE_AugCompUnit_9_145;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_10_149;
  MR_Word STATE_VARIABLE_Baggage_11_150;
  MR_Word STATE_VARIABLE_AugCompUnit_10_151;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_11_155;
  MR_Word STATE_VARIABLE_Baggage_12_156;
  MR_Word STATE_VARIABLE_AugCompUnit_11_157;
  MR_Word STATE_VARIABLE_Baggage_14_168;
  MR_Word STATE_VARIABLE_Baggage_15_172;
  MR_Word Var_178 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 6))));
  MR_Word Var_356;
  MR_Word Var_357;
  MR_Word Var_358;
  MR_Word Var_359;
  MR_Word Var_362;
  MR_Word Var_363;
  MR_Word Var_364;
  MR_Word Var_365;
  MR_Word Var_366;
  MR_Word Var_367;
  MR_Word Var_368;
  MR_Word Var_369;
  MR_Word Var_370;
  MR_Word Var_371;
  MR_Word Var_372;
  MR_Word Var_373;
  MR_Word Var_374;
  MR_Word Var_375;
  MR_Word Var_376;
  MR_Word Var_377;
  MR_Word Var_378;
  MR_Word Var_379;
  MR_Word Var_380;
  MR_Word Var_381;
  MR_Word Var_382;
  MR_Word Var_383;
  MR_Word Var_384;
  MR_Word Var_385;
  MR_Word Var_386;
  MR_Word Var_387;
  MR_Word Var_388;
  MR_Word Var_389;
  MR_Word Var_390;
  MR_Word Var_391;
  MR_String Var_208;
  MR_String Var_209;
  MR_Word Var_210;
  MR_Word Var_211;
  MR_Word Var_212;
  MR_Word Var_214;
  MR_Word Var_215;
  MR_Box conv1_IntFIMs_29;
  MR_Box conv2_ImpFIMs_30;
  MR_String Var_435;
  MR_String Var_436;
  MR_Word Var_437;
  MR_Word Var_438;
  MR_Word Var_439;
  MR_Word Var_440;
  MR_Word Var_442;
  MR_Word Var_450;
  MR_Word Var_452;
  MR_Word Var_453;
  MR_Word Var_454;
  MR_Word Var_455;
  MR_Word Var_456;
  MR_Word Var_457;
  MR_Word _MissingModulesInt_57;
  MR_Word _MissingModulesImp_58;

  if ((MaybeTimestamp_14 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeTimestampMap0_26 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Timestamp_25 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_14, 0))));
    MR_Word Var_68;
    MR_Word Var_69;

    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_69, 1) = ((MR_Box) (Timestamp_25));
      MR_hl_field(0, Var_69, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_68 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_24)), ((MR_Box) (Var_69)));
    {
      MaybeTimestampMap0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTimestampMap0_26, 0) = ((MR_Box) (Var_68));
    }
  }
  Var_208 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 0))));
  Var_209 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 1))));
  Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 2))));
  Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 3))));
  Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 4))));
  Var_214 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 6))));
  Var_215 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 7))));
  {
    STATE_VARIABLE_Baggage_1_72 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 0) = ((MR_Box) (Var_208));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 1) = ((MR_Box) (Var_209));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 2) = ((MR_Box) (Var_210));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 3) = ((MR_Box) (Var_211));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 4) = ((MR_Box) (Var_212));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 5) = ((MR_Box) (MaybeTimestampMap0_26));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 6) = ((MR_Box) (Var_214));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 7) = ((MR_Box) (Var_215));
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[0]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_1));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (ModuleName_24));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_73, Var_178, ((MR_Box) (IntFIMs0_27)), &conv1_IntFIMs_29);
  IntFIMs_29 = ((MR_Word) (conv1_IntFIMs_29));
  Var_76 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 7))));
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_73, Var_76, ((MR_Box) (ImpFIMs0_28)), &conv2_ImpFIMs_30);
  ImpFIMs_30 = ((MR_Word) (conv2_ImpFIMs_30));
  Var_356 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 0))));
  Var_357 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 1))));
  Var_358 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 2))));
  Var_359 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 3))));
  Var_362 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 6))));
  Var_363 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 7))));
  Var_364 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 8))));
  Var_365 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 9))));
  Var_366 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 10))));
  Var_367 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 11))));
  Var_368 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 12))));
  Var_369 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 13))));
  Var_370 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 14))));
  Var_371 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 15))));
  Var_372 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 16))));
  Var_373 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 17))));
  Var_374 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 18))));
  Var_375 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 19))));
  Var_376 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 20))));
  Var_377 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 21))));
  Var_378 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 22))));
  Var_379 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 23))));
  Var_380 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 24))));
  Var_381 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 25))));
  Var_382 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 26))));
  Var_383 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 27))));
  Var_384 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 28))));
  Var_385 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 29))));
  Var_386 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 30))));
  Var_387 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 31))));
  Var_388 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 32))));
  Var_389 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 33))));
  Var_390 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 34))));
  Var_391 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 35))));
  {
    ParseTreeModuleSrc_32 = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeModuleSrc_32, 0) = ((MR_Box) (Var_356));
    MR_hl_field(0, ParseTreeModuleSrc_32, 1) = ((MR_Box) (Var_357));
    MR_hl_field(0, ParseTreeModuleSrc_32, 2) = ((MR_Box) (Var_358));
    MR_hl_field(0, ParseTreeModuleSrc_32, 3) = ((MR_Box) (Var_359));
    MR_hl_field(0, ParseTreeModuleSrc_32, 4) = ((MR_Box) (IntFIMs_29));
    MR_hl_field(0, ParseTreeModuleSrc_32, 5) = ((MR_Box) (ImpFIMs_30));
    MR_hl_field(0, ParseTreeModuleSrc_32, 6) = ((MR_Box) (Var_362));
    MR_hl_field(0, ParseTreeModuleSrc_32, 7) = ((MR_Box) (Var_363));
    MR_hl_field(0, ParseTreeModuleSrc_32, 8) = ((MR_Box) (Var_364));
    MR_hl_field(0, ParseTreeModuleSrc_32, 9) = ((MR_Box) (Var_365));
    MR_hl_field(0, ParseTreeModuleSrc_32, 10) = ((MR_Box) (Var_366));
    MR_hl_field(0, ParseTreeModuleSrc_32, 11) = ((MR_Box) (Var_367));
    MR_hl_field(0, ParseTreeModuleSrc_32, 12) = ((MR_Box) (Var_368));
    MR_hl_field(0, ParseTreeModuleSrc_32, 13) = ((MR_Box) (Var_369));
    MR_hl_field(0, ParseTreeModuleSrc_32, 14) = ((MR_Box) (Var_370));
    MR_hl_field(0, ParseTreeModuleSrc_32, 15) = ((MR_Box) (Var_371));
    MR_hl_field(0, ParseTreeModuleSrc_32, 16) = ((MR_Box) (Var_372));
    MR_hl_field(0, ParseTreeModuleSrc_32, 17) = ((MR_Box) (Var_373));
    MR_hl_field(0, ParseTreeModuleSrc_32, 18) = ((MR_Box) (Var_374));
    MR_hl_field(0, ParseTreeModuleSrc_32, 19) = ((MR_Box) (Var_375));
    MR_hl_field(0, ParseTreeModuleSrc_32, 20) = ((MR_Box) (Var_376));
    MR_hl_field(0, ParseTreeModuleSrc_32, 21) = ((MR_Box) (Var_377));
    MR_hl_field(0, ParseTreeModuleSrc_32, 22) = ((MR_Box) (Var_378));
    MR_hl_field(0, ParseTreeModuleSrc_32, 23) = ((MR_Box) (Var_379));
    MR_hl_field(0, ParseTreeModuleSrc_32, 24) = ((MR_Box) (Var_380));
    MR_hl_field(0, ParseTreeModuleSrc_32, 25) = ((MR_Box) (Var_381));
    MR_hl_field(0, ParseTreeModuleSrc_32, 26) = ((MR_Box) (Var_382));
    MR_hl_field(0, ParseTreeModuleSrc_32, 27) = ((MR_Box) (Var_383));
    MR_hl_field(0, ParseTreeModuleSrc_32, 28) = ((MR_Box) (Var_384));
    MR_hl_field(0, ParseTreeModuleSrc_32, 29) = ((MR_Box) (Var_385));
    MR_hl_field(0, ParseTreeModuleSrc_32, 30) = ((MR_Box) (Var_386));
    MR_hl_field(0, ParseTreeModuleSrc_32, 31) = ((MR_Box) (Var_387));
    MR_hl_field(0, ParseTreeModuleSrc_32, 32) = ((MR_Box) (Var_388));
    MR_hl_field(0, ParseTreeModuleSrc_32, 33) = ((MR_Box) (Var_389));
    MR_hl_field(0, ParseTreeModuleSrc_32, 34) = ((MR_Box) (Var_390));
    MR_hl_field(0, ParseTreeModuleSrc_32, 35) = ((MR_Box) (Var_391));
  }
  GrabbedFileMap0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 6))));
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (ParseTreeModuleSrc_32));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_24)), ((MR_Box) (Var_77)), GrabbedFileMap0_33, &GrabbedFileMap1_34);
  Var_435 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 0))));
  Var_436 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 1))));
  Var_437 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 2))));
  Var_438 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 3))));
  Var_439 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 4))));
  Var_440 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 5))));
  Var_442 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_72, 7))));
  {
    STATE_VARIABLE_Baggage_2_78 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_78, 0) = ((MR_Box) (Var_435));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_78, 1) = ((MR_Box) (Var_436));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_78, 2) = ((MR_Box) (Var_437));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_78, 3) = ((MR_Box) (Var_438));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_78, 4) = ((MR_Box) (Var_439));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_78, 5) = ((MR_Box) (Var_440));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_78, 6) = ((MR_Box) (GrabbedFileMap1_34));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_78, 7) = ((MR_Box) (Var_442));
  }
  SrcMap0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 1))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_24)), ((MR_Box) (ParseTreeModuleSrc_32)), SrcMap0_35, &SrcMap_36);
  Var_450 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 0))));
  Var_452 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 2))));
  Var_453 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 3))));
  Var_454 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 4))));
  Var_455 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 5))));
  Var_456 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 6))));
  Var_457 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 7))));
  {
    STATE_VARIABLE_HaveParseTreeMaps_1_79 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_79, 0) = ((MR_Box) (Var_450));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_79, 1) = ((MR_Box) (SrcMap_36));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_79, 2) = ((MR_Box) (Var_452));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_79, 3) = ((MR_Box) (Var_453));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_79, 4) = ((MR_Box) (Var_454));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_79, 5) = ((MR_Box) (Var_455));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_79, 6) = ((MR_Box) (Var_456));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_79, 7) = ((MR_Box) (Var_457));
  }
  parse_tree__prog_parse_tree__init_aug_compilation_unit_2_p_0(ParseTreeModuleSrc_32, &STATE_VARIABLE_AugCompUnit_1_80);
  ImportUseMap_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_32, 3))));
  parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportUseMap_37, &IntImportMap_38, &IntUseMap_39, &ImpImportMap_40, &ImpUseMap_41, &IntUseImpImportMap_42);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntImportMap_38, &IntImports0_43);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseMap_39, &IntUses0_44);
  ImpImports_45 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpImportMap_40);
  ImpUses_46 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpUseMap_41);
  IntUseImpImports_47 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseImpImportMap_42);
  Ancestors_48 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_24);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, Ancestors_48, IntImports0_43, &IntImports_49, IntUses0_44, &IntUses_50, STATE_VARIABLE_HaveParseTreeMaps_1_79, &STATE_VARIABLE_HaveParseTreeMaps_2_83, STATE_VARIABLE_Baggage_2_78, &STATE_VARIABLE_Baggage_3_84, STATE_VARIABLE_AugCompUnit_1_80, &STATE_VARIABLE_AugCompUnit_2_85);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_1_87);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_1_88);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntImpIndirectImported_1_89);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpImpIndirectImported_1_90);
  Var_93 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_49);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, Var_93, STATE_VARIABLE_IntIndirectImported_1_87, &STATE_VARIABLE_IntIndirectImported_2_94, STATE_VARIABLE_IntImpIndirectImported_1_89, &STATE_VARIABLE_IntImpIndirectImported_2_95, STATE_VARIABLE_HaveParseTreeMaps_2_83, &STATE_VARIABLE_HaveParseTreeMaps_3_96, STATE_VARIABLE_Baggage_3_84, &STATE_VARIABLE_Baggage_4_97, STATE_VARIABLE_AugCompUnit_2_85, &STATE_VARIABLE_AugCompUnit_3_98);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, ImpImports_45, STATE_VARIABLE_ImpIndirectImported_1_88, &STATE_VARIABLE_ImpIndirectImported_2_102, STATE_VARIABLE_ImpImpIndirectImported_1_90, &STATE_VARIABLE_ImpImpIndirectImported_2_103, STATE_VARIABLE_HaveParseTreeMaps_3_96, &STATE_VARIABLE_HaveParseTreeMaps_4_104, STATE_VARIABLE_Baggage_4_97, &STATE_VARIABLE_Baggage_5_105, STATE_VARIABLE_AugCompUnit_3_98, &STATE_VARIABLE_AugCompUnit_4_106);
  Var_110 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_50);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 1, Var_110, STATE_VARIABLE_IntIndirectImported_2_94, &STATE_VARIABLE_IntIndirectImported_3_111, STATE_VARIABLE_IntImpIndirectImported_2_95, &STATE_VARIABLE_IntImpIndirectImported_3_112, STATE_VARIABLE_HaveParseTreeMaps_4_104, &STATE_VARIABLE_HaveParseTreeMaps_5_113, STATE_VARIABLE_Baggage_5_105, &STATE_VARIABLE_Baggage_6_114, STATE_VARIABLE_AugCompUnit_4_106, &STATE_VARIABLE_AugCompUnit_5_115);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, ImpUses_46, STATE_VARIABLE_ImpIndirectImported_2_102, &STATE_VARIABLE_ImpIndirectImported_3_119, STATE_VARIABLE_ImpImpIndirectImported_2_103, &STATE_VARIABLE_ImpImpIndirectImported_3_120, STATE_VARIABLE_HaveParseTreeMaps_5_113, &STATE_VARIABLE_HaveParseTreeMaps_6_121, STATE_VARIABLE_Baggage_6_114, &STATE_VARIABLE_Baggage_7_122, STATE_VARIABLE_AugCompUnit_5_115, &STATE_VARIABLE_AugCompUnit_6_123);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 4, IntUseImpImports_47, STATE_VARIABLE_IntIndirectImported_3_111, &STATE_VARIABLE_IntIndirectImported_4_127, STATE_VARIABLE_IntImpIndirectImported_3_112, &STATE_VARIABLE_IntImpIndirectImported_4_128, STATE_VARIABLE_HaveParseTreeMaps_6_121, &STATE_VARIABLE_HaveParseTreeMaps_7_129, STATE_VARIABLE_Baggage_7_122, &STATE_VARIABLE_Baggage_8_130, STATE_VARIABLE_AugCompUnit_6_123, &STATE_VARIABLE_AugCompUnit_7_131);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, STATE_VARIABLE_IntIndirectImported_4_127, STATE_VARIABLE_IntImpIndirectImported_4_128, &STATE_VARIABLE_IntImpIndirectImported_5_135, STATE_VARIABLE_HaveParseTreeMaps_7_129, &STATE_VARIABLE_HaveParseTreeMaps_8_136, STATE_VARIABLE_Baggage_8_130, &STATE_VARIABLE_Baggage_9_137, STATE_VARIABLE_AugCompUnit_7_131, &STATE_VARIABLE_AugCompUnit_8_138);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 1, STATE_VARIABLE_ImpIndirectImported_3_119, STATE_VARIABLE_ImpImpIndirectImported_3_120, &STATE_VARIABLE_ImpImpIndirectImported_4_142, STATE_VARIABLE_HaveParseTreeMaps_8_136, &STATE_VARIABLE_HaveParseTreeMaps_9_143, STATE_VARIABLE_Baggage_9_137, &STATE_VARIABLE_Baggage_10_144, STATE_VARIABLE_AugCompUnit_8_138, &STATE_VARIABLE_AugCompUnit_9_145);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, STATE_VARIABLE_IntImpIndirectImported_5_135, STATE_VARIABLE_HaveParseTreeMaps_9_143, &STATE_VARIABLE_HaveParseTreeMaps_10_149, STATE_VARIABLE_Baggage_10_144, &STATE_VARIABLE_Baggage_11_150, STATE_VARIABLE_AugCompUnit_9_145, &STATE_VARIABLE_AugCompUnit_10_151);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, STATE_VARIABLE_ImpImpIndirectImported_4_142, STATE_VARIABLE_HaveParseTreeMaps_10_149, &STATE_VARIABLE_HaveParseTreeMaps_11_155, STATE_VARIABLE_Baggage_11_150, &STATE_VARIABLE_Baggage_12_156, STATE_VARIABLE_AugCompUnit_10_151, &STATE_VARIABLE_AugCompUnit_11_157);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 650, &Experiment3_51);
  switch (Experiment3_51) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_AugCompUnit_61 = STATE_VARIABLE_AugCompUnit_11_157;
        STATE_VARIABLE_Baggage_14_168 = STATE_VARIABLE_Baggage_12_156;
        *STATE_VARIABLE_HaveParseTreeMaps_65 = STATE_VARIABLE_HaveParseTreeMaps_11_155;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_HaveParseTreeMaps_12_161;
        MR_Word STATE_VARIABLE_Baggage_13_162;
        MR_Word STATE_VARIABLE_AugCompUnit_12_163;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word _IntUses_52;
        MR_Word _ImpUses_53;
        MR_Word _IntUsesList_54;
        MR_Word _ImpUsesList_55;
        MR_Box conv11_STATE_VARIABLE_HaveParseTreeMaps_65;
        MR_Box conv10_STATE_VARIABLE_Baggage_14_168;
        MR_Box conv9_STATE_VARIABLE_AugCompUnit_61;
        MR_Box conv8_STATE_VARIABLE_IO_67;

        parse_tree__grab_modules__grab_module_int1_file_14_p_0(ProgressStream_12, Globals_13, (MR_Integer) 6, ModuleName_24, &_IntUses_52, &_ImpUses_53, STATE_VARIABLE_HaveParseTreeMaps_11_155, &STATE_VARIABLE_HaveParseTreeMaps_12_161, STATE_VARIABLE_Baggage_12_156, &STATE_VARIABLE_Baggage_13_162, STATE_VARIABLE_AugCompUnit_11_157, &STATE_VARIABLE_AugCompUnit_12_163);
        {
          Var_165 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_165, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[0]));
          MR_hl_field(0, Var_165, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_2));
          MR_hl_field(0, Var_165, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_165, 3) = ((MR_Box) (ProgressStream_12));
          MR_hl_field(0, Var_165, 4) = ((MR_Box) (Globals_13));
          MR_hl_field(0, Var_165, 5) = ((MR_Box) ((MR_Integer) 6));
        }
        Var_166 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_24);
        mercury__list__map2_foldl4_12_p_1((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_165, Var_166, &_IntUsesList_54, &_ImpUsesList_55, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_12_161)), &conv11_STATE_VARIABLE_HaveParseTreeMaps_65, ((MR_Box) (STATE_VARIABLE_Baggage_13_162)), &conv10_STATE_VARIABLE_Baggage_14_168, ((MR_Box) (STATE_VARIABLE_AugCompUnit_12_163)), &conv9_STATE_VARIABLE_AugCompUnit_61, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_67);
        *STATE_VARIABLE_HaveParseTreeMaps_65 = ((MR_Word) (conv11_STATE_VARIABLE_HaveParseTreeMaps_65));
        STATE_VARIABLE_Baggage_14_168 = ((MR_Word) (conv10_STATE_VARIABLE_Baggage_14_168));
        *STATE_VARIABLE_AugCompUnit_61 = ((MR_Word) (conv9_STATE_VARIABLE_AugCompUnit_61));
      }
      break;
  }
  parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0(*STATE_VARIABLE_AugCompUnit_61, &ImportAccessibilityInfo_56);
  parse_tree__check_import_accessibility__check_import_accessibility_6_p_0(ParseTreeModuleSrc_32, ImportAccessibilityInfo_56, &_MissingModulesInt_57, &_MissingModulesImp_58, &DelayedSpecs_59, &AccessSpecs_60);
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(DelayedSpecs_59, STATE_VARIABLE_Baggage_14_168, &STATE_VARIABLE_Baggage_15_172);
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(AccessSpecs_60, STATE_VARIABLE_Baggage_15_172, STATE_VARIABLE_Baggage_63);
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_8,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_9,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugCompUnit_15 = STATE_VARIABLE_AugCompUnit_0_14;
      *STATE_VARIABLE_Baggage_13 = STATE_VARIABLE_Baggage_0_12;
      *STATE_VARIABLE_HaveParseTreeMaps_11 = STATE_VARIABLE_HaveParseTreeMaps_0_10;
      *STATE_VARIABLE_ImpIndirectImports_9 = STATE_VARIABLE_ImpIndirectImports_0_8;
      *STATE_VARIABLE_IntIndirectImports_7 = STATE_VARIABLE_IntIndirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ModuleNames_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_70;
      MR_Word STATE_VARIABLE_Baggage_1_71;
      MR_Word STATE_VARIABLE_AugCompUnit_1_72;
      MR_Word STATE_VARIABLE_IntIndirectImports_1_74;
      MR_Word STATE_VARIABLE_ImpIndirectImports_1_75;
      MR_Word GrabbedFileMap_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_12, 6))));
      MR_Word OldGrabbedFile_82;
      MR_Box conv0_OldGrabbedFile_82;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_12;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_14;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), GrabbedFileMap_81, ((MR_Box) (ModuleName_44)), &conv0_OldGrabbedFile_82);
      if (succeeded)
      {
        OldGrabbedFile_82 = ((MR_Word) (conv0_OldGrabbedFile_82));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldFileKind_83;
        MR_Word Var_96;

        switch (MR_tag((MR_Word) OldGrabbedFile_82)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OldFileKind_83 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[0]));
            break;
          case (MR_Integer) 2:
            OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1]));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_82, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2]));
                break;
              case (MR_Integer) 1:
                OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3]));
                break;
            }
            break;
        }
        parse_tree__file_kind____Compare____file_kind_0_0(&Var_96, (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1])), OldFileKind_83);
        succeeded = ((MR_Integer) 1 == Var_96);
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word IntUses_52;
        MR_Word ImpUses_53;

        parse_tree__grab_modules__grab_module_int1_file_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_44, &IntUses_52, &ImpUses_53, STATE_VARIABLE_HaveParseTreeMaps_0_10, &STATE_VARIABLE_HaveParseTreeMaps_1_70, STATE_VARIABLE_Baggage_0_12, &STATE_VARIABLE_Baggage_1_71, STATE_VARIABLE_AugCompUnit_0_14, &STATE_VARIABLE_AugCompUnit_1_72);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_52, STATE_VARIABLE_IntIndirectImports_0_6, &STATE_VARIABLE_IntIndirectImports_1_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_53, STATE_VARIABLE_ImpIndirectImports_0_8, &STATE_VARIABLE_ImpIndirectImports_1_75);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_1_72 = STATE_VARIABLE_AugCompUnit_0_14;
        STATE_VARIABLE_Baggage_1_71 = STATE_VARIABLE_Baggage_0_12;
        STATE_VARIABLE_HaveParseTreeMaps_1_70 = STATE_VARIABLE_HaveParseTreeMaps_0_10;
        STATE_VARIABLE_ImpIndirectImports_1_75 = STATE_VARIABLE_ImpIndirectImports_0_8;
        STATE_VARIABLE_IntIndirectImports_1_74 = STATE_VARIABLE_IntIndirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_45;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_6 = STATE_VARIABLE_IntIndirectImports_1_74;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8 = STATE_VARIABLE_ImpIndirectImports_1_75;
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_10 = STATE_VARIABLE_HaveParseTreeMaps_1_70;
      next_value_of_STATE_VARIABLE_Baggage_0_12 = STATE_VARIABLE_Baggage_1_71;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_14 = STATE_VARIABLE_AugCompUnit_1_72;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_IntIndirectImports_0_6 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      STATE_VARIABLE_ImpIndirectImports_0_8 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8;
      STATE_VARIABLE_HaveParseTreeMaps_0_10 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_10;
      STATE_VARIABLE_Baggage_0_12 = next_value_of_STATE_VARIABLE_Baggage_0_12;
      STATE_VARIABLE_AugCompUnit_0_14 = next_value_of_STATE_VARIABLE_AugCompUnit_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DirectImports_0_6,
  MR_Word * STATE_VARIABLE_DirectImports_7,
  MR_Word STATE_VARIABLE_DirectUses_0_8,
  MR_Word * STATE_VARIABLE_DirectUses_9,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugCompUnit_15 = STATE_VARIABLE_AugCompUnit_0_14;
      *STATE_VARIABLE_Baggage_13 = STATE_VARIABLE_Baggage_0_12;
      *STATE_VARIABLE_HaveParseTreeMaps_11 = STATE_VARIABLE_HaveParseTreeMaps_0_10;
      *STATE_VARIABLE_DirectUses_9 = STATE_VARIABLE_DirectUses_0_8;
      *STATE_VARIABLE_DirectImports_7 = STATE_VARIABLE_DirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ModuleNames_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_72;
      MR_Word STATE_VARIABLE_Baggage_1_73;
      MR_Word STATE_VARIABLE_AugCompUnit_1_74;
      MR_Word STATE_VARIABLE_DirectImports_2_77;
      MR_Word STATE_VARIABLE_DirectUses_2_79;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_12;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_14;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_12, ModuleName_44, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word IntImports_52;
        MR_Word ImpImports_53;
        MR_Word IntUses_54;
        MR_Word ImpUses_55;
        MR_Word STATE_VARIABLE_DirectImports_1_76;
        MR_Word STATE_VARIABLE_DirectUses_1_78;

        parse_tree__grab_modules__grab_module_int0_file_for_acu_16_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_44, &IntImports_52, &ImpImports_53, &IntUses_54, &ImpUses_55, STATE_VARIABLE_HaveParseTreeMaps_0_10, &STATE_VARIABLE_HaveParseTreeMaps_1_72, STATE_VARIABLE_Baggage_0_12, &STATE_VARIABLE_Baggage_1_73, STATE_VARIABLE_AugCompUnit_0_14, &STATE_VARIABLE_AugCompUnit_1_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_52, STATE_VARIABLE_DirectImports_0_6, &STATE_VARIABLE_DirectImports_1_76);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_53, STATE_VARIABLE_DirectImports_1_76, &STATE_VARIABLE_DirectImports_2_77);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_54, STATE_VARIABLE_DirectUses_0_8, &STATE_VARIABLE_DirectUses_1_78);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_55, STATE_VARIABLE_DirectUses_1_78, &STATE_VARIABLE_DirectUses_2_79);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_1_74 = STATE_VARIABLE_AugCompUnit_0_14;
        STATE_VARIABLE_Baggage_1_73 = STATE_VARIABLE_Baggage_0_12;
        STATE_VARIABLE_HaveParseTreeMaps_1_72 = STATE_VARIABLE_HaveParseTreeMaps_0_10;
        STATE_VARIABLE_DirectUses_2_79 = STATE_VARIABLE_DirectUses_0_8;
        STATE_VARIABLE_DirectImports_2_77 = STATE_VARIABLE_DirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_45;
      next_value_of_STATE_VARIABLE_DirectImports_0_6 = STATE_VARIABLE_DirectImports_2_77;
      next_value_of_STATE_VARIABLE_DirectUses_0_8 = STATE_VARIABLE_DirectUses_2_79;
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_10 = STATE_VARIABLE_HaveParseTreeMaps_1_72;
      next_value_of_STATE_VARIABLE_Baggage_0_12 = STATE_VARIABLE_Baggage_1_73;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_14 = STATE_VARIABLE_AugCompUnit_1_74;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_DirectImports_0_6 = next_value_of_STATE_VARIABLE_DirectImports_0_6;
      STATE_VARIABLE_DirectUses_0_8 = next_value_of_STATE_VARIABLE_DirectUses_0_8;
      STATE_VARIABLE_HaveParseTreeMaps_0_10 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_10;
      STATE_VARIABLE_Baggage_0_12 = next_value_of_STATE_VARIABLE_Baggage_0_12;
      STATE_VARIABLE_AugCompUnit_0_14 = next_value_of_STATE_VARIABLE_AugCompUnit_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_module_int0_file_for_acu_16_p_0_1(
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

  parse_tree__convert_import_use__get_imports_uses_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_9)), &conv0_HeadVar__10_10);
  *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv2_HeadVar__6_6));
  *wrapper_arg_8 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_10 = ((MR_Box) (conv0_HeadVar__10_10));
}

static void MR_CALL 
parse_tree__grab_modules__grab_module_int0_file_for_acu_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word ReadWhy0_19,
  MR_Word ModuleName_20,
  MR_Word * IntImports_21,
  MR_Word * ImpImports_22,
  MR_Word * IntUses_23,
  MR_Word * ImpUses_24,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_39,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_40,
  MR_Word STATE_VARIABLE_Baggage_0_41,
  MR_Word * STATE_VARIABLE_Baggage_42,
  MR_Word STATE_VARIABLE_AugCompUnit_0_43,
  MR_Word * STATE_VARIABLE_AugCompUnit_44)
{
  MR_Word ReturnTimestamp_29;
  MR_Word HaveReadInt0_30;
  MR_Word Errors_35;
  MR_Word STATE_VARIABLE_Baggage_2_55;

  parse_tree__grab_modules__do_we_need_timestamps_2_p_0(STATE_VARIABLE_Baggage_0_41, &ReturnTimestamp_29);
  parse_tree__read_modules__maybe_read_module_int0_10_p_0(ProgressStream_17, Globals_18, (MR_Integer) 1, ModuleName_20, ReturnTimestamp_29, &HaveReadInt0_30, STATE_VARIABLE_HaveParseTreeMaps_0_39, STATE_VARIABLE_HaveParseTreeMaps_40);
  if (((MR_tag((MR_Word) HaveReadInt0_30)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt0_32 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_30, 1))));
    MR_Word Source_33 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_30, 2))));
    MR_Word MaybeTimestamp_34;
    MR_Word GrabbedFile_36;
    MR_Word STATE_VARIABLE_Baggage_1_50;
    MR_Word STATE_VARIABLE_AugCompUnit_1_51;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Box conv7_IntImports_21;
    MR_Box conv6_ImpImports_22;
    MR_Box conv5_IntUses_23;
    MR_Box conv4_ImpUses_24;

    parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_33, &MaybeTimestamp_34, &Errors_35);
    {
      GrabbedFile_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GrabbedFile_36, 0) = ((MR_Box) (ParseTreeInt0_32));
      MR_hl_field(1, GrabbedFile_36, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_19));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_20, GrabbedFile_36, STATE_VARIABLE_Baggage_0_41, &STATE_VARIABLE_Baggage_1_50);
    switch (ReadWhy0_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word IntForOptSpec_38;

          {
            IntForOptSpec_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IntForOptSpec_38, 0) = ((MR_Box) (ParseTreeInt0_32));
            MR_hl_field(0, IntForOptSpec_38, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_19));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_38, STATE_VARIABLE_AugCompUnit_0_43, &STATE_VARIABLE_AugCompUnit_1_51);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word AncestorIntSpec_37;

          {
            AncestorIntSpec_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, AncestorIntSpec_37, 0) = ((MR_Box) (ParseTreeInt0_32));
            MR_hl_field(0, AncestorIntSpec_37, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_19));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(AncestorIntSpec_37, STATE_VARIABLE_AugCompUnit_0_43, &STATE_VARIABLE_AugCompUnit_1_51);
        }
        break;
    }
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_20, (MR_Integer) 0, (MR_Integer) 1, MaybeTimestamp_34, STATE_VARIABLE_Baggage_1_50, &STATE_VARIABLE_Baggage_2_55);
    Var_57 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_32, 4))));
    Var_58 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_59 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_60 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_61 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[7]), Var_57, ((MR_Box) (Var_58)), &conv7_IntImports_21, ((MR_Box) (Var_59)), &conv6_ImpImports_22, ((MR_Box) (Var_60)), &conv5_IntUses_23, ((MR_Box) (Var_61)), &conv4_ImpUses_24);
    *IntImports_21 = ((MR_Word) (conv7_IntImports_21));
    *ImpImports_22 = ((MR_Word) (conv6_ImpImports_22));
    *IntUses_23 = ((MR_Word) (conv5_IntUses_23));
    *ImpUses_24 = ((MR_Word) (conv4_ImpUses_24));
    Var_62 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_32, 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_20, Var_62, STATE_VARIABLE_AugCompUnit_1_51, STATE_VARIABLE_AugCompUnit_44);
  }
  else
  {
    Errors_35 = ((MR_Word) ((MR_hl_field(1, HaveReadInt0_30, 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_21);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_22);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_23);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_24);
    STATE_VARIABLE_Baggage_2_55 = STATE_VARIABLE_Baggage_0_41;
    *STATE_VARIABLE_AugCompUnit_44 = STATE_VARIABLE_AugCompUnit_0_43;
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_35, STATE_VARIABLE_Baggage_2_55, STATE_VARIABLE_Baggage_42);
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 1))));
  MR_Word PT0_7 = ((MR_Word) ((MR_hl_field(0, X_4, 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT0_7, 0))));
  MR_Word Map_10;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 0))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 2))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 3))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 4))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 5))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 6))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 7))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 1) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_52));
  }
}

static void MR_CALL 
parse_tree__grab_modules__do_we_need_timestamps_2_p_0(
  MR_Word Baggage_3,
  MR_Word * MaybeReturnTimestamp_4)
{
  MR_Word MaybeTimestampMap_5 = ((MR_Word) ((MR_hl_field(0, Baggage_3, 5))));

  if ((MaybeTimestampMap_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeReturnTimestamp_4 = (MR_Integer) 0;
  else
    *MaybeReturnTimestamp_4 = (MR_Integer) 1;
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy2_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_25,
  MR_Word STATE_VARIABLE_Baggage_0_26,
  MR_Word * STATE_VARIABLE_Baggage_27,
  MR_Word STATE_VARIABLE_AugCompUnit_0_28,
  MR_Word * STATE_VARIABLE_AugCompUnit_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ImpIndirectImports_23;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_33;
    MR_Word STATE_VARIABLE_Baggage_1_34;
    MR_Word STATE_VARIABLE_AugCompUnit_1_35;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_32 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_14, Globals_15, ReadWhy2_17, Modules_18, Var_32, &ImpIndirectImports_23, STATE_VARIABLE_HaveParseTreeMaps_0_24, &STATE_VARIABLE_HaveParseTreeMaps_1_33, STATE_VARIABLE_Baggage_0_26, &STATE_VARIABLE_Baggage_1_34, STATE_VARIABLE_AugCompUnit_0_28, &STATE_VARIABLE_AugCompUnit_1_35);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpIndirectImports_23);
    if (succeeded)
    {
      *STATE_VARIABLE_AugCompUnit_29 = STATE_VARIABLE_AugCompUnit_1_35;
      *STATE_VARIABLE_Baggage_27 = STATE_VARIABLE_Baggage_1_34;
      *STATE_VARIABLE_HaveParseTreeMaps_25 = STATE_VARIABLE_HaveParseTreeMaps_1_33;
    }
    else
    {
      MR_Word next_value_of_Modules_18 = ImpIndirectImports_23;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_24 = STATE_VARIABLE_HaveParseTreeMaps_1_33;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_26 = STATE_VARIABLE_Baggage_1_34;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_28 = STATE_VARIABLE_AugCompUnit_1_35;

      // direct tailcall eliminated
      ;
      Modules_18 = next_value_of_Modules_18;
      STATE_VARIABLE_HaveParseTreeMaps_0_24 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_24;
      STATE_VARIABLE_Baggage_0_26 = next_value_of_STATE_VARIABLE_Baggage_0_26;
      STATE_VARIABLE_AugCompUnit_0_28 = next_value_of_STATE_VARIABLE_AugCompUnit_0_28;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word ReadWhy2_19,
  MR_Word Modules_20,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_30,
  MR_Word STATE_VARIABLE_Baggage_0_31,
  MR_Word * STATE_VARIABLE_Baggage_32,
  MR_Word STATE_VARIABLE_AugCompUnit_0_33,
  MR_Word * STATE_VARIABLE_AugCompUnit_34)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_26;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_ImpIndirectImports_1_39;
    MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_40;
    MR_Word STATE_VARIABLE_Baggage_1_41;
    MR_Word STATE_VARIABLE_AugCompUnit_1_42;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_37 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_20);
    Var_38 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_16, Globals_17, ReadWhy2_19, Var_37, Var_38, &IndirectImports_26, STATE_VARIABLE_ImpIndirectImports_0_27, &STATE_VARIABLE_ImpIndirectImports_1_39, STATE_VARIABLE_HaveParseTreeMaps_0_29, &STATE_VARIABLE_HaveParseTreeMaps_1_40, STATE_VARIABLE_Baggage_0_31, &STATE_VARIABLE_Baggage_1_41, STATE_VARIABLE_AugCompUnit_0_33, &STATE_VARIABLE_AugCompUnit_1_42);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_26);
    if (succeeded)
    {
      *STATE_VARIABLE_AugCompUnit_34 = STATE_VARIABLE_AugCompUnit_1_42;
      *STATE_VARIABLE_Baggage_32 = STATE_VARIABLE_Baggage_1_41;
      *STATE_VARIABLE_HaveParseTreeMaps_30 = STATE_VARIABLE_HaveParseTreeMaps_1_40;
      *STATE_VARIABLE_ImpIndirectImports_28 = STATE_VARIABLE_ImpIndirectImports_1_39;
    }
    else
    {
      MR_Word next_value_of_Modules_20 = IndirectImports_26;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27 = STATE_VARIABLE_ImpIndirectImports_1_39;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_29 = STATE_VARIABLE_HaveParseTreeMaps_1_40;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_31 = STATE_VARIABLE_Baggage_1_41;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_33 = STATE_VARIABLE_AugCompUnit_1_42;

      // direct tailcall eliminated
      ;
      Modules_20 = next_value_of_Modules_20;
      STATE_VARIABLE_ImpIndirectImports_0_27 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27;
      STATE_VARIABLE_HaveParseTreeMaps_0_29 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_29;
      STATE_VARIABLE_Baggage_0_31 = next_value_of_STATE_VARIABLE_Baggage_0_31;
      STATE_VARIABLE_AugCompUnit_0_33 = next_value_of_STATE_VARIABLE_AugCompUnit_0_33;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_8,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_9,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugCompUnit_15 = STATE_VARIABLE_AugCompUnit_0_14;
      *STATE_VARIABLE_Baggage_13 = STATE_VARIABLE_Baggage_0_12;
      *STATE_VARIABLE_HaveParseTreeMaps_11 = STATE_VARIABLE_HaveParseTreeMaps_0_10;
      *STATE_VARIABLE_ImpIndirectImports_9 = STATE_VARIABLE_ImpIndirectImports_0_8;
      *STATE_VARIABLE_IntIndirectImports_7 = STATE_VARIABLE_IntIndirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ModuleNames_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_70;
      MR_Word STATE_VARIABLE_Baggage_1_71;
      MR_Word STATE_VARIABLE_AugCompUnit_1_72;
      MR_Word STATE_VARIABLE_IntIndirectImports_1_74;
      MR_Word STATE_VARIABLE_ImpIndirectImports_1_75;
      MR_Word GrabbedFileMap_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_12, 6))));
      MR_Word OldGrabbedFile_82;
      MR_Box conv0_OldGrabbedFile_82;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_12;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_14;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), GrabbedFileMap_81, ((MR_Box) (ModuleName_44)), &conv0_OldGrabbedFile_82);
      if (succeeded)
      {
        OldGrabbedFile_82 = ((MR_Word) (conv0_OldGrabbedFile_82));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldFileKind_83;
        MR_Word Var_96;

        switch (MR_tag((MR_Word) OldGrabbedFile_82)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OldFileKind_83 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[0]));
            break;
          case (MR_Integer) 2:
            OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1]));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_82, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2]));
                break;
              case (MR_Integer) 1:
                OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3]));
                break;
            }
            break;
        }
        parse_tree__file_kind____Compare____file_kind_0_0(&Var_96, (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2])), OldFileKind_83);
        succeeded = ((MR_Integer) 1 == Var_96);
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word IntUses_52;
        MR_Word ImpUses_53;

        parse_tree__grab_modules__grab_module_int2_file_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_44, &IntUses_52, &ImpUses_53, STATE_VARIABLE_HaveParseTreeMaps_0_10, &STATE_VARIABLE_HaveParseTreeMaps_1_70, STATE_VARIABLE_Baggage_0_12, &STATE_VARIABLE_Baggage_1_71, STATE_VARIABLE_AugCompUnit_0_14, &STATE_VARIABLE_AugCompUnit_1_72);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_52, STATE_VARIABLE_IntIndirectImports_0_6, &STATE_VARIABLE_IntIndirectImports_1_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_53, STATE_VARIABLE_ImpIndirectImports_0_8, &STATE_VARIABLE_ImpIndirectImports_1_75);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_1_72 = STATE_VARIABLE_AugCompUnit_0_14;
        STATE_VARIABLE_Baggage_1_71 = STATE_VARIABLE_Baggage_0_12;
        STATE_VARIABLE_HaveParseTreeMaps_1_70 = STATE_VARIABLE_HaveParseTreeMaps_0_10;
        STATE_VARIABLE_ImpIndirectImports_1_75 = STATE_VARIABLE_ImpIndirectImports_0_8;
        STATE_VARIABLE_IntIndirectImports_1_74 = STATE_VARIABLE_IntIndirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_45;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_6 = STATE_VARIABLE_IntIndirectImports_1_74;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8 = STATE_VARIABLE_ImpIndirectImports_1_75;
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_10 = STATE_VARIABLE_HaveParseTreeMaps_1_70;
      next_value_of_STATE_VARIABLE_Baggage_0_12 = STATE_VARIABLE_Baggage_1_71;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_14 = STATE_VARIABLE_AugCompUnit_1_72;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_IntIndirectImports_0_6 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      STATE_VARIABLE_ImpIndirectImports_0_8 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8;
      STATE_VARIABLE_HaveParseTreeMaps_0_10 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_10;
      STATE_VARIABLE_Baggage_0_12 = next_value_of_STATE_VARIABLE_Baggage_0_12;
      STATE_VARIABLE_AugCompUnit_0_14 = next_value_of_STATE_VARIABLE_AugCompUnit_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_module_int2_file_14_p_0_1(
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

  parse_tree__convert_import_use__get_uses_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__grab_modules__grab_module_int2_file_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word Globals_16,
  MR_Word ReadWhy2_17,
  MR_Word ModuleName_18,
  MR_Word * IntUses_19,
  MR_Word * ImpUses_20,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_35,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_36,
  MR_Word STATE_VARIABLE_Baggage_0_37,
  MR_Word * STATE_VARIABLE_Baggage_38,
  MR_Word STATE_VARIABLE_AugCompUnit_0_39,
  MR_Word * STATE_VARIABLE_AugCompUnit_40)
{
  MR_Word ReturnTimestamp_25;
  MR_Word HaveReadInt2_26;
  MR_Word Errors_31;
  MR_Word STATE_VARIABLE_Baggage_2_55;
  MR_Word MaybeTimestampMap_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 5))));

  if ((MaybeTimestampMap_94 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_25 = (MR_Integer) 0;
  else
    ReturnTimestamp_25 = (MR_Integer) 1;
  parse_tree__read_modules__maybe_read_module_int2_10_p_0(ProgressStream_15, Globals_16, (MR_Integer) 1, ModuleName_18, ReturnTimestamp_25, &HaveReadInt2_26, STATE_VARIABLE_HaveParseTreeMaps_0_35, STATE_VARIABLE_HaveParseTreeMaps_36);
  if (((MR_tag((MR_Word) HaveReadInt2_26)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt2_28 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_26, 1))));
    MR_Word Source_29 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_26, 2))));
    MR_Word MaybeTimestamp_30;
    MR_Word GrabbedFile_32;
    MR_Word STATE_VARIABLE_Baggage_1_46;
    MR_Word STATE_VARIABLE_AugCompUnit_1_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_56;
    MR_Word GrabbedFileMap0_103;
    MR_Word GrabbedFileMap_104;
    MR_String Var_112;
    MR_String Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_119;
    MR_Box conv3_IntUses_19;
    MR_Box conv2_ImpUses_20;

    parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_29, &MaybeTimestamp_30, &Errors_31);
    {
      GrabbedFile_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GrabbedFile_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, GrabbedFile_32, 1) = ((MR_Box) (ParseTreeInt2_28));
      MR_hl_field(3, GrabbedFile_32, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy2_17));
    }
    GrabbedFileMap0_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 6))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_18)), ((MR_Box) (GrabbedFile_32)), GrabbedFileMap0_103, &GrabbedFileMap_104);
    Var_112 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 0))));
    Var_113 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 1))));
    Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 2))));
    Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 3))));
    Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 4))));
    Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 5))));
    Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 7))));
    {
      STATE_VARIABLE_Baggage_1_46 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 0) = ((MR_Box) (Var_112));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 1) = ((MR_Box) (Var_113));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 2) = ((MR_Box) (Var_114));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 3) = ((MR_Box) (Var_115));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 4) = ((MR_Box) (Var_116));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 5) = ((MR_Box) (Var_117));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 6) = ((MR_Box) (GrabbedFileMap_104));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 7) = ((MR_Box) (Var_119));
    }
    switch (ReadWhy2_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word IndirectIntSpec_33;

          {
            IndirectIntSpec_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IndirectIntSpec_33, 0) = ((MR_Box) (ParseTreeInt2_28));
            MR_hl_field(0, IndirectIntSpec_33, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(IndirectIntSpec_33, STATE_VARIABLE_AugCompUnit_0_39, &STATE_VARIABLE_AugCompUnit_1_47);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IntForOptSpec_34;

          {
            IntForOptSpec_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, IntForOptSpec_34, 0) = ((MR_Box) (ParseTreeInt2_28));
            MR_hl_field(2, IntForOptSpec_34, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_34, STATE_VARIABLE_AugCompUnit_0_39, &STATE_VARIABLE_AugCompUnit_1_47);
        }
        break;
    }
    Var_50 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_28, 4))));
    Var_51 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_52 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[6]), Var_50, ((MR_Box) (Var_51)), &conv3_IntUses_19, ((MR_Box) (Var_52)), &conv2_ImpUses_20);
    *IntUses_19 = ((MR_Word) (conv3_IntUses_19));
    *ImpUses_20 = ((MR_Word) (conv2_ImpUses_20));
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_18, (MR_Integer) 2, (MR_Integer) 4, MaybeTimestamp_30, STATE_VARIABLE_Baggage_1_46, &STATE_VARIABLE_Baggage_2_55);
    Var_56 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_28, 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_18, Var_56, STATE_VARIABLE_AugCompUnit_1_47, STATE_VARIABLE_AugCompUnit_40);
  }
  else
  {
    Errors_31 = ((MR_Word) ((MR_hl_field(1, HaveReadInt2_26, 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_20);
    STATE_VARIABLE_Baggage_2_55 = STATE_VARIABLE_Baggage_0_37;
    *STATE_VARIABLE_AugCompUnit_40 = STATE_VARIABLE_AugCompUnit_0_39;
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_2_55, STATE_VARIABLE_Baggage_38);
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 3))));
  MR_Word PT2_7 = ((MR_Word) ((MR_hl_field(0, X_4, 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT2_7, 0))));
  MR_Word Map_10;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 0))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 1))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 2))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 4))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 5))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 6))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 7))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 3) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_41));
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_module_int1_file_14_p_0_1(
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

  parse_tree__convert_import_use__get_uses_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__grab_modules__grab_module_int1_file_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word Globals_16,
  MR_Word ReadWhy1_17,
  MR_Word ModuleName_18,
  MR_Word * IntUses_19,
  MR_Word * ImpUses_20,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_37,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_38,
  MR_Word STATE_VARIABLE_Baggage_0_39,
  MR_Word * STATE_VARIABLE_Baggage_40,
  MR_Word STATE_VARIABLE_AugCompUnit_0_41,
  MR_Word * STATE_VARIABLE_AugCompUnit_42)
{
  MR_Word ReturnTimestamp_25;
  MR_Word HaveReadInt1_26;
  MR_Word MaybeTimestampMap_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_39, 5))));

  if ((MaybeTimestampMap_116 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_25 = (MR_Integer) 0;
  else
    ReturnTimestamp_25 = (MR_Integer) 1;
  parse_tree__read_modules__maybe_read_module_int1_10_p_0(ProgressStream_15, Globals_16, (MR_Integer) 1, ModuleName_18, ReturnTimestamp_25, &HaveReadInt1_26, STATE_VARIABLE_HaveParseTreeMaps_0_37, STATE_VARIABLE_HaveParseTreeMaps_38);
  if (((MR_tag((MR_Word) HaveReadInt1_26)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt1_28 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_26, 1))));
    MR_Word Source_29 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_26, 2))));
    MR_Word MaybeTimestamp_30;
    MR_Word Errors_31;
    MR_Word GrabbedFile_32;
    MR_Word RecompAvail_33;
    MR_Word STATE_VARIABLE_Baggage_1_48;
    MR_Word STATE_VARIABLE_AugCompUnit_1_49;
    MR_Word STATE_VARIABLE_Baggage_2_50;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Box conv3_IntUses_19;
    MR_Box conv2_ImpUses_20;

    parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_29, &MaybeTimestamp_30, &Errors_31);
    {
      GrabbedFile_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GrabbedFile_32, 0) = ((MR_Box) (ParseTreeInt1_28));
      MR_hl_field(2, GrabbedFile_32, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_18, GrabbedFile_32, STATE_VARIABLE_Baggage_0_39, &STATE_VARIABLE_Baggage_1_48);
    switch (ReadWhy1_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word DirectIntSpec_34;

          RecompAvail_33 = (MR_Integer) 2;
          {
            DirectIntSpec_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_34, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(0, DirectIntSpec_34, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_34, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_49);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_50);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_112;

          RecompAvail_33 = (MR_Integer) 4;
          {
            DirectIntSpec_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_112, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(0, DirectIntSpec_112, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_112, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_49);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_50);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word DirectIntSpec_113;

          RecompAvail_33 = (MR_Integer) 1;
          {
            DirectIntSpec_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_113, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(0, DirectIntSpec_113, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_113, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_49);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_50);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_114;

          RecompAvail_33 = (MR_Integer) 3;
          {
            DirectIntSpec_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_114, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(0, DirectIntSpec_114, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_114, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_49);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_50);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word DirectIntSpec_115;

          RecompAvail_33 = (MR_Integer) 5;
          {
            DirectIntSpec_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_115, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(0, DirectIntSpec_115, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_115, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_49);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_50);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word IntForOptSpec_35;

          RecompAvail_33 = (MR_Integer) 4;
          {
            IntForOptSpec_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, IntForOptSpec_35, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(1, IntForOptSpec_35, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_35, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_49);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_50);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word TypeRepnSpec_36;

          RecompAvail_33 = (MR_Integer) 1;
          TypeRepnSpec_36 = (MR_Word) (ParseTreeInt1_28);
          parse_tree__grab_modules__aug_compilation_unit_add_type_repn_spec_3_p_0(TypeRepnSpec_36, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_49);
          STATE_VARIABLE_Baggage_2_50 = STATE_VARIABLE_Baggage_1_48;
        }
        break;
    }
    Var_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_28, 4))));
    Var_56 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[5]), Var_55, ((MR_Box) (Var_56)), &conv3_IntUses_19, ((MR_Box) (Var_57)), &conv2_ImpUses_20);
    *IntUses_19 = ((MR_Word) (conv3_IntUses_19));
    *ImpUses_20 = ((MR_Word) (conv2_ImpUses_20));
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_18, (MR_Integer) 1, RecompAvail_33, MaybeTimestamp_30, STATE_VARIABLE_Baggage_2_50, STATE_VARIABLE_Baggage_40);
    Var_60 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_28, 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_18, Var_60, STATE_VARIABLE_AugCompUnit_1_49, STATE_VARIABLE_AugCompUnit_42);
  }
  else
  {
    MR_Word Errors_65 = ((MR_Word) ((MR_hl_field(1, HaveReadInt1_26, 1))));

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_20);
    parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_65, STATE_VARIABLE_Baggage_0_39, STATE_VARIABLE_Baggage_40);
    *STATE_VARIABLE_AugCompUnit_42 = STATE_VARIABLE_AugCompUnit_0_41;
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  if ((MaybeVersionNumbers_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AugCompUnit_12 = STATE_VARIABLE_AugCompUnit_0_11;
  else
  {
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(1, MaybeVersionNumbers_6, 0))));
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 8))));
    MR_Word ModuleVersionNumbersMap_10;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_module_item_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 1))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 2))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 3))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 4))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 5))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 6))));
    Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugCompUnit_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_23));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 8) = ((MR_Box) (ModuleVersionNumbersMap_10));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_type_repn_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_10,
  MR_Word * STATE_VARIABLE_AugCompUnit_11)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, 7))));
  MR_Word PT1_7 = (MR_Word) (X_4);
  MR_Word MN_8 = ((MR_Word) ((MR_hl_field(0, PT1_7, 0))));
  MR_Word Map_9;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_46;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_type_repn_spec_0), ((MR_Box) (MN_8)), ((MR_Box) (X_4)), Map0_6, &Map_9);
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, 0))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, 1))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, 2))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, 3))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, 4))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, 5))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 7) = ((MR_Box) (Map_9));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_46));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_15,
  MR_Word * STATE_VARIABLE_AugCompUnit_16)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, 6))));
  MR_Word MN_9;
  MR_Word Map_14;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_85;
  MR_Word Var_86;

  switch (MR_tag((MR_Word) X_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PT0_7 = ((MR_Word) ((MR_hl_field(0, X_4, 0))));

        MN_9 = ((MR_Word) ((MR_hl_field(0, PT0_7, 0))));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PT1_10 = ((MR_Word) ((MR_hl_field(1, X_4, 0))));

        MN_9 = ((MR_Word) ((MR_hl_field(0, PT1_10, 0))));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PT2_12 = ((MR_Word) ((MR_hl_field(2, X_4, 0))));

        MN_9 = ((MR_Word) ((MR_hl_field(0, PT2_12, 0))));
      }
      break;
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_14);
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, 0))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, 1))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, 2))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, 3))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, 4))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, 5))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, 7))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 6) = ((MR_Box) (Map_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_86));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 2))));
  MR_Word PT1_7 = ((MR_Word) ((MR_hl_field(0, X_4, 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT1_7, 0))));
  MR_Word Map_10;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 0))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 1))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 3))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 4))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 5))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 7))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 2) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_47));
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImportAndOrUseMap_15;

  parse_tree__grab_modules__add_missing_imp_module_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImportAndOrUseMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImportAndOrUseMap_15));
}

static void MR_CALL 
parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImportAndOrUseMap_14;

  parse_tree__grab_modules__add_missing_int_module_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImportAndOrUseMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImportAndOrUseMap_14));
}

void MR_CALL 
parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeModuleSrc0_13,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_48,
  MR_Word STATE_VARIABLE_Baggage_0_49,
  MR_Word * STATE_VARIABLE_Baggage_50,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_51,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_52)
{
  MR_Word GrabbedFileMap0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_49, 6))));
  MR_Word ModuleName_21;
  MR_Word GrabbedFileMap1_22;
  MR_Word SrcMap0_23;
  MR_Word SrcMap_24;
  MR_Word ImportAndOrUseMap0_25;
  MR_Word IntImportMap0_26;
  MR_Word IntUseMap0_27;
  MR_Word ImpImportMap0_28;
  MR_Word ImpUseMap0_29;
  MR_Word IntUseImpImportMap0_30;
  MR_Word IntImports0_31;
  MR_Word IntUses_32;
  MR_Word ImpImports_33;
  MR_Word ImpUses_34;
  MR_Word IntUsesImpImports_35;
  MR_Word IntImports_36;
  MR_Word Ancestors_37;
  MR_Word AncestorImports_38;
  MR_Word AncestorUses_39;
  MR_Word ImportAccessibilityInfo_40;
  MR_Word MissingModulesInt_41;
  MR_Word MissingModulesImp_42;
  MR_Word DelayedSpecs_43;
  MR_Word AccessSpecs_44;
  MR_Word ImportAndOrUseMap1_45;
  MR_Word ImportAndOrUseMap_46;
  MR_Word ParseTreeModuleSrc_47;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_Baggage_2_57;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_59;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_1_60;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_2_65;
  MR_Word STATE_VARIABLE_Baggage_3_66;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_2_67;
  MR_Word STATE_VARIABLE_IntIndirectImported_1_69;
  MR_Word STATE_VARIABLE_ImpIndirectImported_1_70;
  MR_Word Var_73;
  MR_Word STATE_VARIABLE_IntIndirectImported_2_74;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_3_75;
  MR_Word STATE_VARIABLE_Baggage_4_76;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_3_77;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_IntIndirectImported_3_82;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_4_83;
  MR_Word STATE_VARIABLE_Baggage_5_84;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_4_85;
  MR_Word Var_89;
  MR_Word STATE_VARIABLE_ImpIndirectImported_2_90;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_5_91;
  MR_Word STATE_VARIABLE_Baggage_6_92;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_5_93;
  MR_Word Var_97;
  MR_Word STATE_VARIABLE_IntIndirectImported_4_98;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_6_99;
  MR_Word STATE_VARIABLE_Baggage_7_100;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_6_101;
  MR_Word Var_105;
  MR_Word STATE_VARIABLE_IntIndirectImported_5_106;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_7_107;
  MR_Word STATE_VARIABLE_Baggage_8_108;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_7_109;
  MR_Word Var_113;
  MR_Word STATE_VARIABLE_ImpIndirectImported_3_114;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_8_115;
  MR_Word STATE_VARIABLE_Baggage_9_116;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_8_117;
  MR_Word Var_121;
  MR_Word STATE_VARIABLE_IntIndirectImported_6_122;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_9_123;
  MR_Word STATE_VARIABLE_Baggage_10_124;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_9_125;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_10_129;
  MR_Word STATE_VARIABLE_Baggage_11_130;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_10_131;
  MR_Word STATE_VARIABLE_Baggage_12_136;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_11_137;
  MR_String Var_150;
  MR_String Var_151;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word Var_289;
  MR_Word Var_290;
  MR_Word Var_291;
  MR_Word Var_292;
  MR_Word Var_208;
  MR_Word Var_210;
  MR_Word Var_211;
  MR_Word Var_212;
  MR_Word Var_213;
  MR_Word Var_214;
  MR_Word Var_215;
  MR_Box conv1_ImportAndOrUseMap1_45;
  MR_Box conv3_ImportAndOrUseMap_46;
  MR_Word Var_251;
  MR_Word Var_252;
  MR_Word Var_253;
  MR_Word Var_255;
  MR_Word Var_256;
  MR_Word Var_257;
  MR_Word Var_258;
  MR_Word Var_259;
  MR_Word Var_260;
  MR_Word Var_261;
  MR_Word Var_262;
  MR_Word Var_263;
  MR_Word Var_264;
  MR_Word Var_265;
  MR_Word Var_266;
  MR_Word Var_267;
  MR_Word Var_268;
  MR_Word Var_269;
  MR_Word Var_270;
  MR_Word Var_271;
  MR_Word Var_272;
  MR_Word Var_273;
  MR_Word Var_274;
  MR_Word Var_275;
  MR_Word Var_276;
  MR_Word Var_277;
  MR_Word Var_278;
  MR_Word Var_279;
  MR_Word Var_280;
  MR_Word Var_281;
  MR_Word Var_282;
  MR_Word Var_283;
  MR_Word Var_284;
  MR_Word Var_285;
  MR_Word Var_286;

  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (ParseTreeModuleSrc0_13));
  }
  Var_58 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  ModuleName_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 0))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_21)), ((MR_Box) (Var_55)), GrabbedFileMap0_20, &GrabbedFileMap1_22);
  Var_150 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_49, 0))));
  Var_151 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_49, 1))));
  Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_49, 2))));
  Var_153 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_49, 3))));
  Var_154 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_49, 4))));
  Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_49, 5))));
  {
    STATE_VARIABLE_Baggage_2_57 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_57, 0) = ((MR_Box) (Var_150));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_57, 1) = ((MR_Box) (Var_151));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_57, 2) = ((MR_Box) (Var_152));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_57, 3) = ((MR_Box) (Var_153));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_57, 4) = ((MR_Box) (Var_154));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_57, 5) = ((MR_Box) (Var_155));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_57, 6) = ((MR_Box) (GrabbedFileMap1_22));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_57, 7) = ((MR_Box) (Var_58));
  }
  SrcMap0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_51, 1))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_21)), ((MR_Box) (ParseTreeModuleSrc0_13)), SrcMap0_23, &SrcMap_24);
  Var_208 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_51, 0))));
  Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_51, 2))));
  Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_51, 3))));
  Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_51, 4))));
  Var_213 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_51, 5))));
  Var_214 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_51, 6))));
  Var_215 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_51, 7))));
  {
    STATE_VARIABLE_HaveParseTreeMaps_1_59 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_59, 0) = ((MR_Box) (Var_208));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_59, 1) = ((MR_Box) (SrcMap_24));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_59, 2) = ((MR_Box) (Var_210));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_59, 3) = ((MR_Box) (Var_211));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_59, 4) = ((MR_Box) (Var_212));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_59, 5) = ((MR_Box) (Var_213));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_59, 6) = ((MR_Box) (Var_214));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_59, 7) = ((MR_Box) (Var_215));
  }
  parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(ParseTreeModuleSrc0_13, &STATE_VARIABLE_AugMakeIntUnit_1_60);
  ImportAndOrUseMap0_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 3))));
  parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportAndOrUseMap0_25, &IntImportMap0_26, &IntUseMap0_27, &ImpImportMap0_28, &ImpUseMap0_29, &IntUseImpImportMap0_30);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntImportMap0_26, &IntImports0_31);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseMap0_27, &IntUses_32);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpImportMap0_28, &ImpImports_33);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpUseMap0_29, &ImpUses_34);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseImpImportMap0_30, &IntUsesImpImports_35);
  Var_61 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_61)), IntImports0_31, &IntImports_36);
  Ancestors_37 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_21);
  Var_63 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_64 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_16_p_0(ProgressStream_11, Globals_12, Ancestors_37, Var_63, &AncestorImports_38, Var_64, &AncestorUses_39, STATE_VARIABLE_HaveParseTreeMaps_1_59, &STATE_VARIABLE_HaveParseTreeMaps_2_65, STATE_VARIABLE_Baggage_2_57, &STATE_VARIABLE_Baggage_3_66, STATE_VARIABLE_AugMakeIntUnit_1_60, &STATE_VARIABLE_AugMakeIntUnit_2_67);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_1_69);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_1_70);
  Var_73 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorImports_38);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 0, Var_73, STATE_VARIABLE_IntIndirectImported_1_69, &STATE_VARIABLE_IntIndirectImported_2_74, STATE_VARIABLE_HaveParseTreeMaps_2_65, &STATE_VARIABLE_HaveParseTreeMaps_3_75, STATE_VARIABLE_Baggage_3_66, &STATE_VARIABLE_Baggage_4_76, STATE_VARIABLE_AugMakeIntUnit_2_67, &STATE_VARIABLE_AugMakeIntUnit_3_77);
  Var_81 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_36);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 1, Var_81, STATE_VARIABLE_IntIndirectImported_2_74, &STATE_VARIABLE_IntIndirectImported_3_82, STATE_VARIABLE_HaveParseTreeMaps_3_75, &STATE_VARIABLE_HaveParseTreeMaps_4_83, STATE_VARIABLE_Baggage_4_76, &STATE_VARIABLE_Baggage_5_84, STATE_VARIABLE_AugMakeIntUnit_3_77, &STATE_VARIABLE_AugMakeIntUnit_4_85);
  Var_89 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_33);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 2, Var_89, STATE_VARIABLE_ImpIndirectImported_1_70, &STATE_VARIABLE_ImpIndirectImported_2_90, STATE_VARIABLE_HaveParseTreeMaps_4_83, &STATE_VARIABLE_HaveParseTreeMaps_5_91, STATE_VARIABLE_Baggage_5_84, &STATE_VARIABLE_Baggage_6_92, STATE_VARIABLE_AugMakeIntUnit_4_85, &STATE_VARIABLE_AugMakeIntUnit_5_93);
  Var_97 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorUses_39);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 3, Var_97, STATE_VARIABLE_IntIndirectImported_3_82, &STATE_VARIABLE_IntIndirectImported_4_98, STATE_VARIABLE_HaveParseTreeMaps_5_91, &STATE_VARIABLE_HaveParseTreeMaps_6_99, STATE_VARIABLE_Baggage_6_92, &STATE_VARIABLE_Baggage_7_100, STATE_VARIABLE_AugMakeIntUnit_5_93, &STATE_VARIABLE_AugMakeIntUnit_6_101);
  Var_105 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_32);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 4, Var_105, STATE_VARIABLE_IntIndirectImported_4_98, &STATE_VARIABLE_IntIndirectImported_5_106, STATE_VARIABLE_HaveParseTreeMaps_6_99, &STATE_VARIABLE_HaveParseTreeMaps_7_107, STATE_VARIABLE_Baggage_7_100, &STATE_VARIABLE_Baggage_8_108, STATE_VARIABLE_AugMakeIntUnit_6_101, &STATE_VARIABLE_AugMakeIntUnit_7_109);
  Var_113 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_34);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 5, Var_113, STATE_VARIABLE_ImpIndirectImported_2_90, &STATE_VARIABLE_ImpIndirectImported_3_114, STATE_VARIABLE_HaveParseTreeMaps_7_107, &STATE_VARIABLE_HaveParseTreeMaps_8_115, STATE_VARIABLE_Baggage_8_108, &STATE_VARIABLE_Baggage_9_116, STATE_VARIABLE_AugMakeIntUnit_7_109, &STATE_VARIABLE_AugMakeIntUnit_8_117);
  Var_121 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsesImpImports_35);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 6, Var_121, STATE_VARIABLE_IntIndirectImported_5_106, &STATE_VARIABLE_IntIndirectImported_6_122, STATE_VARIABLE_HaveParseTreeMaps_8_115, &STATE_VARIABLE_HaveParseTreeMaps_9_123, STATE_VARIABLE_Baggage_9_116, &STATE_VARIABLE_Baggage_10_124, STATE_VARIABLE_AugMakeIntUnit_8_117, &STATE_VARIABLE_AugMakeIntUnit_9_125);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_11, Globals_12, (MR_Integer) 7, STATE_VARIABLE_IntIndirectImported_6_122, STATE_VARIABLE_HaveParseTreeMaps_9_123, &STATE_VARIABLE_HaveParseTreeMaps_10_129, STATE_VARIABLE_Baggage_10_124, &STATE_VARIABLE_Baggage_11_130, STATE_VARIABLE_AugMakeIntUnit_9_125, &STATE_VARIABLE_AugMakeIntUnit_10_131);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_11, Globals_12, (MR_Integer) 8, STATE_VARIABLE_ImpIndirectImported_3_114, STATE_VARIABLE_HaveParseTreeMaps_10_129, STATE_VARIABLE_HaveParseTreeMaps_52, STATE_VARIABLE_Baggage_11_130, &STATE_VARIABLE_Baggage_12_136, STATE_VARIABLE_AugMakeIntUnit_10_131, &STATE_VARIABLE_AugMakeIntUnit_11_137);
  parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0(STATE_VARIABLE_AugMakeIntUnit_11_137, &ImportAccessibilityInfo_40);
  parse_tree__check_import_accessibility__check_import_accessibility_6_p_0(ParseTreeModuleSrc0_13, ImportAccessibilityInfo_40, &MissingModulesInt_41, &MissingModulesImp_42, &DelayedSpecs_43, &AccessSpecs_44);
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(AccessSpecs_44, STATE_VARIABLE_Baggage_12_136, STATE_VARIABLE_Baggage_50);
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), MissingModulesInt_41, ((MR_Box) (ImportAndOrUseMap0_25)), &conv1_ImportAndOrUseMap1_45);
  ImportAndOrUseMap1_45 = ((MR_Word) (conv1_ImportAndOrUseMap1_45));
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[4]), MissingModulesImp_42, ((MR_Box) (ImportAndOrUseMap1_45)), &conv3_ImportAndOrUseMap_46);
  ImportAndOrUseMap_46 = ((MR_Word) (conv3_ImportAndOrUseMap_46));
  Var_251 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 0))));
  Var_252 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 1))));
  Var_253 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 2))));
  Var_255 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 4))));
  Var_256 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 5))));
  Var_257 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 6))));
  Var_258 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 7))));
  Var_259 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 8))));
  Var_260 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 9))));
  Var_261 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 10))));
  Var_262 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 11))));
  Var_263 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 12))));
  Var_264 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 13))));
  Var_265 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 14))));
  Var_266 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 15))));
  Var_267 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 16))));
  Var_268 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 17))));
  Var_269 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 18))));
  Var_270 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 19))));
  Var_271 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 20))));
  Var_272 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 21))));
  Var_273 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 22))));
  Var_274 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 23))));
  Var_275 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 24))));
  Var_276 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 25))));
  Var_277 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 26))));
  Var_278 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 27))));
  Var_279 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 28))));
  Var_280 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 29))));
  Var_281 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 30))));
  Var_282 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 31))));
  Var_283 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 32))));
  Var_284 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 33))));
  Var_285 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 34))));
  Var_286 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 35))));
  {
    ParseTreeModuleSrc_47 = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeModuleSrc_47, 0) = ((MR_Box) (Var_251));
    MR_hl_field(0, ParseTreeModuleSrc_47, 1) = ((MR_Box) (Var_252));
    MR_hl_field(0, ParseTreeModuleSrc_47, 2) = ((MR_Box) (Var_253));
    MR_hl_field(0, ParseTreeModuleSrc_47, 3) = ((MR_Box) (ImportAndOrUseMap_46));
    MR_hl_field(0, ParseTreeModuleSrc_47, 4) = ((MR_Box) (Var_255));
    MR_hl_field(0, ParseTreeModuleSrc_47, 5) = ((MR_Box) (Var_256));
    MR_hl_field(0, ParseTreeModuleSrc_47, 6) = ((MR_Box) (Var_257));
    MR_hl_field(0, ParseTreeModuleSrc_47, 7) = ((MR_Box) (Var_258));
    MR_hl_field(0, ParseTreeModuleSrc_47, 8) = ((MR_Box) (Var_259));
    MR_hl_field(0, ParseTreeModuleSrc_47, 9) = ((MR_Box) (Var_260));
    MR_hl_field(0, ParseTreeModuleSrc_47, 10) = ((MR_Box) (Var_261));
    MR_hl_field(0, ParseTreeModuleSrc_47, 11) = ((MR_Box) (Var_262));
    MR_hl_field(0, ParseTreeModuleSrc_47, 12) = ((MR_Box) (Var_263));
    MR_hl_field(0, ParseTreeModuleSrc_47, 13) = ((MR_Box) (Var_264));
    MR_hl_field(0, ParseTreeModuleSrc_47, 14) = ((MR_Box) (Var_265));
    MR_hl_field(0, ParseTreeModuleSrc_47, 15) = ((MR_Box) (Var_266));
    MR_hl_field(0, ParseTreeModuleSrc_47, 16) = ((MR_Box) (Var_267));
    MR_hl_field(0, ParseTreeModuleSrc_47, 17) = ((MR_Box) (Var_268));
    MR_hl_field(0, ParseTreeModuleSrc_47, 18) = ((MR_Box) (Var_269));
    MR_hl_field(0, ParseTreeModuleSrc_47, 19) = ((MR_Box) (Var_270));
    MR_hl_field(0, ParseTreeModuleSrc_47, 20) = ((MR_Box) (Var_271));
    MR_hl_field(0, ParseTreeModuleSrc_47, 21) = ((MR_Box) (Var_272));
    MR_hl_field(0, ParseTreeModuleSrc_47, 22) = ((MR_Box) (Var_273));
    MR_hl_field(0, ParseTreeModuleSrc_47, 23) = ((MR_Box) (Var_274));
    MR_hl_field(0, ParseTreeModuleSrc_47, 24) = ((MR_Box) (Var_275));
    MR_hl_field(0, ParseTreeModuleSrc_47, 25) = ((MR_Box) (Var_276));
    MR_hl_field(0, ParseTreeModuleSrc_47, 26) = ((MR_Box) (Var_277));
    MR_hl_field(0, ParseTreeModuleSrc_47, 27) = ((MR_Box) (Var_278));
    MR_hl_field(0, ParseTreeModuleSrc_47, 28) = ((MR_Box) (Var_279));
    MR_hl_field(0, ParseTreeModuleSrc_47, 29) = ((MR_Box) (Var_280));
    MR_hl_field(0, ParseTreeModuleSrc_47, 30) = ((MR_Box) (Var_281));
    MR_hl_field(0, ParseTreeModuleSrc_47, 31) = ((MR_Box) (Var_282));
    MR_hl_field(0, ParseTreeModuleSrc_47, 32) = ((MR_Box) (Var_283));
    MR_hl_field(0, ParseTreeModuleSrc_47, 33) = ((MR_Box) (Var_284));
    MR_hl_field(0, ParseTreeModuleSrc_47, 34) = ((MR_Box) (Var_285));
    MR_hl_field(0, ParseTreeModuleSrc_47, 35) = ((MR_Box) (Var_286));
  }
  Var_289 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_11_137, 2))));
  Var_290 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_11_137, 3))));
  Var_291 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_11_137, 4))));
  Var_292 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_11_137, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_48 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_47));
    MR_hl_field(0, base, 1) = ((MR_Box) (DelayedSpecs_43));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_289));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_290));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_291));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_292));
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectImports_0_5,
  MR_Word * STATE_VARIABLE_DirectImports_6,
  MR_Word STATE_VARIABLE_DirectUses_0_7,
  MR_Word * STATE_VARIABLE_DirectUses_8,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_10,
  MR_Word STATE_VARIABLE_Baggage_0_11,
  MR_Word * STATE_VARIABLE_Baggage_12,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_13,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugMakeIntUnit_14 = STATE_VARIABLE_AugMakeIntUnit_0_13;
      *STATE_VARIABLE_Baggage_12 = STATE_VARIABLE_Baggage_0_11;
      *STATE_VARIABLE_HaveParseTreeMaps_10 = STATE_VARIABLE_HaveParseTreeMaps_0_9;
      *STATE_VARIABLE_DirectUses_8 = STATE_VARIABLE_DirectUses_0_7;
      *STATE_VARIABLE_DirectImports_6 = STATE_VARIABLE_DirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ModuleNames_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_70;
      MR_Word STATE_VARIABLE_Baggage_1_71;
      MR_Word STATE_VARIABLE_AugMakeIntUnit_1_72;
      MR_Word STATE_VARIABLE_DirectImports_2_75;
      MR_Word STATE_VARIABLE_DirectUses_2_77;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_7;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_11;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_13;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_11, ModuleName_41, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word IntImports_50;
        MR_Word ImpImports_51;
        MR_Word IntUses_52;
        MR_Word ImpUses_53;
        MR_Word STATE_VARIABLE_DirectImports_1_74;
        MR_Word STATE_VARIABLE_DirectUses_1_76;

        parse_tree__grab_modules__grab_module_int0_file_for_amiu_15_p_0(HeadVar__1_1, HeadVar__2_2, ModuleName_41, &IntImports_50, &ImpImports_51, &IntUses_52, &ImpUses_53, STATE_VARIABLE_HaveParseTreeMaps_0_9, &STATE_VARIABLE_HaveParseTreeMaps_1_70, STATE_VARIABLE_Baggage_0_11, &STATE_VARIABLE_Baggage_1_71, STATE_VARIABLE_AugMakeIntUnit_0_13, &STATE_VARIABLE_AugMakeIntUnit_1_72);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_50, STATE_VARIABLE_DirectImports_0_5, &STATE_VARIABLE_DirectImports_1_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_51, STATE_VARIABLE_DirectImports_1_74, &STATE_VARIABLE_DirectImports_2_75);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_52, STATE_VARIABLE_DirectUses_0_7, &STATE_VARIABLE_DirectUses_1_76);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_53, STATE_VARIABLE_DirectUses_1_76, &STATE_VARIABLE_DirectUses_2_77);
      }
      else
      {
        STATE_VARIABLE_AugMakeIntUnit_1_72 = STATE_VARIABLE_AugMakeIntUnit_0_13;
        STATE_VARIABLE_Baggage_1_71 = STATE_VARIABLE_Baggage_0_11;
        STATE_VARIABLE_HaveParseTreeMaps_1_70 = STATE_VARIABLE_HaveParseTreeMaps_0_9;
        STATE_VARIABLE_DirectUses_2_77 = STATE_VARIABLE_DirectUses_0_7;
        STATE_VARIABLE_DirectImports_2_75 = STATE_VARIABLE_DirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_42;
      next_value_of_STATE_VARIABLE_DirectImports_0_5 = STATE_VARIABLE_DirectImports_2_75;
      next_value_of_STATE_VARIABLE_DirectUses_0_7 = STATE_VARIABLE_DirectUses_2_77;
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_9 = STATE_VARIABLE_HaveParseTreeMaps_1_70;
      next_value_of_STATE_VARIABLE_Baggage_0_11 = STATE_VARIABLE_Baggage_1_71;
      next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_13 = STATE_VARIABLE_AugMakeIntUnit_1_72;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DirectImports_0_5 = next_value_of_STATE_VARIABLE_DirectImports_0_5;
      STATE_VARIABLE_DirectUses_0_7 = next_value_of_STATE_VARIABLE_DirectUses_0_7;
      STATE_VARIABLE_HaveParseTreeMaps_0_9 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_9;
      STATE_VARIABLE_Baggage_0_11 = next_value_of_STATE_VARIABLE_Baggage_0_11;
      STATE_VARIABLE_AugMakeIntUnit_0_13 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_module_int0_file_for_amiu_15_p_0_1(
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

  parse_tree__convert_import_use__get_imports_uses_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_9)), &conv0_HeadVar__10_10);
  *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv2_HeadVar__6_6));
  *wrapper_arg_8 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_10 = ((MR_Box) (conv0_HeadVar__10_10));
}

static void MR_CALL 
parse_tree__grab_modules__grab_module_int0_file_for_amiu_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word ModuleName_18,
  MR_Word * IntImports_19,
  MR_Word * ImpImports_20,
  MR_Word * IntUses_21,
  MR_Word * ImpUses_22,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_35,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_36,
  MR_Word STATE_VARIABLE_Baggage_0_37,
  MR_Word * STATE_VARIABLE_Baggage_38,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_39,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_40)
{
  MR_Word ReturnTimestamp_27;
  MR_Word HaveReadInt0_28;
  MR_Word Errors_33;
  MR_Word STATE_VARIABLE_Baggage_2_51;
  MR_Word MaybeTimestampMap_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 5))));

  if ((MaybeTimestampMap_122 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_27 = (MR_Integer) 0;
  else
    ReturnTimestamp_27 = (MR_Integer) 1;
  parse_tree__read_modules__maybe_read_module_int0_10_p_0(ProgressStream_16, Globals_17, (MR_Integer) 1, ModuleName_18, ReturnTimestamp_27, &HaveReadInt0_28, STATE_VARIABLE_HaveParseTreeMaps_0_35, STATE_VARIABLE_HaveParseTreeMaps_36);
  if (((MR_tag((MR_Word) HaveReadInt0_28)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt0_30 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_28, 1))));
    MR_Word Source_31 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_28, 2))));
    MR_Word MaybeTimestamp_32;
    MR_Word GrabbedFile_34;
    MR_Word STATE_VARIABLE_Baggage_1_47;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_1_48;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Box conv7_IntImports_19;
    MR_Box conv6_ImpImports_20;
    MR_Box conv5_IntUses_21;
    MR_Box conv4_ImpUses_22;

    parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_31, &MaybeTimestamp_32, &Errors_33);
    {
      GrabbedFile_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GrabbedFile_34, 0) = ((MR_Box) (ParseTreeInt0_30));
      MR_hl_field(1, GrabbedFile_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_18, GrabbedFile_34, STATE_VARIABLE_Baggage_0_37, &STATE_VARIABLE_Baggage_1_47);
    parse_tree__grab_modules__aug_make_int_unit_add_ancestor_int_3_p_0(ParseTreeInt0_30, STATE_VARIABLE_AugMakeIntUnit_0_39, &STATE_VARIABLE_AugMakeIntUnit_1_48);
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_18, (MR_Integer) 0, (MR_Integer) 1, MaybeTimestamp_32, STATE_VARIABLE_Baggage_1_47, &STATE_VARIABLE_Baggage_2_51);
    Var_53 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_30, 4))));
    Var_54 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_55 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_56 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), Var_53, ((MR_Box) (Var_54)), &conv7_IntImports_19, ((MR_Box) (Var_55)), &conv6_ImpImports_20, ((MR_Box) (Var_56)), &conv5_IntUses_21, ((MR_Box) (Var_57)), &conv4_ImpUses_22);
    *IntImports_19 = ((MR_Word) (conv7_IntImports_19));
    *ImpImports_20 = ((MR_Word) (conv6_ImpImports_20));
    *IntUses_21 = ((MR_Word) (conv5_IntUses_21));
    *ImpUses_22 = ((MR_Word) (conv4_ImpUses_22));
    Var_58 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_30, 2))));
    parse_tree__grab_modules__aug_make_int_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_18, Var_58, STATE_VARIABLE_AugMakeIntUnit_1_48, STATE_VARIABLE_AugMakeIntUnit_40);
  }
  else
  {
    Errors_33 = ((MR_Word) ((MR_hl_field(1, HaveReadInt0_28, 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_20);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_21);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_22);
    STATE_VARIABLE_Baggage_2_51 = STATE_VARIABLE_Baggage_0_37;
    *STATE_VARIABLE_AugMakeIntUnit_40 = STATE_VARIABLE_AugMakeIntUnit_0_39;
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_33, STATE_VARIABLE_Baggage_2_51, STATE_VARIABLE_Baggage_38);
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_maybe_add_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  if ((MaybeVersionNumbers_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AugMakeIntUnit_12 = STATE_VARIABLE_AugMakeIntUnit_0_11;
  else
  {
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(1, MaybeVersionNumbers_6, 0))));
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 5))));
    MR_Word ModuleVersionNumbersMap_10;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_module_item_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 1))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugMakeIntUnit_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 5) = ((MR_Box) (ModuleVersionNumbersMap_10));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_ancestor_int_3_p_0(
  MR_Word PT0_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_9,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_10)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, 2))));
  MR_Word MN_7 = ((MR_Word) ((MR_hl_field(0, PT0_4, 0))));
  MR_Word Map_8;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int0_0), ((MR_Box) (MN_7)), ((MR_Box) (PT0_4)), Map0_6, &Map_8);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, 0))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, 1))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, 3))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, 4))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 2) = ((MR_Box) (Map_8));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_44));
  }
}

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(
  MR_Word ModuleName_5,
  MR_Word FileWhy_6,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11)
{
  MR_Word GrabbedFileMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 6))));
  MR_Word GrabbedFileMap_9;
  MR_String Var_19;
  MR_String Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;

  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (FileWhy_6)), GrabbedFileMap0_8, &GrabbedFileMap_9);
  Var_19 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 0))));
  Var_20 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 2))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 3))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 4))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 5))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 7))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 6) = ((MR_Box) (GrabbedFileMap_9));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_26));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__should_read_interface_3_p_0(
  MR_Word Baggage_4,
  MR_Word ModuleName_5,
  MR_Word FileKind_6)
{
  MR_bool succeeded;
  MR_Word GrabbedFileMap_7 = ((MR_Word) ((MR_hl_field(0, Baggage_4, 6))));
  MR_Word OldGrabbedFile_8;
  MR_Box conv0_OldGrabbedFile_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), GrabbedFileMap_7, ((MR_Box) (ModuleName_5)), &conv0_OldGrabbedFile_8);
  if (succeeded)
  {
    OldGrabbedFile_8 = ((MR_Word) (conv0_OldGrabbedFile_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word OldFileKind_9;
    MR_Word Var_11;
    MR_Word Var_22;

    switch (MR_tag((MR_Word) OldGrabbedFile_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OldFileKind_9 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        OldFileKind_9 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[0]));
        break;
      case (MR_Integer) 2:
        OldFileKind_9 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OldFileKind_9 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2]));
            break;
          case (MR_Integer) 1:
            OldFileKind_9 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3]));
            break;
        }
        break;
    }
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = (MR_Box) ((MR_Unsigned) (FileKind_6));
    }
    parse_tree__file_kind____Compare____file_kind_0_0(&Var_22, Var_11, OldFileKind_9);
    succeeded = ((MR_Integer) 1 == Var_22);
  }
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy3_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_25,
  MR_Word STATE_VARIABLE_Baggage_0_26,
  MR_Word * STATE_VARIABLE_Baggage_27,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_28,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_23;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_34;
    MR_Word STATE_VARIABLE_Baggage_1_35;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_1_36;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_32 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_18);
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_14, Globals_15, ReadWhy3_17, Var_32, Var_33, &IndirectImports_23, STATE_VARIABLE_HaveParseTreeMaps_0_24, &STATE_VARIABLE_HaveParseTreeMaps_1_34, STATE_VARIABLE_Baggage_0_26, &STATE_VARIABLE_Baggage_1_35, STATE_VARIABLE_AugMakeIntUnit_0_28, &STATE_VARIABLE_AugMakeIntUnit_1_36);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_23);
    if (succeeded)
    {
      *STATE_VARIABLE_AugMakeIntUnit_29 = STATE_VARIABLE_AugMakeIntUnit_1_36;
      *STATE_VARIABLE_Baggage_27 = STATE_VARIABLE_Baggage_1_35;
      *STATE_VARIABLE_HaveParseTreeMaps_25 = STATE_VARIABLE_HaveParseTreeMaps_1_34;
    }
    else
    {
      MR_Word next_value_of_Modules_18 = IndirectImports_23;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_24 = STATE_VARIABLE_HaveParseTreeMaps_1_34;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_26 = STATE_VARIABLE_Baggage_1_35;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_28 = STATE_VARIABLE_AugMakeIntUnit_1_36;

      // direct tailcall eliminated
      ;
      Modules_18 = next_value_of_Modules_18;
      STATE_VARIABLE_HaveParseTreeMaps_0_24 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_24;
      STATE_VARIABLE_Baggage_0_26 = next_value_of_STATE_VARIABLE_Baggage_0_26;
      STATE_VARIABLE_AugMakeIntUnit_0_28 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_28;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_8,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_9,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_12,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugMakeIntUnit_13 = STATE_VARIABLE_AugMakeIntUnit_0_12;
      *STATE_VARIABLE_Baggage_11 = STATE_VARIABLE_Baggage_0_10;
      *STATE_VARIABLE_HaveParseTreeMaps_9 = STATE_VARIABLE_HaveParseTreeMaps_0_8;
      *STATE_VARIABLE_IntIndirectImports_7 = STATE_VARIABLE_IntIndirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ModuleNames_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_61;
      MR_Word STATE_VARIABLE_Baggage_1_62;
      MR_Word STATE_VARIABLE_AugMakeIntUnit_1_63;
      MR_Word STATE_VARIABLE_IntIndirectImports_1_65;
      MR_Word GrabbedFileMap_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 6))));
      MR_Word OldGrabbedFile_72;
      MR_Box conv0_OldGrabbedFile_72;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_10;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_12;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), GrabbedFileMap_71, ((MR_Box) (ModuleName_39)), &conv0_OldGrabbedFile_72);
      if (succeeded)
      {
        OldGrabbedFile_72 = ((MR_Word) (conv0_OldGrabbedFile_72));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldFileKind_73;
        MR_Word Var_86;

        switch (MR_tag((MR_Word) OldGrabbedFile_72)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OldFileKind_73 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            OldFileKind_73 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[0]));
            break;
          case (MR_Integer) 2:
            OldFileKind_73 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1]));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_72, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                OldFileKind_73 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2]));
                break;
              case (MR_Integer) 1:
                OldFileKind_73 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3]));
                break;
            }
            break;
        }
        parse_tree__file_kind____Compare____file_kind_0_0(&Var_86, (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3])), OldFileKind_73);
        succeeded = ((MR_Integer) 1 == Var_86);
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word IntImports_46;

        parse_tree__grab_modules__grab_module_int3_file_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_39, &IntImports_46, STATE_VARIABLE_HaveParseTreeMaps_0_8, &STATE_VARIABLE_HaveParseTreeMaps_1_61, STATE_VARIABLE_Baggage_0_10, &STATE_VARIABLE_Baggage_1_62, STATE_VARIABLE_AugMakeIntUnit_0_12, &STATE_VARIABLE_AugMakeIntUnit_1_63);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_46, STATE_VARIABLE_IntIndirectImports_0_6, &STATE_VARIABLE_IntIndirectImports_1_65);
      }
      else
      {
        STATE_VARIABLE_AugMakeIntUnit_1_63 = STATE_VARIABLE_AugMakeIntUnit_0_12;
        STATE_VARIABLE_Baggage_1_62 = STATE_VARIABLE_Baggage_0_10;
        STATE_VARIABLE_HaveParseTreeMaps_1_61 = STATE_VARIABLE_HaveParseTreeMaps_0_8;
        STATE_VARIABLE_IntIndirectImports_1_65 = STATE_VARIABLE_IntIndirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_40;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_6 = STATE_VARIABLE_IntIndirectImports_1_65;
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_8 = STATE_VARIABLE_HaveParseTreeMaps_1_61;
      next_value_of_STATE_VARIABLE_Baggage_0_10 = STATE_VARIABLE_Baggage_1_62;
      next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_12 = STATE_VARIABLE_AugMakeIntUnit_1_63;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_IntIndirectImports_0_6 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      STATE_VARIABLE_HaveParseTreeMaps_0_8 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_8;
      STATE_VARIABLE_Baggage_0_10 = next_value_of_STATE_VARIABLE_Baggage_0_10;
      STATE_VARIABLE_AugMakeIntUnit_0_12 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_module_int3_file_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy3_16,
  MR_Word ModuleName_17,
  MR_Word * IntImports_18,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_35,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_36,
  MR_Word STATE_VARIABLE_Baggage_0_37,
  MR_Word * STATE_VARIABLE_Baggage_38,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_39,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_40)
{
  MR_Word ReturnTimestamp_23;
  MR_Word HaveReadInt3_24;
  MR_Word Errors_29;
  MR_Word STATE_VARIABLE_Baggage_2_50;
  MR_Word MaybeTimestampMap_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 5))));

  if ((MaybeTimestampMap_72 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_23 = (MR_Integer) 0;
  else
    ReturnTimestamp_23 = (MR_Integer) 1;
  parse_tree__read_modules__maybe_read_module_int3_10_p_0(ProgressStream_14, Globals_15, (MR_Integer) 1, ModuleName_17, ReturnTimestamp_23, &HaveReadInt3_24, STATE_VARIABLE_HaveParseTreeMaps_0_35, STATE_VARIABLE_HaveParseTreeMaps_36);
  if (((MR_tag((MR_Word) HaveReadInt3_24)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt3_26 = ((MR_Word) ((MR_hl_field(0, HaveReadInt3_24, 1))));
    MR_Word Source_27 = ((MR_Word) ((MR_hl_field(0, HaveReadInt3_24, 2))));
    MR_Word MaybeTimestamp_28;
    MR_Word GrabbedFile_30;
    MR_Word RecompAvail_31;
    MR_Word IntImportMap_34;
    MR_Word STATE_VARIABLE_Baggage_1_46;
    MR_Word GrabbedFileMap0_81;
    MR_Word GrabbedFileMap_82;
    MR_String Var_90;
    MR_String Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;

    parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_27, &MaybeTimestamp_28, &Errors_29);
    {
      GrabbedFile_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GrabbedFile_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, GrabbedFile_30, 1) = ((MR_Box) (ParseTreeInt3_26));
      MR_hl_field(3, GrabbedFile_30, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
    }
    GrabbedFileMap0_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 6))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (GrabbedFile_30)), GrabbedFileMap0_81, &GrabbedFileMap_82);
    Var_90 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 0))));
    Var_91 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 1))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 2))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 3))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 4))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 5))));
    Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 7))));
    {
      STATE_VARIABLE_Baggage_1_46 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 0) = ((MR_Box) (Var_90));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 1) = ((MR_Box) (Var_91));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 2) = ((MR_Box) (Var_92));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 3) = ((MR_Box) (Var_93));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 4) = ((MR_Box) (Var_94));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 5) = ((MR_Box) (Var_95));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 6) = ((MR_Box) (GrabbedFileMap_82));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 7) = ((MR_Box) (Var_97));
    }
    switch (ReadWhy3_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DirectIntSpec_32;

          RecompAvail_31 = (MR_Integer) 1;
          {
            DirectIntSpec_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_32, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_32, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_32, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_65;

          RecompAvail_31 = (MR_Integer) 3;
          {
            DirectIntSpec_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_65, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_65, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_65, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DirectIntSpec_66;

          RecompAvail_31 = (MR_Integer) 2;
          {
            DirectIntSpec_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_66, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_66, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_66, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word DirectIntSpec_67;

          RecompAvail_31 = (MR_Integer) 4;
          {
            DirectIntSpec_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_67, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_67, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_67, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_68;

          RecompAvail_31 = (MR_Integer) 1;
          {
            DirectIntSpec_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_68, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_68, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_68, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word DirectIntSpec_69;

          RecompAvail_31 = (MR_Integer) 3;
          {
            DirectIntSpec_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_69, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_69, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_69, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word DirectIntSpec_70;

          RecompAvail_31 = (MR_Integer) 5;
          {
            DirectIntSpec_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_70, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_70, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_70, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Word IndirectIntSpec_33;

          RecompAvail_31 = (MR_Integer) 4;
          {
            IndirectIntSpec_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IndirectIntSpec_33, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, IndirectIntSpec_33, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(IndirectIntSpec_33, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word IndirectIntSpec_71;

          RecompAvail_31 = (MR_Integer) 3;
          {
            IndirectIntSpec_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IndirectIntSpec_71, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, IndirectIntSpec_71, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(IndirectIntSpec_71, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
    }
    IntImportMap_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_26, 3))));
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0), IntImportMap_34, IntImports_18);
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_17, (MR_Integer) 3, RecompAvail_31, MaybeTimestamp_28, STATE_VARIABLE_Baggage_1_46, &STATE_VARIABLE_Baggage_2_50);
  }
  else
  {
    Errors_29 = ((MR_Word) ((MR_hl_field(1, HaveReadInt3_24, 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_18);
    STATE_VARIABLE_Baggage_2_50 = STATE_VARIABLE_Baggage_0_37;
    *STATE_VARIABLE_AugMakeIntUnit_40 = STATE_VARIABLE_AugMakeIntUnit_0_39;
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_29, STATE_VARIABLE_Baggage_2_50, STATE_VARIABLE_Baggage_38);
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 4))));
  MR_Word PT3_7 = ((MR_Word) ((MR_hl_field(0, X_4, 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT3_7, 0))));
  MR_Word Map_10;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int3_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 3))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 3))));
  MR_Word PT3_7 = ((MR_Word) ((MR_hl_field(0, X_4, 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT3_7, 0))));
  MR_Word Map_10;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int3_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 2))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 4))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
  }
}

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_errors_3_p_0(
  MR_Word Errors1_4,
  MR_Word STATE_VARIABLE_Baggage_0_23,
  MR_Word * STATE_VARIABLE_Baggage_24)
{
  MR_Word Errors0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, 7))));
  MR_Word FatalErrors0_7 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 0))));
  MR_Word FatalErrorSpecs0_8 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 1))));
  MR_Word NonFatalErrors0_9 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 2))));
  MR_Word NonFatalErrorSpecs0_10 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 3))));
  MR_Word WarningSpecs0_11 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 4))));
  MR_Word FatalErrors1_12 = ((MR_Word) ((MR_hl_field(0, Errors1_4, 0))));
  MR_Word FatalErrorSpecs1_13 = ((MR_Word) ((MR_hl_field(0, Errors1_4, 1))));
  MR_Word NonFatalErrors1_14 = ((MR_Word) ((MR_hl_field(0, Errors1_4, 2))));
  MR_Word NonFatalErrorSpecs1_15 = ((MR_Word) ((MR_hl_field(0, Errors1_4, 3))));
  MR_Word WarningSpecs1_16 = ((MR_Word) ((MR_hl_field(0, Errors1_4, 4))));
  MR_Word FatalErrors_17;
  MR_Word FatalErrorSpecs_18;
  MR_Word NonFatalErrors_19;
  MR_Word NonFatalErrorSpecs_20;
  MR_Word WarningSpecs_21;
  MR_Word Errors_22;
  MR_String Var_32;
  MR_String Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;

  FatalErrors_17 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors0_7, FatalErrors1_12);
  FatalErrorSpecs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs0_8, FatalErrorSpecs1_13);
  NonFatalErrors_19 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors0_9, NonFatalErrors1_14);
  NonFatalErrorSpecs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NonFatalErrorSpecs0_10, NonFatalErrorSpecs1_15);
  WarningSpecs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarningSpecs0_11, WarningSpecs1_16);
  {
    Errors_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_22, 0) = ((MR_Box) (FatalErrors_17));
    MR_hl_field(0, Errors_22, 1) = ((MR_Box) (FatalErrorSpecs_18));
    MR_hl_field(0, Errors_22, 2) = ((MR_Box) (NonFatalErrors_19));
    MR_hl_field(0, Errors_22, 3) = ((MR_Box) (NonFatalErrorSpecs_20));
    MR_hl_field(0, Errors_22, 4) = ((MR_Box) (WarningSpecs_21));
  }
  Var_32 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, 0))));
  Var_33 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, 1))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, 2))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, 3))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, 4))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, 5))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 7) = ((MR_Box) (Errors_22));
  }
}

static void MR_CALL 
parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word RecompAvail_9,
  MR_Word MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Baggage_0_18,
  MR_Word * STATE_VARIABLE_Baggage_19)
{
  MR_Word MaybeTimestampMap_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, 5))));

  if ((MaybeTimestampMap_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Baggage_19 = STATE_VARIABLE_Baggage_0_18;
  else
  {
    MR_Word TimestampMap0_13 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampMap_12, 0))));

    if ((MaybeTimestamp_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Baggage_19 = STATE_VARIABLE_Baggage_0_18;
    else
    {
      MR_Word Timestamp_14 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_10, 0))));
      MR_Word FileKind_15;
      MR_Word TimestampInfo_16;
      MR_Word TimestampMap_17;
      MR_Word Var_21;
      MR_String Var_29;
      MR_String Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_Word Var_36;

      {
        FileKind_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FileKind_15, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_8));
      }
      {
        TimestampInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TimestampInfo_16, 0) = ((MR_Box) (FileKind_15));
        MR_hl_field(0, TimestampInfo_16, 1) = ((MR_Box) (Timestamp_14));
        MR_hl_field(0, TimestampInfo_16, 2) = (MR_Box) ((MR_Unsigned) (RecompAvail_9));
      }
      mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (TimestampInfo_16)), TimestampMap0_13, &TimestampMap_17);
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (TimestampMap_17));
      }
      Var_29 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, 0))));
      Var_30 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, 1))));
      Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, 2))));
      Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, 3))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, 4))));
      Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, 6))));
      Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Baggage_19 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_30));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_31));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_32));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_33));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_35));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_36));
      }
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * AugMakeIntUnit_4)
{
  MR_Word AncestorIntSpecs_6;
  MR_Word DirectIntSpecs_7;
  MR_Word IndirectIntSpecs_8;
  MR_Word VersionNumbers_9;

  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int0_0), &AncestorIntSpecs_6);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int3_spec_0), &DirectIntSpecs_7);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int3_spec_0), &IndirectIntSpecs_8);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_module_item_version_numbers_0), &VersionNumbers_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *AugMakeIntUnit_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_3));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) (AncestorIntSpecs_6));
    MR_hl_field(0, base, 3) = ((MR_Box) (DirectIntSpecs_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (IndirectIntSpecs_8));
    MR_hl_field(0, base, 5) = ((MR_Box) (VersionNumbers_9));
  }
}

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11)
{
  MR_Word Errors0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 7))));
  MR_Word NonFatalErrorSpecs0_7 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 3))));
  MR_Word NonFatalErrorSpecs_8;
  MR_Word Errors_9;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_String Var_28;
  MR_String Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;

  NonFatalErrorSpecs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_4, NonFatalErrorSpecs0_7);
  Var_23 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 0))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 1))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 2))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 4))));
  {
    Errors_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_9, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, Errors_9, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, Errors_9, 2) = ((MR_Box) (Var_25));
    MR_hl_field(0, Errors_9, 3) = ((MR_Box) (NonFatalErrorSpecs_8));
    MR_hl_field(0, Errors_9, 4) = ((MR_Box) (Var_27));
  }
  Var_28 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 0))));
  Var_29 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 1))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 2))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 3))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 5))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 7) = ((MR_Box) (Errors_9));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____maybe_opt_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____maybe_opt_file_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____maybe_opt_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____maybe_opt_file_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____read_decision_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____read_decision_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____read_decision_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__grab_modules__init(void)
{
}

void mercury__parse_tree__grab_modules__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_maybe_opt_file_error_0);
  MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_read_decision_0);
}

void mercury__parse_tree__grab_modules__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__grab_modules__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.grab_modules.
