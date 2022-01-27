/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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



#line 672 "make.module_dep_file.m"
struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s {
#line 672 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3;
#line 672 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4;
#line 675 "make.module_dep_file.m"
  MR_bool make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 675 "make.module_dep_file.m"
  jmp_buf make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0;
#line 675 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27;
#line 675 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28;
#line 675 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30;
#line 675 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5;
#line 675 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6;
#line 675 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7;
#line 675 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29;
#line 676 "make.module_dep_file.m"
  MR_Box make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5;
#line 672 "make.module_dep_file.m"
};


#line 196 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 199 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 202 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 205 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 208 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 211 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 214 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct2 make__module_dep_file__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 217 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 220 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0;

#line 223 "make.module_dep_file.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 226 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 229 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0;

#line 232 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1;

#line 235 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2];

#line 238 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2];

#line 241 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2];

#line 244 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 247 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 249 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2);

#line 252 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 255 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 257 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 259 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3);

#line 858 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 858 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 858 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 858 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 858 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 851 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 851 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 851 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 851 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26);

#line 292 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 295 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 297 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 299 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 611 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 611 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 611 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 310 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 313 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 315 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 317 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 611 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 611 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 611 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 328 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 331 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 333 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 335 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 611 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 611 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 611 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 346 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 349 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 351 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 353 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 611 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 611 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 611 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 884 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__884__1_6_p_0(
#line 884 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 884 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 884 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 884 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 872 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__872__1_6_p_0(
#line 872 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 872 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 872 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 872 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 858 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_short_interfaces__858__1_5_p_0(
#line 858 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 858 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 858 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_34);

#line 834 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__832__1_7_p_0_1(
#line 834 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 834 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 834 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 834 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 832 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__832__1_7_p_0(
#line 832 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 832 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleImportList_33,
#line 832 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_89,
#line 832 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_90,
#line 832 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_91);

#line 802 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__802__1_3_p_0(
#line 802 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_66,
#line 802 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_67,
#line 802 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_68);

#line 620 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__620__1_2_p_0(
#line 620 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 620 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7);

#line 342 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__342__1_3_p_0(
#line 342 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_369);

#line 71 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
#line 71 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__1_1,
#line 71 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2,
#line 71 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_3);

#line 71 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
#line 71 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_1,
#line 71 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2);

#line 891 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 891 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 891 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2);

#line 884 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 884 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 884 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 884 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 884 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 884 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 884 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 880 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 880 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 880 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 880 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 880 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 872 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 872 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 872 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 868 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 868 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 868 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 868 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 868 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 851 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 851 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 851 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 851 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26);

#line 837 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 837 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 837 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 837 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 837 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 837 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 832 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 832 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 832 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 832 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 832 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 832 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 832 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 825 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 825 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 825 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 825 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 825 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 825 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 820 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 820 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 820 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 820 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 822 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 822 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 822 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 822 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 822 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 822 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 822 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 822 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 822 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);

#line 802 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 802 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 802 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 802 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 802 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 799 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 799 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 799 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 799 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 747 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 747 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 747 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 747 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_43,
#line 747 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_44);

#line 730 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 730 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 730 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 730 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8);

#line 679 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 679 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 679 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6);

#line 675 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 675 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 676 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 676 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 675 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 675 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 675 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 675 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 672 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 672 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 672 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4);

#line 666 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 666 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 666 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4);

#line 659 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 659 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1);

#line 652 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 652 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 652 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4);

#line 643 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 643 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 643 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4);

#line 633 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 633 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 633 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4);

#line 627 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 627 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 627 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4);

#line 622 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 622 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 622 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4);

#line 768 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 771 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 773 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 775 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 617 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 617 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 617 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4);

#line 605 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 605 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 605 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 605 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 600 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 600 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 600 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4);

#line 594 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 594 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 594 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4);

#line 578 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 578 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 578 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 578 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 578 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 578 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 481 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 481 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 481 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 481 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_65,
#line 481 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_66);

#line 723 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 723 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 723 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 723 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 723 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 723 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 723 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 723 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 440 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 440 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 440 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 440 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 440 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 440 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_28,
#line 440 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_29);

#line 431 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 431 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 431 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 431 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 431 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 431 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14);

#line 421 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 421 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 421 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 421 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 421 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 421 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15);

#line 407 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 407 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 407 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4);

#line 391 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 391 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 391 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4);

#line 381 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 381 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4);

#line 372 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 372 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4);

#line 367 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 367 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 353 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 353 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 353 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 353 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 353 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 350 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
#line 350 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 350 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 350 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 350 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 342 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
#line 342 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 342 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 342 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 342 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 339 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
#line 339 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 339 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 339 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 339 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 336 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
#line 336 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 336 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 336 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 336 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 333 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
#line 333 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 333 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 333 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 333 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 330 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
#line 330 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 330 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 330 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 330 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 327 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
#line 327 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 327 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 327 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 327 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 313 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
#line 313 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports_5,
#line 313 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Version_6);

#line 277 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 277 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 277 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports_6);

#line 155 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
#line 155 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 155 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 155 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 155 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeImports_34,
#line 155 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_35,
#line 155 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_36);

#line 142 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
#line 142 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 142 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 142 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 142 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeImports_12,
#line 142 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
#line 142 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17);

#line 124 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
#line 124 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_1,
#line 124 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
#line 124 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_3,
#line 124 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_4,
#line 124 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_5,
#line 124 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__6_6,
#line 124 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7);

#line 76 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
#line 76 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 76 "make.module_dep_file.m"
  MR_Integer * make__module_dep_file__HeadVar__2_2);

#line 107 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
#line 107 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 107 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 107 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 107 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 107 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 107 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 107 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 107 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[6][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[16][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[2][12];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[6][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][8];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[2][11];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[4][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[5][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[1][13];

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[1][10];

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[1][7];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[6][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[3])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[4])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[0])),
    ((MR_Box) (make__module_dep_file__sym_names_term_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[5])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[1])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[2])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[3])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[4])),
    ((MR_Box) (make__module_dep_file__braces_term__ho5_3_p_0_1)),
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[6][6] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][8] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "error in nested sub-modules"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "failed to parse term"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 10000))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0))
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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



#line 1648 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1656 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1664 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1672 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1680 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1688 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1697 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct2 make__module_dep_file__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1706 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__module_dep_file__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1714 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1722 "make.module_dep_file.c"
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

#line 1737 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 1745 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0 = {
  (MR_String) "module_dep_file_v1",
  (MR_Integer) 0
};

#line 1751 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1 = {
  (MR_String) "module_dep_file_v2",
  (MR_Integer) 1
};

#line 1757 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1763 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1769 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1775 "make.module_dep_file.c"
const MR_TypeCtorInfo_Struct make__module_dep_file__make__module_dep_file__type_ctor_info_module_dep_file_version_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__module_dep_file____Unify____module_dep_file_version_0_0_10001)),
  ((MR_Box) (make__module_dep_file____Compare____module_dep_file_version_0_0_10001)),
  (MR_String) "make.module_dep_file",
  (MR_String) "module_dep_file_version",
  {
    make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0
  },
  {
    make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0
};

#line 1796 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 1799 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 1801 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2)
#line 1803 "make.module_dep_file.c"
{
#line 1805 "make.module_dep_file.c"
  {
#line 1807 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;

#line 1810 "make.module_dep_file.c"
    {
#line 1812 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file____Unify____module_dep_file_version_0_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2));
    }
#line 1815 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 1817 "make.module_dep_file.c"
  }
#line 1819 "make.module_dep_file.c"
}

#line 1822 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 1825 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 1827 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 1829 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3)
#line 1831 "make.module_dep_file.c"
{
#line 1833 "make.module_dep_file.c"
  {
#line 1835 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__1_1;

#line 1838 "make.module_dep_file.c"
    {
#line 1840 "make.module_dep_file.c"
      make__module_dep_file____Compare____module_dep_file_version_0_0(&make__module_dep_file__conv0_HeadVar__1_1, ((MR_Word) make__module_dep_file__wrapper_arg_2), ((MR_Word) make__module_dep_file__wrapper_arg_3));
    }
#line 1843 "make.module_dep_file.c"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__1_1));
#line 1845 "make.module_dep_file.c"
  }
#line 1847 "make.module_dep_file.c"
}

#line 858 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 858 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 858 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 858 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 858 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 858 "make.module_dep_file.m"
{
#line 858 "make.module_dep_file.m"
  {
#line 858 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 858 "make.module_dep_file.m"
    {
#line 858 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_short_interfaces__858__1_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 858 "make.module_dep_file.m"
      return;
    }
#line 858 "make.module_dep_file.m"
  }
#line 858 "make.module_dep_file.m"
}

#line 851 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 851 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 851 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 851 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26)
#line 851 "make.module_dep_file.m"
{
#line 856 "make.module_dep_file.m"
  {
#line 856 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 856 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OutputStream_19;
#line 856 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__ExitStatus_24;
#line 856 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 858 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_STATE_VARIABLE_IO_31_31;
#line 864 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;

#line 857 "make.module_dep_file.m"
    {
#line 857 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_11, &make__module_dep_file__OutputStream_19);
    }
#line 858 "make.module_dep_file.m"
    {
#line 858 "make.module_dep_file.m"
      make__module_dep_file__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 858 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[1]));
#line 858 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 1) = ((MR_Box) (make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1));
#line 858 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 858 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 3) = ((MR_Box) (make__module_dep_file__SourceFileName_12));
#line 858 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 4) = ((MR_Box) (make__module_dep_file__Globals_14));
#line 858 "make.module_dep_file.m"
    }
#line 858 "make.module_dep_file.m"
    {
#line 858 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &make__module_dep_file_scalar_common_2[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_30_30, make__module_dep_file__SubModuleList_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_STATE_VARIABLE_IO_31_31);
    }
#line 864 "make.module_dep_file.m"
    {
#line 864 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__OutputStream_19, &make__module_dep_file__V_23_23);
    }
#line 865 "make.module_dep_file.m"
    {
#line 865 "make.module_dep_file.m"
      mercury__io__get_exit_status_3_p_0(&make__module_dep_file__ExitStatus_24);
    }
#line 866 "make.module_dep_file.m"
    make__module_dep_file__succeeded = (make__module_dep_file__ExitStatus_24 == (MR_Integer) 0);
#line 866 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 866 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 1;
#line 866 "make.module_dep_file.m"
    else
#line 866 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 0;
#line 866 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_26 = make__module_dep_file__STATE_VARIABLE_Info_0_25;
#line 856 "make.module_dep_file.m"
  }
#line 851 "make.module_dep_file.m"
}

#line 1967 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 1970 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 1972 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 1974 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 1976 "make.module_dep_file.c"
{
#line 1978 "make.module_dep_file.c"
  {
#line 1980 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 1982 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 1984 "make.module_dep_file.c"
    MR_String make__module_dep_file__conv0_FactDep_4;

#line 1987 "make.module_dep_file.c"
    {
#line 1989 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__fact_dep_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_FactDep_4);
    }
#line 1992 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 1994 "make.module_dep_file.c"
      {
#line 1996 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_FactDep_4));
#line 1998 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2000 "make.module_dep_file.c"
      }
#line 2002 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2004 "make.module_dep_file.c"
  }
#line 2006 "make.module_dep_file.c"
}

#line 611 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 611 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 611 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 611 "make.module_dep_file.m"
{
#line 613 "make.module_dep_file.m"
  {
#line 613 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 613 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 608 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 608 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
      {
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
          {
#line 608 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 614 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 613 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 613 "make.module_dep_file.m"
              {
#line 2057 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 615 "make.module_dep_file.m"
                {
#line 615 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_dep_file_scalar_common_2[15], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 613 "make.module_dep_file.m"
              }
#line 608 "make.module_dep_file.m"
          }
#line 608 "make.module_dep_file.m"
      }
#line 613 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 613 "make.module_dep_file.m"
  }
#line 611 "make.module_dep_file.m"
}

#line 2077 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 2080 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2082 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2084 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2086 "make.module_dep_file.c"
{
#line 2088 "make.module_dep_file.c"
  {
#line 2090 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2092 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2094 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_Lang_4;

#line 2097 "make.module_dep_file.c"
    {
#line 2099 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_language_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_Lang_4);
    }
#line 2102 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2104 "make.module_dep_file.c"
      {
#line 2106 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_Lang_4));
#line 2108 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2110 "make.module_dep_file.c"
      }
#line 2112 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2114 "make.module_dep_file.c"
  }
#line 2116 "make.module_dep_file.c"
}

#line 611 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 611 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 611 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 611 "make.module_dep_file.m"
{
#line 613 "make.module_dep_file.m"
  {
#line 613 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 613 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 608 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 608 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
      {
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
          {
#line 608 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 614 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 613 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 613 "make.module_dep_file.m"
              {
#line 2167 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 615 "make.module_dep_file.m"
                {
#line 615 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &make__module_dep_file_scalar_common_2[14], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 613 "make.module_dep_file.m"
              }
#line 608 "make.module_dep_file.m"
          }
#line 608 "make.module_dep_file.m"
      }
#line 613 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 613 "make.module_dep_file.m"
  }
#line 611 "make.module_dep_file.m"
}

#line 2187 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 2190 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2192 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2194 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2196 "make.module_dep_file.c"
{
#line 2198 "make.module_dep_file.c"
  {
#line 2200 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2202 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2204 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignImport_4;

#line 2207 "make.module_dep_file.c"
    {
#line 2209 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignImport_4);
    }
#line 2212 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2214 "make.module_dep_file.c"
      {
#line 2216 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignImport_4));
#line 2218 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2220 "make.module_dep_file.c"
      }
#line 2222 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2224 "make.module_dep_file.c"
  }
#line 2226 "make.module_dep_file.c"
}

#line 611 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 611 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 611 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 611 "make.module_dep_file.m"
{
#line 613 "make.module_dep_file.m"
  {
#line 613 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 613 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 608 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 608 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
      {
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
          {
#line 608 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 614 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 613 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 613 "make.module_dep_file.m"
              {
#line 2277 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 615 "make.module_dep_file.m"
                {
#line 615 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, (MR_Word) &make__module_dep_file_scalar_common_2[13], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 613 "make.module_dep_file.m"
              }
#line 608 "make.module_dep_file.m"
          }
#line 608 "make.module_dep_file.m"
      }
#line 613 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 613 "make.module_dep_file.m"
  }
#line 611 "make.module_dep_file.m"
}

#line 2297 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 2300 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2302 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2304 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2306 "make.module_dep_file.c"
{
#line 2308 "make.module_dep_file.c"
  {
#line 2310 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2312 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2314 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignInclude_4;

#line 2317 "make.module_dep_file.c"
    {
#line 2319 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_include_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignInclude_4);
    }
#line 2322 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2324 "make.module_dep_file.c"
      {
#line 2326 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignInclude_4));
#line 2328 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2330 "make.module_dep_file.c"
      }
#line 2332 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2334 "make.module_dep_file.c"
  }
#line 2336 "make.module_dep_file.c"
}

#line 611 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 611 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 611 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 611 "make.module_dep_file.m"
{
#line 613 "make.module_dep_file.m"
  {
#line 613 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 613 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 613 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 608 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 608 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
      {
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
          {
#line 608 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 614 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 613 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 613 "make.module_dep_file.m"
              {
#line 2387 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 615 "make.module_dep_file.m"
                {
#line 615 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &make__module_dep_file_scalar_common_2[12], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 613 "make.module_dep_file.m"
              }
#line 608 "make.module_dep_file.m"
          }
#line 608 "make.module_dep_file.m"
      }
#line 613 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 613 "make.module_dep_file.m"
  }
#line 611 "make.module_dep_file.m"
}

#line 884 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__884__1_6_p_0(
#line 884 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 884 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 884 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 884 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 884 "make.module_dep_file.m"
{
#line 884 "make.module_dep_file.m"
  {
#line 884 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 884 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_29_29;

#line 888 "make.module_dep_file.m"
    {
#line 888 "make.module_dep_file.m"
      make__module_dep_file__V_29_29 = make__make_module_dep_file_extension_0_f_0();
    }
#line 887 "make.module_dep_file.m"
    {
#line 887 "make.module_dep_file.m"
      make__util__make_remove_module_file_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 49, make__module_dep_file__HeadVar__2_23, make__module_dep_file__V_29_29, make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 887 "make.module_dep_file.m"
      return;
    }
#line 884 "make.module_dep_file.m"
  }
#line 884 "make.module_dep_file.m"
}

#line 872 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__872__1_6_p_0(
#line 872 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 872 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 872 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 872 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 872 "make.module_dep_file.m"
{
#line 872 "make.module_dep_file.m"
  {
#line 872 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 875 "make.module_dep_file.m"
    {
#line 875 "make.module_dep_file.m"
      make__util__make_remove_target_file_by_name_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 45, make__module_dep_file__HeadVar__2_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 875 "make.module_dep_file.m"
      return;
    }
#line 872 "make.module_dep_file.m"
  }
#line 872 "make.module_dep_file.m"
}

#line 858 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_short_interfaces__858__1_5_p_0(
#line 858 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 858 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 858 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_34)
#line 858 "make.module_dep_file.m"
{
#line 858 "make.module_dep_file.m"
  {
#line 858 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 858 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__3_34, (MR_Integer) 0)));
#line 858 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleItems_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__3_34, (MR_Integer) 1)));

#line 861 "make.module_dep_file.m"
    {
#line 861 "make.module_dep_file.m"
      parse_tree__modules__make_short_interface_6_p_0(make__module_dep_file__Globals_14, make__module_dep_file__SourceFileName_12, make__module_dep_file__SubModuleName_21, make__module_dep_file__SubModuleItems_22);
#line 861 "make.module_dep_file.m"
      return;
    }
#line 858 "make.module_dep_file.m"
  }
#line 858 "make.module_dep_file.m"
}

#line 834 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__832__1_7_p_0_1(
#line 834 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 834 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 834 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 834 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 834 "make.module_dep_file.m"
{
#line 834 "make.module_dep_file.m"
  {
#line 834 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 834 "make.module_dep_file.m"
    {
#line 834 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 834 "make.module_dep_file.m"
      return;
    }
#line 834 "make.module_dep_file.m"
  }
#line 834 "make.module_dep_file.m"
}

#line 832 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__832__1_7_p_0(
#line 832 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 832 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleImportList_33,
#line 832 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_89,
#line 832 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_90,
#line 832 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_91)
#line 832 "make.module_dep_file.m"
{
#line 832 "make.module_dep_file.m"
  {
#line 832 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 832 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_94_94;
#line 834 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_HeadVar__7_93;

#line 834 "make.module_dep_file.m"
    {
#line 834 "make.module_dep_file.m"
      make__module_dep_file__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 834 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[0]));
#line 834 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 1) = ((MR_Box) (make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__832__1_7_p_0_1));
#line 834 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 834 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 834 "make.module_dep_file.m"
    }
#line 834 "make.module_dep_file.m"
    {
#line 834 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_94_94, make__module_dep_file__ModuleImportList_33, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_HeadVar__7_93);
    }
#line 833 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__3_89 = (MR_Integer) 1;
#line 833 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__5_91 = make__module_dep_file__HeadVar__4_90;
#line 832 "make.module_dep_file.m"
  }
#line 832 "make.module_dep_file.m"
}

#line 802 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__802__1_3_p_0(
#line 802 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_66,
#line 802 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_67,
#line 802 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_68)
#line 802 "make.module_dep_file.m"
{
#line 802 "make.module_dep_file.m"
  {
#line 802 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 802 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 2)));
#line 802 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_69_69;
#line 802 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_70_70;
#line 802 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_71_71;
#line 804 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_193_193 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 0)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 1)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 3)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 4)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 5)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 6)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 7)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 8)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 9)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 10)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 11)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 12)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 13)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 14)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 15)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 16)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 17)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 18)));
#line 804 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 19)));
#line 804 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_66, (MR_Integer) 20)));
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 805 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_230_230;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_241_241;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 805 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_250_250;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 805 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;

#line 806 "make.module_dep_file.m"
    {
#line 806 "make.module_dep_file.m"
      make__module_dep_file__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 806 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_69_69, 0) = ((MR_Box) (make__module_dep_file__HeadVar__1_66));
#line 806 "make.module_dep_file.m"
    }
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 0)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 1)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 2)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 3)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 4)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 5)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 6)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 7)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 8)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 9)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 10)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 11)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 12)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 13)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 14)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 15)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 16)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 17)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 18)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 19)));
#line 805 "make.module_dep_file.m"
    {
#line 805 "make.module_dep_file.m"
      make__module_dep_file__V_71_71 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__SubModuleName_36)), make__module_dep_file__V_70_70, ((MR_Box) (make__module_dep_file__V_69_69)));
    }
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 0)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 1)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 2)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 3)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 4)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 5)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 6)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 7)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 8)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 9)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 10)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 11)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 12)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 13)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 14)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 15)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 16)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 17)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 18)));
#line 805 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_67, (MR_Integer) 19)));
#line 805 "make.module_dep_file.m"
    {
#line 805 "make.module_dep_file.m"
      MR_Word base;
#line 805 "make.module_dep_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 805 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__3_68 = base;
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_71_71));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_233_233));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_234_234));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_235_235));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_236_236));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_237_237));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_238_238));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_240_240));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 805 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 805 "make.module_dep_file.m"
    }
