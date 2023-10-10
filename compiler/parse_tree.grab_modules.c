/*
** Automatically generated from `grab_modules.m'
** by the Mercury compiler,
** version rotd-2023-10-10
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
#include "dir.mih"
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
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.check_import_accessibility.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

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
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__459__1_4_p_0(
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
parse_tree__grab_modules__update_opt_error_status_on_failure_7_p_0(
  MR_Word Globals_8,
  MR_Word WarnOption_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17,
  MR_Word STATE_VARIABLE_Error_0_18,
  MR_Word * STATE_VARIABLE_Error_19);

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
parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(
  MR_Word KeepUnusedArgs_5,
  MR_Word KeepReuses_6,
  MR_Word ParseTreePlainOpt0_7,
  MR_Word * ParseTreePlainOpt_8);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectImports_0_5,
  MR_Word * STATE_VARIABLE_DirectImports_6,
  MR_Word STATE_VARIABLE_DirectUses_0_7,
  MR_Word * STATE_VARIABLE_DirectUses_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35,
  MR_Word STATE_VARIABLE_Baggage_0_36,
  MR_Word * STATE_VARIABLE_Baggage_37,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_38,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_39);

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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy3_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25,
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_8,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_9,
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35,
  MR_Word STATE_VARIABLE_Baggage_0_36,
  MR_Word * STATE_VARIABLE_Baggage_37,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_38,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_39);

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
parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * AugMakeIntUnit_4);

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_2(
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
parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_1(
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_39,
  MR_Word STATE_VARIABLE_Baggage_0_40,
  MR_Word * STATE_VARIABLE_Baggage_41,
  MR_Word STATE_VARIABLE_AugCompUnit_0_42,
  MR_Word * STATE_VARIABLE_AugCompUnit_43);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static MR_bool MR_CALL 
parse_tree__grab_modules__should_read_interface_3_p_0(
  MR_Word Baggage_4,
  MR_Word ModuleName_5,
  MR_Word FileKind_6);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy2_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25,
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_30,
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35,
  MR_Word STATE_VARIABLE_Baggage_0_36,
  MR_Word * STATE_VARIABLE_Baggage_37,
  MR_Word STATE_VARIABLE_AugCompUnit_0_38,
  MR_Word * STATE_VARIABLE_AugCompUnit_39);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11);

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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_36,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_37,
  MR_Word STATE_VARIABLE_Baggage_0_38,
  MR_Word * STATE_VARIABLE_Baggage_39,
  MR_Word STATE_VARIABLE_AugCompUnit_0_40,
  MR_Word * STATE_VARIABLE_AugCompUnit_41);

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
parse_tree__grab_modules__module_baggage_add_errors_3_p_0(
  MR_Word Errors1_4,
  MR_Word STATE_VARIABLE_Baggage_0_23,
  MR_Word * STATE_VARIABLE_Baggage_24);

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(
  MR_Word ModuleName_5,
  MR_Word FileWhy_6,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11);

static void MR_CALL 
parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word RecompAvail_9,
  MR_Word MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Baggage_0_18,
  MR_Word * STATE_VARIABLE_Baggage_19);

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


static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_1[9][3];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[6][2];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_4[1][9];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_5[1][13];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[2][7];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[1][17];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_8[2][6];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[2][5];




static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_1[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_module_int1_file_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_module_int2_file_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_module_int0_file_for_acu_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_module_int0_file_for_amiu_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__grab_modules__grab_trans_opt_files_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
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

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_5[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
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

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[2][7] = {
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

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int1_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_8[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0))
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
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
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
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__459__1_4_p_0(
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
parse_tree__grab_modules__aug_compilation_unit_add_trans_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 5))));
  MR_Word MN_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word Map_8;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ((MR_Box) (MN_7)), ((MR_Box) (X_4)), Map0_6, &Map_8);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 6))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 7))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 8))));
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
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 4))));
  MR_Word MN_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word Map_8;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), ((MR_Box) (MN_7)), ((MR_Box) (X_4)), Map0_6, &Map_8);
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 0))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 1))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 2))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 5))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 6))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 7))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 8))));
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
parse_tree__grab_modules__dump_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__459__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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

  Var_11 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[8]), ModuleNames_6);
  ModuleNameStrs_8 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[1]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (parse_tree__grab_modules__dump_modules_4_p_0_2));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Stream_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, ModuleNameStrs_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10);
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_30)
{
  MR_Word Verbose_21;
  MR_Word VeryVerbose_22;
  MR_Word ParseTreeTransOptsCord_23;
  MR_Word TransOptSpecs_24;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word STATE_VARIABLE_Baggage_45_45;
  MR_Word Var_47;
  MR_Word Errors0_61;
  MR_Word NonFatalErrorSpecs0_62;
  MR_Word NonFatalErrorSpecs_63;
  MR_Word Errors_64;
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
  MR_String Var_49;
  MR_String Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;

  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 72, &Verbose_21);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_21, (MR_String) "% Reading .trans_opt files..\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_13, Verbose_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 73, &VeryVerbose_22);
  Var_38 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0));
  parse_tree__grab_modules__read_trans_opt_files_12_p_0(ProgressStream_13, Globals_14, VeryVerbose_22, TransOptModuleNames_15, Var_38, &ParseTreeTransOptsCord_23, (MR_Word) ((MR_Unsigned) 0U), &TransOptSpecs_24, (MR_Integer) 0, FoundError_16);
  Var_43 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ParseTreeTransOptsCord_23);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[7]), Var_43, ((MR_Box) (STATE_VARIABLE_AugCompUnit_0_27)), &conv1_STATE_VARIABLE_AugCompUnit_28);
  *STATE_VARIABLE_AugCompUnit_28 = ((MR_Word) (conv1_STATE_VARIABLE_AugCompUnit_28));
  Errors0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 6))));
  NonFatalErrorSpecs0_62 = ((MR_Word) ((MR_hl_field(0, Errors0_61, (MR_Integer) 3))));
  NonFatalErrorSpecs_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TransOptSpecs_24, NonFatalErrorSpecs0_62);
  Var_75 = ((MR_Word) ((MR_hl_field(0, Errors0_61, (MR_Integer) 0))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, Errors0_61, (MR_Integer) 1))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, Errors0_61, (MR_Integer) 2))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, Errors0_61, (MR_Integer) 4))));
  {
    Errors_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_64, 0) = ((MR_Box) (Var_75));
    MR_hl_field(0, Errors_64, 1) = ((MR_Box) (Var_76));
    MR_hl_field(0, Errors_64, 2) = ((MR_Box) (Var_77));
    MR_hl_field(0, Errors_64, 3) = ((MR_Box) (NonFatalErrorSpecs_63));
    MR_hl_field(0, Errors_64, 4) = ((MR_Box) (Var_79));
  }
  Var_80 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 0))));
  Var_81 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 1))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 2))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 3))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 4))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 5))));
  {
    STATE_VARIABLE_Baggage_45_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 0) = ((MR_Box) (Var_80));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 1) = ((MR_Box) (Var_81));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 2) = ((MR_Box) (Var_82));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 3) = ((MR_Box) (Var_83));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 4) = ((MR_Box) (Var_84));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 5) = ((MR_Box) (Var_85));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 6) = ((MR_Box) (Errors_64));
  }
  Var_47 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  Var_49 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 0))));
  Var_50 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 1))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 2))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 3))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 4))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_26 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_47));
  }
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_21, (MR_String) "% Done.\n");
  *STATE_VARIABLE_HaveReadModuleMaps_30 = STATE_VARIABLE_HaveReadModuleMaps_0_29;
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
      MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HaveReadTransOpt_37;
      MR_Word STATE_VARIABLE_ParseTreeTransOptsCord_53_53;
      MR_Word STATE_VARIABLE_Specs_54_54;
      MR_Word STATE_VARIABLE_OptError_55_55;
      MR_Word STATE_VARIABLE_Specs_59_59;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;
      MR_Word next_value_of_HeadVar__9_9;

      parse_tree__read_modules__read_module_trans_opt_6_p_0(ProgressStream_1, Globals_2, ModuleName_31, &HaveReadTransOpt_37);
      if (((MR_tag((MR_Word) HaveReadTransOpt_37)) == (MR_Integer) 1))
      {
        MR_String FileName_42 = ((MR_String) ((MR_hl_field(1, HaveReadTransOpt_37, (MR_Integer) 0))));
        MR_Word WarnOptionValue_62;

        libs__globals__lookup_bool_option_3_p_0(Globals_2, (MR_Integer) 18, &WarnOptionValue_62);
        switch (WarnOptionValue_62) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_54_54 = STATE_VARIABLE_Specs_0_7;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_63;
              MR_Word Spec_64;
              MR_Word Var_67;
              MR_Word Var_68;

              {
                Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_68, 1) = ((MR_Box) (FileName_42));
              }
              {
                Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
                MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[5])));
              }
              {
                Pieces_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_63, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[2])));
                MR_hl_field(1, Pieces_63, 1) = ((MR_Box) (Var_67));
              }
              {
                Spec_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.update_opt_error_status_on_failure\'/7"));
                MR_hl_field(2, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(2, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(2, Spec_64, 3) = ((MR_Box) (Pieces_63));
              }
              {
                STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (Spec_64));
                MR_hl_field(1, STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_7));
              }
            }
            break;
        }
        STATE_VARIABLE_OptError_55_55 = HeadVar__9_9;
        STATE_VARIABLE_ParseTreeTransOptsCord_53_53 = HeadVar__5_5;
      }
      else
      {
        MR_Word ParseTreeTransOpt_40 = ((MR_Word) ((MR_hl_field(0, HaveReadTransOpt_37, (MR_Integer) 2))));
        MR_Word ModuleErrors_41 = ((MR_Word) ((MR_hl_field(0, HaveReadTransOpt_37, (MR_Integer) 3))));
        MR_Word FatalErrors_73;
        MR_Word NonFatalErrors0_74;
        MR_Word NonFatalErrors_75;

        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ((MR_Box) (ParseTreeTransOpt_40)), HeadVar__5_5, &STATE_VARIABLE_ParseTreeTransOptsCord_53_53);
        FatalErrors_73 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_41, (MR_Integer) 0))));
        NonFatalErrors0_74 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_41, (MR_Integer) 2))));
        mercury__set__delete_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), ((MR_Box) ((MR_Integer) 8)), NonFatalErrors0_74, &NonFatalErrors_75);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_73);
        if (succeeded)
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors_75);
        if (succeeded)
        {
          STATE_VARIABLE_OptError_55_55 = HeadVar__9_9;
          STATE_VARIABLE_Specs_54_54 = STATE_VARIABLE_Specs_0_7;
        }
        else
        {
          MR_Word Var_77;

          Var_77 = parse_tree__parse_error__get_read_module_specs_1_f_0(ModuleErrors_41);
          STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_77, STATE_VARIABLE_Specs_0_7);
          STATE_VARIABLE_OptError_55_55 = (MR_Integer) 1;
        }
      }
      parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ProgressStream_1, VeryVerbose_3, Globals_2, STATE_VARIABLE_Specs_54_54, &STATE_VARIABLE_Specs_59_59);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_32;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_ParseTreeTransOptsCord_53_53;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_59_59;
      next_value_of_HeadVar__9_9 = STATE_VARIABLE_OptError_55_55;
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_67,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_68)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_65, (MR_Integer) 0))));
  MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_21, (MR_Integer) 0))));
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
  MR_Word ParseTreePlainOpts_45;
  MR_Word OptError_47;
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
  MR_Word STATE_VARIABLE_AugCompUnit_86_86;
  MR_Word STATE_VARIABLE_Baggage_87_87;
  MR_Word Var_88;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_95_95;
  MR_Word STATE_VARIABLE_Baggage_96_96;
  MR_Word STATE_VARIABLE_AugCompUnit_97_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_110_110;
  MR_Word STATE_VARIABLE_Baggage_111_111;
  MR_Word STATE_VARIABLE_AugCompUnit_112_112;
  MR_Word Var_116;
  MR_Box conv1_STATE_VARIABLE_AugCompUnit_86_86;

  Ancestors0_23 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  Var_71 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_21, (MR_Integer) 3))));
  DirectDeps0_24 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_71);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), DirectDeps0_24, &DirectDeps_25);
  OptModules_26 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors0_23, DirectDeps_25);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 73, &VeryVerbose_27);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 502, &ReadOptFilesTransitively_28);
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), OptModules_26, &DontQueueOptModules_29);
  Var_74 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModules_26);
  Var_75 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0));
  Var_76 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_77 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0));
  parse_tree__grab_modules__read_plain_opt_files_18_p_0(ProgressStream_13, Globals_15, VeryVerbose_27, ReadOptFilesTransitively_28, Var_74, DontQueueOptModules_29, Var_75, &ParseTreePlainOptsCord0_30, Var_76, &ExplicitDeps_31, Var_77, &ImplicitNeedsCord_32, (MR_Word) ((MR_Unsigned) 0U), &OptSpecs0_33, (MR_Integer) 0, &OptError0_34);
  ParseTreePlainOpts0_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), ParseTreePlainOptsCord0_30);
  libs__globals__get_opt_tuple_2_p_0(Globals_15, &OptTuple_36);
  UnusedArgs_37 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_36, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 515, &StructureReuse_38);
  succeeded = (UnusedArgs_37 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (StructureReuse_38 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word HaveReadOwnPlainOpt0_39;
    MR_Word OptSpecs1_46;

    parse_tree__read_modules__read_module_plain_opt_6_p_0(ProgressStream_13, Globals_15, ModuleName_22, &HaveReadOwnPlainOpt0_39);
    if (((MR_tag((MR_Word) HaveReadOwnPlainOpt0_39)) == (MR_Integer) 1))
    {
      MR_String OwnOptFileName_48 = ((MR_String) ((MR_hl_field(1, HaveReadOwnPlainOpt0_39, (MR_Integer) 0))));

      ParseTreePlainOpts_45 = ParseTreePlainOpts0_35;
      parse_tree__grab_modules__update_opt_error_status_on_failure_7_p_0(Globals_15, (MR_Integer) 17, OwnOptFileName_48, OptSpecs0_33, &OptSpecs1_46, OptError0_34, &OptError_47);
    }
    else
    {
      MR_Word OwnParseTreePlainOpt0_42 = ((MR_Word) ((MR_hl_field(0, HaveReadOwnPlainOpt0_39, (MR_Integer) 2))));
      MR_Word OwnOptModuleErrors_43 = ((MR_Word) ((MR_hl_field(0, HaveReadOwnPlainOpt0_39, (MR_Integer) 3))));
      MR_Word OwnParseTreePlainOpt_44;

      parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(UnusedArgs_37, StructureReuse_38, OwnParseTreePlainOpt0_42, &OwnParseTreePlainOpt_44);
      {
        ParseTreePlainOpts_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ParseTreePlainOpts_45, 0) = ((MR_Box) (OwnParseTreePlainOpt_44));
        MR_hl_field(1, ParseTreePlainOpts_45, 1) = ((MR_Box) (ParseTreePlainOpts0_35));
      }
      parse_tree__grab_modules__update_opt_error_status_on_success_5_p_0(OwnOptModuleErrors_43, OptSpecs0_33, &OptSpecs1_46, OptError0_34, &OptError_47);
    }
    parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ErrorStream_14, VeryVerbose_27, Globals_15, OptSpecs1_46, &OptSpecs_50);
  }
  else
  {
    ParseTreePlainOpts_45 = ParseTreePlainOpts0_35;
    OptSpecs_50 = OptSpecs0_33;
    OptError_47 = OptError0_34;
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[5]), ParseTreePlainOpts_45, ((MR_Box) (STATE_VARIABLE_AugCompUnit_0_65)), &conv1_STATE_VARIABLE_AugCompUnit_86_86);
  STATE_VARIABLE_AugCompUnit_86_86 = ((MR_Word) (conv1_STATE_VARIABLE_AugCompUnit_86_86));
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(OptSpecs_50, STATE_VARIABLE_Baggage_0_63, &STATE_VARIABLE_Baggage_87_87);
  Var_88 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[6]), OptModules_26);
  OptModuleAncestors_51 = mercury__set__power_union_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_88);
  OldModuleAncestors_52 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), OldModuleAncestors_52, &OldModuleAndAncestors_53);
  OptOnlyModuleAncestors_54 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModuleAncestors_51, OldModuleAndAncestors_53);
  Var_92 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptOnlyModuleAncestors_54);
  Var_93 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_94 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_17_p_0(ProgressStream_13, Globals_15, (MR_Integer) 1, Var_92, Var_93, &OptAncestorImports_55, Var_94, &OptAncestorUses_56, STATE_VARIABLE_HaveReadModuleMaps_0_67, &STATE_VARIABLE_HaveReadModuleMaps_95_95, STATE_VARIABLE_Baggage_87_87, &STATE_VARIABLE_Baggage_96_96, STATE_VARIABLE_AugCompUnit_86_86, &STATE_VARIABLE_AugCompUnit_97_97);
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
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_13, Globals_15, (MR_Integer) 5, Var_107, Var_108, &NewIndirectDeps_60, Var_109, &NewImplIndirectDeps_61, STATE_VARIABLE_HaveReadModuleMaps_95_95, &STATE_VARIABLE_HaveReadModuleMaps_110_110, STATE_VARIABLE_Baggage_96_96, &STATE_VARIABLE_Baggage_111_111, STATE_VARIABLE_AugCompUnit_97_97, &STATE_VARIABLE_AugCompUnit_112_112);
  Var_116 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewIndirectDeps_60, NewImplIndirectDeps_61);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_13, Globals_15, (MR_Integer) 3, Var_116, STATE_VARIABLE_HaveReadModuleMaps_110_110, STATE_VARIABLE_HaveReadModuleMaps_68, STATE_VARIABLE_Baggage_111_111, STATE_VARIABLE_Baggage_64, STATE_VARIABLE_AugCompUnit_112_112, STATE_VARIABLE_AugCompUnit_66);
  ModuleErrors_62 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Baggage_64, (MR_Integer) 6))));
  {
    MR_Word Var_121 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_62, (MR_Integer) 0))));

    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_121);
  }
  if (!(succeeded))
  {
    {
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_62, (MR_Integer) 2))));

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_122);
    }
    if (!(succeeded))
      succeeded = (OptError_47 == (MR_Integer) 1);
  }
  if (succeeded)
    *FoundError_16 = (MR_Integer) 1;
  else
    *FoundError_16 = (MR_Integer) 0;
}

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_on_failure_7_p_0(
  MR_Word Globals_8,
  MR_Word WarnOption_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17,
  MR_Word STATE_VARIABLE_Error_0_18,
  MR_Word * STATE_VARIABLE_Error_19)
{
  MR_Word WarnOptionValue_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, WarnOption_9, &WarnOptionValue_13);
  switch (WarnOptionValue_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Pieces_14;
        MR_Word Spec_15;
        MR_Word Var_22;
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_23, 1) = ((MR_Box) (FileName_10));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[5])));
        }
        {
          Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[2])));
          MR_hl_field(1, Pieces_14, 1) = ((MR_Box) (Var_22));
        }
        {
          Spec_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.update_opt_error_status_on_failure\'/7"));
          MR_hl_field(2, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(2, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(2, Spec_15, 3) = ((MR_Box) (Pieces_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_17 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
        }
      }
      break;
  }
  *STATE_VARIABLE_Error_19 = STATE_VARIABLE_Error_0_18;
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
      MR_Word ModuleName_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleNames0_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HaveReadPlainOpt_55;
      MR_Word ModuleNames1_65;
      MR_Word DontQueueOptModules1_66;
      MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_82_82;
      MR_Word STATE_VARIABLE_Specs_83_83;
      MR_Word STATE_VARIABLE_OptError_84_84;
      MR_Word STATE_VARIABLE_ExplicitDeps_85_85;
      MR_Word STATE_VARIABLE_ImplicitNeeds_86_86;
      MR_Word STATE_VARIABLE_Specs_91_91;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_DontQueueOptModules0_6;
      MR_Word next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ExplicitDeps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;
      MR_Word next_value_of_STATE_VARIABLE_OptError_0_15;

      parse_tree__read_modules__read_module_plain_opt_6_p_0(ProgressStream_1, Globals_2, ModuleName_46, &HaveReadPlainOpt_55);
      if (((MR_tag((MR_Word) HaveReadPlainOpt_55)) == (MR_Integer) 1))
      {
        MR_String FileName_67 = ((MR_String) ((MR_hl_field(1, HaveReadPlainOpt_55, (MR_Integer) 0))));
        MR_Word WarnOptionValue_96;

        libs__globals__lookup_bool_option_3_p_0(Globals_2, (MR_Integer) 17, &WarnOptionValue_96);
        switch (WarnOptionValue_96) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_13;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_97;
              MR_Word Spec_98;
              MR_Word Var_101;
              MR_Word Var_102;

              {
                Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_102, 1) = ((MR_Box) (FileName_67));
              }
              {
                Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
                MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[5])));
              }
              {
                Pieces_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_97, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[2])));
                MR_hl_field(1, Pieces_97, 1) = ((MR_Box) (Var_101));
              }
              {
                Spec_98 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_98, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.update_opt_error_status_on_failure\'/7"));
                MR_hl_field(2, Spec_98, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(2, Spec_98, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(2, Spec_98, 3) = ((MR_Box) (Pieces_97));
              }
              {
                STATE_VARIABLE_Specs_83_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_83_83, 0) = ((MR_Box) (Spec_98));
                MR_hl_field(1, STATE_VARIABLE_Specs_83_83, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
              }
            }
            break;
        }
        STATE_VARIABLE_OptError_84_84 = STATE_VARIABLE_OptError_0_15;
        ModuleNames1_65 = ModuleNames0_47;
        DontQueueOptModules1_66 = DontQueueOptModules0_6;
        STATE_VARIABLE_ParseTreePlainOptsCord_82_82 = STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
        STATE_VARIABLE_ExplicitDeps_85_85 = STATE_VARIABLE_ExplicitDeps_0_9;
        STATE_VARIABLE_ImplicitNeeds_86_86 = STATE_VARIABLE_ImplicitNeeds_0_11;
      }
      else
      {
        MR_Word ParseTreePlainOpt_58 = ((MR_Word) ((MR_hl_field(0, HaveReadPlainOpt_55, (MR_Integer) 2))));
        MR_Word ModuleErrors_59 = ((MR_Word) ((MR_hl_field(0, HaveReadPlainOpt_55, (MR_Integer) 3))));
        MR_Word ParseTreeExplicitDeps_60;
        MR_Word ParseTreeImplicitNeeds_61;

        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), ((MR_Box) (ParseTreePlainOpt_58)), STATE_VARIABLE_ParseTreePlainOptsCord_0_7, &STATE_VARIABLE_ParseTreePlainOptsCord_82_82);
        parse_tree__grab_modules__update_opt_error_status_on_success_5_p_0(ModuleErrors_59, STATE_VARIABLE_Specs_0_13, &STATE_VARIABLE_Specs_83_83, STATE_VARIABLE_OptError_0_15, &STATE_VARIABLE_OptError_84_84);
        parse_tree__get_dependencies__get_explicit_and_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(ParseTreePlainOpt_58, &ParseTreeExplicitDeps_60, &ParseTreeImplicitNeeds_61);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeExplicitDeps_60, STATE_VARIABLE_ExplicitDeps_0_9, &STATE_VARIABLE_ExplicitDeps_85_85);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), ((MR_Box) (ParseTreeImplicitNeeds_61)), STATE_VARIABLE_ImplicitNeeds_0_11, &STATE_VARIABLE_ImplicitNeeds_86_86);
        switch (ReadOptFilesTransitively_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ModuleNames1_65 = ModuleNames0_47;
              DontQueueOptModules1_66 = DontQueueOptModules0_6;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ParseTreeImplicitDeps_62;
              MR_Word ParseTreeDeps_63;
              MR_Word NewDeps_64;
              MR_Word Var_87;

              parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_2, ParseTreeImplicitNeeds_61, &ParseTreeImplicitDeps_62);
              mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeExplicitDeps_60, ParseTreeImplicitDeps_62, &ParseTreeDeps_63);
              mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeDeps_63, DontQueueOptModules0_6, &NewDeps_64);
              Var_87 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_64);
              ModuleNames1_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_87, ModuleNames0_47);
              mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_64, DontQueueOptModules0_6, &DontQueueOptModules1_66);
            }
            break;
        }
      }
      parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ProgressStream_1, VeryVerbose_3, Globals_2, STATE_VARIABLE_Specs_83_83, &STATE_VARIABLE_Specs_91_91);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames1_65;
      next_value_of_DontQueueOptModules0_6 = DontQueueOptModules1_66;
      next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7 = STATE_VARIABLE_ParseTreePlainOptsCord_82_82;
      next_value_of_STATE_VARIABLE_ExplicitDeps_0_9 = STATE_VARIABLE_ExplicitDeps_85_85;
      next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11 = STATE_VARIABLE_ImplicitNeeds_86_86;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_91_91;
      next_value_of_STATE_VARIABLE_OptError_0_15 = STATE_VARIABLE_OptError_84_84;
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
  MR_Word FatalErrors_9 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_6, (MR_Integer) 0))));
  MR_Word NonFatalErrors0_10 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_6, (MR_Integer) 2))));
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
parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(
  MR_Word KeepUnusedArgs_5,
  MR_Word KeepReuses_6,
  MR_Word ParseTreePlainOpt0_7,
  MR_Word * ParseTreePlainOpt_8)
{
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, (MR_Integer) 0))));
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, (MR_Integer) 1))));
  MR_Word UnusedArgs0_27 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, (MR_Integer) 18))));
  MR_Word Reuses0_34 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, (MR_Integer) 25))));
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

void MR_CALL 
parse_tree__grab_modules__grab_unqual_imported_modules_make_int_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_String SourceFileName_14,
  MR_Word SourceFileModuleName_15,
  MR_Word ParseTreeModuleSrc_16,
  MR_Word * STATE_VARIABLE_Baggage_47,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_48,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_49,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_50)
{
  MR_bool succeeded;
  MR_Word ImportAndOrUseMap_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_16, (MR_Integer) 3))));
  MR_Word IntImportMap_24;
  MR_Word IntUseMap_25;
  MR_Word ImpImportMap_26;
  MR_Word ImpUseMap_27;
  MR_Word IntUseImpImportMap_28;
  MR_Word IntImports0_29;
  MR_Word IntUses_30;
  MR_Word ImpImports_31;
  MR_Word ImpUses_32;
  MR_Word IntUsesImpImports_33;
  MR_Word IntImports_34;
  MR_Word MaybeTopModule_35;
  MR_Word Errors0_37;
  MR_Word GrabbedFileMap0_38;
  MR_Word ModuleName_39;
  MR_Word SrcMap0_40;
  MR_Word SrcMap_41;
  MR_Word Ancestors_42;
  MR_Word AncestorImports_43;
  MR_Word AncestorUses_44;
  MR_Word ImportAccessibilityInfo_45;
  MR_Word AccessSpecs_46;
  MR_Word Var_53;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_55_55;
  MR_Word Var_56;
  MR_Word STATE_VARIABLE_Baggage_57_57;
  MR_String Var_58;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_59_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_63_63;
  MR_Word STATE_VARIABLE_Baggage_64_64;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_65_65;
  MR_Word STATE_VARIABLE_IntIndirectImported_67_67;
  MR_Word STATE_VARIABLE_ImpIndirectImported_68_68;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_IntIndirectImported_72_72;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_73_73;
  MR_Word STATE_VARIABLE_Baggage_74_74;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_75_75;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_IntIndirectImported_80_80;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_81_81;
  MR_Word STATE_VARIABLE_Baggage_82_82;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_83_83;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_ImpIndirectImported_88_88;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_89_89;
  MR_Word STATE_VARIABLE_Baggage_90_90;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_91_91;
  MR_Word Var_95;
  MR_Word STATE_VARIABLE_IntIndirectImported_96_96;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_97_97;
  MR_Word STATE_VARIABLE_Baggage_98_98;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_99_99;
  MR_Word Var_103;
  MR_Word STATE_VARIABLE_IntIndirectImported_104_104;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_105_105;
  MR_Word STATE_VARIABLE_Baggage_106_106;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_107_107;
  MR_Word Var_111;
  MR_Word STATE_VARIABLE_ImpIndirectImported_112_112;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_113_113;
  MR_Word STATE_VARIABLE_Baggage_114_114;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_115_115;
  MR_Word Var_119;
  MR_Word STATE_VARIABLE_IntIndirectImported_120_120;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_121_121;
  MR_Word STATE_VARIABLE_Baggage_122_122;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_123_123;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_127_127;
  MR_Word STATE_VARIABLE_Baggage_128_128;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_129_129;
  MR_Word STATE_VARIABLE_Baggage_134_134;
  MR_Word Var_259;
  MR_Word Var_247;
  MR_Word Var_249;
  MR_Word Var_250;
  MR_Word Var_251;
  MR_Word Var_252;
  MR_Word Var_253;
  MR_Word Var_254;

  parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportAndOrUseMap_23, &IntImportMap_24, &IntUseMap_25, &ImpImportMap_26, &ImpUseMap_27, &IntUseImpImportMap_28);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntImportMap_24, &IntImports0_29);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseMap_25, &IntUses_30);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpImportMap_26, &ImpImports_31);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpUseMap_27, &ImpUses_32);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseImpImportMap_28, &IntUsesImpImports_33);
  Var_53 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_53)), IntImports0_29, &IntImports_34);
  Var_259 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_16, (MR_Integer) 0))));
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_15, Var_259);
  if (succeeded)
  {
    MR_Word Var_54;

    Var_54 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    {
      MaybeTopModule_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTopModule_35, 0) = ((MR_Box) (Var_54));
    }
  }
  else
    MaybeTopModule_35 = (MR_Word) ((MR_Unsigned) 0U);
  Errors0_37 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(ParseTreeModuleSrc_16, &STATE_VARIABLE_AugMakeIntUnit_55_55);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (ParseTreeModuleSrc_16));
  }
  Var_58 = mercury__dir__this_directory_0_f_0();
  ModuleName_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_16, (MR_Integer) 0))));
  GrabbedFileMap0_38 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_39)), ((MR_Box) (Var_56)));
  {
    STATE_VARIABLE_Baggage_57_57 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 0) = ((MR_Box) (SourceFileName_14));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 1) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 2) = ((MR_Box) (SourceFileModuleName_15));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 3) = ((MR_Box) (MaybeTopModule_35));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 5) = ((MR_Box) (GrabbedFileMap0_38));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 6) = ((MR_Box) (Errors0_37));
  }
  SrcMap0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 1))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_39)), ((MR_Box) (ParseTreeModuleSrc_16)), SrcMap0_40, &SrcMap_41);
  Var_247 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 0))));
  Var_249 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 2))));
  Var_250 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 3))));
  Var_251 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 4))));
  Var_252 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 5))));
  Var_253 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 6))));
  Var_254 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 7))));
  {
    STATE_VARIABLE_HaveReadModuleMaps_59_59 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 0) = ((MR_Box) (Var_247));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 1) = ((MR_Box) (SrcMap_41));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 2) = ((MR_Box) (Var_249));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 3) = ((MR_Box) (Var_250));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 4) = ((MR_Box) (Var_251));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 5) = ((MR_Box) (Var_252));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 6) = ((MR_Box) (Var_253));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 7) = ((MR_Box) (Var_254));
  }
  Ancestors_42 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_39);
  Var_61 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_62 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_16_p_0(ProgressStream_12, Globals_13, Ancestors_42, Var_61, &AncestorImports_43, Var_62, &AncestorUses_44, STATE_VARIABLE_HaveReadModuleMaps_59_59, &STATE_VARIABLE_HaveReadModuleMaps_63_63, STATE_VARIABLE_Baggage_57_57, &STATE_VARIABLE_Baggage_64_64, STATE_VARIABLE_AugMakeIntUnit_55_55, &STATE_VARIABLE_AugMakeIntUnit_65_65);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_67_67);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_68_68);
  Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorImports_43);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, Var_71, STATE_VARIABLE_IntIndirectImported_67_67, &STATE_VARIABLE_IntIndirectImported_72_72, STATE_VARIABLE_HaveReadModuleMaps_63_63, &STATE_VARIABLE_HaveReadModuleMaps_73_73, STATE_VARIABLE_Baggage_64_64, &STATE_VARIABLE_Baggage_74_74, STATE_VARIABLE_AugMakeIntUnit_65_65, &STATE_VARIABLE_AugMakeIntUnit_75_75);
  Var_79 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_34);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 1, Var_79, STATE_VARIABLE_IntIndirectImported_72_72, &STATE_VARIABLE_IntIndirectImported_80_80, STATE_VARIABLE_HaveReadModuleMaps_73_73, &STATE_VARIABLE_HaveReadModuleMaps_81_81, STATE_VARIABLE_Baggage_74_74, &STATE_VARIABLE_Baggage_82_82, STATE_VARIABLE_AugMakeIntUnit_75_75, &STATE_VARIABLE_AugMakeIntUnit_83_83);
  Var_87 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_31);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, Var_87, STATE_VARIABLE_ImpIndirectImported_68_68, &STATE_VARIABLE_ImpIndirectImported_88_88, STATE_VARIABLE_HaveReadModuleMaps_81_81, &STATE_VARIABLE_HaveReadModuleMaps_89_89, STATE_VARIABLE_Baggage_82_82, &STATE_VARIABLE_Baggage_90_90, STATE_VARIABLE_AugMakeIntUnit_83_83, &STATE_VARIABLE_AugMakeIntUnit_91_91);
  Var_95 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorUses_44);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, Var_95, STATE_VARIABLE_IntIndirectImported_80_80, &STATE_VARIABLE_IntIndirectImported_96_96, STATE_VARIABLE_HaveReadModuleMaps_89_89, &STATE_VARIABLE_HaveReadModuleMaps_97_97, STATE_VARIABLE_Baggage_90_90, &STATE_VARIABLE_Baggage_98_98, STATE_VARIABLE_AugMakeIntUnit_91_91, &STATE_VARIABLE_AugMakeIntUnit_99_99);
  Var_103 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_30);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 4, Var_103, STATE_VARIABLE_IntIndirectImported_96_96, &STATE_VARIABLE_IntIndirectImported_104_104, STATE_VARIABLE_HaveReadModuleMaps_97_97, &STATE_VARIABLE_HaveReadModuleMaps_105_105, STATE_VARIABLE_Baggage_98_98, &STATE_VARIABLE_Baggage_106_106, STATE_VARIABLE_AugMakeIntUnit_99_99, &STATE_VARIABLE_AugMakeIntUnit_107_107);
  Var_111 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_32);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 5, Var_111, STATE_VARIABLE_ImpIndirectImported_88_88, &STATE_VARIABLE_ImpIndirectImported_112_112, STATE_VARIABLE_HaveReadModuleMaps_105_105, &STATE_VARIABLE_HaveReadModuleMaps_113_113, STATE_VARIABLE_Baggage_106_106, &STATE_VARIABLE_Baggage_114_114, STATE_VARIABLE_AugMakeIntUnit_107_107, &STATE_VARIABLE_AugMakeIntUnit_115_115);
  Var_119 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsesImpImports_33);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 6, Var_119, STATE_VARIABLE_IntIndirectImported_104_104, &STATE_VARIABLE_IntIndirectImported_120_120, STATE_VARIABLE_HaveReadModuleMaps_113_113, &STATE_VARIABLE_HaveReadModuleMaps_121_121, STATE_VARIABLE_Baggage_114_114, &STATE_VARIABLE_Baggage_122_122, STATE_VARIABLE_AugMakeIntUnit_115_115, &STATE_VARIABLE_AugMakeIntUnit_123_123);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_12, Globals_13, (MR_Integer) 7, STATE_VARIABLE_IntIndirectImported_120_120, STATE_VARIABLE_HaveReadModuleMaps_121_121, &STATE_VARIABLE_HaveReadModuleMaps_127_127, STATE_VARIABLE_Baggage_122_122, &STATE_VARIABLE_Baggage_128_128, STATE_VARIABLE_AugMakeIntUnit_123_123, &STATE_VARIABLE_AugMakeIntUnit_129_129);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_12, Globals_13, (MR_Integer) 8, STATE_VARIABLE_ImpIndirectImported_112_112, STATE_VARIABLE_HaveReadModuleMaps_127_127, STATE_VARIABLE_HaveReadModuleMaps_50, STATE_VARIABLE_Baggage_128_128, &STATE_VARIABLE_Baggage_134_134, STATE_VARIABLE_AugMakeIntUnit_129_129, STATE_VARIABLE_AugMakeIntUnit_48);
  parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0(*STATE_VARIABLE_AugMakeIntUnit_48, &ImportAccessibilityInfo_45);
  parse_tree__check_import_accessibility__check_import_accessibility_3_p_0(ParseTreeModuleSrc_16, ImportAccessibilityInfo_45, &AccessSpecs_46);
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(AccessSpecs_46, STATE_VARIABLE_Baggage_134_134, STATE_VARIABLE_Baggage_47);
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
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
      *STATE_VARIABLE_HaveReadModuleMaps_10 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
      *STATE_VARIABLE_DirectUses_8 = STATE_VARIABLE_DirectUses_0_7;
      *STATE_VARIABLE_DirectImports_6 = STATE_VARIABLE_DirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_70_70;
      MR_Word STATE_VARIABLE_Baggage_71_71;
      MR_Word STATE_VARIABLE_AugMakeIntUnit_72_72;
      MR_Word STATE_VARIABLE_DirectImports_75_75;
      MR_Word STATE_VARIABLE_DirectUses_77_77;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_7;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_11;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_13;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_11, ModuleName_41, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word IntImports_50;
        MR_Word ImpImports_51;
        MR_Word IntUses_52;
        MR_Word ImpUses_53;
        MR_Word STATE_VARIABLE_DirectImports_74_74;
        MR_Word STATE_VARIABLE_DirectUses_76_76;

        parse_tree__grab_modules__grab_module_int0_file_for_amiu_15_p_0(HeadVar__1_1, HeadVar__2_2, ModuleName_41, &IntImports_50, &ImpImports_51, &IntUses_52, &ImpUses_53, STATE_VARIABLE_HaveReadModuleMaps_0_9, &STATE_VARIABLE_HaveReadModuleMaps_70_70, STATE_VARIABLE_Baggage_0_11, &STATE_VARIABLE_Baggage_71_71, STATE_VARIABLE_AugMakeIntUnit_0_13, &STATE_VARIABLE_AugMakeIntUnit_72_72);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_50, STATE_VARIABLE_DirectImports_0_5, &STATE_VARIABLE_DirectImports_74_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_51, STATE_VARIABLE_DirectImports_74_74, &STATE_VARIABLE_DirectImports_75_75);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_52, STATE_VARIABLE_DirectUses_0_7, &STATE_VARIABLE_DirectUses_76_76);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_53, STATE_VARIABLE_DirectUses_76_76, &STATE_VARIABLE_DirectUses_77_77);
      }
      else
      {
        STATE_VARIABLE_AugMakeIntUnit_72_72 = STATE_VARIABLE_AugMakeIntUnit_0_13;
        STATE_VARIABLE_Baggage_71_71 = STATE_VARIABLE_Baggage_0_11;
        STATE_VARIABLE_HaveReadModuleMaps_70_70 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
        STATE_VARIABLE_DirectUses_77_77 = STATE_VARIABLE_DirectUses_0_7;
        STATE_VARIABLE_DirectImports_75_75 = STATE_VARIABLE_DirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_42;
      next_value_of_STATE_VARIABLE_DirectImports_0_5 = STATE_VARIABLE_DirectImports_75_75;
      next_value_of_STATE_VARIABLE_DirectUses_0_7 = STATE_VARIABLE_DirectUses_77_77;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9 = STATE_VARIABLE_HaveReadModuleMaps_70_70;
      next_value_of_STATE_VARIABLE_Baggage_0_11 = STATE_VARIABLE_Baggage_71_71;
      next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_13 = STATE_VARIABLE_AugMakeIntUnit_72_72;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DirectImports_0_5 = next_value_of_STATE_VARIABLE_DirectImports_0_5;
      STATE_VARIABLE_DirectUses_0_7 = next_value_of_STATE_VARIABLE_DirectUses_0_7;
      STATE_VARIABLE_HaveReadModuleMaps_0_9 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
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

  parse_tree__item_util__get_imports_uses_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_9)), &conv0_HeadVar__10_10);
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35,
  MR_Word STATE_VARIABLE_Baggage_0_36,
  MR_Word * STATE_VARIABLE_Baggage_37,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_38,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_39)
{
  MR_Word ReturnTimestamp_27;
  MR_Word HaveReadInt0_28;
  MR_Word Errors_32;
  MR_Word STATE_VARIABLE_Baggage_50_50;
  MR_Word MaybeTimestampMap_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 4))));

  if ((MaybeTimestampMap_121 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_27 = (MR_Integer) 1;
  else
    ReturnTimestamp_27 = (MR_Integer) 0;
  parse_tree__read_modules__maybe_read_module_int0_10_p_0(ProgressStream_16, Globals_17, (MR_Integer) 1, ModuleName_18, ReturnTimestamp_27, &HaveReadInt0_28, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
  if (((MR_tag((MR_Word) HaveReadInt0_28)) == (MR_Integer) 1))
  {
    Errors_32 = ((MR_Word) ((MR_hl_field(1, HaveReadInt0_28, (MR_Integer) 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_20);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_21);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_22);
    STATE_VARIABLE_Baggage_50_50 = STATE_VARIABLE_Baggage_0_36;
    *STATE_VARIABLE_AugMakeIntUnit_39 = STATE_VARIABLE_AugMakeIntUnit_0_38;
  }
  else
  {
    MR_Word MaybeTimestamp_30 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_28, (MR_Integer) 1))));
    MR_Word ParseTreeInt0_31 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_28, (MR_Integer) 2))));
    MR_Word GrabbedFile_33;
    MR_Word STATE_VARIABLE_Baggage_46_46;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_47_47;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Box conv7_IntImports_19;
    MR_Box conv6_ImpImports_20;
    MR_Box conv5_IntUses_21;
    MR_Box conv4_ImpUses_22;

    Errors_32 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_28, (MR_Integer) 3))));
    {
      GrabbedFile_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GrabbedFile_33, 0) = ((MR_Box) (ParseTreeInt0_31));
      MR_hl_field(1, GrabbedFile_33, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_18, GrabbedFile_33, STATE_VARIABLE_Baggage_0_36, &STATE_VARIABLE_Baggage_46_46);
    parse_tree__grab_modules__aug_make_int_unit_add_ancestor_int_3_p_0(ParseTreeInt0_31, STATE_VARIABLE_AugMakeIntUnit_0_38, &STATE_VARIABLE_AugMakeIntUnit_47_47);
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_18, (MR_Integer) 0, (MR_Integer) 1, MaybeTimestamp_30, STATE_VARIABLE_Baggage_46_46, &STATE_VARIABLE_Baggage_50_50);
    Var_52 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_31, (MR_Integer) 4))));
    Var_53 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_54 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_55 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_56 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[4]), Var_52, ((MR_Box) (Var_53)), &conv7_IntImports_19, ((MR_Box) (Var_54)), &conv6_ImpImports_20, ((MR_Box) (Var_55)), &conv5_IntUses_21, ((MR_Box) (Var_56)), &conv4_ImpUses_22);
    *IntImports_19 = ((MR_Word) (conv7_IntImports_19));
    *ImpImports_20 = ((MR_Word) (conv6_ImpImports_20));
    *IntUses_21 = ((MR_Word) (conv5_IntUses_21));
    *ImpUses_22 = ((MR_Word) (conv4_ImpUses_22));
    Var_57 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_31, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_make_int_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_18, Var_57, STATE_VARIABLE_AugMakeIntUnit_47_47, STATE_VARIABLE_AugMakeIntUnit_39);
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_32, STATE_VARIABLE_Baggage_50_50, STATE_VARIABLE_Baggage_37);
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
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(1, MaybeVersionNumbers_6, (MR_Integer) 0))));
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 4))));
    MR_Word ModuleVersionNumbersMap_10;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugMakeIntUnit_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 4) = ((MR_Box) (ModuleVersionNumbersMap_10));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_ancestor_int_3_p_0(
  MR_Word PT0_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_9,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_10)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 1))));
  MR_Word MN_7 = ((MR_Word) ((MR_hl_field(0, PT0_4, (MR_Integer) 0))));
  MR_Word Map_8;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), ((MR_Box) (MN_7)), ((MR_Box) (PT0_4)), Map0_6, &Map_8);
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 0))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 2))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 3))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 1) = ((MR_Box) (Map_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_42));
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy3_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25,
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
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_34_34;
    MR_Word STATE_VARIABLE_Baggage_35_35;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_36_36;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_32 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_18);
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_14, Globals_15, ReadWhy3_17, Var_32, Var_33, &IndirectImports_23, STATE_VARIABLE_HaveReadModuleMaps_0_24, &STATE_VARIABLE_HaveReadModuleMaps_34_34, STATE_VARIABLE_Baggage_0_26, &STATE_VARIABLE_Baggage_35_35, STATE_VARIABLE_AugMakeIntUnit_0_28, &STATE_VARIABLE_AugMakeIntUnit_36_36);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_23);
    if (succeeded)
    {
      *STATE_VARIABLE_AugMakeIntUnit_29 = STATE_VARIABLE_AugMakeIntUnit_36_36;
      *STATE_VARIABLE_Baggage_27 = STATE_VARIABLE_Baggage_35_35;
      *STATE_VARIABLE_HaveReadModuleMaps_25 = STATE_VARIABLE_HaveReadModuleMaps_34_34;
    }
    else
    {
      MR_Word next_value_of_Modules_18 = IndirectImports_23;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_24 = STATE_VARIABLE_HaveReadModuleMaps_34_34;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_26 = STATE_VARIABLE_Baggage_35_35;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_28 = STATE_VARIABLE_AugMakeIntUnit_36_36;

      // direct tailcall eliminated
      ;
      Modules_18 = next_value_of_Modules_18;
      STATE_VARIABLE_HaveReadModuleMaps_0_24 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_24;
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_8,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_9,
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
      *STATE_VARIABLE_HaveReadModuleMaps_9 = STATE_VARIABLE_HaveReadModuleMaps_0_8;
      *STATE_VARIABLE_IntIndirectImports_7 = STATE_VARIABLE_IntIndirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleNames_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_61_61;
      MR_Word STATE_VARIABLE_Baggage_62_62;
      MR_Word STATE_VARIABLE_AugMakeIntUnit_63_63;
      MR_Word STATE_VARIABLE_IntIndirectImports_65_65;
      MR_Word GrabbedFileMap_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 5))));
      MR_Word OldGrabbedFile_72;
      MR_Box conv0_OldGrabbedFile_72;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_8;
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
        MR_Word Var_85;

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
            switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_72, (MR_Integer) 0))))) {
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
        parse_tree__file_kind____Compare____file_kind_0_0(&Var_85, (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3])), OldFileKind_73);
        succeeded = ((MR_Integer) 1 == Var_85);
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word IntImports_46;

        parse_tree__grab_modules__grab_module_int3_file_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_39, &IntImports_46, STATE_VARIABLE_HaveReadModuleMaps_0_8, &STATE_VARIABLE_HaveReadModuleMaps_61_61, STATE_VARIABLE_Baggage_0_10, &STATE_VARIABLE_Baggage_62_62, STATE_VARIABLE_AugMakeIntUnit_0_12, &STATE_VARIABLE_AugMakeIntUnit_63_63);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_46, STATE_VARIABLE_IntIndirectImports_0_6, &STATE_VARIABLE_IntIndirectImports_65_65);
      }
      else
      {
        STATE_VARIABLE_AugMakeIntUnit_63_63 = STATE_VARIABLE_AugMakeIntUnit_0_12;
        STATE_VARIABLE_Baggage_62_62 = STATE_VARIABLE_Baggage_0_10;
        STATE_VARIABLE_HaveReadModuleMaps_61_61 = STATE_VARIABLE_HaveReadModuleMaps_0_8;
        STATE_VARIABLE_IntIndirectImports_65_65 = STATE_VARIABLE_IntIndirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_40;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_6 = STATE_VARIABLE_IntIndirectImports_65_65;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_8 = STATE_VARIABLE_HaveReadModuleMaps_61_61;
      next_value_of_STATE_VARIABLE_Baggage_0_10 = STATE_VARIABLE_Baggage_62_62;
      next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_12 = STATE_VARIABLE_AugMakeIntUnit_63_63;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_IntIndirectImports_0_6 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      STATE_VARIABLE_HaveReadModuleMaps_0_8 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_8;
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35,
  MR_Word STATE_VARIABLE_Baggage_0_36,
  MR_Word * STATE_VARIABLE_Baggage_37,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_38,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_39)
{
  MR_Word ReturnTimestamp_23;
  MR_Word HaveReadInt3_24;
  MR_Word Errors_28;
  MR_Word STATE_VARIABLE_Baggage_49_49;
  MR_Word MaybeTimestampMap_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 4))));

  if ((MaybeTimestampMap_71 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_23 = (MR_Integer) 1;
  else
    ReturnTimestamp_23 = (MR_Integer) 0;
  parse_tree__read_modules__maybe_read_module_int3_10_p_0(ProgressStream_14, Globals_15, (MR_Integer) 1, ModuleName_17, ReturnTimestamp_23, &HaveReadInt3_24, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
  if (((MR_tag((MR_Word) HaveReadInt3_24)) == (MR_Integer) 1))
  {
    Errors_28 = ((MR_Word) ((MR_hl_field(1, HaveReadInt3_24, (MR_Integer) 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_18);
    STATE_VARIABLE_Baggage_49_49 = STATE_VARIABLE_Baggage_0_36;
    *STATE_VARIABLE_AugMakeIntUnit_39 = STATE_VARIABLE_AugMakeIntUnit_0_38;
  }
  else
  {
    MR_Word MaybeTimestamp_26 = ((MR_Word) ((MR_hl_field(0, HaveReadInt3_24, (MR_Integer) 1))));
    MR_Word ParseTreeInt3_27 = ((MR_Word) ((MR_hl_field(0, HaveReadInt3_24, (MR_Integer) 2))));
    MR_Word GrabbedFile_29;
    MR_Word RecompAvail_30;
    MR_Word IntImportMap_33;
    MR_Word STATE_VARIABLE_Baggage_45_45;
    MR_Word GrabbedFileMap0_79;
    MR_Word GrabbedFileMap_80;
    MR_String Var_87;
    MR_String Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_93;

    Errors_28 = ((MR_Word) ((MR_hl_field(0, HaveReadInt3_24, (MR_Integer) 3))));
    {
      GrabbedFile_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GrabbedFile_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, GrabbedFile_29, 1) = ((MR_Box) (ParseTreeInt3_27));
      MR_hl_field(3, GrabbedFile_29, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
    }
    GrabbedFileMap0_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 5))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (GrabbedFile_29)), GrabbedFileMap0_79, &GrabbedFileMap_80);
    Var_87 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 0))));
    Var_88 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 1))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 2))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 3))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 4))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 6))));
    {
      STATE_VARIABLE_Baggage_45_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 0) = ((MR_Box) (Var_87));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 1) = ((MR_Box) (Var_88));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 2) = ((MR_Box) (Var_89));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 3) = ((MR_Box) (Var_90));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 4) = ((MR_Box) (Var_91));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 5) = ((MR_Box) (GrabbedFileMap_80));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 6) = ((MR_Box) (Var_93));
    }
    switch (ReadWhy3_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DirectIntSpec_31;

          RecompAvail_30 = (MR_Integer) 1;
          {
            DirectIntSpec_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_31, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_31, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_31, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_64;

          RecompAvail_30 = (MR_Integer) 3;
          {
            DirectIntSpec_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_64, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_64, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_64, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DirectIntSpec_65;

          RecompAvail_30 = (MR_Integer) 2;
          {
            DirectIntSpec_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_65, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_65, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_65, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word DirectIntSpec_66;

          RecompAvail_30 = (MR_Integer) 4;
          {
            DirectIntSpec_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_66, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_66, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_66, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_67;

          RecompAvail_30 = (MR_Integer) 1;
          {
            DirectIntSpec_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_67, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_67, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_67, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word DirectIntSpec_68;

          RecompAvail_30 = (MR_Integer) 3;
          {
            DirectIntSpec_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_68, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_68, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_68, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word DirectIntSpec_69;

          RecompAvail_30 = (MR_Integer) 5;
          {
            DirectIntSpec_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_69, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_69, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_69, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Word IndirectIntSpec_32;

          RecompAvail_30 = (MR_Integer) 4;
          {
            IndirectIntSpec_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IndirectIntSpec_32, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, IndirectIntSpec_32, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(IndirectIntSpec_32, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word IndirectIntSpec_70;

          RecompAvail_30 = (MR_Integer) 3;
          {
            IndirectIntSpec_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IndirectIntSpec_70, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, IndirectIntSpec_70, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(IndirectIntSpec_70, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
    }
    IntImportMap_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_27, (MR_Integer) 3))));
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0), IntImportMap_33, IntImports_18);
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_17, (MR_Integer) 3, RecompAvail_30, MaybeTimestamp_26, STATE_VARIABLE_Baggage_45_45, &STATE_VARIABLE_Baggage_49_49);
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_28, STATE_VARIABLE_Baggage_49_49, STATE_VARIABLE_Baggage_37);
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 3))));
  MR_Word PT3_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT3_7, (MR_Integer) 0))));
  MR_Word Map_10;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_30;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int3_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 0))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 1))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_30));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 2))));
  MR_Word PT3_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT3_7, (MR_Integer) 0))));
  MR_Word Map_10;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 0))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 3))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_30));
  }
}

static void MR_CALL 
parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * AugMakeIntUnit_4)
{
  MR_Word AncestorIntSpecs_5;
  MR_Word DirectIntSpecs_6;
  MR_Word IndirectIntSpecs_7;
  MR_Word VersionNumbers_8;

  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), &AncestorIntSpecs_5);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), &DirectIntSpecs_6);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int3_spec_0), &IndirectIntSpecs_7);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), &VersionNumbers_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *AugMakeIntUnit_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_3));
    MR_hl_field(0, base, 1) = ((MR_Box) (AncestorIntSpecs_5));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectIntSpecs_6));
    MR_hl_field(0, base, 3) = ((MR_Box) (IndirectIntSpecs_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (VersionNumbers_8));
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_2(
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
  MR_Word conv5_STATE_VARIABLE_HaveReadModuleMaps_37;
  MR_Word conv4_STATE_VARIABLE_Baggage_39;
  MR_Word conv3_STATE_VARIABLE_AugCompUnit_41;

  parse_tree__grab_modules__grab_module_int1_file_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv7_IntUses_19, &conv6_ImpUses_20, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_HaveReadModuleMaps_37, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_Baggage_39, ((MR_Word) (wrapper_arg_8)), &conv3_STATE_VARIABLE_AugCompUnit_41);
  *wrapper_arg_2 = ((MR_Box) (conv7_IntUses_19));
  *wrapper_arg_3 = ((MR_Box) (conv6_ImpUses_20));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_HaveReadModuleMaps_37));
  *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_Baggage_39));
  *wrapper_arg_9 = ((MR_Box) (conv3_STATE_VARIABLE_AugCompUnit_41));
}

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__item_util__add_implicit_fim_for_module_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_String SourceFileName_16,
  MR_Word SourceFileModuleName_17,
  MR_Word MaybeTimestamp_18,
  MR_Word MaybeTopModule_19,
  MR_Word ParseTreeModuleSrc0_20,
  MR_Word * STATE_VARIABLE_Baggage_63,
  MR_Word * STATE_VARIABLE_AugCompUnit_64,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_65,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_66)
{
  MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 0))));
  MR_Word IntFIMs0_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 4))));
  MR_Word ImpFIMs0_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 5))));
  MR_Word IntFIMs_32;
  MR_Word ImpFIMs_33;
  MR_Word ParseTreeModuleSrc_35;
  MR_Word MaybeTimestampMap_37;
  MR_Word Errors0_38;
  MR_Word GrabbedFileMap0_39;
  MR_Word SrcMap0_40;
  MR_Word SrcMap_41;
  MR_Word ImportUseMap_42;
  MR_Word IntImportMap_43;
  MR_Word IntUseMap_44;
  MR_Word ImpImportMap_45;
  MR_Word ImpUseMap_46;
  MR_Word IntUseImpImportMap_47;
  MR_Word IntImports0_48;
  MR_Word IntUses0_49;
  MR_Word ImpImports_50;
  MR_Word ImpUses_51;
  MR_Word IntUseImpImports_52;
  MR_Word Ancestors_53;
  MR_Word IntImports_54;
  MR_Word IntUses_55;
  MR_Word Experiment3_56;
  MR_Word ImportAccessibilityInfo_61;
  MR_Word AccessSpecs_62;
  MR_Word Var_69;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_AugCompUnit_77_77;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_Baggage_79_79;
  MR_String Var_80;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_81_81;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_84_84;
  MR_Word STATE_VARIABLE_Baggage_85_85;
  MR_Word STATE_VARIABLE_AugCompUnit_86_86;
  MR_Word STATE_VARIABLE_IntIndirectImported_88_88;
  MR_Word STATE_VARIABLE_ImpIndirectImported_89_89;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_90_90;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_91_91;
  MR_Word Var_94;
  MR_Word STATE_VARIABLE_IntIndirectImported_95_95;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_96_96;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_97_97;
  MR_Word STATE_VARIABLE_Baggage_98_98;
  MR_Word STATE_VARIABLE_AugCompUnit_99_99;
  MR_Word STATE_VARIABLE_ImpIndirectImported_103_103;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_104_104;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_105_105;
  MR_Word STATE_VARIABLE_Baggage_106_106;
  MR_Word STATE_VARIABLE_AugCompUnit_107_107;
  MR_Word Var_111;
  MR_Word STATE_VARIABLE_IntIndirectImported_112_112;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_113_113;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_114_114;
  MR_Word STATE_VARIABLE_Baggage_115_115;
  MR_Word STATE_VARIABLE_AugCompUnit_116_116;
  MR_Word STATE_VARIABLE_ImpIndirectImported_120_120;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_121_121;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_122_122;
  MR_Word STATE_VARIABLE_Baggage_123_123;
  MR_Word STATE_VARIABLE_AugCompUnit_124_124;
  MR_Word STATE_VARIABLE_IntIndirectImported_128_128;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_129_129;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_130_130;
  MR_Word STATE_VARIABLE_Baggage_131_131;
  MR_Word STATE_VARIABLE_AugCompUnit_132_132;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_136_136;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_137_137;
  MR_Word STATE_VARIABLE_Baggage_138_138;
  MR_Word STATE_VARIABLE_AugCompUnit_139_139;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_143_143;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_144_144;
  MR_Word STATE_VARIABLE_Baggage_145_145;
  MR_Word STATE_VARIABLE_AugCompUnit_146_146;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_150_150;
  MR_Word STATE_VARIABLE_Baggage_151_151;
  MR_Word STATE_VARIABLE_AugCompUnit_152_152;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_156_156;
  MR_Word STATE_VARIABLE_Baggage_157_157;
  MR_Word STATE_VARIABLE_AugCompUnit_158_158;
  MR_Word STATE_VARIABLE_Baggage_169_169;
  MR_Word Var_178 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 6))));
  MR_Word Var_348;
  MR_Word Var_349;
  MR_Word Var_350;
  MR_Word Var_351;
  MR_Word Var_354;
  MR_Word Var_355;
  MR_Word Var_356;
  MR_Word Var_357;
  MR_Word Var_358;
  MR_Word Var_359;
  MR_Word Var_360;
  MR_Word Var_361;
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
  MR_Box conv1_IntFIMs_32;
  MR_Box conv2_ImpFIMs_33;
  MR_Word Var_427;
  MR_Word Var_429;
  MR_Word Var_430;
  MR_Word Var_431;
  MR_Word Var_432;
  MR_Word Var_433;
  MR_Word Var_434;

  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[0]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_1));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (ModuleName_29));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), Var_69, Var_178, ((MR_Box) (IntFIMs0_30)), &conv1_IntFIMs_32);
  IntFIMs_32 = ((MR_Word) (conv1_IntFIMs_32));
  Var_72 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 7))));
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), Var_69, Var_72, ((MR_Box) (ImpFIMs0_31)), &conv2_ImpFIMs_33);
  ImpFIMs_33 = ((MR_Word) (conv2_ImpFIMs_33));
  Var_348 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 0))));
  Var_349 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 1))));
  Var_350 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 2))));
  Var_351 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 3))));
  Var_354 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 6))));
  Var_355 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 7))));
  Var_356 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 8))));
  Var_357 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 9))));
  Var_358 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 10))));
  Var_359 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 11))));
  Var_360 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 12))));
  Var_361 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 13))));
  Var_362 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 14))));
  Var_363 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 15))));
  Var_364 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 16))));
  Var_365 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 17))));
  Var_366 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 18))));
  Var_367 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 19))));
  Var_368 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 20))));
  Var_369 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 21))));
  Var_370 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 22))));
  Var_371 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 23))));
  Var_372 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 24))));
  Var_373 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 25))));
  Var_374 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 26))));
  Var_375 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 27))));
  Var_376 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 28))));
  Var_377 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 29))));
  Var_378 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 30))));
  Var_379 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 31))));
  Var_380 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 32))));
  Var_381 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 33))));
  Var_382 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 34))));
  Var_383 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 35))));
  {
    ParseTreeModuleSrc_35 = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeModuleSrc_35, 0) = ((MR_Box) (Var_348));
    MR_hl_field(0, ParseTreeModuleSrc_35, 1) = ((MR_Box) (Var_349));
    MR_hl_field(0, ParseTreeModuleSrc_35, 2) = ((MR_Box) (Var_350));
    MR_hl_field(0, ParseTreeModuleSrc_35, 3) = ((MR_Box) (Var_351));
    MR_hl_field(0, ParseTreeModuleSrc_35, 4) = ((MR_Box) (IntFIMs_32));
    MR_hl_field(0, ParseTreeModuleSrc_35, 5) = ((MR_Box) (ImpFIMs_33));
    MR_hl_field(0, ParseTreeModuleSrc_35, 6) = ((MR_Box) (Var_354));
    MR_hl_field(0, ParseTreeModuleSrc_35, 7) = ((MR_Box) (Var_355));
    MR_hl_field(0, ParseTreeModuleSrc_35, 8) = ((MR_Box) (Var_356));
    MR_hl_field(0, ParseTreeModuleSrc_35, 9) = ((MR_Box) (Var_357));
    MR_hl_field(0, ParseTreeModuleSrc_35, 10) = ((MR_Box) (Var_358));
    MR_hl_field(0, ParseTreeModuleSrc_35, 11) = ((MR_Box) (Var_359));
    MR_hl_field(0, ParseTreeModuleSrc_35, 12) = ((MR_Box) (Var_360));
    MR_hl_field(0, ParseTreeModuleSrc_35, 13) = ((MR_Box) (Var_361));
    MR_hl_field(0, ParseTreeModuleSrc_35, 14) = ((MR_Box) (Var_362));
    MR_hl_field(0, ParseTreeModuleSrc_35, 15) = ((MR_Box) (Var_363));
    MR_hl_field(0, ParseTreeModuleSrc_35, 16) = ((MR_Box) (Var_364));
    MR_hl_field(0, ParseTreeModuleSrc_35, 17) = ((MR_Box) (Var_365));
    MR_hl_field(0, ParseTreeModuleSrc_35, 18) = ((MR_Box) (Var_366));
    MR_hl_field(0, ParseTreeModuleSrc_35, 19) = ((MR_Box) (Var_367));
    MR_hl_field(0, ParseTreeModuleSrc_35, 20) = ((MR_Box) (Var_368));
    MR_hl_field(0, ParseTreeModuleSrc_35, 21) = ((MR_Box) (Var_369));
    MR_hl_field(0, ParseTreeModuleSrc_35, 22) = ((MR_Box) (Var_370));
    MR_hl_field(0, ParseTreeModuleSrc_35, 23) = ((MR_Box) (Var_371));
    MR_hl_field(0, ParseTreeModuleSrc_35, 24) = ((MR_Box) (Var_372));
    MR_hl_field(0, ParseTreeModuleSrc_35, 25) = ((MR_Box) (Var_373));
    MR_hl_field(0, ParseTreeModuleSrc_35, 26) = ((MR_Box) (Var_374));
    MR_hl_field(0, ParseTreeModuleSrc_35, 27) = ((MR_Box) (Var_375));
    MR_hl_field(0, ParseTreeModuleSrc_35, 28) = ((MR_Box) (Var_376));
    MR_hl_field(0, ParseTreeModuleSrc_35, 29) = ((MR_Box) (Var_377));
    MR_hl_field(0, ParseTreeModuleSrc_35, 30) = ((MR_Box) (Var_378));
    MR_hl_field(0, ParseTreeModuleSrc_35, 31) = ((MR_Box) (Var_379));
    MR_hl_field(0, ParseTreeModuleSrc_35, 32) = ((MR_Box) (Var_380));
    MR_hl_field(0, ParseTreeModuleSrc_35, 33) = ((MR_Box) (Var_381));
    MR_hl_field(0, ParseTreeModuleSrc_35, 34) = ((MR_Box) (Var_382));
    MR_hl_field(0, ParseTreeModuleSrc_35, 35) = ((MR_Box) (Var_383));
  }
  if ((MaybeTimestamp_18 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeTimestampMap_37 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Timestamp_36 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_18, (MR_Integer) 0))));
    MR_Word Var_73;
    MR_Word Var_74;

    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_74, 1) = ((MR_Box) (Timestamp_36));
      MR_hl_field(0, Var_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_73 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_29)), ((MR_Box) (Var_74)));
    {
      MaybeTimestampMap_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTimestampMap_37, 0) = ((MR_Box) (Var_73));
    }
  }
  Errors0_38 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  parse_tree__prog_item__init_aug_compilation_unit_2_p_0(ParseTreeModuleSrc_35, &STATE_VARIABLE_AugCompUnit_77_77);
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (ParseTreeModuleSrc_35));
  }
  GrabbedFileMap0_39 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_29)), ((MR_Box) (Var_78)));
  Var_80 = mercury__dir__this_directory_0_f_0();
  {
    STATE_VARIABLE_Baggage_79_79 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 0) = ((MR_Box) (SourceFileName_16));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 1) = ((MR_Box) (Var_80));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 2) = ((MR_Box) (SourceFileModuleName_17));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 3) = ((MR_Box) (MaybeTopModule_19));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 4) = ((MR_Box) (MaybeTimestampMap_37));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 5) = ((MR_Box) (GrabbedFileMap0_39));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 6) = ((MR_Box) (Errors0_38));
  }
  SrcMap0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 1))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_29)), ((MR_Box) (ParseTreeModuleSrc_35)), SrcMap0_40, &SrcMap_41);
  Var_427 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 0))));
  Var_429 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 2))));
  Var_430 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 3))));
  Var_431 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 4))));
  Var_432 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 5))));
  Var_433 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 6))));
  Var_434 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 7))));
  {
    STATE_VARIABLE_HaveReadModuleMaps_81_81 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 0) = ((MR_Box) (Var_427));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 1) = ((MR_Box) (SrcMap_41));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 2) = ((MR_Box) (Var_429));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 3) = ((MR_Box) (Var_430));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 4) = ((MR_Box) (Var_431));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 5) = ((MR_Box) (Var_432));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 6) = ((MR_Box) (Var_433));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 7) = ((MR_Box) (Var_434));
  }
  ImportUseMap_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_35, (MR_Integer) 3))));
  parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportUseMap_42, &IntImportMap_43, &IntUseMap_44, &ImpImportMap_45, &ImpUseMap_46, &IntUseImpImportMap_47);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntImportMap_43, &IntImports0_48);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseMap_44, &IntUses0_49);
  ImpImports_50 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpImportMap_45);
  ImpUses_51 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpUseMap_46);
  IntUseImpImports_52 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseImpImportMap_47);
  Ancestors_53 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_29);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 0, Ancestors_53, IntImports0_48, &IntImports_54, IntUses0_49, &IntUses_55, STATE_VARIABLE_HaveReadModuleMaps_81_81, &STATE_VARIABLE_HaveReadModuleMaps_84_84, STATE_VARIABLE_Baggage_79_79, &STATE_VARIABLE_Baggage_85_85, STATE_VARIABLE_AugCompUnit_77_77, &STATE_VARIABLE_AugCompUnit_86_86);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_88_88);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_89_89);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntImpIndirectImported_90_90);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpImpIndirectImported_91_91);
  Var_94 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_54);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 0, Var_94, STATE_VARIABLE_IntIndirectImported_88_88, &STATE_VARIABLE_IntIndirectImported_95_95, STATE_VARIABLE_IntImpIndirectImported_90_90, &STATE_VARIABLE_IntImpIndirectImported_96_96, STATE_VARIABLE_HaveReadModuleMaps_84_84, &STATE_VARIABLE_HaveReadModuleMaps_97_97, STATE_VARIABLE_Baggage_85_85, &STATE_VARIABLE_Baggage_98_98, STATE_VARIABLE_AugCompUnit_86_86, &STATE_VARIABLE_AugCompUnit_99_99);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 2, ImpImports_50, STATE_VARIABLE_ImpIndirectImported_89_89, &STATE_VARIABLE_ImpIndirectImported_103_103, STATE_VARIABLE_ImpImpIndirectImported_91_91, &STATE_VARIABLE_ImpImpIndirectImported_104_104, STATE_VARIABLE_HaveReadModuleMaps_97_97, &STATE_VARIABLE_HaveReadModuleMaps_105_105, STATE_VARIABLE_Baggage_98_98, &STATE_VARIABLE_Baggage_106_106, STATE_VARIABLE_AugCompUnit_99_99, &STATE_VARIABLE_AugCompUnit_107_107);
  Var_111 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_55);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 1, Var_111, STATE_VARIABLE_IntIndirectImported_95_95, &STATE_VARIABLE_IntIndirectImported_112_112, STATE_VARIABLE_IntImpIndirectImported_96_96, &STATE_VARIABLE_IntImpIndirectImported_113_113, STATE_VARIABLE_HaveReadModuleMaps_105_105, &STATE_VARIABLE_HaveReadModuleMaps_114_114, STATE_VARIABLE_Baggage_106_106, &STATE_VARIABLE_Baggage_115_115, STATE_VARIABLE_AugCompUnit_107_107, &STATE_VARIABLE_AugCompUnit_116_116);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 3, ImpUses_51, STATE_VARIABLE_ImpIndirectImported_103_103, &STATE_VARIABLE_ImpIndirectImported_120_120, STATE_VARIABLE_ImpImpIndirectImported_104_104, &STATE_VARIABLE_ImpImpIndirectImported_121_121, STATE_VARIABLE_HaveReadModuleMaps_114_114, &STATE_VARIABLE_HaveReadModuleMaps_122_122, STATE_VARIABLE_Baggage_115_115, &STATE_VARIABLE_Baggage_123_123, STATE_VARIABLE_AugCompUnit_116_116, &STATE_VARIABLE_AugCompUnit_124_124);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 4, IntUseImpImports_52, STATE_VARIABLE_IntIndirectImported_112_112, &STATE_VARIABLE_IntIndirectImported_128_128, STATE_VARIABLE_IntImpIndirectImported_113_113, &STATE_VARIABLE_IntImpIndirectImported_129_129, STATE_VARIABLE_HaveReadModuleMaps_122_122, &STATE_VARIABLE_HaveReadModuleMaps_130_130, STATE_VARIABLE_Baggage_123_123, &STATE_VARIABLE_Baggage_131_131, STATE_VARIABLE_AugCompUnit_124_124, &STATE_VARIABLE_AugCompUnit_132_132);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_14, Globals_15, (MR_Integer) 0, STATE_VARIABLE_IntIndirectImported_128_128, STATE_VARIABLE_IntImpIndirectImported_129_129, &STATE_VARIABLE_IntImpIndirectImported_136_136, STATE_VARIABLE_HaveReadModuleMaps_130_130, &STATE_VARIABLE_HaveReadModuleMaps_137_137, STATE_VARIABLE_Baggage_131_131, &STATE_VARIABLE_Baggage_138_138, STATE_VARIABLE_AugCompUnit_132_132, &STATE_VARIABLE_AugCompUnit_139_139);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_14, Globals_15, (MR_Integer) 1, STATE_VARIABLE_ImpIndirectImported_120_120, STATE_VARIABLE_ImpImpIndirectImported_121_121, &STATE_VARIABLE_ImpImpIndirectImported_143_143, STATE_VARIABLE_HaveReadModuleMaps_137_137, &STATE_VARIABLE_HaveReadModuleMaps_144_144, STATE_VARIABLE_Baggage_138_138, &STATE_VARIABLE_Baggage_145_145, STATE_VARIABLE_AugCompUnit_139_139, &STATE_VARIABLE_AugCompUnit_146_146);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_14, Globals_15, (MR_Integer) 2, STATE_VARIABLE_IntImpIndirectImported_136_136, STATE_VARIABLE_HaveReadModuleMaps_144_144, &STATE_VARIABLE_HaveReadModuleMaps_150_150, STATE_VARIABLE_Baggage_145_145, &STATE_VARIABLE_Baggage_151_151, STATE_VARIABLE_AugCompUnit_146_146, &STATE_VARIABLE_AugCompUnit_152_152);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_14, Globals_15, (MR_Integer) 2, STATE_VARIABLE_ImpImpIndirectImported_143_143, STATE_VARIABLE_HaveReadModuleMaps_150_150, &STATE_VARIABLE_HaveReadModuleMaps_156_156, STATE_VARIABLE_Baggage_151_151, &STATE_VARIABLE_Baggage_157_157, STATE_VARIABLE_AugCompUnit_152_152, &STATE_VARIABLE_AugCompUnit_158_158);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 713, &Experiment3_56);
  switch (Experiment3_56) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_Baggage_169_169 = STATE_VARIABLE_Baggage_157_157;
        *STATE_VARIABLE_AugCompUnit_64 = STATE_VARIABLE_AugCompUnit_158_158;
        *STATE_VARIABLE_HaveReadModuleMaps_66 = STATE_VARIABLE_HaveReadModuleMaps_156_156;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_HaveReadModuleMaps_162_162;
        MR_Word STATE_VARIABLE_Baggage_163_163;
        MR_Word STATE_VARIABLE_AugCompUnit_164_164;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word _IntUses_57;
        MR_Word _ImpUses_58;
        MR_Word _IntUsesList_59;
        MR_Word _ImpUsesList_60;
        MR_Box conv11_STATE_VARIABLE_HaveReadModuleMaps_66;
        MR_Box conv10_STATE_VARIABLE_Baggage_169_169;
        MR_Box conv9_STATE_VARIABLE_AugCompUnit_64;
        MR_Box conv8_STATE_VARIABLE_IO_68;

        parse_tree__grab_modules__grab_module_int1_file_14_p_0(ProgressStream_14, Globals_15, (MR_Integer) 6, ModuleName_29, &_IntUses_57, &_ImpUses_58, STATE_VARIABLE_HaveReadModuleMaps_156_156, &STATE_VARIABLE_HaveReadModuleMaps_162_162, STATE_VARIABLE_Baggage_157_157, &STATE_VARIABLE_Baggage_163_163, STATE_VARIABLE_AugCompUnit_158_158, &STATE_VARIABLE_AugCompUnit_164_164);
        {
          Var_166 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_166, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[0]));
          MR_hl_field(0, Var_166, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_2));
          MR_hl_field(0, Var_166, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_166, 3) = ((MR_Box) (ProgressStream_14));
          MR_hl_field(0, Var_166, 4) = ((MR_Box) (Globals_15));
          MR_hl_field(0, Var_166, 5) = ((MR_Box) ((MR_Integer) 6));
        }
        Var_167 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_29);
        mercury__list__map2_foldl4_12_p_1((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_166, Var_167, &_IntUsesList_59, &_ImpUsesList_60, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_162_162)), &conv11_STATE_VARIABLE_HaveReadModuleMaps_66, ((MR_Box) (STATE_VARIABLE_Baggage_163_163)), &conv10_STATE_VARIABLE_Baggage_169_169, ((MR_Box) (STATE_VARIABLE_AugCompUnit_164_164)), &conv9_STATE_VARIABLE_AugCompUnit_64, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_68);
        *STATE_VARIABLE_HaveReadModuleMaps_66 = ((MR_Word) (conv11_STATE_VARIABLE_HaveReadModuleMaps_66));
        STATE_VARIABLE_Baggage_169_169 = ((MR_Word) (conv10_STATE_VARIABLE_Baggage_169_169));
        *STATE_VARIABLE_AugCompUnit_64 = ((MR_Word) (conv9_STATE_VARIABLE_AugCompUnit_64));
      }
      break;
  }
  parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0(*STATE_VARIABLE_AugCompUnit_64, &ImportAccessibilityInfo_61);
  parse_tree__check_import_accessibility__check_import_accessibility_3_p_0(ParseTreeModuleSrc_35, ImportAccessibilityInfo_61, &AccessSpecs_62);
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(AccessSpecs_62, STATE_VARIABLE_Baggage_169_169, STATE_VARIABLE_Baggage_63);
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
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
      *STATE_VARIABLE_HaveReadModuleMaps_11 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
      *STATE_VARIABLE_ImpIndirectImports_9 = STATE_VARIABLE_ImpIndirectImports_0_8;
      *STATE_VARIABLE_IntIndirectImports_7 = STATE_VARIABLE_IntIndirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleNames_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_70_70;
      MR_Word STATE_VARIABLE_Baggage_71_71;
      MR_Word STATE_VARIABLE_AugCompUnit_72_72;
      MR_Word STATE_VARIABLE_IntIndirectImports_74_74;
      MR_Word STATE_VARIABLE_ImpIndirectImports_75_75;
      MR_Word GrabbedFileMap_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_12, (MR_Integer) 5))));
      MR_Word OldGrabbedFile_82;
      MR_Box conv0_OldGrabbedFile_82;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
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
        MR_Word Var_95;

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
            switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_82, (MR_Integer) 0))))) {
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
        parse_tree__file_kind____Compare____file_kind_0_0(&Var_95, (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1])), OldFileKind_83);
        succeeded = ((MR_Integer) 1 == Var_95);
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word IntUses_52;
        MR_Word ImpUses_53;

        parse_tree__grab_modules__grab_module_int1_file_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_44, &IntUses_52, &ImpUses_53, STATE_VARIABLE_HaveReadModuleMaps_0_10, &STATE_VARIABLE_HaveReadModuleMaps_70_70, STATE_VARIABLE_Baggage_0_12, &STATE_VARIABLE_Baggage_71_71, STATE_VARIABLE_AugCompUnit_0_14, &STATE_VARIABLE_AugCompUnit_72_72);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_52, STATE_VARIABLE_IntIndirectImports_0_6, &STATE_VARIABLE_IntIndirectImports_74_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_53, STATE_VARIABLE_ImpIndirectImports_0_8, &STATE_VARIABLE_ImpIndirectImports_75_75);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_72_72 = STATE_VARIABLE_AugCompUnit_0_14;
        STATE_VARIABLE_Baggage_71_71 = STATE_VARIABLE_Baggage_0_12;
        STATE_VARIABLE_HaveReadModuleMaps_70_70 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
        STATE_VARIABLE_ImpIndirectImports_75_75 = STATE_VARIABLE_ImpIndirectImports_0_8;
        STATE_VARIABLE_IntIndirectImports_74_74 = STATE_VARIABLE_IntIndirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_45;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_6 = STATE_VARIABLE_IntIndirectImports_74_74;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8 = STATE_VARIABLE_ImpIndirectImports_75_75;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10 = STATE_VARIABLE_HaveReadModuleMaps_70_70;
      next_value_of_STATE_VARIABLE_Baggage_0_12 = STATE_VARIABLE_Baggage_71_71;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_14 = STATE_VARIABLE_AugCompUnit_72_72;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_IntIndirectImports_0_6 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      STATE_VARIABLE_ImpIndirectImports_0_8 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8;
      STATE_VARIABLE_HaveReadModuleMaps_0_10 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
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
      *STATE_VARIABLE_HaveReadModuleMaps_11 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
      *STATE_VARIABLE_DirectUses_9 = STATE_VARIABLE_DirectUses_0_8;
      *STATE_VARIABLE_DirectImports_7 = STATE_VARIABLE_DirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleNames_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_72_72;
      MR_Word STATE_VARIABLE_Baggage_73_73;
      MR_Word STATE_VARIABLE_AugCompUnit_74_74;
      MR_Word STATE_VARIABLE_DirectImports_77_77;
      MR_Word STATE_VARIABLE_DirectUses_79_79;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_12;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_14;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_12, ModuleName_44, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word IntImports_52;
        MR_Word ImpImports_53;
        MR_Word IntUses_54;
        MR_Word ImpUses_55;
        MR_Word STATE_VARIABLE_DirectImports_76_76;
        MR_Word STATE_VARIABLE_DirectUses_78_78;

        parse_tree__grab_modules__grab_module_int0_file_for_acu_16_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_44, &IntImports_52, &ImpImports_53, &IntUses_54, &ImpUses_55, STATE_VARIABLE_HaveReadModuleMaps_0_10, &STATE_VARIABLE_HaveReadModuleMaps_72_72, STATE_VARIABLE_Baggage_0_12, &STATE_VARIABLE_Baggage_73_73, STATE_VARIABLE_AugCompUnit_0_14, &STATE_VARIABLE_AugCompUnit_74_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_52, STATE_VARIABLE_DirectImports_0_6, &STATE_VARIABLE_DirectImports_76_76);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_53, STATE_VARIABLE_DirectImports_76_76, &STATE_VARIABLE_DirectImports_77_77);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_54, STATE_VARIABLE_DirectUses_0_8, &STATE_VARIABLE_DirectUses_78_78);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_55, STATE_VARIABLE_DirectUses_78_78, &STATE_VARIABLE_DirectUses_79_79);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_74_74 = STATE_VARIABLE_AugCompUnit_0_14;
        STATE_VARIABLE_Baggage_73_73 = STATE_VARIABLE_Baggage_0_12;
        STATE_VARIABLE_HaveReadModuleMaps_72_72 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
        STATE_VARIABLE_DirectUses_79_79 = STATE_VARIABLE_DirectUses_0_8;
        STATE_VARIABLE_DirectImports_77_77 = STATE_VARIABLE_DirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_45;
      next_value_of_STATE_VARIABLE_DirectImports_0_6 = STATE_VARIABLE_DirectImports_77_77;
      next_value_of_STATE_VARIABLE_DirectUses_0_8 = STATE_VARIABLE_DirectUses_79_79;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10 = STATE_VARIABLE_HaveReadModuleMaps_72_72;
      next_value_of_STATE_VARIABLE_Baggage_0_12 = STATE_VARIABLE_Baggage_73_73;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_14 = STATE_VARIABLE_AugCompUnit_74_74;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_DirectImports_0_6 = next_value_of_STATE_VARIABLE_DirectImports_0_6;
      STATE_VARIABLE_DirectUses_0_8 = next_value_of_STATE_VARIABLE_DirectUses_0_8;
      STATE_VARIABLE_HaveReadModuleMaps_0_10 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
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

  parse_tree__item_util__get_imports_uses_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_9)), &conv0_HeadVar__10_10);
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_39,
  MR_Word STATE_VARIABLE_Baggage_0_40,
  MR_Word * STATE_VARIABLE_Baggage_41,
  MR_Word STATE_VARIABLE_AugCompUnit_0_42,
  MR_Word * STATE_VARIABLE_AugCompUnit_43)
{
  MR_Word ReturnTimestamp_29;
  MR_Word HaveReadInt0_30;
  MR_Word Errors_34;
  MR_Word STATE_VARIABLE_Baggage_54_54;
  MR_Word MaybeTimestampMap_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_40, (MR_Integer) 4))));

  if ((MaybeTimestampMap_125 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_29 = (MR_Integer) 1;
  else
    ReturnTimestamp_29 = (MR_Integer) 0;
  parse_tree__read_modules__maybe_read_module_int0_10_p_0(ProgressStream_17, Globals_18, (MR_Integer) 1, ModuleName_20, ReturnTimestamp_29, &HaveReadInt0_30, STATE_VARIABLE_HaveReadModuleMaps_0_38, STATE_VARIABLE_HaveReadModuleMaps_39);
  if (((MR_tag((MR_Word) HaveReadInt0_30)) == (MR_Integer) 1))
  {
    Errors_34 = ((MR_Word) ((MR_hl_field(1, HaveReadInt0_30, (MR_Integer) 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_21);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_22);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_23);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_24);
    STATE_VARIABLE_Baggage_54_54 = STATE_VARIABLE_Baggage_0_40;
    *STATE_VARIABLE_AugCompUnit_43 = STATE_VARIABLE_AugCompUnit_0_42;
  }
  else
  {
    MR_Word MaybeTimestamp_32 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_30, (MR_Integer) 1))));
    MR_Word ParseTreeInt0_33 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_30, (MR_Integer) 2))));
    MR_Word GrabbedFile_35;
    MR_Word STATE_VARIABLE_Baggage_49_49;
    MR_Word STATE_VARIABLE_AugCompUnit_50_50;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Box conv7_IntImports_21;
    MR_Box conv6_ImpImports_22;
    MR_Box conv5_IntUses_23;
    MR_Box conv4_ImpUses_24;

    Errors_34 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_30, (MR_Integer) 3))));
    {
      GrabbedFile_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GrabbedFile_35, 0) = ((MR_Box) (ParseTreeInt0_33));
      MR_hl_field(1, GrabbedFile_35, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_19));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_20, GrabbedFile_35, STATE_VARIABLE_Baggage_0_40, &STATE_VARIABLE_Baggage_49_49);
    switch (ReadWhy0_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word IntForOptSpec_37;

          {
            IntForOptSpec_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IntForOptSpec_37, 0) = ((MR_Box) (ParseTreeInt0_33));
            MR_hl_field(0, IntForOptSpec_37, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_19));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_37, STATE_VARIABLE_AugCompUnit_0_42, &STATE_VARIABLE_AugCompUnit_50_50);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word AncestorIntSpec_36;

          {
            AncestorIntSpec_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, AncestorIntSpec_36, 0) = ((MR_Box) (ParseTreeInt0_33));
            MR_hl_field(0, AncestorIntSpec_36, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_19));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(AncestorIntSpec_36, STATE_VARIABLE_AugCompUnit_0_42, &STATE_VARIABLE_AugCompUnit_50_50);
        }
        break;
    }
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_20, (MR_Integer) 0, (MR_Integer) 1, MaybeTimestamp_32, STATE_VARIABLE_Baggage_49_49, &STATE_VARIABLE_Baggage_54_54);
    Var_56 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_33, (MR_Integer) 4))));
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_58 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_59 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_60 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), Var_56, ((MR_Box) (Var_57)), &conv7_IntImports_21, ((MR_Box) (Var_58)), &conv6_ImpImports_22, ((MR_Box) (Var_59)), &conv5_IntUses_23, ((MR_Box) (Var_60)), &conv4_ImpUses_24);
    *IntImports_21 = ((MR_Word) (conv7_IntImports_21));
    *ImpImports_22 = ((MR_Word) (conv6_ImpImports_22));
    *IntUses_23 = ((MR_Word) (conv5_IntUses_23));
    *ImpUses_24 = ((MR_Word) (conv4_ImpUses_24));
    Var_61 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_33, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_20, Var_61, STATE_VARIABLE_AugCompUnit_50_50, STATE_VARIABLE_AugCompUnit_43);
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_34, STATE_VARIABLE_Baggage_54_54, STATE_VARIABLE_Baggage_41);
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
  MR_Word PT0_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT0_7, (MR_Integer) 0))));
  MR_Word Map_10;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
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

static MR_bool MR_CALL 
parse_tree__grab_modules__should_read_interface_3_p_0(
  MR_Word Baggage_4,
  MR_Word ModuleName_5,
  MR_Word FileKind_6)
{
  MR_bool succeeded;
  MR_Word GrabbedFileMap_7 = ((MR_Word) ((MR_hl_field(0, Baggage_4, (MR_Integer) 5))));
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
    MR_Word Var_21;

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
        switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_8, (MR_Integer) 0))))) {
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
    parse_tree__file_kind____Compare____file_kind_0_0(&Var_21, Var_11, OldFileKind_9);
    succeeded = ((MR_Integer) 1 == Var_21);
  }
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy2_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25,
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
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_33_33;
    MR_Word STATE_VARIABLE_Baggage_34_34;
    MR_Word STATE_VARIABLE_AugCompUnit_35_35;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_32 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_14, Globals_15, ReadWhy2_17, Modules_18, Var_32, &ImpIndirectImports_23, STATE_VARIABLE_HaveReadModuleMaps_0_24, &STATE_VARIABLE_HaveReadModuleMaps_33_33, STATE_VARIABLE_Baggage_0_26, &STATE_VARIABLE_Baggage_34_34, STATE_VARIABLE_AugCompUnit_0_28, &STATE_VARIABLE_AugCompUnit_35_35);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpIndirectImports_23);
    if (succeeded)
    {
      *STATE_VARIABLE_AugCompUnit_29 = STATE_VARIABLE_AugCompUnit_35_35;
      *STATE_VARIABLE_Baggage_27 = STATE_VARIABLE_Baggage_34_34;
      *STATE_VARIABLE_HaveReadModuleMaps_25 = STATE_VARIABLE_HaveReadModuleMaps_33_33;
    }
    else
    {
      MR_Word next_value_of_Modules_18 = ImpIndirectImports_23;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_24 = STATE_VARIABLE_HaveReadModuleMaps_33_33;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_26 = STATE_VARIABLE_Baggage_34_34;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_28 = STATE_VARIABLE_AugCompUnit_35_35;

      // direct tailcall eliminated
      ;
      Modules_18 = next_value_of_Modules_18;
      STATE_VARIABLE_HaveReadModuleMaps_0_24 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_24;
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_30,
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
    MR_Word STATE_VARIABLE_ImpIndirectImports_39_39;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_40_40;
    MR_Word STATE_VARIABLE_Baggage_41_41;
    MR_Word STATE_VARIABLE_AugCompUnit_42_42;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_37 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_20);
    Var_38 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_16, Globals_17, ReadWhy2_19, Var_37, Var_38, &IndirectImports_26, STATE_VARIABLE_ImpIndirectImports_0_27, &STATE_VARIABLE_ImpIndirectImports_39_39, STATE_VARIABLE_HaveReadModuleMaps_0_29, &STATE_VARIABLE_HaveReadModuleMaps_40_40, STATE_VARIABLE_Baggage_0_31, &STATE_VARIABLE_Baggage_41_41, STATE_VARIABLE_AugCompUnit_0_33, &STATE_VARIABLE_AugCompUnit_42_42);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_26);
    if (succeeded)
    {
      *STATE_VARIABLE_AugCompUnit_34 = STATE_VARIABLE_AugCompUnit_42_42;
      *STATE_VARIABLE_Baggage_32 = STATE_VARIABLE_Baggage_41_41;
      *STATE_VARIABLE_HaveReadModuleMaps_30 = STATE_VARIABLE_HaveReadModuleMaps_40_40;
      *STATE_VARIABLE_ImpIndirectImports_28 = STATE_VARIABLE_ImpIndirectImports_39_39;
    }
    else
    {
      MR_Word next_value_of_Modules_20 = IndirectImports_26;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27 = STATE_VARIABLE_ImpIndirectImports_39_39;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_29 = STATE_VARIABLE_HaveReadModuleMaps_40_40;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_31 = STATE_VARIABLE_Baggage_41_41;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_33 = STATE_VARIABLE_AugCompUnit_42_42;

      // direct tailcall eliminated
      ;
      Modules_20 = next_value_of_Modules_20;
      STATE_VARIABLE_ImpIndirectImports_0_27 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27;
      STATE_VARIABLE_HaveReadModuleMaps_0_29 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_29;
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
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
      *STATE_VARIABLE_HaveReadModuleMaps_11 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
      *STATE_VARIABLE_ImpIndirectImports_9 = STATE_VARIABLE_ImpIndirectImports_0_8;
      *STATE_VARIABLE_IntIndirectImports_7 = STATE_VARIABLE_IntIndirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleNames_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_70_70;
      MR_Word STATE_VARIABLE_Baggage_71_71;
      MR_Word STATE_VARIABLE_AugCompUnit_72_72;
      MR_Word STATE_VARIABLE_IntIndirectImports_74_74;
      MR_Word STATE_VARIABLE_ImpIndirectImports_75_75;
      MR_Word GrabbedFileMap_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_12, (MR_Integer) 5))));
      MR_Word OldGrabbedFile_82;
      MR_Box conv0_OldGrabbedFile_82;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
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
        MR_Word Var_95;

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
            switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_82, (MR_Integer) 0))))) {
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
        parse_tree__file_kind____Compare____file_kind_0_0(&Var_95, (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2])), OldFileKind_83);
        succeeded = ((MR_Integer) 1 == Var_95);
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word IntUses_52;
        MR_Word ImpUses_53;

        parse_tree__grab_modules__grab_module_int2_file_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_44, &IntUses_52, &ImpUses_53, STATE_VARIABLE_HaveReadModuleMaps_0_10, &STATE_VARIABLE_HaveReadModuleMaps_70_70, STATE_VARIABLE_Baggage_0_12, &STATE_VARIABLE_Baggage_71_71, STATE_VARIABLE_AugCompUnit_0_14, &STATE_VARIABLE_AugCompUnit_72_72);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_52, STATE_VARIABLE_IntIndirectImports_0_6, &STATE_VARIABLE_IntIndirectImports_74_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_53, STATE_VARIABLE_ImpIndirectImports_0_8, &STATE_VARIABLE_ImpIndirectImports_75_75);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_72_72 = STATE_VARIABLE_AugCompUnit_0_14;
        STATE_VARIABLE_Baggage_71_71 = STATE_VARIABLE_Baggage_0_12;
        STATE_VARIABLE_HaveReadModuleMaps_70_70 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
        STATE_VARIABLE_ImpIndirectImports_75_75 = STATE_VARIABLE_ImpIndirectImports_0_8;
        STATE_VARIABLE_IntIndirectImports_74_74 = STATE_VARIABLE_IntIndirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_45;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_6 = STATE_VARIABLE_IntIndirectImports_74_74;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8 = STATE_VARIABLE_ImpIndirectImports_75_75;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10 = STATE_VARIABLE_HaveReadModuleMaps_70_70;
      next_value_of_STATE_VARIABLE_Baggage_0_12 = STATE_VARIABLE_Baggage_71_71;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_14 = STATE_VARIABLE_AugCompUnit_72_72;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_IntIndirectImports_0_6 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      STATE_VARIABLE_ImpIndirectImports_0_8 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8;
      STATE_VARIABLE_HaveReadModuleMaps_0_10 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
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

  parse_tree__item_util__get_uses_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35,
  MR_Word STATE_VARIABLE_Baggage_0_36,
  MR_Word * STATE_VARIABLE_Baggage_37,
  MR_Word STATE_VARIABLE_AugCompUnit_0_38,
  MR_Word * STATE_VARIABLE_AugCompUnit_39)
{
  MR_Word ReturnTimestamp_25;
  MR_Word HaveReadInt2_26;
  MR_Word Errors_30;
  MR_Word STATE_VARIABLE_Baggage_54_54;
  MR_Word MaybeTimestampMap_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 4))));

  if ((MaybeTimestampMap_93 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_25 = (MR_Integer) 1;
  else
    ReturnTimestamp_25 = (MR_Integer) 0;
  parse_tree__read_modules__maybe_read_module_int2_10_p_0(ProgressStream_15, Globals_16, (MR_Integer) 1, ModuleName_18, ReturnTimestamp_25, &HaveReadInt2_26, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
  if (((MR_tag((MR_Word) HaveReadInt2_26)) == (MR_Integer) 1))
  {
    Errors_30 = ((MR_Word) ((MR_hl_field(1, HaveReadInt2_26, (MR_Integer) 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_20);
    STATE_VARIABLE_Baggage_54_54 = STATE_VARIABLE_Baggage_0_36;
    *STATE_VARIABLE_AugCompUnit_39 = STATE_VARIABLE_AugCompUnit_0_38;
  }
  else
  {
    MR_Word MaybeTimestamp_28 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_26, (MR_Integer) 1))));
    MR_Word ParseTreeInt2_29 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_26, (MR_Integer) 2))));
    MR_Word GrabbedFile_31;
    MR_Word STATE_VARIABLE_Baggage_45_45;
    MR_Word STATE_VARIABLE_AugCompUnit_46_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_55;
    MR_Word GrabbedFileMap0_101;
    MR_Word GrabbedFileMap_102;
    MR_String Var_109;
    MR_String Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_115;
    MR_Box conv3_IntUses_19;
    MR_Box conv2_ImpUses_20;

    Errors_30 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_26, (MR_Integer) 3))));
    {
      GrabbedFile_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GrabbedFile_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, GrabbedFile_31, 1) = ((MR_Box) (ParseTreeInt2_29));
      MR_hl_field(3, GrabbedFile_31, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy2_17));
    }
    GrabbedFileMap0_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 5))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_18)), ((MR_Box) (GrabbedFile_31)), GrabbedFileMap0_101, &GrabbedFileMap_102);
    Var_109 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 0))));
    Var_110 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 1))));
    Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 2))));
    Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 3))));
    Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 4))));
    Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 6))));
    {
      STATE_VARIABLE_Baggage_45_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 0) = ((MR_Box) (Var_109));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 1) = ((MR_Box) (Var_110));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 2) = ((MR_Box) (Var_111));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 3) = ((MR_Box) (Var_112));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 4) = ((MR_Box) (Var_113));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 5) = ((MR_Box) (GrabbedFileMap_102));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 6) = ((MR_Box) (Var_115));
    }
    switch (ReadWhy2_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word IndirectIntSpec_32;

          {
            IndirectIntSpec_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IndirectIntSpec_32, 0) = ((MR_Box) (ParseTreeInt2_29));
            MR_hl_field(0, IndirectIntSpec_32, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(IndirectIntSpec_32, STATE_VARIABLE_AugCompUnit_0_38, &STATE_VARIABLE_AugCompUnit_46_46);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IntForOptSpec_33;

          {
            IntForOptSpec_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, IntForOptSpec_33, 0) = ((MR_Box) (ParseTreeInt2_29));
            MR_hl_field(2, IntForOptSpec_33, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_33, STATE_VARIABLE_AugCompUnit_0_38, &STATE_VARIABLE_AugCompUnit_46_46);
        }
        break;
    }
    Var_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_29, (MR_Integer) 4))));
    Var_50 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_51 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), Var_49, ((MR_Box) (Var_50)), &conv3_IntUses_19, ((MR_Box) (Var_51)), &conv2_ImpUses_20);
    *IntUses_19 = ((MR_Word) (conv3_IntUses_19));
    *ImpUses_20 = ((MR_Word) (conv2_ImpUses_20));
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_18, (MR_Integer) 2, (MR_Integer) 4, MaybeTimestamp_28, STATE_VARIABLE_Baggage_45_45, &STATE_VARIABLE_Baggage_54_54);
    Var_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_29, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_18, Var_55, STATE_VARIABLE_AugCompUnit_46_46, STATE_VARIABLE_AugCompUnit_39);
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_54_54, STATE_VARIABLE_Baggage_37);
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
  MR_Word PT2_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT2_7, (MR_Integer) 0))));
  MR_Word Map_10;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
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
parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11)
{
  MR_Word Errors0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 6))));
  MR_Word NonFatalErrorSpecs0_7 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 3))));
  MR_Word NonFatalErrorSpecs_8;
  MR_Word Errors_9;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_String Var_27;
  MR_String Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;

  NonFatalErrorSpecs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_4, NonFatalErrorSpecs0_7);
  Var_22 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 0))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 1))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 2))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 4))));
  {
    Errors_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_9, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Errors_9, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Errors_9, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Errors_9, 3) = ((MR_Box) (NonFatalErrorSpecs_8));
    MR_hl_field(0, Errors_9, 4) = ((MR_Box) (Var_26));
  }
  Var_27 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 0))));
  Var_28 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 4))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Errors_9));
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

  parse_tree__item_util__get_uses_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_36,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_37,
  MR_Word STATE_VARIABLE_Baggage_0_38,
  MR_Word * STATE_VARIABLE_Baggage_39,
  MR_Word STATE_VARIABLE_AugCompUnit_0_40,
  MR_Word * STATE_VARIABLE_AugCompUnit_41)
{
  MR_Word ReturnTimestamp_25;
  MR_Word HaveReadInt1_26;
  MR_Word MaybeTimestampMap_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_38, (MR_Integer) 4))));

  if ((MaybeTimestampMap_115 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_25 = (MR_Integer) 1;
  else
    ReturnTimestamp_25 = (MR_Integer) 0;
  parse_tree__read_modules__maybe_read_module_int1_10_p_0(ProgressStream_15, Globals_16, (MR_Integer) 1, ModuleName_18, ReturnTimestamp_25, &HaveReadInt1_26, STATE_VARIABLE_HaveReadModuleMaps_0_36, STATE_VARIABLE_HaveReadModuleMaps_37);
  if (((MR_tag((MR_Word) HaveReadInt1_26)) == (MR_Integer) 1))
  {
    MR_Word Errors_64 = ((MR_Word) ((MR_hl_field(1, HaveReadInt1_26, (MR_Integer) 1))));

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_20);
    parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_64, STATE_VARIABLE_Baggage_0_38, STATE_VARIABLE_Baggage_39);
    *STATE_VARIABLE_AugCompUnit_41 = STATE_VARIABLE_AugCompUnit_0_40;
  }
  else
  {
    MR_Word MaybeTimestamp_28 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_26, (MR_Integer) 1))));
    MR_Word ParseTreeInt1_29 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_26, (MR_Integer) 2))));
    MR_Word Errors_30 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_26, (MR_Integer) 3))));
    MR_Word GrabbedFile_31;
    MR_Word RecompAvail_32;
    MR_Word STATE_VARIABLE_Baggage_47_47;
    MR_Word STATE_VARIABLE_AugCompUnit_48_48;
    MR_Word STATE_VARIABLE_Baggage_49_49;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Box conv3_IntUses_19;
    MR_Box conv2_ImpUses_20;

    {
      GrabbedFile_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GrabbedFile_31, 0) = ((MR_Box) (ParseTreeInt1_29));
      MR_hl_field(2, GrabbedFile_31, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_18, GrabbedFile_31, STATE_VARIABLE_Baggage_0_38, &STATE_VARIABLE_Baggage_47_47);
    switch (ReadWhy1_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word DirectIntSpec_33;

          RecompAvail_32 = (MR_Integer) 2;
          {
            DirectIntSpec_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_33, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(0, DirectIntSpec_33, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_33, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_111;

          RecompAvail_32 = (MR_Integer) 4;
          {
            DirectIntSpec_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_111, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(0, DirectIntSpec_111, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_111, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word DirectIntSpec_112;

          RecompAvail_32 = (MR_Integer) 1;
          {
            DirectIntSpec_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_112, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(0, DirectIntSpec_112, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_112, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_113;

          RecompAvail_32 = (MR_Integer) 3;
          {
            DirectIntSpec_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_113, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(0, DirectIntSpec_113, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_113, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word DirectIntSpec_114;

          RecompAvail_32 = (MR_Integer) 5;
          {
            DirectIntSpec_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_114, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(0, DirectIntSpec_114, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_114, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word IntForOptSpec_34;

          RecompAvail_32 = (MR_Integer) 4;
          {
            IntForOptSpec_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, IntForOptSpec_34, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(1, IntForOptSpec_34, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_34, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word TypeRepnSpec_35;

          RecompAvail_32 = (MR_Integer) 1;
          TypeRepnSpec_35 = (MR_Word) (ParseTreeInt1_29);
          parse_tree__grab_modules__aug_compilation_unit_add_type_repn_spec_3_p_0(TypeRepnSpec_35, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          STATE_VARIABLE_Baggage_49_49 = STATE_VARIABLE_Baggage_47_47;
        }
        break;
    }
    Var_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_29, (MR_Integer) 4))));
    Var_55 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_56 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_54, ((MR_Box) (Var_55)), &conv3_IntUses_19, ((MR_Box) (Var_56)), &conv2_ImpUses_20);
    *IntUses_19 = ((MR_Word) (conv3_IntUses_19));
    *ImpUses_20 = ((MR_Word) (conv2_ImpUses_20));
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_18, (MR_Integer) 1, RecompAvail_32, MaybeTimestamp_28, STATE_VARIABLE_Baggage_49_49, STATE_VARIABLE_Baggage_39);
    Var_59 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_29, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_18, Var_59, STATE_VARIABLE_AugCompUnit_48_48, STATE_VARIABLE_AugCompUnit_41);
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
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(1, MaybeVersionNumbers_6, (MR_Integer) 0))));
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
    MR_Word ModuleVersionNumbersMap_10;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
    Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
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
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 7))));
  MR_Word PT1_7 = (MR_Word) (X_4);
  MR_Word MN_8 = ((MR_Word) ((MR_hl_field(0, PT1_7, (MR_Integer) 0))));
  MR_Word Map_9;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_46;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0), ((MR_Box) (MN_8)), ((MR_Box) (X_4)), Map0_6, &Map_9);
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 0))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 1))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 2))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 3))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 4))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 5))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 8))));
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
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 6))));
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
        MR_Word PT0_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));

        MN_9 = ((MR_Word) ((MR_hl_field(0, PT0_7, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PT1_10 = ((MR_Word) ((MR_hl_field(1, X_4, (MR_Integer) 0))));

        MN_9 = ((MR_Word) ((MR_hl_field(0, PT1_10, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PT2_12 = ((MR_Word) ((MR_hl_field(2, X_4, (MR_Integer) 0))));

        MN_9 = ((MR_Word) ((MR_hl_field(0, PT2_12, (MR_Integer) 0))));
      }
      break;
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_14);
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 0))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 1))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 2))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 3))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 4))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 5))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 7))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 8))));
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
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
  MR_Word PT1_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT1_7, (MR_Integer) 0))));
  MR_Word Map_10;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
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
parse_tree__grab_modules__module_baggage_add_errors_3_p_0(
  MR_Word Errors1_4,
  MR_Word STATE_VARIABLE_Baggage_0_23,
  MR_Word * STATE_VARIABLE_Baggage_24)
{
  MR_Word Errors0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 6))));
  MR_Word FatalErrors0_7 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 0))));
  MR_Word FatalErrorSpecs0_8 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 1))));
  MR_Word NonFatalErrors0_9 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 2))));
  MR_Word NonFatalErrorSpecs0_10 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 3))));
  MR_Word WarningSpecs0_11 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 4))));
  MR_Word FatalErrors1_12 = ((MR_Word) ((MR_hl_field(0, Errors1_4, (MR_Integer) 0))));
  MR_Word FatalErrorSpecs1_13 = ((MR_Word) ((MR_hl_field(0, Errors1_4, (MR_Integer) 1))));
  MR_Word NonFatalErrors1_14 = ((MR_Word) ((MR_hl_field(0, Errors1_4, (MR_Integer) 2))));
  MR_Word NonFatalErrorSpecs1_15 = ((MR_Word) ((MR_hl_field(0, Errors1_4, (MR_Integer) 3))));
  MR_Word WarningSpecs1_16 = ((MR_Word) ((MR_hl_field(0, Errors1_4, (MR_Integer) 4))));
  MR_Word FatalErrors_17;
  MR_Word FatalErrorSpecs_18;
  MR_Word NonFatalErrors_19;
  MR_Word NonFatalErrorSpecs_20;
  MR_Word WarningSpecs_21;
  MR_Word Errors_22;
  MR_String Var_31;
  MR_String Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;

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
  Var_31 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 0))));
  Var_32 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 1))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 2))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 3))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 4))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 6) = ((MR_Box) (Errors_22));
  }
}

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(
  MR_Word ModuleName_5,
  MR_Word FileWhy_6,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11)
{
  MR_Word GrabbedFileMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 5))));
  MR_Word GrabbedFileMap_9;
  MR_String Var_18;
  MR_String Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;

  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (FileWhy_6)), GrabbedFileMap0_8, &GrabbedFileMap_9);
  Var_18 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 0))));
  Var_19 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 1))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 2))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 3))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 4))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (GrabbedFileMap_9));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_24));
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
  MR_Word MaybeTimestampMap_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 4))));

  if ((MaybeTimestampMap_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Baggage_19 = STATE_VARIABLE_Baggage_0_18;
  else
  {
    MR_Word TimestampMap0_13 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampMap_12, (MR_Integer) 0))));

    if ((MaybeTimestamp_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Baggage_19 = STATE_VARIABLE_Baggage_0_18;
    else
    {
      MR_Word Timestamp_14 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_10, (MR_Integer) 0))));
      MR_Word FileKind_15;
      MR_Word TimestampInfo_16;
      MR_Word TimestampMap_17;
      MR_Word Var_21;
      MR_String Var_28;
      MR_String Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_34;

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
      Var_28 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 0))));
      Var_29 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 1))));
      Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 2))));
      Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 3))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 5))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 6))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Baggage_19 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_30));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_31));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_33));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_34));
      }
    }
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
