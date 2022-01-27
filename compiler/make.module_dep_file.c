/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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


/* :- module make.module_dep_file. */
/* :- implementation. */

/*
INIT mercury__make__module_dep_file__init
ENDINIT
*/

#include "make.module_dep_file.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "bytecode_backend.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "lexer.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.md4.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.process_util.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.dependencies.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 387 "make.module_dep_file.m"
struct make__module_dep_file__read_module_dependencies_2_8_p_0_env_0_s {
#line 392 "make.module_dep_file.m"
  MR_bool make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded;
#line 523 "make.module_dep_file.m"
  MR_Word make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__NestedChildren_46;
#line 477 "make.module_dep_file.m"
  MR_Word make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__TypeCtorInfo_248_248;
#line 477 "make.module_dep_file.m"
  MR_Word make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__TypeInfo_249_249;
#line 477 "make.module_dep_file.m"
  MR_Word make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161;
#line 508 "make.module_dep_file.m"
  jmp_buf make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__commit_0;
#line 508 "make.module_dep_file.m"
  MR_Word make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__NestedChild_88;
#line 508 "make.module_dep_file.m"
  MR_Box make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__conv6_NestedChild_88;
#line 387 "make.module_dep_file.m"
};


#line 187 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 190 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 193 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 196 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 199 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 202 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 205 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct2 make__module_dep_file__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 208 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 211 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0;

#line 214 "make.module_dep_file.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 217 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 685 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 685 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 685 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 685 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 685 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 678 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 678 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 678 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 678 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26);

#line 711 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__711__1_6_p_0(
#line 711 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 711 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 711 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 711 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 699 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__699__1_6_p_0(
#line 699 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 699 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 699 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 699 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 685 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_short_interfaces__685__1_5_p_0(
#line 685 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 685 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 685 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_34);

#line 661 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__659__1_7_p_0_1(
#line 661 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 661 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 661 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 661 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 659 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__659__1_7_p_0(
#line 659 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 659 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleImportList_33,
#line 659 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_89,
#line 659 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_90,
#line 659 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_91);

#line 629 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__629__1_3_p_0(
#line 629 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_66,
#line 629 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_67,
#line 629 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_68);

#line 568 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_sym_name_list__568__1_2_p_0(
#line 568 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_9,
#line 568 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_10);

#line 447 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__read_module_dependencies_2__447__1_2_p_0(
#line 447 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_143,
#line 447 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_144);

#line 439 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__read_module_dependencies_2__439__1_2_p_0(
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_136,
#line 439 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_137);

#line 433 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__read_module_dependencies_2__433__1_2_p_0(
#line 433 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_129,
#line 433 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HeadVar__2_130);

#line 313 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file__313__1_3_p_0(
#line 313 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_105);

#line 299 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file__299__1_3_p_0(
#line 299 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_390);

#line 718 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 718 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 718 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2);

#line 711 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 711 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 711 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 711 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 711 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 711 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 711 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 707 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 707 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 707 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 707 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 707 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 699 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 699 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 699 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 699 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 699 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 699 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 699 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 695 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 695 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 695 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 695 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 695 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 678 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 678 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 678 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 678 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26);

#line 659 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 659 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 659 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 659 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 659 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 659 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 659 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 646 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 646 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 646 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 646 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 646 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 646 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 646 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 647 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 647 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 647 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 647 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 647 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 647 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 647 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 647 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 647 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);

#line 629 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 629 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 629 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 629 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 629 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 626 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 626 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 626 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 626 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 574 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 574 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 574 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 574 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_43,
#line 574 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_44);

#line 568 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__parse_sym_name_list_2_p_0_1(
#line 568 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 568 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 568 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 565 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__parse_sym_name_list_2_p_0(
#line 565 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 565 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_5);

#line 552 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 552 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 552 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 552 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8);

#line 544 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_8_p_0_1(
#line 544 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 544 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 544 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 536 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_8_p_0(
#line 536 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 536 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 536 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 536 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_12,
#line 536 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_15,
#line 536 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_16);

#line 503 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 503 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 503 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 503 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 503 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 503 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 503 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 447 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 447 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 447 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 447 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 439 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 439 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 439 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 439 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 433 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 433 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 433 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 433 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 508 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_5(
#line 508 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 508 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_7(
#line 508 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 508 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_6(
#line 508 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 508 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_8(
#line 508 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 387 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 387 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 387 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 387 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 387 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 387 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_91,
#line 387 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_92);

#line 378 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 378 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 378 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 378 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 378 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 378 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14);

#line 368 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 368 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 368 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 368 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 368 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 368 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15);

#line 357 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_to_string_2_p_1(
#line 357 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_3,
#line 357 "make.module_dep_file.m"
  MR_String make__module_dep_file__HasMainStr_4);

#line 356 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 356 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 356 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4);

#line 341 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_1(
#line 341 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_3,
#line 341 "make.module_dep_file.m"
  MR_String make__module_dep_file__ContainsForeignExportStr_4);

#line 340 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 340 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 340 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4);

#line 313 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_8(
#line 313 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 313 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 313 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 313 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 310 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_7(
#line 310 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 310 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 310 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 310 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 299 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_6(
#line 299 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 299 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 299 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 299 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 296 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_5(
#line 296 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 296 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 296 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 296 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 293 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_4(
#line 293 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 293 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 293 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 293 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 290 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_3(
#line 290 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 290 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 290 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 290 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 287 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_2(
#line 287 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 287 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 287 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 287 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 284 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_1(
#line 284 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 284 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 284 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 284 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 265 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 265 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 265 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports_6);

#line 250 "make.module_dep_file.m"
static MR_Integer MR_CALL 
make__module_dep_file__module_dependencies_version_number_0_f_0(void);

#line 139 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
#line 139 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 139 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 139 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 139 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeImports_34,
#line 139 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_35,
#line 139 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_36);

#line 126 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
#line 126 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 126 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 126 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 126 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeImports_12,
#line 126 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
#line 126 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17);

#line 108 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
#line 108 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_1,
#line 108 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
#line 108 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_3,
#line 108 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_4,
#line 108 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_5,
#line 108 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__6_6,
#line 108 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7);

#line 90 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
#line 90 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 90 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 90 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 90 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 90 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 90 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 90 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 90 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[5][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[14][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[2][12];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[5][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[4][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[2][11];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[2][8];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[1][13];

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[1][10];

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[1][7];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[3])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_5[0])),
    ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_5[1])),
    ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_5[2])),
    ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_5[3])),
    ((MR_Box) (make__module_dep_file__parse_sym_name_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[4])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_module_error_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 10000))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "make.util.mh"
#include "make.util.mh"
#include "libs.process_util.mh"
#include "libs.process_util.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1366 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1374 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1382 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1390 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1398 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1406 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1415 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct2 make__module_dep_file__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1424 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__module_dep_file__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1432 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1440 "make.module_dep_file.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1455 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 685 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 685 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 685 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 685 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 685 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 685 "make.module_dep_file.m"
{
#line 685 "make.module_dep_file.m"
  {
#line 685 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 685 "make.module_dep_file.m"
    {
#line 685 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_short_interfaces__685__1_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 685 "make.module_dep_file.m"
      return;
    }
#line 685 "make.module_dep_file.m"
  }
#line 685 "make.module_dep_file.m"
}

#line 678 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 678 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 678 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 678 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26)
#line 678 "make.module_dep_file.m"
{
#line 683 "make.module_dep_file.m"
  {
#line 683 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 683 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OutputStream_19;
#line 683 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__ExitStatus_24;
#line 683 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 685 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_STATE_VARIABLE_IO_31_31;
#line 691 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;

#line 684 "make.module_dep_file.m"
    {
#line 684 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_11, &make__module_dep_file__OutputStream_19);
    }
#line 685 "make.module_dep_file.m"
    {
#line 685 "make.module_dep_file.m"
      make__module_dep_file__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 685 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[1]));
#line 685 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 1) = ((MR_Box) (make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1));
#line 685 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 685 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 3) = ((MR_Box) (make__module_dep_file__SourceFileName_12));
#line 685 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 4) = ((MR_Box) (make__module_dep_file__Globals_14));
#line 685 "make.module_dep_file.m"
    }
#line 685 "make.module_dep_file.m"
    {
#line 685 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &make__module_dep_file_scalar_common_2[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_30_30, make__module_dep_file__SubModuleList_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_STATE_VARIABLE_IO_31_31);
    }
#line 691 "make.module_dep_file.m"
    {
#line 691 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__OutputStream_19, &make__module_dep_file__V_23_23);
    }
#line 692 "make.module_dep_file.m"
    {
#line 692 "make.module_dep_file.m"
      mercury__io__get_exit_status_3_p_0(&make__module_dep_file__ExitStatus_24);
    }
#line 693 "make.module_dep_file.m"
    make__module_dep_file__succeeded = (make__module_dep_file__ExitStatus_24 == (MR_Integer) 0);
#line 693 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 693 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 1;
#line 693 "make.module_dep_file.m"
    else
#line 693 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 0;
#line 693 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_26 = make__module_dep_file__STATE_VARIABLE_Info_0_25;
#line 683 "make.module_dep_file.m"
  }
#line 678 "make.module_dep_file.m"
}

#line 711 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__711__1_6_p_0(
#line 711 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 711 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 711 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 711 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 711 "make.module_dep_file.m"
{
#line 711 "make.module_dep_file.m"
  {
#line 711 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 711 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_29_29;

#line 714 "make.module_dep_file.m"
    {
#line 714 "make.module_dep_file.m"
      make__module_dep_file__V_29_29 = make__make_module_dep_file_extension_0_f_0();
    }
#line 714 "make.module_dep_file.m"
    {
#line 714 "make.module_dep_file.m"
      make__util__make_remove_module_file_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 49, make__module_dep_file__HeadVar__2_23, make__module_dep_file__V_29_29, make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 714 "make.module_dep_file.m"
      return;
    }
#line 711 "make.module_dep_file.m"
  }
#line 711 "make.module_dep_file.m"
}

#line 699 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__699__1_6_p_0(
#line 699 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 699 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 699 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 699 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 699 "make.module_dep_file.m"
{
#line 699 "make.module_dep_file.m"
  {
#line 699 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 702 "make.module_dep_file.m"
    {
#line 702 "make.module_dep_file.m"
      make__util__make_remove_target_file_by_name_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 45, make__module_dep_file__HeadVar__2_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 702 "make.module_dep_file.m"
      return;
    }
#line 699 "make.module_dep_file.m"
  }
#line 699 "make.module_dep_file.m"
}

#line 685 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_short_interfaces__685__1_5_p_0(
#line 685 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 685 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 685 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_34)
#line 685 "make.module_dep_file.m"
{
#line 685 "make.module_dep_file.m"
  {
#line 685 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__3_34, (MR_Integer) 0)));
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleItems_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__3_34, (MR_Integer) 1)));

#line 688 "make.module_dep_file.m"
    {
#line 688 "make.module_dep_file.m"
      parse_tree__modules__make_short_interface_6_p_0(make__module_dep_file__Globals_14, make__module_dep_file__SourceFileName_12, make__module_dep_file__SubModuleName_21, make__module_dep_file__SubModuleItems_22);
#line 688 "make.module_dep_file.m"
      return;
    }
#line 685 "make.module_dep_file.m"
  }
#line 685 "make.module_dep_file.m"
}

#line 661 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__659__1_7_p_0_1(
#line 661 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 661 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 661 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 661 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 661 "make.module_dep_file.m"
{
#line 661 "make.module_dep_file.m"
  {
#line 661 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 661 "make.module_dep_file.m"
    {
#line 661 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 661 "make.module_dep_file.m"
      return;
    }
#line 661 "make.module_dep_file.m"
  }
#line 661 "make.module_dep_file.m"
}

#line 659 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__659__1_7_p_0(
#line 659 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 659 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleImportList_33,
#line 659 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_89,
#line 659 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_90,
#line 659 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_91)
#line 659 "make.module_dep_file.m"
{
#line 659 "make.module_dep_file.m"
  {
#line 659 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 659 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_94_94;
#line 661 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_HeadVar__7_93;

#line 661 "make.module_dep_file.m"
    {
#line 661 "make.module_dep_file.m"
      make__module_dep_file__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 661 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[0]));
#line 661 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 1) = ((MR_Box) (make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__659__1_7_p_0_1));
#line 661 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 661 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 661 "make.module_dep_file.m"
    }
#line 661 "make.module_dep_file.m"
    {
#line 661 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_94_94, make__module_dep_file__ModuleImportList_33, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_HeadVar__7_93);
    }
#line 659 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__3_89 = (MR_Integer) 1;
#line 659 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__5_91 = make__module_dep_file__HeadVar__4_90;
#line 659 "make.module_dep_file.m"
  }
#line 659 "make.module_dep_file.m"
}

#line 629 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__629__1_3_p_0(
#line 629 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_66,
#line 629 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_67,
#line 629 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_68)
#line 629 "make.module_dep_file.m"
{
#line 629 "make.module_dep_file.m"
  {
#line 629 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 629 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 2)));
#line 629 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_69_69;
#line 629 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_70_70;
#line 629 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_71_71;
#line 631 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_190_190 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 0)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 1)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 3)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 4)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 5)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 6)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 7)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 8)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 9)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 10)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 11)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 12)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 13)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 14)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 15)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 16)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 17)));
#line 631 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 18)));
#line 631 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_208_208 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 19)));
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 632 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_225_225;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_241_241;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;
#line 632 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_244_244;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 632 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;

#line 632 "make.module_dep_file.m"
    {
#line 632 "make.module_dep_file.m"
      make__module_dep_file__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_69_69, 0) = ((MR_Box) (make__module_dep_file__HeadVar__1_66));
#line 632 "make.module_dep_file.m"
    }
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 0)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 1)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 2)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 3)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 4)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 5)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 6)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 7)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 8)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 9)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 10)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 11)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 13)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 14)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 15)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 16)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 17)));
#line 632 "make.module_dep_file.m"
    {
#line 632 "make.module_dep_file.m"
      make__module_dep_file__V_71_71 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__SubModuleName_36)), make__module_dep_file__V_70_70, ((MR_Box) (make__module_dep_file__V_69_69)));
    }
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 0)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 1)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 2)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 3)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 4)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 5)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 6)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 7)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 8)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 9)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 10)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 11)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 13)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 14)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 15)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 16)));
#line 632 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 17)));
#line 632 "make.module_dep_file.m"
    {
#line 632 "make.module_dep_file.m"
      MR_Word base;
#line 632 "make.module_dep_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 632 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__3_68 = base;
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_71_71));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_228_228));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_229_229));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_230_230));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_231_231));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_232_232));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_233_233));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_234_234));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_235_235));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_236_236));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_237_237));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_238_238));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((make__module_dep_file__V_239_239 | ((make__module_dep_file__V_240_240 << (MR_Integer) 1)))));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 632 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 632 "make.module_dep_file.m"
    }
#line 629 "make.module_dep_file.m"
  }
#line 629 "make.module_dep_file.m"
}

#line 568 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_sym_name_list__568__1_2_p_0(
#line 568 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_9,
#line 568 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_10)
#line 568 "make.module_dep_file.m"
{
#line 568 "make.module_dep_file.m"
  {
#line 568 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 568 "make.module_dep_file.m"
    {
#line 568 "make.module_dep_file.m"
      return make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, make__module_dep_file__HeadVar__1_9, make__module_dep_file__HeadVar__2_10);
    }
#line 568 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 568 "make.module_dep_file.m"
  }
#line 568 "make.module_dep_file.m"
}

#line 447 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__read_module_dependencies_2__447__1_2_p_0(
#line 447 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_143,
#line 447 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_144)
#line 447 "make.module_dep_file.m"
{
#line 447 "make.module_dep_file.m"
  {
#line 447 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__HeadVar__1_143)) == (MR_mktag((MR_Integer) 0)));
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_244_244;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleTerm_64;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleName_67;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_145_145;
#line 447 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_146_146;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_147_147;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_148_148;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_149_149;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_150_150;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_151_151;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_152_152;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_174;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_175;
#line 447 "make.module_dep_file.m"
    MR_String make__module_dep_file__LanguageString_176;
#line 450 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_65_65;
#line 452 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_66_66;

#line 450 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 450 "make.module_dep_file.m"
      {
#line 450 "make.module_dep_file.m"
        make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_143, (MR_Integer) 0)));
#line 450 "make.module_dep_file.m"
        make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_143, (MR_Integer) 1)));
#line 450 "make.module_dep_file.m"
        make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_143, (MR_Integer) 2)));
#line 450 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_145_145)) == (MR_mktag((MR_Integer) 0)));
#line 450 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 450 "make.module_dep_file.m"
          {
#line 450 "make.module_dep_file.m"
            make__module_dep_file__V_146_146 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_145_145, (MR_Integer) 0)));
#line 450 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp(make__module_dep_file__V_146_146, (MR_String) "-") == 0);
#line 447 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 447 "make.module_dep_file.m"
              {
#line 450 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_147_147)) == (MR_mktag((MR_Integer) 1)));
#line 450 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 450 "make.module_dep_file.m"
                  {
#line 450 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_147_147, (MR_Integer) 0)));
#line 450 "make.module_dep_file.m"
                    make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_147_147, (MR_Integer) 1)));
#line 451 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_148_148)) == (MR_mktag((MR_Integer) 1)));
#line 451 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 451 "make.module_dep_file.m"
                      {
#line 451 "make.module_dep_file.m"
                        make__module_dep_file__ImportedModuleTerm_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_148_148, (MR_Integer) 0)));
#line 451 "make.module_dep_file.m"
                        make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_148_148, (MR_Integer) 1)));
#line 451 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = (make__module_dep_file__V_149_149 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 447 "make.module_dep_file.m"
                          {
#line 452 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_174)) == (MR_mktag((MR_Integer) 0)));
#line 452 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 452 "make.module_dep_file.m"
                              {
#line 452 "make.module_dep_file.m"
                                make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_174, (MR_Integer) 0)));
#line 452 "make.module_dep_file.m"
                                make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_174, (MR_Integer) 1)));
#line 452 "make.module_dep_file.m"
                                make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_174, (MR_Integer) 2)));
#line 452 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_151_151 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 447 "make.module_dep_file.m"
                                  {
#line 452 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_150_150)) == (MR_mktag((MR_Integer) 2)));
#line 452 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 452 "make.module_dep_file.m"
                                      {
#line 452 "make.module_dep_file.m"
                                        make__module_dep_file__LanguageString_176 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_150_150, (MR_Integer) 0)));
#line 454 "make.module_dep_file.m"
                                        {
#line 454 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__LanguageString_176, &make__module_dep_file__Language_175);
                                        }
#line 447 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 447 "make.module_dep_file.m"
                                          {
#line 2194 "make.module_dep_file.c"
                                            make__module_dep_file__TypeCtorInfo_244_244 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 456 "make.module_dep_file.m"
                                            {
#line 456 "make.module_dep_file.m"
                                              make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_244_244, make__module_dep_file__ImportedModuleTerm_64, &make__module_dep_file__ImportedModuleName_67);
                                            }