#line 802 "make.module_dep_file.m"
  }
#line 802 "make.module_dep_file.m"
}

#line 620 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__620__1_2_p_0(
#line 620 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 620 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7)
#line 620 "make.module_dep_file.m"
{
#line 620 "make.module_dep_file.m"
  {
#line 620 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 620 "make.module_dep_file.m"
    {
#line 620 "make.module_dep_file.m"
      return make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, make__module_dep_file__HeadVar__1_6, make__module_dep_file__HeadVar__2_7);
    }
#line 620 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 620 "make.module_dep_file.m"
  }
#line 620 "make.module_dep_file.m"
}

#line 342 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__342__1_3_p_0(
#line 342 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_369)
#line 342 "make.module_dep_file.m"
{
#line 342 "make.module_dep_file.m"
  {
#line 342 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 342 "make.module_dep_file.m"
    {
#line 342 "make.module_dep_file.m"
      mercury__io__write_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_dep_file__HeadVar__1_369)));
#line 342 "make.module_dep_file.m"
      return;
    }
#line 342 "make.module_dep_file.m"
  }
#line 342 "make.module_dep_file.m"
}

#line 71 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
#line 71 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__1_1,
#line 71 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2,
#line 71 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_3)
#line 71 "make.module_dep_file.m"
{
#line 71 "make.module_dep_file.m"
  {
#line 71 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 71 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Cast_HeadVar1_4 = (MR_Integer) make__module_dep_file__HeadVar__2_2;
#line 71 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Cast_HeadVar2_5 = (MR_Integer) make__module_dep_file__HeadVar__3_3;

#line 71 "make.module_dep_file.m"
    {
#line 71 "make.module_dep_file.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__module_dep_file__HeadVar__1_1, make__module_dep_file__Cast_HeadVar1_4, make__module_dep_file__Cast_HeadVar2_5);
#line 71 "make.module_dep_file.m"
      return;
    }
#line 71 "make.module_dep_file.m"
  }
#line 71 "make.module_dep_file.m"
}

#line 71 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
#line 71 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_1,
#line 71 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2)
#line 71 "make.module_dep_file.m"
{
#line 2969 "make.module_dep_file.c"
  {
#line 2971 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded = (make__module_dep_file__HeadVar__2_1 == make__module_dep_file__HeadVar__2_2);

#line 2974 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2976 "make.module_dep_file.c"
  }
#line 71 "make.module_dep_file.m"
}

#line 891 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 891 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 891 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2)
#line 891 "make.module_dep_file.m"
{
#line 894 "make.module_dep_file.m"
  {
#line 894 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 894 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 894 "make.module_dep_file.m"
      {
#line 894 "make.module_dep_file.m"
      }
#line 894 "make.module_dep_file.m"
    else
#line 895 "make.module_dep_file.m"
      {
#line 895 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ImportingModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, (MR_Integer) 0)));

#line 896 "make.module_dep_file.m"
        {
#line 896 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "** Module \140");
        }
#line 897 "make.module_dep_file.m"
        {
#line 897 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ModuleName_1);
        }
#line 898 "make.module_dep_file.m"
        {
#line 898 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\' is imported or included by module \140");
        }
#line 899 "make.module_dep_file.m"
        {
#line 899 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ImportingModuleName_10);
        }
#line 900 "make.module_dep_file.m"
        {
#line 900 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\'.\n");
#line 900 "make.module_dep_file.m"
          return;
        }
#line 895 "make.module_dep_file.m"
      }
#line 894 "make.module_dep_file.m"
  }
#line 891 "make.module_dep_file.m"
}

#line 884 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 884 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 884 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 884 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 884 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 884 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 884 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 884 "make.module_dep_file.m"
{
#line 884 "make.module_dep_file.m"
  {
#line 884 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 884 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 884 "make.module_dep_file.m"
    {
#line 884 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__884__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 884 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 884 "make.module_dep_file.m"
  }
#line 884 "make.module_dep_file.m"
}

#line 880 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 880 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 880 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 880 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 880 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 880 "make.module_dep_file.m"
{
#line 883 "make.module_dep_file.m"
  {
#line 883 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 883 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 884 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 884 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 884 "make.module_dep_file.m"
    {
#line 884 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 884 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 884 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
#line 884 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 884 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 884 "make.module_dep_file.m"
    }
#line 884 "make.module_dep_file.m"
    {
#line 884 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 884 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 883 "make.module_dep_file.m"
  }
#line 880 "make.module_dep_file.m"
}

#line 872 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 872 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 872 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 872 "make.module_dep_file.m"
{
#line 872 "make.module_dep_file.m"
  {
#line 872 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 872 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 872 "make.module_dep_file.m"
    {
#line 872 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__872__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 872 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 872 "make.module_dep_file.m"
  }
#line 872 "make.module_dep_file.m"
}

#line 868 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 868 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 868 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 868 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 868 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 868 "make.module_dep_file.m"
{
#line 871 "make.module_dep_file.m"
  {
#line 871 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 871 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 872 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 872 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 872 "make.module_dep_file.m"
    {
#line 872 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 872 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 872 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_short_interfaces_6_p_0_1));
#line 872 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 872 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 872 "make.module_dep_file.m"
    }
#line 872 "make.module_dep_file.m"
    {
#line 872 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 872 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 871 "make.module_dep_file.m"
  }
#line 868 "make.module_dep_file.m"
}

#line 851 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 851 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 851 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 851 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 851 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26)
#line 851 "make.module_dep_file.m"
{
#line 856 "make.module_dep_file.m"
  {
#line 856 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 856 "make.module_dep_file.m"
    {
#line 856 "make.module_dep_file.m"
      make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(make__module_dep_file__ErrorStream_11, make__module_dep_file__SourceFileName_12, make__module_dep_file__SubModuleList_13, make__module_dep_file__Globals_14, make__module_dep_file__Succeeded_16, make__module_dep_file__STATE_VARIABLE_Info_0_25, make__module_dep_file__STATE_VARIABLE_Info_26);
#line 856 "make.module_dep_file.m"
      return;
    }
#line 856 "make.module_dep_file.m"
  }
#line 851 "make.module_dep_file.m"
}

#line 837 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 837 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 837 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 837 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 837 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 837 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 837 "make.module_dep_file.m"
{
#line 837 "make.module_dep_file.m"
  {
#line 837 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 837 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv11_STATE_VARIABLE_Info_13;

#line 837 "make.module_dep_file.m"
    {
#line 837 "make.module_dep_file.m"
      make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv11_STATE_VARIABLE_Info_13);
    }
#line 837 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv11_STATE_VARIABLE_Info_13));
#line 837 "make.module_dep_file.m"
  }
#line 837 "make.module_dep_file.m"
}

#line 832 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 832 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 832 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 832 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 832 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 832 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 832 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 832 "make.module_dep_file.m"
{
#line 832 "make.module_dep_file.m"
  {
#line 832 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 832 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv10_HeadVar__3_89;
#line 832 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv9_HeadVar__5_91;

#line 832 "make.module_dep_file.m"
    {
#line 832 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__832__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), &make__module_dep_file__conv10_HeadVar__3_89, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv9_HeadVar__5_91);
    }
#line 832 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv10_HeadVar__3_89));
#line 832 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv9_HeadVar__5_91));
#line 832 "make.module_dep_file.m"
  }
#line 832 "make.module_dep_file.m"
}

#line 825 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 825 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 825 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 825 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 825 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 825 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 825 "make.module_dep_file.m"
{
#line 825 "make.module_dep_file.m"
  {
#line 825 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 825 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv7_STATE_VARIABLE_Info_13;

#line 825 "make.module_dep_file.m"
    {
#line 825 "make.module_dep_file.m"
      make__module_dep_file__cleanup_short_interfaces_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv7_STATE_VARIABLE_Info_13);
    }
#line 825 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv7_STATE_VARIABLE_Info_13));
#line 825 "make.module_dep_file.m"
  }
#line 825 "make.module_dep_file.m"
}

#line 820 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 820 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 820 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 820 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 820 "make.module_dep_file.m"
{
#line 820 "make.module_dep_file.m"
  {
#line 820 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 820 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv6_HeadVar__5_5;
#line 820 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv5_HeadVar__7_7;

#line 820 "make.module_dep_file.m"
    {
#line 820 "make.module_dep_file.m"
      make__util__build_with_module_options_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), &make__module_dep_file__conv6_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_HeadVar__7_7);
    }
#line 820 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv6_HeadVar__5_5));
#line 820 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_HeadVar__7_7));
#line 820 "make.module_dep_file.m"
  }
#line 820 "make.module_dep_file.m"
}

#line 822 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 822 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 822 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 822 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 822 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 822 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 822 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 822 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 822 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 822 "make.module_dep_file.m"
{
#line 822 "make.module_dep_file.m"
  {
#line 822 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 822 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv4_Succeeded_16;
#line 822 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv3_STATE_VARIABLE_Info_26;

#line 822 "make.module_dep_file.m"
    {
#line 822 "make.module_dep_file.m"
      make__module_dep_file__make_short_interfaces_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv4_Succeeded_16, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv3_STATE_VARIABLE_Info_26);
    }
#line 822 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv4_Succeeded_16));
#line 822 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv3_STATE_VARIABLE_Info_26));
#line 822 "make.module_dep_file.m"
  }
#line 822 "make.module_dep_file.m"
}

#line 802 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 802 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 802 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 802 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 802 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 802 "make.module_dep_file.m"
{
#line 802 "make.module_dep_file.m"
  {
#line 802 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 802 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_HeadVar__3_68;

#line 802 "make.module_dep_file.m"
    {
#line 802 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__802__1_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv1_HeadVar__3_68);
    }
#line 802 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv1_HeadVar__3_68));
#line 802 "make.module_dep_file.m"
  }
#line 802 "make.module_dep_file.m"
}

#line 799 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 799 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 799 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 799 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 799 "make.module_dep_file.m"
{
#line 799 "make.module_dep_file.m"
  {
#line 799 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 799 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__8_8;

#line 799 "make.module_dep_file.m"
    {
#line 799 "make.module_dep_file.m"
      parse_tree__module_imports__init_dependencies_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 8))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__8_8);
    }
#line 799 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__8_8));
#line 799 "make.module_dep_file.m"
  }
#line 799 "make.module_dep_file.m"
}

#line 747 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 747 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 747 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 747 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_43,
#line 747 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_44)
#line 747 "make.module_dep_file.m"
{
#line 750 "make.module_dep_file.m"
  {
#line 750 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 750 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeErrorStream_11;
#line 750 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_47_47;

#line 751 "make.module_dep_file.m"
    {
#line 751 "make.module_dep_file.m"
      make__util__redirect_output_6_p_0(make__module_dep_file__ModuleName_8, &make__module_dep_file__MaybeErrorStream_11, make__module_dep_file__STATE_VARIABLE_Info_0_43, &make__module_dep_file__STATE_VARIABLE_Info_47_47);
    }
#line 847 "make.module_dep_file.m"
    if ((make__module_dep_file__MaybeErrorStream_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "make.module_dep_file.m"
      *make__module_dep_file__STATE_VARIABLE_Info_44 = make__module_dep_file__STATE_VARIABLE_Info_47_47;
#line 847 "make.module_dep_file.m"
    else
#line 753 "make.module_dep_file.m"
      {
#line 753 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ErrorStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeErrorStream_11, (MR_Integer) 0)));
#line 753 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_13;
#line 753 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Items_14;
#line 753 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Specs0_15;
#line 753 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_16;
#line 753 "make.module_dep_file.m"
        MR_String make__module_dep_file__SourceFileName_17;
#line 756 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_18_18;

#line 754 "make.module_dep_file.m"
        {
#line 754 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__OldOutputStream_13);
        }
#line 756 "make.module_dep_file.m"
        {
#line 756 "make.module_dep_file.m"
          parse_tree__read_modules__read_module_13_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".m", (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 0, &make__module_dep_file__Items_14, &make__module_dep_file__Specs0_15, &make__module_dep_file__Error_16, &make__module_dep_file__SourceFileName_17, &make__module_dep_file__V_18_18);
        }
#line 786 "make.module_dep_file.m"
        if ((make__module_dep_file__Error_16 == (MR_Integer) 2))
#line 761 "make.module_dep_file.m"
          {
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__UnredirectGlobals_23;
#line 761 "make.module_dep_file.m"
            MR_String make__module_dep_file__ErrFileName_24;
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap0_26;
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap_27;
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_117_117;
#line 762 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_19_19;
#line 763 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_20;
#line 763 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_21;
#line 765 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_22_22;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_135_135;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_136_136;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_137_137;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_138_138;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_139_139;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_140_140;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_141_141;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_142_142;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_143_143;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_144_144;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_145_145;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_146_146;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_147_147;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_148_148;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_149_149;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_150_150;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_151_151;
#line 769 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_152_152;
#line 769 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_153_153;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_25_25;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_154_154;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_155_155;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_156_156;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_157_157;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_158_158;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_159_159;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_160_160;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_161_161;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_162_162;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_163_163;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_164_164;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_165_165;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_166_166;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_167_167;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_168_168;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_169_169;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_170_170;
#line 782 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_171_171;
#line 782 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_172_172;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_174_174;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_175_175;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_176_176;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_177_177;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_178_178;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_179_179;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_180_180;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_181_181;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_182_182;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_183_183;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_184_184;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_185_185;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_186_186;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_187_187;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_188_188;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_189_189;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_190_190;
#line 785 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_191_191;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_192_192;
#line 785 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_173_173;

#line 762 "make.module_dep_file.m"
            {
#line 762 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_19_19);
            }
#line 763 "make.module_dep_file.m"
            {
#line 763 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs0_15, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_20, (MR_Integer) 0, &make__module_dep_file___NumErrors_21);
            }
#line 765 "make.module_dep_file.m"
            {
#line 765 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_22_22);
            }
#line 766 "make.module_dep_file.m"
            {
#line 766 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "** Error: error reading file \140");
            }
#line 767 "make.module_dep_file.m"
            {
#line 767 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName_17);
            }
#line 768 "make.module_dep_file.m"
            {
#line 768 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
            }
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 0)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 1)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 2)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 3)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 4)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 5)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 6)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 7)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 8)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 9)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 10)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 11)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 12)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 13)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 14)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 15)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 16)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 17)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 18)));
#line 769 "make.module_dep_file.m"
            make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_47_47, (MR_Integer) 19)));
#line 769 "make.module_dep_file.m"
            {
#line 769 "make.module_dep_file.m"
              make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__V_112_112);
            }
#line 775 "make.module_dep_file.m"
            {
#line 775 "make.module_dep_file.m"
              libs__globals__set_option_4_p_0((MR_Integer) 51, (MR_Word) MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_7[2]), make__module_dep_file__Globals_7, &make__module_dep_file__UnredirectGlobals_23);
            }
#line 777 "make.module_dep_file.m"
            {
#line 777 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__UnredirectGlobals_23, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_47_47, &make__module_dep_file__STATE_VARIABLE_Info_117_117);
            }
#line 779 "make.module_dep_file.m"
            {
#line 779 "make.module_dep_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".err", (MR_Integer) 1, &make__module_dep_file__ErrFileName_24);
            }
#line 781 "make.module_dep_file.m"
            {
#line 781 "make.module_dep_file.m"
              mercury__io__remove_file_4_p_0(make__module_dep_file__ErrFileName_24, &make__module_dep_file__V_25_25);
            }
#line 782 "make.module_dep_file.m"
            make__module_dep_file__ModuleDepMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 0)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 1)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 2)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 3)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 4)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 5)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 6)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 7)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 8)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 9)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 10)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 11)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 12)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 13)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 14)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 15)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 16)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 17)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_171_171 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 18)));
#line 782 "make.module_dep_file.m"
            make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 19)));
#line 784 "make.module_dep_file.m"
            {
#line 784 "make.module_dep_file.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_8)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_26, &make__module_dep_file__ModuleDepMap_27);
            }
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 0)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 1)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 2)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 3)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 4)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 5)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 6)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 7)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 8)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 9)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 10)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 11)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 12)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 13)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 14)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 15)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 16)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 17)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 18)));
#line 785 "make.module_dep_file.m"
            make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_117_117, (MR_Integer) 19)));
#line 785 "make.module_dep_file.m"
            {
#line 785 "make.module_dep_file.m"
              MR_Word base;
#line 785 "make.module_dep_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 785 "make.module_dep_file.m"
              *make__module_dep_file__STATE_VARIABLE_Info_44 = base;
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_27));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_174_174));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_175_175));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_176_176));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_177_177));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_178_178));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_179_179));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_180_180));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_181_181));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_182_182));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_183_183));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_184_184));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_185_185));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_186_186));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_187_187));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_188_188));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_189_189));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_190_190));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_191_191));
#line 785 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_192_192));
#line 785 "make.module_dep_file.m"
            }
#line 761 "make.module_dep_file.m"
          }
#line 786 "make.module_dep_file.m"
        else
#line 789 "make.module_dep_file.m"
          {
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_259_259;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_262_262;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SubModuleList_29;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Specs_30;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SubModuleNames_32;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleImportList_33;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__VeryVerbose_37;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Succeeded_39;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__MadeTarget_42;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_62_62;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_65_65;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_77_77;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_83_83;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_84_84;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_85_85;
#line 789 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_97_97;
#line 790 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_28_28;
#line 794 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_125;
#line 794 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_126;
#line 796 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_31_31;
#line 802 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_65_65;
#line 832 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_41_41;
#line 832 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv12_STATE_VARIABLE_Info_85_85;

#line 790 "make.module_dep_file.m"
            {
#line 790 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_28_28);
            }
#line 791 "make.module_dep_file.m"
            {
#line 791 "make.module_dep_file.m"
              parse_tree__modules__split_into_submodules_5_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__Items_14, &make__module_dep_file__SubModuleList_29, make__module_dep_file__Specs0_15, &make__module_dep_file__Specs_30);
            }
#line 793 "make.module_dep_file.m"
            {
#line 793 "make.module_dep_file.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
            }
#line 794 "make.module_dep_file.m"
            {
#line 794 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs_30, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_125, (MR_Integer) 0, &make__module_dep_file___NumErrors_126);
            }
#line 796 "make.module_dep_file.m"
            {
#line 796 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_31_31);
            }
#line 798 "make.module_dep_file.m"
            {
#line 798 "make.module_dep_file.m"
              mercury__assoc_list__keys_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[2], make__module_dep_file__SubModuleList_29, &make__module_dep_file__SubModuleNames_32);
            }
#line 799 "make.module_dep_file.m"
            {
#line 799 "make.module_dep_file.m"
              make__module_dep_file__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 799 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[1]));
#line 799 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_1));
#line 799 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 799 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 3) = ((MR_Box) (make__module_dep_file__SourceFileName_17));
#line 799 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 799 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 5) = ((MR_Box) (make__module_dep_file__SubModuleNames_32));
#line 799 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 799 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 7) = ((MR_Box) (make__module_dep_file__Error_16));
#line 799 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_62_62, 8) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 799 "make.module_dep_file.m"
            }
