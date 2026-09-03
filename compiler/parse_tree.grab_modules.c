/*
** Automatically generated from `grab_modules.m'
** by the Mercury compiler,
** version rotd-2026-09-03
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
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_1;

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_read_decision_0[2];

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_read_decision_0[2];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_read_decision_0[2];

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__1950__1_4_p_0(
  MR_Word Stream_5,
  MR_String HeadVar__2_18);

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__report_any_errors_in_read_opt_file__1762__1_2_p_0(
  MR_Word ModuleErrSpecs_12,
  MR_Word HeadVar__2_22);

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

static MR_bool MR_CALL 
parse_tree__grab_modules__read_trans_opt_files_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__read_trans_opt_files_11_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_BlockErrSpecs_0_6,
  MR_Word * STATE_VARIABLE_BlockErrSpecs_7,
  MR_Word STATE_VARIABLE_WarnSpecs_0_8,
  MR_Word * STATE_VARIABLE_WarnSpecs_9);

static MR_Box MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_108_97_105_110_95_111_112_116_95_102_105_108_101_115_95_95_91_51_93_95_48_18_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word ReadOptFilesTransitively_4,
  MR_Word HeadVar__5_5,
  MR_Word DontQueueOptModules0_6,
  MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_0_7,
  MR_Word * STATE_VARIABLE_ParseTreePlainOptsCord_8,
  MR_Word STATE_VARIABLE_ExplicitDeps_0_9,
  MR_Word * STATE_VARIABLE_ExplicitDeps_10,
  MR_Word STATE_VARIABLE_ImplicitNeeds_0_11,
  MR_Word * STATE_VARIABLE_ImplicitNeeds_12,
  MR_Word STATE_VARIABLE_BlockErrSpecs_0_13,
  MR_Word * STATE_VARIABLE_BlockErrSpecs_14,
  MR_Word STATE_VARIABLE_WarnSpecs_0_15,
  MR_Word * STATE_VARIABLE_WarnSpecs_16);

static MR_bool MR_CALL 
parse_tree__grab_modules__report_any_errors_in_read_opt_file_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__report_any_errors_in_read_opt_file_5_p_0(
  MR_Word ModuleErrors_6,
  MR_Word STATE_VARIABLE_BlockErrSpecs_0_14,
  MR_Word * STATE_VARIABLE_BlockErrSpecs_15,
  MR_Word STATE_VARIABLE_WarnSpecs_0_16,
  MR_Word * STATE_VARIABLE_WarnSpecs_17);

static void MR_CALL 
parse_tree__grab_modules__report_cannot_read_opt_file_7_p_0(
  MR_Word Globals_8,
  MR_Word WarnOption_9,
  MR_String FileName_10,
  MR_Word ModuleFileId_11,
  MR_Word ReadModuleErrors_12,
  MR_Word STATE_VARIABLE_WarnSpecs_0_20,
  MR_Word * STATE_VARIABLE_WarnSpecs_21);

static void MR_CALL 
parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(
  MR_Word KeepUnusedArgs_5,
  MR_Word KeepReuses_6,
  MR_Word ParseTreePlainOpt0_7,
  MR_Word * ParseTreePlainOpt_8);

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_warnings_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11);

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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_21_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DirectIntImports_0_6,
  MR_Word * STATE_VARIABLE_DirectIntImports_7,
  MR_Word STATE_VARIABLE_DirectIntUses_0_8,
  MR_Word * STATE_VARIABLE_DirectIntUses_9,
  MR_Word STATE_VARIABLE_DirectImpImports_0_10,
  MR_Word * STATE_VARIABLE_DirectImpImports_11,
  MR_Word STATE_VARIABLE_DirectImpUses_0_12,
  MR_Word * STATE_VARIABLE_DirectImpUses_13,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_14,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_15,
  MR_Word STATE_VARIABLE_Baggage_0_16,
  MR_Word * STATE_VARIABLE_Baggage_17,
  MR_Word STATE_VARIABLE_AugCompUnit_0_18,
  MR_Word * STATE_VARIABLE_AugCompUnit_19);

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
parse_tree__grab_modules__amend_shadow_imported_module_int1_files_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AugCompUnit_0_3,
  MR_Word * STATE_VARIABLE_AugCompUnit_4);

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
  MR_Word STATE_VARIABLE_AugCompUnit_0_12,
  MR_Word * STATE_VARIABLE_AugCompUnit_13);

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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_20_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectIntImports_0_5,
  MR_Word * STATE_VARIABLE_DirectIntImports_6,
  MR_Word STATE_VARIABLE_DirectImpImports_0_7,
  MR_Word * STATE_VARIABLE_DirectImpImports_8,
  MR_Word STATE_VARIABLE_DirectIntUses_0_9,
  MR_Word * STATE_VARIABLE_DirectIntUses_10,
  MR_Word STATE_VARIABLE_DirectImpUses_0_11,
  MR_Word * STATE_VARIABLE_DirectImpUses_12,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_13,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_14,
  MR_Word STATE_VARIABLE_Baggage_0_15,
  MR_Word * STATE_VARIABLE_Baggage_16,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_17,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_18);

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
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_12,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_13);

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

static void MR_CALL 
parse_tree__grab_modules__amend_shadow_imported_module_int3_files_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_3,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_4);

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

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[9][2];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_3[5][1];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_4[1][13];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_5[3][6];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[1][9];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[2][7];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_8[1][17];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[3][5];




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
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[1])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_11_p_0_2)),
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
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[2])),
    ((MR_Box) (parse_tree__grab_modules__dump_modules_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[9][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[6])))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_3[5][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 208U) },
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

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
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
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__1950__1_4_p_0(
  MR_Word Stream_5,
  MR_String HeadVar__2_18)
{
  mercury__io__write_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Stream_5, ((MR_Box) (HeadVar__2_18)));
}

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__report_any_errors_in_read_opt_file__1762__1_2_p_0(
  MR_Word ModuleErrSpecs_12,
  MR_Word HeadVar__2_22)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), ((MR_Box) (ModuleErrSpecs_12)), ((MR_Box) (HeadVar__2_22)));
  return succeeded;
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

static void MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__1950__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
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
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), ((MR_Box) (MN_7)), ((MR_Box) (X_4)), Map0_6, &Map_8);
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 0))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 1))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 2))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 3))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 5))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 6))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 7))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 4) = ((MR_Box) (Map_8));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_53));
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
  MR_Word * BlockErrSpecs_16,
  MR_Word STATE_VARIABLE_Baggage_0_24,
  MR_Word * STATE_VARIABLE_Baggage_25,
  MR_Word STATE_VARIABLE_AugCompUnit_0_26,
  MR_Word * STATE_VARIABLE_AugCompUnit_27,
  MR_Word HaveParseTreeMaps_19,
  MR_Word * HaveParseTreeMaps_10)
{
  MR_Word Verbose_21;
  MR_Word ParseTreeTransOptsCord_22;
  MR_Word WarnSpecs_23;
  MR_Word Var_34;
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_Baggage_1_41;
  MR_Word Var_43;
  MR_Word Errors0_58;
  MR_Word WarnSpecs0_59;
  MR_Word WarnSpecs_60;
  MR_Word Errors_61;
  MR_Box conv1_STATE_VARIABLE_AugCompUnit_27;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_String Var_78;
  MR_String Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_String Var_45;
  MR_String Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;

  *HaveParseTreeMaps_10 = HaveParseTreeMaps_19;
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 131, &Verbose_21);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_21, (MR_String) "% Reading .trans_opt files..\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_13, Verbose_21);
  Var_34 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0));
  parse_tree__grab_modules__read_trans_opt_files_11_p_0(ProgressStream_13, Globals_14, TransOptModuleNames_15, Var_34, &ParseTreeTransOptsCord_22, (MR_Word) ((MR_Unsigned) 0U), BlockErrSpecs_16, (MR_Word) ((MR_Unsigned) 0U), &WarnSpecs_23);
  Var_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), ParseTreeTransOptsCord_22);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[10]), Var_39, ((MR_Box) (STATE_VARIABLE_AugCompUnit_0_26)), &conv1_STATE_VARIABLE_AugCompUnit_27);
  *STATE_VARIABLE_AugCompUnit_27 = ((MR_Word) (conv1_STATE_VARIABLE_AugCompUnit_27));
  Errors0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_24, 7))));
  WarnSpecs0_59 = ((MR_Word) ((MR_hl_field(0, Errors0_58, 4))));
  WarnSpecs_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarnSpecs_23, WarnSpecs0_59);
  Var_73 = ((MR_Word) ((MR_hl_field(0, Errors0_58, 0))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, Errors0_58, 1))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, Errors0_58, 2))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, Errors0_58, 3))));
  {
    Errors_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_61, 0) = ((MR_Box) (Var_73));
    MR_hl_field(0, Errors_61, 1) = ((MR_Box) (Var_74));
    MR_hl_field(0, Errors_61, 2) = ((MR_Box) (Var_75));
    MR_hl_field(0, Errors_61, 3) = ((MR_Box) (Var_76));
    MR_hl_field(0, Errors_61, 4) = ((MR_Box) (WarnSpecs_60));
  }
  Var_78 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_24, 0))));
  Var_79 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_24, 1))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_24, 2))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_24, 3))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_24, 4))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_24, 5))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_24, 6))));
  {
    STATE_VARIABLE_Baggage_1_41 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 0) = ((MR_Box) (Var_78));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 1) = ((MR_Box) (Var_79));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 2) = ((MR_Box) (Var_80));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 3) = ((MR_Box) (Var_81));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 4) = ((MR_Box) (Var_82));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 5) = ((MR_Box) (Var_83));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 6) = ((MR_Box) (Var_84));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 7) = ((MR_Box) (Errors_61));
  }
  Var_43 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  Var_45 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 0))));
  Var_46 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 1))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 2))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 4))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 5))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_41, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_25 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_43));
  }
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_21, (MR_String) "% Done.\n");
}

static MR_bool MR_CALL 
parse_tree__grab_modules__read_trans_opt_files_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__grab_modules__IntroducedFrom__pred__report_any_errors_in_read_opt_file__1762__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__read_trans_opt_files_11_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_BlockErrSpecs_0_6,
  MR_Word * STATE_VARIABLE_BlockErrSpecs_7,
  MR_Word STATE_VARIABLE_WarnSpecs_0_8,
  MR_Word * STATE_VARIABLE_WarnSpecs_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_9 = STATE_VARIABLE_WarnSpecs_0_8;
      *STATE_VARIABLE_BlockErrSpecs_7 = STATE_VARIABLE_BlockErrSpecs_0_6;
      *HeadVar__5_5 = HeadVar__4_4;
    }
    else
    {
      MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ModuleNames_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word HaveReadTransOpt_34;
      MR_Word STATE_VARIABLE_ParseTreeTransOptsCord_1_54;
      MR_Word STATE_VARIABLE_BlockErrSpecs_1_55;
      MR_Word STATE_VARIABLE_WarnSpecs_1_56;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_BlockErrSpecs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_8;

      parse_tree__read_modules__read_module_trans_opt_6_p_0(ProgressStream_1, Globals_2, ModuleName_28, &HaveReadTransOpt_34);
      if (((MR_tag((MR_Word) HaveReadTransOpt_34)) == (MR_Integer) 0))
      {
        MR_Word ParseTreeTransOpt_36 = ((MR_Word) ((MR_hl_field(0, HaveReadTransOpt_34, 1))));
        MR_Word Source_37 = ((MR_Word) ((MR_hl_field(0, HaveReadTransOpt_34, 2))));
        MR_Word ModuleErrors_39;
        MR_Word FatalErrors_59;
        MR_Word NonFatalErrors0_60;
        MR_Word NonFatalErrors_61;
        MR_Word Var_38;

        parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_37, &Var_38, &ModuleErrors_39);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), ((MR_Box) (ParseTreeTransOpt_36)), HeadVar__4_4, &STATE_VARIABLE_ParseTreeTransOptsCord_1_54);
        FatalErrors_59 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_39, 0))));
        NonFatalErrors0_60 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_39, 2))));
        mercury__set__delete_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), ((MR_Box) ((MR_Integer) 8)), NonFatalErrors0_60, &NonFatalErrors_61);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_59);
        if (succeeded)
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors_61);
        if (succeeded)
        {
          STATE_VARIABLE_WarnSpecs_1_56 = STATE_VARIABLE_WarnSpecs_0_8;
          STATE_VARIABLE_BlockErrSpecs_1_55 = STATE_VARIABLE_BlockErrSpecs_0_6;
        }
        else
        {
          MR_Word ModuleErrSpecs_62;
          MR_Word ModuleWarnSpecs_63;
          MR_Word Var_65;

          parse_tree__parse_error__get_read_module_specs_3_p_0(ModuleErrors_39, &ModuleErrSpecs_62, &ModuleWarnSpecs_63);
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[0]));
            MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__grab_modules__read_trans_opt_files_11_p_0_1));
            MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_65, 3) = ((MR_Box) (ModuleErrSpecs_62));
            MR_hl_field(0, Var_65, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_not_3_p_0(Var_65, (MR_String) "predicate \140parse_tree.grab_modules.report_any_errors_in_read_opt_file\'/5", (MR_String) "ModuleErrSpecs = []");
          STATE_VARIABLE_BlockErrSpecs_1_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ModuleErrSpecs_62, STATE_VARIABLE_BlockErrSpecs_0_6);
          STATE_VARIABLE_WarnSpecs_1_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ModuleWarnSpecs_63, STATE_VARIABLE_WarnSpecs_0_8);
        }
      }
      else
      {
        MR_String FileName_40 = ((MR_String) ((MR_hl_field(1, HaveReadTransOpt_34, 0))));
        MR_Word ReadErrors_41 = ((MR_Word) ((MR_hl_field(1, HaveReadTransOpt_34, 1))));
        MR_Word ModuleFileId_44;
        MR_Word WarnOptionValue_76;

        {
          ModuleFileId_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ModuleFileId_44, 0) = ((MR_Box) (ModuleName_28));
          MR_hl_field(0, ModuleFileId_44, 1) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[4])));
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_2, (MR_Integer) 208, &WarnOptionValue_76);
        switch (WarnOptionValue_76) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_WarnSpecs_1_56 = STATE_VARIABLE_WarnSpecs_0_8;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_77;
              MR_Word FatalErrors_78;
              MR_Word Phase_79;
              MR_Word Spec_81;
              MR_Word Var_84;
              MR_Word Var_85;

              {
                Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_85, 1) = ((MR_Box) (FileName_40));
              }
              {
                Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
                MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[8])));
              }
              {
                Pieces_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_77, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[5])));
                MR_hl_field(1, Pieces_77, 1) = ((MR_Box) (Var_84));
              }
              FatalErrors_78 = ((MR_Word) ((MR_hl_field(0, ReadErrors_41, 0))));
              succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_78, ((MR_Box) ((MR_Integer) 0)));
              if (succeeded)
              {
                MR_Word Var_88;

                {
                  Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_88, 0) = ((MR_Box) (ModuleFileId_44));
                }
                {
                  Phase_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Phase_79, 0) = ((MR_Box) (FileName_40));
                  MR_hl_field(1, Phase_79, 1) = ((MR_Box) (Var_88));
                }
              }
              else
                Phase_79 = (MR_Word) ((MR_Unsigned) 16U);
              {
                Spec_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_81, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.report_cannot_read_opt_file\'/7"));
                MR_hl_field(1, Spec_81, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[4])));
                MR_hl_field(1, Spec_81, 2) = ((MR_Box) (Phase_79));
                MR_hl_field(1, Spec_81, 3) = ((MR_Box) (Pieces_77));
              }
              {
                STATE_VARIABLE_WarnSpecs_1_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_WarnSpecs_1_56, 0) = ((MR_Box) (Spec_81));
                MR_hl_field(1, STATE_VARIABLE_WarnSpecs_1_56, 1) = ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_8));
              }
            }
            break;
        }
        STATE_VARIABLE_ParseTreeTransOptsCord_1_54 = HeadVar__4_4;
        STATE_VARIABLE_BlockErrSpecs_1_55 = STATE_VARIABLE_BlockErrSpecs_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ModuleNames_29;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_ParseTreeTransOptsCord_1_54;
      next_value_of_STATE_VARIABLE_BlockErrSpecs_0_6 = STATE_VARIABLE_BlockErrSpecs_1_55;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_8 = STATE_VARIABLE_WarnSpecs_1_56;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_BlockErrSpecs_0_6 = next_value_of_STATE_VARIABLE_BlockErrSpecs_0_6;
      STATE_VARIABLE_WarnSpecs_0_8 = next_value_of_STATE_VARIABLE_WarnSpecs_0_8;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_11_p_0_2(
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
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_11_p_0_1(
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
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word * STATE_VARIABLE_BlockErrSpecs_64,
  MR_Word STATE_VARIABLE_Baggage_0_65,
  MR_Word * STATE_VARIABLE_Baggage_66,
  MR_Word STATE_VARIABLE_AugCompUnit_0_67,
  MR_Word * STATE_VARIABLE_AugCompUnit_68,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_69,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_70)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_67, 0))));
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_19, 0))));
  MR_Word Ancestors0_21;
  MR_Word DirectDeps0_22;
  MR_Word DirectDeps_23;
  MR_Word OptModules_24;
  MR_Word ReadOptFilesTransitively_26;
  MR_Word DontQueueOptModules_27;
  MR_Word ParseTreePlainOptsCord0_28;
  MR_Word ExplicitDeps_29;
  MR_Word ImplicitNeedsCord_30;
  MR_Word WarnSpecs0_31;
  MR_Word ParseTreePlainOpts0_32;
  MR_Word OptTuple_33;
  MR_Word UnusedArgs_34;
  MR_Word StructureReuse_35;
  MR_Word ParseTreePlainOpts_43;
  MR_Word WarnSpecs_44;
  MR_Word OptModuleAncestors_48;
  MR_Word OldModuleAncestors_49;
  MR_Word OldModuleAndAncestors_50;
  MR_Word OptOnlyModuleAncestors_51;
  MR_Word OptAncestorIntImports_52;
  MR_Word OptAncestorIntUses_53;
  MR_Word OptAncestorImpImports_54;
  MR_Word OptAncestorImpUses_55;
  MR_Word OptAncestorImports_56;
  MR_Word OptAncestorUses_57;
  MR_Word AllImplicitNeeds_58;
  MR_Word ImplicitDeps_59;
  MR_Word NewDeps_60;
  MR_Word NewIntIndirectDeps_61;
  MR_Word NewImpIndirectDeps_62;
  MR_Word ModuleErrors_63;
  MR_Word Var_73;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_BlockErrSpecs_1_81;
  MR_Word STATE_VARIABLE_BlockErrSpecs_2_86;
  MR_Word STATE_VARIABLE_AugCompUnit_1_90;
  MR_Word Var_91;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_100;
  MR_Word STATE_VARIABLE_Baggage_1_101;
  MR_Word STATE_VARIABLE_AugCompUnit_2_102;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_2_115;
  MR_Word STATE_VARIABLE_Baggage_2_116;
  MR_Word STATE_VARIABLE_AugCompUnit_3_117;
  MR_Word Var_121;
  MR_Word STATE_VARIABLE_Baggage_3_123;
  MR_Word Var_127;
  MR_Word VeryVerbose_25;
  MR_Box conv1_STATE_VARIABLE_AugCompUnit_1_90;

  Ancestors0_21 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_20);
  Var_73 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_19, 3))));
  DirectDeps0_22 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_73);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_20)), DirectDeps0_22, &DirectDeps_23);
  OptModules_24 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors0_21, DirectDeps_23);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 132, &VeryVerbose_25);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 432, &ReadOptFilesTransitively_26);
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_20)), OptModules_24, &DontQueueOptModules_27);
  Var_76 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModules_24);
  Var_77 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0));
  Var_78 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_79 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_108_97_105_110_95_111_112_116_95_102_105_108_101_115_95_95_91_51_93_95_48_18_p_0(ProgressStream_12, Globals_13, ReadOptFilesTransitively_26, Var_76, DontQueueOptModules_27, Var_77, &ParseTreePlainOptsCord0_28, Var_78, &ExplicitDeps_29, Var_79, &ImplicitNeedsCord_30, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_BlockErrSpecs_1_81, (MR_Word) ((MR_Unsigned) 0U), &WarnSpecs0_31);
  ParseTreePlainOpts0_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), ParseTreePlainOptsCord0_28);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_33);
  UnusedArgs_34 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_33, 0))) >> 5)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 368, &StructureReuse_35);
  succeeded = (UnusedArgs_34 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (StructureReuse_35 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word HaveReadOwnPlainOpt0_36;

    parse_tree__read_modules__read_module_plain_opt_6_p_0(ProgressStream_12, Globals_13, ModuleName_20, &HaveReadOwnPlainOpt0_36);
    if (((MR_tag((MR_Word) HaveReadOwnPlainOpt0_36)) == (MR_Integer) 0))
    {
      MR_Word OwnParseTreePlainOpt0_38 = ((MR_Word) ((MR_hl_field(0, HaveReadOwnPlainOpt0_36, 1))));
      MR_Word Source_39 = ((MR_Word) ((MR_hl_field(0, HaveReadOwnPlainOpt0_36, 2))));
      MR_Word OwnOptModuleErrors_41;
      MR_Word OwnParseTreePlainOpt_42;
      MR_Word Var_40;

      parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_39, &Var_40, &OwnOptModuleErrors_41);
      parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(UnusedArgs_34, StructureReuse_35, OwnParseTreePlainOpt0_38, &OwnParseTreePlainOpt_42);
      {
        ParseTreePlainOpts_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ParseTreePlainOpts_43, 0) = ((MR_Box) (OwnParseTreePlainOpt_42));
        MR_hl_field(1, ParseTreePlainOpts_43, 1) = ((MR_Box) (ParseTreePlainOpts0_32));
      }
      parse_tree__grab_modules__report_any_errors_in_read_opt_file_5_p_0(OwnOptModuleErrors_41, STATE_VARIABLE_BlockErrSpecs_1_81, &STATE_VARIABLE_BlockErrSpecs_2_86, WarnSpecs0_31, &WarnSpecs_44);
    }
    else
    {
      MR_String OwnOptFileName_45 = ((MR_String) ((MR_hl_field(1, HaveReadOwnPlainOpt0_36, 0))));
      MR_Word OwnOptModuleFileId_47;
      MR_Word OwnOptModuleErrors_129 = ((MR_Word) ((MR_hl_field(1, HaveReadOwnPlainOpt0_36, 1))));

      ParseTreePlainOpts_43 = ParseTreePlainOpts0_32;
      {
        OwnOptModuleFileId_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OwnOptModuleFileId_47, 0) = ((MR_Box) (ModuleName_20));
        MR_hl_field(0, OwnOptModuleFileId_47, 1) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[3])));
      }
      parse_tree__grab_modules__report_cannot_read_opt_file_7_p_0(Globals_13, (MR_Integer) 207, OwnOptFileName_45, OwnOptModuleFileId_47, OwnOptModuleErrors_129, WarnSpecs0_31, &WarnSpecs_44);
      STATE_VARIABLE_BlockErrSpecs_2_86 = STATE_VARIABLE_BlockErrSpecs_1_81;
    }
  }
  else
  {
    ParseTreePlainOpts_43 = ParseTreePlainOpts0_32;
    WarnSpecs_44 = WarnSpecs0_31;
    STATE_VARIABLE_BlockErrSpecs_2_86 = STATE_VARIABLE_BlockErrSpecs_1_81;
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[8]), ParseTreePlainOpts_43, ((MR_Box) (STATE_VARIABLE_AugCompUnit_0_67)), &conv1_STATE_VARIABLE_AugCompUnit_1_90);
  STATE_VARIABLE_AugCompUnit_1_90 = ((MR_Word) (conv1_STATE_VARIABLE_AugCompUnit_1_90));
  Var_91 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[9]), OptModules_24);
  OptModuleAncestors_48 = mercury__set__power_union_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_91);
  OldModuleAncestors_49 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_20);
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_20)), OldModuleAncestors_49, &OldModuleAndAncestors_50);
  OptOnlyModuleAncestors_51 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModuleAncestors_48, OldModuleAndAncestors_50);
  Var_95 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptOnlyModuleAncestors_51);
  Var_96 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_97 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_98 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_99 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_21_p_0(ProgressStream_12, Globals_13, (MR_Integer) 1, Var_95, Var_96, &OptAncestorIntImports_52, Var_97, &OptAncestorIntUses_53, Var_98, &OptAncestorImpImports_54, Var_99, &OptAncestorImpUses_55, STATE_VARIABLE_HaveParseTreeMaps_0_69, &STATE_VARIABLE_HaveParseTreeMaps_1_100, STATE_VARIABLE_Baggage_0_65, &STATE_VARIABLE_Baggage_1_101, STATE_VARIABLE_AugCompUnit_1_90, &STATE_VARIABLE_AugCompUnit_2_102);
  mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptAncestorIntImports_52, OptAncestorImpImports_54, &OptAncestorImports_56);
  mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptAncestorIntUses_53, OptAncestorImpUses_55, &OptAncestorUses_57);
  Var_104 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), ImplicitNeedsCord_30);
  parse_tree__get_dependencies__combine_implicit_needs_2_p_0(Var_104, &AllImplicitNeeds_58);
  parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_13, AllImplicitNeeds_58, &ImplicitDeps_59);
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (OptAncestorUses_57));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (OptAncestorImports_56));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_108));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (ImplicitDeps_59));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_107));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (ExplicitDeps_29));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_106));
  }
  NewDeps_60 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_105);
  Var_112 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_60);
  Var_113 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_114 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 9, Var_112, Var_113, &NewIntIndirectDeps_61, Var_114, &NewImpIndirectDeps_62, STATE_VARIABLE_HaveParseTreeMaps_1_100, &STATE_VARIABLE_HaveParseTreeMaps_2_115, STATE_VARIABLE_Baggage_1_101, &STATE_VARIABLE_Baggage_2_116, STATE_VARIABLE_AugCompUnit_2_102, &STATE_VARIABLE_AugCompUnit_3_117);
  Var_121 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewIntIndirectDeps_61, NewImpIndirectDeps_62);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, Var_121, STATE_VARIABLE_HaveParseTreeMaps_2_115, STATE_VARIABLE_HaveParseTreeMaps_70, STATE_VARIABLE_Baggage_2_116, &STATE_VARIABLE_Baggage_3_123, STATE_VARIABLE_AugCompUnit_3_117, STATE_VARIABLE_AugCompUnit_68);
  ModuleErrors_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_3_123, 7))));
  Var_127 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_63, 1))));
  *STATE_VARIABLE_BlockErrSpecs_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_127, STATE_VARIABLE_BlockErrSpecs_2_86);
  parse_tree__grab_modules__module_baggage_add_warnings_3_p_0(WarnSpecs_44, STATE_VARIABLE_Baggage_3_123, STATE_VARIABLE_Baggage_66);
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_108_97_105_110_95_111_112_116_95_102_105_108_101_115_95_95_91_51_93_95_48_18_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word ReadOptFilesTransitively_4,
  MR_Word HeadVar__5_5,
  MR_Word DontQueueOptModules0_6,
  MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_0_7,
  MR_Word * STATE_VARIABLE_ParseTreePlainOptsCord_8,
  MR_Word STATE_VARIABLE_ExplicitDeps_0_9,
  MR_Word * STATE_VARIABLE_ExplicitDeps_10,
  MR_Word STATE_VARIABLE_ImplicitNeeds_0_11,
  MR_Word * STATE_VARIABLE_ImplicitNeeds_12,
  MR_Word STATE_VARIABLE_BlockErrSpecs_0_13,
  MR_Word * STATE_VARIABLE_BlockErrSpecs_14,
  MR_Word STATE_VARIABLE_WarnSpecs_0_15,
  MR_Word * STATE_VARIABLE_WarnSpecs_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_16 = STATE_VARIABLE_WarnSpecs_0_15;
      *STATE_VARIABLE_BlockErrSpecs_14 = STATE_VARIABLE_BlockErrSpecs_0_13;
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
      MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_1_84;
      MR_Word STATE_VARIABLE_BlockErrSpecs_1_85;
      MR_Word STATE_VARIABLE_WarnSpecs_1_86;
      MR_Word STATE_VARIABLE_ExplicitDeps_1_87;
      MR_Word STATE_VARIABLE_ImplicitNeeds_1_88;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_DontQueueOptModules0_6;
      MR_Word next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ExplicitDeps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11;
      MR_Word next_value_of_STATE_VARIABLE_BlockErrSpecs_0_13;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_15;

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
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), ((MR_Box) (ParseTreePlainOpt_57)), STATE_VARIABLE_ParseTreePlainOptsCord_0_7, &STATE_VARIABLE_ParseTreePlainOptsCord_1_84);
        parse_tree__grab_modules__report_any_errors_in_read_opt_file_5_p_0(ModuleErrors_60, STATE_VARIABLE_BlockErrSpecs_0_13, &STATE_VARIABLE_BlockErrSpecs_1_85, STATE_VARIABLE_WarnSpecs_0_15, &STATE_VARIABLE_WarnSpecs_1_86);
        parse_tree__get_dependencies__get_explicit_and_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(ParseTreePlainOpt_57, &ParseTreeExplicitDeps_61, &ParseTreeImplicitNeeds_62);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeExplicitDeps_61, STATE_VARIABLE_ExplicitDeps_0_9, &STATE_VARIABLE_ExplicitDeps_1_87);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), ((MR_Box) (ParseTreeImplicitNeeds_62)), STATE_VARIABLE_ImplicitNeeds_0_11, &STATE_VARIABLE_ImplicitNeeds_1_88);
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
              MR_Word Var_89;

              parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_2, ParseTreeImplicitNeeds_62, &ParseTreeImplicitDeps_63);
              mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeExplicitDeps_61, ParseTreeImplicitDeps_63, &ParseTreeDeps_64);
              mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeDeps_64, DontQueueOptModules0_6, &NewDeps_65);
              Var_89 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_65);
              ModuleNames1_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_89, ModuleNames0_47);
              mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_65, DontQueueOptModules0_6, &DontQueueOptModules1_67);
            }
            break;
        }
      }
      else
      {
        MR_String FileName_68 = ((MR_String) ((MR_hl_field(1, HaveReadPlainOpt_55, 0))));
        MR_Word ModuleFileId_70;
        MR_Word ModuleErrors_99 = ((MR_Word) ((MR_hl_field(1, HaveReadPlainOpt_55, 1))));

        {
          ModuleFileId_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ModuleFileId_70, 0) = ((MR_Box) (ModuleName_46));
          MR_hl_field(0, ModuleFileId_70, 1) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[3])));
        }
        parse_tree__grab_modules__report_cannot_read_opt_file_7_p_0(Globals_2, (MR_Integer) 207, FileName_68, ModuleFileId_70, ModuleErrors_99, STATE_VARIABLE_WarnSpecs_0_15, &STATE_VARIABLE_WarnSpecs_1_86);
        ModuleNames1_66 = ModuleNames0_47;
        DontQueueOptModules1_67 = DontQueueOptModules0_6;
        STATE_VARIABLE_ParseTreePlainOptsCord_1_84 = STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
        STATE_VARIABLE_ExplicitDeps_1_87 = STATE_VARIABLE_ExplicitDeps_0_9;
        STATE_VARIABLE_ImplicitNeeds_1_88 = STATE_VARIABLE_ImplicitNeeds_0_11;
        STATE_VARIABLE_BlockErrSpecs_1_85 = STATE_VARIABLE_BlockErrSpecs_0_13;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames1_66;
      next_value_of_DontQueueOptModules0_6 = DontQueueOptModules1_67;
      next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7 = STATE_VARIABLE_ParseTreePlainOptsCord_1_84;
      next_value_of_STATE_VARIABLE_ExplicitDeps_0_9 = STATE_VARIABLE_ExplicitDeps_1_87;
      next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11 = STATE_VARIABLE_ImplicitNeeds_1_88;
      next_value_of_STATE_VARIABLE_BlockErrSpecs_0_13 = STATE_VARIABLE_BlockErrSpecs_1_85;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_15 = STATE_VARIABLE_WarnSpecs_1_86;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      DontQueueOptModules0_6 = next_value_of_DontQueueOptModules0_6;
      STATE_VARIABLE_ParseTreePlainOptsCord_0_7 = next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
      STATE_VARIABLE_ExplicitDeps_0_9 = next_value_of_STATE_VARIABLE_ExplicitDeps_0_9;
      STATE_VARIABLE_ImplicitNeeds_0_11 = next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11;
      STATE_VARIABLE_BlockErrSpecs_0_13 = next_value_of_STATE_VARIABLE_BlockErrSpecs_0_13;
      STATE_VARIABLE_WarnSpecs_0_15 = next_value_of_STATE_VARIABLE_WarnSpecs_0_15;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__report_any_errors_in_read_opt_file_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__grab_modules__IntroducedFrom__pred__report_any_errors_in_read_opt_file__1762__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__report_any_errors_in_read_opt_file_5_p_0(
  MR_Word ModuleErrors_6,
  MR_Word STATE_VARIABLE_BlockErrSpecs_0_14,
  MR_Word * STATE_VARIABLE_BlockErrSpecs_15,
  MR_Word STATE_VARIABLE_WarnSpecs_0_16,
  MR_Word * STATE_VARIABLE_WarnSpecs_17)
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
    *STATE_VARIABLE_WarnSpecs_17 = STATE_VARIABLE_WarnSpecs_0_16;
    *STATE_VARIABLE_BlockErrSpecs_15 = STATE_VARIABLE_BlockErrSpecs_0_14;
  }
  else
  {
    MR_Word ModuleErrSpecs_12;
    MR_Word ModuleWarnSpecs_13;
    MR_Word Var_19;

    parse_tree__parse_error__get_read_module_specs_3_p_0(ModuleErrors_6, &ModuleErrSpecs_12, &ModuleWarnSpecs_13);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (parse_tree__grab_modules__report_any_errors_in_read_opt_file_5_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (ModuleErrSpecs_12));
      MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_not_3_p_0(Var_19, (MR_String) "predicate \140parse_tree.grab_modules.report_any_errors_in_read_opt_file\'/5", (MR_String) "ModuleErrSpecs = []");
    *STATE_VARIABLE_BlockErrSpecs_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ModuleErrSpecs_12, STATE_VARIABLE_BlockErrSpecs_0_14);
    *STATE_VARIABLE_WarnSpecs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ModuleWarnSpecs_13, STATE_VARIABLE_WarnSpecs_0_16);
  }
}

static void MR_CALL 
parse_tree__grab_modules__report_cannot_read_opt_file_7_p_0(
  MR_Word Globals_8,
  MR_Word WarnOption_9,
  MR_String FileName_10,
  MR_Word ModuleFileId_11,
  MR_Word ReadModuleErrors_12,
  MR_Word STATE_VARIABLE_WarnSpecs_0_20,
  MR_Word * STATE_VARIABLE_WarnSpecs_21)
{
  MR_bool succeeded;
  MR_Word WarnOptionValue_14;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, WarnOption_9, &WarnOptionValue_14);
  switch (WarnOptionValue_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_WarnSpecs_21 = STATE_VARIABLE_WarnSpecs_0_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Pieces_15;
        MR_Word FatalErrors_16;
        MR_Word Phase_17;
        MR_Word Severity_18;
        MR_Word Spec_19;
        MR_Word Var_24;
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_25, 1) = ((MR_Box) (FileName_10));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[8])));
        }
        {
          Pieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[5])));
          MR_hl_field(1, Pieces_15, 1) = ((MR_Box) (Var_24));
        }
        FatalErrors_16 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_12, 0))));
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_16, ((MR_Box) ((MR_Integer) 0)));
        if (succeeded)
        {
          MR_Word Var_33;

          {
            Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_33, 0) = ((MR_Box) (ModuleFileId_11));
          }
          {
            Phase_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Phase_17, 0) = ((MR_Box) (FileName_10));
            MR_hl_field(1, Phase_17, 1) = ((MR_Box) (Var_33));
          }
        }
        else
          Phase_17 = (MR_Word) ((MR_Unsigned) 16U);
        {
          Severity_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Severity_18, 0) = (MR_Box) ((MR_Unsigned) (WarnOption_9));
        }
        {
          Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.report_cannot_read_opt_file\'/7"));
          MR_hl_field(1, Spec_19, 1) = ((MR_Box) (Severity_18));
          MR_hl_field(1, Spec_19, 2) = ((MR_Box) (Phase_17));
          MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Pieces_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_WarnSpecs_21 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_20));
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
  MR_Word UnusedArgs0_28 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, 19))));
  MR_Word Reuses0_35 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, 26))));
  MR_Word UnusedArgs_36;
  MR_Word Reuses_37;
  MR_Word Var_38;
  MR_Word Var_39;

  switch (KeepUnusedArgs_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      UnusedArgs_36 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      UnusedArgs_36 = UnusedArgs0_28;
      break;
  }
  switch (KeepReuses_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Reuses_37 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      Reuses_37 = Reuses0_35;
      break;
  }
  Var_38 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]));
  Var_39 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreePlainOpt_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_39));
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
    MR_hl_field(0, base, 18) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 19) = ((MR_Box) (UnusedArgs_36));
    MR_hl_field(0, base, 20) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 21) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 22) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 25) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 26) = ((MR_Box) (Reuses_37));
  }
}

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_warnings_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11)
{
  MR_Word Errors0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, 7))));
  MR_Word WarnSpecs0_7 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 4))));
  MR_Word WarnSpecs_8;
  MR_Word Errors_9;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_String Var_28;
  MR_String Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;

  WarnSpecs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), NewSpecs_4, WarnSpecs0_7);
  Var_23 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 0))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 1))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 2))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, Errors0_6, 3))));
  {
    Errors_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_9, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, Errors_9, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, Errors_9, 2) = ((MR_Box) (Var_25));
    MR_hl_field(0, Errors_9, 3) = ((MR_Box) (Var_26));
    MR_hl_field(0, Errors_9, 4) = ((MR_Box) (WarnSpecs_8));
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
  MR_Word * STATE_VARIABLE_AugCompUnit_74,
  MR_Word STATE_VARIABLE_Baggage_0_75,
  MR_Word * STATE_VARIABLE_Baggage_76,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_77,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_78)
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
  MR_Word IntImports_43;
  MR_Word IntUses_44;
  MR_Word ImpImports_45;
  MR_Word ImpUses_46;
  MR_Word IntUseImpImports_47;
  MR_Word Ancestors_48;
  MR_Word AncestorIntImports0_49;
  MR_Word AncestorIntUses0_50;
  MR_Word AncestorImpImports0_51;
  MR_Word AncestorImpUses0_52;
  MR_Word ExplicitIntAvails_53;
  MR_Word ExplicitImpAvails_54;
  MR_Word ExplicitAvailModules_55;
  MR_Word ShadowedAncestorIntImports_56;
  MR_Word AncestorIntImports_57;
  MR_Word ShadowedAncestorImpImports_58;
  MR_Word AncestorImpImports_59;
  MR_Word ShadowedAncestorIntUses_60;
  MR_Word AncestorIntUses_61;
  MR_Word ShadowedAncestorImpUses_62;
  MR_Word AncestorImpUses_63;
  MR_Word Experiment3_64;
  MR_Word ImportAccessibilityInfo_69;
  MR_Word DelayedSpecs_72;
  MR_Word AccessSpecs_73;
  MR_Word STATE_VARIABLE_Baggage_1_85;
  MR_Word Var_86;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word STATE_VARIABLE_Baggage_2_91;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_92;
  MR_Word STATE_VARIABLE_AugCompUnit_1_93;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_2_100;
  MR_Word STATE_VARIABLE_Baggage_3_101;
  MR_Word STATE_VARIABLE_AugCompUnit_2_102;
  MR_Word Var_105;
  MR_Word STATE_VARIABLE_IntIndirectImported_1_106;
  MR_Word STATE_VARIABLE_ImpIndirectImported_1_107;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_1_108;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_1_109;
  MR_Word Var_112;
  MR_Word STATE_VARIABLE_IntIndirectImported_2_113;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_2_114;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_3_115;
  MR_Word STATE_VARIABLE_Baggage_4_116;
  MR_Word STATE_VARIABLE_AugCompUnit_3_117;
  MR_Word Var_121;
  MR_Word STATE_VARIABLE_ImpIndirectImported_2_122;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_2_123;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_4_124;
  MR_Word STATE_VARIABLE_Baggage_5_125;
  MR_Word STATE_VARIABLE_AugCompUnit_4_126;
  MR_Word Var_130;
  MR_Word STATE_VARIABLE_IntIndirectImported_3_131;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_3_132;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_5_133;
  MR_Word STATE_VARIABLE_Baggage_6_134;
  MR_Word STATE_VARIABLE_AugCompUnit_5_135;
  MR_Word Var_139;
  MR_Word STATE_VARIABLE_ImpIndirectImported_3_140;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_3_141;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_6_142;
  MR_Word STATE_VARIABLE_Baggage_7_143;
  MR_Word STATE_VARIABLE_AugCompUnit_6_144;
  MR_Word Var_148;
  MR_Word STATE_VARIABLE_IntIndirectImported_4_149;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_4_150;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_7_151;
  MR_Word STATE_VARIABLE_Baggage_8_152;
  MR_Word STATE_VARIABLE_AugCompUnit_7_153;
  MR_Word Var_157;
  MR_Word STATE_VARIABLE_ImpIndirectImported_4_158;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_4_159;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_8_160;
  MR_Word STATE_VARIABLE_Baggage_9_161;
  MR_Word STATE_VARIABLE_AugCompUnit_8_162;
  MR_Word Var_166;
  MR_Word STATE_VARIABLE_IntIndirectImported_5_167;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_5_168;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_9_169;
  MR_Word STATE_VARIABLE_Baggage_10_170;
  MR_Word STATE_VARIABLE_AugCompUnit_9_171;
  MR_Word Var_175;
  MR_Word STATE_VARIABLE_ImpIndirectImported_5_176;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_5_177;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_10_178;
  MR_Word STATE_VARIABLE_Baggage_11_179;
  MR_Word STATE_VARIABLE_AugCompUnit_10_180;
  MR_Word STATE_VARIABLE_IntIndirectImported_6_184;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_6_185;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_11_186;
  MR_Word STATE_VARIABLE_Baggage_12_187;
  MR_Word STATE_VARIABLE_AugCompUnit_11_188;
  MR_Word Var_191;
  MR_Word STATE_VARIABLE_AugCompUnit_12_192;
  MR_Word Var_194;
  MR_Word STATE_VARIABLE_AugCompUnit_13_195;
  MR_Word Var_197;
  MR_Word STATE_VARIABLE_AugCompUnit_14_198;
  MR_Word Var_200;
  MR_Word STATE_VARIABLE_AugCompUnit_15_201;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_7_204;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_12_205;
  MR_Word STATE_VARIABLE_Baggage_13_206;
  MR_Word STATE_VARIABLE_AugCompUnit_16_207;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_6_211;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_13_212;
  MR_Word STATE_VARIABLE_Baggage_14_213;
  MR_Word STATE_VARIABLE_AugCompUnit_17_214;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_14_218;
  MR_Word STATE_VARIABLE_Baggage_15_219;
  MR_Word STATE_VARIABLE_AugCompUnit_18_220;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_15_224;
  MR_Word STATE_VARIABLE_Baggage_16_225;
  MR_Word STATE_VARIABLE_AugCompUnit_19_226;
  MR_Word STATE_VARIABLE_Baggage_18_237;
  MR_Word STATE_VARIABLE_Baggage_19_241;
  MR_Word Var_247 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 6))));
  MR_Word Var_435;
  MR_Word Var_436;
  MR_Word Var_437;
  MR_Word Var_438;
  MR_Word Var_441;
  MR_Word Var_442;
  MR_Word Var_443;
  MR_Word Var_444;
  MR_Word Var_445;
  MR_Word Var_446;
  MR_Word Var_447;
  MR_Word Var_448;
  MR_Word Var_449;
  MR_Word Var_450;
  MR_Word Var_451;
  MR_Word Var_452;
  MR_Word Var_453;
  MR_Word Var_454;
  MR_Word Var_455;
  MR_Word Var_456;
  MR_Word Var_457;
  MR_Word Var_458;
  MR_Word Var_459;
  MR_Word Var_460;
  MR_Word Var_461;
  MR_Word Var_462;
  MR_Word Var_463;
  MR_Word Var_464;
  MR_Word Var_465;
  MR_Word Var_466;
  MR_Word Var_467;
  MR_Word Var_468;
  MR_Word Var_469;
  MR_Word Var_470;
  MR_Word Var_471;
  MR_Word Var_472;
  MR_String Var_279;
  MR_String Var_280;
  MR_Word Var_281;
  MR_Word Var_282;
  MR_Word Var_283;
  MR_Word Var_285;
  MR_Word Var_286;
  MR_Box conv1_IntFIMs_29;
  MR_Box conv2_ImpFIMs_30;
  MR_String Var_518;
  MR_String Var_519;
  MR_Word Var_520;
  MR_Word Var_521;
  MR_Word Var_522;
  MR_Word Var_523;
  MR_Word Var_525;
  MR_Word Var_533;
  MR_Word Var_535;
  MR_Word Var_536;
  MR_Word Var_537;
  MR_Word Var_538;
  MR_Word Var_539;
  MR_Word Var_540;
  MR_Word _MissingModulesInt_70;
  MR_Word _MissingModulesImp_71;

  if ((MaybeTimestamp_14 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeTimestampMap0_26 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Timestamp_25 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_14, 0))));
    MR_Word Var_81;
    MR_Word Var_82;

    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_82, 1) = ((MR_Box) (Timestamp_25));
      MR_hl_field(0, Var_82, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_81 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_24)), ((MR_Box) (Var_82)));
    {
      MaybeTimestampMap0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTimestampMap0_26, 0) = ((MR_Box) (Var_81));
    }
  }
  Var_279 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_75, 0))));
  Var_280 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_75, 1))));
  Var_281 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_75, 2))));
  Var_282 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_75, 3))));
  Var_283 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_75, 4))));
  Var_285 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_75, 6))));
  Var_286 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_75, 7))));
  {
    STATE_VARIABLE_Baggage_1_85 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 0) = ((MR_Box) (Var_279));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 1) = ((MR_Box) (Var_280));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 2) = ((MR_Box) (Var_281));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 3) = ((MR_Box) (Var_282));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 4) = ((MR_Box) (Var_283));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 5) = ((MR_Box) (MaybeTimestampMap0_26));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 6) = ((MR_Box) (Var_285));
    MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 7) = ((MR_Box) (Var_286));
  }
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[0]));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_1));
    MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_86, 3) = ((MR_Box) (ModuleName_24));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_86, Var_247, ((MR_Box) (IntFIMs0_27)), &conv1_IntFIMs_29);
  IntFIMs_29 = ((MR_Word) (conv1_IntFIMs_29));
  Var_89 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 7))));
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_86, Var_89, ((MR_Box) (ImpFIMs0_28)), &conv2_ImpFIMs_30);
  ImpFIMs_30 = ((MR_Word) (conv2_ImpFIMs_30));
  Var_435 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 0))));
  Var_436 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 1))));
  Var_437 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 2))));
  Var_438 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 3))));
  Var_441 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 6))));
  Var_442 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 7))));
  Var_443 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 8))));
  Var_444 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 9))));
  Var_445 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 10))));
  Var_446 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 11))));
  Var_447 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 12))));
  Var_448 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 13))));
  Var_449 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 14))));
  Var_450 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 15))));
  Var_451 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 16))));
  Var_452 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 17))));
  Var_453 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 18))));
  Var_454 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 19))));
  Var_455 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 20))));
  Var_456 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 21))));
  Var_457 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 22))));
  Var_458 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 23))));
  Var_459 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 24))));
  Var_460 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 25))));
  Var_461 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 26))));
  Var_462 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 27))));
  Var_463 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 28))));
  Var_464 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 29))));
  Var_465 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 30))));
  Var_466 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 31))));
  Var_467 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 32))));
  Var_468 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 33))));
  Var_469 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 34))));
  Var_470 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 35))));
  Var_471 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 36))));
  Var_472 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_15, 37))));
  {
    ParseTreeModuleSrc_32 = (MR_Word) MR_new_object(MR_Word, (38 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeModuleSrc_32, 0) = ((MR_Box) (Var_435));
    MR_hl_field(0, ParseTreeModuleSrc_32, 1) = ((MR_Box) (Var_436));
    MR_hl_field(0, ParseTreeModuleSrc_32, 2) = ((MR_Box) (Var_437));
    MR_hl_field(0, ParseTreeModuleSrc_32, 3) = ((MR_Box) (Var_438));
    MR_hl_field(0, ParseTreeModuleSrc_32, 4) = ((MR_Box) (IntFIMs_29));
    MR_hl_field(0, ParseTreeModuleSrc_32, 5) = ((MR_Box) (ImpFIMs_30));
    MR_hl_field(0, ParseTreeModuleSrc_32, 6) = ((MR_Box) (Var_441));
    MR_hl_field(0, ParseTreeModuleSrc_32, 7) = ((MR_Box) (Var_442));
    MR_hl_field(0, ParseTreeModuleSrc_32, 8) = ((MR_Box) (Var_443));
    MR_hl_field(0, ParseTreeModuleSrc_32, 9) = ((MR_Box) (Var_444));
    MR_hl_field(0, ParseTreeModuleSrc_32, 10) = ((MR_Box) (Var_445));
    MR_hl_field(0, ParseTreeModuleSrc_32, 11) = ((MR_Box) (Var_446));
    MR_hl_field(0, ParseTreeModuleSrc_32, 12) = ((MR_Box) (Var_447));
    MR_hl_field(0, ParseTreeModuleSrc_32, 13) = ((MR_Box) (Var_448));
    MR_hl_field(0, ParseTreeModuleSrc_32, 14) = ((MR_Box) (Var_449));
    MR_hl_field(0, ParseTreeModuleSrc_32, 15) = ((MR_Box) (Var_450));
    MR_hl_field(0, ParseTreeModuleSrc_32, 16) = ((MR_Box) (Var_451));
    MR_hl_field(0, ParseTreeModuleSrc_32, 17) = ((MR_Box) (Var_452));
    MR_hl_field(0, ParseTreeModuleSrc_32, 18) = ((MR_Box) (Var_453));
    MR_hl_field(0, ParseTreeModuleSrc_32, 19) = ((MR_Box) (Var_454));
    MR_hl_field(0, ParseTreeModuleSrc_32, 20) = ((MR_Box) (Var_455));
    MR_hl_field(0, ParseTreeModuleSrc_32, 21) = ((MR_Box) (Var_456));
    MR_hl_field(0, ParseTreeModuleSrc_32, 22) = ((MR_Box) (Var_457));
    MR_hl_field(0, ParseTreeModuleSrc_32, 23) = ((MR_Box) (Var_458));
    MR_hl_field(0, ParseTreeModuleSrc_32, 24) = ((MR_Box) (Var_459));
    MR_hl_field(0, ParseTreeModuleSrc_32, 25) = ((MR_Box) (Var_460));
    MR_hl_field(0, ParseTreeModuleSrc_32, 26) = ((MR_Box) (Var_461));
    MR_hl_field(0, ParseTreeModuleSrc_32, 27) = ((MR_Box) (Var_462));
    MR_hl_field(0, ParseTreeModuleSrc_32, 28) = ((MR_Box) (Var_463));
    MR_hl_field(0, ParseTreeModuleSrc_32, 29) = ((MR_Box) (Var_464));
    MR_hl_field(0, ParseTreeModuleSrc_32, 30) = ((MR_Box) (Var_465));
    MR_hl_field(0, ParseTreeModuleSrc_32, 31) = ((MR_Box) (Var_466));
    MR_hl_field(0, ParseTreeModuleSrc_32, 32) = ((MR_Box) (Var_467));
    MR_hl_field(0, ParseTreeModuleSrc_32, 33) = ((MR_Box) (Var_468));
    MR_hl_field(0, ParseTreeModuleSrc_32, 34) = ((MR_Box) (Var_469));
    MR_hl_field(0, ParseTreeModuleSrc_32, 35) = ((MR_Box) (Var_470));
    MR_hl_field(0, ParseTreeModuleSrc_32, 36) = ((MR_Box) (Var_471));
    MR_hl_field(0, ParseTreeModuleSrc_32, 37) = ((MR_Box) (Var_472));
  }
  GrabbedFileMap0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 6))));
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_90, 0) = ((MR_Box) (ParseTreeModuleSrc_32));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_24)), ((MR_Box) (Var_90)), GrabbedFileMap0_33, &GrabbedFileMap1_34);
  Var_518 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 0))));
  Var_519 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 1))));
  Var_520 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 2))));
  Var_521 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 3))));
  Var_522 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 4))));
  Var_523 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 5))));
  Var_525 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_1_85, 7))));
  {
    STATE_VARIABLE_Baggage_2_91 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_91, 0) = ((MR_Box) (Var_518));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_91, 1) = ((MR_Box) (Var_519));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_91, 2) = ((MR_Box) (Var_520));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_91, 3) = ((MR_Box) (Var_521));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_91, 4) = ((MR_Box) (Var_522));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_91, 5) = ((MR_Box) (Var_523));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_91, 6) = ((MR_Box) (GrabbedFileMap1_34));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_91, 7) = ((MR_Box) (Var_525));
  }
  SrcMap0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_77, 1))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_24)), ((MR_Box) (ParseTreeModuleSrc_32)), SrcMap0_35, &SrcMap_36);
  Var_533 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_77, 0))));
  Var_535 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_77, 2))));
  Var_536 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_77, 3))));
  Var_537 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_77, 4))));
  Var_538 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_77, 5))));
  Var_539 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_77, 6))));
  Var_540 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_77, 7))));
  {
    STATE_VARIABLE_HaveParseTreeMaps_1_92 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_92, 0) = ((MR_Box) (Var_533));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_92, 1) = ((MR_Box) (SrcMap_36));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_92, 2) = ((MR_Box) (Var_535));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_92, 3) = ((MR_Box) (Var_536));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_92, 4) = ((MR_Box) (Var_537));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_92, 5) = ((MR_Box) (Var_538));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_92, 6) = ((MR_Box) (Var_539));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_92, 7) = ((MR_Box) (Var_540));
  }
  parse_tree__prog_parse_tree__init_aug_compilation_unit_2_p_0(ParseTreeModuleSrc_32, &STATE_VARIABLE_AugCompUnit_1_93);
  ImportUseMap_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_32, 3))));
  parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportUseMap_37, &IntImportMap_38, &IntUseMap_39, &ImpImportMap_40, &ImpUseMap_41, &IntUseImpImportMap_42);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntImportMap_38, &IntImports_43);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseMap_39, &IntUses_44);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpImportMap_40, &ImpImports_45);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpUseMap_41, &ImpUses_46);
  IntUseImpImports_47 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseImpImportMap_42);
  Ancestors_48 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_24);
  Var_96 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_97 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_98 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_99 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_21_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, Ancestors_48, Var_96, &AncestorIntImports0_49, Var_97, &AncestorIntUses0_50, Var_98, &AncestorImpImports0_51, Var_99, &AncestorImpUses0_52, STATE_VARIABLE_HaveParseTreeMaps_1_92, &STATE_VARIABLE_HaveParseTreeMaps_2_100, STATE_VARIABLE_Baggage_2_91, &STATE_VARIABLE_Baggage_3_101, STATE_VARIABLE_AugCompUnit_1_93, &STATE_VARIABLE_AugCompUnit_2_102);
  parse_tree__convert_import_use__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_37, &ExplicitIntAvails_53, &ExplicitImpAvails_54);
  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_53, ExplicitImpAvails_54);
  parse_tree__convert_import_use__avail_module_names_2_p_0(Var_105, &ExplicitAvailModules_55);
  mercury__set__divide_by_set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ExplicitAvailModules_55, AncestorIntImports0_49, &ShadowedAncestorIntImports_56, &AncestorIntImports_57);
  mercury__set__divide_by_set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ExplicitAvailModules_55, AncestorImpImports0_51, &ShadowedAncestorImpImports_58, &AncestorImpImports_59);
  mercury__set__divide_by_set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ExplicitAvailModules_55, AncestorIntUses0_50, &ShadowedAncestorIntUses_60, &AncestorIntUses_61);
  mercury__set__divide_by_set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ExplicitAvailModules_55, AncestorImpUses0_52, &ShadowedAncestorImpUses_62, &AncestorImpUses_63);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_1_106);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_1_107);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntImpIndirectImported_1_108);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpImpIndirectImported_1_109);
  Var_112 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorIntImports_57);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, Var_112, STATE_VARIABLE_IntIndirectImported_1_106, &STATE_VARIABLE_IntIndirectImported_2_113, STATE_VARIABLE_IntImpIndirectImported_1_108, &STATE_VARIABLE_IntImpIndirectImported_2_114, STATE_VARIABLE_HaveParseTreeMaps_2_100, &STATE_VARIABLE_HaveParseTreeMaps_3_115, STATE_VARIABLE_Baggage_3_101, &STATE_VARIABLE_Baggage_4_116, STATE_VARIABLE_AugCompUnit_2_102, &STATE_VARIABLE_AugCompUnit_3_117);
  Var_121 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorImpImports_59);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 4, Var_121, STATE_VARIABLE_ImpIndirectImported_1_107, &STATE_VARIABLE_ImpIndirectImported_2_122, STATE_VARIABLE_ImpImpIndirectImported_1_109, &STATE_VARIABLE_ImpImpIndirectImported_2_123, STATE_VARIABLE_HaveParseTreeMaps_3_115, &STATE_VARIABLE_HaveParseTreeMaps_4_124, STATE_VARIABLE_Baggage_4_116, &STATE_VARIABLE_Baggage_5_125, STATE_VARIABLE_AugCompUnit_3_117, &STATE_VARIABLE_AugCompUnit_4_126);
  Var_130 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_43);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 1, Var_130, STATE_VARIABLE_IntIndirectImported_2_113, &STATE_VARIABLE_IntIndirectImported_3_131, STATE_VARIABLE_IntImpIndirectImported_2_114, &STATE_VARIABLE_IntImpIndirectImported_3_132, STATE_VARIABLE_HaveParseTreeMaps_4_124, &STATE_VARIABLE_HaveParseTreeMaps_5_133, STATE_VARIABLE_Baggage_5_125, &STATE_VARIABLE_Baggage_6_134, STATE_VARIABLE_AugCompUnit_4_126, &STATE_VARIABLE_AugCompUnit_5_135);
  Var_139 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_45);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 5, Var_139, STATE_VARIABLE_ImpIndirectImported_2_122, &STATE_VARIABLE_ImpIndirectImported_3_140, STATE_VARIABLE_ImpImpIndirectImported_2_123, &STATE_VARIABLE_ImpImpIndirectImported_3_141, STATE_VARIABLE_HaveParseTreeMaps_5_133, &STATE_VARIABLE_HaveParseTreeMaps_6_142, STATE_VARIABLE_Baggage_6_134, &STATE_VARIABLE_Baggage_7_143, STATE_VARIABLE_AugCompUnit_5_135, &STATE_VARIABLE_AugCompUnit_6_144);
  Var_148 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorIntUses_61);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, Var_148, STATE_VARIABLE_IntIndirectImported_3_131, &STATE_VARIABLE_IntIndirectImported_4_149, STATE_VARIABLE_IntImpIndirectImported_3_132, &STATE_VARIABLE_IntImpIndirectImported_4_150, STATE_VARIABLE_HaveParseTreeMaps_6_142, &STATE_VARIABLE_HaveParseTreeMaps_7_151, STATE_VARIABLE_Baggage_7_143, &STATE_VARIABLE_Baggage_8_152, STATE_VARIABLE_AugCompUnit_6_144, &STATE_VARIABLE_AugCompUnit_7_153);
  Var_157 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorImpUses_63);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 6, Var_157, STATE_VARIABLE_ImpIndirectImported_3_140, &STATE_VARIABLE_ImpIndirectImported_4_158, STATE_VARIABLE_ImpImpIndirectImported_3_141, &STATE_VARIABLE_ImpImpIndirectImported_4_159, STATE_VARIABLE_HaveParseTreeMaps_7_151, &STATE_VARIABLE_HaveParseTreeMaps_8_160, STATE_VARIABLE_Baggage_8_152, &STATE_VARIABLE_Baggage_9_161, STATE_VARIABLE_AugCompUnit_7_153, &STATE_VARIABLE_AugCompUnit_8_162);
  Var_166 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_44);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, Var_166, STATE_VARIABLE_IntIndirectImported_4_149, &STATE_VARIABLE_IntIndirectImported_5_167, STATE_VARIABLE_IntImpIndirectImported_4_150, &STATE_VARIABLE_IntImpIndirectImported_5_168, STATE_VARIABLE_HaveParseTreeMaps_8_160, &STATE_VARIABLE_HaveParseTreeMaps_9_169, STATE_VARIABLE_Baggage_9_161, &STATE_VARIABLE_Baggage_10_170, STATE_VARIABLE_AugCompUnit_8_162, &STATE_VARIABLE_AugCompUnit_9_171);
  Var_175 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_46);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 7, Var_175, STATE_VARIABLE_ImpIndirectImported_4_158, &STATE_VARIABLE_ImpIndirectImported_5_176, STATE_VARIABLE_ImpImpIndirectImported_4_159, &STATE_VARIABLE_ImpImpIndirectImported_5_177, STATE_VARIABLE_HaveParseTreeMaps_9_169, &STATE_VARIABLE_HaveParseTreeMaps_10_178, STATE_VARIABLE_Baggage_10_170, &STATE_VARIABLE_Baggage_11_179, STATE_VARIABLE_AugCompUnit_9_171, &STATE_VARIABLE_AugCompUnit_10_180);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_12, Globals_13, (MR_Integer) 8, IntUseImpImports_47, STATE_VARIABLE_IntIndirectImported_5_167, &STATE_VARIABLE_IntIndirectImported_6_184, STATE_VARIABLE_IntImpIndirectImported_5_168, &STATE_VARIABLE_IntImpIndirectImported_6_185, STATE_VARIABLE_HaveParseTreeMaps_10_178, &STATE_VARIABLE_HaveParseTreeMaps_11_186, STATE_VARIABLE_Baggage_11_179, &STATE_VARIABLE_Baggage_12_187, STATE_VARIABLE_AugCompUnit_10_180, &STATE_VARIABLE_AugCompUnit_11_188);
  Var_191 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShadowedAncestorIntImports_56);
  parse_tree__grab_modules__amend_shadow_imported_module_int1_files_4_p_0((MR_Integer) 0, Var_191, STATE_VARIABLE_AugCompUnit_11_188, &STATE_VARIABLE_AugCompUnit_12_192);
  Var_194 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShadowedAncestorImpImports_58);
  parse_tree__grab_modules__amend_shadow_imported_module_int1_files_4_p_0((MR_Integer) 4, Var_194, STATE_VARIABLE_AugCompUnit_12_192, &STATE_VARIABLE_AugCompUnit_13_195);
  Var_197 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShadowedAncestorIntUses_60);
  parse_tree__grab_modules__amend_shadow_imported_module_int1_files_4_p_0((MR_Integer) 2, Var_197, STATE_VARIABLE_AugCompUnit_13_195, &STATE_VARIABLE_AugCompUnit_14_198);
  Var_200 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShadowedAncestorImpUses_62);
  parse_tree__grab_modules__amend_shadow_imported_module_int1_files_4_p_0((MR_Integer) 6, Var_200, STATE_VARIABLE_AugCompUnit_14_198, &STATE_VARIABLE_AugCompUnit_15_201);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, STATE_VARIABLE_IntIndirectImported_6_184, STATE_VARIABLE_IntImpIndirectImported_6_185, &STATE_VARIABLE_IntImpIndirectImported_7_204, STATE_VARIABLE_HaveParseTreeMaps_11_186, &STATE_VARIABLE_HaveParseTreeMaps_12_205, STATE_VARIABLE_Baggage_12_187, &STATE_VARIABLE_Baggage_13_206, STATE_VARIABLE_AugCompUnit_15_201, &STATE_VARIABLE_AugCompUnit_16_207);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 1, STATE_VARIABLE_ImpIndirectImported_5_176, STATE_VARIABLE_ImpImpIndirectImported_5_177, &STATE_VARIABLE_ImpImpIndirectImported_6_211, STATE_VARIABLE_HaveParseTreeMaps_12_205, &STATE_VARIABLE_HaveParseTreeMaps_13_212, STATE_VARIABLE_Baggage_13_206, &STATE_VARIABLE_Baggage_14_213, STATE_VARIABLE_AugCompUnit_16_207, &STATE_VARIABLE_AugCompUnit_17_214);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, STATE_VARIABLE_IntImpIndirectImported_7_204, STATE_VARIABLE_HaveParseTreeMaps_13_212, &STATE_VARIABLE_HaveParseTreeMaps_14_218, STATE_VARIABLE_Baggage_14_213, &STATE_VARIABLE_Baggage_15_219, STATE_VARIABLE_AugCompUnit_17_214, &STATE_VARIABLE_AugCompUnit_18_220);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, STATE_VARIABLE_ImpImpIndirectImported_6_211, STATE_VARIABLE_HaveParseTreeMaps_14_218, &STATE_VARIABLE_HaveParseTreeMaps_15_224, STATE_VARIABLE_Baggage_15_219, &STATE_VARIABLE_Baggage_16_225, STATE_VARIABLE_AugCompUnit_18_220, &STATE_VARIABLE_AugCompUnit_19_226);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 676, &Experiment3_64);
  switch (Experiment3_64) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_AugCompUnit_74 = STATE_VARIABLE_AugCompUnit_19_226;
        STATE_VARIABLE_Baggage_18_237 = STATE_VARIABLE_Baggage_16_225;
        *STATE_VARIABLE_HaveParseTreeMaps_78 = STATE_VARIABLE_HaveParseTreeMaps_15_224;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_HaveParseTreeMaps_16_230;
        MR_Word STATE_VARIABLE_Baggage_17_231;
        MR_Word STATE_VARIABLE_AugCompUnit_20_232;
        MR_Word Var_234;
        MR_Word Var_235;
        MR_Word _IntUses_65;
        MR_Word _ImpUses_66;
        MR_Word _IntUsesList_67;
        MR_Word _ImpUsesList_68;
        MR_Box conv11_STATE_VARIABLE_HaveParseTreeMaps_78;
        MR_Box conv10_STATE_VARIABLE_Baggage_18_237;
        MR_Box conv9_STATE_VARIABLE_AugCompUnit_74;
        MR_Box conv8_STATE_VARIABLE_IO_80;

        parse_tree__grab_modules__grab_module_int1_file_14_p_0(ProgressStream_12, Globals_13, (MR_Integer) 10, ModuleName_24, &_IntUses_65, &_ImpUses_66, STATE_VARIABLE_HaveParseTreeMaps_15_224, &STATE_VARIABLE_HaveParseTreeMaps_16_230, STATE_VARIABLE_Baggage_16_225, &STATE_VARIABLE_Baggage_17_231, STATE_VARIABLE_AugCompUnit_19_226, &STATE_VARIABLE_AugCompUnit_20_232);
        {
          Var_234 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_234, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[0]));
          MR_hl_field(0, Var_234, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_2));
          MR_hl_field(0, Var_234, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_234, 3) = ((MR_Box) (ProgressStream_12));
          MR_hl_field(0, Var_234, 4) = ((MR_Box) (Globals_13));
          MR_hl_field(0, Var_234, 5) = ((MR_Box) ((MR_Integer) 10));
        }
        Var_235 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_24);
        mercury__list__map2_foldl4_12_p_1((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_234, Var_235, &_IntUsesList_67, &_ImpUsesList_68, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_16_230)), &conv11_STATE_VARIABLE_HaveParseTreeMaps_78, ((MR_Box) (STATE_VARIABLE_Baggage_17_231)), &conv10_STATE_VARIABLE_Baggage_18_237, ((MR_Box) (STATE_VARIABLE_AugCompUnit_20_232)), &conv9_STATE_VARIABLE_AugCompUnit_74, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_80);
        *STATE_VARIABLE_HaveParseTreeMaps_78 = ((MR_Word) (conv11_STATE_VARIABLE_HaveParseTreeMaps_78));
        STATE_VARIABLE_Baggage_18_237 = ((MR_Word) (conv10_STATE_VARIABLE_Baggage_18_237));
        *STATE_VARIABLE_AugCompUnit_74 = ((MR_Word) (conv9_STATE_VARIABLE_AugCompUnit_74));
      }
      break;
  }
  parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0(*STATE_VARIABLE_AugCompUnit_74, &ImportAccessibilityInfo_69);
  parse_tree__check_import_accessibility__check_import_accessibility_6_p_0(ParseTreeModuleSrc_32, ImportAccessibilityInfo_69, &_MissingModulesInt_70, &_MissingModulesImp_71, &DelayedSpecs_72, &AccessSpecs_73);
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(DelayedSpecs_72, STATE_VARIABLE_Baggage_18_237, &STATE_VARIABLE_Baggage_19_241);
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(AccessSpecs_73, STATE_VARIABLE_Baggage_19_241, STATE_VARIABLE_Baggage_76);
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_21_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DirectIntImports_0_6,
  MR_Word * STATE_VARIABLE_DirectIntImports_7,
  MR_Word STATE_VARIABLE_DirectIntUses_0_8,
  MR_Word * STATE_VARIABLE_DirectIntUses_9,
  MR_Word STATE_VARIABLE_DirectImpImports_0_10,
  MR_Word * STATE_VARIABLE_DirectImpImports_11,
  MR_Word STATE_VARIABLE_DirectImpUses_0_12,
  MR_Word * STATE_VARIABLE_DirectImpUses_13,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_14,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_15,
  MR_Word STATE_VARIABLE_Baggage_0_16,
  MR_Word * STATE_VARIABLE_Baggage_17,
  MR_Word STATE_VARIABLE_AugCompUnit_0_18,
  MR_Word * STATE_VARIABLE_AugCompUnit_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugCompUnit_19 = STATE_VARIABLE_AugCompUnit_0_18;
      *STATE_VARIABLE_Baggage_17 = STATE_VARIABLE_Baggage_0_16;
      *STATE_VARIABLE_HaveParseTreeMaps_15 = STATE_VARIABLE_HaveParseTreeMaps_0_14;
      *STATE_VARIABLE_DirectImpUses_13 = STATE_VARIABLE_DirectImpUses_0_12;
      *STATE_VARIABLE_DirectImpImports_11 = STATE_VARIABLE_DirectImpImports_0_10;
      *STATE_VARIABLE_DirectIntUses_9 = STATE_VARIABLE_DirectIntUses_0_8;
      *STATE_VARIABLE_DirectIntImports_7 = STATE_VARIABLE_DirectIntImports_0_6;
    }
    else
    {
      MR_Word ModuleName_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ModuleNames_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_88;
      MR_Word STATE_VARIABLE_Baggage_1_89;
      MR_Word STATE_VARIABLE_AugCompUnit_1_90;
      MR_Word STATE_VARIABLE_DirectIntImports_1_92;
      MR_Word STATE_VARIABLE_DirectImpImports_1_93;
      MR_Word STATE_VARIABLE_DirectIntUses_1_94;
      MR_Word STATE_VARIABLE_DirectImpUses_1_95;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectIntImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_DirectIntUses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_DirectImpImports_0_10;
      MR_Word next_value_of_STATE_VARIABLE_DirectImpUses_0_12;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_14;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_16;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_18;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_16, ModuleName_54, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word IntImports_64;
        MR_Word ImpImports_65;
        MR_Word IntUses_66;
        MR_Word ImpUses_67;

        parse_tree__grab_modules__grab_module_int0_file_for_acu_16_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_54, &IntImports_64, &ImpImports_65, &IntUses_66, &ImpUses_67, STATE_VARIABLE_HaveParseTreeMaps_0_14, &STATE_VARIABLE_HaveParseTreeMaps_1_88, STATE_VARIABLE_Baggage_0_16, &STATE_VARIABLE_Baggage_1_89, STATE_VARIABLE_AugCompUnit_0_18, &STATE_VARIABLE_AugCompUnit_1_90);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_64, STATE_VARIABLE_DirectIntImports_0_6, &STATE_VARIABLE_DirectIntImports_1_92);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_65, STATE_VARIABLE_DirectImpImports_0_10, &STATE_VARIABLE_DirectImpImports_1_93);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_66, STATE_VARIABLE_DirectIntUses_0_8, &STATE_VARIABLE_DirectIntUses_1_94);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_67, STATE_VARIABLE_DirectImpUses_0_12, &STATE_VARIABLE_DirectImpUses_1_95);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_1_90 = STATE_VARIABLE_AugCompUnit_0_18;
        STATE_VARIABLE_Baggage_1_89 = STATE_VARIABLE_Baggage_0_16;
        STATE_VARIABLE_HaveParseTreeMaps_1_88 = STATE_VARIABLE_HaveParseTreeMaps_0_14;
        STATE_VARIABLE_DirectImpUses_1_95 = STATE_VARIABLE_DirectImpUses_0_12;
        STATE_VARIABLE_DirectImpImports_1_93 = STATE_VARIABLE_DirectImpImports_0_10;
        STATE_VARIABLE_DirectIntUses_1_94 = STATE_VARIABLE_DirectIntUses_0_8;
        STATE_VARIABLE_DirectIntImports_1_92 = STATE_VARIABLE_DirectIntImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_55;
      next_value_of_STATE_VARIABLE_DirectIntImports_0_6 = STATE_VARIABLE_DirectIntImports_1_92;
      next_value_of_STATE_VARIABLE_DirectIntUses_0_8 = STATE_VARIABLE_DirectIntUses_1_94;
      next_value_of_STATE_VARIABLE_DirectImpImports_0_10 = STATE_VARIABLE_DirectImpImports_1_93;
      next_value_of_STATE_VARIABLE_DirectImpUses_0_12 = STATE_VARIABLE_DirectImpUses_1_95;
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_14 = STATE_VARIABLE_HaveParseTreeMaps_1_88;
      next_value_of_STATE_VARIABLE_Baggage_0_16 = STATE_VARIABLE_Baggage_1_89;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_18 = STATE_VARIABLE_AugCompUnit_1_90;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_DirectIntImports_0_6 = next_value_of_STATE_VARIABLE_DirectIntImports_0_6;
      STATE_VARIABLE_DirectIntUses_0_8 = next_value_of_STATE_VARIABLE_DirectIntUses_0_8;
      STATE_VARIABLE_DirectImpImports_0_10 = next_value_of_STATE_VARIABLE_DirectImpImports_0_10;
      STATE_VARIABLE_DirectImpUses_0_12 = next_value_of_STATE_VARIABLE_DirectImpUses_0_12;
      STATE_VARIABLE_HaveParseTreeMaps_0_14 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_14;
      STATE_VARIABLE_Baggage_0_16 = next_value_of_STATE_VARIABLE_Baggage_0_16;
      STATE_VARIABLE_AugCompUnit_0_18 = next_value_of_STATE_VARIABLE_AugCompUnit_0_18;
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
parse_tree__grab_modules__amend_shadow_imported_module_int1_files_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AugCompUnit_0_3,
  MR_Word * STATE_VARIABLE_AugCompUnit_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_AugCompUnit_4 = STATE_VARIABLE_AugCompUnit_0_3;
    else
    {
      MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ModuleNames_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_AugCompUnit_1_15;
      MR_Word Map0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_3, 2))));
      MR_Word X0_17;
      MR_Word PT_18;
      MR_Word OldReadWhy1_19;
      MR_Word MaybeOldShadowedReadWhy1_20;
      MR_Word Map_22;
      MR_Box conv0_X0_17;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), Map0_16, ((MR_Box) (ModuleName_10)), &conv0_X0_17);
      X0_17 = ((MR_Word) (conv0_X0_17));
      PT_18 = ((MR_Word) ((MR_hl_field(0, X0_17, 0))));
      OldReadWhy1_19 = ((MR_Unsigned) ((MR_hl_field(0, X0_17, 1))) & (MR_Integer) 15);
      MaybeOldShadowedReadWhy1_20 = ((MR_Word) ((MR_hl_field(0, X0_17, 2))));
      if ((MaybeOldShadowedReadWhy1_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word X_21;
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (HeadVar__1_1));
        }
        {
          X_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, X_21, 0) = ((MR_Box) (PT_18));
          MR_hl_field(0, X_21, 1) = (MR_Box) ((MR_Unsigned) (OldReadWhy1_19));
          MR_hl_field(0, X_21, 2) = ((MR_Box) (Var_24));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (X_21)), Map0_16, &Map_22);
      }
      else
        Map_22 = Map0_16;
      Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_3, 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_3, 1))));
      Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_3, 3))));
      Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_3, 4))));
      Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_3, 5))));
      Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_3, 6))));
      Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_3, 7))));
      Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_3, 8))));
      {
        STATE_VARIABLE_AugCompUnit_1_15 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_15, 0) = ((MR_Box) (Var_33));
        MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_15, 1) = ((MR_Box) (Var_34));
        MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_15, 2) = ((MR_Box) (Map_22));
        MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_15, 3) = ((MR_Box) (Var_36));
        MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_15, 4) = ((MR_Box) (Var_37));
        MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_15, 5) = ((MR_Box) (Var_38));
        MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_15, 6) = ((MR_Box) (Var_39));
        MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_15, 7) = ((MR_Box) (Var_40));
        MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_15, 8) = ((MR_Box) (Var_41));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ModuleNames_11;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_3 = STATE_VARIABLE_AugCompUnit_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_AugCompUnit_0_3 = next_value_of_STATE_VARIABLE_AugCompUnit_0_3;
      continue;
    }
    break;
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
  MR_Word MaybeTimestampMap_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_39, 5))));

  if ((MaybeTimestampMap_121 == (MR_Word) ((MR_Unsigned) 0U)))
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
    MR_Word STATE_VARIABLE_AugCompUnit_1_50;
    MR_Word STATE_VARIABLE_Baggage_2_51;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
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
      case (MR_Integer) 4:
      case (MR_Integer) 5:
        {
          MR_Word DirectIntSpec_34;

          RecompAvail_33 = (MR_Integer) 2;
          {
            DirectIntSpec_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_34, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(0, DirectIntSpec_34, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
            MR_hl_field(0, DirectIntSpec_34, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_34, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_50);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_51);
        }
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 7:
        {
          MR_Word DirectIntSpec_113;

          RecompAvail_33 = (MR_Integer) 4;
          {
            DirectIntSpec_113 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_113, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(0, DirectIntSpec_113, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
            MR_hl_field(0, DirectIntSpec_113, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_113, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_50);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_51);
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_115;

          RecompAvail_33 = (MR_Integer) 1;
          {
            DirectIntSpec_115 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_115, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(0, DirectIntSpec_115, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
            MR_hl_field(0, DirectIntSpec_115, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_115, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_50);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_51);
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_117;

          RecompAvail_33 = (MR_Integer) 3;
          {
            DirectIntSpec_117 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_117, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(0, DirectIntSpec_117, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
            MR_hl_field(0, DirectIntSpec_117, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_117, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_50);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_51);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Word DirectIntSpec_119;

          RecompAvail_33 = (MR_Integer) 5;
          {
            DirectIntSpec_119 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_119, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(0, DirectIntSpec_119, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
            MR_hl_field(0, DirectIntSpec_119, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_119, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_50);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_51);
        }
        break;
      case (MR_Integer) 9:
        {
          MR_Word IntForOptSpec_35;

          RecompAvail_33 = (MR_Integer) 4;
          {
            IntForOptSpec_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, IntForOptSpec_35, 0) = ((MR_Box) (ParseTreeInt1_28));
            MR_hl_field(1, IntForOptSpec_35, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_35, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_50);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_31, STATE_VARIABLE_Baggage_1_48, &STATE_VARIABLE_Baggage_2_51);
        }
        break;
      case (MR_Integer) 10:
        {
          MR_Word TypeRepnSpec_36;

          RecompAvail_33 = (MR_Integer) 1;
          TypeRepnSpec_36 = (MR_Word) (ParseTreeInt1_28);
          parse_tree__grab_modules__aug_compilation_unit_add_type_repn_spec_3_p_0(TypeRepnSpec_36, STATE_VARIABLE_AugCompUnit_0_41, &STATE_VARIABLE_AugCompUnit_1_50);
          STATE_VARIABLE_Baggage_2_51 = STATE_VARIABLE_Baggage_1_48;
        }
        break;
    }
    Var_56 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_28, 4))));
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_58 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[5]), Var_56, ((MR_Box) (Var_57)), &conv3_IntUses_19, ((MR_Box) (Var_58)), &conv2_ImpUses_20);
    *IntUses_19 = ((MR_Word) (conv3_IntUses_19));
    *ImpUses_20 = ((MR_Word) (conv2_ImpUses_20));
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_18, (MR_Integer) 1, RecompAvail_33, MaybeTimestamp_30, STATE_VARIABLE_Baggage_2_51, STATE_VARIABLE_Baggage_40);
    Var_61 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_28, 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_18, Var_61, STATE_VARIABLE_AugCompUnit_1_50, STATE_VARIABLE_AugCompUnit_42);
  }
  else
  {
    MR_Word Errors_66 = ((MR_Word) ((MR_hl_field(1, HaveReadInt1_26, 1))));

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_20);
    parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_66, STATE_VARIABLE_Baggage_0_39, STATE_VARIABLE_Baggage_40);
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
  MR_Word STATE_VARIABLE_AugCompUnit_0_12,
  MR_Word * STATE_VARIABLE_AugCompUnit_13)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_12, 2))));
  MR_Word PT1_7 = ((MR_Word) ((MR_hl_field(0, X_4, 0))));
  MR_Word MN_10 = ((MR_Word) ((MR_hl_field(0, PT1_7, 0))));
  MR_Word Map_11;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), ((MR_Box) (MN_10)), ((MR_Box) (X_4)), Map0_6, &Map_11);
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_12, 0))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_12, 1))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_12, 3))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_12, 4))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_12, 5))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_12, 6))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_12, 7))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_12, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 2) = ((MR_Box) (Map_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_48));
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
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_61,
  MR_Word STATE_VARIABLE_Baggage_0_62,
  MR_Word * STATE_VARIABLE_Baggage_63,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_64,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_65)
{
  MR_Word GrabbedFileMap0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 6))));
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
  MR_Word AncestorIntImports0_38;
  MR_Word AncestorImpImports0_39;
  MR_Word AncestorIntUses0_40;
  MR_Word AncestorImpUses0_41;
  MR_Word ExplicitIntAvails_42;
  MR_Word ExplicitImpAvails_43;
  MR_Word ExplicitAvailModules_44;
  MR_Word ShadowedAncestorIntImports_45;
  MR_Word AncestorIntImports_46;
  MR_Word ShadowedAncestorImpImports_47;
  MR_Word AncestorImpImports_48;
  MR_Word ShadowedAncestorIntUses_49;
  MR_Word AncestorIntUses_50;
  MR_Word ShadowedAncestorImpUses_51;
  MR_Word AncestorImpUses_52;
  MR_Word ImportAccessibilityInfo_53;
  MR_Word MissingModulesInt_54;
  MR_Word MissingModulesImp_55;
  MR_Word DelayedSpecs_56;
  MR_Word AccessSpecs_57;
  MR_Word ImportAndOrUseMap1_58;
  MR_Word ImportAndOrUseMap_59;
  MR_Word ParseTreeModuleSrc_60;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_Baggage_2_70;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_72;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_1_73;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_2_80;
  MR_Word STATE_VARIABLE_Baggage_3_81;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_2_82;
  MR_Word Var_85;
  MR_Word STATE_VARIABLE_IntIndirectImported_1_86;
  MR_Word STATE_VARIABLE_ImpIndirectImported_1_87;
  MR_Word Var_90;
  MR_Word STATE_VARIABLE_IntIndirectImported_2_91;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_3_92;
  MR_Word STATE_VARIABLE_Baggage_4_93;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_3_94;
  MR_Word Var_98;
  MR_Word STATE_VARIABLE_ImpIndirectImported_2_99;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_4_100;
  MR_Word STATE_VARIABLE_Baggage_5_101;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_4_102;
  MR_Word Var_106;
  MR_Word STATE_VARIABLE_IntIndirectImported_3_107;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_5_108;
  MR_Word STATE_VARIABLE_Baggage_6_109;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_5_110;
  MR_Word Var_114;
  MR_Word STATE_VARIABLE_ImpIndirectImported_3_115;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_6_116;
  MR_Word STATE_VARIABLE_Baggage_7_117;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_6_118;
  MR_Word Var_122;
  MR_Word STATE_VARIABLE_IntIndirectImported_4_123;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_7_124;
  MR_Word STATE_VARIABLE_Baggage_8_125;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_7_126;
  MR_Word Var_130;
  MR_Word STATE_VARIABLE_ImpIndirectImported_4_131;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_8_132;
  MR_Word STATE_VARIABLE_Baggage_9_133;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_8_134;
  MR_Word Var_138;
  MR_Word STATE_VARIABLE_IntIndirectImported_5_139;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_9_140;
  MR_Word STATE_VARIABLE_Baggage_10_141;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_9_142;
  MR_Word Var_146;
  MR_Word STATE_VARIABLE_ImpIndirectImported_5_147;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_10_148;
  MR_Word STATE_VARIABLE_Baggage_11_149;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_10_150;
  MR_Word Var_154;
  MR_Word STATE_VARIABLE_IntIndirectImported_6_155;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_11_156;
  MR_Word STATE_VARIABLE_Baggage_12_157;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_11_158;
  MR_Word Var_161;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_12_162;
  MR_Word Var_164;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_13_165;
  MR_Word Var_167;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_14_168;
  MR_Word Var_170;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_15_171;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_12_174;
  MR_Word STATE_VARIABLE_Baggage_13_175;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_16_176;
  MR_Word STATE_VARIABLE_Baggage_14_181;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_17_182;
  MR_Word Var_188;
  MR_String Var_196;
  MR_String Var_197;
  MR_Word Var_198;
  MR_Word Var_199;
  MR_Word Var_200;
  MR_Word Var_201;
  MR_Word Var_341;
  MR_Word Var_342;
  MR_Word Var_343;
  MR_Word Var_344;
  MR_Word Var_256;
  MR_Word Var_258;
  MR_Word Var_259;
  MR_Word Var_260;
  MR_Word Var_261;
  MR_Word Var_262;
  MR_Word Var_263;
  MR_Box conv1_ImportAndOrUseMap1_58;
  MR_Box conv3_ImportAndOrUseMap_59;
  MR_Word Var_301;
  MR_Word Var_302;
  MR_Word Var_303;
  MR_Word Var_305;
  MR_Word Var_306;
  MR_Word Var_307;
  MR_Word Var_308;
  MR_Word Var_309;
  MR_Word Var_310;
  MR_Word Var_311;
  MR_Word Var_312;
  MR_Word Var_313;
  MR_Word Var_314;
  MR_Word Var_315;
  MR_Word Var_316;
  MR_Word Var_317;
  MR_Word Var_318;
  MR_Word Var_319;
  MR_Word Var_320;
  MR_Word Var_321;
  MR_Word Var_322;
  MR_Word Var_323;
  MR_Word Var_324;
  MR_Word Var_325;
  MR_Word Var_326;
  MR_Word Var_327;
  MR_Word Var_328;
  MR_Word Var_329;
  MR_Word Var_330;
  MR_Word Var_331;
  MR_Word Var_332;
  MR_Word Var_333;
  MR_Word Var_334;
  MR_Word Var_335;
  MR_Word Var_336;
  MR_Word Var_337;
  MR_Word Var_338;

  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (ParseTreeModuleSrc0_13));
  }
  Var_71 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  ModuleName_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 0))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_21)), ((MR_Box) (Var_68)), GrabbedFileMap0_20, &GrabbedFileMap1_22);
  Var_196 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 0))));
  Var_197 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 1))));
  Var_198 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 2))));
  Var_199 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 3))));
  Var_200 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 4))));
  Var_201 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_62, 5))));
  {
    STATE_VARIABLE_Baggage_2_70 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_70, 0) = ((MR_Box) (Var_196));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_70, 1) = ((MR_Box) (Var_197));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_70, 2) = ((MR_Box) (Var_198));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_70, 3) = ((MR_Box) (Var_199));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_70, 4) = ((MR_Box) (Var_200));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_70, 5) = ((MR_Box) (Var_201));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_70, 6) = ((MR_Box) (GrabbedFileMap1_22));
    MR_hl_field(0, STATE_VARIABLE_Baggage_2_70, 7) = ((MR_Box) (Var_71));
  }
  SrcMap0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 1))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_21)), ((MR_Box) (ParseTreeModuleSrc0_13)), SrcMap0_23, &SrcMap_24);
  Var_256 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 0))));
  Var_258 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 2))));
  Var_259 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 3))));
  Var_260 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 4))));
  Var_261 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 5))));
  Var_262 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 6))));
  Var_263 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_64, 7))));
  {
    STATE_VARIABLE_HaveParseTreeMaps_1_72 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_72, 0) = ((MR_Box) (Var_256));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_72, 1) = ((MR_Box) (SrcMap_24));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_72, 2) = ((MR_Box) (Var_258));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_72, 3) = ((MR_Box) (Var_259));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_72, 4) = ((MR_Box) (Var_260));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_72, 5) = ((MR_Box) (Var_261));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_72, 6) = ((MR_Box) (Var_262));
    MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_1_72, 7) = ((MR_Box) (Var_263));
  }
  parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(ParseTreeModuleSrc0_13, &STATE_VARIABLE_AugMakeIntUnit_1_73);
  ImportAndOrUseMap0_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 3))));
  parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportAndOrUseMap0_25, &IntImportMap0_26, &IntUseMap0_27, &ImpImportMap0_28, &ImpUseMap0_29, &IntUseImpImportMap0_30);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntImportMap0_26, &IntImports0_31);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseMap0_27, &IntUses_32);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpImportMap0_28, &ImpImports_33);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpUseMap0_29, &ImpUses_34);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseImpImportMap0_30, &IntUsesImpImports_35);
  Var_74 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_74)), IntImports0_31, &IntImports_36);
  Ancestors_37 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_21);
  Var_76 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_77 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_78 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_79 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_20_p_0(ProgressStream_11, Globals_12, Ancestors_37, Var_76, &AncestorIntImports0_38, Var_77, &AncestorImpImports0_39, Var_78, &AncestorIntUses0_40, Var_79, &AncestorImpUses0_41, STATE_VARIABLE_HaveParseTreeMaps_1_72, &STATE_VARIABLE_HaveParseTreeMaps_2_80, STATE_VARIABLE_Baggage_2_70, &STATE_VARIABLE_Baggage_3_81, STATE_VARIABLE_AugMakeIntUnit_1_73, &STATE_VARIABLE_AugMakeIntUnit_2_82);
  parse_tree__convert_import_use__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportAndOrUseMap0_25, &ExplicitIntAvails_42, &ExplicitImpAvails_43);
  Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_42, ExplicitImpAvails_43);
  parse_tree__convert_import_use__avail_module_names_2_p_0(Var_85, &ExplicitAvailModules_44);
  mercury__set__divide_by_set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ExplicitAvailModules_44, AncestorIntImports0_38, &ShadowedAncestorIntImports_45, &AncestorIntImports_46);
  mercury__set__divide_by_set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ExplicitAvailModules_44, AncestorImpImports0_39, &ShadowedAncestorImpImports_47, &AncestorImpImports_48);
  mercury__set__divide_by_set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ExplicitAvailModules_44, AncestorIntUses0_40, &ShadowedAncestorIntUses_49, &AncestorIntUses_50);
  mercury__set__divide_by_set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ExplicitAvailModules_44, AncestorImpUses0_41, &ShadowedAncestorImpUses_51, &AncestorImpUses_52);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_1_86);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_1_87);
  Var_90 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorIntImports_46);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 0, Var_90, STATE_VARIABLE_IntIndirectImported_1_86, &STATE_VARIABLE_IntIndirectImported_2_91, STATE_VARIABLE_HaveParseTreeMaps_2_80, &STATE_VARIABLE_HaveParseTreeMaps_3_92, STATE_VARIABLE_Baggage_3_81, &STATE_VARIABLE_Baggage_4_93, STATE_VARIABLE_AugMakeIntUnit_2_82, &STATE_VARIABLE_AugMakeIntUnit_3_94);
  Var_98 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorImpImports_48);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 2, Var_98, STATE_VARIABLE_ImpIndirectImported_1_87, &STATE_VARIABLE_ImpIndirectImported_2_99, STATE_VARIABLE_HaveParseTreeMaps_3_92, &STATE_VARIABLE_HaveParseTreeMaps_4_100, STATE_VARIABLE_Baggage_4_93, &STATE_VARIABLE_Baggage_5_101, STATE_VARIABLE_AugMakeIntUnit_3_94, &STATE_VARIABLE_AugMakeIntUnit_4_102);
  Var_106 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_36);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 1, Var_106, STATE_VARIABLE_IntIndirectImported_2_91, &STATE_VARIABLE_IntIndirectImported_3_107, STATE_VARIABLE_HaveParseTreeMaps_4_100, &STATE_VARIABLE_HaveParseTreeMaps_5_108, STATE_VARIABLE_Baggage_5_101, &STATE_VARIABLE_Baggage_6_109, STATE_VARIABLE_AugMakeIntUnit_4_102, &STATE_VARIABLE_AugMakeIntUnit_5_110);
  Var_114 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_33);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 3, Var_114, STATE_VARIABLE_ImpIndirectImported_2_99, &STATE_VARIABLE_ImpIndirectImported_3_115, STATE_VARIABLE_HaveParseTreeMaps_5_108, &STATE_VARIABLE_HaveParseTreeMaps_6_116, STATE_VARIABLE_Baggage_6_109, &STATE_VARIABLE_Baggage_7_117, STATE_VARIABLE_AugMakeIntUnit_5_110, &STATE_VARIABLE_AugMakeIntUnit_6_118);
  Var_122 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorIntUses_50);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 4, Var_122, STATE_VARIABLE_IntIndirectImported_3_107, &STATE_VARIABLE_IntIndirectImported_4_123, STATE_VARIABLE_HaveParseTreeMaps_6_116, &STATE_VARIABLE_HaveParseTreeMaps_7_124, STATE_VARIABLE_Baggage_7_117, &STATE_VARIABLE_Baggage_8_125, STATE_VARIABLE_AugMakeIntUnit_6_118, &STATE_VARIABLE_AugMakeIntUnit_7_126);
  Var_130 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorImpUses_52);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 6, Var_130, STATE_VARIABLE_ImpIndirectImported_3_115, &STATE_VARIABLE_ImpIndirectImported_4_131, STATE_VARIABLE_HaveParseTreeMaps_7_124, &STATE_VARIABLE_HaveParseTreeMaps_8_132, STATE_VARIABLE_Baggage_8_125, &STATE_VARIABLE_Baggage_9_133, STATE_VARIABLE_AugMakeIntUnit_7_126, &STATE_VARIABLE_AugMakeIntUnit_8_134);
  Var_138 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_32);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 5, Var_138, STATE_VARIABLE_IntIndirectImported_4_123, &STATE_VARIABLE_IntIndirectImported_5_139, STATE_VARIABLE_HaveParseTreeMaps_8_132, &STATE_VARIABLE_HaveParseTreeMaps_9_140, STATE_VARIABLE_Baggage_9_133, &STATE_VARIABLE_Baggage_10_141, STATE_VARIABLE_AugMakeIntUnit_8_134, &STATE_VARIABLE_AugMakeIntUnit_9_142);
  Var_146 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_34);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 7, Var_146, STATE_VARIABLE_ImpIndirectImported_4_131, &STATE_VARIABLE_ImpIndirectImported_5_147, STATE_VARIABLE_HaveParseTreeMaps_9_140, &STATE_VARIABLE_HaveParseTreeMaps_10_148, STATE_VARIABLE_Baggage_10_141, &STATE_VARIABLE_Baggage_11_149, STATE_VARIABLE_AugMakeIntUnit_9_142, &STATE_VARIABLE_AugMakeIntUnit_10_150);
  Var_154 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsesImpImports_35);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_11, Globals_12, (MR_Integer) 8, Var_154, STATE_VARIABLE_IntIndirectImported_5_139, &STATE_VARIABLE_IntIndirectImported_6_155, STATE_VARIABLE_HaveParseTreeMaps_10_148, &STATE_VARIABLE_HaveParseTreeMaps_11_156, STATE_VARIABLE_Baggage_11_149, &STATE_VARIABLE_Baggage_12_157, STATE_VARIABLE_AugMakeIntUnit_10_150, &STATE_VARIABLE_AugMakeIntUnit_11_158);
  Var_161 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShadowedAncestorIntImports_45);
  parse_tree__grab_modules__amend_shadow_imported_module_int3_files_4_p_0((MR_Integer) 0, Var_161, STATE_VARIABLE_AugMakeIntUnit_11_158, &STATE_VARIABLE_AugMakeIntUnit_12_162);
  Var_164 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShadowedAncestorImpImports_47);
  parse_tree__grab_modules__amend_shadow_imported_module_int3_files_4_p_0((MR_Integer) 2, Var_164, STATE_VARIABLE_AugMakeIntUnit_12_162, &STATE_VARIABLE_AugMakeIntUnit_13_165);
  Var_167 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShadowedAncestorIntUses_49);
  parse_tree__grab_modules__amend_shadow_imported_module_int3_files_4_p_0((MR_Integer) 4, Var_167, STATE_VARIABLE_AugMakeIntUnit_13_165, &STATE_VARIABLE_AugMakeIntUnit_14_168);
  Var_170 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShadowedAncestorImpUses_51);
  parse_tree__grab_modules__amend_shadow_imported_module_int3_files_4_p_0((MR_Integer) 6, Var_170, STATE_VARIABLE_AugMakeIntUnit_14_168, &STATE_VARIABLE_AugMakeIntUnit_15_171);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_11, Globals_12, (MR_Integer) 9, STATE_VARIABLE_IntIndirectImported_6_155, STATE_VARIABLE_HaveParseTreeMaps_11_156, &STATE_VARIABLE_HaveParseTreeMaps_12_174, STATE_VARIABLE_Baggage_12_157, &STATE_VARIABLE_Baggage_13_175, STATE_VARIABLE_AugMakeIntUnit_15_171, &STATE_VARIABLE_AugMakeIntUnit_16_176);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_11, Globals_12, (MR_Integer) 10, STATE_VARIABLE_ImpIndirectImported_5_147, STATE_VARIABLE_HaveParseTreeMaps_12_174, STATE_VARIABLE_HaveParseTreeMaps_65, STATE_VARIABLE_Baggage_13_175, &STATE_VARIABLE_Baggage_14_181, STATE_VARIABLE_AugMakeIntUnit_16_176, &STATE_VARIABLE_AugMakeIntUnit_17_182);
  parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0(STATE_VARIABLE_AugMakeIntUnit_17_182, &ImportAccessibilityInfo_53);
  parse_tree__check_import_accessibility__check_import_accessibility_6_p_0(ParseTreeModuleSrc0_13, ImportAccessibilityInfo_53, &MissingModulesInt_54, &MissingModulesImp_55, &DelayedSpecs_56, &AccessSpecs_57);
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(AccessSpecs_57, STATE_VARIABLE_Baggage_14_181, STATE_VARIABLE_Baggage_63);
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), MissingModulesInt_54, ((MR_Box) (ImportAndOrUseMap0_25)), &conv1_ImportAndOrUseMap1_58);
  ImportAndOrUseMap1_58 = ((MR_Word) (conv1_ImportAndOrUseMap1_58));
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[4]), MissingModulesImp_55, ((MR_Box) (ImportAndOrUseMap1_58)), &conv3_ImportAndOrUseMap_59);
  ImportAndOrUseMap_59 = ((MR_Word) (conv3_ImportAndOrUseMap_59));
  Var_301 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 0))));
  Var_302 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 1))));
  Var_303 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 2))));
  Var_305 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 4))));
  Var_306 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 5))));
  Var_307 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 6))));
  Var_308 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 7))));
  Var_309 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 8))));
  Var_310 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 9))));
  Var_311 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 10))));
  Var_312 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 11))));
  Var_313 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 12))));
  Var_314 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 13))));
  Var_315 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 14))));
  Var_316 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 15))));
  Var_317 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 16))));
  Var_318 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 17))));
  Var_319 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 18))));
  Var_320 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 19))));
  Var_321 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 20))));
  Var_322 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 21))));
  Var_323 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 22))));
  Var_324 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 23))));
  Var_325 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 24))));
  Var_326 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 25))));
  Var_327 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 26))));
  Var_328 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 27))));
  Var_329 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 28))));
  Var_330 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 29))));
  Var_331 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 30))));
  Var_332 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 31))));
  Var_333 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 32))));
  Var_334 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 33))));
  Var_335 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 34))));
  Var_336 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 35))));
  Var_337 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 36))));
  Var_338 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 37))));
  {
    ParseTreeModuleSrc_60 = (MR_Word) MR_new_object(MR_Word, (38 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeModuleSrc_60, 0) = ((MR_Box) (Var_301));
    MR_hl_field(0, ParseTreeModuleSrc_60, 1) = ((MR_Box) (Var_302));
    MR_hl_field(0, ParseTreeModuleSrc_60, 2) = ((MR_Box) (Var_303));
    MR_hl_field(0, ParseTreeModuleSrc_60, 3) = ((MR_Box) (ImportAndOrUseMap_59));
    MR_hl_field(0, ParseTreeModuleSrc_60, 4) = ((MR_Box) (Var_305));
    MR_hl_field(0, ParseTreeModuleSrc_60, 5) = ((MR_Box) (Var_306));
    MR_hl_field(0, ParseTreeModuleSrc_60, 6) = ((MR_Box) (Var_307));
    MR_hl_field(0, ParseTreeModuleSrc_60, 7) = ((MR_Box) (Var_308));
    MR_hl_field(0, ParseTreeModuleSrc_60, 8) = ((MR_Box) (Var_309));
    MR_hl_field(0, ParseTreeModuleSrc_60, 9) = ((MR_Box) (Var_310));
    MR_hl_field(0, ParseTreeModuleSrc_60, 10) = ((MR_Box) (Var_311));
    MR_hl_field(0, ParseTreeModuleSrc_60, 11) = ((MR_Box) (Var_312));
    MR_hl_field(0, ParseTreeModuleSrc_60, 12) = ((MR_Box) (Var_313));
    MR_hl_field(0, ParseTreeModuleSrc_60, 13) = ((MR_Box) (Var_314));
    MR_hl_field(0, ParseTreeModuleSrc_60, 14) = ((MR_Box) (Var_315));
    MR_hl_field(0, ParseTreeModuleSrc_60, 15) = ((MR_Box) (Var_316));
    MR_hl_field(0, ParseTreeModuleSrc_60, 16) = ((MR_Box) (Var_317));
    MR_hl_field(0, ParseTreeModuleSrc_60, 17) = ((MR_Box) (Var_318));
    MR_hl_field(0, ParseTreeModuleSrc_60, 18) = ((MR_Box) (Var_319));
    MR_hl_field(0, ParseTreeModuleSrc_60, 19) = ((MR_Box) (Var_320));
    MR_hl_field(0, ParseTreeModuleSrc_60, 20) = ((MR_Box) (Var_321));
    MR_hl_field(0, ParseTreeModuleSrc_60, 21) = ((MR_Box) (Var_322));
    MR_hl_field(0, ParseTreeModuleSrc_60, 22) = ((MR_Box) (Var_323));
    MR_hl_field(0, ParseTreeModuleSrc_60, 23) = ((MR_Box) (Var_324));
    MR_hl_field(0, ParseTreeModuleSrc_60, 24) = ((MR_Box) (Var_325));
    MR_hl_field(0, ParseTreeModuleSrc_60, 25) = ((MR_Box) (Var_326));
    MR_hl_field(0, ParseTreeModuleSrc_60, 26) = ((MR_Box) (Var_327));
    MR_hl_field(0, ParseTreeModuleSrc_60, 27) = ((MR_Box) (Var_328));
    MR_hl_field(0, ParseTreeModuleSrc_60, 28) = ((MR_Box) (Var_329));
    MR_hl_field(0, ParseTreeModuleSrc_60, 29) = ((MR_Box) (Var_330));
    MR_hl_field(0, ParseTreeModuleSrc_60, 30) = ((MR_Box) (Var_331));
    MR_hl_field(0, ParseTreeModuleSrc_60, 31) = ((MR_Box) (Var_332));
    MR_hl_field(0, ParseTreeModuleSrc_60, 32) = ((MR_Box) (Var_333));
    MR_hl_field(0, ParseTreeModuleSrc_60, 33) = ((MR_Box) (Var_334));
    MR_hl_field(0, ParseTreeModuleSrc_60, 34) = ((MR_Box) (Var_335));
    MR_hl_field(0, ParseTreeModuleSrc_60, 35) = ((MR_Box) (Var_336));
    MR_hl_field(0, ParseTreeModuleSrc_60, 36) = ((MR_Box) (Var_337));
    MR_hl_field(0, ParseTreeModuleSrc_60, 37) = ((MR_Box) (Var_338));
  }
  Var_188 = (MR_Word) (DelayedSpecs_56);
  Var_341 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_17_182, 2))));
  Var_342 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_17_182, 3))));
  Var_343 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_17_182, 4))));
  Var_344 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_17_182, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_61 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_60));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_188));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_341));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_342));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_343));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_344));
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_20_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectIntImports_0_5,
  MR_Word * STATE_VARIABLE_DirectIntImports_6,
  MR_Word STATE_VARIABLE_DirectImpImports_0_7,
  MR_Word * STATE_VARIABLE_DirectImpImports_8,
  MR_Word STATE_VARIABLE_DirectIntUses_0_9,
  MR_Word * STATE_VARIABLE_DirectIntUses_10,
  MR_Word STATE_VARIABLE_DirectImpUses_0_11,
  MR_Word * STATE_VARIABLE_DirectImpUses_12,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_13,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_14,
  MR_Word STATE_VARIABLE_Baggage_0_15,
  MR_Word * STATE_VARIABLE_Baggage_16,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_17,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugMakeIntUnit_18 = STATE_VARIABLE_AugMakeIntUnit_0_17;
      *STATE_VARIABLE_Baggage_16 = STATE_VARIABLE_Baggage_0_15;
      *STATE_VARIABLE_HaveParseTreeMaps_14 = STATE_VARIABLE_HaveParseTreeMaps_0_13;
      *STATE_VARIABLE_DirectImpUses_12 = STATE_VARIABLE_DirectImpUses_0_11;
      *STATE_VARIABLE_DirectIntUses_10 = STATE_VARIABLE_DirectIntUses_0_9;
      *STATE_VARIABLE_DirectImpImports_8 = STATE_VARIABLE_DirectImpImports_0_7;
      *STATE_VARIABLE_DirectIntImports_6 = STATE_VARIABLE_DirectIntImports_0_5;
    }
    else
    {
      MR_Word ModuleName_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ModuleNames_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_86;
      MR_Word STATE_VARIABLE_Baggage_1_87;
      MR_Word STATE_VARIABLE_AugMakeIntUnit_1_88;
      MR_Word STATE_VARIABLE_DirectIntImports_1_90;
      MR_Word STATE_VARIABLE_DirectImpImports_1_91;
      MR_Word STATE_VARIABLE_DirectIntUses_1_92;
      MR_Word STATE_VARIABLE_DirectImpUses_1_93;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DirectIntImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectImpImports_0_7;
      MR_Word next_value_of_STATE_VARIABLE_DirectIntUses_0_9;
      MR_Word next_value_of_STATE_VARIABLE_DirectImpUses_0_11;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_13;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_15;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_17;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_15, ModuleName_51, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word IntImports_62;
        MR_Word ImpImports_63;
        MR_Word IntUses_64;
        MR_Word ImpUses_65;

        parse_tree__grab_modules__grab_module_int0_file_for_amiu_15_p_0(HeadVar__1_1, HeadVar__2_2, ModuleName_51, &IntImports_62, &ImpImports_63, &IntUses_64, &ImpUses_65, STATE_VARIABLE_HaveParseTreeMaps_0_13, &STATE_VARIABLE_HaveParseTreeMaps_1_86, STATE_VARIABLE_Baggage_0_15, &STATE_VARIABLE_Baggage_1_87, STATE_VARIABLE_AugMakeIntUnit_0_17, &STATE_VARIABLE_AugMakeIntUnit_1_88);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_62, STATE_VARIABLE_DirectIntImports_0_5, &STATE_VARIABLE_DirectIntImports_1_90);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_63, STATE_VARIABLE_DirectImpImports_0_7, &STATE_VARIABLE_DirectImpImports_1_91);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_64, STATE_VARIABLE_DirectIntUses_0_9, &STATE_VARIABLE_DirectIntUses_1_92);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_65, STATE_VARIABLE_DirectImpUses_0_11, &STATE_VARIABLE_DirectImpUses_1_93);
      }
      else
      {
        STATE_VARIABLE_AugMakeIntUnit_1_88 = STATE_VARIABLE_AugMakeIntUnit_0_17;
        STATE_VARIABLE_Baggage_1_87 = STATE_VARIABLE_Baggage_0_15;
        STATE_VARIABLE_HaveParseTreeMaps_1_86 = STATE_VARIABLE_HaveParseTreeMaps_0_13;
        STATE_VARIABLE_DirectImpUses_1_93 = STATE_VARIABLE_DirectImpUses_0_11;
        STATE_VARIABLE_DirectIntUses_1_92 = STATE_VARIABLE_DirectIntUses_0_9;
        STATE_VARIABLE_DirectImpImports_1_91 = STATE_VARIABLE_DirectImpImports_0_7;
        STATE_VARIABLE_DirectIntImports_1_90 = STATE_VARIABLE_DirectIntImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_52;
      next_value_of_STATE_VARIABLE_DirectIntImports_0_5 = STATE_VARIABLE_DirectIntImports_1_90;
      next_value_of_STATE_VARIABLE_DirectImpImports_0_7 = STATE_VARIABLE_DirectImpImports_1_91;
      next_value_of_STATE_VARIABLE_DirectIntUses_0_9 = STATE_VARIABLE_DirectIntUses_1_92;
      next_value_of_STATE_VARIABLE_DirectImpUses_0_11 = STATE_VARIABLE_DirectImpUses_1_93;
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_13 = STATE_VARIABLE_HaveParseTreeMaps_1_86;
      next_value_of_STATE_VARIABLE_Baggage_0_15 = STATE_VARIABLE_Baggage_1_87;
      next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_17 = STATE_VARIABLE_AugMakeIntUnit_1_88;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DirectIntImports_0_5 = next_value_of_STATE_VARIABLE_DirectIntImports_0_5;
      STATE_VARIABLE_DirectImpImports_0_7 = next_value_of_STATE_VARIABLE_DirectImpImports_0_7;
      STATE_VARIABLE_DirectIntUses_0_9 = next_value_of_STATE_VARIABLE_DirectIntUses_0_9;
      STATE_VARIABLE_DirectImpUses_0_11 = next_value_of_STATE_VARIABLE_DirectImpUses_0_11;
      STATE_VARIABLE_HaveParseTreeMaps_0_13 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_13;
      STATE_VARIABLE_Baggage_0_15 = next_value_of_STATE_VARIABLE_Baggage_0_15;
      STATE_VARIABLE_AugMakeIntUnit_0_17 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_17;
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
  MR_Word STATE_VARIABLE_Baggage_2_51;
  MR_Word MaybeTimestampMap_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 5))));

  if ((MaybeTimestampMap_75 == (MR_Word) ((MR_Unsigned) 0U)))
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
    MR_Word GrabbedFileMap0_84;
    MR_Word GrabbedFileMap_85;
    MR_String Var_93;
    MR_String Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_100;

    parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_27, &MaybeTimestamp_28, &Errors_29);
    {
      GrabbedFile_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GrabbedFile_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, GrabbedFile_30, 1) = ((MR_Box) (ParseTreeInt3_26));
      MR_hl_field(3, GrabbedFile_30, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
    }
    GrabbedFileMap0_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 6))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (GrabbedFile_30)), GrabbedFileMap0_84, &GrabbedFileMap_85);
    Var_93 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 0))));
    Var_94 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 1))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 2))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 3))));
    Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 4))));
    Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 5))));
    Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_37, 7))));
    {
      STATE_VARIABLE_Baggage_1_46 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 0) = ((MR_Box) (Var_93));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 1) = ((MR_Box) (Var_94));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 2) = ((MR_Box) (Var_95));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 3) = ((MR_Box) (Var_96));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 4) = ((MR_Box) (Var_97));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 5) = ((MR_Box) (Var_98));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 6) = ((MR_Box) (GrabbedFileMap_85));
      MR_hl_field(0, STATE_VARIABLE_Baggage_1_46, 7) = ((MR_Box) (Var_100));
    }
    switch (ReadWhy3_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_32;

          RecompAvail_31 = (MR_Integer) 2;
          {
            DirectIntSpec_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_32, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_32, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
            MR_hl_field(0, DirectIntSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_32, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 7:
        {
          MR_Word DirectIntSpec_67;

          RecompAvail_31 = (MR_Integer) 4;
          {
            DirectIntSpec_67 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_67, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_67, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
            MR_hl_field(0, DirectIntSpec_67, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_67, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_69;

          RecompAvail_31 = (MR_Integer) 1;
          {
            DirectIntSpec_69 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_69, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_69, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
            MR_hl_field(0, DirectIntSpec_69, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_69, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 5:
        {
          MR_Word DirectIntSpec_71;

          RecompAvail_31 = (MR_Integer) 3;
          {
            DirectIntSpec_71 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_71, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_71, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
            MR_hl_field(0, DirectIntSpec_71, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_71, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Word DirectIntSpec_73;

          RecompAvail_31 = (MR_Integer) 5;
          {
            DirectIntSpec_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_73, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, DirectIntSpec_73, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
            MR_hl_field(0, DirectIntSpec_73, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_73, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
      case (MR_Integer) 10:
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
      case (MR_Integer) 9:
        {
          MR_Word IndirectIntSpec_66;

          RecompAvail_31 = (MR_Integer) 3;
          {
            IndirectIntSpec_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IndirectIntSpec_66, 0) = ((MR_Box) (ParseTreeInt3_26));
            MR_hl_field(0, IndirectIntSpec_66, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(IndirectIntSpec_66, STATE_VARIABLE_AugMakeIntUnit_0_39, STATE_VARIABLE_AugMakeIntUnit_40);
        }
        break;
    }
    IntImportMap_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_26, 3))));
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0), IntImportMap_34, IntImports_18);
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_17, (MR_Integer) 3, RecompAvail_31, MaybeTimestamp_28, STATE_VARIABLE_Baggage_1_46, &STATE_VARIABLE_Baggage_2_51);
  }
  else
  {
    Errors_29 = ((MR_Word) ((MR_hl_field(1, HaveReadInt3_24, 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_18);
    STATE_VARIABLE_Baggage_2_51 = STATE_VARIABLE_Baggage_0_37;
    *STATE_VARIABLE_AugMakeIntUnit_40 = STATE_VARIABLE_AugMakeIntUnit_0_39;
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_29, STATE_VARIABLE_Baggage_2_51, STATE_VARIABLE_Baggage_38);
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
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_12,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_13)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_12, 3))));
  MR_Word PT3_7 = ((MR_Word) ((MR_hl_field(0, X_4, 0))));
  MR_Word MN_10 = ((MR_Word) ((MR_hl_field(0, PT3_7, 0))));
  MR_Word Map_11;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_33;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int3_spec_0), ((MR_Box) (MN_10)), ((MR_Box) (X_4)), Map0_6, &Map_11);
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_12, 0))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_12, 1))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_12, 2))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_12, 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_12, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 3) = ((MR_Box) (Map_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_33));
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
  FatalErrorSpecs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), FatalErrorSpecs0_8, FatalErrorSpecs1_13);
  NonFatalErrors_19 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors0_9, NonFatalErrors1_14);
  NonFatalErrorSpecs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), NonFatalErrorSpecs0_10, NonFatalErrorSpecs1_15);
  WarningSpecs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarningSpecs0_11, WarningSpecs1_16);
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

  NonFatalErrorSpecs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), NewSpecs_4, NonFatalErrorSpecs0_7);
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

static void MR_CALL 
parse_tree__grab_modules__amend_shadow_imported_module_int3_files_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_3,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_AugMakeIntUnit_4 = STATE_VARIABLE_AugMakeIntUnit_0_3;
    else
    {
      MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ModuleNames_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_AugMakeIntUnit_1_15;
      MR_Word Map0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_3, 3))));
      MR_Word X0_17;
      MR_Word PT_18;
      MR_Word OldReadWhy3_19;
      MR_Word MaybeOldShadowedReadWhy3_20;
      MR_Word Map_22;
      MR_Box conv0_X0_17;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int3_spec_0), Map0_16, ((MR_Box) (ModuleName_10)), &conv0_X0_17);
      X0_17 = ((MR_Word) (conv0_X0_17));
      PT_18 = ((MR_Word) ((MR_hl_field(0, X0_17, 0))));
      OldReadWhy3_19 = ((MR_Unsigned) ((MR_hl_field(0, X0_17, 1))) & (MR_Integer) 15);
      MaybeOldShadowedReadWhy3_20 = ((MR_Word) ((MR_hl_field(0, X0_17, 2))));
      if ((MaybeOldShadowedReadWhy3_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word X_21;
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (HeadVar__1_1));
        }
        {
          X_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, X_21, 0) = ((MR_Box) (PT_18));
          MR_hl_field(0, X_21, 1) = (MR_Box) ((MR_Unsigned) (OldReadWhy3_19));
          MR_hl_field(0, X_21, 2) = ((MR_Box) (Var_24));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int3_spec_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (X_21)), Map0_16, &Map_22);
      }
      else
        Map_22 = Map0_16;
      Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_3, 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_3, 1))));
      Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_3, 2))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_3, 4))));
      Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_3, 5))));
      {
        STATE_VARIABLE_AugMakeIntUnit_1_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_1_15, 0) = ((MR_Box) (Var_30));
        MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_1_15, 1) = ((MR_Box) (Var_31));
        MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_1_15, 2) = ((MR_Box) (Var_32));
        MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_1_15, 3) = ((MR_Box) (Map_22));
        MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_1_15, 4) = ((MR_Box) (Var_34));
        MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_1_15, 5) = ((MR_Box) (Var_35));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ModuleNames_11;
      next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_3 = STATE_VARIABLE_AugMakeIntUnit_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_AugMakeIntUnit_0_3 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_3;
      continue;
    }
    break;
  }
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