#line 447 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 447 "make.module_dep_file.m"
                                              {
#line 458 "make.module_dep_file.m"
                                                {
#line 458 "make.module_dep_file.m"
                                                  make__module_dep_file__V_152_152 = mercury__term__context_init_0_f_0();
                                                }
#line 458 "make.module_dep_file.m"
                                                {
#line 458 "make.module_dep_file.m"
                                                  MR_Word base;
#line 458 "make.module_dep_file.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 458 "make.module_dep_file.m"
                                                  *make__module_dep_file__HeadVar__2_144 = base;
#line 458 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_175));
#line 458 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__ImportedModuleName_67));
#line 458 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_152_152));
#line 458 "make.module_dep_file.m"
                                                }
#line 458 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = MR_TRUE;
#line 447 "make.module_dep_file.m"
                                              }
#line 447 "make.module_dep_file.m"
                                          }
#line 452 "make.module_dep_file.m"
                                      }
#line 447 "make.module_dep_file.m"
                                  }
#line 452 "make.module_dep_file.m"
                              }
#line 447 "make.module_dep_file.m"
                          }
#line 451 "make.module_dep_file.m"
                      }
#line 450 "make.module_dep_file.m"
                  }
#line 447 "make.module_dep_file.m"
              }
#line 450 "make.module_dep_file.m"
          }
#line 450 "make.module_dep_file.m"
      }
#line 447 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 447 "make.module_dep_file.m"
  }
#line 447 "make.module_dep_file.m"
}

#line 439 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__read_module_dependencies_2__439__1_2_p_0(
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_136,
#line 439 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_137)
#line 439 "make.module_dep_file.m"
{
#line 439 "make.module_dep_file.m"
  {
#line 439 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__HeadVar__1_136)) == (MR_mktag((MR_Integer) 0)));
#line 439 "make.module_dep_file.m"
    MR_String make__module_dep_file__LanguageString_57;
#line 439 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_138_138;
#line 439 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_139_139;
#line 441 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_58_58;

#line 441 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 441 "make.module_dep_file.m"
      {
#line 441 "make.module_dep_file.m"
        make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_136, (MR_Integer) 0)));
#line 441 "make.module_dep_file.m"
        make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_136, (MR_Integer) 1)));
#line 441 "make.module_dep_file.m"
        make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_136, (MR_Integer) 2)));
#line 441 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_138_138)) == (MR_mktag((MR_Integer) 2)));
#line 441 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 441 "make.module_dep_file.m"
          {
#line 441 "make.module_dep_file.m"
            make__module_dep_file__LanguageString_57 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_138_138, (MR_Integer) 0)));
#line 441 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 443 "make.module_dep_file.m"
              {
#line 443 "make.module_dep_file.m"
                return make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__LanguageString_57, make__module_dep_file__HeadVar__2_137);
              }
#line 441 "make.module_dep_file.m"
          }
#line 441 "make.module_dep_file.m"
      }
#line 439 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 439 "make.module_dep_file.m"
  }
#line 439 "make.module_dep_file.m"
}

#line 433 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__read_module_dependencies_2__433__1_2_p_0(
#line 433 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_129,
#line 433 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HeadVar__2_130)
#line 433 "make.module_dep_file.m"
{
#line 433 "make.module_dep_file.m"
  {
#line 433 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__HeadVar__1_129)) == (MR_mktag((MR_Integer) 0)));
#line 433 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_131_131;
#line 433 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_132_132;
#line 435 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51;

#line 435 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 435 "make.module_dep_file.m"
      {
#line 435 "make.module_dep_file.m"
        make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_129, (MR_Integer) 0)));
#line 435 "make.module_dep_file.m"
        make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_129, (MR_Integer) 1)));
#line 435 "make.module_dep_file.m"
        make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_129, (MR_Integer) 2)));
#line 435 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_131_131)) == (MR_mktag((MR_Integer) 2)));
#line 435 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 435 "make.module_dep_file.m"
          {
#line 435 "make.module_dep_file.m"
            *make__module_dep_file__HeadVar__2_130 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_131_131, (MR_Integer) 0)));
#line 435 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_132_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "make.module_dep_file.m"
          }
#line 435 "make.module_dep_file.m"
      }
#line 433 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 433 "make.module_dep_file.m"
  }
#line 433 "make.module_dep_file.m"
}

#line 313 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file__313__1_3_p_0(
#line 313 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_105)
#line 313 "make.module_dep_file.m"
{
#line 313 "make.module_dep_file.m"
  {
#line 313 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 313 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_105, (MR_Integer) 0)));
#line 313 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImport_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_105, (MR_Integer) 1)));
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_105, (MR_Integer) 2)));

#line 317 "make.module_dep_file.m"
    {
#line 317 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_16);
    }
#line 318 "make.module_dep_file.m"
    {
#line 318 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 319 "make.module_dep_file.m"
    {
#line 319 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__ForeignImport_17);
#line 319 "make.module_dep_file.m"
      return;
    }
#line 313 "make.module_dep_file.m"
  }
#line 313 "make.module_dep_file.m"
}

#line 299 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file__299__1_3_p_0(
#line 299 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_390)
#line 299 "make.module_dep_file.m"
{
#line 299 "make.module_dep_file.m"
  {
#line 299 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 299 "make.module_dep_file.m"
    {
#line 299 "make.module_dep_file.m"
      mercury__io__write_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_dep_file__HeadVar__1_390)));
#line 299 "make.module_dep_file.m"
      return;
    }
#line 299 "make.module_dep_file.m"
  }
#line 299 "make.module_dep_file.m"
}

#line 718 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 718 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 718 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2)
#line 718 "make.module_dep_file.m"
{
#line 721 "make.module_dep_file.m"
  {
#line 721 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 721 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 721 "make.module_dep_file.m"
      {
#line 721 "make.module_dep_file.m"
      }
#line 721 "make.module_dep_file.m"
    else
#line 722 "make.module_dep_file.m"
      {
#line 722 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ImportingModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, (MR_Integer) 0)));

#line 723 "make.module_dep_file.m"
        {
#line 723 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "** Module \140");
        }
#line 724 "make.module_dep_file.m"
        {
#line 724 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ModuleName_1);
        }
#line 725 "make.module_dep_file.m"
        {
#line 725 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\' is imported or included by module \140");
        }
#line 726 "make.module_dep_file.m"
        {
#line 726 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ImportingModuleName_10);
        }
#line 727 "make.module_dep_file.m"
        {
#line 727 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\'.\n");
#line 727 "make.module_dep_file.m"
          return;
        }
#line 722 "make.module_dep_file.m"
      }
#line 721 "make.module_dep_file.m"
  }
#line 718 "make.module_dep_file.m"
}

#line 711 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 711 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 711 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 711 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 711 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 711 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 711 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 711 "make.module_dep_file.m"
{
#line 711 "make.module_dep_file.m"
  {
#line 711 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 711 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 711 "make.module_dep_file.m"
    {
#line 711 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__711__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 711 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 711 "make.module_dep_file.m"
  }
#line 711 "make.module_dep_file.m"
}

#line 707 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 707 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 707 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 707 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 707 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 707 "make.module_dep_file.m"
{
#line 710 "make.module_dep_file.m"
  {
#line 710 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 710 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 711 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 711 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 711 "make.module_dep_file.m"
    {
#line 711 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 711 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 711 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
#line 711 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 711 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 711 "make.module_dep_file.m"
    }
#line 711 "make.module_dep_file.m"
    {
#line 711 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 711 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 710 "make.module_dep_file.m"
  }
#line 707 "make.module_dep_file.m"
}

#line 699 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 699 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 699 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 699 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 699 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 699 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 699 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 699 "make.module_dep_file.m"
{
#line 699 "make.module_dep_file.m"
  {
#line 699 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 699 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 699 "make.module_dep_file.m"
    {
#line 699 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__699__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 699 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 699 "make.module_dep_file.m"
  }
#line 699 "make.module_dep_file.m"
}

#line 695 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 695 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 695 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 695 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 695 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 695 "make.module_dep_file.m"
{
#line 698 "make.module_dep_file.m"
  {
#line 698 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 698 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 699 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 699 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 699 "make.module_dep_file.m"
    {
#line 699 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 699 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 699 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_short_interfaces_6_p_0_1));
#line 699 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 699 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 699 "make.module_dep_file.m"
    }
#line 699 "make.module_dep_file.m"
    {
#line 699 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 699 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 698 "make.module_dep_file.m"
  }
#line 695 "make.module_dep_file.m"
}

#line 678 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 678 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 678 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 678 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26)
#line 678 "make.module_dep_file.m"
{
#line 683 "make.module_dep_file.m"
  {
#line 683 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 683 "make.module_dep_file.m"
    {
#line 683 "make.module_dep_file.m"
      make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(make__module_dep_file__ErrorStream_11, make__module_dep_file__SourceFileName_12, make__module_dep_file__SubModuleList_13, make__module_dep_file__Globals_14, make__module_dep_file__Succeeded_16, make__module_dep_file__STATE_VARIABLE_Info_0_25, make__module_dep_file__STATE_VARIABLE_Info_26);
#line 683 "make.module_dep_file.m"
      return;
    }
#line 683 "make.module_dep_file.m"
  }
#line 678 "make.module_dep_file.m"
}

#line 659 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 659 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 659 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 659 "make.module_dep_file.m"
{
#line 659 "make.module_dep_file.m"
  {
#line 659 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 659 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv11_STATE_VARIABLE_Info_13;

#line 659 "make.module_dep_file.m"
    {
#line 659 "make.module_dep_file.m"
      make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv11_STATE_VARIABLE_Info_13);
    }
#line 659 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv11_STATE_VARIABLE_Info_13));
#line 659 "make.module_dep_file.m"
  }
#line 659 "make.module_dep_file.m"
}

#line 659 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 659 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 659 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 659 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 659 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 659 "make.module_dep_file.m"
{
#line 659 "make.module_dep_file.m"
  {
#line 659 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 659 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv10_HeadVar__3_89;
#line 659 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv9_HeadVar__5_91;

#line 659 "make.module_dep_file.m"
    {
#line 659 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__659__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), &make__module_dep_file__conv10_HeadVar__3_89, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv9_HeadVar__5_91);
    }
#line 659 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv10_HeadVar__3_89));
#line 659 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv9_HeadVar__5_91));
#line 659 "make.module_dep_file.m"
  }
#line 659 "make.module_dep_file.m"
}

#line 646 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 646 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 646 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 646 "make.module_dep_file.m"
{
#line 646 "make.module_dep_file.m"
  {
#line 646 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv7_STATE_VARIABLE_Info_13;

#line 646 "make.module_dep_file.m"
    {
#line 646 "make.module_dep_file.m"
      make__module_dep_file__cleanup_short_interfaces_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv7_STATE_VARIABLE_Info_13);
    }
#line 646 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv7_STATE_VARIABLE_Info_13));
#line 646 "make.module_dep_file.m"
  }
#line 646 "make.module_dep_file.m"
}

#line 646 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 646 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 646 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 646 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 646 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 646 "make.module_dep_file.m"
{
#line 646 "make.module_dep_file.m"
  {
#line 646 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv6_HeadVar__5_5;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv5_HeadVar__7_7;

#line 646 "make.module_dep_file.m"
    {
#line 646 "make.module_dep_file.m"
      make__util__build_with_module_options_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), &make__module_dep_file__conv6_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_HeadVar__7_7);
    }
#line 646 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv6_HeadVar__5_5));
#line 646 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_HeadVar__7_7));
#line 646 "make.module_dep_file.m"
  }
#line 646 "make.module_dep_file.m"
}

#line 647 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 647 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 647 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 647 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 647 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 647 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 647 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 647 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 647 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 647 "make.module_dep_file.m"
{
#line 647 "make.module_dep_file.m"
  {
#line 647 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 647 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv4_Succeeded_16;
#line 647 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv3_STATE_VARIABLE_Info_26;

#line 647 "make.module_dep_file.m"
    {
#line 647 "make.module_dep_file.m"
      make__module_dep_file__make_short_interfaces_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv4_Succeeded_16, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv3_STATE_VARIABLE_Info_26);
    }
#line 647 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv4_Succeeded_16));
#line 647 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv3_STATE_VARIABLE_Info_26));
#line 647 "make.module_dep_file.m"
  }
#line 647 "make.module_dep_file.m"
}

#line 629 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 629 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 629 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 629 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 629 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 629 "make.module_dep_file.m"
{
#line 629 "make.module_dep_file.m"
  {
#line 629 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 629 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_HeadVar__3_68;

#line 629 "make.module_dep_file.m"
    {
#line 629 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__629__1_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv1_HeadVar__3_68);
    }
#line 629 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv1_HeadVar__3_68));
#line 629 "make.module_dep_file.m"
  }
#line 629 "make.module_dep_file.m"
}

#line 626 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 626 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 626 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 626 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 626 "make.module_dep_file.m"
{
#line 626 "make.module_dep_file.m"
  {
#line 626 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 626 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__8_8;

#line 626 "make.module_dep_file.m"
    {
#line 626 "make.module_dep_file.m"
      parse_tree__module_imports__init_dependencies_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 8))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__8_8);
    }
#line 626 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__8_8));
#line 626 "make.module_dep_file.m"
  }
#line 626 "make.module_dep_file.m"
}

#line 574 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 574 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 574 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 574 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_43,
#line 574 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_44)
#line 574 "make.module_dep_file.m"
{
#line 577 "make.module_dep_file.m"
  {
#line 577 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 577 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeErrorStream_11;
#line 577 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_47_47;

#line 578 "make.module_dep_file.m"
    {
#line 578 "make.module_dep_file.m"
      make__util__redirect_output_6_p_0(make__module_dep_file__ModuleName_8, &make__module_dep_file__MaybeErrorStream_11, make__module_dep_file__STATE_VARIABLE_Info_0_43, &make__module_dep_file__STATE_VARIABLE_Info_47_47);
    }
#line 674 "make.module_dep_file.m"
    if ((make__module_dep_file__MaybeErrorStream_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 675 "make.module_dep_file.m"
      *make__module_dep_file__STATE_VARIABLE_Info_44 = make__module_dep_file__STATE_VARIABLE_Info_47_47;
#line 674 "make.module_dep_file.m"
    else
#line 580 "make.module_dep_file.m"
      {
#line 580 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ErrorStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeErrorStream_11, (MR_Integer) 0)));
#line 580 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_13;
#line 580 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Items_14;
#line 580 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Specs0_15;
#line 580 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_16;
#line 580 "make.module_dep_file.m"
        MR_String make__module_dep_file__SourceFileName_17;
#line 583 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_18_18;

#line 581 "make.module_dep_file.m"
        {
#line 581 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__OldOutputStream_13);
        }
#line 583 "make.module_dep_file.m"
        {
#line 583 "make.module_dep_file.m"
          parse_tree__read_modules__read_module_13_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".m", (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 0, &make__module_dep_file__Items_14, &make__module_dep_file__Specs0_15, &make__module_dep_file__Error_16, &make__module_dep_file__SourceFileName_17, &make__module_dep_file__V_18_18);
        }
#line 613 "make.module_dep_file.m"
        if ((make__module_dep_file__Error_16 == (MR_Integer) 2))
#line 588 "make.module_dep_file.m"
          {
#line 588 "make.module_dep_file.m"
            MR_Word make__module_dep_file__UnredirectGlobals_23;
#line 588 "make.module_dep_file.m"
            MR_String make__module_dep_file__ErrFileName_24;
#line 588 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap0_26;
#line 588 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap_27;
#line 588 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 588 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_117_117;
#line 589 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_19_19;
#line 590 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_20;
#line 590 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_21;
#line 592 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_22_22;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_135_135;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_136_136;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_137_137;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_138_138;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_139_139;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_140_140;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_141_141;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_142_142;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_143_143;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_144_144;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_145_145;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_146_146;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_147_147;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_148_148;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_149_149;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_150_150;
#line 596 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_151_151;
#line 596 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_152_152;
#line 608 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_25_25;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_153_153;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_154_154;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_155_155;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_156_156;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_157_157;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_158_158;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_159_159;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_160_160;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_161_161;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_162_162;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_163_163;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_164_164;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_165_165;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_166_166;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_167_167;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_168_168;
#line 609 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_169_169;
#line 609 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_170_170;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_172_172;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_173_173;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_174_174;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_175_175;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_176_176;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_177_177;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_178_178;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_179_179;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_180_180;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_181_181;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_182_182;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_183_183;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_184_184;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_185_185;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_186_186;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_187_187;
#line 612 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_188_188;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_189_189;
#line 612 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_171_171;

#line 589 "make.module_dep_file.m"
            {
#line 589 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_19_19);
            }
#line 590 "make.module_dep_file.m"
            {
#line 590 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs0_15, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_20, (MR_Integer) 0, &make__module_dep_file___NumErrors_21);
            }
#line 592 "make.module_dep_file.m"
            {
#line 592 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_22_22);
            }
#line 593 "make.module_dep_file.m"
            {
#line 593 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "** Error: error reading file \140");
            }
#line 594 "make.module_dep_file.m"
            {
#line 594 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName_17);
            }
#line 595 "make.module_dep_file.m"
            {
#line 595 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
            }
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 0)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 1)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 2)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 3)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 4)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 5)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 6)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 7)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 8)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 9)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 10)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 11)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_147_147 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 13)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 14)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 15)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 16)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 17)));
#line 596 "make.module_dep_file.m"
            {
#line 596 "make.module_dep_file.m"
              make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__V_112_112);
            }
#line 602 "make.module_dep_file.m"
            {
#line 602 "make.module_dep_file.m"
              libs__globals__set_option_4_p_0((MR_Integer) 51, (MR_Word) MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_8[0]), make__module_dep_file__Globals_7, &make__module_dep_file__UnredirectGlobals_23);
            }
#line 604 "make.module_dep_file.m"
            {
#line 604 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__UnredirectGlobals_23, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_47_47, &make__module_dep_file__STATE_VARIABLE_Info_117_117);
            }
#line 606 "make.module_dep_file.m"
            {
#line 606 "make.module_dep_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".err", (MR_Integer) 1, &make__module_dep_file__ErrFileName_24);
            }
#line 608 "make.module_dep_file.m"
            {
#line 608 "make.module_dep_file.m"
              mercury__io__remove_file_4_p_0(make__module_dep_file__ErrFileName_24, &make__module_dep_file__V_25_25);
            }
#line 609 "make.module_dep_file.m"
            make__module_dep_file__ModuleDepMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 0)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 1)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 2)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 3)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 4)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 5)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 6)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 7)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 8)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 9)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 10)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 11)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_164_164 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 13)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 14)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 15)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_169_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 16)));
#line 609 "make.module_dep_file.m"
            make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 17)));
#line 611 "make.module_dep_file.m"
            {
#line 611 "make.module_dep_file.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_8)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_26, &make__module_dep_file__ModuleDepMap_27);
            }
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 0)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 1)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 2)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 3)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 4)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 5)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 6)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 7)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 8)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 9)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 10)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 11)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_183_183 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 13)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 14)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 15)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 16)));
#line 612 "make.module_dep_file.m"
            make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 17)));
#line 612 "make.module_dep_file.m"
            {
#line 612 "make.module_dep_file.m"
              MR_Word base;
#line 612 "make.module_dep_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 612 "make.module_dep_file.m"
              *make__module_dep_file__STATE_VARIABLE_Info_44 = base;
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_27));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_172_172));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_173_173));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_174_174));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_175_175));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_176_176));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_177_177));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_178_178));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_179_179));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_180_180));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_181_181));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_182_182));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((make__module_dep_file__V_183_183 | ((make__module_dep_file__V_184_184 << (MR_Integer) 1)))));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_185_185));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_186_186));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_187_187));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_188_188));
#line 612 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_189_189));
#line 612 "make.module_dep_file.m"
            }