#line 4046 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_259_259 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 799 "make.module_dep_file.m"
            {
#line 799 "make.module_dep_file.m"
              mercury__list__map_3_p_0((MR_Word) &make__module_dep_file_scalar_common_2[0], make__module_dep_file__TypeCtorInfo_259_259, make__module_dep_file__V_62_62, make__module_dep_file__SubModuleList_29, &make__module_dep_file__ModuleImportList_33);
            }
#line 4053 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_262_262 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 802 "make.module_dep_file.m"
            {
#line 802 "make.module_dep_file.m"
              mercury__list__foldl_4_p_0(make__module_dep_file__TypeCtorInfo_259_259, make__module_dep_file__TypeCtorInfo_262_262, (MR_Word) &make__module_dep_file_scalar_common_2[11], make__module_dep_file__ModuleImportList_33, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_47_47)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_65_65);
            }
#line 802 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_65_65 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_65_65);
#line 812 "make.module_dep_file.m"
            {
#line 812 "make.module_dep_file.m"
              libs__globals__lookup_bool_option_3_p_0(make__module_dep_file__Globals_7, (MR_Integer) 45, &make__module_dep_file__VeryVerbose_37);
            }
#line 827 "make.module_dep_file.m"
            if ((make__module_dep_file__Error_16 == (MR_Integer) 0))
#line 814 "make.module_dep_file.m"
              {
#line 814 "make.module_dep_file.m"
                MR_Word make__module_dep_file__Target_38;
#line 814 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_75_75;
#line 814 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_76_76;
#line 814 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_82_82;
#line 819 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv8_STATE_VARIABLE_Info_77_77;

#line 815 "make.module_dep_file.m"
                {
#line 815 "make.module_dep_file.m"
                  make__module_dep_file__Target_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 815 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_38, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 815 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 815 "make.module_dep_file.m"
                }
#line 817 "make.module_dep_file.m"
                {
#line 817 "make.module_dep_file.m"
                  make__util__maybe_make_target_message_to_stream_5_p_0(make__module_dep_file__Globals_7, make__module_dep_file__OldOutputStream_13, make__module_dep_file__Target_38);
                }
#line 822 "make.module_dep_file.m"
                {
#line 822 "make.module_dep_file.m"
                  make__module_dep_file__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 822 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
#line 822 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_3));
#line 822 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 822 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 3) = ((MR_Box) (make__module_dep_file__ErrorStream_12));
#line 822 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_17));
#line 822 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_82_82, 5) = ((MR_Box) (make__module_dep_file__SubModuleList_29));
#line 822 "make.module_dep_file.m"
                }
#line 820 "make.module_dep_file.m"
                {
#line 820 "make.module_dep_file.m"
                  make__module_dep_file__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[1]));
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[5])));
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_75_75, 6) = ((MR_Box) (make__module_dep_file__V_82_82));
#line 820 "make.module_dep_file.m"
                }
#line 825 "make.module_dep_file.m"
                {
#line 825 "make.module_dep_file.m"
                  make__module_dep_file__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 825 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_76_76, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 825 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_76_76, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
#line 825 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 825 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_76_76, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 825 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_76_76, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_32));
#line 825 "make.module_dep_file.m"
                }
#line 819 "make.module_dep_file.m"
                {
#line 819 "make.module_dep_file.m"
                  libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_262_262, make__module_dep_file__VeryVerbose_37, make__module_dep_file__V_75_75, make__module_dep_file__V_76_76, &make__module_dep_file__Succeeded_39, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_65_65)), &make__module_dep_file__conv8_STATE_VARIABLE_Info_77_77);
                }
#line 819 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_77_77 = ((MR_Word) make__module_dep_file__conv8_STATE_VARIABLE_Info_77_77);
#line 814 "make.module_dep_file.m"
              }
#line 827 "make.module_dep_file.m"
            else
#line 828 "make.module_dep_file.m"
              {
#line 829 "make.module_dep_file.m"
                make__module_dep_file__Succeeded_39 = (MR_Integer) 0;
#line 829 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_77_77 = make__module_dep_file__STATE_VARIABLE_Info_65_65;
#line 828 "make.module_dep_file.m"
              }
#line 832 "make.module_dep_file.m"
            {
#line 832 "make.module_dep_file.m"
              make__module_dep_file__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 832 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_83_83, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
#line 832 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_83_83, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
#line 832 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 832 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_83_83, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 832 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_83_83, 4) = ((MR_Box) (make__module_dep_file__ModuleImportList_33));
#line 832 "make.module_dep_file.m"
            }
#line 837 "make.module_dep_file.m"
            {
#line 837 "make.module_dep_file.m"
              make__module_dep_file__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 837 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 837 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_7));
#line 837 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 837 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 837 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_32));
#line 837 "make.module_dep_file.m"
            }
#line 832 "make.module_dep_file.m"
            {
#line 832 "make.module_dep_file.m"
              libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_262_262, make__module_dep_file__VeryVerbose_37, make__module_dep_file__V_83_83, make__module_dep_file__V_84_84, &make__module_dep_file__V_41_41, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_77_77)), &make__module_dep_file__conv12_STATE_VARIABLE_Info_85_85);
            }
#line 832 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_85_85 = ((MR_Word) make__module_dep_file__conv12_STATE_VARIABLE_Info_85_85);
#line 840 "make.module_dep_file.m"
            {
#line 840 "make.module_dep_file.m"
              make__module_dep_file__MadeTarget_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_42, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 840 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 840 "make.module_dep_file.m"
            }
#line 842 "make.module_dep_file.m"
            {
#line 842 "make.module_dep_file.m"
              make__module_target__record_made_target_8_p_0(make__module_dep_file__Globals_7, make__module_dep_file__MadeTarget_42, (MR_Word) &make__module_dep_file_scalar_common_7[3], make__module_dep_file__Succeeded_39, make__module_dep_file__STATE_VARIABLE_Info_85_85, &make__module_dep_file__STATE_VARIABLE_Info_97_97);
            }
#line 845 "make.module_dep_file.m"
            {
#line 845 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_97_97, make__module_dep_file__STATE_VARIABLE_Info_44);
#line 845 "make.module_dep_file.m"
              return;
            }
#line 789 "make.module_dep_file.m"
          }
#line 753 "make.module_dep_file.m"
      }
#line 750 "make.module_dep_file.m"
  }
#line 747 "make.module_dep_file.m"
}

#line 730 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 730 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 730 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 730 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8)
#line 730 "make.module_dep_file.m"
{
#line 733 "make.module_dep_file.m"
  {
#line 733 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 733 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepsFile_10;
#line 733 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;

#line 735 "make.module_dep_file.m"
    {
#line 735 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = make__make_module_dep_file_extension_0_f_0();
    }
#line 734 "make.module_dep_file.m"
    {
#line 734 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_6, make__module_dep_file__ModuleName_7, make__module_dep_file__V_13_13, (MR_Integer) 1, &make__module_dep_file__ModuleDepsFile_10);
    }
#line 737 "make.module_dep_file.m"
    {
#line 737 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "Error reading file \140");
    }
#line 738 "make.module_dep_file.m"
    {
#line 738 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ModuleDepsFile_10);
    }
#line 739 "make.module_dep_file.m"
    {
#line 739 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\', rebuilding: ");
    }
#line 740 "make.module_dep_file.m"
    {
#line 740 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__Msg_8);
    }
#line 741 "make.module_dep_file.m"
    {
#line 741 "make.module_dep_file.m"
      mercury__io__nl_2_p_0();
#line 741 "make.module_dep_file.m"
      return;
    }
#line 733 "make.module_dep_file.m"
  }
#line 730 "make.module_dep_file.m"
}

#line 679 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 679 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 679 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6)
#line 679 "make.module_dep_file.m"
{
#line 682 "make.module_dep_file.m"
  {
#line 682 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 682 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ResFileType_9;

#line 684 "make.module_dep_file.m"
    {
#line 684 "make.module_dep_file.m"
      mercury__io__file_type_5_p_0((MR_Integer) 1, make__module_dep_file__FileName_5, &make__module_dep_file__ResFileType_9);
    }
#line 705 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ResFileType_9)) == (MR_mktag((MR_Integer) 1))))
#line 706 "make.module_dep_file.m"
      {
#line 706 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));
#line 706 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_15_15;
#line 706 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_16_16;
#line 706 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_18_18;

#line 707 "make.module_dep_file.m"
        {
#line 707 "make.module_dep_file.m"
          make__module_dep_file__V_18_18 = mercury__io__error_message_1_f_0(make__module_dep_file__Error_11);
        }
#line 707 "make.module_dep_file.m"
        {
#line 707 "make.module_dep_file.m"
          make__module_dep_file__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ": ", make__module_dep_file__V_18_18);
        }
#line 707 "make.module_dep_file.m"
        {
#line 707 "make.module_dep_file.m"
          make__module_dep_file__V_15_15 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, make__module_dep_file__V_16_16);
        }
#line 707 "make.module_dep_file.m"
        {
#line 707 "make.module_dep_file.m"
          MR_Word base;
#line 707 "make.module_dep_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 707 "make.module_dep_file.m"
          *make__module_dep_file__FileExists_6 = base;
#line 707 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_15_15));
#line 707 "make.module_dep_file.m"
        }
#line 706 "make.module_dep_file.m"
      }
#line 705 "make.module_dep_file.m"
    else
#line 686 "make.module_dep_file.m"
      {
#line 686 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));

#line 692 "make.module_dep_file.m"
        if ((((make__module_dep_file__FileType_10 == (MR_Integer) 0)) || ((make__module_dep_file__FileType_10 == (MR_Integer) 10))))
#line 691 "make.module_dep_file.m"
          *make__module_dep_file__FileExists_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 692 "make.module_dep_file.m"
        else
#line 702 "make.module_dep_file.m"
          {
#line 702 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_19_19;

#line 703 "make.module_dep_file.m"
            {
#line 703 "make.module_dep_file.m"
              make__module_dep_file__V_19_19 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, (MR_String) ": not a regular file");
            }
#line 703 "make.module_dep_file.m"
            {
#line 703 "make.module_dep_file.m"
              MR_Word base;
#line 703 "make.module_dep_file.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 703 "make.module_dep_file.m"
              *make__module_dep_file__FileExists_6 = base;
#line 703 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 703 "make.module_dep_file.m"
            }
#line 702 "make.module_dep_file.m"
          }
#line 686 "make.module_dep_file.m"
      }
#line 682 "make.module_dep_file.m"
  }
#line 679 "make.module_dep_file.m"
}

#line 675 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 675 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 675 "make.module_dep_file.m"
{
#line 675 "make.module_dep_file.m"
  {
#line 675 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 675 "make.module_dep_file.m"
    MR_builtin_longjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0, 1);
#line 675 "make.module_dep_file.m"
  }
#line 675 "make.module_dep_file.m"
}

#line 676 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 676 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 676 "make.module_dep_file.m"
{
#line 676 "make.module_dep_file.m"
  {
#line 676 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 676 "make.module_dep_file.m"
    (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5 = ((MR_Word) (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5);
#line 676 "make.module_dep_file.m"
    {
#line 676 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_2(make__module_dep_file__env_ptr);
#line 676 "make.module_dep_file.m"
      return;
    }
#line 676 "make.module_dep_file.m"
  }
#line 676 "make.module_dep_file.m"
}

#line 675 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 675 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 675 "make.module_dep_file.m"
{
#line 675 "make.module_dep_file.m"
  {
#line 675 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 675 "make.module_dep_file.m"
    {
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_8_8;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_9_9;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_10_10;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_11_11;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_12_12;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_13_13;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_14_14;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_15_15;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_16_16;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_17_17;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_18_18;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_19_19;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_20_20;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_21_21;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_22_22;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_23_23;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_24_24;
#line 677 "make.module_dep_file.m"
      MR_Integer make__module_dep_file__V_25_25;
#line 677 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_26_26;
#line 677 "make.module_dep_file.m"
      MR_Box make__module_dep_file__conv1_V_29_29;

#line 677 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 0)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 1)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 2)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 3)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 4)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 5)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 6)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 7)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 8)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 9)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 10)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 11)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 12)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 14)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 15)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 16)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 17)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 18)));
#line 677 "make.module_dep_file.m"
      make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 19)));
#line 677 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4551 "make.module_dep_file.c"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 677 "make.module_dep_file.m"
      {
#line 677 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &make__module_dep_file__conv1_V_29_29);
      }
#line 677 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 677 "make.module_dep_file.m"
        {
#line 677 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29 = ((MR_Word) make__module_dep_file__conv1_V_29_29);
#line 677 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 677 "make.module_dep_file.m"
        }
#line 675 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 675 "make.module_dep_file.m"
        {
#line 4572 "make.module_dep_file.c"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 677 "make.module_dep_file.m"
          {
#line 677 "make.module_dep_file.m"
            (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7)), ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29)));
          }
#line 677 "make.module_dep_file.m"
          if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 677 "make.module_dep_file.m"
            {
#line 677 "make.module_dep_file.m"
              make__module_dep_file__some_bad_module_dependency_2_p_0_1(make__module_dep_file__env_ptr);
#line 677 "make.module_dep_file.m"
              return;
            }
#line 675 "make.module_dep_file.m"
        }
#line 675 "make.module_dep_file.m"
    }
#line 675 "make.module_dep_file.m"
  }
#line 675 "make.module_dep_file.m"
}

#line 675 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 675 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 675 "make.module_dep_file.m"
{
#line 675 "make.module_dep_file.m"
  {
#line 675 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 675 "make.module_dep_file.m"
    if (MR_builtin_setjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0) == 0)
#line 675 "make.module_dep_file.m"
      {
#line 4613 "make.module_dep_file.c"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 676 "make.module_dep_file.m"
        {
#line 676 "make.module_dep_file.m"
          mercury__list__member_2_p_1((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, &(make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, make__module_dep_file__env_ptr);
        }
#line 675 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_FALSE;
#line 675 "make.module_dep_file.m"
      }
#line 675 "make.module_dep_file.m"
    else
#line 675 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 675 "make.module_dep_file.m"
  }
#line 675 "make.module_dep_file.m"
}

#line 672 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 672 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 672 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4)
#line 672 "make.module_dep_file.m"
{
#line 672 "make.module_dep_file.m"
  {
#line 672 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s make__module_dep_file__env;

#line 672 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3 = make__module_dep_file__Info_3;
#line 672 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4 = make__module_dep_file__ModuleNames_4;
#line 675 "make.module_dep_file.m"
    {
#line 675 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_4(&make__module_dep_file__env);
    }
#line 675 "make.module_dep_file.m"
    return (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 672 "make.module_dep_file.m"
  }
#line 672 "make.module_dep_file.m"
}

#line 666 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 666 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 666 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4)
#line 666 "make.module_dep_file.m"
{
#line 668 "make.module_dep_file.m"
  {
#line 668 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 668 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 608 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 608 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
      {
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
          {
#line 608 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4705 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[3];
#line 669 "make.module_dep_file.m"
            {
#line 669 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 668 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 412 "make.module_dep_file.m"
              {
#line 412 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "no_main") == 0))
#line 415 "make.module_dep_file.m"
                  {
#line 415 "make.module_dep_file.m"
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 1;
#line 415 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 415 "make.module_dep_file.m"
                  }
#line 412 "make.module_dep_file.m"
                else
#line 412 "make.module_dep_file.m"
                  if ((strcmp(make__module_dep_file__String_5, (MR_String) "has_main") == 0))
#line 412 "make.module_dep_file.m"
                    {
#line 412 "make.module_dep_file.m"
                      *make__module_dep_file__HasMain_4 = (MR_Integer) 0;
#line 412 "make.module_dep_file.m"
                      make__module_dep_file__succeeded = MR_TRUE;
#line 412 "make.module_dep_file.m"
                    }
#line 412 "make.module_dep_file.m"
                  else
#line 412 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_FALSE;
#line 412 "make.module_dep_file.m"
              }
#line 608 "make.module_dep_file.m"
          }
#line 608 "make.module_dep_file.m"
      }
#line 668 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 668 "make.module_dep_file.m"
  }
#line 666 "make.module_dep_file.m"
}

#line 659 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 659 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1)
#line 659 "make.module_dep_file.m"
{
#line 661 "make.module_dep_file.m"
  {
#line 661 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 661 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HeadVar__2_2;

#line 661 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "make.module_dep_file.m"
      make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 661 "make.module_dep_file.m"
    else
#line 662 "make.module_dep_file.m"
      {
#line 662 "make.module_dep_file.m"
        MR_Word make__module_dep_file__LangSet_4;

#line 664 "make.module_dep_file.m"
        {
#line 664 "make.module_dep_file.m"
          make__module_dep_file__LangSet_4 = mercury__set__from_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__HeadVar__1_1);
        }
#line 662 "make.module_dep_file.m"
        {
#line 662 "make.module_dep_file.m"
          make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 662 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, 0) = ((MR_Box) (make__module_dep_file__LangSet_4));
#line 662 "make.module_dep_file.m"
        }
#line 662 "make.module_dep_file.m"
      }
#line 661 "make.module_dep_file.m"
    return make__module_dep_file__HeadVar__2_2;
#line 661 "make.module_dep_file.m"
  }
#line 659 "make.module_dep_file.m"
}

#line 652 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 652 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 652 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4)
#line 652 "make.module_dep_file.m"
{
#line 655 "make.module_dep_file.m"
  {
#line 655 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 655 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 655 "make.module_dep_file.m"
    MR_String make__module_dep_file__Atom_5;
#line 655 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 655 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 608 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 608 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
      {
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
          {
#line 608 "make.module_dep_file.m"
            make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4844 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[3];
#line 656 "make.module_dep_file.m"
            {
#line 656 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 655 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 397 "make.module_dep_file.m"
              {
#line 397 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "no_foreign_export") == 0))
#line 400 "make.module_dep_file.m"
                  {
#line 400 "make.module_dep_file.m"
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 1;
#line 400 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 400 "make.module_dep_file.m"
                  }
#line 397 "make.module_dep_file.m"
                else
#line 397 "make.module_dep_file.m"
                  if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "contains_foreign_export") == 0))
#line 397 "make.module_dep_file.m"
                    {
#line 397 "make.module_dep_file.m"
                      *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 0;
#line 397 "make.module_dep_file.m"
                      make__module_dep_file__succeeded = MR_TRUE;
#line 397 "make.module_dep_file.m"
                    }
#line 397 "make.module_dep_file.m"
                  else
#line 397 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_FALSE;
#line 397 "make.module_dep_file.m"
              }
#line 608 "make.module_dep_file.m"
          }
#line 608 "make.module_dep_file.m"
      }
#line 655 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 655 "make.module_dep_file.m"
  }
#line 652 "make.module_dep_file.m"
}

#line 643 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 643 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 643 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4)
#line 643 "make.module_dep_file.m"
{
#line 646 "make.module_dep_file.m"
  {
#line 646 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_15_15;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FileNameTerm_6;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 646 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_8;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 646 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_14_14;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 646 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_23;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 608 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_19_19;
#line 603 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 603 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;

#line 608 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
      {
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
          {
#line 608 "make.module_dep_file.m"
            make__module_dep_file__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, (MR_Integer) 0)));
#line 647 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_13_13) == 0);
#line 646 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 646 "make.module_dep_file.m"
              {
#line 647 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 647 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 647 "make.module_dep_file.m"
                  {
#line 647 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 647 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 647 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 647 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 647 "make.module_dep_file.m"
                      {
#line 647 "make.module_dep_file.m"
                        make__module_dep_file__FileNameTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 647 "make.module_dep_file.m"
                        make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 4988 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_15_15 = (MR_Word) &make__module_dep_file_scalar_common_1[3];
#line 647 "make.module_dep_file.m"
                        {
#line 647 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_15_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_14_14)));
                        }
#line 646 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 646 "make.module_dep_file.m"
                          {
#line 603 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
                              {
#line 603 "make.module_dep_file.m"
                                make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 603 "make.module_dep_file.m"
                                make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 646 "make.module_dep_file.m"
                                  {
#line 603 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_27_27)) == (MR_mktag((MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
                                      {
#line 603 "make.module_dep_file.m"
                                        make__module_dep_file__String_23 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_27_27, (MR_Integer) 0)));
#line 631 "make.module_dep_file.m"
                                        {
#line 631 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_23, &make__module_dep_file__Language_7);
                                        }
#line 646 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 646 "make.module_dep_file.m"
                                          {
#line 603 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__FileNameTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
                                              {
#line 603 "make.module_dep_file.m"
                                                make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
                                                make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 1)));
#line 603 "make.module_dep_file.m"
                                                make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = (make__module_dep_file__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 646 "make.module_dep_file.m"
                                                  {
#line 603 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_32_32)) == (MR_mktag((MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
                                                      {
#line 603 "make.module_dep_file.m"
                                                        make__module_dep_file__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_32_32, (MR_Integer) 0)));
#line 650 "make.module_dep_file.m"
                                                        {
#line 650 "make.module_dep_file.m"
                                                          MR_Word base;
#line 650 "make.module_dep_file.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 650 "make.module_dep_file.m"
                                                          *make__module_dep_file__ForeignInclude_4 = base;
#line 650 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 650 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__FileName_8));
#line 650 "make.module_dep_file.m"
                                                        }
#line 650 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = MR_TRUE;
#line 603 "make.module_dep_file.m"
                                                      }
#line 646 "make.module_dep_file.m"
                                                  }
#line 603 "make.module_dep_file.m"
                                              }
#line 646 "make.module_dep_file.m"
                                          }
