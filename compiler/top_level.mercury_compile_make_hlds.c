/*
** Automatically generated from `mercury_compile_make_hlds.m'
** by the Mercury compiler,
** version rotd-2026-08-24
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


// :- module top_level.mercury_compile_make_hlds.
// :- implementation.

/*
INIT mercury__top_level__mercury_compile_make_hlds__init
ENDINIT
*/

#include "top_level.mercury_compile_make_hlds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "top_level.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_defns.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.module_dep_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.equiv_type_parse_tree.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.generate_mmakefile_fragments.mih"
#include "parse_tree.grab_modules.mih"
#include "parse_tree.make_module_file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_deps_file.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "parse_tree.module_qual.qualify_items.mih"



struct top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0_s {
  MR_Word * top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__LambdaHeadVar__1_62;
  MR_Cont top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__cont;
  void * top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__LibModuleNameStr_19;
};

struct top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0_s {
  MR_Box * top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__cont;
  void * top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__cont_env_ptr;
  MR_Word top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__conv0_LambdaHeadVar__1_62;
};


static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_make_hlds__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__field_types_make_hlds_result_0_0[5];

static const MR_ConstString top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__field_names_make_hlds_result_0_0[5];

static const MR_DuFunctorDesc top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_functor_desc_make_hlds_result_0_0;

static const MR_DuFunctorDescPtr top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_stag_ordered_make_hlds_result_0_0[1];

static const MR_DuPtagLayout top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_ptag_ordered_make_hlds_result_0[1];

static const MR_DuFunctorDescPtr top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_name_ordered_make_hlds_result_0[1];

static const MR_Integer top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__functor_number_map_make_hlds_result_0[1];

static const MR_EnumFunctorDesc top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_functor_desc_maybe_write_d_file_0_0;

static const MR_EnumFunctorDesc top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_functor_desc_maybe_write_d_file_0_1;

static const MR_EnumFunctorDescPtr top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_ordinal_ordered_maybe_write_d_file_0[2];

static const MR_EnumFunctorDescPtr top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_name_ordered_maybe_write_d_file_0[2];

static const MR_Integer top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__functor_number_map_maybe_write_d_file_0[2];

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__588__1_2_p_0(
  MR_Word ModuleName_9,
  MR_Word LambdaHeadVar__1_63);

static void MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0(
  MR_Word * LambdaHeadVar__1_62,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_make_hlds____Compare____maybe_write_d_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds____Unify____maybe_write_d_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definition_extents_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Verbose_8,
  MR_Word Stats_9,
  MR_Word HLDS_10);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definition_line_counts_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Verbose_8,
  MR_Word Stats_9,
  MR_Word HLDS_10);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definitions_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Verbose_8,
  MR_Word Stats_9,
  MR_Word HLDS_10);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_read_event_set_6_p_0(
  MR_String EventSetFileName_7,
  MR_String * EventSetName_8,
  MR_Word * EventSpecMap_9,
  MR_Word * EventSetSpecs_10);

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0(
  MR_Word Globals_5,
  MR_Word ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_25,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_26);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_mention_undoc_3_p_0(
  MR_Word DocUndoc_4,
  MR_Word Pieces0_5,
  MR_Word * Pieces_6);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_d_file_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Baggage0_12,
  MR_Word AugCompUnit_13,
  MR_Word HLDS0_14,
  MR_Word WriteDFile_15,
  MR_Word MaybeDFileTransOptDeps_16);

static void MR_CALL 
top_level__mercury_compile_make_hlds__should_we_write_d_file_3_p_0(
  MR_Word OpModeAugment_4,
  MR_Word InvokedByMMCMake_5,
  MR_Word * WriteDFile_6);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_read_trans_opt_deps_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word WriteDFile_11,
  MR_Word * MaybeDFileTransOptDeps_12);

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__read_d_file_get_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__read_d_file_get_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_make_hlds__read_d_file_get_modules_4_p_0(
  MR_Word InStream_5,
  MR_Word * TransOptDeps_6);

static void MR_CALL 
top_level__mercury_compile_make_hlds__read_d_file_find_start_5_p_0(
  MR_Word InStream_6,
  MR_String SearchPattern_7,
  MR_Word * Success_8);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_grab_plain_and_trans_opt_files_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word OpModeAugment_19,
  MR_Word Verbose_20,
  MR_Word MaybeDFileTransOptDeps_21,
  MR_Word * BlockingSpecs_22,
  MR_Word STATE_VARIABLE_Baggage_0_47,
  MR_Word * STATE_VARIABLE_Baggage_48,
  MR_Word STATE_VARIABLE_AugCompUnit_0_49,
  MR_Word * STATE_VARIABLE_AugCompUnit_50,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_51,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_52,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_53,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_54);

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds____Unify____make_hlds_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_make_hlds____Compare____make_hlds_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds____Unify____maybe_write_d_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_make_hlds____Compare____maybe_write_d_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_1[58][2];

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_2[3][1];

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_3[2][4];

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_4[3][3];

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_5[1][5];




static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_1[58][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: this module,"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but will get the other."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[3])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a third module will want to import one"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and you will likely have problems where"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A third module cannot import both,"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as a module in the Mercury standard library."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has the same name"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the name of this module,"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contains the name of a module,"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and vice versa."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[3])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "will be taken as a reference to this module,"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the standard library module"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a reference intended to refer to"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations,"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "especially in the absence of needed"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "you will likely have problems where,"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to this module, which means that"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "will therefore be a (not fully qualified) reference"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A reference to the standard library in a third module"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the Mercury standard library."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and is not publicly documented."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[3])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is part of the Mercury implementation,"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The Mercury standard library module in question"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[55])))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_2[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 209U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 7U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 168U) },
};

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_3[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_4[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&top_level__mercury_compile_make_hlds_scalar_common_3[0])),
    ((MR_Box) (top_level__mercury_compile_make_hlds__read_d_file_get_modules_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&top_level__mercury_compile_make_hlds_scalar_common_3[0])),
    ((MR_Box) (top_level__mercury_compile_make_hlds__read_d_file_get_modules_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_make_hlds_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_make_hlds__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_PseudoTypeInfo top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__field_types_make_hlds_result_0_0[5] = {
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_make_hlds__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_make_hlds__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_make_hlds__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_make_hlds__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_make_hlds__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0)
};

static const MR_ConstString top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__field_names_make_hlds_result_0_0[5] = {
  (MR_String) "mhr_invalid_types",
  (MR_String) "mhr_invalid_insts_modes",
  (MR_String) "mhr_opt_blocking",
  (MR_String) "mhr_expansion",
  (MR_String) "mhr_event_set"
};

static const MR_DuFunctorDesc top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_functor_desc_make_hlds_result_0_0 = {
  (MR_String) "make_hlds_result",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__field_types_make_hlds_result_0_0,
  top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__field_names_make_hlds_result_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_stag_ordered_make_hlds_result_0_0[1] = { &top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_functor_desc_make_hlds_result_0_0 };

static const MR_DuPtagLayout top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_ptag_ordered_make_hlds_result_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_stag_ordered_make_hlds_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_name_ordered_make_hlds_result_0[1] = { &top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_functor_desc_make_hlds_result_0_0 };

static const MR_Integer top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__functor_number_map_make_hlds_result_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__type_ctor_info_make_hlds_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile_make_hlds____Unify____make_hlds_result_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_make_hlds____Compare____make_hlds_result_0_0_10001)),
  (MR_String) "top_level.mercury_compile_make_hlds",
  (MR_String) "make_hlds_result",
  { top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_name_ordered_make_hlds_result_0 },
  { top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__du_ptag_ordered_make_hlds_result_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__functor_number_map_make_hlds_result_0,

};