#line 588 "make.module_dep_file.m"
          }
#line 613 "make.module_dep_file.m"
        else
#line 616 "make.module_dep_file.m"
          {
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_253_253;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_256_256;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SubModuleList_29;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Specs_30;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SubModuleNames_32;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleImportList_33;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__VeryVerbose_37;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Succeeded_39;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__MadeTarget_42;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_62_62;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_65_65;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_77_77;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_83_83;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_84_84;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_85_85;
#line 616 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_97_97;
#line 617 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_28_28;
#line 621 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_125;
#line 621 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_126;
#line 623 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_31_31;
#line 629 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_65_65;
#line 659 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_41_41;
#line 659 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv12_STATE_VARIABLE_Info_85_85;

#line 617 "make.module_dep_file.m"
            {
#line 617 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_28_28);
            }
#line 618 "make.module_dep_file.m"
            {
#line 618 "make.module_dep_file.m"
              parse_tree__modules__split_into_submodules_5_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__Items_14, &make__module_dep_file__SubModuleList_29, make__module_dep_file__Specs0_15, &make__module_dep_file__Specs_30);
            }
#line 620 "make.module_dep_file.m"
            {
#line 620 "make.module_dep_file.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
            }
#line 621 "make.module_dep_file.m"
            {
#line 621 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs_30, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_125, (MR_Integer) 0, &make__module_dep_file___NumErrors_126);
            }
#line 623 "make.module_dep_file.m"
            {
#line 623 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_31_31);
            }
#line 625 "make.module_dep_file.m"
            {
#line 625 "make.module_dep_file.m"
              mercury__assoc_list__keys_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[2], make__module_dep_file__SubModuleList_29, &make__module_dep_file__SubModuleNames_32);
            }
#line 626 "make.module_dep_file.m"
            {
#line 626 "make.module_dep_file.m"
              make__module_dep_file__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[1]));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_1));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 3) = ((MR_Box) (make__module_dep_file__SourceFileName_17));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 5) = ((MR_Box) (make__module_dep_file__SubModuleNames_32));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 7) = ((MR_Box) (make__module_dep_file__Error_16));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 8) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 626 "make.module_dep_file.m"
            }
#line 3481 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_253_253 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 626 "make.module_dep_file.m"
            {
#line 626 "make.module_dep_file.m"
              mercury__list__map_3_p_0((MR_Word) &make__module_dep_file_scalar_common_2[0], make__module_dep_file__TypeCtorInfo_253_253, make__module_dep_file__V_62_62, make__module_dep_file__SubModuleList_29, &make__module_dep_file__ModuleImportList_33);
            }
#line 3488 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_256_256 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 629 "make.module_dep_file.m"
            {
#line 629 "make.module_dep_file.m"
              mercury__list__foldl_4_p_0(make__module_dep_file__TypeCtorInfo_253_253, make__module_dep_file__TypeCtorInfo_256_256, (MR_Word) &make__module_dep_file_scalar_common_2[13], make__module_dep_file__ModuleImportList_33, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_47_47)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_65_65);
            }
#line 629 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_65_65 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_65_65);
#line 639 "make.module_dep_file.m"
            {
#line 639 "make.module_dep_file.m"
              libs__globals__lookup_bool_option_3_p_0(make__module_dep_file__Globals_7, (MR_Integer) 45, &make__module_dep_file__VeryVerbose_37);
            }
#line 654 "make.module_dep_file.m"
            if ((make__module_dep_file__Error_16 == (MR_Integer) 0))
#line 641 "make.module_dep_file.m"
              {
#line 641 "make.module_dep_file.m"
                MR_Word make__module_dep_file__Target_38;
#line 641 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_75_75;
#line 641 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_76_76;
#line 641 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_82_82;
#line 646 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv8_STATE_VARIABLE_Info_77_77;

#line 642 "make.module_dep_file.m"
                {
#line 642 "make.module_dep_file.m"
                  make__module_dep_file__Target_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_38, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 642 "make.module_dep_file.m"
                }
#line 644 "make.module_dep_file.m"
                {
#line 644 "make.module_dep_file.m"
                  make__util__maybe_make_target_message_to_stream_5_p_0(make__module_dep_file__Globals_7, make__module_dep_file__OldOutputStream_13, make__module_dep_file__Target_38);
                }
#line 647 "make.module_dep_file.m"
                {
#line 647 "make.module_dep_file.m"
                  make__module_dep_file__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 647 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
#line 647 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_3));
#line 647 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 647 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 3) = ((MR_Box) (make__module_dep_file__ErrorStream_12));
#line 647 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_17));
#line 647 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 5) = ((MR_Box) (make__module_dep_file__SubModuleList_29));
#line 647 "make.module_dep_file.m"
                }
#line 646 "make.module_dep_file.m"
                {
#line 646 "make.module_dep_file.m"
                  make__module_dep_file__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[1]));
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[4])));
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 6) = ((MR_Box) (make__module_dep_file__V_82_82));
#line 646 "make.module_dep_file.m"
                }
#line 646 "make.module_dep_file.m"
                {
#line 646 "make.module_dep_file.m"
                  make__module_dep_file__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_76_76, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_76_76, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_76_76, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 646 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_76_76, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_32));
#line 646 "make.module_dep_file.m"
                }
#line 646 "make.module_dep_file.m"
                {
#line 646 "make.module_dep_file.m"
                  libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_256_256, make__module_dep_file__VeryVerbose_37, make__module_dep_file__V_75_75, make__module_dep_file__V_76_76, &make__module_dep_file__Succeeded_39, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_65_65)), &make__module_dep_file__conv8_STATE_VARIABLE_Info_77_77);
                }
#line 646 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_77_77 = ((MR_Word) make__module_dep_file__conv8_STATE_VARIABLE_Info_77_77);
#line 641 "make.module_dep_file.m"
              }
#line 654 "make.module_dep_file.m"
            else
#line 655 "make.module_dep_file.m"
              {
#line 656 "make.module_dep_file.m"
                make__module_dep_file__Succeeded_39 = (MR_Integer) 0;
#line 656 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_77_77 = make__module_dep_file__STATE_VARIABLE_Info_65_65;
#line 655 "make.module_dep_file.m"
              }
#line 659 "make.module_dep_file.m"
            {
#line 659 "make.module_dep_file.m"
              make__module_dep_file__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 659 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_83_83, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
#line 659 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_83_83, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
#line 659 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 659 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_83_83, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 659 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_83_83, 4) = ((MR_Box) (make__module_dep_file__ModuleImportList_33));
#line 659 "make.module_dep_file.m"
            }
#line 659 "make.module_dep_file.m"
            {
#line 659 "make.module_dep_file.m"
              make__module_dep_file__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 659 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 659 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_7));
#line 659 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 659 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 659 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_32));
#line 659 "make.module_dep_file.m"
            }
#line 659 "make.module_dep_file.m"
            {
#line 659 "make.module_dep_file.m"
              libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_256_256, make__module_dep_file__VeryVerbose_37, make__module_dep_file__V_83_83, make__module_dep_file__V_84_84, &make__module_dep_file__V_41_41, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_77_77)), &make__module_dep_file__conv12_STATE_VARIABLE_Info_85_85);
            }
#line 659 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_85_85 = ((MR_Word) make__module_dep_file__conv12_STATE_VARIABLE_Info_85_85);
#line 667 "make.module_dep_file.m"
            {
#line 667 "make.module_dep_file.m"
              make__module_dep_file__MadeTarget_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_42, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 667 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 667 "make.module_dep_file.m"
            }
#line 669 "make.module_dep_file.m"
            {
#line 669 "make.module_dep_file.m"
              make__module_target__record_made_target_8_p_0(make__module_dep_file__Globals_7, make__module_dep_file__MadeTarget_42, (MR_Word) &make__module_dep_file_scalar_common_8[1], make__module_dep_file__Succeeded_39, make__module_dep_file__STATE_VARIABLE_Info_85_85, &make__module_dep_file__STATE_VARIABLE_Info_97_97);
            }
#line 672 "make.module_dep_file.m"
            {
#line 672 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_97_97, make__module_dep_file__STATE_VARIABLE_Info_44);
#line 672 "make.module_dep_file.m"
              return;
            }
#line 616 "make.module_dep_file.m"
          }
#line 580 "make.module_dep_file.m"
      }
#line 577 "make.module_dep_file.m"
  }
#line 574 "make.module_dep_file.m"
}

#line 568 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__parse_sym_name_list_2_p_0_1(
#line 568 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 568 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 568 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 568 "make.module_dep_file.m"
{
#line 568 "make.module_dep_file.m"
  {
#line 568 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 568 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 568 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__2_10;

#line 568 "make.module_dep_file.m"
    {
#line 568 "make.module_dep_file.m"
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__parse_sym_name_list__568__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__2_10);
    }
#line 568 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 568 "make.module_dep_file.m"
      {
#line 568 "make.module_dep_file.m"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_10));
#line 568 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 568 "make.module_dep_file.m"
      }
#line 568 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 568 "make.module_dep_file.m"
  }
#line 568 "make.module_dep_file.m"
}

#line 565 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__parse_sym_name_list_2_p_0(
#line 565 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 565 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_5)
#line 565 "make.module_dep_file.m"
{
#line 567 "make.module_dep_file.m"
  {
#line 567 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 567 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_12_12;
#line 567 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_13_13;
#line 567 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Args_3;
#line 567 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;
#line 567 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_7_7;
#line 567 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 567 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_4_4;

#line 567 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 567 "make.module_dep_file.m"
      {
#line 567 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_1, (MR_Integer) 0)));
#line 567 "make.module_dep_file.m"
        make__module_dep_file__Args_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_1, (MR_Integer) 1)));
#line 567 "make.module_dep_file.m"
        make__module_dep_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_1, (MR_Integer) 2)));
#line 567 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_6_6)) == (MR_mktag((MR_Integer) 0)));
#line 567 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 567 "make.module_dep_file.m"
          {
#line 567 "make.module_dep_file.m"
            make__module_dep_file__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_6_6, (MR_Integer) 0)));
#line 567 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp(make__module_dep_file__V_7_7, (MR_String) "{}") == 0);
#line 567 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 567 "make.module_dep_file.m"
              {
#line 568 "make.module_dep_file.m"
                make__module_dep_file__V_8_8 = (MR_Word) &make__module_dep_file_scalar_common_2[12];
#line 3771 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_12_12 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 3773 "make.module_dep_file.c"
                make__module_dep_file__TypeCtorInfo_13_13 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 568 "make.module_dep_file.m"
                {
#line 568 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_12_12, make__module_dep_file__TypeCtorInfo_13_13, make__module_dep_file__V_8_8, make__module_dep_file__Args_3, make__module_dep_file__SymNames_5);
                }
#line 567 "make.module_dep_file.m"
              }
#line 567 "make.module_dep_file.m"
          }
#line 567 "make.module_dep_file.m"
      }
#line 567 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 567 "make.module_dep_file.m"
  }
#line 565 "make.module_dep_file.m"
}

#line 552 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 552 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 552 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 552 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8)
#line 552 "make.module_dep_file.m"
{
#line 555 "make.module_dep_file.m"
  {
#line 555 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 555 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepsFile_10;
#line 555 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;

#line 556 "make.module_dep_file.m"
    {
#line 556 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = make__make_module_dep_file_extension_0_f_0();
    }
#line 556 "make.module_dep_file.m"
    {
#line 556 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_6, make__module_dep_file__ModuleName_7, make__module_dep_file__V_13_13, (MR_Integer) 1, &make__module_dep_file__ModuleDepsFile_10);
    }
#line 559 "make.module_dep_file.m"
    {
#line 559 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "Error reading file \140");
    }
#line 560 "make.module_dep_file.m"
    {
#line 560 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ModuleDepsFile_10);
    }
#line 561 "make.module_dep_file.m"
    {
#line 561 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\', rebuilding: ");
    }
#line 562 "make.module_dep_file.m"
    {
#line 562 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__Msg_8);
    }
#line 563 "make.module_dep_file.m"
    {
#line 563 "make.module_dep_file.m"
      mercury__io__nl_2_p_0();
#line 563 "make.module_dep_file.m"
      return;
    }
#line 555 "make.module_dep_file.m"
  }
#line 552 "make.module_dep_file.m"
}

#line 544 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_8_p_0_1(
#line 544 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 544 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 544 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 544 "make.module_dep_file.m"
{
#line 544 "make.module_dep_file.m"
  {
#line 544 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 544 "make.module_dep_file.m"
    {
#line 544 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 544 "make.module_dep_file.m"
      return;
    }
#line 544 "make.module_dep_file.m"
  }
#line 544 "make.module_dep_file.m"
}

#line 536 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_8_p_0(
#line 536 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 536 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 536 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 536 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_12,
#line 536 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_15,
#line 536 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_16)
#line 536 "make.module_dep_file.m"
{
#line 543 "make.module_dep_file.m"
  {
#line 543 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 543 "make.module_dep_file.m"
    if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 549 "make.module_dep_file.m"
      *make__module_dep_file__STATE_VARIABLE_Info_16 = make__module_dep_file__STATE_VARIABLE_Info_0_15;
#line 543 "make.module_dep_file.m"
    else
#line 543 "make.module_dep_file.m"
      {
#line 543 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_19_19;

#line 544 "make.module_dep_file.m"
        {
#line 544 "make.module_dep_file.m"
          make__module_dep_file__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_19_19, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[0]));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_19_19, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_remake_8_p_0_1));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_19_19, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_19_19, 4) = ((MR_Box) (make__module_dep_file__ModuleName_11));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_19_19, 5) = ((MR_Box) (make__module_dep_file__Msg_12));
#line 544 "make.module_dep_file.m"
        }
#line 544 "make.module_dep_file.m"
        {
#line 544 "make.module_dep_file.m"
          make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_19_19);
        }
#line 547 "make.module_dep_file.m"
        {
#line 547 "make.module_dep_file.m"
          make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_0_15, make__module_dep_file__STATE_VARIABLE_Info_16);
#line 547 "make.module_dep_file.m"
          return;
        }
#line 543 "make.module_dep_file.m"
      }
#line 543 "make.module_dep_file.m"
  }
#line 536 "make.module_dep_file.m"
}

#line 503 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 503 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 503 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 503 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 503 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 503 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 503 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 503 "make.module_dep_file.m"
{
#line 503 "make.module_dep_file.m"
  {
#line 503 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 503 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv3_STATE_VARIABLE_Info_92;

#line 503 "make.module_dep_file.m"
    {
#line 503 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv3_STATE_VARIABLE_Info_92);
    }
#line 503 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv3_STATE_VARIABLE_Info_92));
#line 503 "make.module_dep_file.m"
  }
#line 503 "make.module_dep_file.m"
}

#line 447 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 447 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 447 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 447 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 447 "make.module_dep_file.m"
{
#line 447 "make.module_dep_file.m"
  {
#line 447 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 447 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 447 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_HeadVar__2_144;

#line 447 "make.module_dep_file.m"
    {
#line 447 "make.module_dep_file.m"
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__read_module_dependencies_2__447__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv2_HeadVar__2_144);
    }
#line 447 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 447 "make.module_dep_file.m"
      {
#line 447 "make.module_dep_file.m"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv2_HeadVar__2_144));
#line 447 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 447 "make.module_dep_file.m"
      }
#line 447 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 447 "make.module_dep_file.m"
  }
#line 447 "make.module_dep_file.m"
}

#line 439 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 439 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 439 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 439 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 439 "make.module_dep_file.m"
{
#line 439 "make.module_dep_file.m"
  {
#line 439 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 439 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 439 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_HeadVar__2_137;

#line 439 "make.module_dep_file.m"
    {
#line 439 "make.module_dep_file.m"
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__read_module_dependencies_2__439__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv1_HeadVar__2_137);
    }
#line 439 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 439 "make.module_dep_file.m"
      {
#line 439 "make.module_dep_file.m"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv1_HeadVar__2_137));
#line 439 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 439 "make.module_dep_file.m"
      }
#line 439 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 439 "make.module_dep_file.m"
  }
#line 439 "make.module_dep_file.m"
}

#line 433 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 433 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 433 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 433 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 433 "make.module_dep_file.m"
{
#line 433 "make.module_dep_file.m"
  {
#line 433 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 433 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 433 "make.module_dep_file.m"
    MR_String make__module_dep_file__conv0_HeadVar__2_130;

#line 433 "make.module_dep_file.m"
    {
#line 433 "make.module_dep_file.m"
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__read_module_dependencies_2__433__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__2_130);
    }
#line 433 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 433 "make.module_dep_file.m"
      {
#line 433 "make.module_dep_file.m"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_130));
#line 433 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 433 "make.module_dep_file.m"
      }
#line 433 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 433 "make.module_dep_file.m"
  }
#line 433 "make.module_dep_file.m"
}

#line 508 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_5(
#line 508 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 508 "make.module_dep_file.m"
{
#line 508 "make.module_dep_file.m"
  {
#line 508 "make.module_dep_file.m"
    struct make__module_dep_file__read_module_dependencies_2_8_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__read_module_dependencies_2_8_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 508 "make.module_dep_file.m"
    MR_builtin_longjmp((make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__commit_0, 1);
#line 508 "make.module_dep_file.m"
  }
#line 508 "make.module_dep_file.m"
}

#line 508 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_7(
#line 508 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 508 "make.module_dep_file.m"
{
#line 508 "make.module_dep_file.m"
  {
#line 508 "make.module_dep_file.m"
    struct make__module_dep_file__read_module_dependencies_2_8_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__read_module_dependencies_2_8_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 508 "make.module_dep_file.m"
    (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__NestedChild_88 = ((MR_Word) (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__conv6_NestedChild_88);
#line 508 "make.module_dep_file.m"
    {
#line 508 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0_6(make__module_dep_file__env_ptr);
#line 508 "make.module_dep_file.m"
      return;
    }
#line 508 "make.module_dep_file.m"
  }
#line 508 "make.module_dep_file.m"
}

#line 508 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_6(
#line 508 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 508 "make.module_dep_file.m"
{
#line 508 "make.module_dep_file.m"
  {
#line 508 "make.module_dep_file.m"
    struct make__module_dep_file__read_module_dependencies_2_8_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__read_module_dependencies_2_8_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 508 "make.module_dep_file.m"
    {
#line 514 "make.module_dep_file.m"
      MR_Word make__module_dep_file__ChildImports_89;
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 0)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 1)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 2)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 3)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 4)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 5)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 6)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 7)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 8)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 9)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 10)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 11)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_233_233 = ((((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_234_234 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 13)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 14)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 15)));
#line 510 "make.module_dep_file.m"
      MR_Integer make__module_dep_file__V_238_238 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 16)));
#line 510 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, (MR_Integer) 17)));
#line 510 "make.module_dep_file.m"
      MR_Box make__module_dep_file__conv7_ChildImports_89;

#line 510 "make.module_dep_file.m"
      {
#line 510 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = mercury__map__search_3_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__TypeCtorInfo_248_248, (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__TypeInfo_249_249, make__module_dep_file__V_163_163, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__NestedChild_88)), &make__module_dep_file__conv7_ChildImports_89);
      }