#line 603 "make.module_dep_file.m"
                                      }
#line 646 "make.module_dep_file.m"
                                  }
#line 603 "make.module_dep_file.m"
                              }
#line 646 "make.module_dep_file.m"
                          }
#line 647 "make.module_dep_file.m"
                      }
#line 647 "make.module_dep_file.m"
                  }
#line 646 "make.module_dep_file.m"
              }
#line 608 "make.module_dep_file.m"
          }
#line 608 "make.module_dep_file.m"
      }
#line 646 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 646 "make.module_dep_file.m"
  }
#line 643 "make.module_dep_file.m"
}

#line 633 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 633 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 633 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4)
#line 633 "make.module_dep_file.m"
{
#line 636 "make.module_dep_file.m"
  {
#line 636 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_14_14;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_17_17;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleTerm_6;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleName_8;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 636 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_15_15;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_22_22;
#line 636 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_25;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 636 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 608 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_21_21;
#line 603 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;

#line 608 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
      {
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
          {
#line 608 "make.module_dep_file.m"
            make__module_dep_file__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_22_22, (MR_Integer) 0)));
#line 637 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_15_15) == 0);
#line 636 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 636 "make.module_dep_file.m"
              {
#line 637 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 637 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 637 "make.module_dep_file.m"
                  {
#line 637 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 637 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 637 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 637 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 637 "make.module_dep_file.m"
                      {
#line 637 "make.module_dep_file.m"
                        make__module_dep_file__ImportedModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 637 "make.module_dep_file.m"
                        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5201 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_17_17 = (MR_Word) &make__module_dep_file_scalar_common_1[3];
#line 637 "make.module_dep_file.m"
                        {
#line 637 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_17_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_16_16)));
                        }
#line 636 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 636 "make.module_dep_file.m"
                          {
#line 603 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
                              {
#line 603 "make.module_dep_file.m"
                                make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
                                make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 603 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 636 "make.module_dep_file.m"
                                  {
#line 603 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_29_29)) == (MR_mktag((MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
                                      {
#line 603 "make.module_dep_file.m"
                                        make__module_dep_file__String_25 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_29_29, (MR_Integer) 0)));
#line 631 "make.module_dep_file.m"
                                        {
#line 631 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_25, &make__module_dep_file__Language_7);
                                        }
#line 636 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 636 "make.module_dep_file.m"
                                          {
#line 5247 "make.module_dep_file.c"
                                            make__module_dep_file__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 639 "make.module_dep_file.m"
                                            {
#line 639 "make.module_dep_file.m"
                                              make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_14_14, make__module_dep_file__ImportedModuleTerm_6, &make__module_dep_file__ImportedModuleName_8);
                                            }
#line 636 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 636 "make.module_dep_file.m"
                                              {
#line 641 "make.module_dep_file.m"
                                                {
#line 641 "make.module_dep_file.m"
                                                  make__module_dep_file__V_13_13 = mercury__term__context_init_0_f_0();
                                                }
#line 640 "make.module_dep_file.m"
                                                {
#line 640 "make.module_dep_file.m"
                                                  MR_Word base;
#line 640 "make.module_dep_file.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 640 "make.module_dep_file.m"
                                                  *make__module_dep_file__ForeignImport_4 = base;
#line 640 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 640 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__ImportedModuleName_8));
#line 640 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_13_13));
#line 640 "make.module_dep_file.m"
                                                }
#line 640 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = MR_TRUE;
#line 636 "make.module_dep_file.m"
                                              }
#line 636 "make.module_dep_file.m"
                                          }
#line 603 "make.module_dep_file.m"
                                      }
#line 636 "make.module_dep_file.m"
                                  }
#line 603 "make.module_dep_file.m"
                              }
#line 636 "make.module_dep_file.m"
                          }
#line 637 "make.module_dep_file.m"
                      }
#line 637 "make.module_dep_file.m"
                  }
#line 636 "make.module_dep_file.m"
              }
#line 608 "make.module_dep_file.m"
          }
#line 608 "make.module_dep_file.m"
      }
#line 636 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 636 "make.module_dep_file.m"
  }
#line 633 "make.module_dep_file.m"
}

#line 627 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 627 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 627 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4)
#line 627 "make.module_dep_file.m"
{
#line 629 "make.module_dep_file.m"
  {
#line 629 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 629 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 629 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 629 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 603 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;

#line 603 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
      {
#line 603 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 603 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_9_9)) == (MR_mktag((MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
          {
#line 603 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_9_9, (MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 631 "make.module_dep_file.m"
              {
#line 631 "make.module_dep_file.m"
                return make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_5, make__module_dep_file__Lang_4);
              }
#line 603 "make.module_dep_file.m"
          }
#line 603 "make.module_dep_file.m"
      }
#line 629 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 629 "make.module_dep_file.m"
  }
#line 627 "make.module_dep_file.m"
}

#line 622 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 622 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 622 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4)
#line 622 "make.module_dep_file.m"
{
#line 602 "make.module_dep_file.m"
  {
#line 602 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 602 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 603 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 603 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
      {
#line 603 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 603 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
          {
#line 603 "make.module_dep_file.m"
            *make__module_dep_file__FactDep_4 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_8_8, (MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "make.module_dep_file.m"
          }
#line 603 "make.module_dep_file.m"
      }
#line 602 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 602 "make.module_dep_file.m"
  }
#line 622 "make.module_dep_file.m"
}

#line 5421 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 5424 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 5426 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 5428 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 5430 "make.module_dep_file.c"
{
#line 5432 "make.module_dep_file.c"
  {
#line 5434 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 5436 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 5438 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__2_7;

#line 5441 "make.module_dep_file.c"
    {
#line 5443 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__620__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__2_7);
    }
#line 5446 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 5448 "make.module_dep_file.c"
      {
#line 5450 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_7));
#line 5452 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 5454 "make.module_dep_file.c"
      }
#line 5456 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 5458 "make.module_dep_file.c"
  }
#line 5460 "make.module_dep_file.c"
}

#line 617 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 617 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 617 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4)
#line 617 "make.module_dep_file.m"
{
#line 619 "make.module_dep_file.m"
  {
#line 619 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 619 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_17;
#line 619 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_14;
#line 619 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_18_18;
#line 619 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;
#line 608 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_22_22;

#line 608 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
      {
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
          {
#line 608 "make.module_dep_file.m"
            make__module_dep_file__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_23_23, (MR_Integer) 0)));
#line 614 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_18_18) == 0);
#line 619 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 619 "make.module_dep_file.m"
              {
#line 5511 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_17 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 615 "make.module_dep_file.m"
                {
#line 615 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_17, (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_2[10], make__module_dep_file__ArgTerms_14, make__module_dep_file__SymNames_4);
                }
#line 619 "make.module_dep_file.m"
              }
#line 608 "make.module_dep_file.m"
          }
#line 608 "make.module_dep_file.m"
      }
#line 619 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 619 "make.module_dep_file.m"
  }
#line 617 "make.module_dep_file.m"
}

#line 605 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 605 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 605 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 605 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 605 "make.module_dep_file.m"
{
#line 607 "make.module_dep_file.m"
  {
#line 607 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 608 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 608 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
      {
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        *make__module_dep_file__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 1)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 2)));
#line 608 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 608 "make.module_dep_file.m"
          *make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_8_8, (MR_Integer) 0)));
#line 608 "make.module_dep_file.m"
      }
#line 607 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 607 "make.module_dep_file.m"
  }
#line 605 "make.module_dep_file.m"
}

#line 600 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 600 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 600 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4)
#line 600 "make.module_dep_file.m"
{
#line 602 "make.module_dep_file.m"
  {
#line 602 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;
#line 602 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 603 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_5_5;

#line 603 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
      {
#line 603 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 603 "make.module_dep_file.m"
        make__module_dep_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_6_6)) == (MR_mktag((MR_Integer) 2)));
#line 603 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 603 "make.module_dep_file.m"
          {
#line 603 "make.module_dep_file.m"
            *make__module_dep_file__String_4 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_6_6, (MR_Integer) 0)));
#line 603 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "make.module_dep_file.m"
          }
#line 603 "make.module_dep_file.m"
      }
#line 602 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 602 "make.module_dep_file.m"
  }
#line 600 "make.module_dep_file.m"
}

#line 594 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 594 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 594 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4)
#line 594 "make.module_dep_file.m"
{
#line 596 "make.module_dep_file.m"
  {
#line 596 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 596 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Int_5;
#line 596 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 596 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 597 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;

#line 597 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 597 "make.module_dep_file.m"
      {
#line 597 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 597 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 597 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 597 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 597 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 597 "make.module_dep_file.m"
          {
#line 597 "make.module_dep_file.m"
            make__module_dep_file__Int_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_7_7, (MR_Integer) 0)));
#line 597 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 79 "make.module_dep_file.m"
              {
#line 79 "make.module_dep_file.m"
                if ((make__module_dep_file__Int_5 == (MR_Integer) 1))
#line 79 "make.module_dep_file.m"
                  {
#line 79 "make.module_dep_file.m"
                    *make__module_dep_file__Version_4 = (MR_Integer) 0;
#line 79 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 79 "make.module_dep_file.m"
                  }
#line 79 "make.module_dep_file.m"
                else
#line 79 "make.module_dep_file.m"
                  if ((make__module_dep_file__Int_5 == (MR_Integer) 2))
#line 80 "make.module_dep_file.m"
                    {
#line 80 "make.module_dep_file.m"
                      *make__module_dep_file__Version_4 = (MR_Integer) 1;
#line 80 "make.module_dep_file.m"
                      make__module_dep_file__succeeded = MR_TRUE;
#line 80 "make.module_dep_file.m"
                    }
#line 79 "make.module_dep_file.m"
                  else
#line 79 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_FALSE;
#line 79 "make.module_dep_file.m"
              }
#line 597 "make.module_dep_file.m"
          }
#line 597 "make.module_dep_file.m"
      }
#line 596 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 596 "make.module_dep_file.m"
  }
#line 594 "make.module_dep_file.m"
}

#line 578 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 578 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 578 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 578 "make.module_dep_file.m"
{
#line 578 "make.module_dep_file.m"
  {
#line 578 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 578 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv3_STATE_VARIABLE_Info_29;

#line 578 "make.module_dep_file.m"
    {
#line 578 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv3_STATE_VARIABLE_Info_29);
    }
#line 578 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv3_STATE_VARIABLE_Info_29));
#line 578 "make.module_dep_file.m"
  }
#line 578 "make.module_dep_file.m"
}

#line 578 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 578 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 578 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 578 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 578 "make.module_dep_file.m"
{
#line 578 "make.module_dep_file.m"
  {
#line 578 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 578 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_STATE_VARIABLE_Info_29;

#line 578 "make.module_dep_file.m"
    {
#line 578 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_STATE_VARIABLE_Info_29);
    }
#line 578 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_STATE_VARIABLE_Info_29));
#line 578 "make.module_dep_file.m"
  }
#line 578 "make.module_dep_file.m"
}

#line 481 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 481 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 481 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 481 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_65,
#line 481 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_66)
#line 481 "make.module_dep_file.m"
{
#line 590 "make.module_dep_file.m"
  {
#line 590 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 590 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_37;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleName_38;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Parents_39;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDeps_40;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImplDeps_41;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Children_42;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildren_43;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDeps_44;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_45;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImports_46;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExport_47;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMain_48;
#line 590 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignIncludes_49;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_136_136;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgs_21;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__VersionNumberTerm_22;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileTerm_23;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleNameTerm_24;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ParentsTerm_25;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDepsTerm_26;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImplDepsTerm_27;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ChildrenTerm_28;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildrenTerm_29;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDepsTerm_30;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguagesTerm_31;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImportsTerm_32;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExportTerm_33;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMainTerm_34;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgsTail_35;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Version_36;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_70_70;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_71_71;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_72_72;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_73_73;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_74_74;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_75_75;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_76_76;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_77_77;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_78_78;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_79_79;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_80_80;
#line 488 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_81_81;
#line 488 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_159_159;

#line 488 "make.module_dep_file.m"
    {
#line 488 "make.module_dep_file.m"
      make__module_dep_file__succeeded = make__module_dep_file__atom_term_3_p_0(make__module_dep_file__Term_17, &make__module_dep_file__V_159_159, &make__module_dep_file__ModuleArgs_21);
    }
#line 488 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
      {
#line 488 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp((MR_String) "module", make__module_dep_file__V_159_159) == 0);
#line 488 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
          {
#line 490 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ModuleArgs_21)) == (MR_mktag((MR_Integer) 1)));
#line 490 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 490 "make.module_dep_file.m"
              {
#line 490 "make.module_dep_file.m"
                make__module_dep_file__VersionNumberTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 0)));
#line 490 "make.module_dep_file.m"
                make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 1)));
#line 491 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 491 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 491 "make.module_dep_file.m"
                  {
#line 491 "make.module_dep_file.m"
                    make__module_dep_file__SourceFileTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_70_70, (MR_Integer) 0)));
#line 491 "make.module_dep_file.m"
                    make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_70_70, (MR_Integer) 1)));
#line 492 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 492 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 492 "make.module_dep_file.m"
                      {
#line 492 "make.module_dep_file.m"
                        make__module_dep_file__SourceFileModuleNameTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_71_71, (MR_Integer) 0)));
#line 492 "make.module_dep_file.m"
                        make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_71_71, (MR_Integer) 1)));
#line 493 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 493 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 493 "make.module_dep_file.m"
                          {
#line 493 "make.module_dep_file.m"
                            make__module_dep_file__ParentsTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_72_72, (MR_Integer) 0)));
#line 493 "make.module_dep_file.m"
                            make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_72_72, (MR_Integer) 1)));
#line 494 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 494 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 494 "make.module_dep_file.m"
                              {
#line 494 "make.module_dep_file.m"
                                make__module_dep_file__IntDepsTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_73_73, (MR_Integer) 0)));
#line 494 "make.module_dep_file.m"
                                make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_73_73, (MR_Integer) 1)));
#line 495 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 495 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 495 "make.module_dep_file.m"
                                  {
#line 495 "make.module_dep_file.m"
                                    make__module_dep_file__ImplDepsTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_74_74, (MR_Integer) 0)));
#line 495 "make.module_dep_file.m"
                                    make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_74_74, (MR_Integer) 1)));
#line 496 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 496 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 496 "make.module_dep_file.m"
                                      {
#line 496 "make.module_dep_file.m"
                                        make__module_dep_file__ChildrenTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_75_75, (MR_Integer) 0)));
#line 496 "make.module_dep_file.m"
                                        make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_75_75, (MR_Integer) 1)));
#line 497 "make.module_dep_file.m"
                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 497 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 497 "make.module_dep_file.m"
                                          {
#line 497 "make.module_dep_file.m"
                                            make__module_dep_file__NestedChildrenTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_76_76, (MR_Integer) 0)));
#line 497 "make.module_dep_file.m"
                                            make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_76_76, (MR_Integer) 1)));
#line 498 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 498 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 498 "make.module_dep_file.m"
                                              {
#line 498 "make.module_dep_file.m"
                                                make__module_dep_file__FactDepsTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 0)));
#line 498 "make.module_dep_file.m"
                                                make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 1)));
#line 499 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 499 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 499 "make.module_dep_file.m"
                                                  {
#line 499 "make.module_dep_file.m"
                                                    make__module_dep_file__ForeignLanguagesTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 0)));
#line 499 "make.module_dep_file.m"
                                                    make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 1)));
#line 500 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 500 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 500 "make.module_dep_file.m"
                                                      {
#line 500 "make.module_dep_file.m"
                                                        make__module_dep_file__ForeignImportsTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 0)));
#line 500 "make.module_dep_file.m"
                                                        make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 1)));
#line 501 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 501 "make.module_dep_file.m"
                                                        if (make__module_dep_file__succeeded)
#line 501 "make.module_dep_file.m"
                                                          {
#line 501 "make.module_dep_file.m"
                                                            make__module_dep_file__ContainsForeignExportTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 0)));
#line 501 "make.module_dep_file.m"
                                                            make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 1)));
#line 503 "make.module_dep_file.m"
                                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 503 "make.module_dep_file.m"
                                                            if (make__module_dep_file__succeeded)
#line 503 "make.module_dep_file.m"
                                                              {
#line 503 "make.module_dep_file.m"
                                                                make__module_dep_file__HasMainTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 0)));
#line 503 "make.module_dep_file.m"
                                                                make__module_dep_file__ModuleArgsTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 1)));
#line 506 "make.module_dep_file.m"
                                                                {
#line 506 "make.module_dep_file.m"
                                                                  make__module_dep_file__succeeded = make__module_dep_file__version_number_term_2_p_0(make__module_dep_file__VersionNumberTerm_22, &make__module_dep_file__Version_36);
                                                                }