static const MR_EnumFunctorDesc top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_functor_desc_maybe_write_d_file_0_0 = {
  (MR_String) "do_not_write_d_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_functor_desc_maybe_write_d_file_0_1 = {
  (MR_String) "write_d_file",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_ordinal_ordered_maybe_write_d_file_0[2] = {
  &top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_functor_desc_maybe_write_d_file_0_0,
  &top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_functor_desc_maybe_write_d_file_0_1
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_name_ordered_maybe_write_d_file_0[2] = {
  &top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_functor_desc_maybe_write_d_file_0_0,
  &top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_functor_desc_maybe_write_d_file_0_1
};

static const MR_Integer top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__functor_number_map_maybe_write_d_file_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__type_ctor_info_maybe_write_d_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (top_level__mercury_compile_make_hlds____Unify____maybe_write_d_file_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_make_hlds____Compare____maybe_write_d_file_0_0_10001)),
  (MR_String) "top_level.mercury_compile_make_hlds",
  (MR_String) "maybe_write_d_file",
  { top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_name_ordered_maybe_write_d_file_0 },
  { top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_ordinal_ordered_maybe_write_d_file_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__functor_number_map_maybe_write_d_file_0,

};

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__588__1_2_p_0(
  MR_Word ModuleName_9,
  MR_Word LambdaHeadVar__1_63)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name__partial_sym_name_is_part_of_full_2_p_0(LambdaHeadVar__1_63, ModuleName_9);
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0_s * env_ptr = (struct top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__LambdaHeadVar__1_62) = mdbcomp__sym_name__string_to_sym_name_1_f_0((env_ptr)->top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__LibModuleNameStr_19);
  ((env_ptr)->top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__cont)((env_ptr)->top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0(
  MR_Word * LambdaHeadVar__1_62,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0_s env;

  (env).top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__LambdaHeadVar__1_62 = LambdaHeadVar__1_62;
  (env).top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__cont = cont;
  (env).top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word _DocUndoc_20;

    mercury__library__stdlib_module_doc_undoc_2_p_1(&(env).top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_env_0__LibModuleNameStr_19, &_DocUndoc_20, top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0_1, &env);
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds____Compare____maybe_write_d_file_0_0(
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
top_level__mercury_compile_make_hlds____Unify____maybe_write_d_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
top_level__mercury_compile_make_hlds____Compare____make_hlds_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_1[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
top_level__mercury_compile_make_hlds____Unify____make_hlds_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
top_level__mercury_compile_make_hlds__make_hlds_pass_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word ErrorStream_21,
  MR_Word Globals_22,
  MR_Word OpModeAugment_23,
  MR_Word InvokedByMMCMake_24,
  MR_Word Baggage0_25,
  MR_Word AugCompUnit0_26,
  MR_Word * STATE_VARIABLE_HLDS_71,
  MR_Word * QualInfo_28,
  MR_Word * MaybeTimestampMap_29,
  MR_Word * Result_30,
  MR_Word STATE_VARIABLE_DumpInfo_0_72,
  MR_Word * STATE_VARIABLE_DumpInfo_73,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_74,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_75,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_76,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_77)
{
  MR_Word Stats_35;
  MR_Word Verbose_36;
  MR_Word ParseTreeModuleSrc0_37;
  MR_Word ModuleName_38;
  MR_Word WriteDFile_39;
  MR_Word MaybeDFileTransOptDeps_40;
  MR_Word OptBlockingSpecs_41;
  MR_Word Baggage1_42;
  MR_Word AugCompUnit1_43;
  MR_Word BaggageErrSpecs_44;
  MR_Word BaggageWarnSpecs_45;
  MR_String EventSetFileName_46;
  MR_String EventSetName_47;
  MR_Word EventSpecMap0_48;
  MR_Word EventSetSpecs_49;
  MR_Word AugCompUnit2_50;
  MR_Word EventSpecMap1_51;
  MR_Word MQInfo0_52;
  MR_Word UnusedImports_53;
  MR_Word UnusedImportsSpecsMap_54;
  MR_Word UnusedImportsSpecs_55;
  MR_Word RecompInfo0_56;
  MR_Word AugCompUnit_57;
  MR_Word EventSpecMap_58;
  MR_Word TypeEqvMap_59;
  MR_Word UsedEqvModules_60;
  MR_Word RecompInfo_61;
  MR_Word ExpandSpecs_62;
  MR_Word MQInfo_63;
  MR_String DumpBaseFileName_64;
  MR_Word InvalidTypeSpecs_65;
  MR_Word InvalidInstModeSpecs_66;
  MR_Word MakeErrSpecs_67;
  MR_Word MakeWarnSpecs_68;
  MR_Word MakeInfoSpecs_69;
  MR_Word EventSet_70;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_1_82;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_2_85;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_3_87;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_4_89;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_5_90;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_6_93;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_7_94;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_8_99;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_9_100;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_10_108;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_11_109;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_12_114;
  MR_Word STATE_VARIABLE_HLDS_1_119;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_13_120;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_14_121;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_15_122;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_16_123;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_17_124;
  MR_Word Var_189;

  libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 134, &Stats_35);
  libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 131, &Verbose_36);
  ParseTreeModuleSrc0_37 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_26, 0))));
  top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0(Globals_22, ParseTreeModuleSrc0_37, STATE_VARIABLE_MaybeWrittenSpecs_0_76, &STATE_VARIABLE_MaybeWrittenSpecs_1_82);
  ModuleName_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_37, 0))));
  top_level__mercury_compile_make_hlds__should_we_write_d_file_3_p_0(OpModeAugment_23, InvokedByMMCMake_24, &WriteDFile_39);
  top_level__mercury_compile_make_hlds__maybe_read_trans_opt_deps_7_p_0(ProgressStream_20, Globals_22, ModuleName_38, WriteDFile_39, &MaybeDFileTransOptDeps_40);
  top_level__mercury_compile_make_hlds__maybe_grab_plain_and_trans_opt_files_16_p_0(ProgressStream_20, Globals_22, OpModeAugment_23, Verbose_36, MaybeDFileTransOptDeps_40, &OptBlockingSpecs_41, Baggage0_25, &Baggage1_42, AugCompUnit0_26, &AugCompUnit1_43, STATE_VARIABLE_HaveReadModuleMaps_0_74, STATE_VARIABLE_HaveReadModuleMaps_75, STATE_VARIABLE_MaybeWrittenSpecs_1_82, &STATE_VARIABLE_MaybeWrittenSpecs_2_85);
  parse_tree__error_util__add_to_be_written_err_specs_3_p_0(OptBlockingSpecs_41, STATE_VARIABLE_MaybeWrittenSpecs_2_85, &STATE_VARIABLE_MaybeWrittenSpecs_3_87);
  *MaybeTimestampMap_29 = ((MR_Word) ((MR_hl_field(0, Baggage1_42, 5))));
  Var_189 = ((MR_Word) ((MR_hl_field(0, Baggage1_42, 7))));
  parse_tree__parse_error__get_read_module_specs_3_p_0(Var_189, &BaggageErrSpecs_44, &BaggageWarnSpecs_45);
  parse_tree__error_util__add_to_be_written_err_specs_3_p_0(BaggageErrSpecs_44, STATE_VARIABLE_MaybeWrittenSpecs_3_87, &STATE_VARIABLE_MaybeWrittenSpecs_4_89);
  parse_tree__error_util__add_to_be_written_warn_specs_3_p_0(BaggageWarnSpecs_45, STATE_VARIABLE_MaybeWrittenSpecs_4_89, &STATE_VARIABLE_MaybeWrittenSpecs_5_90);
  libs__globals__lookup_string_option_3_p_0(Globals_22, (MR_Integer) 282, &EventSetFileName_46);
  top_level__mercury_compile_make_hlds__maybe_read_event_set_6_p_0(EventSetFileName_46, &EventSetName_47, &EventSpecMap0_48, &EventSetSpecs_49);
  parse_tree__error_util__add_to_be_written_err_specs_3_p_0(EventSetSpecs_49, STATE_VARIABLE_MaybeWrittenSpecs_5_90, &STATE_VARIABLE_MaybeWrittenSpecs_6_93);
  parse_tree__write_error_spec__maybe_write_not_yet_written_specs_7_p_0(ErrorStream_21, Globals_22, Verbose_36, STATE_VARIABLE_MaybeWrittenSpecs_6_93, &STATE_VARIABLE_MaybeWrittenSpecs_7_94);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_20, Verbose_36, (MR_String) "% Module qualifying items...\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_20, Verbose_36);
  parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0(Globals_22, AugCompUnit1_43, &AugCompUnit2_50, EventSpecMap0_48, &EventSpecMap1_51, EventSetFileName_46, &MQInfo0_52, &UnusedImports_53, &UnusedImportsSpecsMap_54);
  mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), UnusedImportsSpecsMap_54, &UnusedImportsSpecs_55);
  parse_tree__error_util__add_to_be_written_warn_specs_3_p_0(UnusedImportsSpecs_55, STATE_VARIABLE_MaybeWrittenSpecs_7_94, &STATE_VARIABLE_MaybeWrittenSpecs_8_99);
  parse_tree__write_error_spec__maybe_write_not_yet_written_specs_7_p_0(ErrorStream_21, Globals_22, Verbose_36, STATE_VARIABLE_MaybeWrittenSpecs_8_99, &STATE_VARIABLE_MaybeWrittenSpecs_9_100);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_20, Verbose_36, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_20, Stats_35);
  parse_tree__module_qual__mq_info__mq_info_get_recompilation_info_2_p_0(MQInfo0_52, &RecompInfo0_56);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_20, Verbose_36, (MR_String) "% Expanding equivalence types and insts...\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_20, Verbose_36);
  parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0(AugCompUnit2_50, &AugCompUnit_57, EventSpecMap1_51, &EventSpecMap_58, &TypeEqvMap_59, &UsedEqvModules_60, RecompInfo0_56, &RecompInfo_61, &ExpandSpecs_62);
  parse_tree__error_util__add_to_be_written_err_specs_3_p_0(ExpandSpecs_62, STATE_VARIABLE_MaybeWrittenSpecs_9_100, &STATE_VARIABLE_MaybeWrittenSpecs_10_108);
  parse_tree__write_error_spec__maybe_write_not_yet_written_specs_7_p_0(ErrorStream_21, Globals_22, Verbose_36, STATE_VARIABLE_MaybeWrittenSpecs_10_108, &STATE_VARIABLE_MaybeWrittenSpecs_11_109);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_20, Verbose_36, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_20, Stats_35);
  parse_tree__module_qual__mq_info__mq_info_set_recompilation_info_3_p_0(RecompInfo_61, MQInfo0_52, &MQInfo_63);
  parse_tree__write_error_spec__maybe_write_not_yet_written_specs_7_p_0(ErrorStream_21, Globals_22, Verbose_36, STATE_VARIABLE_MaybeWrittenSpecs_11_109, &STATE_VARIABLE_MaybeWrittenSpecs_12_114);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_20, Verbose_36, (MR_String) "% Converting parse tree to hlds...\n");
  parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 4, ModuleName_38, &DumpBaseFileName_64);
  hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0(ProgressStream_20, AugCompUnit_57, Globals_22, DumpBaseFileName_64, MQInfo_63, TypeEqvMap_59, UsedEqvModules_60, UnusedImports_53, QualInfo_28, &STATE_VARIABLE_HLDS_1_119, &InvalidTypeSpecs_65, &InvalidInstModeSpecs_66, &MakeErrSpecs_67, &MakeWarnSpecs_68, &MakeInfoSpecs_69);
  parse_tree__error_util__add_to_be_written_err_specs_3_p_0(InvalidTypeSpecs_65, STATE_VARIABLE_MaybeWrittenSpecs_12_114, &STATE_VARIABLE_MaybeWrittenSpecs_13_120);
  parse_tree__error_util__add_to_be_written_err_specs_3_p_0(InvalidInstModeSpecs_66, STATE_VARIABLE_MaybeWrittenSpecs_13_120, &STATE_VARIABLE_MaybeWrittenSpecs_14_121);
  parse_tree__error_util__add_to_be_written_err_specs_3_p_0(MakeErrSpecs_67, STATE_VARIABLE_MaybeWrittenSpecs_14_121, &STATE_VARIABLE_MaybeWrittenSpecs_15_122);
  parse_tree__error_util__add_to_be_written_warn_specs_3_p_0(MakeWarnSpecs_68, STATE_VARIABLE_MaybeWrittenSpecs_15_122, &STATE_VARIABLE_MaybeWrittenSpecs_16_123);
  parse_tree__error_util__add_to_be_written_info_specs_3_p_0(MakeInfoSpecs_69, STATE_VARIABLE_MaybeWrittenSpecs_16_123, &STATE_VARIABLE_MaybeWrittenSpecs_17_124);
  {
    EventSet_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EventSet_70, 0) = ((MR_Box) (EventSetName_47));
    MR_hl_field(0, EventSet_70, 1) = ((MR_Box) (EventSpecMap_58));
  }
  hlds__hlds_module__module_info_set_event_set_3_p_0(EventSet_70, STATE_VARIABLE_HLDS_1_119, STATE_VARIABLE_HLDS_71);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Result_30 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InvalidTypeSpecs_65));
    MR_hl_field(0, base, 1) = ((MR_Box) (InvalidInstModeSpecs_66));
    MR_hl_field(0, base, 2) = ((MR_Box) (OptBlockingSpecs_41));
    MR_hl_field(0, base, 3) = ((MR_Box) (ExpandSpecs_62));
    MR_hl_field(0, base, 4) = ((MR_Box) (EventSetSpecs_49));
  }
  parse_tree__write_error_spec__maybe_write_not_yet_written_specs_7_p_0(ErrorStream_21, Globals_22, Verbose_36, STATE_VARIABLE_MaybeWrittenSpecs_17_124, STATE_VARIABLE_MaybeWrittenSpecs_77);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_20, Verbose_36, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_20, Stats_35);
  top_level__mercury_compile_make_hlds__maybe_write_definitions_6_p_0(ProgressStream_20, Verbose_36, Stats_35, *STATE_VARIABLE_HLDS_71);
  top_level__mercury_compile_make_hlds__maybe_write_definition_line_counts_6_p_0(ProgressStream_20, Verbose_36, Stats_35, *STATE_VARIABLE_HLDS_71);
  top_level__mercury_compile_make_hlds__maybe_write_definition_extents_6_p_0(ProgressStream_20, Verbose_36, Stats_35, *STATE_VARIABLE_HLDS_71);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_20, *STATE_VARIABLE_HLDS_71, (MR_Integer) 1, (MR_String) "initial", STATE_VARIABLE_DumpInfo_0_72, STATE_VARIABLE_DumpInfo_73);
  top_level__mercury_compile_make_hlds__maybe_write_d_file_9_p_0(ProgressStream_20, Globals_22, Baggage0_25, AugCompUnit_57, *STATE_VARIABLE_HLDS_71, WriteDFile_39, MaybeDFileTransOptDeps_40);
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definition_extents_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Verbose_8,
  MR_Word Stats_9,
  MR_Word HLDS_10)
{
  MR_Word Globals_12;
  MR_Word Extents_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_10, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 266, &Extents_13);
  switch (Extents_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_14;
        MR_String DefnFileName_15;
        MR_Word DefnOpenResult_16;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_8, (MR_String) "% Writing definition extents...");
        hlds__hlds_module__module_info_get_name_2_p_0(HLDS_10, &ModuleName_14);
        parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 0, ModuleName_14, &DefnFileName_15);
        mercury__io__open_output_4_p_0(DefnFileName_15, &DefnOpenResult_16);
        if (((MR_tag((MR_Word) DefnOpenResult_16)) == (MR_Integer) 1))
        {
          MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(1, DefnOpenResult_16, 0))));

          libs__file_util__report_cannot_open_file_for_output_6_p_0(ProgressStream_7, Globals_12, DefnFileName_15, IOError_18);
        }
        else
        {
          MR_Word DefnFileStream_17 = ((MR_Word) ((MR_hl_field(0, DefnOpenResult_16, 0))));

          hlds__hlds_defns__write_hlds_defn_extents_4_p_0(DefnFileStream_17, HLDS_10);
          mercury__io__close_output_3_p_0(DefnFileStream_17);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_8, (MR_String) " done.\n");
        }
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_9);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definition_line_counts_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Verbose_8,
  MR_Word Stats_9,
  MR_Word HLDS_10)
{
  MR_Word Globals_12;
  MR_Word LineCounts_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_10, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 265, &LineCounts_13);
  switch (LineCounts_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_14;
        MR_String LcFileName_15;
        MR_Word LcOpenResult_16;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_8, (MR_String) "% Writing definition line counts...");
        hlds__hlds_module__module_info_get_name_2_p_0(HLDS_10, &ModuleName_14);
        parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 1, ModuleName_14, &LcFileName_15);
        mercury__io__open_output_4_p_0(LcFileName_15, &LcOpenResult_16);
        if (((MR_tag((MR_Word) LcOpenResult_16)) == (MR_Integer) 1))
        {
          MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(1, LcOpenResult_16, 0))));

          libs__file_util__report_cannot_open_file_for_output_6_p_0(ProgressStream_7, Globals_12, LcFileName_15, IOError_18);
        }
        else
        {
          MR_Word LcFileStream_17 = ((MR_Word) ((MR_hl_field(0, LcOpenResult_16, 0))));

          hlds__hlds_defns__write_hlds_defn_line_counts_4_p_0(LcFileStream_17, HLDS_10);
          mercury__io__close_output_3_p_0(LcFileStream_17);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_8, (MR_String) " done.\n");
        }
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_9);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definitions_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Verbose_8,
  MR_Word Stats_9,
  MR_Word HLDS_10)
{
  MR_Word Globals_12;
  MR_Word ShowDefns_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_10, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 264, &ShowDefns_13);
  switch (ShowDefns_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_14;
        MR_String DefnsFileName_15;
        MR_Word DefnsOpenResult_16;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_8, (MR_String) "% Writing definitions...");
        hlds__hlds_module__module_info_get_name_2_p_0(HLDS_10, &ModuleName_14);
        parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 2, ModuleName_14, &DefnsFileName_15);
        mercury__io__open_output_4_p_0(DefnsFileName_15, &DefnsOpenResult_16);
        if (((MR_tag((MR_Word) DefnsOpenResult_16)) == (MR_Integer) 1))
        {
          MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(1, DefnsOpenResult_16, 0))));

          libs__file_util__report_cannot_open_file_for_output_6_p_0(ProgressStream_7, Globals_12, DefnsFileName_15, IOError_18);
        }
        else
        {
          MR_Word DefnsFileStream_17 = ((MR_Word) ((MR_hl_field(0, DefnsOpenResult_16, 0))));

          hlds__hlds_defns__write_hlds_defns_4_p_0(DefnsFileStream_17, HLDS_10);
          mercury__io__close_output_3_p_0(DefnsFileStream_17);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_8, (MR_String) " done.\n");
        }
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_9);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_read_event_set_6_p_0(
  MR_String EventSetFileName_7,
  MR_String * EventSetName_8,
  MR_Word * EventSpecMap_9,
  MR_Word * EventSetSpecs_10)
{
  MR_bool succeeded = (strcmp(EventSetFileName_7, (MR_String) "") == 0);

  if (succeeded)
  {
    *EventSetName_8 = (MR_String) "";
    *EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
    *EventSetSpecs_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_String EventSetName0_12;
    MR_Word EventSpecMap0_13;

    parse_tree__prog_event__read_event_set_6_p_0(EventSetFileName_7, &EventSetName0_12, &EventSpecMap0_13, EventSetSpecs_10);
    if ((*EventSetSpecs_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *EventSetName_8 = EventSetName0_12;
      *EventSpecMap_9 = EventSpecMap0_13;
    }
    else
    {
      *EventSetName_8 = (MR_String) "";
      *EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__588__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0_s * env_ptr = (struct top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__conv0_LambdaHeadVar__1_62));
  ((env_ptr)->top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__cont)((env_ptr)->top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0_s env;

  (env).top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__cont = cont;
  (env).top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__579__1_1_p_0(&(env).top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__conv0_LambdaHeadVar__1_62, top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_1, &env);
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0(
  MR_Word Globals_5,
  MR_Word ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_25,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_26)
{
  MR_bool succeeded;
  MR_Word WarnShadowing_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 168, &WarnShadowing_8);
  switch (WarnShadowing_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_MaybeWrittenSpecs_26 = STATE_VARIABLE_MaybeWrittenSpecs_0_25;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, 0))));
        MR_String ModuleNameStr_10;
        MR_Word DocUndoc_11;

        ModuleNameStr_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_9);
        succeeded = mercury__library__stdlib_module_doc_undoc_2_p_0(ModuleNameStr_10, &DocUndoc_11);
        if (succeeded)
        {
          MR_Word Pieces0_12;
          MR_Word Pieces_13;
          MR_Word Context_14;
          MR_Word Spec_16;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_59;

          {
            Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_31, 1) = ((MR_Box) (ModuleName_9));
          }
          {
            Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
            MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[24])));
          }
          {
            Pieces0_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces0_12, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[10])));
            MR_hl_field(1, Pieces0_12, 1) = ((MR_Box) (Var_30));
          }
          top_level__mercury_compile_make_hlds__maybe_mention_undoc_3_p_0(DocUndoc_11, Pieces0_12, &Pieces_13);
          Context_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, 1))));
          {
            Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_warn_about_stdlib_shadowing\'/4"));
            MR_hl_field(0, Spec_16, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_2[2])));
            MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_14));
            MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_13));
          }
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (Spec_16));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__error_util__add_to_be_written_specs_3_p_0(Var_59, STATE_VARIABLE_MaybeWrittenSpecs_0_25, STATE_VARIABLE_MaybeWrittenSpecs_26);
        }
        else
        {
          MR_Word ShadowedLibModuleName_23;
          MR_Word DocUndoc_131;
          MR_Word LibModuleNames_21;
          MR_Word IsShadowed_22;
          MR_String ShadowedLibModuleNameStr_24;
          MR_Box conv1_ShadowedLibModuleName_23;

          mercury__solutions__solutions_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_4[2]), &LibModuleNames_21);
          {
            IsShadowed_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IsShadowed_22, 0) = ((MR_Box) (&top_level__mercury_compile_make_hlds_scalar_common_5[0]));
            MR_hl_field(0, IsShadowed_22, 1) = ((MR_Box) (top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_3));
            MR_hl_field(0, IsShadowed_22, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, IsShadowed_22, 3) = ((MR_Box) (ModuleName_9));
          }
          succeeded = mercury__list__find_first_match_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IsShadowed_22, LibModuleNames_21, &conv1_ShadowedLibModuleName_23);
          if (succeeded)
          {
            ShadowedLibModuleName_23 = ((MR_Word) (conv1_ShadowedLibModuleName_23));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            ShadowedLibModuleNameStr_24 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ShadowedLibModuleName_23);
            succeeded = mercury__library__stdlib_module_doc_undoc_2_p_0(ShadowedLibModuleNameStr_24, &DocUndoc_131);
          }
          if (succeeded)
          {
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_68;
            MR_Word Var_71;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_121;
            MR_Word Pieces0_126;
            MR_Word Pieces_127;
            MR_Word Context_128;
            MR_Word Spec_130;

            {
              Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_67, 1) = ((MR_Box) (ModuleName_9));
            }
            {
              Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_75, 1) = ((MR_Box) (ShadowedLibModuleName_23));
            }
            {
              Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
              MR_hl_field(1, Var_74, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[51])));
            }
            {
              Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[26])));
              MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[23])));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
              MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
            }
            {
              Pieces0_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces0_126, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[25])));
              MR_hl_field(1, Pieces0_126, 1) = ((MR_Box) (Var_66));
            }
            top_level__mercury_compile_make_hlds__maybe_mention_undoc_3_p_0(DocUndoc_131, Pieces0_126, &Pieces_127);
            Context_128 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, 1))));
            {
              Spec_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_130, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_warn_about_stdlib_shadowing\'/4"));
              MR_hl_field(0, Spec_130, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_2[2])));
              MR_hl_field(0, Spec_130, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(0, Spec_130, 3) = ((MR_Box) (Context_128));
              MR_hl_field(0, Spec_130, 4) = ((MR_Box) (Pieces_127));
            }
            {
              Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_121, 0) = ((MR_Box) (Spec_130));
              MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__error_util__add_to_be_written_specs_3_p_0(Var_121, STATE_VARIABLE_MaybeWrittenSpecs_0_25, STATE_VARIABLE_MaybeWrittenSpecs_26);
          }
          else
            *STATE_VARIABLE_MaybeWrittenSpecs_26 = STATE_VARIABLE_MaybeWrittenSpecs_0_25;
        }
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_mention_undoc_3_p_0(
  MR_Word DocUndoc_4,
  MR_Word Pieces0_5,
  MR_Word * Pieces_6)
{
  switch (DocUndoc_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Pieces_6 = Pieces0_5;
      break;
    case (MR_Integer) 1:
      *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_5, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[57])));
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_d_file_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Baggage0_12,
  MR_Word AugCompUnit_13,
  MR_Word HLDS0_14,
  MR_Word WriteDFile_15,
  MR_Word MaybeDFileTransOptDeps_16)
{
  switch (WriteDFile_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BurdenedAugCompUnit_18;
        MR_Word AvailModuleSets_19;
        MR_Word MaybeInclTransOptRule_23;
        MR_Word OutputMMCMakeDeps_24;

        {
          BurdenedAugCompUnit_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BurdenedAugCompUnit_18, 0) = ((MR_Box) (Baggage0_12));
          MR_hl_field(0, BurdenedAugCompUnit_18, 1) = ((MR_Box) (AugCompUnit_13));
        }
        hlds__hlds_module__module_info_get_and_check_avail_module_sets_2_p_0(HLDS0_14, &AvailModuleSets_19);
        if ((MaybeDFileTransOptDeps_16 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeInclTransOptRule_23 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word DFileTransOptDepsList_20 = ((MR_Word) ((MR_hl_field(1, MaybeDFileTransOptDeps_16, 0))));
          MR_Word DFileTransOptDeps_21;
          MR_Word TransOptRuleInfo_22;

          mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DFileTransOptDepsList_20, &DFileTransOptDeps_21);
          {
            TransOptRuleInfo_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TransOptRuleInfo_22, 0) = ((MR_Box) (DFileTransOptDeps_21));
          }
          {
            MaybeInclTransOptRule_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeInclTransOptRule_23, 0) = ((MR_Box) (TransOptRuleInfo_22));
          }
        }
        parse_tree__write_deps_file__generate_and_write_d_file_hlds_7_p_0(ProgressStream_10, Globals_11, BurdenedAugCompUnit_18, AvailModuleSets_19, MaybeInclTransOptRule_23);
        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 793, &OutputMMCMakeDeps_24);
        switch (OutputMMCMakeDeps_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ParseTreeModuleSrc_25 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_13, 0))));
              MR_Word BurdenedModule0_26;

              {
                BurdenedModule0_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, BurdenedModule0_26, 0) = ((MR_Box) (Baggage0_12));
                MR_hl_field(0, BurdenedModule0_26, 1) = ((MR_Box) (ParseTreeModuleSrc_25));
              }
              make__module_dep_file__write_module_dep_file_5_p_0(ProgressStream_10, Globals_11, BurdenedModule0_26);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__should_we_write_d_file_3_p_0(
  MR_Word OpModeAugment_4,
  MR_Word InvokedByMMCMake_5,
  MR_Word * WriteDFile_6)
{
  switch (MR_tag((MR_Word) OpModeAugment_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *WriteDFile_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          switch (InvokedByMMCMake_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *WriteDFile_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 0:
              *WriteDFile_6 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 4:
          *WriteDFile_6 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(1, OpModeAugment_4, 0))) & (MR_Integer) 3);

        switch (Var_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *WriteDFile_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            switch (InvokedByMMCMake_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *WriteDFile_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 0:
                *WriteDFile_6 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (InvokedByMMCMake_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *WriteDFile_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 0:
                *WriteDFile_6 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (InvokedByMMCMake_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *WriteDFile_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 0:
                *WriteDFile_6 = (MR_Integer) 1;
                break;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_read_trans_opt_deps_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word WriteDFile_11,
  MR_Word * MaybeDFileTransOptDeps_12)
{
  switch (WriteDFile_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeDFileTransOptDeps_12 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word TransOpt_16;

        libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 433, &TransOpt_16);
        switch (TransOpt_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *MaybeDFileTransOptDeps_12 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Verbose_17;
              MR_String DFileName_18;
              MR_Word DFileOpenResult_20;
              MR_String _DFileNameProposed_19;

              libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 131, &Verbose_17);
              parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_9, (MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_read_d_file_for_trans_opt_deps\'/6", (MR_Word) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_2[1])), ModuleName_10, &DFileName_18, &_DFileNameProposed_19);
              switch (Verbose_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "% Reading auto-dependency file \140");
                    mercury__io__write_string_4_p_0(ProgressStream_8, DFileName_18);
                    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\'...");
                  }
                  break;
              }
              libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_17);
              mercury__io__open_input_4_p_0(DFileName_18, &DFileOpenResult_20);
              if (((MR_tag((MR_Word) DFileOpenResult_20)) == (MR_Integer) 1))
              {
                MR_Word IOError_27 = ((MR_Word) ((MR_hl_field(1, DFileOpenResult_20, 0))));

                libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_17, (MR_String) " failed.\n");
                libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_17);
                libs__file_util__report_cannot_open_file_for_input_6_p_0(ProgressStream_8, Globals_9, DFileName_18, IOError_27);
                *MaybeDFileTransOptDeps_12 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word DFileInStream_21 = ((MR_Word) ((MR_hl_field(0, DFileOpenResult_20, 0))));
                MR_String TransOptDateFileName_22;
                MR_String SearchPattern_24;
                MR_Word FindResult_25;
                MR_String _TransOptDateFileNameProposed_23;

                parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_9, (MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_read_d_file_for_trans_opt_deps\'/6", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[9])), ModuleName_10, &TransOptDateFileName_22, &_TransOptDateFileNameProposed_23);
                SearchPattern_24 = mercury__string__f_43_43_2_f_0(TransOptDateFileName_22, (MR_String) " :");
                top_level__mercury_compile_make_hlds__read_d_file_find_start_5_p_0(DFileInStream_21, SearchPattern_24, &FindResult_25);
                switch (FindResult_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *MaybeDFileTransOptDeps_12 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word TransOptDeps_26;

                      top_level__mercury_compile_make_hlds__read_d_file_get_modules_4_p_0(DFileInStream_21, &TransOptDeps_26);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeDFileTransOptDeps_12 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (TransOptDeps_26));
                      }
                    }
                    break;
                }
                mercury__io__close_input_3_p_0(DFileInStream_21);
                libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_17, (MR_String) " done.\n");
              }
            }
            break;
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__read_d_file_get_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__read_d_file_get_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__read_d_file_get_modules_4_p_0(
  MR_Word InStream_5,
  MR_Word * TransOptDeps_6)
{
  MR_bool succeeded;
  MR_Word Result_8;
  MR_String FileName_13;
  MR_Word TypeCtorInfo_26_26;
  MR_Word CharList0_9;
  MR_Word CharList1_10;
  MR_Word CharList_11;
  MR_String FileName0_12;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_String Var_23;

  mercury__io__read_line_4_p_0(InStream_5, &Result_8);
  succeeded = ((MR_tag((MR_Word) Result_8)) == (MR_Integer) 1);
  if (succeeded)
  {
    CharList0_9 = ((MR_Word) ((MR_hl_field(1, Result_8, 0))));
    Var_21 = (MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_4[0]);
    TypeCtorInfo_26_26 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
    mercury__list__drop_while_3_p_0(TypeCtorInfo_26_26, Var_21, CharList0_9, &CharList1_10);
    Var_22 = (MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_4[1]);
    mercury__list__take_while_not_3_p_0(TypeCtorInfo_26_26, Var_22, CharList1_10, &CharList_11);
    mercury__string__from_char_list_2_p_0(CharList_11, &FileName0_12);
    Var_23 = (MR_String) ".trans_opt";
    succeeded = mercury__string__remove_suffix_3_p_0(FileName0_12, Var_23, &FileName_13);
  }
  if (succeeded)
  {
    MR_String ModuleFileName_15;
    MR_Word Module_16;
    MR_Word TransOptDeps0_17;
    MR_String BaseFileName_14;

    succeeded = mercury__string__append_3_p_1((MR_String) "Mercury/trans_opts/", &BaseFileName_14, FileName_13);
    if (succeeded)
      ModuleFileName_15 = BaseFileName_14;
    else
      ModuleFileName_15 = FileName_13;
    parse_tree__file_names__file_name_to_module_name_2_p_0(ModuleFileName_15, &Module_16);
    top_level__mercury_compile_make_hlds__read_d_file_get_modules_4_p_0(InStream_5, &TransOptDeps0_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TransOptDeps_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Module_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (TransOptDeps0_17));
    }
  }
  else
    *TransOptDeps_6 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__read_d_file_find_start_5_p_0(
  MR_Word InStream_6,
  MR_String SearchPattern_7,
  MR_Word * Success_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(InStream_6, &Result_10);
    switch (MR_tag((MR_Word) Result_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        *Success_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_11 = ((MR_String) ((MR_hl_field(1, Result_10, 0))));

          succeeded = mercury__string__prefix_2_p_0(Line_11, SearchPattern_7);
          if (succeeded)
            *Success_8 = (MR_Integer) 1;
          else
          {
            // direct tailcall eliminated
            ;
            continue;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_grab_plain_and_trans_opt_files_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word OpModeAugment_19,
  MR_Word Verbose_20,
  MR_Word MaybeDFileTransOptDeps_21,
  MR_Word * BlockingSpecs_22,
  MR_Word STATE_VARIABLE_Baggage_0_47,
  MR_Word * STATE_VARIABLE_Baggage_48,
  MR_Word STATE_VARIABLE_AugCompUnit_0_49,
  MR_Word * STATE_VARIABLE_AugCompUnit_50,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_51,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_52,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_53,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_54)
{
  MR_bool succeeded;
  MR_Word IntermodOpt_28;
  MR_Word UseOptInt_29;
  MR_Word TransOpt_30;
  MR_Word IntermodAnalysis_31;
  MR_Word PlainOptBlockingSpecs_32;
  MR_Word TransOptBlockingSpecs_34;
  MR_Word STATE_VARIABLE_Baggage_1_64;
  MR_Word STATE_VARIABLE_AugCompUnit_1_65;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_1_66;

  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 430, &IntermodOpt_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 431, &UseOptInt_29);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 433, &TransOpt_30);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 437, &IntermodAnalysis_31);
  succeeded = (UseOptInt_29 == (MR_Integer) 1);
  if (!(succeeded))
  {
    succeeded = (IntermodOpt_28 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (IntermodAnalysis_31 == (MR_Integer) 1);
  }
  if (succeeded)
    succeeded = (OpModeAugment_19 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_20, (MR_String) "% Reading .opt files...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_17, Verbose_20);
    parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_11_p_0(ProgressStream_17, Globals_18, &PlainOptBlockingSpecs_32, STATE_VARIABLE_Baggage_0_47, &STATE_VARIABLE_Baggage_1_64, STATE_VARIABLE_AugCompUnit_0_49, &STATE_VARIABLE_AugCompUnit_1_65, STATE_VARIABLE_HaveReadModuleMaps_0_51, &STATE_VARIABLE_HaveReadModuleMaps_1_66);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_20, (MR_String) "% done.\n");
  }
  else
  {
    PlainOptBlockingSpecs_32 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_HaveReadModuleMaps_1_66 = STATE_VARIABLE_HaveReadModuleMaps_0_51;
    STATE_VARIABLE_AugCompUnit_1_65 = STATE_VARIABLE_AugCompUnit_0_49;
    STATE_VARIABLE_Baggage_1_64 = STATE_VARIABLE_Baggage_0_47;
  }
  switch (MR_tag((MR_Word) OpModeAugment_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            TransOptBlockingSpecs_34 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Baggage_48 = STATE_VARIABLE_Baggage_1_64;
            *STATE_VARIABLE_AugCompUnit_50 = STATE_VARIABLE_AugCompUnit_1_65;
            *STATE_VARIABLE_HaveReadModuleMaps_52 = STATE_VARIABLE_HaveReadModuleMaps_1_66;
            *STATE_VARIABLE_MaybeWrittenSpecs_54 = STATE_VARIABLE_MaybeWrittenSpecs_0_53;
          }
          break;
        case (MR_Integer) 1:
          if ((MaybeDFileTransOptDeps_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ParseTreeModuleSrc_35;
            MR_Word ModuleName_36;
            MR_Word WarnNoTransOptDeps_37;

            TransOptBlockingSpecs_34 = (MR_Word) ((MR_Unsigned) 0U);
            ParseTreeModuleSrc_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_65, 0))));
            ModuleName_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_35, 0))));
            libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 209, &WarnNoTransOptDeps_37);
            switch (WarnNoTransOptDeps_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_MaybeWrittenSpecs_54 = STATE_VARIABLE_MaybeWrittenSpecs_0_53;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Pieces_38;
                  MR_Word Spec_40;
                  MR_Word Var_77;
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_96;

                  {
                    Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(3, Var_81, 1) = ((MR_Box) (ModuleName_36));
                  }
                  {
                    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
                    MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[8])));
                  }
                  {
                    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[2])));
                    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
                  }
                  {
                    Pieces_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_38, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[1])));
                    MR_hl_field(1, Pieces_38, 1) = ((MR_Box) (Var_77));
                  }
                  {
                    Spec_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_40, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_grab_plain_and_trans_opt_files\'/16"));
                    MR_hl_field(1, Spec_40, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_2[0])));
                    MR_hl_field(1, Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                    MR_hl_field(1, Spec_40, 3) = ((MR_Box) (Pieces_38));
                  }
                  {
                    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_96, 0) = ((MR_Box) (Spec_40));
                    MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  parse_tree__error_util__add_to_be_written_specs_3_p_0(Var_96, STATE_VARIABLE_MaybeWrittenSpecs_0_53, STATE_VARIABLE_MaybeWrittenSpecs_54);
                }
                break;
            }
            *STATE_VARIABLE_Baggage_48 = STATE_VARIABLE_Baggage_1_64;
            *STATE_VARIABLE_AugCompUnit_50 = STATE_VARIABLE_AugCompUnit_1_65;
            *STATE_VARIABLE_HaveReadModuleMaps_52 = STATE_VARIABLE_HaveReadModuleMaps_1_66;
          }
          else
          {
            MR_Word DFileTransOptDeps_33 = ((MR_Word) ((MR_hl_field(1, MaybeDFileTransOptDeps_21, 0))));

            parse_tree__grab_modules__grab_trans_opt_files_12_p_0(ProgressStream_17, Globals_18, DFileTransOptDeps_33, &TransOptBlockingSpecs_34, STATE_VARIABLE_Baggage_1_64, STATE_VARIABLE_Baggage_48, STATE_VARIABLE_AugCompUnit_1_65, STATE_VARIABLE_AugCompUnit_50, STATE_VARIABLE_HaveReadModuleMaps_1_66, STATE_VARIABLE_HaveReadModuleMaps_52);
            *STATE_VARIABLE_MaybeWrittenSpecs_54 = STATE_VARIABLE_MaybeWrittenSpecs_0_53;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            switch (TransOpt_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  TransOptBlockingSpecs_34 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_Baggage_48 = STATE_VARIABLE_Baggage_1_64;
                  *STATE_VARIABLE_AugCompUnit_50 = STATE_VARIABLE_AugCompUnit_1_65;
                  *STATE_VARIABLE_HaveReadModuleMaps_52 = STATE_VARIABLE_HaveReadModuleMaps_1_66;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Ancestors_42;
                  MR_Word Deps0_43;
                  MR_Word Deps_44;
                  MR_Word TransOptFilesSet_45;
                  MR_Word TransOptFiles_46;
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_Word Var_101;
                  MR_Word ParseTreeModuleSrc_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_65, 0))));
                  MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_107, 0))));

                  Ancestors_42 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_108);
                  Var_99 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_107, 3))));
                  Deps0_43 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_99);
                  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_108)), Deps0_43, &Deps_44);
                  {
                    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_101, 0) = ((MR_Box) (Deps_44));
                    MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_100, 0) = ((MR_Box) (Ancestors_42));
                    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
                  }
                  TransOptFilesSet_45 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_100);
                  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptFilesSet_45, &TransOptFiles_46);
                  parse_tree__grab_modules__grab_trans_opt_files_12_p_0(ProgressStream_17, Globals_18, TransOptFiles_46, &TransOptBlockingSpecs_34, STATE_VARIABLE_Baggage_1_64, STATE_VARIABLE_Baggage_48, STATE_VARIABLE_AugCompUnit_1_65, STATE_VARIABLE_AugCompUnit_50, STATE_VARIABLE_HaveReadModuleMaps_1_66, STATE_VARIABLE_HaveReadModuleMaps_52);
                }
                break;
            }
            *STATE_VARIABLE_MaybeWrittenSpecs_54 = STATE_VARIABLE_MaybeWrittenSpecs_0_53;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        switch (TransOpt_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              TransOptBlockingSpecs_34 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Baggage_48 = STATE_VARIABLE_Baggage_1_64;
              *STATE_VARIABLE_AugCompUnit_50 = STATE_VARIABLE_AugCompUnit_1_65;
              *STATE_VARIABLE_HaveReadModuleMaps_52 = STATE_VARIABLE_HaveReadModuleMaps_1_66;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Ancestors_42;
              MR_Word Deps0_43;
              MR_Word Deps_44;
              MR_Word TransOptFilesSet_45;
              MR_Word TransOptFiles_46;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_101;
              MR_Word ParseTreeModuleSrc_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_1_65, 0))));
              MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_107, 0))));

              Ancestors_42 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_108);
              Var_99 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_107, 3))));
              Deps0_43 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_99);
              mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_108)), Deps0_43, &Deps_44);
              {
                Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_101, 0) = ((MR_Box) (Deps_44));
                MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_100, 0) = ((MR_Box) (Ancestors_42));
                MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
              }
              TransOptFilesSet_45 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_100);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptFilesSet_45, &TransOptFiles_46);
              parse_tree__grab_modules__grab_trans_opt_files_12_p_0(ProgressStream_17, Globals_18, TransOptFiles_46, &TransOptBlockingSpecs_34, STATE_VARIABLE_Baggage_1_64, STATE_VARIABLE_Baggage_48, STATE_VARIABLE_AugCompUnit_1_65, STATE_VARIABLE_AugCompUnit_50, STATE_VARIABLE_HaveReadModuleMaps_1_66, STATE_VARIABLE_HaveReadModuleMaps_52);
            }
            break;
        }
        *STATE_VARIABLE_MaybeWrittenSpecs_54 = STATE_VARIABLE_MaybeWrittenSpecs_0_53;
      }
      break;
  }
  *BlockingSpecs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), PlainOptBlockingSpecs_32, TransOptBlockingSpecs_34);
}

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds____Unify____make_hlds_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = top_level__mercury_compile_make_hlds____Unify____make_hlds_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_make_hlds____Compare____make_hlds_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  top_level__mercury_compile_make_hlds____Compare____make_hlds_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds____Unify____maybe_write_d_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = top_level__mercury_compile_make_hlds____Unify____maybe_write_d_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_make_hlds____Compare____maybe_write_d_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  top_level__mercury_compile_make_hlds____Compare____maybe_write_d_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__top_level__mercury_compile_make_hlds__init(void)
{
}

void mercury__top_level__mercury_compile_make_hlds__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__type_ctor_info_make_hlds_result_0);
  MR_register_type_ctor_info(&top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__type_ctor_info_maybe_write_d_file_0);
}

void mercury__top_level__mercury_compile_make_hlds__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_make_hlds__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module top_level.mercury_compile_make_hlds.