#line 510 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 510 "make.module_dep_file.m"
        {
#line 510 "make.module_dep_file.m"
          make__module_dep_file__ChildImports_89 = ((MR_Word) make__module_dep_file__conv7_ChildImports_89);
#line 510 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = MR_TRUE;
#line 510 "make.module_dep_file.m"
        }
#line 514 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 513 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (make__module_dep_file__ChildImports_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 514 "make.module_dep_file.m"
      else
#line 515 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = MR_TRUE;
#line 514 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 514 "make.module_dep_file.m"
        {
#line 514 "make.module_dep_file.m"
          make__module_dep_file__read_module_dependencies_2_8_p_0_5(make__module_dep_file__env_ptr);
#line 514 "make.module_dep_file.m"
          return;
        }
#line 508 "make.module_dep_file.m"
    }
#line 508 "make.module_dep_file.m"
  }
#line 508 "make.module_dep_file.m"
}

#line 508 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_8(
#line 508 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 508 "make.module_dep_file.m"
{
#line 508 "make.module_dep_file.m"
  {
#line 508 "make.module_dep_file.m"
    struct make__module_dep_file__read_module_dependencies_2_8_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__read_module_dependencies_2_8_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 508 "make.module_dep_file.m"
    if (MR_builtin_setjmp((make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__commit_0) == 0)
#line 508 "make.module_dep_file.m"
      {
#line 508 "make.module_dep_file.m"
        {
#line 508 "make.module_dep_file.m"
          mercury__list__member_2_p_1((make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__TypeCtorInfo_248_248, &(make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__conv6_NestedChild_88, (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__NestedChildren_46, make__module_dep_file__read_module_dependencies_2_8_p_0_7, make__module_dep_file__env_ptr);
        }
#line 508 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = MR_FALSE;
#line 508 "make.module_dep_file.m"
      }
#line 508 "make.module_dep_file.m"
    else
#line 508 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = MR_TRUE;
#line 508 "make.module_dep_file.m"
  }
#line 508 "make.module_dep_file.m"
}

#line 387 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 387 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 387 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 387 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 387 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 387 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_91,
#line 387 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_92)
#line 387 "make.module_dep_file.m"
{
#line 387 "make.module_dep_file.m"
  {
#line 387 "make.module_dep_file.m"
    struct make__module_dep_file__read_module_dependencies_2_8_p_0_env_0_s make__module_dep_file__env;

#line 392 "make.module_dep_file.m"
    {
#line 392 "make.module_dep_file.m"
      MR_String make__module_dep_file__ModuleDepFile_15;
#line 392 "make.module_dep_file.m"
      MR_Word make__module_dep_file__OldInputStream_16;
#line 392 "make.module_dep_file.m"
      MR_Word make__module_dep_file__SearchResult_17;
#line 392 "make.module_dep_file.m"
      MR_String make__module_dep_file__V_95_95;

#line 393 "make.module_dep_file.m"
      {
#line 393 "make.module_dep_file.m"
        make__module_dep_file__V_95_95 = make__make_module_dep_file_extension_0_f_0();
      }
#line 393 "make.module_dep_file.m"
      {
#line 393 "make.module_dep_file.m"
        parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__V_95_95, &make__module_dep_file__ModuleDepFile_15);
      }
#line 395 "make.module_dep_file.m"
      {
#line 395 "make.module_dep_file.m"
        mercury__io__input_stream_3_p_0(&make__module_dep_file__OldInputStream_16);
      }
#line 396 "make.module_dep_file.m"
      {
#line 396 "make.module_dep_file.m"
        libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 0, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleDepFile_15, &make__module_dep_file__SearchResult_17);
      }
#line 527 "make.module_dep_file.m"
      if (((MR_tag((MR_Word) make__module_dep_file__SearchResult_17)) == (MR_mktag((MR_Integer) 1))))
#line 528 "make.module_dep_file.m"
        {
#line 530 "make.module_dep_file.m"
          {
#line 530 "make.module_dep_file.m"
            make__module_dep_file__read_module_dependencies_remake_8_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_12, (MR_String) "couldn\'t find \140.module_dep\' file", make__module_dep_file__STATE_VARIABLE_Info_0_91, make__module_dep_file__STATE_VARIABLE_Info_92);
#line 530 "make.module_dep_file.m"
            return;
          }
#line 528 "make.module_dep_file.m"
        }
#line 527 "make.module_dep_file.m"
      else
#line 399 "make.module_dep_file.m"
        {
#line 399 "make.module_dep_file.m"
          MR_Word make__module_dep_file__TypeCtorInfo_240_240 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 399 "make.module_dep_file.m"
          MR_String make__module_dep_file__ModuleDir_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__SearchResult_17, (MR_Integer) 0)));
#line 399 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ImportsTermResult_19;
#line 399 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ModuleDepStream_20;
#line 523 "make.module_dep_file.m"
          MR_String make__module_dep_file__SourceFileName_39;
#line 523 "make.module_dep_file.m"
          MR_Word make__module_dep_file__SourceFileModuleName_41;
#line 523 "make.module_dep_file.m"
          MR_Word make__module_dep_file__Parents_42;
#line 523 "make.module_dep_file.m"
          MR_Word make__module_dep_file__IntDeps_43;
#line 523 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ImplDeps_44;
#line 523 "make.module_dep_file.m"
          MR_Word make__module_dep_file__Children_45;
#line 523 "make.module_dep_file.m"
          MR_Word make__module_dep_file__FactDeps_52;
#line 523 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ForeignLanguages_59;
#line 523 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ForeignImports_68;
#line 523 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ContainsForeignExport_71;
#line 523 "make.module_dep_file.m"
          MR_Word make__module_dep_file__HasMain_74;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__TypeInfo_241_241;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__TypeCtorInfo_242_242;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__TypeCtorInfo_243_243;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__TypeCtorInfo_245_245;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ImportsTerm_22;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ModuleArgs_23;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__VersionNumberTerm_25;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__SourceFileTerm_26;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__SourceFileModuleNameTerm_27;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ParentsTerm_28;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__IntDepsTerm_29;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ImplDepsTerm_30;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ChildrenTerm_31;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__NestedChildrenTerm_32;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__FactDepsTerm_33;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ForeignLanguagesTerm_34;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ForeignImportsTerm_35;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ContainsForeignExportTerm_36;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__HasMainTerm_37;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__FactDepsStrings_47;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ForeignLanguagesTerms_53;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ForeignImportTerms_60;
#line 404 "make.module_dep_file.m"
          MR_String make__module_dep_file__ContainsForeignExportStr_69;
#line 404 "make.module_dep_file.m"
          MR_String make__module_dep_file__HasMainStr_72;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_106_106;
#line 404 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_107_107;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_108_108;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_109_109;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_110_110;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_111_111;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_112_112;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_113_113;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_114_114;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_115_115;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_116_116;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_117_117;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_118_118;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_119_119;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_120_120;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_121_121;
#line 404 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_122_122;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_123_123;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_124_124;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_125_125;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_126_126;
#line 404 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_127_127;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_128_128;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_133_133;
#line 404 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_134_134;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_135_135;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_140_140;
#line 404 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_141_141;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_142_142;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_153_153;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_154_154;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_155_155;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_156_156;
#line 404 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_257_257;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_21_21;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_24_24;
#line 421 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_38_38;
#line 423 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_40_40;
#line 432 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_48_48;
#line 437 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_54_54;
#line 445 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_61_61;
#line 462 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_70_70;
#line 467 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_73_73;

#line 400 "make.module_dep_file.m"
          {
#line 400 "make.module_dep_file.m"
            mercury__parser__read_term_3_p_0(make__module_dep_file__TypeCtorInfo_240_240, &make__module_dep_file__ImportsTermResult_19);
          }
#line 401 "make.module_dep_file.m"
          {
#line 401 "make.module_dep_file.m"
            mercury__io__set_input_stream_4_p_0(make__module_dep_file__OldInputStream_16, &make__module_dep_file__ModuleDepStream_20);
          }
#line 402 "make.module_dep_file.m"
          {
#line 402 "make.module_dep_file.m"
            mercury__io__close_input_3_p_0(make__module_dep_file__ModuleDepStream_20);
          }
#line 404 "make.module_dep_file.m"
          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ImportsTermResult_19)) == (MR_mktag((MR_Integer) 2)));
#line 404 "make.module_dep_file.m"
          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
            {
#line 404 "make.module_dep_file.m"
              make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__ImportsTermResult_19, (MR_Integer) 0)));
#line 404 "make.module_dep_file.m"
              make__module_dep_file__ImportsTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__ImportsTermResult_19, (MR_Integer) 1)));
#line 405 "make.module_dep_file.m"
              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ImportsTerm_22)) == (MR_mktag((MR_Integer) 0)));
#line 405 "make.module_dep_file.m"
              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 405 "make.module_dep_file.m"
                {
#line 405 "make.module_dep_file.m"
                  make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ImportsTerm_22, (MR_Integer) 0)));
#line 405 "make.module_dep_file.m"
                  make__module_dep_file__ModuleArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ImportsTerm_22, (MR_Integer) 1)));
#line 405 "make.module_dep_file.m"
                  make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ImportsTerm_22, (MR_Integer) 2)));
#line 405 "make.module_dep_file.m"
                  (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_106_106)) == (MR_mktag((MR_Integer) 0)));
#line 405 "make.module_dep_file.m"
                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 405 "make.module_dep_file.m"
                    {
#line 405 "make.module_dep_file.m"
                      make__module_dep_file__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, (MR_Integer) 0)));
#line 405 "make.module_dep_file.m"
                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (strcmp(make__module_dep_file__V_107_107, (MR_String) "module") == 0);
#line 404 "make.module_dep_file.m"
                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                        {
#line 406 "make.module_dep_file.m"
                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ModuleArgs_23)) == (MR_mktag((MR_Integer) 1)));
#line 406 "make.module_dep_file.m"
                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 406 "make.module_dep_file.m"
                            {
#line 406 "make.module_dep_file.m"
                              make__module_dep_file__VersionNumberTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_23, (MR_Integer) 0)));
#line 406 "make.module_dep_file.m"
                              make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_23, (MR_Integer) 1)));
#line 407 "make.module_dep_file.m"
                              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_108_108)) == (MR_mktag((MR_Integer) 1)));
#line 407 "make.module_dep_file.m"
                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 407 "make.module_dep_file.m"
                                {
#line 407 "make.module_dep_file.m"
                                  make__module_dep_file__SourceFileTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_108_108, (MR_Integer) 0)));
#line 407 "make.module_dep_file.m"
                                  make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_108_108, (MR_Integer) 1)));
#line 408 "make.module_dep_file.m"
                                  (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_109_109)) == (MR_mktag((MR_Integer) 1)));
#line 408 "make.module_dep_file.m"
                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 408 "make.module_dep_file.m"
                                    {
#line 408 "make.module_dep_file.m"
                                      make__module_dep_file__SourceFileModuleNameTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_109_109, (MR_Integer) 0)));
#line 408 "make.module_dep_file.m"
                                      make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_109_109, (MR_Integer) 1)));
#line 409 "make.module_dep_file.m"
                                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_110_110)) == (MR_mktag((MR_Integer) 1)));
#line 409 "make.module_dep_file.m"
                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 409 "make.module_dep_file.m"
                                        {
#line 409 "make.module_dep_file.m"
                                          make__module_dep_file__ParentsTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_110_110, (MR_Integer) 0)));
#line 409 "make.module_dep_file.m"
                                          make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_110_110, (MR_Integer) 1)));
#line 410 "make.module_dep_file.m"
                                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_111_111)) == (MR_mktag((MR_Integer) 1)));
#line 410 "make.module_dep_file.m"
                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 410 "make.module_dep_file.m"
                                            {
#line 410 "make.module_dep_file.m"
                                              make__module_dep_file__IntDepsTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_111_111, (MR_Integer) 0)));
#line 410 "make.module_dep_file.m"
                                              make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_111_111, (MR_Integer) 1)));
#line 411 "make.module_dep_file.m"
                                              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_112_112)) == (MR_mktag((MR_Integer) 1)));
#line 411 "make.module_dep_file.m"
                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 411 "make.module_dep_file.m"
                                                {
#line 411 "make.module_dep_file.m"
                                                  make__module_dep_file__ImplDepsTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_112_112, (MR_Integer) 0)));
#line 411 "make.module_dep_file.m"
                                                  make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_112_112, (MR_Integer) 1)));
#line 412 "make.module_dep_file.m"
                                                  (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_113_113)) == (MR_mktag((MR_Integer) 1)));
#line 412 "make.module_dep_file.m"
                                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 412 "make.module_dep_file.m"
                                                    {
#line 412 "make.module_dep_file.m"
                                                      make__module_dep_file__ChildrenTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_113_113, (MR_Integer) 0)));
#line 412 "make.module_dep_file.m"
                                                      make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_113_113, (MR_Integer) 1)));
#line 413 "make.module_dep_file.m"
                                                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 413 "make.module_dep_file.m"
                                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 413 "make.module_dep_file.m"
                                                        {
#line 413 "make.module_dep_file.m"
                                                          make__module_dep_file__NestedChildrenTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_114_114, (MR_Integer) 0)));
#line 413 "make.module_dep_file.m"
                                                          make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_114_114, (MR_Integer) 1)));
#line 414 "make.module_dep_file.m"
                                                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_115_115)) == (MR_mktag((MR_Integer) 1)));
#line 414 "make.module_dep_file.m"
                                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 414 "make.module_dep_file.m"
                                                            {
#line 414 "make.module_dep_file.m"
                                                              make__module_dep_file__FactDepsTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_115_115, (MR_Integer) 0)));
#line 414 "make.module_dep_file.m"
                                                              make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_115_115, (MR_Integer) 1)));
#line 415 "make.module_dep_file.m"
                                                              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_116_116)) == (MR_mktag((MR_Integer) 1)));
#line 415 "make.module_dep_file.m"
                                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 415 "make.module_dep_file.m"
                                                                {
#line 415 "make.module_dep_file.m"
                                                                  make__module_dep_file__ForeignLanguagesTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_116_116, (MR_Integer) 0)));
#line 415 "make.module_dep_file.m"
                                                                  make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_116_116, (MR_Integer) 1)));
#line 416 "make.module_dep_file.m"
                                                                  (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_117_117)) == (MR_mktag((MR_Integer) 1)));
#line 416 "make.module_dep_file.m"
                                                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 416 "make.module_dep_file.m"
                                                                    {
#line 416 "make.module_dep_file.m"
                                                                      make__module_dep_file__ForeignImportsTerm_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_117_117, (MR_Integer) 0)));
#line 416 "make.module_dep_file.m"
                                                                      make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_117_117, (MR_Integer) 1)));
#line 417 "make.module_dep_file.m"
                                                                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_118_118)) == (MR_mktag((MR_Integer) 1)));
#line 417 "make.module_dep_file.m"
                                                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 417 "make.module_dep_file.m"
                                                                        {
#line 417 "make.module_dep_file.m"
                                                                          make__module_dep_file__ContainsForeignExportTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_118_118, (MR_Integer) 0)));
#line 417 "make.module_dep_file.m"
                                                                          make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_118_118, (MR_Integer) 1)));
#line 418 "make.module_dep_file.m"
                                                                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_119_119)) == (MR_mktag((MR_Integer) 1)));
#line 418 "make.module_dep_file.m"
                                                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 418 "make.module_dep_file.m"
                                                                            {
#line 418 "make.module_dep_file.m"
                                                                              make__module_dep_file__HasMainTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_119_119, (MR_Integer) 0)));
#line 418 "make.module_dep_file.m"
                                                                              make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_119_119, (MR_Integer) 1)));
#line 420 "make.module_dep_file.m"
                                                                              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (make__module_dep_file__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "make.module_dep_file.m"
                                                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                {
#line 421 "make.module_dep_file.m"
                                                                                  (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__VersionNumberTerm_25)) == (MR_mktag((MR_Integer) 0)));
#line 421 "make.module_dep_file.m"
                                                                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 421 "make.module_dep_file.m"
                                                                                    {
#line 421 "make.module_dep_file.m"
                                                                                      make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__VersionNumberTerm_25, (MR_Integer) 0)));
#line 421 "make.module_dep_file.m"
                                                                                      make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__VersionNumberTerm_25, (MR_Integer) 1)));
#line 421 "make.module_dep_file.m"
                                                                                      make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__VersionNumberTerm_25, (MR_Integer) 2)));
#line 421 "make.module_dep_file.m"
                                                                                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_121_121)) == (MR_mktag((MR_Integer) 1)));
#line 421 "make.module_dep_file.m"
                                                                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 421 "make.module_dep_file.m"
                                                                                        {
#line 421 "make.module_dep_file.m"
                                                                                          make__module_dep_file__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_121_121, (MR_Integer) 0)));
#line 422 "make.module_dep_file.m"
                                                                                          {
#line 422 "make.module_dep_file.m"
                                                                                            make__module_dep_file__V_257_257 = make__module_dep_file__module_dependencies_version_number_0_f_0();
                                                                                          }
#line 422 "make.module_dep_file.m"
                                                                                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (make__module_dep_file__V_122_122 == make__module_dep_file__V_257_257);
#line 404 "make.module_dep_file.m"
                                                                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                            {
#line 421 "make.module_dep_file.m"
                                                                                              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (make__module_dep_file__V_123_123 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "make.module_dep_file.m"
                                                                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                {
#line 423 "make.module_dep_file.m"
                                                                                                  (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__SourceFileTerm_26)) == (MR_mktag((MR_Integer) 0)));
#line 423 "make.module_dep_file.m"
                                                                                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 423 "make.module_dep_file.m"
                                                                                                    {
#line 423 "make.module_dep_file.m"
                                                                                                      make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SourceFileTerm_26, (MR_Integer) 0)));
#line 423 "make.module_dep_file.m"
                                                                                                      make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SourceFileTerm_26, (MR_Integer) 1)));
#line 423 "make.module_dep_file.m"
                                                                                                      make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SourceFileTerm_26, (MR_Integer) 2)));
#line 423 "make.module_dep_file.m"
                                                                                                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (make__module_dep_file__V_125_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "make.module_dep_file.m"
                                                                                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                        {
#line 423 "make.module_dep_file.m"
                                                                                                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_124_124)) == (MR_mktag((MR_Integer) 2)));
#line 423 "make.module_dep_file.m"
                                                                                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 423 "make.module_dep_file.m"
                                                                                                            {
#line 423 "make.module_dep_file.m"
                                                                                                              make__module_dep_file__SourceFileName_39 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_124_124, (MR_Integer) 0)));
#line 425 "make.module_dep_file.m"
                                                                                                              {
#line 425 "make.module_dep_file.m"
                                                                                                                (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_240_240, make__module_dep_file__SourceFileModuleNameTerm_27, &make__module_dep_file__SourceFileModuleName_41);
                                                                                                              }