#line 488 "make.module_dep_file.m"
                                                                if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                  {
#line 507 "make.module_dep_file.m"
                                                                    {
#line 507 "make.module_dep_file.m"
                                                                      make__module_dep_file__succeeded = make__module_dep_file__string_term_2_p_0(make__module_dep_file__SourceFileTerm_23, &make__module_dep_file__SourceFileName_37);
                                                                    }
#line 488 "make.module_dep_file.m"
                                                                    if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                      {
#line 6061 "make.module_dep_file.c"
                                                                        make__module_dep_file__TypeCtorInfo_136_136 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 508 "make.module_dep_file.m"
                                                                        {
#line 508 "make.module_dep_file.m"
                                                                          make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_136_136, make__module_dep_file__SourceFileModuleNameTerm_24, &make__module_dep_file__SourceFileModuleName_38);
                                                                        }
#line 488 "make.module_dep_file.m"
                                                                        if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                          {
#line 511 "make.module_dep_file.m"
                                                                            {
#line 511 "make.module_dep_file.m"
                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ParentsTerm_25, &make__module_dep_file__Parents_39);
                                                                            }
#line 488 "make.module_dep_file.m"
                                                                            if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                              {
#line 512 "make.module_dep_file.m"
                                                                                {
#line 512 "make.module_dep_file.m"
                                                                                  make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__IntDepsTerm_26, &make__module_dep_file__IntDeps_40);
                                                                                }
#line 488 "make.module_dep_file.m"
                                                                                if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                                  {
#line 513 "make.module_dep_file.m"
                                                                                    {
#line 513 "make.module_dep_file.m"
                                                                                      make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ImplDepsTerm_27, &make__module_dep_file__ImplDeps_41);
                                                                                    }
#line 488 "make.module_dep_file.m"
                                                                                    if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                                      {
#line 514 "make.module_dep_file.m"
                                                                                        {
#line 514 "make.module_dep_file.m"
                                                                                          make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ChildrenTerm_28, &make__module_dep_file__Children_42);
                                                                                        }
#line 488 "make.module_dep_file.m"
                                                                                        if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                                          {
#line 515 "make.module_dep_file.m"
                                                                                            {
#line 515 "make.module_dep_file.m"
                                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__NestedChildrenTerm_29, &make__module_dep_file__NestedChildren_43);
                                                                                            }
#line 488 "make.module_dep_file.m"
                                                                                            if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                                              {
#line 517 "make.module_dep_file.m"
                                                                                                {
#line 517 "make.module_dep_file.m"
                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho5_3_p_0(make__module_dep_file__FactDepsTerm_30, &make__module_dep_file__FactDeps_44);
                                                                                                }
#line 488 "make.module_dep_file.m"
                                                                                                if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                                                  {
#line 518 "make.module_dep_file.m"
                                                                                                    {
#line 518 "make.module_dep_file.m"
                                                                                                      make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho4_3_p_0(make__module_dep_file__ForeignLanguagesTerm_31, &make__module_dep_file__ForeignLanguages_45);
                                                                                                    }
#line 488 "make.module_dep_file.m"
                                                                                                    if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                                                      {
#line 520 "make.module_dep_file.m"
                                                                                                        {
#line 520 "make.module_dep_file.m"
                                                                                                          make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho3_3_p_0(make__module_dep_file__ForeignImportsTerm_32, &make__module_dep_file__ForeignImports_46);
                                                                                                        }
#line 488 "make.module_dep_file.m"
                                                                                                        if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                                                          {
#line 522 "make.module_dep_file.m"
                                                                                                            {
#line 522 "make.module_dep_file.m"
                                                                                                              make__module_dep_file__succeeded = make__module_dep_file__contains_foreign_export_term_2_p_0(make__module_dep_file__ContainsForeignExportTerm_33, &make__module_dep_file__ContainsForeignExport_47);
                                                                                                            }
#line 488 "make.module_dep_file.m"
                                                                                                            if (make__module_dep_file__succeeded)
#line 488 "make.module_dep_file.m"
                                                                                                              {
#line 525 "make.module_dep_file.m"
                                                                                                                {
#line 525 "make.module_dep_file.m"
                                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__has_main_term_2_p_0(make__module_dep_file__HasMainTerm_34, &make__module_dep_file__HasMain_48);
                                                                                                                }
#line 488 "make.module_dep_file.m"
                                                                                                                if (make__module_dep_file__succeeded)
#line 531 "make.module_dep_file.m"
                                                                                                                  {
#line 531 "make.module_dep_file.m"
                                                                                                                    if ((make__module_dep_file__ModuleArgsTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "make.module_dep_file.m"
                                                                                                                      {
#line 528 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 0);
#line 528 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 528 "make.module_dep_file.m"
                                                                                                                          {
#line 530 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludes_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = MR_TRUE;
#line 528 "make.module_dep_file.m"
                                                                                                                          }
#line 528 "make.module_dep_file.m"
                                                                                                                      }
#line 531 "make.module_dep_file.m"
                                                                                                                    else
#line 532 "make.module_dep_file.m"
                                                                                                                      {
#line 532 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__ForeignIncludesTerm_50;
#line 532 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__V_85_85;

#line 532 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 1);
#line 532 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 532 "make.module_dep_file.m"
                                                                                                                          {
#line 533 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludesTerm_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 0)));
#line 533 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 1)));
#line 533 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = (make__module_dep_file__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "make.module_dep_file.m"
                                                                                                                            if (make__module_dep_file__succeeded)
#line 534 "make.module_dep_file.m"
                                                                                                                              {
#line 534 "make.module_dep_file.m"
                                                                                                                                make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho2_3_p_0(make__module_dep_file__ForeignIncludesTerm_50, &make__module_dep_file__ForeignIncludes_49);
                                                                                                                              }
#line 532 "make.module_dep_file.m"
                                                                                                                          }
#line 532 "make.module_dep_file.m"
                                                                                                                      }
#line 531 "make.module_dep_file.m"
                                                                                                                  }
#line 488 "make.module_dep_file.m"
                                                                                                              }
#line 488 "make.module_dep_file.m"
                                                                                                          }
#line 488 "make.module_dep_file.m"
                                                                                                      }
#line 488 "make.module_dep_file.m"
                                                                                                  }
#line 488 "make.module_dep_file.m"
                                                                                              }
#line 488 "make.module_dep_file.m"
                                                                                          }
#line 488 "make.module_dep_file.m"
                                                                                      }
#line 488 "make.module_dep_file.m"
                                                                                  }
#line 488 "make.module_dep_file.m"
                                                                              }
#line 488 "make.module_dep_file.m"
                                                                          }
#line 488 "make.module_dep_file.m"
                                                                      }
#line 488 "make.module_dep_file.m"
                                                                  }
#line 503 "make.module_dep_file.m"
                                                              }
#line 501 "make.module_dep_file.m"
                                                          }
#line 500 "make.module_dep_file.m"
                                                      }
#line 499 "make.module_dep_file.m"
                                                  }
#line 498 "make.module_dep_file.m"
                                              }
#line 497 "make.module_dep_file.m"
                                          }
#line 496 "make.module_dep_file.m"
                                      }
#line 495 "make.module_dep_file.m"
                                  }
#line 494 "make.module_dep_file.m"
                              }
#line 493 "make.module_dep_file.m"
                          }
#line 492 "make.module_dep_file.m"
                      }
#line 491 "make.module_dep_file.m"
                  }
#line 490 "make.module_dep_file.m"
              }
#line 488 "make.module_dep_file.m"
          }
#line 488 "make.module_dep_file.m"
      }
#line 590 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 538 "make.module_dep_file.m"
      {
#line 538 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ContainsForeignCode_51;
#line 538 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Items_54;
#line 538 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Imports_58;
#line 554 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_160_160;

#line 538 "make.module_dep_file.m"
        {
#line 538 "make.module_dep_file.m"
          make__module_dep_file__ContainsForeignCode_51 = make__module_dep_file__contains_foreign_code_1_f_0(make__module_dep_file__ForeignLanguages_45);
        }
#line 541 "make.module_dep_file.m"
        {
#line 541 "make.module_dep_file.m"
          make__module_dep_file__Items_54 = mercury__cord__empty_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
        }
#line 545 "make.module_dep_file.m"
        {
#line 545 "make.module_dep_file.m"
          make__module_dep_file__Imports_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 0) = ((MR_Box) (make__module_dep_file__SourceFileName_37));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 1) = ((MR_Box) (make__module_dep_file__SourceFileModuleName_38));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 2) = ((MR_Box) (make__module_dep_file__ModuleName_14));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 3) = ((MR_Box) (make__module_dep_file__Parents_39));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 4) = ((MR_Box) (make__module_dep_file__IntDeps_40));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 5) = ((MR_Box) (make__module_dep_file__ImplDeps_41));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 7) = ((MR_Box) (make__module_dep_file__Children_42));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 9) = ((MR_Box) (make__module_dep_file__NestedChildren_43));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 10) = ((MR_Box) (make__module_dep_file__FactDeps_44));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 11) = ((MR_Box) (make__module_dep_file__ContainsForeignCode_51));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 12) = ((MR_Box) (make__module_dep_file__ForeignImports_46));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 13) = ((MR_Box) (make__module_dep_file__ForeignIncludes_49));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 14) = ((MR_Box) (make__module_dep_file__ContainsForeignExport_47));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 15) = ((MR_Box) (make__module_dep_file__Items_54));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 17) = ((MR_Box) ((MR_Integer) 0));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 18) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 19) = ((MR_Box) (make__module_dep_file__HasMain_48));
#line 545 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 20) = ((MR_Box) (make__module_dep_file__ModuleDir_15));
#line 545 "make.module_dep_file.m"
        }
#line 554 "make.module_dep_file.m"
        {
#line 554 "make.module_dep_file.m"
          make__module_dep_file__V_160_160 = mercury__dir__this_directory_0_f_0();
        }
#line 554 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp(make__module_dep_file__ModuleDir_15, make__module_dep_file__V_160_160) == 0);
#line 6346 "make.module_dep_file.c"
        if (make__module_dep_file__succeeded)
#line 6348 "make.module_dep_file.c"
          {
#line 6350 "make.module_dep_file.c"
            MR_Word make__module_dep_file__SourceFileExists_59;

#line 555 "make.module_dep_file.m"
            {
#line 555 "make.module_dep_file.m"
              make__module_dep_file__check_regular_file_exists_4_p_0(make__module_dep_file__SourceFileName_37, &make__module_dep_file__SourceFileExists_59);
            }
#line 6358 "make.module_dep_file.c"
            if ((make__module_dep_file__SourceFileExists_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6360 "make.module_dep_file.c"
              {
#line 6362 "make.module_dep_file.c"
                MR_Word make__module_dep_file__TypeCtorInfo_150_150;
#line 6364 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 0)));
#line 6366 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap_63;
#line 6368 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_89_89;
#line 6370 "make.module_dep_file.c"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_90_90;
#line 6372 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_91_91;
#line 6374 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 1)));
#line 6376 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 2)));
#line 6378 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 3)));
#line 6380 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 4)));
#line 6382 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 5)));
#line 6384 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 6)));
#line 6386 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 7)));
#line 6388 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 8)));
#line 6390 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 9)));
#line 6392 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 10)));
#line 6394 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 11)));
#line 6396 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 12)));
#line 6398 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 13)));
#line 6400 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 14)));
#line 6402 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 15)));
#line 6404 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 16)));
#line 6406 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 17)));
#line 6408 "make.module_dep_file.c"
                MR_Integer make__module_dep_file__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 18)));
#line 6410 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 19)));
#line 577 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_66;
#line 577 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_68;

#line 569 "make.module_dep_file.m"
                {
#line 569 "make.module_dep_file.m"
                  make__module_dep_file__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_89_89, 0) = ((MR_Box) (make__module_dep_file__Imports_58));
#line 569 "make.module_dep_file.m"
                }
#line 6425 "make.module_dep_file.c"
                make__module_dep_file__TypeCtorInfo_150_150 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 569 "make.module_dep_file.m"
                {
#line 569 "make.module_dep_file.m"
                  mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_150_150, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_89_89)), make__module_dep_file__ModuleDepMap0_62, &make__module_dep_file__ModuleDepMap_63);
                }
#line 570 "make.module_dep_file.m"
                {
#line 570 "make.module_dep_file.m"
                  make__module_dep_file__STATE_VARIABLE_Info_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_63));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 1) = ((MR_Box) (make__module_dep_file__V_97_97));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 2) = ((MR_Box) (make__module_dep_file__V_98_98));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 3) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 4) = ((MR_Box) (make__module_dep_file__V_100_100));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 5) = ((MR_Box) (make__module_dep_file__V_101_101));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 6) = ((MR_Box) (make__module_dep_file__V_102_102));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 7) = ((MR_Box) (make__module_dep_file__V_103_103));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 8) = ((MR_Box) (make__module_dep_file__V_104_104));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 9) = ((MR_Box) (make__module_dep_file__V_105_105));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 10) = ((MR_Box) (make__module_dep_file__V_106_106));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 11) = ((MR_Box) (make__module_dep_file__V_107_107));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 12) = ((MR_Box) (make__module_dep_file__V_108_108));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 13) = ((MR_Box) (make__module_dep_file__V_109_109));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 14) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 15) = ((MR_Box) (make__module_dep_file__V_111_111));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 16) = ((MR_Box) (make__module_dep_file__V_112_112));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 17) = ((MR_Box) (make__module_dep_file__V_113_113));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 18) = ((MR_Box) (make__module_dep_file__V_114_114));
#line 570 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_90, 19) = ((MR_Box) (make__module_dep_file__V_115_115));
#line 570 "make.module_dep_file.m"
                }
#line 578 "make.module_dep_file.m"
                {
#line 578 "make.module_dep_file.m"
                  make__module_dep_file__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 578 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_91_91, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 578 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_91_91, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1));
#line 578 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 578 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_91_91, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 578 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_91_91, 4) = ((MR_Box) ((MR_Integer) 1));
#line 578 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_91_91, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 578 "make.module_dep_file.m"
                }
#line 577 "make.module_dep_file.m"
                {
#line 577 "make.module_dep_file.m"
                  mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_150_150, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_91_91, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_90_90)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_66, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_68);
                }
#line 577 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_66 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_66);
#line 581 "make.module_dep_file.m"
                {
#line 581 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_66, make__module_dep_file__NestedChildren_43);
                }
#line 583 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 582 "make.module_dep_file.m"
                  {
#line 582 "make.module_dep_file.m"
                    *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[0]);
#line 582 "make.module_dep_file.m"
                  }
#line 583 "make.module_dep_file.m"
                else
#line 584 "make.module_dep_file.m"
                  *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6520 "make.module_dep_file.c"
              }
#line 6522 "make.module_dep_file.c"
            else
#line 6524 "make.module_dep_file.c"
              {
#line 560 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_61_61;

#line 560 "make.module_dep_file.m"
                {
#line 560 "make.module_dep_file.m"
                  mercury__io__remove_file_4_p_0(make__module_dep_file__ModuleDepFile_16, &make__module_dep_file__V_61_61);
                }
#line 588 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = make__module_dep_file__SourceFileExists_59;
#line 588 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_66 = make__module_dep_file__STATE_VARIABLE_Info_0_65;
#line 6538 "make.module_dep_file.c"
              }
#line 6540 "make.module_dep_file.c"
          }
#line 6542 "make.module_dep_file.c"
        else
#line 6544 "make.module_dep_file.c"
          {
#line 6546 "make.module_dep_file.c"
            MR_Word make__module_dep_file__TypeCtorInfo_150_253;
#line 6548 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap0_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 0)));
#line 6550 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap_207;
#line 6552 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_209_209;
#line 6554 "make.module_dep_file.c"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_90_210;
#line 6556 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_211_211;
#line 6558 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 1)));
#line 6560 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 2)));
#line 6562 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 3)));
#line 6564 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 4)));
#line 6566 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 5)));
#line 6568 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 6)));
#line 6570 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 7)));
#line 6572 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 8)));
#line 6574 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 9)));
#line 6576 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 10)));
#line 6578 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 11)));
#line 6580 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 12)));
#line 6582 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 13)));
#line 6584 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 14)));
#line 6586 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 15)));
#line 6588 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 16)));
#line 6590 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 17)));
#line 6592 "make.module_dep_file.c"
            MR_Integer make__module_dep_file__V_231_231 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 18)));
#line 6594 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 19)));
#line 577 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv5_STATE_VARIABLE_Info_66;
#line 577 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv4_STATE_VARIABLE_IO_68;

#line 569 "make.module_dep_file.m"
            {
#line 569 "make.module_dep_file.m"
              make__module_dep_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(1), make__module_dep_file__V_209_209, 0) = ((MR_Box) (make__module_dep_file__Imports_58));
#line 569 "make.module_dep_file.m"
            }
#line 6609 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_150_253 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 569 "make.module_dep_file.m"
            {
#line 569 "make.module_dep_file.m"
              mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_150_253, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_209_209)), make__module_dep_file__ModuleDepMap0_206, &make__module_dep_file__ModuleDepMap_207);
            }
#line 570 "make.module_dep_file.m"
            {
#line 570 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_90_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_207));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 1) = ((MR_Box) (make__module_dep_file__V_214_214));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 2) = ((MR_Box) (make__module_dep_file__V_215_215));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 3) = ((MR_Box) (make__module_dep_file__V_216_216));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 4) = ((MR_Box) (make__module_dep_file__V_217_217));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 5) = ((MR_Box) (make__module_dep_file__V_218_218));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 6) = ((MR_Box) (make__module_dep_file__V_219_219));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 7) = ((MR_Box) (make__module_dep_file__V_220_220));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 8) = ((MR_Box) (make__module_dep_file__V_221_221));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 9) = ((MR_Box) (make__module_dep_file__V_222_222));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 10) = ((MR_Box) (make__module_dep_file__V_223_223));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 11) = ((MR_Box) (make__module_dep_file__V_224_224));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 12) = ((MR_Box) (make__module_dep_file__V_225_225));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 13) = ((MR_Box) (make__module_dep_file__V_226_226));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 14) = ((MR_Box) (make__module_dep_file__V_227_227));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 15) = ((MR_Box) (make__module_dep_file__V_228_228));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 16) = ((MR_Box) (make__module_dep_file__V_229_229));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 17) = ((MR_Box) (make__module_dep_file__V_230_230));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 18) = ((MR_Box) (make__module_dep_file__V_231_231));
#line 570 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_90_210, 19) = ((MR_Box) (make__module_dep_file__V_232_232));
#line 570 "make.module_dep_file.m"
            }
#line 578 "make.module_dep_file.m"
            {
#line 578 "make.module_dep_file.m"
              make__module_dep_file__V_211_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 578 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_211_211, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 578 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_211_211, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2));
#line 578 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_211_211, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 578 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_211_211, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 578 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_211_211, 4) = ((MR_Box) ((MR_Integer) 1));
#line 578 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_211_211, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 578 "make.module_dep_file.m"
            }
#line 577 "make.module_dep_file.m"
            {
#line 577 "make.module_dep_file.m"
              mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_150_253, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_211_211, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_90_210)), &make__module_dep_file__conv5_STATE_VARIABLE_Info_66, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv4_STATE_VARIABLE_IO_68);
            }
#line 577 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_66 = ((MR_Word) make__module_dep_file__conv5_STATE_VARIABLE_Info_66);
#line 581 "make.module_dep_file.m"
            {
#line 581 "make.module_dep_file.m"
              make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_66, make__module_dep_file__NestedChildren_43);
            }
#line 583 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 582 "make.module_dep_file.m"
              {
#line 582 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[0]);
#line 582 "make.module_dep_file.m"
              }
#line 583 "make.module_dep_file.m"
            else
#line 584 "make.module_dep_file.m"
              *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6704 "make.module_dep_file.c"
          }
#line 538 "make.module_dep_file.m"
      }
#line 590 "make.module_dep_file.m"
    else
#line 591 "make.module_dep_file.m"
      {
#line 591 "make.module_dep_file.m"
        *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[1]);
#line 591 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_66 = make__module_dep_file__STATE_VARIABLE_Info_0_65;
#line 591 "make.module_dep_file.m"
      }
#line 590 "make.module_dep_file.m"
  }
#line 481 "make.module_dep_file.m"
}

#line 723 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 723 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 723 "make.module_dep_file.m"
{
#line 723 "make.module_dep_file.m"
  {
#line 723 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 723 "make.module_dep_file.m"
    {
#line 723 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 723 "make.module_dep_file.m"
      return;
    }
#line 723 "make.module_dep_file.m"
  }
#line 723 "make.module_dep_file.m"
}

#line 723 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 723 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 723 "make.module_dep_file.m"
{
#line 723 "make.module_dep_file.m"
  {
#line 723 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 723 "make.module_dep_file.m"
    {
#line 723 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 723 "make.module_dep_file.m"
      return;
    }
#line 723 "make.module_dep_file.m"
  }
#line 723 "make.module_dep_file.m"
}

#line 723 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 723 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 723 "make.module_dep_file.m"
{
#line 723 "make.module_dep_file.m"
  {
#line 723 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 723 "make.module_dep_file.m"
    {
#line 723 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 723 "make.module_dep_file.m"
      return;
    }
#line 723 "make.module_dep_file.m"
  }
#line 723 "make.module_dep_file.m"
}

#line 723 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 723 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 723 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 723 "make.module_dep_file.m"
{
#line 723 "make.module_dep_file.m"
  {
#line 723 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 723 "make.module_dep_file.m"
    {
#line 723 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 723 "make.module_dep_file.m"
      return;
    }
#line 723 "make.module_dep_file.m"
  }
#line 723 "make.module_dep_file.m"
}