#line 404 "make.module_dep_file.m"
                                                                                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                {
#line 427 "make.module_dep_file.m"
                                                                                                                  {
#line 427 "make.module_dep_file.m"
                                                                                                                    (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = make__module_dep_file__parse_sym_name_list_2_p_0(make__module_dep_file__ParentsTerm_28, &make__module_dep_file__Parents_42);
                                                                                                                  }
#line 404 "make.module_dep_file.m"
                                                                                                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                    {
#line 428 "make.module_dep_file.m"
                                                                                                                      {
#line 428 "make.module_dep_file.m"
                                                                                                                        (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = make__module_dep_file__parse_sym_name_list_2_p_0(make__module_dep_file__IntDepsTerm_29, &make__module_dep_file__IntDeps_43);
                                                                                                                      }
#line 404 "make.module_dep_file.m"
                                                                                                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                        {
#line 429 "make.module_dep_file.m"
                                                                                                                          {
#line 429 "make.module_dep_file.m"
                                                                                                                            (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = make__module_dep_file__parse_sym_name_list_2_p_0(make__module_dep_file__ImplDepsTerm_30, &make__module_dep_file__ImplDeps_44);
                                                                                                                          }
#line 404 "make.module_dep_file.m"
                                                                                                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                            {
#line 430 "make.module_dep_file.m"
                                                                                                                              {
#line 430 "make.module_dep_file.m"
                                                                                                                                (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = make__module_dep_file__parse_sym_name_list_2_p_0(make__module_dep_file__ChildrenTerm_31, &make__module_dep_file__Children_45);
                                                                                                                              }
#line 404 "make.module_dep_file.m"
                                                                                                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                {
#line 431 "make.module_dep_file.m"
                                                                                                                                  {
#line 431 "make.module_dep_file.m"
                                                                                                                                    (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = make__module_dep_file__parse_sym_name_list_2_p_0(make__module_dep_file__NestedChildrenTerm_32, &(make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__NestedChildren_46);
                                                                                                                                  }
#line 404 "make.module_dep_file.m"
                                                                                                                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                    {
#line 432 "make.module_dep_file.m"
                                                                                                                                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__FactDepsTerm_33)) == (MR_mktag((MR_Integer) 0)));
#line 432 "make.module_dep_file.m"
                                                                                                                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 432 "make.module_dep_file.m"
                                                                                                                                        {
#line 432 "make.module_dep_file.m"
                                                                                                                                          make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FactDepsTerm_33, (MR_Integer) 0)));
#line 432 "make.module_dep_file.m"
                                                                                                                                          make__module_dep_file__FactDepsStrings_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FactDepsTerm_33, (MR_Integer) 1)));
#line 432 "make.module_dep_file.m"
                                                                                                                                          make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FactDepsTerm_33, (MR_Integer) 2)));
#line 432 "make.module_dep_file.m"
                                                                                                                                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_126_126)) == (MR_mktag((MR_Integer) 0)));
#line 432 "make.module_dep_file.m"
                                                                                                                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 432 "make.module_dep_file.m"
                                                                                                                                            {
#line 432 "make.module_dep_file.m"
                                                                                                                                              make__module_dep_file__V_127_127 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_126_126, (MR_Integer) 0)));
#line 432 "make.module_dep_file.m"
                                                                                                                                              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (strcmp(make__module_dep_file__V_127_127, (MR_String) "{}") == 0);
#line 404 "make.module_dep_file.m"
                                                                                                                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                                {
#line 433 "make.module_dep_file.m"
                                                                                                                                                  make__module_dep_file__V_128_128 = (MR_Word) &make__module_dep_file_scalar_common_2[9];
#line 4857 "make.module_dep_file.c"
                                                                                                                                                  make__module_dep_file__TypeInfo_241_241 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 4859 "make.module_dep_file.c"
                                                                                                                                                  make__module_dep_file__TypeCtorInfo_242_242 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 433 "make.module_dep_file.m"
                                                                                                                                                  {
#line 433 "make.module_dep_file.m"
                                                                                                                                                    (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_241_241, make__module_dep_file__TypeCtorInfo_242_242, make__module_dep_file__V_128_128, make__module_dep_file__FactDepsStrings_47, &make__module_dep_file__FactDeps_52);
                                                                                                                                                  }
#line 404 "make.module_dep_file.m"
                                                                                                                                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                                    {
#line 437 "make.module_dep_file.m"
                                                                                                                                                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ForeignLanguagesTerm_34)) == (MR_mktag((MR_Integer) 0)));
#line 437 "make.module_dep_file.m"
                                                                                                                                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 437 "make.module_dep_file.m"
                                                                                                                                                        {
#line 437 "make.module_dep_file.m"
                                                                                                                                                          make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignLanguagesTerm_34, (MR_Integer) 0)));
#line 437 "make.module_dep_file.m"
                                                                                                                                                          make__module_dep_file__ForeignLanguagesTerms_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignLanguagesTerm_34, (MR_Integer) 1)));
#line 437 "make.module_dep_file.m"
                                                                                                                                                          make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignLanguagesTerm_34, (MR_Integer) 2)));
#line 437 "make.module_dep_file.m"
                                                                                                                                                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_133_133)) == (MR_mktag((MR_Integer) 0)));
#line 437 "make.module_dep_file.m"
                                                                                                                                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 437 "make.module_dep_file.m"
                                                                                                                                                            {
#line 437 "make.module_dep_file.m"
                                                                                                                                                              make__module_dep_file__V_134_134 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_133_133, (MR_Integer) 0)));
#line 438 "make.module_dep_file.m"
                                                                                                                                                              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (strcmp(make__module_dep_file__V_134_134, (MR_String) "{}") == 0);
#line 404 "make.module_dep_file.m"
                                                                                                                                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                                                {
#line 439 "make.module_dep_file.m"
                                                                                                                                                                  make__module_dep_file__V_135_135 = (MR_Word) &make__module_dep_file_scalar_common_2[10];
#line 4898 "make.module_dep_file.c"
                                                                                                                                                                  make__module_dep_file__TypeCtorInfo_243_243 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 439 "make.module_dep_file.m"
                                                                                                                                                                  {
#line 439 "make.module_dep_file.m"
                                                                                                                                                                    (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_241_241, make__module_dep_file__TypeCtorInfo_243_243, make__module_dep_file__V_135_135, make__module_dep_file__ForeignLanguagesTerms_53, &make__module_dep_file__ForeignLanguages_59);
                                                                                                                                                                  }
#line 404 "make.module_dep_file.m"
                                                                                                                                                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                                                    {
#line 445 "make.module_dep_file.m"
                                                                                                                                                                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ForeignImportsTerm_35)) == (MR_mktag((MR_Integer) 0)));
#line 445 "make.module_dep_file.m"
                                                                                                                                                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 445 "make.module_dep_file.m"
                                                                                                                                                                        {
#line 445 "make.module_dep_file.m"
                                                                                                                                                                          make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportsTerm_35, (MR_Integer) 0)));
#line 445 "make.module_dep_file.m"
                                                                                                                                                                          make__module_dep_file__ForeignImportTerms_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportsTerm_35, (MR_Integer) 1)));
#line 445 "make.module_dep_file.m"
                                                                                                                                                                          make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportsTerm_35, (MR_Integer) 2)));
#line 445 "make.module_dep_file.m"
                                                                                                                                                                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_140_140)) == (MR_mktag((MR_Integer) 0)));
#line 445 "make.module_dep_file.m"
                                                                                                                                                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 445 "make.module_dep_file.m"
                                                                                                                                                                            {
#line 445 "make.module_dep_file.m"
                                                                                                                                                                              make__module_dep_file__V_141_141 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_140_140, (MR_Integer) 0)));
#line 445 "make.module_dep_file.m"
                                                                                                                                                                              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (strcmp(make__module_dep_file__V_141_141, (MR_String) "{}") == 0);
#line 404 "make.module_dep_file.m"
                                                                                                                                                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                {
#line 447 "make.module_dep_file.m"
                                                                                                                                                                                  make__module_dep_file__V_142_142 = (MR_Word) &make__module_dep_file_scalar_common_2[11];
#line 4937 "make.module_dep_file.c"
                                                                                                                                                                                  make__module_dep_file__TypeCtorInfo_245_245 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 447 "make.module_dep_file.m"
                                                                                                                                                                                  {
#line 447 "make.module_dep_file.m"
                                                                                                                                                                                    (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_241_241, make__module_dep_file__TypeCtorInfo_245_245, make__module_dep_file__V_142_142, make__module_dep_file__ForeignImportTerms_60, &make__module_dep_file__ForeignImports_68);
                                                                                                                                                                                  }
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                    {
#line 462 "make.module_dep_file.m"
                                                                                                                                                                                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ContainsForeignExportTerm_36)) == (MR_mktag((MR_Integer) 0)));
#line 462 "make.module_dep_file.m"
                                                                                                                                                                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 462 "make.module_dep_file.m"
                                                                                                                                                                                        {
#line 462 "make.module_dep_file.m"
                                                                                                                                                                                          make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ContainsForeignExportTerm_36, (MR_Integer) 0)));
#line 462 "make.module_dep_file.m"
                                                                                                                                                                                          make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ContainsForeignExportTerm_36, (MR_Integer) 1)));
#line 462 "make.module_dep_file.m"
                                                                                                                                                                                          make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ContainsForeignExportTerm_36, (MR_Integer) 2)));
#line 463 "make.module_dep_file.m"
                                                                                                                                                                                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (make__module_dep_file__V_154_154 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                            {
#line 463 "make.module_dep_file.m"
                                                                                                                                                                                              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_153_153)) == (MR_mktag((MR_Integer) 0)));
#line 463 "make.module_dep_file.m"
                                                                                                                                                                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 463 "make.module_dep_file.m"
                                                                                                                                                                                                {
#line 463 "make.module_dep_file.m"
                                                                                                                                                                                                  make__module_dep_file__ContainsForeignExportStr_69 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_153_153, (MR_Integer) 0)));
#line 464 "make.module_dep_file.m"
                                                                                                                                                                                                  {
#line 464 "make.module_dep_file.m"
                                                                                                                                                                                                    (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = make__module_dep_file__contains_foreign_export_to_string_2_p_1(&make__module_dep_file__ContainsForeignExport_71, make__module_dep_file__ContainsForeignExportStr_69);
                                                                                                                                                                                                  }
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                                  if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                                    {
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                      (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__HasMainTerm_37)) == (MR_mktag((MR_Integer) 0)));
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                      if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                        {
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                          make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HasMainTerm_37, (MR_Integer) 0)));
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                          make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HasMainTerm_37, (MR_Integer) 1)));
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                          make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HasMainTerm_37, (MR_Integer) 2)));
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                          (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = (make__module_dep_file__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                                          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                                            {
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_155_155)) == (MR_mktag((MR_Integer) 0)));
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                                {
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                                  make__module_dep_file__HasMainStr_72 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_155_155, (MR_Integer) 0)));
#line 468 "make.module_dep_file.m"
                                                                                                                                                                                                                  {
#line 468 "make.module_dep_file.m"
                                                                                                                                                                                                                    (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded = make__module_dep_file__has_main_to_string_2_p_1(&make__module_dep_file__HasMain_74, make__module_dep_file__HasMainStr_72);
                                                                                                                                                                                                                  }
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                                }
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                                            }
#line 467 "make.module_dep_file.m"
                                                                                                                                                                                                        }
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                                    }
#line 463 "make.module_dep_file.m"
                                                                                                                                                                                                }
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                            }
#line 462 "make.module_dep_file.m"
                                                                                                                                                                                        }
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                    }
#line 404 "make.module_dep_file.m"
                                                                                                                                                                                }
#line 445 "make.module_dep_file.m"
                                                                                                                                                                            }
#line 445 "make.module_dep_file.m"
                                                                                                                                                                        }
#line 404 "make.module_dep_file.m"
                                                                                                                                                                    }
#line 404 "make.module_dep_file.m"
                                                                                                                                                                }
#line 437 "make.module_dep_file.m"
                                                                                                                                                            }
#line 437 "make.module_dep_file.m"
                                                                                                                                                        }
#line 404 "make.module_dep_file.m"
                                                                                                                                                    }
#line 404 "make.module_dep_file.m"
                                                                                                                                                }
#line 432 "make.module_dep_file.m"
                                                                                                                                            }
#line 432 "make.module_dep_file.m"
                                                                                                                                        }
#line 404 "make.module_dep_file.m"
                                                                                                                                    }
#line 404 "make.module_dep_file.m"
                                                                                                                                }
#line 404 "make.module_dep_file.m"
                                                                                                                            }
#line 404 "make.module_dep_file.m"
                                                                                                                        }
#line 404 "make.module_dep_file.m"
                                                                                                                    }
#line 404 "make.module_dep_file.m"
                                                                                                                }
#line 423 "make.module_dep_file.m"
                                                                                                            }
#line 404 "make.module_dep_file.m"
                                                                                                        }
#line 423 "make.module_dep_file.m"
                                                                                                    }
#line 404 "make.module_dep_file.m"
                                                                                                }
#line 404 "make.module_dep_file.m"
                                                                                            }
#line 421 "make.module_dep_file.m"
                                                                                        }
#line 421 "make.module_dep_file.m"
                                                                                    }
#line 404 "make.module_dep_file.m"
                                                                                }
#line 418 "make.module_dep_file.m"
                                                                            }
#line 417 "make.module_dep_file.m"
                                                                        }
#line 416 "make.module_dep_file.m"
                                                                    }
#line 415 "make.module_dep_file.m"
                                                                }
#line 414 "make.module_dep_file.m"
                                                            }
#line 413 "make.module_dep_file.m"
                                                        }
#line 412 "make.module_dep_file.m"
                                                    }
#line 411 "make.module_dep_file.m"
                                                }
#line 410 "make.module_dep_file.m"
                                            }
#line 409 "make.module_dep_file.m"
                                        }
#line 408 "make.module_dep_file.m"
                                    }
#line 407 "make.module_dep_file.m"
                                }
#line 406 "make.module_dep_file.m"
                            }
#line 404 "make.module_dep_file.m"
                        }
#line 405 "make.module_dep_file.m"
                    }
#line 405 "make.module_dep_file.m"
                }
#line 404 "make.module_dep_file.m"
            }
#line 523 "make.module_dep_file.m"
          if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 477 "make.module_dep_file.m"
            {
#line 477 "make.module_dep_file.m"
              MR_Word make__module_dep_file__ContainsForeignCode_75;
#line 477 "make.module_dep_file.m"
              MR_Word make__module_dep_file__Items_80;
#line 477 "make.module_dep_file.m"
              MR_Word make__module_dep_file__Imports_84;
#line 477 "make.module_dep_file.m"
              MR_Word make__module_dep_file__ModuleDepMap0_85;
#line 477 "make.module_dep_file.m"
              MR_Word make__module_dep_file__ModuleDepMap_86;
#line 477 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_158_158;
#line 477 "make.module_dep_file.m"
              MR_Word make__module_dep_file__STATE_VARIABLE_Info_159_159;
#line 477 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_160_160;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_185_185;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_186_186;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_187_187;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_188_188;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_189_189;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_190_190;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_191_191;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_192_192;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_193_193;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_194_194;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_195_195;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_196_196;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_197_197;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_198_198;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_199_199;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_200_200;
#line 491 "make.module_dep_file.m"
              MR_Integer make__module_dep_file__V_201_201;
#line 491 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_202_202;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_204_204;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_205_205;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_206_206;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_207_207;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_208_208;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_209_209;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_210_210;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_211_211;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_212_212;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_213_213;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_214_214;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_215_215;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_216_216;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_217_217;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_218_218;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_219_219;
#line 494 "make.module_dep_file.m"
              MR_Integer make__module_dep_file__V_220_220;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_221_221;
#line 494 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_203_203;
#line 503 "make.module_dep_file.m"
              MR_Box make__module_dep_file__conv5_STATE_VARIABLE_Info_161_161;
#line 503 "make.module_dep_file.m"
              MR_Box make__module_dep_file__conv4_STATE_VARIABLE_IO_162_162;

#line 473 "make.module_dep_file.m"
              if ((make__module_dep_file__ForeignLanguages_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "make.module_dep_file.m"
                make__module_dep_file__ContainsForeignCode_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 473 "make.module_dep_file.m"
              else
#line 474 "make.module_dep_file.m"
                {
#line 474 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_157_157;

#line 475 "make.module_dep_file.m"
                  {
#line 475 "make.module_dep_file.m"
                    make__module_dep_file__V_157_157 = mercury__set__list_to_set_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__ForeignLanguages_59);
                  }
#line 475 "make.module_dep_file.m"
                  {
#line 475 "make.module_dep_file.m"
                    make__module_dep_file__ContainsForeignCode_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 475 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(1), make__module_dep_file__ContainsForeignCode_75, 0) = ((MR_Box) (make__module_dep_file__V_157_157));
#line 475 "make.module_dep_file.m"
                  }
#line 474 "make.module_dep_file.m"
                }
#line 481 "make.module_dep_file.m"
              {
#line 481 "make.module_dep_file.m"
                make__module_dep_file__Items_80 = mercury__cord__empty_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
              }
#line 485 "make.module_dep_file.m"
              {
#line 485 "make.module_dep_file.m"
                make__module_dep_file__Imports_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 0) = ((MR_Box) (make__module_dep_file__SourceFileName_39));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 1) = ((MR_Box) (make__module_dep_file__SourceFileModuleName_41));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 2) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 3) = ((MR_Box) (make__module_dep_file__Parents_42));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 4) = ((MR_Box) (make__module_dep_file__IntDeps_43));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 5) = ((MR_Box) (make__module_dep_file__ImplDeps_44));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 7) = ((MR_Box) (make__module_dep_file__Children_45));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 9) = ((MR_Box) ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__NestedChildren_46));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 10) = ((MR_Box) (make__module_dep_file__FactDeps_52));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 11) = ((MR_Box) (make__module_dep_file__ContainsForeignCode_75));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 12) = ((MR_Box) (make__module_dep_file__ForeignImports_68));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 13) = ((MR_Box) (make__module_dep_file__ContainsForeignExport_71));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 14) = ((MR_Box) (make__module_dep_file__Items_80));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 15) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 16) = ((MR_Box) ((MR_Integer) 0));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 17) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 18) = ((MR_Box) (make__module_dep_file__HasMain_74));
#line 485 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_84, 19) = ((MR_Box) (make__module_dep_file__ModuleDir_18));
#line 485 "make.module_dep_file.m"
              }
#line 491 "make.module_dep_file.m"
              make__module_dep_file__ModuleDepMap0_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 0)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 1)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 2)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 3)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 4)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 5)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 6)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 7)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 8)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 9)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 10)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 11)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_196_196 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_197_197 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 13)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 14)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 15)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_201_201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 16)));
#line 491 "make.module_dep_file.m"
              make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 17)));
#line 493 "make.module_dep_file.m"
              {
#line 493 "make.module_dep_file.m"
                make__module_dep_file__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 493 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(1), make__module_dep_file__V_158_158, 0) = ((MR_Box) (make__module_dep_file__Imports_84));
#line 493 "make.module_dep_file.m"
              }
#line 5336 "make.module_dep_file.c"
              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__TypeCtorInfo_248_248 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 5338 "make.module_dep_file.c"
              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__TypeInfo_249_249 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 493 "make.module_dep_file.m"
              {
#line 493 "make.module_dep_file.m"
                mercury__map__set_4_p_0((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__TypeCtorInfo_248_248, (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__TypeInfo_249_249, ((MR_Box) (make__module_dep_file__ModuleName_12)), ((MR_Box) (make__module_dep_file__V_158_158)), make__module_dep_file__ModuleDepMap0_85, &make__module_dep_file__ModuleDepMap_86);
              }
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 0)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 1)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 2)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 3)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 4)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 5)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 6)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 7)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 8)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 9)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 10)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 11)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_215_215 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_216_216 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 13)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 14)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 15)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_220_220 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 16)));
#line 494 "make.module_dep_file.m"
              make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_91, (MR_Integer) 17)));
#line 494 "make.module_dep_file.m"
              {
#line 494 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_86));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 1) = ((MR_Box) (make__module_dep_file__V_204_204));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 2) = ((MR_Box) (make__module_dep_file__V_205_205));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 3) = ((MR_Box) (make__module_dep_file__V_206_206));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 4) = ((MR_Box) (make__module_dep_file__V_207_207));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 5) = ((MR_Box) (make__module_dep_file__V_208_208));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 6) = ((MR_Box) (make__module_dep_file__V_209_209));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 7) = ((MR_Box) (make__module_dep_file__V_210_210));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 8) = ((MR_Box) (make__module_dep_file__V_211_211));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 9) = ((MR_Box) (make__module_dep_file__V_212_212));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 10) = ((MR_Box) (make__module_dep_file__V_213_213));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 11) = ((MR_Box) (make__module_dep_file__V_214_214));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 12) = ((MR_Box) ((make__module_dep_file__V_215_215 | ((make__module_dep_file__V_216_216 << (MR_Integer) 1)))));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 13) = ((MR_Box) (make__module_dep_file__V_217_217));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 14) = ((MR_Box) (make__module_dep_file__V_218_218));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 15) = ((MR_Box) (make__module_dep_file__V_219_219));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 16) = ((MR_Box) (make__module_dep_file__V_220_220));
#line 494 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_159_159, 17) = ((MR_Box) (make__module_dep_file__V_221_221));
#line 494 "make.module_dep_file.m"
              }
#line 503 "make.module_dep_file.m"
              {
#line 503 "make.module_dep_file.m"
                make__module_dep_file__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 503 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_160_160, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 503 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_160_160, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_4));
#line 503 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_160_160, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 503 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_160_160, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 503 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_160_160, 4) = ((MR_Box) ((MR_Integer) 1));
#line 503 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_160_160, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_11));
#line 503 "make.module_dep_file.m"
              }
#line 503 "make.module_dep_file.m"
              {
#line 503 "make.module_dep_file.m"
                mercury__list__foldl2_6_p_2((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__TypeCtorInfo_248_248, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_160_160, (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__NestedChildren_46, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_159_159)), &make__module_dep_file__conv5_STATE_VARIABLE_Info_161_161, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv4_STATE_VARIABLE_IO_162_162);
              }
#line 503 "make.module_dep_file.m"
              (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161 = ((MR_Word) make__module_dep_file__conv5_STATE_VARIABLE_Info_161_161);
#line 508 "make.module_dep_file.m"
              {
#line 508 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_2_8_p_0_8(&make__module_dep_file__env);
              }
#line 520 "make.module_dep_file.m"
              if ((make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__succeeded)
#line 518 "make.module_dep_file.m"
                {
#line 518 "make.module_dep_file.m"
                  {
#line 518 "make.module_dep_file.m"
                    make__module_dep_file__read_module_dependencies_remake_8_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_12, (MR_String) "error in nested sub-modules", (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161, make__module_dep_file__STATE_VARIABLE_Info_92);
#line 518 "make.module_dep_file.m"
                    return;
                  }
#line 518 "make.module_dep_file.m"
                }
#line 520 "make.module_dep_file.m"
              else
#line 521 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_92 = (make__module_dep_file__env).make__module_dep_file__read_module_dependencies_2_8_p_0_env_0__STATE_VARIABLE_Info_161_161;
#line 477 "make.module_dep_file.m"
            }
#line 523 "make.module_dep_file.m"
          else
#line 524 "make.module_dep_file.m"
            {
#line 524 "make.module_dep_file.m"
              {
#line 524 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_remake_8_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_12, (MR_String) "parse error", make__module_dep_file__STATE_VARIABLE_Info_0_91, make__module_dep_file__STATE_VARIABLE_Info_92);
#line 524 "make.module_dep_file.m"
                return;
              }
#line 524 "make.module_dep_file.m"
            }
#line 399 "make.module_dep_file.m"
        }
#line 392 "make.module_dep_file.m"
    }
#line 387 "make.module_dep_file.m"
  }
#line 387 "make.module_dep_file.m"
}

#line 378 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 378 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 378 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 378 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 378 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 378 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14)
#line 378 "make.module_dep_file.m"
{
#line 383 "make.module_dep_file.m"
  {
#line 383 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 383 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_17_17;
#line 383 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;

#line 385 "make.module_dep_file.m"
    {
#line 385 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = mercury__dir__this_directory_0_f_0();
    }
#line 384 "make.module_dep_file.m"
    {
#line 384 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 0) = ((MR_Box) (make__module_dep_file__V_20_20));
#line 384 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 384 "make.module_dep_file.m"
    }
#line 384 "make.module_dep_file.m"
    {
#line 384 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__V_17_17, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_13, make__module_dep_file__STATE_VARIABLE_Info_14);
#line 384 "make.module_dep_file.m"
      return;
    }
#line 383 "make.module_dep_file.m"
  }
#line 378 "make.module_dep_file.m"
}

#line 368 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 368 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 368 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 368 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 368 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 368 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15)
#line 368 "make.module_dep_file.m"
{
#line 372 "make.module_dep_file.m"
  {
#line 372 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_13;

#line 373 "make.module_dep_file.m"
    {
#line 373 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_8, (MR_Integer) 641, &make__module_dep_file__SearchDirs_13);
    }
#line 375 "make.module_dep_file.m"
    {
#line 375 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__SearchDirs_13, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_14, make__module_dep_file__STATE_VARIABLE_Info_15);
#line 375 "make.module_dep_file.m"
      return;
    }
#line 372 "make.module_dep_file.m"
  }
#line 368 "make.module_dep_file.m"
}

#line 357 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_to_string_2_p_1(
#line 357 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_3,
#line 357 "make.module_dep_file.m"
  MR_String make__module_dep_file__HasMainStr_4)
#line 357 "make.module_dep_file.m"
{
#line 361 "make.module_dep_file.m"
  {
#line 361 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 361 "make.module_dep_file.m"
    if ((strcmp(make__module_dep_file__HasMainStr_4, (MR_String) "no_main") == 0))
#line 364 "make.module_dep_file.m"
      {
#line 364 "make.module_dep_file.m"
        *make__module_dep_file__HasMain_3 = (MR_Integer) 1;
#line 364 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 364 "make.module_dep_file.m"
      }
#line 361 "make.module_dep_file.m"
    else
#line 361 "make.module_dep_file.m"
      if ((strcmp(make__module_dep_file__HasMainStr_4, (MR_String) "has_main") == 0))
#line 361 "make.module_dep_file.m"
        {
#line 361 "make.module_dep_file.m"
          *make__module_dep_file__HasMain_3 = (MR_Integer) 0;
#line 361 "make.module_dep_file.m"
          make__module_dep_file__succeeded = MR_TRUE;
#line 361 "make.module_dep_file.m"
        }
#line 361 "make.module_dep_file.m"
      else
#line 361 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_FALSE;
#line 361 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 361 "make.module_dep_file.m"
  }
#line 357 "make.module_dep_file.m"
}

#line 356 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 356 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 356 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4)
#line 356 "make.module_dep_file.m"
{
#line 361 "make.module_dep_file.m"
  {
#line 361 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 361 "make.module_dep_file.m"
    if ((make__module_dep_file__HasMain_3 == (MR_Integer) 0))
#line 362 "make.module_dep_file.m"
      *make__module_dep_file__HasMainStr_4 = (MR_String) "has_main";
#line 361 "make.module_dep_file.m"
    else
#line 365 "make.module_dep_file.m"
      *make__module_dep_file__HasMainStr_4 = (MR_String) "no_main";
#line 361 "make.module_dep_file.m"
  }
#line 356 "make.module_dep_file.m"
}

#line 341 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_1(
#line 341 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_3,
#line 341 "make.module_dep_file.m"
  MR_String make__module_dep_file__ContainsForeignExportStr_4)
#line 341 "make.module_dep_file.m"
{
#line 346 "make.module_dep_file.m"
  {
#line 346 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 346 "make.module_dep_file.m"
    if ((strcmp(make__module_dep_file__ContainsForeignExportStr_4, (MR_String) "no_foreign_export") == 0))
#line 349 "make.module_dep_file.m"
      {
#line 349 "make.module_dep_file.m"
        *make__module_dep_file__ContainsForeignExport_3 = (MR_Integer) 1;
#line 349 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 349 "make.module_dep_file.m"
      }
#line 346 "make.module_dep_file.m"
    else
#line 346 "make.module_dep_file.m"
      if ((strcmp(make__module_dep_file__ContainsForeignExportStr_4, (MR_String) "contains_foreign_export") == 0))
#line 346 "make.module_dep_file.m"
        {
#line 346 "make.module_dep_file.m"
          *make__module_dep_file__ContainsForeignExport_3 = (MR_Integer) 0;
#line 346 "make.module_dep_file.m"
          make__module_dep_file__succeeded = MR_TRUE;
#line 346 "make.module_dep_file.m"
        }
#line 346 "make.module_dep_file.m"
      else
#line 346 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_FALSE;
#line 346 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 346 "make.module_dep_file.m"
  }
#line 341 "make.module_dep_file.m"
}

#line 340 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 340 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 340 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4)
#line 340 "make.module_dep_file.m"
{
#line 346 "make.module_dep_file.m"
  {
#line 346 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 346 "make.module_dep_file.m"
    if ((make__module_dep_file__ContainsForeignExport_3 == (MR_Integer) 0))
#line 347 "make.module_dep_file.m"
      *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "contains_foreign_export";
#line 346 "make.module_dep_file.m"
    else
#line 352 "make.module_dep_file.m"
      *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "no_foreign_export";
#line 346 "make.module_dep_file.m"
  }
#line 340 "make.module_dep_file.m"
}

#line 313 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_8(
#line 313 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 313 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 313 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 313 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 313 "make.module_dep_file.m"
{
#line 313 "make.module_dep_file.m"
  {
#line 313 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 313 "make.module_dep_file.m"
    {
#line 313 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file__313__1_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 313 "make.module_dep_file.m"
      return;
    }
#line 313 "make.module_dep_file.m"
  }
#line 313 "make.module_dep_file.m"
}

#line 310 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_7(
#line 310 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 310 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 310 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 310 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 310 "make.module_dep_file.m"
{
#line 310 "make.module_dep_file.m"
  {
#line 310 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 310 "make.module_dep_file.m"
    {
#line 310 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 310 "make.module_dep_file.m"
      return;
    }
#line 310 "make.module_dep_file.m"
  }
#line 310 "make.module_dep_file.m"
}

#line 299 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_6(
#line 299 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 299 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 299 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 299 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 299 "make.module_dep_file.m"
{
#line 299 "make.module_dep_file.m"
  {
#line 299 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 299 "make.module_dep_file.m"
    {
#line 299 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file__299__1_3_p_0(((MR_String) make__module_dep_file__wrapper_arg_1));
#line 299 "make.module_dep_file.m"
      return;
    }
#line 299 "make.module_dep_file.m"
  }
#line 299 "make.module_dep_file.m"
}

#line 296 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_5(
#line 296 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 296 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 296 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 296 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 296 "make.module_dep_file.m"
{
#line 296 "make.module_dep_file.m"
  {
#line 296 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 296 "make.module_dep_file.m"
    {
#line 296 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 296 "make.module_dep_file.m"
      return;
    }
#line 296 "make.module_dep_file.m"
  }
#line 296 "make.module_dep_file.m"
}

#line 293 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_4(
#line 293 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 293 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 293 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 293 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 293 "make.module_dep_file.m"
{
#line 293 "make.module_dep_file.m"
  {
#line 293 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 293 "make.module_dep_file.m"
    {
#line 293 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 293 "make.module_dep_file.m"
      return;
    }
#line 293 "make.module_dep_file.m"
  }
#line 293 "make.module_dep_file.m"
}

#line 290 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_3(
#line 290 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 290 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 290 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 290 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 290 "make.module_dep_file.m"
{
#line 290 "make.module_dep_file.m"
  {
#line 290 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 290 "make.module_dep_file.m"
    {
#line 290 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 290 "make.module_dep_file.m"
      return;
    }
#line 290 "make.module_dep_file.m"
  }
#line 290 "make.module_dep_file.m"
}

#line 287 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_2(
#line 287 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 287 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 287 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 287 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 287 "make.module_dep_file.m"
{
#line 287 "make.module_dep_file.m"
  {
#line 287 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 287 "make.module_dep_file.m"
    {
#line 287 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 287 "make.module_dep_file.m"
      return;
    }
#line 287 "make.module_dep_file.m"
  }
#line 287 "make.module_dep_file.m"
}

#line 284 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0_1(
#line 284 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 284 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 284 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 284 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 284 "make.module_dep_file.m"
{
#line 284 "make.module_dep_file.m"
  {
#line 284 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 284 "make.module_dep_file.m"
    {
#line 284 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 284 "make.module_dep_file.m"
      return;
    }
#line 284 "make.module_dep_file.m"
  }
#line 284 "make.module_dep_file.m"
}

#line 265 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 265 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 265 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports_6)
#line 265 "make.module_dep_file.m"
{
#line 268 "make.module_dep_file.m"
  {
#line 268 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 268 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 268 "make.module_dep_file.m"
    MR_String make__module_dep_file__ProgDepFile_9;
#line 268 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ProgDepResult_10;
#line 268 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_26_26;
#line 269 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_127_127 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 269 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));

#line 270 "make.module_dep_file.m"
    {
#line 270 "make.module_dep_file.m"
      make__module_dep_file__V_26_26 = make__make_module_dep_file_extension_0_f_0();
    }
#line 270 "make.module_dep_file.m"
    {
#line 270 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleName_8, make__module_dep_file__V_26_26, (MR_Integer) 0, &make__module_dep_file__ProgDepFile_9);
    }
#line 272 "make.module_dep_file.m"
    {
#line 272 "make.module_dep_file.m"
      mercury__io__open_output_4_p_0(make__module_dep_file__ProgDepFile_9, &make__module_dep_file__ProgDepResult_10);
    }
#line 331 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ProgDepResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 332 "make.module_dep_file.m"
      {
#line 332 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 332 "make.module_dep_file.m"
        MR_String make__module_dep_file__Msg_23;
#line 332 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_30_30;
#line 332 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_33_33;
#line 332 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_34_34;
#line 332 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_36_36;

#line 333 "make.module_dep_file.m"
        {
#line 333 "make.module_dep_file.m"
          mercury__io__error_message_2_p_0(make__module_dep_file__Error_22, &make__module_dep_file__Msg_23);
        }
#line 335 "make.module_dep_file.m"
        {
#line 335 "make.module_dep_file.m"
          make__module_dep_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_36_36, 0) = ((MR_Box) (make__module_dep_file__Msg_23));
#line 335 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[3])));
#line 335 "make.module_dep_file.m"
        }
#line 334 "make.module_dep_file.m"
        {
#line 334 "make.module_dep_file.m"
          make__module_dep_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_34_34, 0) = ((MR_Box) ((MR_String) " for output: "));
#line 334 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_34_34, 1) = ((MR_Box) (make__module_dep_file__V_36_36));
#line 334 "make.module_dep_file.m"
        }
#line 334 "make.module_dep_file.m"
        {
#line 334 "make.module_dep_file.m"
          make__module_dep_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_33_33, 0) = ((MR_Box) (make__module_dep_file__ProgDepFile_9));
#line 334 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_33_33, 1) = ((MR_Box) (make__module_dep_file__V_34_34));
#line 334 "make.module_dep_file.m"
        }
#line 334 "make.module_dep_file.m"
        {
#line 334 "make.module_dep_file.m"
          make__module_dep_file__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_30_30, 0) = ((MR_Box) ((MR_String) "Error opening "));
#line 334 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_30_30, 1) = ((MR_Box) (make__module_dep_file__V_33_33));
#line 334 "make.module_dep_file.m"
        }
#line 334 "make.module_dep_file.m"
        {
#line 334 "make.module_dep_file.m"
          mercury__io__write_strings_3_p_0(make__module_dep_file__V_30_30);
        }
#line 336 "make.module_dep_file.m"
        {
#line 336 "make.module_dep_file.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 336 "make.module_dep_file.m"
          return;
        }
#line 332 "make.module_dep_file.m"
      }
#line 331 "make.module_dep_file.m"
    else