#line 440 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 440 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 440 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 440 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 440 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 440 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_28,
#line 440 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_29)
#line 440 "make.module_dep_file.m"
{
#line 445 "make.module_dep_file.m"
  {
#line 445 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 445 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepFile_15;
#line 445 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OldInputStream_16;
#line 445 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchResult_17;
#line 445 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_32_32;

#line 447 "make.module_dep_file.m"
    {
#line 447 "make.module_dep_file.m"
      make__module_dep_file__V_32_32 = make__make_module_dep_file_extension_0_f_0();
    }
#line 446 "make.module_dep_file.m"
    {
#line 446 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__V_32_32, &make__module_dep_file__ModuleDepFile_15);
    }
#line 448 "make.module_dep_file.m"
    {
#line 448 "make.module_dep_file.m"
      mercury__io__input_stream_3_p_0(&make__module_dep_file__OldInputStream_16);
    }
#line 449 "make.module_dep_file.m"
    {
#line 449 "make.module_dep_file.m"
      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 0, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleDepFile_15, &make__module_dep_file__SearchResult_17);
    }
#line 474 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__SearchResult_17)) == (MR_mktag((MR_Integer) 1))))
#line 475 "make.module_dep_file.m"
      {
#line 721 "make.module_dep_file.m"
        if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 727 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 721 "make.module_dep_file.m"
        else
#line 721 "make.module_dep_file.m"
          {
#line 721 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_61_61;

#line 723 "make.module_dep_file.m"
            {
#line 723 "make.module_dep_file.m"
              make__module_dep_file__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 723 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 723 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
#line 723 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 723 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 723 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 723 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 5) = ((MR_Box) ((MR_String) "couldn\'t find \140.module_dep\' file"));
#line 723 "make.module_dep_file.m"
            }
#line 722 "make.module_dep_file.m"
            {
#line 722 "make.module_dep_file.m"
              make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_61_61);
            }
#line 725 "make.module_dep_file.m"
            {
#line 725 "make.module_dep_file.m"
              make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 725 "make.module_dep_file.m"
              return;
            }
#line 721 "make.module_dep_file.m"
          }
#line 475 "make.module_dep_file.m"
      }
#line 474 "make.module_dep_file.m"
    else
#line 452 "make.module_dep_file.m"
      {
#line 452 "make.module_dep_file.m"
        MR_String make__module_dep_file__ModuleDir_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__SearchResult_17, (MR_Integer) 0)));
#line 452 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TermResult_19;
#line 452 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepStream_20;

#line 453 "make.module_dep_file.m"
        {
#line 453 "make.module_dep_file.m"
          mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &make__module_dep_file__TermResult_19);
        }
#line 454 "make.module_dep_file.m"
        {
#line 454 "make.module_dep_file.m"
          mercury__io__set_input_stream_4_p_0(make__module_dep_file__OldInputStream_16, &make__module_dep_file__ModuleDepStream_20);
        }
#line 455 "make.module_dep_file.m"
        {
#line 455 "make.module_dep_file.m"
          mercury__io__close_input_3_p_0(make__module_dep_file__ModuleDepStream_20);
        }
#line 6960 "make.module_dep_file.c"
        if ((make__module_dep_file__TermResult_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6962 "make.module_dep_file.c"
          {
#line 721 "make.module_dep_file.m"
            if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 727 "make.module_dep_file.m"
              *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 721 "make.module_dep_file.m"
            else
#line 721 "make.module_dep_file.m"
              {
#line 721 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_77_77;

#line 723 "make.module_dep_file.m"
                {
#line 723 "make.module_dep_file.m"
                  make__module_dep_file__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 723 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 723 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_2));
#line 723 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 723 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 723 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 723 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 5) = ((MR_Box) ((MR_String) "unexpected eof"));
#line 723 "make.module_dep_file.m"
                }
#line 722 "make.module_dep_file.m"
                {
#line 722 "make.module_dep_file.m"
                  make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_77_77);
                }
#line 725 "make.module_dep_file.m"
                {
#line 725 "make.module_dep_file.m"
                  make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 725 "make.module_dep_file.m"
                  return;
                }
#line 721 "make.module_dep_file.m"
              }
#line 7007 "make.module_dep_file.c"
          }
#line 7009 "make.module_dep_file.c"
        else
#line 7011 "make.module_dep_file.c"
          if (((MR_tag((MR_Word) make__module_dep_file__TermResult_19)) == (MR_mktag((MR_Integer) 1))))
#line 7013 "make.module_dep_file.c"
            {
#line 7015 "make.module_dep_file.c"
              MR_String make__module_dep_file__ParseError_24 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 0)));
#line 7017 "make.module_dep_file.c"
              MR_String make__module_dep_file__Msg_89;
#line 464 "make.module_dep_file.m"
              MR_Integer make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 1)));

#line 465 "make.module_dep_file.m"
              {
#line 465 "make.module_dep_file.m"
                make__module_dep_file__Msg_89 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", make__module_dep_file__ParseError_24);
              }
#line 721 "make.module_dep_file.m"
              if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 727 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 721 "make.module_dep_file.m"
              else
#line 721 "make.module_dep_file.m"
                {
#line 721 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_84_84;

#line 723 "make.module_dep_file.m"
                  {
#line 723 "make.module_dep_file.m"
                    make__module_dep_file__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 723 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 723 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_3));
#line 723 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 723 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 723 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 723 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 5) = ((MR_Box) (make__module_dep_file__Msg_89));
#line 723 "make.module_dep_file.m"
                  }
#line 722 "make.module_dep_file.m"
                  {
#line 722 "make.module_dep_file.m"
                    make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_84_84);
                  }
#line 725 "make.module_dep_file.m"
                  {
#line 725 "make.module_dep_file.m"
                    make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 725 "make.module_dep_file.m"
                    return;
                  }
#line 721 "make.module_dep_file.m"
                }
#line 7070 "make.module_dep_file.c"
            }
#line 7072 "make.module_dep_file.c"
          else
#line 7074 "make.module_dep_file.c"
            {
#line 7076 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Term_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 1)));
#line 7078 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Result_104;
#line 7080 "make.module_dep_file.c"
              MR_Word make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 457 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 0)));

#line 458 "make.module_dep_file.m"
              {
#line 458 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_3_11_p_0(make__module_dep_file__Globals_9, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleName_12, make__module_dep_file__ModuleDir_18, make__module_dep_file__ModuleDepFile_15, make__module_dep_file__Term_22, &make__module_dep_file__Result_104, make__module_dep_file__STATE_VARIABLE_Info_0_28, &make__module_dep_file__STATE_VARIABLE_Info_46_106);
              }
#line 469 "make.module_dep_file.m"
              if ((make__module_dep_file__Result_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 468 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 469 "make.module_dep_file.m"
              else
#line 470 "make.module_dep_file.m"
                {
#line 470 "make.module_dep_file.m"
                  MR_String make__module_dep_file__Msg_98 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__Result_104, (MR_Integer) 0)));

#line 721 "make.module_dep_file.m"
                  if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 727 "make.module_dep_file.m"
                    *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 721 "make.module_dep_file.m"
                  else
#line 721 "make.module_dep_file.m"
                    {
#line 721 "make.module_dep_file.m"
                      MR_Word make__module_dep_file__V_94_94;

#line 723 "make.module_dep_file.m"
                      {
#line 723 "make.module_dep_file.m"
                        make__module_dep_file__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 723 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 723 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_4));
#line 723 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 723 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 723 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 723 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 5) = ((MR_Box) (make__module_dep_file__Msg_98));
#line 723 "make.module_dep_file.m"
                      }
#line 722 "make.module_dep_file.m"
                      {
#line 722 "make.module_dep_file.m"
                        make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_94_94);
                      }
#line 725 "make.module_dep_file.m"
                      {
#line 725 "make.module_dep_file.m"
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_46_106, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 725 "make.module_dep_file.m"
                        return;
                      }
#line 721 "make.module_dep_file.m"
                    }
#line 470 "make.module_dep_file.m"
                }
#line 7146 "make.module_dep_file.c"
            }
#line 452 "make.module_dep_file.m"
      }
#line 445 "make.module_dep_file.m"
  }
#line 440 "make.module_dep_file.m"
}

#line 431 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 431 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 431 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 431 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 431 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 431 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14)
#line 431 "make.module_dep_file.m"
{
#line 436 "make.module_dep_file.m"
  {
#line 436 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 436 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_17_17;
#line 436 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;

#line 438 "make.module_dep_file.m"
    {
#line 438 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = mercury__dir__this_directory_0_f_0();
    }
#line 438 "make.module_dep_file.m"
    {
#line 438 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 0) = ((MR_Box) (make__module_dep_file__V_20_20));
#line 438 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "make.module_dep_file.m"
    }
#line 437 "make.module_dep_file.m"
    {
#line 437 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__V_17_17, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_13, make__module_dep_file__STATE_VARIABLE_Info_14);
#line 437 "make.module_dep_file.m"
      return;
    }
#line 436 "make.module_dep_file.m"
  }
#line 431 "make.module_dep_file.m"
}

#line 421 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 421 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 421 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 421 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 421 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 421 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15)
#line 421 "make.module_dep_file.m"
{
#line 425 "make.module_dep_file.m"
  {
#line 425 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 425 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_13;

#line 426 "make.module_dep_file.m"
    {
#line 426 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_8, (MR_Integer) 642, &make__module_dep_file__SearchDirs_13);
    }
#line 428 "make.module_dep_file.m"
    {
#line 428 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__SearchDirs_13, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_14, make__module_dep_file__STATE_VARIABLE_Info_15);
#line 428 "make.module_dep_file.m"
      return;
    }
#line 425 "make.module_dep_file.m"
  }
#line 421 "make.module_dep_file.m"
}

#line 407 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 407 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 407 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4)
#line 407 "make.module_dep_file.m"
{
#line 412 "make.module_dep_file.m"
  {
#line 412 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 412 "make.module_dep_file.m"
    if ((make__module_dep_file__HasMain_3 == (MR_Integer) 0))
#line 413 "make.module_dep_file.m"
      *make__module_dep_file__HasMainStr_4 = (MR_String) "has_main";
#line 412 "make.module_dep_file.m"
    else
#line 416 "make.module_dep_file.m"
      *make__module_dep_file__HasMainStr_4 = (MR_String) "no_main";
#line 412 "make.module_dep_file.m"
  }
#line 407 "make.module_dep_file.m"
}

#line 391 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 391 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 391 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4)
#line 391 "make.module_dep_file.m"
{
#line 397 "make.module_dep_file.m"
  {
#line 397 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 397 "make.module_dep_file.m"
    if ((make__module_dep_file__ContainsForeignExport_3 == (MR_Integer) 0))
#line 398 "make.module_dep_file.m"
      *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "contains_foreign_export";
#line 397 "make.module_dep_file.m"
    else
#line 403 "make.module_dep_file.m"
      *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "no_foreign_export";
#line 397 "make.module_dep_file.m"
  }
#line 391 "make.module_dep_file.m"
}

#line 381 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 381 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4)
#line 381 "make.module_dep_file.m"
{
#line 384 "make.module_dep_file.m"
  {
#line 384 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 384 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 0)));
#line 384 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 1)));

#line 386 "make.module_dep_file.m"
    {
#line 386 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 387 "make.module_dep_file.m"
    {
#line 387 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 388 "make.module_dep_file.m"
    {
#line 388 "make.module_dep_file.m"
      mercury__term_io__quote_string_3_p_0(make__module_dep_file__FileName_7);
#line 388 "make.module_dep_file.m"
      return;
    }
#line 384 "make.module_dep_file.m"
  }
#line 381 "make.module_dep_file.m"
}

#line 372 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 372 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4)
#line 372 "make.module_dep_file.m"
{
#line 375 "make.module_dep_file.m"
  {
#line 375 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 0)));
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImport_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 1)));
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 2)));

#line 377 "make.module_dep_file.m"
    {
#line 377 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 378 "make.module_dep_file.m"
    {
#line 378 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 379 "make.module_dep_file.m"
    {
#line 379 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__ForeignImport_7);
#line 379 "make.module_dep_file.m"
      return;
    }
#line 375 "make.module_dep_file.m"
  }
#line 372 "make.module_dep_file.m"
}

#line 367 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 367 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 367 "make.module_dep_file.m"
{
#line 367 "make.module_dep_file.m"
  {
#line 367 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 367 "make.module_dep_file.m"
    {
#line 367 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_include_file_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 367 "make.module_dep_file.m"
      return;
    }
#line 367 "make.module_dep_file.m"
  }
#line 367 "make.module_dep_file.m"
}

#line 353 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 353 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 353 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 353 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 353 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 353 "make.module_dep_file.m"
{
#line 353 "make.module_dep_file.m"
  {
#line 353 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 353 "make.module_dep_file.m"
    {
#line 353 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_import_module_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 353 "make.module_dep_file.m"
      return;
    }
#line 353 "make.module_dep_file.m"
  }
#line 353 "make.module_dep_file.m"
}

#line 350 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
#line 350 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 350 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 350 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 350 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 350 "make.module_dep_file.m"
{
#line 350 "make.module_dep_file.m"
  {
#line 350 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 350 "make.module_dep_file.m"
    {
#line 350 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 350 "make.module_dep_file.m"
      return;
    }
#line 350 "make.module_dep_file.m"
  }
#line 350 "make.module_dep_file.m"
}

#line 342 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
#line 342 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 342 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 342 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 342 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 342 "make.module_dep_file.m"
{
#line 342 "make.module_dep_file.m"
  {
#line 342 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 342 "make.module_dep_file.m"
    {
#line 342 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__342__1_3_p_0(((MR_String) make__module_dep_file__wrapper_arg_1));
#line 342 "make.module_dep_file.m"
      return;
    }
#line 342 "make.module_dep_file.m"
  }
#line 342 "make.module_dep_file.m"
}

#line 339 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
#line 339 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 339 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 339 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 339 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 339 "make.module_dep_file.m"
{
#line 339 "make.module_dep_file.m"
  {
#line 339 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 339 "make.module_dep_file.m"
    {
#line 339 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 339 "make.module_dep_file.m"
      return;
    }
#line 339 "make.module_dep_file.m"
  }
#line 339 "make.module_dep_file.m"
}

#line 336 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
#line 336 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 336 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 336 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 336 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 336 "make.module_dep_file.m"
{
#line 336 "make.module_dep_file.m"
  {
#line 336 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 336 "make.module_dep_file.m"
    {
#line 336 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 336 "make.module_dep_file.m"
      return;
    }
#line 336 "make.module_dep_file.m"
  }
#line 336 "make.module_dep_file.m"
}

#line 333 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
#line 333 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 333 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 333 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 333 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 333 "make.module_dep_file.m"
{
#line 333 "make.module_dep_file.m"
  {
#line 333 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 333 "make.module_dep_file.m"
    {
#line 333 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 333 "make.module_dep_file.m"
      return;
    }
#line 333 "make.module_dep_file.m"
  }
#line 333 "make.module_dep_file.m"
}

#line 330 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
#line 330 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 330 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 330 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 330 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 330 "make.module_dep_file.m"
{
#line 330 "make.module_dep_file.m"
  {
#line 330 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 330 "make.module_dep_file.m"
    {
#line 330 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 330 "make.module_dep_file.m"
      return;
    }
#line 330 "make.module_dep_file.m"
  }
#line 330 "make.module_dep_file.m"
}

#line 327 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
#line 327 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 327 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 327 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 327 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 327 "make.module_dep_file.m"
{
#line 327 "make.module_dep_file.m"
  {
#line 327 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 327 "make.module_dep_file.m"
    {
#line 327 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 327 "make.module_dep_file.m"
      return;
    }
#line 327 "make.module_dep_file.m"
  }
#line 327 "make.module_dep_file.m"
}