#line 274 "make.module_dep_file.m"
      {
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_377_377;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ProgDepStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_12;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ForeignLanguages_14;
#line 274 "make.module_dep_file.m"
        MR_String make__module_dep_file__ContainsForeignExportStr_19;
#line 274 "make.module_dep_file.m"
        MR_String make__module_dep_file__HasMainStr_20;
#line 274 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_45_45;
#line 274 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_49_49;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_53_53;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_75_75;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_81_81;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_87_87;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_99_99;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_114_114;
#line 274 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_118_118;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_146_146;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_147_147;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_148_148;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_149_149;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_150_150;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_151_151;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_152_152;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_153_153;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_154_154;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_155_155;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_156_156;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_157_157;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_158_158;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_159_159;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_160_160;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_161_161;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_162_162;
#line 279 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_163_163;
#line 279 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_164_164;
#line 281 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_165_165;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_166_166;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_167_167;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_168_168;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_169_169;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_170_170;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_171_171;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_172_172;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_173_173;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_174_174;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_175_175;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_176_176;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_177_177;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_178_178;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_179_179;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_180_180;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_181_181;
#line 281 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_182_182;
#line 281 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_183_183;
#line 284 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_184_184;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_185_185;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_186_186;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_187_187;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_188_188;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_189_189;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_190_190;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_191_191;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_192_192;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_193_193;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_194_194;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_195_195;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_196_196;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_197_197;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_198_198;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_199_199;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_200_200;
#line 284 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_201_201;
#line 284 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_202_202;
#line 287 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_203_203;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_204_204;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_205_205;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_206_206;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_207_207;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_208_208;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_209_209;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_210_210;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_211_211;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_212_212;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_213_213;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_214_214;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_215_215;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_216_216;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_217_217;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_218_218;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_219_219;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_220_220;
#line 287 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_221_221;
#line 290 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_222_222;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_223_223;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_224_224;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_225_225;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_226_226;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_227_227;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_228_228;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_229_229;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_230_230;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_231_231;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_232_232;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_233_233;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_234_234;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_235_235;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_236_236;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_237_237;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_238_238;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_239_239;
#line 290 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_240_240;
#line 293 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_241_241;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_242_242;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_243_243;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_244_244;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_245_245;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_246_246;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_247_247;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_248_248;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_249_249;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_250_250;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_251_251;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_252_252;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_253_253;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_254_254;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_255_255;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_256_256;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_257_257;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_258_258;
#line 293 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_259_259;
#line 296 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_260_260;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_261_261;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_262_262;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_263_263;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_264_264;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_265_265;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_266_266;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_267_267;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_268_268;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_269_269;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_270_270;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_271_271;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_272_272;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_273_273;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_274_274;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_275_275;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_276_276;
#line 296 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_277_277;
#line 296 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_278_278;
#line 299 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_279_279;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_280_280;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_281_281;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_282_282;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_283_283;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_284_284;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_285_285;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_286_286;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_287_287;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_288_288;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_289_289;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_290_290;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_291_291;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_292_292;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_293_293;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_294_294;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_295_295;
#line 299 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_296_296;
#line 299 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_297_297;
#line 307 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ForeignLanguages0_13;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_93_93;
#line 303 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_298_298;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_299_299;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_300_300;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_301_301;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_302_302;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_303_303;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_304_304;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_305_305;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_306_306;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_307_307;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_308_308;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_309_309;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_310_310;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_311_311;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_312_312;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_313_313;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_314_314;
#line 303 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_315_315;
#line 303 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_316_316;
#line 313 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_317_317;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_318_318;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_319_319;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_320_320;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_321_321;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_322_322;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_323_323;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_324_324;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_325_325;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_326_326;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_327_327;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_328_328;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_329_329;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_330_330;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_331_331;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_332_332;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_333_333;
#line 313 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_334_334;
#line 313 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_335_335;
#line 322 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_336_336;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_337_337;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_338_338;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_339_339;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_340_340;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_341_341;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_342_342;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_343_343;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_344_344;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_345_345;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_346_346;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_347_347;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_348_348;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_349_349;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_350_350;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_351_351;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_352_352;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_353_353;
#line 322 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_354_354;
#line 326 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_355_355;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_356_356;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_357_357;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_358_358;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_359_359;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_360_360;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_361_361;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_362_362;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_363_363;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_364_364;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_365_365;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_366_366;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_367_367;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_368_368;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_369_369;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_370_370;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_371_371;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_372_372;
#line 326 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_373_373;
#line 329 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_21_21;

#line 275 "make.module_dep_file.m"
        {
#line 275 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ProgDepStream_11, &make__module_dep_file__OldOutputStream_12);
        }
#line 276 "make.module_dep_file.m"
        {
#line 276 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "module(");
        }
#line 277 "make.module_dep_file.m"
        {
#line 277 "make.module_dep_file.m"
          make__module_dep_file__V_45_45 = make__module_dep_file__module_dependencies_version_number_0_f_0();
        }
#line 277 "make.module_dep_file.m"
        {
#line 277 "make.module_dep_file.m"
          mercury__io__write_int_3_p_0(make__module_dep_file__V_45_45);
        }
#line 278 "make.module_dep_file.m"
        {
#line 278 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) ", \"");
        }
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 279 "make.module_dep_file.m"
        make__module_dep_file__V_164_164 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 279 "make.module_dep_file.m"
        {
#line 279 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0(make__module_dep_file__V_49_49);
        }
#line 280 "make.module_dep_file.m"
        {
#line 280 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
        }
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_165_165 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 281 "make.module_dep_file.m"
        make__module_dep_file__V_183_183 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 281 "make.module_dep_file.m"
        {
#line 281 "make.module_dep_file.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__V_53_53);
        }
#line 283 "make.module_dep_file.m"
        {
#line 283 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
        }
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_184_184 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 284 "make.module_dep_file.m"
        make__module_dep_file__V_202_202 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 6793 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_377_377 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 284 "make.module_dep_file.m"
        {
#line 284 "make.module_dep_file.m"
          mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_377_377, make__module_dep_file__V_57_57, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[1]);
        }
#line 286 "make.module_dep_file.m"
        {
#line 286 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
        }
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 287 "make.module_dep_file.m"
        make__module_dep_file__V_221_221 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 287 "make.module_dep_file.m"
        {
#line 287 "make.module_dep_file.m"
          mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_377_377, make__module_dep_file__V_63_63, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[2]);
        }
#line 289 "make.module_dep_file.m"
        {
#line 289 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
        }
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_222_222 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 290 "make.module_dep_file.m"
        make__module_dep_file__V_240_240 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 290 "make.module_dep_file.m"
        {
#line 290 "make.module_dep_file.m"
          mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_377_377, make__module_dep_file__V_69_69, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[3]);
        }
#line 292 "make.module_dep_file.m"
        {
#line 292 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
        }
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_241_241 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 293 "make.module_dep_file.m"
        make__module_dep_file__V_259_259 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 293 "make.module_dep_file.m"
        {
#line 293 "make.module_dep_file.m"
          mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_377_377, make__module_dep_file__V_75_75, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[4]);
        }
#line 295 "make.module_dep_file.m"
        {
#line 295 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
        }
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_260_260 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 296 "make.module_dep_file.m"
        make__module_dep_file__V_278_278 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 296 "make.module_dep_file.m"
        {
#line 296 "make.module_dep_file.m"
          mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_377_377, make__module_dep_file__V_81_81, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[5]);
        }
#line 298 "make.module_dep_file.m"
        {
#line 298 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
        }
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_279_279 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 299 "make.module_dep_file.m"
        make__module_dep_file__V_297_297 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 299 "make.module_dep_file.m"
        {
#line 299 "make.module_dep_file.m"
          mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_dep_file__V_87_87, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[6]);
        }
#line 301 "make.module_dep_file.m"
        {
#line 301 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
        }
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_298_298 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__V_316_316 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 303 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_93_93)) == (MR_mktag((MR_Integer) 1)));
#line 303 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 303 "make.module_dep_file.m"
          {
#line 303 "make.module_dep_file.m"
            make__module_dep_file__ForeignLanguages0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_93_93, (MR_Integer) 0)));
#line 306 "make.module_dep_file.m"
            {
#line 306 "make.module_dep_file.m"
              make__module_dep_file__ForeignLanguages_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__ForeignLanguages0_13);
            }
#line 303 "make.module_dep_file.m"
          }
#line 303 "make.module_dep_file.m"
        else
#line 308 "make.module_dep_file.m"
          make__module_dep_file__ForeignLanguages_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 310 "make.module_dep_file.m"
        {
#line 310 "make.module_dep_file.m"
          mercury__io__write_list_5_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__ForeignLanguages_14, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[7]);
        }
#line 312 "make.module_dep_file.m"
        {
#line 312 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
        }
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_317_317 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 313 "make.module_dep_file.m"
        make__module_dep_file__V_335_335 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 313 "make.module_dep_file.m"
        {
#line 313 "make.module_dep_file.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, make__module_dep_file__V_99_99, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[8]);
        }
#line 321 "make.module_dep_file.m"
        {
#line 321 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n\t");
        }
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_336_336 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 322 "make.module_dep_file.m"
        make__module_dep_file__V_354_354 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 322 "make.module_dep_file.m"
        {
#line 322 "make.module_dep_file.m"
          make__module_dep_file__contains_foreign_export_to_string_2_p_0(make__module_dep_file__V_114_114, &make__module_dep_file__ContainsForeignExportStr_19);
        }
#line 324 "make.module_dep_file.m"
        {
#line 324 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0(make__module_dep_file__ContainsForeignExportStr_19);
        }
#line 325 "make.module_dep_file.m"
        {
#line 325 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n\t");
        }
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_355_355 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 326 "make.module_dep_file.m"
        make__module_dep_file__V_373_373 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 326 "make.module_dep_file.m"
        {
#line 326 "make.module_dep_file.m"
          make__module_dep_file__has_main_to_string_2_p_0(make__module_dep_file__V_118_118, &make__module_dep_file__HasMainStr_20);
        }
#line 327 "make.module_dep_file.m"
        {
#line 327 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0(make__module_dep_file__HasMainStr_20);
        }
#line 328 "make.module_dep_file.m"
        {
#line 328 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\n).\n");
        }
#line 329 "make.module_dep_file.m"
        {
#line 329 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_12, &make__module_dep_file__V_21_21);
        }
#line 330 "make.module_dep_file.m"
        {
#line 330 "make.module_dep_file.m"
          mercury__io__close_output_3_p_0(make__module_dep_file__ProgDepStream_11);
#line 330 "make.module_dep_file.m"
          return;
        }
#line 274 "make.module_dep_file.m"
      }
#line 268 "make.module_dep_file.m"
  }
#line 265 "make.module_dep_file.m"
}

#line 250 "make.module_dep_file.m"
static MR_Integer MR_CALL 
make__module_dep_file__module_dependencies_version_number_0_f_0(void)
#line 250 "make.module_dep_file.m"
{
#line 252 "make.module_dep_file.m"
  {
#line 252 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 252 "make.module_dep_file.m"
    return (MR_Integer) 1;
#line 252 "make.module_dep_file.m"
  }
#line 250 "make.module_dep_file.m"
}

#line 139 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
#line 139 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 139 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 139 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 139 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeImports_34,
#line 139 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_35,
#line 139 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_36)
#line 139 "make.module_dep_file.m"
{
#line 144 "make.module_dep_file.m"
  {
#line 144 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 144 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_15;
#line 144 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeSourceFileTimestamp_16;
#line 144 "make.module_dep_file.m"
    MR_String make__module_dep_file__DepFileName_17;
#line 144 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_18;
#line 144 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeDepFileTimestamp_19;
#line 144 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleDepMap2_31;
#line 144 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42;
#line 144 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_43_43;
#line 144 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_45_45;
#line 144 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_47_47;
#line 144 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_51_51;
#line 144 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_81_81;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 239 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_217_217;
#line 239 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 242 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeImportsPrime_32;
#line 240 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_MaybeImportsPrime_32;

#line 151 "make.module_dep_file.m"
    {
#line 151 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, (MR_String) ".m", (MR_Integer) 1, &make__module_dep_file__SourceFileName_15);
    }
#line 153 "make.module_dep_file.m"
    {
#line 153 "make.module_dep_file.m"
      make__module_dep_file__V_45_45 = mercury__dir__this_directory_0_f_0();
    }
#line 153 "make.module_dep_file.m"
    {
#line 153 "make.module_dep_file.m"
      make__module_dep_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_42_42, 0) = ((MR_Box) (make__module_dep_file__V_45_45));
#line 153 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "make.module_dep_file.m"
    }
#line 153 "make.module_dep_file.m"
    {
#line 153 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_42_42, make__module_dep_file__SourceFileName_15, &make__module_dep_file__MaybeSourceFileTimestamp_16, make__module_dep_file__STATE_VARIABLE_Info_0_35, &make__module_dep_file__STATE_VARIABLE_Info_43_43);
    }
#line 156 "make.module_dep_file.m"
    {
#line 156 "make.module_dep_file.m"
      make__module_dep_file__V_47_47 = make__make_module_dep_file_extension_0_f_0();
    }
#line 156 "make.module_dep_file.m"
    {
#line 156 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__V_47_47, (MR_Integer) 1, &make__module_dep_file__DepFileName_17);
    }
#line 158 "make.module_dep_file.m"
    {
#line 158 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_9, (MR_Integer) 641, &make__module_dep_file__SearchDirs_18);
    }
#line 160 "make.module_dep_file.m"
    {
#line 160 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__SearchDirs_18, make__module_dep_file__DepFileName_17, &make__module_dep_file__MaybeDepFileTimestamp_19, make__module_dep_file__STATE_VARIABLE_Info_43_43, &make__module_dep_file__STATE_VARIABLE_Info_51_51);
    }
#line 178 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__MaybeDepFileTimestamp_19)) == (MR_mktag((MR_Integer) 1))))
#line 231 "make.module_dep_file.m"
      if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 232 "make.module_dep_file.m"
        {
#line 232 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ModuleDepMap0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 232 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ModuleDepMap1_30;
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_175_175 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_176_176 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
#line 233 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
#line 233 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_183_183;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_184_184;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_185_185;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_186_186;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_187_187;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_188_188;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_189_189;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_190_190;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_191_191;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_192_192;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_193_193;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_194_194;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_195_195;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_196_196;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_197_197;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_198_198;
#line 236 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_199_199;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_200_200;
#line 236 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_182_182;

#line 235 "make.module_dep_file.m"
          {
#line 235 "make.module_dep_file.m"
            mercury__map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_29, &make__module_dep_file__ModuleDepMap1_30);
          }
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_194_194 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_195_195 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
#line 236 "make.module_dep_file.m"
          make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
#line 236 "make.module_dep_file.m"
          {
#line 236 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap1_30));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 1) = ((MR_Box) (make__module_dep_file__V_183_183));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 2) = ((MR_Box) (make__module_dep_file__V_184_184));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 3) = ((MR_Box) (make__module_dep_file__V_185_185));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 4) = ((MR_Box) (make__module_dep_file__V_186_186));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 5) = ((MR_Box) (make__module_dep_file__V_187_187));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 6) = ((MR_Box) (make__module_dep_file__V_188_188));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 7) = ((MR_Box) (make__module_dep_file__V_189_189));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 8) = ((MR_Box) (make__module_dep_file__V_190_190));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 9) = ((MR_Box) (make__module_dep_file__V_191_191));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 10) = ((MR_Box) (make__module_dep_file__V_192_192));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 11) = ((MR_Box) (make__module_dep_file__V_193_193));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 12) = ((MR_Box) ((make__module_dep_file__V_194_194 | ((make__module_dep_file__V_195_195 << (MR_Integer) 1)))));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 13) = ((MR_Box) (make__module_dep_file__V_196_196));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 14) = ((MR_Box) (make__module_dep_file__V_197_197));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 15) = ((MR_Box) (make__module_dep_file__V_198_198));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 16) = ((MR_Box) (make__module_dep_file__V_199_199));
#line 236 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 17) = ((MR_Box) (make__module_dep_file__V_200_200));
#line 236 "make.module_dep_file.m"
          }
#line 232 "make.module_dep_file.m"
        }
#line 231 "make.module_dep_file.m"
      else
#line 229 "make.module_dep_file.m"
        {
#line 229 "make.module_dep_file.m"
          make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
        }
#line 178 "make.module_dep_file.m"
    else
#line 178 "make.module_dep_file.m"
      {
#line 178 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeDepFileTimestamp_19, (MR_Integer) 0)));

#line 178 "make.module_dep_file.m"
        if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp_16)) == (MR_mktag((MR_Integer) 1))))
#line 179 "make.module_dep_file.m"
          {
#line 179 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_57_57;
#line 179 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_59_59;
#line 179 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_90_90;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_91_91;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_92_92;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_93_93;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_94_94;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_95_95;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_96_96;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_97_97;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_98_98;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_99_99;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_100_100;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_101_101;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_102_102;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_103_103;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_104_104;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_105_105;
#line 189 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_106_106;
#line 189 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_107_107;
#line 189 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv0_STATE_VARIABLE_MaybeImports_60_60;
#line 218 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Imports0_23;
#line 191 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_61_61;
#line 191 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_249_249;
#line 192 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_108_108;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_109_109;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_110_110;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_111_111;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_113_113;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_114_114;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_115_115;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_116_116;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_117_117;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_118_118;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_119_119;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_120_120;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_121_121;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_122_122;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_123_123;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_124_124;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_125_125;
#line 192 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_126_126;

#line 181 "make.module_dep_file.m"
            {
#line 181 "make.module_dep_file.m"
              make__module_dep_file__read_module_dependencies_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_57_57);
            }
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 0)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 1)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 2)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 3)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 4)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 5)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 6)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 7)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 8)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 9)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 10)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 11)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_101_101 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 13)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 14)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 15)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 16)));
#line 189 "make.module_dep_file.m"
            make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 17)));
#line 189 "make.module_dep_file.m"
            {
#line 189 "make.module_dep_file.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_59_59, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_STATE_VARIABLE_MaybeImports_60_60);
            }
#line 189 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60 = ((MR_Word) make__module_dep_file__conv0_STATE_VARIABLE_MaybeImports_60_60);
#line 191 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 191 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 191 "make.module_dep_file.m"
              {
#line 191 "make.module_dep_file.m"
                make__module_dep_file__Imports0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60, (MR_Integer) 0)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 0)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 1)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 2)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 3)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 4)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 5)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 6)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 7)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 8)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 9)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 10)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 11)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 12)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 13)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 14)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 15)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 16)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 17)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 18)));
#line 192 "make.module_dep_file.m"
                make__module_dep_file__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 19)));
#line 192 "make.module_dep_file.m"
                {
#line 192 "make.module_dep_file.m"
                  make__module_dep_file__V_249_249 = mercury__dir__this_directory_0_f_0();
                }
#line 192 "make.module_dep_file.m"
                make__module_dep_file__succeeded = (strcmp(make__module_dep_file__V_61_61, make__module_dep_file__V_249_249) == 0);
#line 191 "make.module_dep_file.m"
              }
#line 218 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 194 "make.module_dep_file.m"
              {
#line 194 "make.module_dep_file.m"
                MR_String make__module_dep_file__SourceFileName1_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 0)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__MaybeSourceFileTimestamp1_25;
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_62_62;
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 194 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_65_65;
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 1)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 2)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 3)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 4)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 5)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 6)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 7)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 8)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 9)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 10)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 11)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 12)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 13)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 14)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 15)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 16)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 17)));
#line 194 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 18)));
#line 194 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 19)));

#line 195 "make.module_dep_file.m"
                {
#line 195 "make.module_dep_file.m"
                  make__module_dep_file__V_65_65 = mercury__dir__this_directory_0_f_0();
                }
#line 195 "make.module_dep_file.m"
                {
#line 195 "make.module_dep_file.m"
                  make__module_dep_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_62_62, 0) = ((MR_Box) (make__module_dep_file__V_65_65));
#line 195 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 195 "make.module_dep_file.m"
                }
#line 195 "make.module_dep_file.m"
                {
#line 195 "make.module_dep_file.m"
                  make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_62_62, make__module_dep_file__SourceFileName1_24, &make__module_dep_file__MaybeSourceFileTimestamp1_25, make__module_dep_file__STATE_VARIABLE_Info_57_57, &make__module_dep_file__STATE_VARIABLE_Info_63_63);
                }
#line 208 "make.module_dep_file.m"
                if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp1_25)) == (MR_mktag((MR_Integer) 1))))
#line 209 "make.module_dep_file.m"
                  {
#line 209 "make.module_dep_file.m"
                    MR_String make__module_dep_file__Message_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));
#line 209 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_75_75;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_146_146;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_147_147;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_148_148;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_149_149;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_150_150;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_151_151;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_152_152;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_153_153;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_154_154;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_155_155;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_156_156;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_157_157;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_158_158;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_159_159;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_160_160;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_161_161;
#line 215 "make.module_dep_file.m"
                    MR_Integer make__module_dep_file__V_162_162;
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_163_163;

#line 210 "make.module_dep_file.m"
                    {
#line 210 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
                    }
#line 211 "make.module_dep_file.m"
                    {
#line 211 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName1_24);
                    }
#line 212 "make.module_dep_file.m"
                    {
#line 212 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
                    }
#line 213 "make.module_dep_file.m"
                    {
#line 213 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0(make__module_dep_file__Message_27);
                    }
#line 214 "make.module_dep_file.m"
                    {
#line 214 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) ".\n");
                    }
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 0)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 1)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 2)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 3)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 4)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 5)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 6)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 7)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 8)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 9)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 10)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 11)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_158_158 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_159_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 13)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 14)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 15)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 16)));
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 17)));
#line 215 "make.module_dep_file.m"
                    {
#line 215 "make.module_dep_file.m"
                      make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_11, make__module_dep_file__V_75_75);
                    }
#line 215 "make.module_dep_file.m"
                    make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 209 "make.module_dep_file.m"
                  }
#line 208 "make.module_dep_file.m"
                else
#line 198 "make.module_dep_file.m"
                  {
#line 198 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__SourceFileTimestamp1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));

#line 200 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
#line 201 "make.module_dep_file.m"
                    if (!(make__module_dep_file__succeeded))
#line 201 "make.module_dep_file.m"
                      {
#line 201 "make.module_dep_file.m"
                        MR_Word make__module_dep_file__V_250_250;

#line 201 "make.module_dep_file.m"
                        {
#line 201 "make.module_dep_file.m"
                          libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_250_250, make__module_dep_file__V_251_251, make__module_dep_file__SourceFileTimestamp1_26);
                        }
#line 201 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_250_250);
#line 201 "make.module_dep_file.m"
                      }
#line 205 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 204 "make.module_dep_file.m"
                      make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 205 "make.module_dep_file.m"
                    else
#line 206 "make.module_dep_file.m"
                      {
#line 206 "make.module_dep_file.m"
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_63_63, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
                      }
#line 198 "make.module_dep_file.m"
                  }
#line 194 "make.module_dep_file.m"
              }
#line 218 "make.module_dep_file.m"
            else
#line 219 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_57_57;
#line 179 "make.module_dep_file.m"
          }
#line 178 "make.module_dep_file.m"
        else
#line 163 "make.module_dep_file.m"
          {
#line 163 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SourceFileTimestamp_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp_16, (MR_Integer) 0)));

#line 166 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
#line 167 "make.module_dep_file.m"
            if (!(make__module_dep_file__succeeded))
#line 167 "make.module_dep_file.m"
              {
#line 167 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_248_248;

#line 167 "make.module_dep_file.m"
                {
#line 167 "make.module_dep_file.m"
                  libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_248_248, make__module_dep_file__V_251_251, make__module_dep_file__SourceFileTimestamp_20);
                }
#line 167 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_248_248);
#line 167 "make.module_dep_file.m"
              }
#line 175 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 173 "make.module_dep_file.m"
              {
#line 173 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_no_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
              }
#line 175 "make.module_dep_file.m"
            else
#line 176 "make.module_dep_file.m"
              {
#line 176 "make.module_dep_file.m"
                make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
              }
#line 163 "make.module_dep_file.m"
          }
#line 178 "make.module_dep_file.m"
      }
#line 239 "make.module_dep_file.m"
    make__module_dep_file__ModuleDepMap2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 0)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 1)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 2)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 3)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 4)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 5)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 6)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 7)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 8)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 9)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 10)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 11)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_212_212 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 13)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 14)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 15)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 16)));
#line 239 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 17)));
#line 240 "make.module_dep_file.m"
    {
#line 240 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__ModuleDepMap2_31, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv1_MaybeImportsPrime_32);
    }
#line 240 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 240 "make.module_dep_file.m"
      {
#line 240 "make.module_dep_file.m"
        make__module_dep_file__MaybeImportsPrime_32 = ((MR_Word) make__module_dep_file__conv1_MaybeImportsPrime_32);
#line 240 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 240 "make.module_dep_file.m"
      }
#line 242 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 241 "make.module_dep_file.m"
      {
#line 241 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeImports_34 = make__module_dep_file__MaybeImportsPrime_32;
#line 241 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_36 = make__module_dep_file__STATE_VARIABLE_Info_81_81;
#line 241 "make.module_dep_file.m"
      }
#line 242 "make.module_dep_file.m"
    else
#line 243 "make.module_dep_file.m"
      {
#line 243 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepMap_33;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_220_220;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_221_221;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_222_222;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_223_223;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_224_224;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_225_225;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_226_226;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_227_227;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_228_228;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_229_229;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_230_230;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_231_231;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_232_232;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_233_233;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_234_234;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_235_235;
#line 245 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_236_236;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_237_237;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_219_219;

#line 243 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeImports_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "make.module_dep_file.m"
        {
#line 244 "make.module_dep_file.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap2_31, &make__module_dep_file__ModuleDepMap_33);
        }
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 0)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 1)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 2)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 3)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 4)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 5)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 6)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 7)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 8)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 9)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 10)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 11)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_231_231 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_232_232 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 13)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 14)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 15)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_236_236 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 16)));
#line 245 "make.module_dep_file.m"
        make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 17)));
#line 245 "make.module_dep_file.m"
        {
#line 245 "make.module_dep_file.m"
          MR_Word base;
#line 245 "make.module_dep_file.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 245 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_36 = base;
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_33));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_220_220));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_221_221));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_222_222));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_223_223));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_224_224));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_225_225));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_226_226));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_227_227));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_228_228));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_229_229));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_230_230));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((make__module_dep_file__V_231_231 | ((make__module_dep_file__V_232_232 << (MR_Integer) 1)))));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_233_233));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_234_234));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_235_235));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_236_236));
#line 245 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_237_237));
#line 245 "make.module_dep_file.m"
        }
#line 243 "make.module_dep_file.m"
      }
#line 144 "make.module_dep_file.m"
  }
#line 139 "make.module_dep_file.m"
}

#line 126 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
#line 126 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 126 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 126 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 126 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeImports_12,
#line 126 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
#line 126 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17)
#line 126 "make.module_dep_file.m"
{
#line 134 "make.module_dep_file.m"
  {
#line 134 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 134 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeImports0_15;
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
#line 132 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
#line 132 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
#line 132 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_MaybeImports0_15;

#line 132 "make.module_dep_file.m"
    {
#line 132 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_20_20, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_MaybeImports0_15);
    }
#line 132 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 132 "make.module_dep_file.m"
      {
#line 132 "make.module_dep_file.m"
        make__module_dep_file__MaybeImports0_15 = ((MR_Word) make__module_dep_file__conv0_MaybeImports0_15);
#line 132 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 132 "make.module_dep_file.m"
      }
#line 134 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 133 "make.module_dep_file.m"
      {
#line 133 "make.module_dep_file.m"
        *make__module_dep_file__MaybeImports_12 = make__module_dep_file__MaybeImports0_15;
#line 133 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_17 = make__module_dep_file__STATE_VARIABLE_Info_0_16;
#line 133 "make.module_dep_file.m"
      }
#line 134 "make.module_dep_file.m"
    else
#line 135 "make.module_dep_file.m"
      {
#line 135 "make.module_dep_file.m"
        make__module_dep_file__do_get_module_dependencies_8_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__MaybeImports_12, make__module_dep_file__STATE_VARIABLE_Info_0_16, make__module_dep_file__STATE_VARIABLE_Info_17);
#line 135 "make.module_dep_file.m"
        return;
      }
#line 134 "make.module_dep_file.m"
  }
#line 126 "make.module_dep_file.m"
}

#line 108 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
#line 108 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_1,
#line 108 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
#line 108 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_3,
#line 108 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_4,
#line 108 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_5,
#line 108 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__6_6,
#line 108 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7)
#line 108 "make.module_dep_file.m"
{
#line 112 "make.module_dep_file.m"
  {
#line 112 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 112 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__4_4 == (MR_Integer) 0))
#line 115 "make.module_dep_file.m"
      {
#line 115 "make.module_dep_file.m"
        MR_Word make__module_dep_file__MaybeImports_26;

#line 116 "make.module_dep_file.m"
        {
#line 116 "make.module_dep_file.m"
          make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_1, make__module_dep_file__RebuildModuleDeps_2, make__module_dep_file__ModuleName_3, &make__module_dep_file__MaybeImports_26, make__module_dep_file__HeadVar__6_6, make__module_dep_file__STATE_VARIABLE_Info_7);
        }
#line 121 "make.module_dep_file.m"
        if ((make__module_dep_file__MaybeImports_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 123 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 121 "make.module_dep_file.m"
        else
#line 120 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 0;
#line 115 "make.module_dep_file.m"
      }
#line 112 "make.module_dep_file.m"
    else
#line 112 "make.module_dep_file.m"
      {
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_18_18;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_19_19;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_34_34;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_35_35;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_36_36;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_37_37;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_38_38;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_39_39;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_40_40;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_41_41;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_42_42;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_43_43;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_44_44;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_45_45;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_46_46;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_47_47;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_48_48;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_49_49;
#line 112 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_50_50;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_51_51;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_53_53;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_54_54;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_55_55;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_56_56;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_58_58;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_59_59;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_60_60;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_61_61;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_62_62;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_64_64;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_65_65;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_66_66;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_67_67;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68;
#line 112 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_69_69;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70;
#line 112 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_52_52;

#line 112 "make.module_dep_file.m"
        *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 0)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 1)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 2)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 3)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 4)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 5)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 6)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 7)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 8)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 9)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 10)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 11)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 13)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 14)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 15)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 16)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 17)));
#line 112 "make.module_dep_file.m"
        {
#line 112 "make.module_dep_file.m"
          make__module_dep_file__V_19_19 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_3)), make__module_dep_file__V_18_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 0)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 1)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 2)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 3)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 4)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 5)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 6)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 7)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 8)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 9)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 10)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 11)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_64_64 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 13)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 14)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 15)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 16)));
#line 112 "make.module_dep_file.m"
        make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 17)));
#line 112 "make.module_dep_file.m"
        {
#line 112 "make.module_dep_file.m"
          MR_Word base;
#line 112 "make.module_dep_file.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 112 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_7 = base;
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_53_53));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_54_54));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_55_55));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_56_56));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_57_57));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_58_58));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_59_59));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_60_60));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_61_61));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_62_62));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_63_63));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((make__module_dep_file__V_64_64 | ((make__module_dep_file__V_65_65 << (MR_Integer) 1)))));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_66_66));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_67_67));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_68_68));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_69_69));
#line 112 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_70_70));
#line 112 "make.module_dep_file.m"
        }
#line 112 "make.module_dep_file.m"
      }
#line 112 "make.module_dep_file.m"
  }
#line 108 "make.module_dep_file.m"
}

#line 37 "make.module_dep_file.m"
void MR_CALL 
make__module_dep_file__write_module_dep_file_4_p_0(
#line 37 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 37 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports0_6)
#line 37 "make.module_dep_file.m"
{
#line 254 "make.module_dep_file.m"
  {
#line 254 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 254 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Items0_8;
#line 254 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Items_11;
#line 254 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Imports_12;
#line 254 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_15_15;
#line 254 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 254 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;
#line 254 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24;
#line 254 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;
#line 254 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file___Specs_9;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file___Errors_10;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_25_25;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40;
#line 258 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_41_41;

#line 256 "make.module_dep_file.m"
    {
#line 256 "make.module_dep_file.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(make__module_dep_file__Imports0_6, &make__module_dep_file__Items0_8, &make__module_dep_file___Specs_9, &make__module_dep_file___Errors_10);
    }
#line 257 "make.module_dep_file.m"
    {
#line 257 "make.module_dep_file.m"
      parse_tree__modules__strip_imported_items_2_p_0(make__module_dep_file__Items0_8, &make__module_dep_file__Items_11);
    }
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 0)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 1)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 2)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 3)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 4)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 5)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 6)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 7)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 8)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 9)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 10)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 11)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 12)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 13)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 14)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 15)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 16)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 17)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 18)));
#line 258 "make.module_dep_file.m"
    make__module_dep_file__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 19)));
#line 258 "make.module_dep_file.m"
    {
#line 258 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 258 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, 0) = ((MR_Box) (make__module_dep_file__V_24_24));
#line 258 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, 1) = ((MR_Box) (make__module_dep_file__Items_11));
#line 258 "make.module_dep_file.m"
    }
#line 258 "make.module_dep_file.m"
    {
#line 258 "make.module_dep_file.m"
      parse_tree__module_imports__init_dependencies_8_p_0(make__module_dep_file__V_15_15, make__module_dep_file__V_23_23, make__module_dep_file__V_31_31, make__module_dep_file__V_37_37, (MR_Integer) 0, make__module_dep_file__Globals_5, make__module_dep_file__V_20_20, &make__module_dep_file__Imports_12);
    }
#line 263 "make.module_dep_file.m"
    {
#line 263 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(make__module_dep_file__Globals_5, make__module_dep_file__Imports_12);
#line 263 "make.module_dep_file.m"
      return;
    }
#line 254 "make.module_dep_file.m"
  }
#line 37 "make.module_dep_file.m"
}

#line 90 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
#line 90 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 90 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 90 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 90 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 90 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 90 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 90 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 90 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 90 "make.module_dep_file.m"
{
#line 90 "make.module_dep_file.m"
  {
#line 90 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 90 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_HeadVar__5_5;
#line 90 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_STATE_VARIABLE_Info_7;

#line 90 "make.module_dep_file.m"
    {
#line 90 "make.module_dep_file.m"
      make__module_dep_file__generate_ancestor_dependencies_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv1_STATE_VARIABLE_Info_7);
    }
#line 90 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_HeadVar__5_5));
#line 90 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv1_STATE_VARIABLE_Info_7));
#line 90 "make.module_dep_file.m"
  }
#line 90 "make.module_dep_file.m"
}

#line 33 "make.module_dep_file.m"
void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0(
#line 33 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 33 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_9,
#line 33 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeImports_10,
#line 33 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 33 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 33 "make.module_dep_file.m"
{
#line 68 "make.module_dep_file.m"
  {
#line 68 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 68 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RebuildModuleDeps_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
#line 69 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
#line 69 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));

#line 74 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ModuleName_9)) == (MR_mktag((MR_Integer) 1))))
#line 81 "make.module_dep_file.m"
      {
#line 81 "make.module_dep_file.m"
        MR_Word make__module_dep_file__MaybeImportsPrime_17;
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
#line 77 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
#line 77 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
#line 77 "make.module_dep_file.m"
        MR_Box make__module_dep_file__conv0_MaybeImportsPrime_17;

#line 77 "make.module_dep_file.m"
        {
#line 77 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_26_26, ((MR_Box) (make__module_dep_file__ModuleName_9)), &make__module_dep_file__conv0_MaybeImportsPrime_17);
        }
#line 77 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 77 "make.module_dep_file.m"
          {
#line 77 "make.module_dep_file.m"
            make__module_dep_file__MaybeImportsPrime_17 = ((MR_Word) make__module_dep_file__conv0_MaybeImportsPrime_17);
#line 77 "make.module_dep_file.m"
            make__module_dep_file__succeeded = MR_TRUE;
#line 77 "make.module_dep_file.m"
          }
#line 81 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 80 "make.module_dep_file.m"
          {
#line 80 "make.module_dep_file.m"
            *make__module_dep_file__MaybeImports_10 = make__module_dep_file__MaybeImportsPrime_17;
#line 80 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
#line 80 "make.module_dep_file.m"
          }
#line 81 "make.module_dep_file.m"
        else
#line 89 "make.module_dep_file.m"
          {
#line 89 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_118_118;
#line 89 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Ancestors_18;
#line 89 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Error_19;
#line 89 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_27_27;
#line 89 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_29_29;
#line 90 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv5_Error_19;
#line 90 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29;
#line 90 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30;

#line 89 "make.module_dep_file.m"
            {
#line 89 "make.module_dep_file.m"
              make__module_dep_file__Ancestors_18 = mdbcomp__prim_data__get_ancestors_1_f_0(make__module_dep_file__ModuleName_9);
            }
#line 90 "make.module_dep_file.m"
            {
#line 90 "make.module_dep_file.m"
              make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 90 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[0]));
#line 90 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__get_module_dependencies_7_p_0_1));
#line 90 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 90 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_8));
#line 90 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__RebuildModuleDeps_13));
#line 90 "make.module_dep_file.m"
            }
#line 9049 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_118_118 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 90 "make.module_dep_file.m"
            {
#line 90 "make.module_dep_file.m"
              mercury__list__foldl3_8_p_2(make__module_dep_file__TypeCtorInfo_118_118, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__Ancestors_18, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv5_Error_19, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_22)), &make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30);
            }
#line 90 "make.module_dep_file.m"
            make__module_dep_file__Error_19 = ((MR_Word) make__module_dep_file__conv5_Error_19);
#line 90 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_29_29 = ((MR_Word) make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29);
#line 100 "make.module_dep_file.m"
            if ((make__module_dep_file__Error_19 == (MR_Integer) 0))
#line 102 "make.module_dep_file.m"
              {
#line 102 "make.module_dep_file.m"
                make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeImports_10, make__module_dep_file__STATE_VARIABLE_Info_29_29, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 102 "make.module_dep_file.m"
                return;
              }
#line 100 "make.module_dep_file.m"
            else
#line 94 "make.module_dep_file.m"
              {
#line 94 "make.module_dep_file.m"
                MR_Word make__module_dep_file__ModuleDepMap0_20;
#line 94 "make.module_dep_file.m"
                MR_Word make__module_dep_file__ModuleDepMap_21;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_72_72;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_73_73;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_74_74;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_75_75;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_76_76;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_77_77;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_78_78;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_79_79;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_80_80;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_81_81;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_82_82;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_83_83;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_84_84;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_85_85;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_86_86;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_87_87;
#line 96 "make.module_dep_file.m"
                MR_Integer make__module_dep_file__V_88_88;
#line 96 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_89_89;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_91_91;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_92_92;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_93_93;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_94_94;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_95_95;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_96_96;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_97_97;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_98_98;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_99_99;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_100_100;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_101_101;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_102_102;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_103_103;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_104_104;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_105_105;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_106_106;
#line 99 "make.module_dep_file.m"
                MR_Integer make__module_dep_file__V_107_107;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_108_108;
#line 99 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_90_90;

#line 95 "make.module_dep_file.m"
                *make__module_dep_file__MaybeImports_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__ModuleDepMap0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_83_83 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 96 "make.module_dep_file.m"
                make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 98 "make.module_dep_file.m"
                {
#line 98 "make.module_dep_file.m"
                  mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_118_118, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_9)), ((MR_Box) (*make__module_dep_file__MaybeImports_10)), make__module_dep_file__ModuleDepMap0_20, &make__module_dep_file__ModuleDepMap_21);
                }
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_102_102 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 99 "make.module_dep_file.m"
                make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 99 "make.module_dep_file.m"
                {
#line 99 "make.module_dep_file.m"
                  MR_Word base;
#line 99 "make.module_dep_file.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 99 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_23 = base;
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_21));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_91_91));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_92_92));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_93_93));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_94_94));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_95_95));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_96_96));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_97_97));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_98_98));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_100_100));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_101_101));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((make__module_dep_file__V_102_102 | ((make__module_dep_file__V_103_103 << (MR_Integer) 1)))));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_104_104));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_105_105));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_106_106));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_107_107));
#line 99 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_108_108));
#line 99 "make.module_dep_file.m"
                }
#line 94 "make.module_dep_file.m"
              }
#line 89 "make.module_dep_file.m"
          }
#line 81 "make.module_dep_file.m"
      }
#line 74 "make.module_dep_file.m"
    else
#line 72 "make.module_dep_file.m"
      {
#line 72 "make.module_dep_file.m"
        make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeImports_10, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 72 "make.module_dep_file.m"
        return;
      }
#line 68 "make.module_dep_file.m"
  }
#line 33 "make.module_dep_file.m"
}

void mercury__make__module_dep_file__init(void)
{
}

void mercury__make__module_dep_file__init_type_tables(void)
{
}

void mercury__make__module_dep_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module make.module_dep_file. */