#line 313 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
#line 313 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports_5,
#line 313 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Version_6)
#line 313 "make.module_dep_file.m"
{
#line 316 "make.module_dep_file.m"
  {
#line 316 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_356_356;
#line 316 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__VersionNumber_8;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_10;
#line 316 "make.module_dep_file.m"
    MR_String make__module_dep_file__ContainsForeignExportStr_11;
#line 316 "make.module_dep_file.m"
    MR_String make__module_dep_file__HasMainStr_12;
#line 316 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_58_58;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_70_70;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_76_76;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_80_80;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_93_93;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_94_94;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_95_95;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_96_96;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_97_97;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_98_98;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_99_99;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_100_100;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_101_101;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_102_102;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_103_103;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_104_104;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_105_105;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_106_106;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_107_107;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_108_108;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_109_109;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_110_110;
#line 321 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_111_111;
#line 321 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_112_112;
#line 323 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_113_113;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_114_114;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_115_115;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_116_116;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_117_117;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_118_118;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_119_119;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_120_120;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_121_121;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_122_122;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_123_123;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_124_124;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_125_125;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_126_126;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_127_127;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_128_128;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_129_129;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_130_130;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_131_131;
#line 323 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_132_132;
#line 326 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_133_133;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_134_134;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_135_135;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_136_136;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_137_137;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_138_138;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_139_139;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_140_140;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_141_141;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_142_142;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_143_143;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_144_144;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_145_145;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_146_146;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_147_147;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_148_148;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_149_149;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_150_150;
#line 326 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_151_151;
#line 326 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_152_152;
#line 329 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_153_153;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_154_154;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_155_155;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_156_156;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_157_157;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_158_158;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_159_159;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_160_160;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_161_161;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_162_162;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_163_163;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_164_164;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_165_165;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_166_166;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_167_167;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_168_168;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_169_169;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_170_170;
#line 329 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_171_171;
#line 329 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_172_172;
#line 332 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_173_173;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_174_174;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_175_175;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_176_176;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_177_177;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_178_178;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_179_179;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_180_180;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_181_181;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_182_182;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_183_183;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_184_184;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_185_185;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_186_186;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_187_187;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_188_188;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_189_189;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_190_190;
#line 332 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_191_191;
#line 332 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_192_192;
#line 335 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_193_193;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_194_194;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_195_195;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_196_196;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_197_197;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_198_198;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210;
#line 335 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211;
#line 335 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_212_212;
#line 338 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_213_213;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 338 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 338 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_232_232;
#line 341 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_233_233;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_241_241;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 341 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 341 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_252_252;
#line 346 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LangList_9;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_64_64;
#line 344 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_253_253;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_254_254;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_255_255;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_256_256;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_257_257;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_258_258;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_259_259;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_260_260;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_261_261;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_262_262;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_263_263;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_264_264;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_265_265;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_266_266;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_267_267;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_268_268;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_269_269;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_270_270;
#line 344 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_271_271;
#line 344 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_272_272;
#line 352 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_273_273;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_274_274;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_275_275;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_276_276;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_277_277;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_278_278;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_279_279;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_280_280;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_281_281;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_282_282;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_283_283;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_284_284;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_285_285;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_286_286;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_287_287;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_288_288;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_289_289;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_290_290;
#line 352 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_291_291;
#line 352 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_292_292;
#line 355 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_293_293;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_294_294;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_295_295;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_296_296;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_297_297;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_298_298;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_299_299;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_300_300;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_301_301;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_302_302;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_303_303;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_304_304;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_305_305;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_306_306;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_307_307;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_308_308;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_309_309;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_310_310;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_311_311;
#line 355 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_312_312;
#line 359 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_313_313;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_314_314;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_315_315;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_316_316;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_317_317;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_318_318;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_319_319;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_320_320;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_321_321;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_322_322;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_323_323;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_324_324;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_325_325;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_326_326;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_327_327;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_328_328;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_329_329;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_330_330;
#line 359 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_331_331;
#line 359 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_332_332;

#line 317 "make.module_dep_file.m"
    {
#line 317 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "module(");
    }
#line 318 "make.module_dep_file.m"
    {
#line 318 "make.module_dep_file.m"
      make__module_dep_file__version_number_2_p_0(make__module_dep_file__Version_6, &make__module_dep_file__VersionNumber_8);
    }
#line 319 "make.module_dep_file.m"
    {
#line 319 "make.module_dep_file.m"
      mercury__io__write_int_3_p_0(make__module_dep_file__VersionNumber_8);
    }
#line 320 "make.module_dep_file.m"
    {
#line 320 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", \"");
    }
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 321 "make.module_dep_file.m"
    make__module_dep_file__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 321 "make.module_dep_file.m"
    {
#line 321 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__V_20_20);
    }
#line 322 "make.module_dep_file.m"
    {
#line 322 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 323 "make.module_dep_file.m"
    make__module_dep_file__V_132_132 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 323 "make.module_dep_file.m"
    {
#line 323 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__V_24_24);
    }
#line 325 "make.module_dep_file.m"
    {
#line 325 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
    }
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 326 "make.module_dep_file.m"
    make__module_dep_file__V_152_152 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 8343 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_356_356 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 326 "make.module_dep_file.m"
    {
#line 326 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_356_356, make__module_dep_file__V_28_28, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[1]);
    }
#line 328 "make.module_dep_file.m"
    {
#line 328 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_153_153 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 329 "make.module_dep_file.m"
    make__module_dep_file__V_172_172 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 329 "make.module_dep_file.m"
    {
#line 329 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_356_356, make__module_dep_file__V_34_34, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[2]);
    }
#line 331 "make.module_dep_file.m"
    {
#line 331 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_173_173 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 332 "make.module_dep_file.m"
    make__module_dep_file__V_192_192 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 332 "make.module_dep_file.m"
    {
#line 332 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_356_356, make__module_dep_file__V_40_40, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[3]);
    }
#line 334 "make.module_dep_file.m"
    {
#line 334 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_193_193 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 335 "make.module_dep_file.m"
    make__module_dep_file__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 335 "make.module_dep_file.m"
    {
#line 335 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_356_356, make__module_dep_file__V_46_46, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[4]);
    }
#line 337 "make.module_dep_file.m"
    {
#line 337 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 338 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 338 "make.module_dep_file.m"
    {
#line 338 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_356_356, make__module_dep_file__V_52_52, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[5]);
    }
#line 340 "make.module_dep_file.m"
    {
#line 340 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 341 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 341 "make.module_dep_file.m"
    {
#line 341 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_dep_file__V_58_58, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[6]);
    }
#line 343 "make.module_dep_file.m"
    {
#line 343 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__V_272_272 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 344 "make.module_dep_file.m"
    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 344 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 344 "make.module_dep_file.m"
      {
#line 344 "make.module_dep_file.m"
        make__module_dep_file__LangList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_64_64, (MR_Integer) 0)));
#line 345 "make.module_dep_file.m"
        {
#line 345 "make.module_dep_file.m"
          make__module_dep_file__ForeignLanguages_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__LangList_9);
        }
#line 344 "make.module_dep_file.m"
      }
#line 344 "make.module_dep_file.m"
    else
#line 347 "make.module_dep_file.m"
      make__module_dep_file__ForeignLanguages_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "make.module_dep_file.m"
    {
#line 349 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__ForeignLanguages_10, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[7]);
    }
#line 351 "make.module_dep_file.m"
    {
#line 351 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_273_273 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 352 "make.module_dep_file.m"
    make__module_dep_file__V_292_292 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 352 "make.module_dep_file.m"
    {
#line 352 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, make__module_dep_file__V_70_70, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[8]);
    }
#line 354 "make.module_dep_file.m"
    {
#line 354 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t");
    }
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_293_293 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_312_312 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 355 "make.module_dep_file.m"
    {
#line 355 "make.module_dep_file.m"
      make__module_dep_file__contains_foreign_export_to_string_2_p_0(make__module_dep_file__V_76_76, &make__module_dep_file__ContainsForeignExportStr_11);
    }
#line 357 "make.module_dep_file.m"
    {
#line 357 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ContainsForeignExportStr_11);
    }
#line 358 "make.module_dep_file.m"
    {
#line 358 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_313_313 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 359 "make.module_dep_file.m"
    make__module_dep_file__V_332_332 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 359 "make.module_dep_file.m"
    {
#line 359 "make.module_dep_file.m"
      make__module_dep_file__has_main_to_string_2_p_0(make__module_dep_file__V_80_80, &make__module_dep_file__HasMainStr_12);
    }
#line 360 "make.module_dep_file.m"
    {
#line 360 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__HasMainStr_12);
    }
#line 363 "make.module_dep_file.m"
    if ((make__module_dep_file__Version_6 == (MR_Integer) 0))
#line 362 "make.module_dep_file.m"
      {
#line 362 "make.module_dep_file.m"
      }
#line 363 "make.module_dep_file.m"
    else
#line 364 "make.module_dep_file.m"
      {
#line 364 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_383_383;
#line 364 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_84_84;
#line 364 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_88_88;
#line 366 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_333_333;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_334_334;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_335_335;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_336_336;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_337_337;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_338_338;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_339_339;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_340_340;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_341_341;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_342_342;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_343_343;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_344_344;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_345_345;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_346_346;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_347_347;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_348_348;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_349_349;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_350_350;
#line 366 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_351_351;
#line 366 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_352_352;

#line 365 "make.module_dep_file.m"
        {
#line 365 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
        }
#line 8909 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_383_383 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0;
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_333_333 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 366 "make.module_dep_file.m"
        make__module_dep_file__V_352_352 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 366 "make.module_dep_file.m"
        {
#line 366 "make.module_dep_file.m"
          make__module_dep_file__V_84_84 = mercury__list__reverse_1_f_0(make__module_dep_file__TypeCtorInfo_383_383, make__module_dep_file__V_88_88);
        }
#line 366 "make.module_dep_file.m"
        {
#line 366 "make.module_dep_file.m"
          mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_383_383, make__module_dep_file__V_84_84, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[9]);
        }
#line 368 "make.module_dep_file.m"
        {
#line 368 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "}");
        }
#line 364 "make.module_dep_file.m"
      }
#line 370 "make.module_dep_file.m"
    {
#line 370 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n).\n");
#line 370 "make.module_dep_file.m"
      return;
    }
#line 316 "make.module_dep_file.m"
  }
#line 313 "make.module_dep_file.m"
}

#line 277 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 277 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 277 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports_6)
#line 277 "make.module_dep_file.m"
{
#line 280 "make.module_dep_file.m"
  {
#line 280 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 280 "make.module_dep_file.m"
    MR_String make__module_dep_file__ProgDepFile_9;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ProgDepResult_10;
#line 280 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_19_19;
#line 281 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 281 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 20)));

#line 283 "make.module_dep_file.m"
    {
#line 283 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = make__make_module_dep_file_extension_0_f_0();
    }
#line 282 "make.module_dep_file.m"
    {
#line 282 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleName_8, make__module_dep_file__V_19_19, (MR_Integer) 0, &make__module_dep_file__ProgDepFile_9);
    }
#line 284 "make.module_dep_file.m"
    {
#line 284 "make.module_dep_file.m"
      mercury__io__open_output_4_p_0(make__module_dep_file__ProgDepFile_9, &make__module_dep_file__ProgDepResult_10);
    }
#line 292 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ProgDepResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 293 "make.module_dep_file.m"
      {
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 293 "make.module_dep_file.m"
        MR_String make__module_dep_file__Msg_16;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_23_23;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_26_26;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_27_27;
#line 293 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_29_29;

#line 294 "make.module_dep_file.m"
        {
#line 294 "make.module_dep_file.m"
          mercury__io__error_message_2_p_0(make__module_dep_file__Error_15, &make__module_dep_file__Msg_16);
        }
#line 296 "make.module_dep_file.m"
        {
#line 296 "make.module_dep_file.m"
          make__module_dep_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 0) = ((MR_Box) (make__module_dep_file__Msg_16));
#line 296 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[4])));
#line 296 "make.module_dep_file.m"
        }
#line 296 "make.module_dep_file.m"
        {
#line 296 "make.module_dep_file.m"
          make__module_dep_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 0) = ((MR_Box) ((MR_String) " for output: "));
#line 296 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__V_29_29));
#line 296 "make.module_dep_file.m"
        }
#line 295 "make.module_dep_file.m"
        {
#line 295 "make.module_dep_file.m"
          make__module_dep_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 0) = ((MR_Box) (make__module_dep_file__ProgDepFile_9));
#line 295 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 1) = ((MR_Box) (make__module_dep_file__V_27_27));
#line 295 "make.module_dep_file.m"
        }
#line 295 "make.module_dep_file.m"
        {
#line 295 "make.module_dep_file.m"
          make__module_dep_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 0) = ((MR_Box) ((MR_String) "Error opening "));
#line 295 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 1) = ((MR_Box) (make__module_dep_file__V_26_26));
#line 295 "make.module_dep_file.m"
        }
#line 295 "make.module_dep_file.m"
        {
#line 295 "make.module_dep_file.m"
          mercury__io__write_strings_3_p_0(make__module_dep_file__V_23_23);
        }
#line 297 "make.module_dep_file.m"
        {
#line 297 "make.module_dep_file.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 297 "make.module_dep_file.m"
          return;
        }
#line 293 "make.module_dep_file.m"
      }
#line 292 "make.module_dep_file.m"
    else
#line 286 "make.module_dep_file.m"
      {
#line 286 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ProgDepStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 286 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_12;
#line 286 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Version_13;
#line 286 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ForeignIncludeFiles_61;
#line 304 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_64_64;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_65_65;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_66_66;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_67_67;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_72_72;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_73_73;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_74_74;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_75_75;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_76_76;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_77_77;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_78_78;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_79_79;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_80_80;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_81_81;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_82_82;
#line 304 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_83_83;
#line 290 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_14_14;

#line 287 "make.module_dep_file.m"
        {
#line 287 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ProgDepStream_11, &make__module_dep_file__OldOutputStream_12);
        }
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__ForeignIncludeFiles_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 304 "make.module_dep_file.m"
        make__module_dep_file__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 20)));
#line 308 "make.module_dep_file.m"
        if ((make__module_dep_file__ForeignIncludeFiles_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 307 "make.module_dep_file.m"
          make__module_dep_file__Version_13 = (MR_Integer) 0;
#line 308 "make.module_dep_file.m"
        else
#line 310 "make.module_dep_file.m"
          make__module_dep_file__Version_13 = (MR_Integer) 1;
#line 289 "make.module_dep_file.m"
        {
#line 289 "make.module_dep_file.m"
          make__module_dep_file__do_write_module_dep_file_2_4_p_0(make__module_dep_file__Imports_6, make__module_dep_file__Version_13);
        }
#line 290 "make.module_dep_file.m"
        {
#line 290 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_12, &make__module_dep_file__V_14_14);
        }
#line 291 "make.module_dep_file.m"
        {
#line 291 "make.module_dep_file.m"
          mercury__io__close_output_3_p_0(make__module_dep_file__ProgDepStream_11);
#line 291 "make.module_dep_file.m"
          return;
        }
#line 286 "make.module_dep_file.m"
      }
#line 280 "make.module_dep_file.m"
  }
#line 277 "make.module_dep_file.m"
}

#line 155 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
#line 155 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 155 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 155 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 155 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeImports_34,
#line 155 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_35,
#line 155 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_36)
#line 155 "make.module_dep_file.m"
{
#line 160 "make.module_dep_file.m"
  {
#line 160 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 160 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_15;
#line 160 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeSourceFileTimestamp_16;
#line 160 "make.module_dep_file.m"
    MR_String make__module_dep_file__DepFileName_17;
#line 160 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_18;
#line 160 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeDepFileTimestamp_19;
#line 160 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleDepMap2_31;
#line 160 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42;
#line 160 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_43_43;
#line 160 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_45_45;
#line 160 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_47_47;
#line 160 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_51_51;
#line 160 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_81_81;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 255 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_224_224;
#line 255 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 258 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeImportsPrime_32;
#line 256 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_MaybeImportsPrime_32;

#line 167 "make.module_dep_file.m"
    {
#line 167 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, (MR_String) ".m", (MR_Integer) 1, &make__module_dep_file__SourceFileName_15);
    }
#line 169 "make.module_dep_file.m"
    {
#line 169 "make.module_dep_file.m"
      make__module_dep_file__V_45_45 = mercury__dir__this_directory_0_f_0();
    }
#line 169 "make.module_dep_file.m"
    {
#line 169 "make.module_dep_file.m"
      make__module_dep_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_42_42, 0) = ((MR_Box) (make__module_dep_file__V_45_45));
#line 169 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 169 "make.module_dep_file.m"
    }
#line 169 "make.module_dep_file.m"
    {
#line 169 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_42_42, make__module_dep_file__SourceFileName_15, &make__module_dep_file__MaybeSourceFileTimestamp_16, make__module_dep_file__STATE_VARIABLE_Info_0_35, &make__module_dep_file__STATE_VARIABLE_Info_43_43);
    }
#line 173 "make.module_dep_file.m"
    {
#line 173 "make.module_dep_file.m"
      make__module_dep_file__V_47_47 = make__make_module_dep_file_extension_0_f_0();
    }
#line 172 "make.module_dep_file.m"
    {
#line 172 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__V_47_47, (MR_Integer) 1, &make__module_dep_file__DepFileName_17);
    }
#line 174 "make.module_dep_file.m"
    {
#line 174 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_9, (MR_Integer) 642, &make__module_dep_file__SearchDirs_18);
    }
#line 176 "make.module_dep_file.m"
    {
#line 176 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__SearchDirs_18, make__module_dep_file__DepFileName_17, &make__module_dep_file__MaybeDepFileTimestamp_19, make__module_dep_file__STATE_VARIABLE_Info_43_43, &make__module_dep_file__STATE_VARIABLE_Info_51_51);
    }
#line 194 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__MaybeDepFileTimestamp_19)) == (MR_mktag((MR_Integer) 1))))
#line 247 "make.module_dep_file.m"
      if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 248 "make.module_dep_file.m"
        {
#line 248 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ModuleDepMap0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 248 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ModuleDepMap1_30;
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
#line 249 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 18)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 19)));
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_188_188;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_189_189;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_190_190;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_191_191;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_192_192;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_193_193;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_194_194;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_195_195;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_196_196;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_197_197;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_198_198;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_199_199;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_200_200;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_201_201;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_202_202;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_203_203;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_204_204;
#line 252 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_205_205;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_206_206;
#line 252 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_187_187;

#line 251 "make.module_dep_file.m"
          {
#line 251 "make.module_dep_file.m"
            mercury__map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_29, &make__module_dep_file__ModuleDepMap1_30);
          }
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_205_205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 18)));
#line 252 "make.module_dep_file.m"
          make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 19)));
#line 252 "make.module_dep_file.m"
          {
#line 252 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap1_30));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 1) = ((MR_Box) (make__module_dep_file__V_188_188));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 2) = ((MR_Box) (make__module_dep_file__V_189_189));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 3) = ((MR_Box) (make__module_dep_file__V_190_190));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 4) = ((MR_Box) (make__module_dep_file__V_191_191));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 5) = ((MR_Box) (make__module_dep_file__V_192_192));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 6) = ((MR_Box) (make__module_dep_file__V_193_193));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 7) = ((MR_Box) (make__module_dep_file__V_194_194));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 8) = ((MR_Box) (make__module_dep_file__V_195_195));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 9) = ((MR_Box) (make__module_dep_file__V_196_196));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 10) = ((MR_Box) (make__module_dep_file__V_197_197));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 11) = ((MR_Box) (make__module_dep_file__V_198_198));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 12) = ((MR_Box) (make__module_dep_file__V_199_199));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 13) = ((MR_Box) (make__module_dep_file__V_200_200));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 14) = ((MR_Box) (make__module_dep_file__V_201_201));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 15) = ((MR_Box) (make__module_dep_file__V_202_202));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 16) = ((MR_Box) (make__module_dep_file__V_203_203));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 17) = ((MR_Box) (make__module_dep_file__V_204_204));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 18) = ((MR_Box) (make__module_dep_file__V_205_205));
#line 252 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 19) = ((MR_Box) (make__module_dep_file__V_206_206));
#line 252 "make.module_dep_file.m"
          }
#line 248 "make.module_dep_file.m"
        }
#line 247 "make.module_dep_file.m"
      else
#line 245 "make.module_dep_file.m"
        {
#line 245 "make.module_dep_file.m"
          make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
        }
#line 194 "make.module_dep_file.m"
    else
#line 194 "make.module_dep_file.m"
      {
#line 194 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeDepFileTimestamp_19, (MR_Integer) 0)));

#line 194 "make.module_dep_file.m"
        if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp_16)) == (MR_mktag((MR_Integer) 1))))
#line 195 "make.module_dep_file.m"
          {
#line 195 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_57_57;
#line 195 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_59_59;
#line 195 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_90_90;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_91_91;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_92_92;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_93_93;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_94_94;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_95_95;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_96_96;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_97_97;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_98_98;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_99_99;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_100_100;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_101_101;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_102_102;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_103_103;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_104_104;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_105_105;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_106_106;
#line 205 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_107_107;
#line 205 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_108_108;
#line 205 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv0_STATE_VARIABLE_MaybeImports_60_60;
#line 234 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Imports0_23;
#line 207 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_61_61;
#line 207 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_257_257;
#line 208 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_109_109;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_110_110;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_111_111;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_113_113;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_114_114;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_115_115;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_116_116;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_117_117;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_118_118;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_119_119;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_120_120;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_121_121;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_122_122;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_123_123;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_124_124;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_125_125;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_126_126;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_127_127;
#line 208 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_128_128;

#line 197 "make.module_dep_file.m"
            {
#line 197 "make.module_dep_file.m"
              make__module_dep_file__read_module_dependencies_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_57_57);
            }
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 0)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 1)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 2)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 3)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 4)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 5)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 6)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 7)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 8)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 9)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 10)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 11)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 12)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 13)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 14)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 15)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 16)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 17)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 18)));
#line 205 "make.module_dep_file.m"
            make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 19)));
#line 205 "make.module_dep_file.m"
            {
#line 205 "make.module_dep_file.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_59_59, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_STATE_VARIABLE_MaybeImports_60_60);
            }
#line 205 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60 = ((MR_Word) make__module_dep_file__conv0_STATE_VARIABLE_MaybeImports_60_60);
#line 207 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 207 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 207 "make.module_dep_file.m"
              {
#line 207 "make.module_dep_file.m"
                make__module_dep_file__Imports0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60, (MR_Integer) 0)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 0)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 1)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 2)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 3)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 4)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 5)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 6)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 7)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 8)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 9)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 10)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 11)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 12)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 13)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 14)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 15)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 16)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 17)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 18)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 19)));
#line 208 "make.module_dep_file.m"
                make__module_dep_file__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 20)));
#line 208 "make.module_dep_file.m"
                {
#line 208 "make.module_dep_file.m"
                  make__module_dep_file__V_257_257 = mercury__dir__this_directory_0_f_0();
                }
#line 208 "make.module_dep_file.m"
                make__module_dep_file__succeeded = (strcmp(make__module_dep_file__V_61_61, make__module_dep_file__V_257_257) == 0);
#line 207 "make.module_dep_file.m"
              }
#line 234 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 210 "make.module_dep_file.m"
              {
#line 210 "make.module_dep_file.m"
                MR_String make__module_dep_file__SourceFileName1_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 0)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__MaybeSourceFileTimestamp1_25;
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_62_62;
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 210 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_65_65;
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 1)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 2)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 3)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 4)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 5)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 6)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 7)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 8)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 9)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 10)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 11)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 12)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 13)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 14)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 15)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 16)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 17)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 18)));
#line 210 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 19)));
#line 210 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_148_148 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 20)));

#line 211 "make.module_dep_file.m"
                {
#line 211 "make.module_dep_file.m"
                  make__module_dep_file__V_65_65 = mercury__dir__this_directory_0_f_0();
                }
#line 211 "make.module_dep_file.m"
                {
#line 211 "make.module_dep_file.m"
                  make__module_dep_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_62_62, 0) = ((MR_Box) (make__module_dep_file__V_65_65));
#line 211 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 211 "make.module_dep_file.m"
                }
#line 211 "make.module_dep_file.m"
                {
#line 211 "make.module_dep_file.m"
                  make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_62_62, make__module_dep_file__SourceFileName1_24, &make__module_dep_file__MaybeSourceFileTimestamp1_25, make__module_dep_file__STATE_VARIABLE_Info_57_57, &make__module_dep_file__STATE_VARIABLE_Info_63_63);
                }
#line 224 "make.module_dep_file.m"
                if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp1_25)) == (MR_mktag((MR_Integer) 1))))
#line 225 "make.module_dep_file.m"
                  {
#line 225 "make.module_dep_file.m"
                    MR_String make__module_dep_file__Message_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));
#line 225 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_75_75;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_149_149;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_150_150;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_151_151;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_152_152;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_153_153;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_154_154;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_155_155;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_156_156;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_157_157;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_158_158;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_159_159;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_160_160;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_161_161;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_162_162;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_163_163;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_164_164;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_165_165;
#line 231 "make.module_dep_file.m"
                    MR_Integer make__module_dep_file__V_166_166;
#line 231 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_167_167;

#line 226 "make.module_dep_file.m"
                    {
#line 226 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
                    }
#line 227 "make.module_dep_file.m"
                    {
#line 227 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName1_24);
                    }
#line 228 "make.module_dep_file.m"
                    {
#line 228 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
                    }
#line 229 "make.module_dep_file.m"
                    {
#line 229 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0(make__module_dep_file__Message_27);
                    }
#line 230 "make.module_dep_file.m"
                    {
#line 230 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) ".\n");
                    }
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 0)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 1)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 2)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 3)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 4)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 5)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 6)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 7)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 8)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 9)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 10)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 11)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 12)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 13)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 14)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 15)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 16)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 17)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 18)));
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 19)));
#line 231 "make.module_dep_file.m"
                    {
#line 231 "make.module_dep_file.m"
                      make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_11, make__module_dep_file__V_75_75);
                    }
#line 231 "make.module_dep_file.m"
                    make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 225 "make.module_dep_file.m"
                  }
#line 224 "make.module_dep_file.m"
                else
#line 214 "make.module_dep_file.m"
                  {
#line 214 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__SourceFileTimestamp1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));

#line 216 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
#line 217 "make.module_dep_file.m"
                    if (!(make__module_dep_file__succeeded))
#line 217 "make.module_dep_file.m"
                      {
#line 217 "make.module_dep_file.m"
                        MR_Word make__module_dep_file__V_258_258;

#line 217 "make.module_dep_file.m"
                        {
#line 217 "make.module_dep_file.m"
                          libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_258_258, make__module_dep_file__V_259_259, make__module_dep_file__SourceFileTimestamp1_26);
                        }
#line 217 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_258_258);
#line 217 "make.module_dep_file.m"
                      }
#line 221 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 220 "make.module_dep_file.m"
                      make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 221 "make.module_dep_file.m"
                    else
#line 222 "make.module_dep_file.m"
                      {
#line 222 "make.module_dep_file.m"
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_63_63, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
                      }
#line 214 "make.module_dep_file.m"
                  }
#line 210 "make.module_dep_file.m"
              }
#line 234 "make.module_dep_file.m"
            else
#line 235 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_57_57;
#line 195 "make.module_dep_file.m"
          }
#line 194 "make.module_dep_file.m"
        else
#line 179 "make.module_dep_file.m"
          {
#line 179 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SourceFileTimestamp_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp_16, (MR_Integer) 0)));

#line 182 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
#line 183 "make.module_dep_file.m"
            if (!(make__module_dep_file__succeeded))
#line 183 "make.module_dep_file.m"
              {
#line 183 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_256_256;

#line 183 "make.module_dep_file.m"
                {
#line 183 "make.module_dep_file.m"
                  libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_256_256, make__module_dep_file__V_259_259, make__module_dep_file__SourceFileTimestamp_20);
                }
#line 183 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_256_256);
#line 183 "make.module_dep_file.m"
              }
#line 191 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 189 "make.module_dep_file.m"
              {
#line 189 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_no_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
              }
#line 191 "make.module_dep_file.m"
            else
#line 192 "make.module_dep_file.m"
              {
#line 192 "make.module_dep_file.m"
                make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
              }
#line 179 "make.module_dep_file.m"
          }
#line 194 "make.module_dep_file.m"
      }
#line 255 "make.module_dep_file.m"
    make__module_dep_file__ModuleDepMap2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 0)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 1)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 2)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 3)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 4)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 5)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 6)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 7)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 8)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 9)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 10)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 11)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 13)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 14)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 15)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 16)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 17)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 18)));
#line 255 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 19)));
#line 256 "make.module_dep_file.m"
    {
#line 256 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__ModuleDepMap2_31, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv1_MaybeImportsPrime_32);
    }
#line 256 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 256 "make.module_dep_file.m"
      {
#line 256 "make.module_dep_file.m"
        make__module_dep_file__MaybeImportsPrime_32 = ((MR_Word) make__module_dep_file__conv1_MaybeImportsPrime_32);
#line 256 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 256 "make.module_dep_file.m"
      }
#line 258 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 257 "make.module_dep_file.m"
      {
#line 257 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeImports_34 = make__module_dep_file__MaybeImportsPrime_32;
#line 257 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_36 = make__module_dep_file__STATE_VARIABLE_Info_81_81;
#line 257 "make.module_dep_file.m"
      }
#line 258 "make.module_dep_file.m"
    else
#line 259 "make.module_dep_file.m"
      {
#line 259 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepMap_33;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_227_227;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_228_228;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_229_229;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_230_230;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_231_231;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_232_232;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_233_233;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_234_234;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_235_235;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_236_236;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_237_237;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_238_238;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_239_239;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_240_240;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_241_241;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_242_242;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_243_243;
#line 261 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_244_244;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_245_245;
#line 261 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_226_226;

#line 259 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeImports_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 260 "make.module_dep_file.m"
        {
#line 260 "make.module_dep_file.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap2_31, &make__module_dep_file__ModuleDepMap_33);
        }
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 0)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 1)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 2)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 3)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 4)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 5)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 6)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 7)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 8)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 9)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 10)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 11)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 13)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 14)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 15)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 16)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 17)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 18)));
#line 261 "make.module_dep_file.m"
        make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 19)));
#line 261 "make.module_dep_file.m"
        {
#line 261 "make.module_dep_file.m"
          MR_Word base;
#line 261 "make.module_dep_file.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 261 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_36 = base;
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_33));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_227_227));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_228_228));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_229_229));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_230_230));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_231_231));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_232_232));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_233_233));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_234_234));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_235_235));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_236_236));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_237_237));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_238_238));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_240_240));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 261 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 261 "make.module_dep_file.m"
        }
#line 259 "make.module_dep_file.m"
      }
#line 160 "make.module_dep_file.m"
  }
#line 155 "make.module_dep_file.m"
}

#line 142 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
#line 142 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 142 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 142 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 142 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeImports_12,
#line 142 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
#line 142 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17)
#line 142 "make.module_dep_file.m"
{
#line 150 "make.module_dep_file.m"
  {
#line 150 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 150 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeImports0_15;
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
#line 148 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
#line 148 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
#line 148 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_MaybeImports0_15;

#line 148 "make.module_dep_file.m"
    {
#line 148 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_20_20, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_MaybeImports0_15);
    }
#line 148 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 148 "make.module_dep_file.m"
      {
#line 148 "make.module_dep_file.m"
        make__module_dep_file__MaybeImports0_15 = ((MR_Word) make__module_dep_file__conv0_MaybeImports0_15);
#line 148 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 148 "make.module_dep_file.m"
      }
#line 150 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 149 "make.module_dep_file.m"
      {
#line 149 "make.module_dep_file.m"
        *make__module_dep_file__MaybeImports_12 = make__module_dep_file__MaybeImports0_15;
#line 149 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_17 = make__module_dep_file__STATE_VARIABLE_Info_0_16;
#line 149 "make.module_dep_file.m"
      }
#line 150 "make.module_dep_file.m"
    else
#line 151 "make.module_dep_file.m"
      {
#line 151 "make.module_dep_file.m"
        make__module_dep_file__do_get_module_dependencies_8_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__MaybeImports_12, make__module_dep_file__STATE_VARIABLE_Info_0_16, make__module_dep_file__STATE_VARIABLE_Info_17);
#line 151 "make.module_dep_file.m"
        return;
      }
#line 150 "make.module_dep_file.m"
  }
#line 142 "make.module_dep_file.m"
}

#line 124 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
#line 124 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_1,
#line 124 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
#line 124 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_3,
#line 124 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_4,
#line 124 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_5,
#line 124 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__6_6,
#line 124 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7)
#line 124 "make.module_dep_file.m"
{
#line 128 "make.module_dep_file.m"
  {
#line 128 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 128 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__4_4 == (MR_Integer) 0))
#line 131 "make.module_dep_file.m"
      {
#line 131 "make.module_dep_file.m"
        MR_Word make__module_dep_file__MaybeImports_26;

#line 132 "make.module_dep_file.m"
        {
#line 132 "make.module_dep_file.m"
          make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_1, make__module_dep_file__RebuildModuleDeps_2, make__module_dep_file__ModuleName_3, &make__module_dep_file__MaybeImports_26, make__module_dep_file__HeadVar__6_6, make__module_dep_file__STATE_VARIABLE_Info_7);
        }
#line 137 "make.module_dep_file.m"
        if ((make__module_dep_file__MaybeImports_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 139 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 137 "make.module_dep_file.m"
        else
#line 136 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 0;
#line 131 "make.module_dep_file.m"
      }
#line 128 "make.module_dep_file.m"
    else
#line 128 "make.module_dep_file.m"
      {
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_18_18;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_19_19;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_34_34;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_35_35;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_36_36;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_37_37;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_38_38;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_39_39;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_40_40;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_41_41;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_42_42;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_43_43;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_44_44;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_45_45;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_46_46;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_47_47;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_48_48;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_49_49;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_50_50;
#line 128 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_51_51;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_52_52;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_54_54;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_55_55;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_56_56;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_58_58;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_59_59;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_60_60;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_61_61;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_62_62;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_64_64;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_65_65;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_66_66;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_67_67;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70;
#line 128 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_71_71;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_72_72;
#line 128 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_53_53;

#line 128 "make.module_dep_file.m"
        *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 0)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 1)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 2)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 3)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 4)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 5)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 6)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 7)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 8)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 9)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 10)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 11)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 13)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 14)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 15)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 16)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 17)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 18)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 19)));
#line 128 "make.module_dep_file.m"
        {
#line 128 "make.module_dep_file.m"
          make__module_dep_file__V_19_19 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_3)), make__module_dep_file__V_18_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 0)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 1)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 2)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 3)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 4)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 5)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 6)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 7)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 8)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 9)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 10)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 11)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 13)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 14)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 15)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 16)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 17)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 18)));
#line 128 "make.module_dep_file.m"
        make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 19)));
#line 128 "make.module_dep_file.m"
        {
#line 128 "make.module_dep_file.m"
          MR_Word base;
#line 128 "make.module_dep_file.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 128 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_7 = base;
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_54_54));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_55_55));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_56_56));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_57_57));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_58_58));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_59_59));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_60_60));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_61_61));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_62_62));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_63_63));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_64_64));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_65_65));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_66_66));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_67_67));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_68_68));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_69_69));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_70_70));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_71_71));
#line 128 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_72_72));
#line 128 "make.module_dep_file.m"
        }
#line 128 "make.module_dep_file.m"
      }
#line 128 "make.module_dep_file.m"
  }
#line 124 "make.module_dep_file.m"
}

#line 76 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
#line 76 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 76 "make.module_dep_file.m"
  MR_Integer * make__module_dep_file__HeadVar__2_2)
#line 76 "make.module_dep_file.m"
{
#line 79 "make.module_dep_file.m"
  {
#line 79 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 79 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__1_1 == (MR_Integer) 0))
#line 79 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__2_2 = (MR_Integer) 1;
#line 79 "make.module_dep_file.m"
    else
#line 80 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__2_2 = (MR_Integer) 2;
#line 79 "make.module_dep_file.m"
  }
#line 76 "make.module_dep_file.m"
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
#line 266 "make.module_dep_file.m"
  {
#line 266 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 266 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Items0_8;
#line 266 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Items_11;
#line 266 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Imports_12;
#line 266 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_15_15;
#line 266 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 266 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;
#line 266 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24;
#line 266 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;
#line 266 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38;
#line 268 "make.module_dep_file.m"
    MR_Word make__module_dep_file___Specs_9;
#line 268 "make.module_dep_file.m"
    MR_Word make__module_dep_file___Errors_10;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_25_25;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40;
#line 270 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41;
#line 270 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_42_42;

#line 268 "make.module_dep_file.m"
    {
#line 268 "make.module_dep_file.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(make__module_dep_file__Imports0_6, &make__module_dep_file__Items0_8, &make__module_dep_file___Specs_9, &make__module_dep_file___Errors_10);
    }
#line 269 "make.module_dep_file.m"
    {
#line 269 "make.module_dep_file.m"
      parse_tree__modules__strip_imported_items_2_p_0(make__module_dep_file__Items0_8, &make__module_dep_file__Items_11);
    }
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 0)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 1)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 2)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 3)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 4)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 5)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 6)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 7)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 8)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 9)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 10)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 11)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 12)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 13)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 14)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 15)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 16)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 17)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 18)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 19)));
#line 270 "make.module_dep_file.m"
    make__module_dep_file__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 20)));
#line 274 "make.module_dep_file.m"
    {
#line 274 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, 0) = ((MR_Box) (make__module_dep_file__V_24_24));
#line 274 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, 1) = ((MR_Box) (make__module_dep_file__Items_11));
#line 274 "make.module_dep_file.m"
    }
#line 270 "make.module_dep_file.m"
    {
#line 270 "make.module_dep_file.m"
      parse_tree__module_imports__init_dependencies_8_p_0(make__module_dep_file__V_15_15, make__module_dep_file__V_23_23, make__module_dep_file__V_31_31, make__module_dep_file__V_38_38, (MR_Integer) 0, make__module_dep_file__Globals_5, make__module_dep_file__V_20_20, &make__module_dep_file__Imports_12);
    }
#line 275 "make.module_dep_file.m"
    {
#line 275 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(make__module_dep_file__Globals_5, make__module_dep_file__Imports_12);
#line 275 "make.module_dep_file.m"
      return;
    }
#line 266 "make.module_dep_file.m"
  }
#line 37 "make.module_dep_file.m"
}

#line 107 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
#line 107 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 107 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 107 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 107 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 107 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 107 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 107 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 107 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 107 "make.module_dep_file.m"
{
#line 107 "make.module_dep_file.m"
  {
#line 107 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 107 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_HeadVar__5_5;
#line 107 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_STATE_VARIABLE_Info_7;

#line 107 "make.module_dep_file.m"
    {
#line 107 "make.module_dep_file.m"
      make__module_dep_file__generate_ancestor_dependencies_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv1_STATE_VARIABLE_Info_7);
    }
#line 107 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_HeadVar__5_5));
#line 107 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv1_STATE_VARIABLE_Info_7));
#line 107 "make.module_dep_file.m"
  }
#line 107 "make.module_dep_file.m"
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
#line 84 "make.module_dep_file.m"
  {
#line 84 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 84 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RebuildModuleDeps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
#line 85 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 18)));
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 19)));

#line 90 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ModuleName_9)) == (MR_mktag((MR_Integer) 1))))
#line 97 "make.module_dep_file.m"
      {
#line 97 "make.module_dep_file.m"
        MR_Word make__module_dep_file__MaybeImportsPrime_17;
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
#line 93 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 18)));
#line 93 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 19)));
#line 93 "make.module_dep_file.m"
        MR_Box make__module_dep_file__conv0_MaybeImportsPrime_17;

#line 93 "make.module_dep_file.m"
        {
#line 93 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_26_26, ((MR_Box) (make__module_dep_file__ModuleName_9)), &make__module_dep_file__conv0_MaybeImportsPrime_17);
        }
#line 93 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 93 "make.module_dep_file.m"
          {
#line 93 "make.module_dep_file.m"
            make__module_dep_file__MaybeImportsPrime_17 = ((MR_Word) make__module_dep_file__conv0_MaybeImportsPrime_17);
#line 93 "make.module_dep_file.m"
            make__module_dep_file__succeeded = MR_TRUE;
#line 93 "make.module_dep_file.m"
          }
#line 97 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 96 "make.module_dep_file.m"
          {
#line 96 "make.module_dep_file.m"
            *make__module_dep_file__MaybeImports_10 = make__module_dep_file__MaybeImportsPrime_17;
#line 96 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
#line 96 "make.module_dep_file.m"
          }
#line 97 "make.module_dep_file.m"
        else
#line 105 "make.module_dep_file.m"
          {
#line 105 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_122_122;
#line 105 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Ancestors_18;
#line 105 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Error_19;
#line 105 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_27_27;
#line 105 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_29_29;
#line 106 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv5_Error_19;
#line 106 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29;
#line 106 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30;

#line 105 "make.module_dep_file.m"
            {
#line 105 "make.module_dep_file.m"
              make__module_dep_file__Ancestors_18 = mdbcomp__prim_data__get_ancestors_1_f_0(make__module_dep_file__ModuleName_9);
            }
#line 107 "make.module_dep_file.m"
            {
#line 107 "make.module_dep_file.m"
              make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 107 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[0]));
#line 107 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__get_module_dependencies_7_p_0_1));
#line 107 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 107 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_8));
#line 107 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__RebuildModuleDeps_13));
#line 107 "make.module_dep_file.m"
            }
#line 11083 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_122_122 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 106 "make.module_dep_file.m"
            {
#line 106 "make.module_dep_file.m"
              mercury__list__foldl3_8_p_2(make__module_dep_file__TypeCtorInfo_122_122, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__Ancestors_18, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv5_Error_19, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_22)), &make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30);
            }
#line 106 "make.module_dep_file.m"
            make__module_dep_file__Error_19 = ((MR_Word) make__module_dep_file__conv5_Error_19);
#line 106 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_29_29 = ((MR_Word) make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29);
#line 116 "make.module_dep_file.m"
            if ((make__module_dep_file__Error_19 == (MR_Integer) 0))
#line 118 "make.module_dep_file.m"
              {
#line 118 "make.module_dep_file.m"
                make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeImports_10, make__module_dep_file__STATE_VARIABLE_Info_29_29, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 118 "make.module_dep_file.m"
                return;
              }
#line 116 "make.module_dep_file.m"
            else
#line 110 "make.module_dep_file.m"
              {
#line 110 "make.module_dep_file.m"
                MR_Word make__module_dep_file__ModuleDepMap0_20;
#line 110 "make.module_dep_file.m"
                MR_Word make__module_dep_file__ModuleDepMap_21;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_74_74;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_75_75;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_76_76;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_77_77;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_78_78;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_79_79;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_80_80;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_81_81;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_82_82;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_83_83;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_84_84;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_85_85;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_86_86;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_87_87;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_88_88;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_89_89;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_90_90;
#line 112 "make.module_dep_file.m"
                MR_Integer make__module_dep_file__V_91_91;
#line 112 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_92_92;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_94_94;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_95_95;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_96_96;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_97_97;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_98_98;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_99_99;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_100_100;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_101_101;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_102_102;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_103_103;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_104_104;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_105_105;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_106_106;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_107_107;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_108_108;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_109_109;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_110_110;
#line 115 "make.module_dep_file.m"
                MR_Integer make__module_dep_file__V_111_111;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_112_112;
#line 115 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_93_93;

#line 111 "make.module_dep_file.m"
                *make__module_dep_file__MaybeImports_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__ModuleDepMap0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 112 "make.module_dep_file.m"
                make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 114 "make.module_dep_file.m"
                {
#line 114 "make.module_dep_file.m"
                  mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_122_122, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_9)), ((MR_Box) (*make__module_dep_file__MaybeImports_10)), make__module_dep_file__ModuleDepMap0_20, &make__module_dep_file__ModuleDepMap_21);
                }
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 115 "make.module_dep_file.m"
                make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 115 "make.module_dep_file.m"
                {
#line 115 "make.module_dep_file.m"
                  MR_Word base;
#line 115 "make.module_dep_file.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 115 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_23 = base;
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_21));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_94_94));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_95_95));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_96_96));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_97_97));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_98_98));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_100_100));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_101_101));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_102_102));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_103_103));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_104_104));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_105_105));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_106_106));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_107_107));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_108_108));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_109_109));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_111_111));
#line 115 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_112_112));
#line 115 "make.module_dep_file.m"
                }
#line 110 "make.module_dep_file.m"
              }
#line 105 "make.module_dep_file.m"
          }
#line 97 "make.module_dep_file.m"
      }
#line 90 "make.module_dep_file.m"
    else
#line 88 "make.module_dep_file.m"
      {
#line 88 "make.module_dep_file.m"
        make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeImports_10, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 88 "make.module_dep_file.m"
        return;
      }
#line 84 "make.module_dep_file.m"
  }
#line 33 "make.module_dep_file.m"
}

void mercury__make__module_dep_file__init(void)
{
}

void mercury__make__module_dep_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__module_dep_file__make__module_dep_file__type_ctor_info_module_dep_file_version_0);
}

void mercury__make__module_dep_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module make.module_dep_file. */
