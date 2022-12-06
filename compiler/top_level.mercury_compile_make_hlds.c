/*
** Automatically generated from `mercury_compile_make_hlds.m'
** by the Mercury compiler,
** version rotd-2022-12-06
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
#include "version_hash_table.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.make_info.mih"
#include "make.module_dep_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.grab_modules.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_deps_graph.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_deps_file.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.qual_info.mih"



struct top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0_s {
  MR_Word * top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__LambdaHeadVar__1_59;
  MR_Cont top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__cont;
  void * top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__LibModuleNameStr_18;
};

struct top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0_s {
  MR_Box * top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__cont;
  void * top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__cont_env_ptr;
  MR_Word top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__conv0_LambdaHeadVar__1_59;
};


static const MR_EnumFunctorDesc top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_functor_desc_maybe_write_d_file_0_0;

static const MR_EnumFunctorDesc top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_functor_desc_maybe_write_d_file_0_1;

static const MR_EnumFunctorDescPtr top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_ordinal_ordered_maybe_write_d_file_0[2];

static const MR_EnumFunctorDescPtr top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__enum_name_ordered_maybe_write_d_file_0[2];

static const MR_Integer top_level__mercury_compile_make_hlds__top_level__mercury_compile_make_hlds__functor_number_map_maybe_write_d_file_0[2];

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__285__1_2_p_0(
  MR_Word ModuleName_9,
  MR_Word LambdaHeadVar__1_60);

static void MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0(
  MR_Word * LambdaHeadVar__1_59,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definition_extents_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word HLDS_12);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definition_line_counts_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word HLDS_12);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definitions_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word HLDS_12);

static void MR_CALL 
top_level__mercury_compile_make_hlds__make_hlds_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word ErrorStream_21,
  MR_Word Globals_22,
  MR_Word AugCompUnit_23,
  MR_Word EventSet_24,
  MR_Word MQInfo_25,
  MR_Word TypeEqvMap_26,
  MR_Word UsedModules_27,
  MR_Word Verbose_28,
  MR_Word Stats_29,
  MR_Word * STATE_VARIABLE_HLDS_43,
  MR_Word * QualInfo_31,
  MR_Word * FoundInvalidType_32,
  MR_Word * FoundInvalidInstOrMode_33,
  MR_Word * FoundSemanticError_34,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_grab_plain_and_trans_opt_files_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeAugment_19,
  MR_Word Verbose_20,
  MR_Word MaybeTransOptDeps_21,
  MR_Word * Error_22,
  MR_Word STATE_VARIABLE_Baggage_0_45,
  MR_Word * STATE_VARIABLE_Baggage_46,
  MR_Word STATE_VARIABLE_AugCompUnit_0_47,
  MR_Word * STATE_VARIABLE_AugCompUnit_48,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_49,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_50);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_read_d_file_for_trans_opt_deps_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word * MaybeTransOptDeps_12);

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__read_dependency_file_get_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__read_dependency_file_get_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_make_hlds__read_dependency_file_get_modules_4_p_0(
  MR_Word InStream_5,
  MR_Word * TransOptDeps_6);

static void MR_CALL 
top_level__mercury_compile_make_hlds__read_dependency_file_find_start_5_p_0(
  MR_Word InStream_6,
  MR_String SearchPattern_7,
  MR_Word * Success_8);

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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_mention_undoc_3_p_0(
  MR_Word DocUndoc_4,
  MR_Word Pieces0_5,
  MR_Word * Pieces_6);

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds____Unify____maybe_write_d_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_make_hlds____Compare____maybe_write_d_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_1[56][2];

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_2[6][1];

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_3[2][4];

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_4[3][3];

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_5[1][5];




static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_1[56][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: this module,"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but will get the other."))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[1])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a third module will want to import one"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and you will likely have problems where"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A third module cannot import both,"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "as a module in the Mercury standard library."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has the same name"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: the name of this module,"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "contains the name of a module,"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and vice versa."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[1])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "will be taken as a reference to this module,"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the standard library module"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a reference intended to refer to"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declarations,"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "especially in the absence of needed"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "you will likely have problems where,"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to this module, which means that"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "will therefore be a (not fully qualified) reference"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A reference to the standard library in a third module"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the Mercury standard library."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and is not publically documented."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[1])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is part of the Mercury implementation,"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The Mercury standard library module in question"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[1])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[53])))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_2[6][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".d"))))
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt_date"))))
  },
  /* row   2 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".hlds_dump"))))
  },
  /* row   3 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".defns"))))
  },
  /* row   4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".defn_line_counts"))))
  },
  /* row   5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".defn_extents"))))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_3[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_make_hlds_scalar_common_4[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&top_level__mercury_compile_make_hlds_scalar_common_3[0])),
    ((MR_Box) (top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&top_level__mercury_compile_make_hlds_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_make_hlds__read_dependency_file_get_modules_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_make_hlds_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_make_hlds__read_dependency_file_get_modules_4_p_0_2)),
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
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__285__1_2_p_0(
  MR_Word ModuleName_9,
  MR_Word LambdaHeadVar__1_60)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name__partial_sym_name_is_part_of_full_2_p_0(LambdaHeadVar__1_60, ModuleName_9);
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0_s * env_ptr = (struct top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__LambdaHeadVar__1_59) = mdbcomp__sym_name__string_to_sym_name_1_f_0((env_ptr)->top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__LibModuleNameStr_18);
  ((env_ptr)->top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__cont)((env_ptr)->top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0(
  MR_Word * LambdaHeadVar__1_59,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0_s env;

  (env).top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__LambdaHeadVar__1_59 = LambdaHeadVar__1_59;
  (env).top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__cont = cont;
  (env).top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word _DocUndoc_19;

    mercury__library__stdlib_module_doc_undoc_2_p_1(&(env).top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_env_0__LibModuleNameStr_18, &_DocUndoc_19, top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0_1, &env);
  }
}

void MR_CALL 
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

MR_bool MR_CALL 
top_level__mercury_compile_make_hlds____Unify____maybe_write_d_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
top_level__mercury_compile_make_hlds__make_hlds_pass_21_p_0(
  MR_Word ProgressStream_22,
  MR_Word ErrorStream_23,
  MR_Word Globals_24,
  MR_Word OpModeAugment_25,
  MR_Word WriteDFile0_26,
  MR_Word Baggage0_27,
  MR_Word AugCompUnit0_28,
  MR_Word * HLDS0_29,
  MR_Word * QualInfo_30,
  MR_Word * MaybeTimestampMap_31,
  MR_Word * UndefTypes_32,
  MR_Word * UndefModes_33,
  MR_Word * PreHLDSErrors_34,
  MR_Word STATE_VARIABLE_DumpInfo_0_81,
  MR_Word * STATE_VARIABLE_DumpInfo_82,
  MR_Word STATE_VARIABLE_Specs_0_83,
  MR_Word * STATE_VARIABLE_Specs_84,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_85,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_86)
{
  MR_bool succeeded;
  MR_Word Stats_39;
  MR_Word Verbose_40;
  MR_Word InvokedByMMCMake_41;
  MR_Word WriteDFile_42;
  MR_Word ParseTreeModuleSrc_43;
  MR_Word ModuleName_44;
  MR_Word MaybeTransOptDeps_45;
  MR_Word IntermodError_46;
  MR_Word Baggage1_47;
  MR_Word AugCompUnit1_48;
  MR_String EventSetFileName_49;
  MR_String EventSetName_50;
  MR_Word EventSpecMap1_51;
  MR_Word EventSetErrors_52;
  MR_Word AugCompUnit2_56;
  MR_Word EventSpecMap2_57;
  MR_Word MQInfo0_58;
  MR_Word MQUndefTypes_59;
  MR_Word MQUndefInsts_60;
  MR_Word MQUndefModes_61;
  MR_Word MQUndefTypeClasses_62;
  MR_Word QualifySpecs_63;
  MR_Word RecompInfo0_64;
  MR_Word AugCompUnit_65;
  MR_Word EventSpecMap_66;
  MR_Word TypeEqvMap_67;
  MR_Word UsedModules_68;
  MR_Word RecompInfo_69;
  MR_Word ExpandSpecs_70;
  MR_Word ExpandErrors_71;
  MR_Word MQInfo_72;
  MR_Word EventSet_73;
  MR_Word MakeHLDSFoundInvalidType_74;
  MR_Word MakeHLDSFoundInvalidInstOrMode_75;
  MR_Word FoundSemanticError_76;
  MR_Word STATE_VARIABLE_Specs_92_92;
  MR_Word STATE_VARIABLE_Specs_96_96;
  MR_Word Var_97;
  MR_Word STATE_VARIABLE_Specs_101_101;
  MR_Word STATE_VARIABLE_Specs_102_102;
  MR_Word STATE_VARIABLE_Specs_108_108;
  MR_Word STATE_VARIABLE_Specs_109_109;
  MR_Word STATE_VARIABLE_Specs_117_117;
  MR_Word STATE_VARIABLE_Specs_118_118;
  MR_Word Var_185;

  libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 82, &Stats_39);
  libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 72, &Verbose_40);
  libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 665, &InvokedByMMCMake_41);
  ParseTreeModuleSrc_43 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_28, (MR_Integer) 0))));
  top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0(Globals_24, ParseTreeModuleSrc_43, STATE_VARIABLE_Specs_0_83, &STATE_VARIABLE_Specs_92_92);
  ModuleName_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_43, (MR_Integer) 0))));
  succeeded = (InvokedByMMCMake_41 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (OpModeAugment_25 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    WriteDFile_42 = (MR_Integer) 0;
    MaybeTransOptDeps_45 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    WriteDFile_42 = WriteDFile0_26;
    switch (WriteDFile_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeTransOptDeps_45 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_make_hlds__maybe_read_d_file_for_trans_opt_deps_7_p_0(ProgressStream_22, ErrorStream_23, Globals_24, ModuleName_44, &MaybeTransOptDeps_45);
        break;
    }
  }
  top_level__mercury_compile_make_hlds__maybe_grab_plain_and_trans_opt_files_15_p_0(ProgressStream_22, ErrorStream_23, Globals_24, OpModeAugment_25, Verbose_40, MaybeTransOptDeps_45, &IntermodError_46, Baggage0_27, &Baggage1_47, AugCompUnit0_28, &AugCompUnit1_48, STATE_VARIABLE_HaveReadModuleMaps_0_85, STATE_VARIABLE_HaveReadModuleMaps_86);
  *MaybeTimestampMap_31 = ((MR_Word) ((MR_hl_field(0, Baggage1_47, (MR_Integer) 4))));
  Var_185 = ((MR_Word) ((MR_hl_field(0, Baggage1_47, (MR_Integer) 6))));
  Var_97 = parse_tree__parse_error__get_read_module_specs_1_f_0(Var_185);
  STATE_VARIABLE_Specs_96_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_97, STATE_VARIABLE_Specs_92_92);
  libs__globals__lookup_string_option_3_p_0(Globals_24, (MR_Integer) 226, &EventSetFileName_49);
  succeeded = (strcmp(EventSetFileName_49, (MR_String) "") == 0);
  if (succeeded)
  {
    EventSetName_50 = (MR_String) "";
    EventSpecMap1_51 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
    EventSetErrors_52 = (MR_Integer) 0;
    STATE_VARIABLE_Specs_101_101 = STATE_VARIABLE_Specs_96_96;
  }
  else
  {
    MR_String EventSetName0_53;
    MR_Word EventSpecMap0_54;
    MR_Word EventSetSpecs_55;

    parse_tree__prog_event__read_event_set_6_p_0(EventSetFileName_49, &EventSetName0_53, &EventSpecMap0_54, &EventSetSpecs_55);
    STATE_VARIABLE_Specs_101_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EventSetSpecs_55, STATE_VARIABLE_Specs_96_96);
    EventSetErrors_52 = parse_tree__error_util__contains_errors_2_f_0(Globals_24, EventSetSpecs_55);
    switch (EventSetErrors_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          EventSetName_50 = EventSetName0_53;
          EventSpecMap1_51 = EventSpecMap0_54;
        }
        break;
      case (MR_Integer) 1:
        {
          EventSetName_50 = (MR_String) "";
          EventSpecMap1_51 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
        }
        break;
    }
  }
  parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ErrorStream_23, Verbose_40, Globals_24, STATE_VARIABLE_Specs_101_101, &STATE_VARIABLE_Specs_102_102);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_22, Verbose_40, (MR_String) "% Module qualifying items...\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_22, Verbose_40);
  parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_24, AugCompUnit1_48, &AugCompUnit2_56, EventSpecMap1_51, &EventSpecMap2_57, EventSetFileName_49, &MQInfo0_58, &MQUndefTypes_59, &MQUndefInsts_60, &MQUndefModes_61, &MQUndefTypeClasses_62, (MR_Word) ((MR_Unsigned) 0U), &QualifySpecs_63);
  STATE_VARIABLE_Specs_108_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), QualifySpecs_63, STATE_VARIABLE_Specs_102_102);
  parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ErrorStream_23, Verbose_40, Globals_24, STATE_VARIABLE_Specs_108_108, &STATE_VARIABLE_Specs_109_109);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_22, Verbose_40, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_22, Stats_39);
  parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(MQInfo0_58, &RecompInfo0_64);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_22, Verbose_40, (MR_String) "% Expanding equivalence types and insts...\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_22, Verbose_40);
  parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(AugCompUnit2_56, &AugCompUnit_65, EventSpecMap2_57, &EventSpecMap_66, &TypeEqvMap_67, &UsedModules_68, RecompInfo0_64, &RecompInfo_69, &ExpandSpecs_70);
  ExpandErrors_71 = parse_tree__error_util__contains_errors_2_f_0(Globals_24, ExpandSpecs_70);
  STATE_VARIABLE_Specs_117_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ExpandSpecs_70, STATE_VARIABLE_Specs_109_109);
  parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ErrorStream_23, Verbose_40, Globals_24, STATE_VARIABLE_Specs_117_117, &STATE_VARIABLE_Specs_118_118);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_22, Verbose_40, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_22, Stats_39);
  parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(RecompInfo_69, MQInfo0_58, &MQInfo_72);
  {
    EventSet_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EventSet_73, 0) = ((MR_Box) (EventSetName_50));
    MR_hl_field(0, EventSet_73, 1) = ((MR_Box) (EventSpecMap_66));
  }
  top_level__mercury_compile_make_hlds__make_hlds_19_p_0(ProgressStream_22, ErrorStream_23, Globals_24, AugCompUnit_65, EventSet_73, MQInfo_72, TypeEqvMap_67, UsedModules_68, Verbose_40, Stats_39, HLDS0_29, QualInfo_30, &MakeHLDSFoundInvalidType_74, &MakeHLDSFoundInvalidInstOrMode_75, &FoundSemanticError_76, STATE_VARIABLE_Specs_118_118, STATE_VARIABLE_Specs_84);
  mercury__bool__or_3_p_0(FoundSemanticError_76, IntermodError_46, PreHLDSErrors_34);
  top_level__mercury_compile_make_hlds__maybe_write_definitions_7_p_0(ProgressStream_22, ErrorStream_23, Verbose_40, Stats_39, *HLDS0_29);
  top_level__mercury_compile_make_hlds__maybe_write_definition_line_counts_7_p_0(ProgressStream_22, ErrorStream_23, Verbose_40, Stats_39, *HLDS0_29);
  top_level__mercury_compile_make_hlds__maybe_write_definition_extents_7_p_0(ProgressStream_22, ErrorStream_23, Verbose_40, Stats_39, *HLDS0_29);
  succeeded = (MQUndefTypes_59 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (MQUndefTypeClasses_62 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (EventSetErrors_52 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (ExpandErrors_71 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (MakeHLDSFoundInvalidType_74 == (MR_Integer) 0);
      }
    }
  }
  if (succeeded)
    *UndefTypes_32 = (MR_Integer) 0;
  else
    *UndefTypes_32 = (MR_Integer) 1;
  succeeded = (MQUndefInsts_60 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (MQUndefModes_61 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (MakeHLDSFoundInvalidInstOrMode_75 == (MR_Integer) 0);
  }
  if (succeeded)
    *UndefModes_33 = (MR_Integer) 0;
  else
    *UndefModes_33 = (MR_Integer) 1;
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_22, *HLDS0_29, (MR_Integer) 1, (MR_String) "initial", STATE_VARIABLE_DumpInfo_0_81, STATE_VARIABLE_DumpInfo_82);
  switch (WriteDFile_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word AllDeps_77;
        MR_Word BurdenedAugCompUnit0_78;
        MR_Word OutputMMCMakeDeps_79;

        hlds__hlds_module__module_info_get_all_deps_2_p_0(*HLDS0_29, &AllDeps_77);
        {
          BurdenedAugCompUnit0_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BurdenedAugCompUnit0_78, 0) = ((MR_Box) (Baggage0_27));
          MR_hl_field(0, BurdenedAugCompUnit0_78, 1) = ((MR_Box) (AugCompUnit0_28));
        }
        parse_tree__write_deps_file__write_dependency_file_7_p_0(Globals_24, BurdenedAugCompUnit0_78, (MR_Word) ((MR_Unsigned) 0U), AllDeps_77, MaybeTransOptDeps_45);
        libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 154, &OutputMMCMakeDeps_79);
        switch (OutputMMCMakeDeps_79) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word BurdenedModule0_80;

              {
                BurdenedModule0_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, BurdenedModule0_80, 0) = ((MR_Box) (Baggage0_27));
                MR_hl_field(0, BurdenedModule0_80, 1) = ((MR_Box) (ParseTreeModuleSrc_43));
              }
              make__module_dep_file__write_module_dep_file_4_p_0(Globals_24, BurdenedModule0_80);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definition_extents_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word HLDS_12)
{
  MR_Word Globals_14;
  MR_Word Extents_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_12, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 183, &Extents_15);
  switch (Extents_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_16;
        MR_String FileName_17;
        MR_Word Res_18;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_10, (MR_String) "% Writing definition extents...");
        hlds__hlds_module__module_info_get_name_2_p_0(HLDS_12, &ModuleName_16);
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_write_definition_extents\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_2[5])), ModuleName_16, &FileName_17);
        mercury__io__open_output_4_p_0(FileName_17, &Res_18);
        if (((MR_tag((MR_Word) Res_18)) == (MR_Integer) 1))
        {
          MR_Word IOError_20 = ((MR_Word) ((MR_hl_field(1, Res_18, (MR_Integer) 0))));
          MR_String ErrorMsg_21;
          MR_String Var_39;

          Var_39 = mercury__io__error_message_1_f_0(IOError_20);
          ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definition extents: ", Var_39);
          libs__file_util__report_error_4_p_0(ErrorStream_9, ErrorMsg_21);
        }
        else
        {
          MR_Word FileStream_19 = ((MR_Word) ((MR_hl_field(0, Res_18, (MR_Integer) 0))));

          hlds__hlds_defns__write_hlds_defn_extents_4_p_0(FileStream_19, HLDS_12);
          mercury__io__close_output_3_p_0(FileStream_19);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_10, (MR_String) " done.\n");
        }
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_11);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definition_line_counts_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word HLDS_12)
{
  MR_Word Globals_14;
  MR_Word LineCounts_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_12, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 182, &LineCounts_15);
  switch (LineCounts_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_16;
        MR_String FileName_17;
        MR_Word Res_18;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_10, (MR_String) "% Writing definition line counts...");
        hlds__hlds_module__module_info_get_name_2_p_0(HLDS_12, &ModuleName_16);
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_write_definition_line_counts\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_2[4])), ModuleName_16, &FileName_17);
        mercury__io__open_output_4_p_0(FileName_17, &Res_18);
        if (((MR_tag((MR_Word) Res_18)) == (MR_Integer) 1))
        {
          MR_Word IOError_20 = ((MR_Word) ((MR_hl_field(1, Res_18, (MR_Integer) 0))));
          MR_String ErrorMsg_21;
          MR_String Var_39;

          Var_39 = mercury__io__error_message_1_f_0(IOError_20);
          ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definition line counts: ", Var_39);
          libs__file_util__report_error_4_p_0(ErrorStream_9, ErrorMsg_21);
        }
        else
        {
          MR_Word FileStream_19 = ((MR_Word) ((MR_hl_field(0, Res_18, (MR_Integer) 0))));

          hlds__hlds_defns__write_hlds_defn_line_counts_4_p_0(FileStream_19, HLDS_12);
          mercury__io__close_output_3_p_0(FileStream_19);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_10, (MR_String) " done.\n");
        }
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_11);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_write_definitions_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word HLDS_12)
{
  MR_Word Globals_14;
  MR_Word ShowDefns_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_12, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 181, &ShowDefns_15);
  switch (ShowDefns_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_16;
        MR_String FileName_17;
        MR_Word Res_18;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_10, (MR_String) "% Writing definitions...");
        hlds__hlds_module__module_info_get_name_2_p_0(HLDS_12, &ModuleName_16);
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_write_definitions\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_2[3])), ModuleName_16, &FileName_17);
        mercury__io__open_output_4_p_0(FileName_17, &Res_18);
        if (((MR_tag((MR_Word) Res_18)) == (MR_Integer) 1))
        {
          MR_Word IOError_20 = ((MR_Word) ((MR_hl_field(1, Res_18, (MR_Integer) 0))));
          MR_String ErrorMsg_21;
          MR_String Var_39;

          Var_39 = mercury__io__error_message_1_f_0(IOError_20);
          ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definitions: ", Var_39);
          libs__file_util__report_error_4_p_0(ErrorStream_9, ErrorMsg_21);
        }
        else
        {
          MR_Word FileStream_19 = ((MR_Word) ((MR_hl_field(0, Res_18, (MR_Integer) 0))));

          hlds__hlds_defns__write_hlds_defns_4_p_0(FileStream_19, HLDS_12);
          mercury__io__close_output_3_p_0(FileStream_19);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_10, (MR_String) " done.\n");
        }
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_11);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__make_hlds_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word ErrorStream_21,
  MR_Word Globals_22,
  MR_Word AugCompUnit_23,
  MR_Word EventSet_24,
  MR_Word MQInfo_25,
  MR_Word TypeEqvMap_26,
  MR_Word UsedModules_27,
  MR_Word Verbose_28,
  MR_Word Stats_29,
  MR_Word * STATE_VARIABLE_HLDS_43,
  MR_Word * QualInfo_31,
  MR_Word * FoundInvalidType_32,
  MR_Word * FoundInvalidInstOrMode_33,
  MR_Word * FoundSemanticError_34,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_37;
  MR_Word ModuleName_38;
  MR_String DumpBaseFileName_39;
  MR_Word MakeSpecs_40;
  MR_Integer Status_41;
  MR_Word SpecsErrors_42;
  MR_Word STATE_VARIABLE_Specs_48_48;
  MR_Word STATE_VARIABLE_HLDS_58_58;
  MR_Word STATE_VARIABLE_Specs_59_59;

  parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ErrorStream_21, Verbose_28, Globals_22, STATE_VARIABLE_Specs_0_44, &STATE_VARIABLE_Specs_48_48);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_20, Verbose_28, (MR_String) "% Converting parse tree to hlds...\n");
  ParseTreeModuleSrc_37 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_23, (MR_Integer) 0))));
  ModuleName_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_37, (MR_Integer) 0))));
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_22, (MR_String) "predicate \140top_level.mercury_compile_make_hlds.make_hlds\'/19", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_2[2])), ModuleName_38, &DumpBaseFileName_39);
  hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0(AugCompUnit_23, Globals_22, DumpBaseFileName_39, MQInfo_25, TypeEqvMap_26, UsedModules_27, QualInfo_31, FoundInvalidType_32, FoundInvalidInstOrMode_33, &STATE_VARIABLE_HLDS_58_58, &MakeSpecs_40);
  STATE_VARIABLE_Specs_59_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), MakeSpecs_40, STATE_VARIABLE_Specs_48_48);
  hlds__hlds_module__module_info_set_event_set_3_p_0(EventSet_24, STATE_VARIABLE_HLDS_58_58, STATE_VARIABLE_HLDS_43);
  mercury__io__get_exit_status_3_p_0(&Status_41);
  SpecsErrors_42 = parse_tree__error_util__contains_errors_2_f_0(Globals_22, STATE_VARIABLE_Specs_59_59);
  succeeded = (Status_41 != (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (SpecsErrors_42 == (MR_Integer) 1);
  if (succeeded)
  {
    *FoundSemanticError_34 = (MR_Integer) 1;
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
    *FoundSemanticError_34 = (MR_Integer) 0;
  parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ErrorStream_21, Verbose_28, Globals_22, STATE_VARIABLE_Specs_59_59, STATE_VARIABLE_Specs_45);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_20, Verbose_28, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_20, Stats_29);
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_grab_plain_and_trans_opt_files_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeAugment_19,
  MR_Word Verbose_20,
  MR_Word MaybeTransOptDeps_21,
  MR_Word * Error_22,
  MR_Word STATE_VARIABLE_Baggage_0_45,
  MR_Word * STATE_VARIABLE_Baggage_46,
  MR_Word STATE_VARIABLE_AugCompUnit_0_47,
  MR_Word * STATE_VARIABLE_AugCompUnit_48,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_49,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_50)
{
  MR_bool succeeded;
  MR_Word IntermodOpt_27;
  MR_Word UseOptInt_28;
  MR_Word TransOpt_29;
  MR_Word IntermodAnalysis_30;
  MR_Word PlainOptError_31;
  MR_Word TransOptError_33;
  MR_Word STATE_VARIABLE_Baggage_60_60;
  MR_Word STATE_VARIABLE_AugCompUnit_61_61;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_62_62;

  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 497, &IntermodOpt_27);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 499, &UseOptInt_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 501, &TransOpt_29);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 502, &IntermodAnalysis_30);
  succeeded = (UseOptInt_28 == (MR_Integer) 1);
  if (!(succeeded))
  {
    succeeded = (IntermodOpt_27 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (IntermodAnalysis_30 == (MR_Integer) 1);
  }
  if (succeeded)
    succeeded = (OpModeAugment_19 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_16, Verbose_20, (MR_String) "% Reading .opt files...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_16, Verbose_20);
    parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0(ProgressStream_16, ErrorStream_17, Globals_18, &PlainOptError_31, STATE_VARIABLE_Baggage_0_45, &STATE_VARIABLE_Baggage_60_60, STATE_VARIABLE_AugCompUnit_0_47, &STATE_VARIABLE_AugCompUnit_61_61, STATE_VARIABLE_HaveReadModuleMaps_0_49, &STATE_VARIABLE_HaveReadModuleMaps_62_62);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_16, Verbose_20, (MR_String) "% Done.\n");
  }
  else
  {
    PlainOptError_31 = (MR_Integer) 0;
    STATE_VARIABLE_HaveReadModuleMaps_62_62 = STATE_VARIABLE_HaveReadModuleMaps_0_49;
    STATE_VARIABLE_AugCompUnit_61_61 = STATE_VARIABLE_AugCompUnit_0_47;
    STATE_VARIABLE_Baggage_60_60 = STATE_VARIABLE_Baggage_0_45;
  }
  switch (MR_tag((MR_Word) OpModeAugment_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            TransOptError_33 = (MR_Integer) 0;
            *STATE_VARIABLE_Baggage_46 = STATE_VARIABLE_Baggage_60_60;
            *STATE_VARIABLE_AugCompUnit_48 = STATE_VARIABLE_AugCompUnit_61_61;
            *STATE_VARIABLE_HaveReadModuleMaps_50 = STATE_VARIABLE_HaveReadModuleMaps_62_62;
          }
          break;
        case (MR_Integer) 1:
          if ((MaybeTransOptDeps_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ParseTreeModuleSrc_34;
            MR_Word ModuleName_35;
            MR_Word WarnNoTransOptDeps_36;

            TransOptError_33 = (MR_Integer) 0;
            ParseTreeModuleSrc_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_61_61, (MR_Integer) 0))));
            ModuleName_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_34, (MR_Integer) 0))));
            libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 19, &WarnNoTransOptDeps_36);
            switch (WarnNoTransOptDeps_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Pieces_37;
                  MR_Word Spec_38;
                  MR_Word Var_73;
                  MR_Word Var_76;
                  MR_Word Var_77;

                  {
                    Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(3, Var_77, 1) = ((MR_Box) (ModuleName_35));
                  }
                  {
                    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
                    MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[55])));
                  }
                  {
                    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[50])));
                    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
                  }
                  {
                    Pieces_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_37, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[49])));
                    MR_hl_field(1, Pieces_37, 1) = ((MR_Box) (Var_73));
                  }
                  {
                    Spec_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_grab_plain_and_trans_opt_files\'/15"));
                    MR_hl_field(2, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(2, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(2, Spec_38, 3) = ((MR_Box) (Pieces_37));
                  }
                  parse_tree__write_error_spec__write_error_spec_5_p_0(ErrorStream_17, Globals_18, Spec_38);
                }
                break;
            }
            *STATE_VARIABLE_Baggage_46 = STATE_VARIABLE_Baggage_60_60;
            *STATE_VARIABLE_AugCompUnit_48 = STATE_VARIABLE_AugCompUnit_61_61;
            *STATE_VARIABLE_HaveReadModuleMaps_50 = STATE_VARIABLE_HaveReadModuleMaps_62_62;
          }
          else
          {
            MR_Word TransOptDeps_32 = ((MR_Word) ((MR_hl_field(1, MaybeTransOptDeps_21, (MR_Integer) 0))));

            parse_tree__grab_modules__grab_trans_opt_files_12_p_0(ProgressStream_16, Globals_18, TransOptDeps_32, &TransOptError_33, STATE_VARIABLE_Baggage_60_60, STATE_VARIABLE_Baggage_46, STATE_VARIABLE_AugCompUnit_61_61, STATE_VARIABLE_AugCompUnit_48, STATE_VARIABLE_HaveReadModuleMaps_62_62, STATE_VARIABLE_HaveReadModuleMaps_50);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          switch (TransOpt_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                TransOptError_33 = (MR_Integer) 0;
                *STATE_VARIABLE_Baggage_46 = STATE_VARIABLE_Baggage_60_60;
                *STATE_VARIABLE_AugCompUnit_48 = STATE_VARIABLE_AugCompUnit_61_61;
                *STATE_VARIABLE_HaveReadModuleMaps_50 = STATE_VARIABLE_HaveReadModuleMaps_62_62;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Ancestors_40;
                MR_Word Deps0_41;
                MR_Word Deps_42;
                MR_Word TransOptFiles_43;
                MR_Word TransOptFilesList_44;
                MR_Word Var_93;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word ParseTreeModuleSrc_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_61_61, (MR_Integer) 0))));
                MR_Word ModuleName_102 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_101, (MR_Integer) 0))));

                Ancestors_40 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_102);
                Var_93 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_101, (MR_Integer) 9))));
                Deps0_41 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_93);
                mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_102)), Deps0_41, &Deps_42);
                {
                  Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_95, 0) = ((MR_Box) (Deps_42));
                  MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_94, 0) = ((MR_Box) (Ancestors_40));
                  MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
                }
                TransOptFiles_43 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_94);
                mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptFiles_43, &TransOptFilesList_44);
                parse_tree__grab_modules__grab_trans_opt_files_12_p_0(ProgressStream_16, Globals_18, TransOptFilesList_44, &TransOptError_33, STATE_VARIABLE_Baggage_60_60, STATE_VARIABLE_Baggage_46, STATE_VARIABLE_AugCompUnit_61_61, STATE_VARIABLE_AugCompUnit_48, STATE_VARIABLE_HaveReadModuleMaps_62_62, STATE_VARIABLE_HaveReadModuleMaps_50);
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (TransOpt_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            TransOptError_33 = (MR_Integer) 0;
            *STATE_VARIABLE_Baggage_46 = STATE_VARIABLE_Baggage_60_60;
            *STATE_VARIABLE_AugCompUnit_48 = STATE_VARIABLE_AugCompUnit_61_61;
            *STATE_VARIABLE_HaveReadModuleMaps_50 = STATE_VARIABLE_HaveReadModuleMaps_62_62;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ancestors_40;
            MR_Word Deps0_41;
            MR_Word Deps_42;
            MR_Word TransOptFiles_43;
            MR_Word TransOptFilesList_44;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word ParseTreeModuleSrc_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_61_61, (MR_Integer) 0))));
            MR_Word ModuleName_102 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_101, (MR_Integer) 0))));

            Ancestors_40 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_102);
            Var_93 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_101, (MR_Integer) 9))));
            Deps0_41 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_93);
            mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_102)), Deps0_41, &Deps_42);
            {
              Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_95, 0) = ((MR_Box) (Deps_42));
              MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_94, 0) = ((MR_Box) (Ancestors_40));
              MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
            }
            TransOptFiles_43 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_94);
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptFiles_43, &TransOptFilesList_44);
            parse_tree__grab_modules__grab_trans_opt_files_12_p_0(ProgressStream_16, Globals_18, TransOptFilesList_44, &TransOptError_33, STATE_VARIABLE_Baggage_60_60, STATE_VARIABLE_Baggage_46, STATE_VARIABLE_AugCompUnit_61_61, STATE_VARIABLE_AugCompUnit_48, STATE_VARIABLE_HaveReadModuleMaps_62_62, STATE_VARIABLE_HaveReadModuleMaps_50);
          }
          break;
      }
      break;
  }
  succeeded = (PlainOptError_31 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (TransOptError_33 == (MR_Integer) 0);
  if (succeeded)
    *Error_22 = (MR_Integer) 0;
  else
    *Error_22 = (MR_Integer) 1;
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_read_d_file_for_trans_opt_deps_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word * MaybeTransOptDeps_12)
{
  MR_Word TransOpt_14;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 501, &TransOpt_14);
  switch (TransOpt_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeTransOptDeps_12 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Verbose_15;
        MR_String DependencyFileName_16;
        MR_Word DepFileOpenResult_17;

        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 72, &Verbose_15);
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_read_d_file_for_trans_opt_deps\'/7", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_2[0])), ModuleName_11, &DependencyFileName_16);
        switch (Verbose_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "% Reading auto-dependency file \140");
              mercury__io__write_string_4_p_0(ProgressStream_8, DependencyFileName_16);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\'...");
            }
            break;
        }
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_15);
        mercury__io__open_input_4_p_0(DependencyFileName_16, &DepFileOpenResult_17);
        if (((MR_tag((MR_Word) DepFileOpenResult_17)) == (MR_Integer) 1))
        {
          MR_Word IOError_23 = ((MR_Word) ((MR_hl_field(1, DepFileOpenResult_17, (MR_Integer) 0))));
          MR_String IOErrorMessage_24;
          MR_String Message_25;
          MR_String Var_69;
          MR_String Var_70;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_15, (MR_String) " failed.\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_15);
          mercury__io__error_message_2_p_0(IOError_23, &IOErrorMessage_24);
          Var_69 = mercury__string__f_43_43_2_f_0((MR_String) " for input: ", IOErrorMessage_24);
          Var_70 = mercury__string__f_43_43_2_f_0(DependencyFileName_16, Var_69);
          Message_25 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_70);
          libs__file_util__report_error_4_p_0(ErrorStream_9, Message_25);
          *MaybeTransOptDeps_12 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word DepFileInStream_18 = ((MR_Word) ((MR_hl_field(0, DepFileOpenResult_17, (MR_Integer) 0))));
          MR_String TransOptDateFileName_19;
          MR_String SearchPattern_20;
          MR_Word FindResult_21;

          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_read_d_file_for_trans_opt_deps\'/7", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_2[1])), ModuleName_11, &TransOptDateFileName_19);
          SearchPattern_20 = mercury__string__f_43_43_2_f_0(TransOptDateFileName_19, (MR_String) " :");
          top_level__mercury_compile_make_hlds__read_dependency_file_find_start_5_p_0(DepFileInStream_18, SearchPattern_20, &FindResult_21);
          switch (FindResult_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *MaybeTransOptDeps_12 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word TransOptDeps_22;

                top_level__mercury_compile_make_hlds__read_dependency_file_get_modules_4_p_0(DepFileInStream_18, &TransOptDeps_22);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeTransOptDeps_12 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (TransOptDeps_22));
                }
              }
              break;
          }
          mercury__io__close_input_3_p_0(DepFileInStream_18);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_15, (MR_String) " done.\n");
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__read_dependency_file_get_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__read_dependency_file_get_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__read_dependency_file_get_modules_4_p_0(
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
    CharList0_9 = ((MR_Word) ((MR_hl_field(1, Result_8, (MR_Integer) 0))));
    Var_21 = (MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_4[1]);
    TypeCtorInfo_26_26 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
    mercury__list__drop_while_3_p_0(TypeCtorInfo_26_26, Var_21, CharList0_9, &CharList1_10);
    Var_22 = (MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_4[2]);
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
    top_level__mercury_compile_make_hlds__read_dependency_file_get_modules_4_p_0(InStream_5, &TransOptDeps0_17);
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
top_level__mercury_compile_make_hlds__read_dependency_file_find_start_5_p_0(
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
        *Success_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_11 = ((MR_String) ((MR_hl_field(1, Result_10, (MR_Integer) 0))));

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
      case (MR_Integer) 2:
        *Success_8 = (MR_Integer) 0;
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__285__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0_s * env_ptr = (struct top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__conv0_LambdaHeadVar__1_59));
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

    top_level__mercury_compile_make_hlds__IntroducedFrom__pred__maybe_warn_about_stdlib_shadowing__276__1_1_p_0(&(env).top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_2_env_0__conv0_LambdaHeadVar__1_59, top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_1, &env);
  }
}

static void MR_CALL 
top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0(
  MR_Word Globals_5,
  MR_Word ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;
  MR_Word WarnShadowing_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 65, &WarnShadowing_8);
  switch (WarnShadowing_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 0))));
        MR_String ModuleNameStr_10;
        MR_Word DocUndoc_11;

        ModuleNameStr_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_9);
        succeeded = mercury__library__stdlib_module_doc_undoc_2_p_0(ModuleNameStr_10, &DocUndoc_11);
        if (succeeded)
        {
          MR_Word Pieces0_12;
          MR_Word Pieces_13;
          MR_Word Context_14;
          MR_Word Spec_15;
          MR_Word Var_29;
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_30, 1) = ((MR_Box) (ModuleName_9));
          }
          {
            Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
            MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[15])));
          }
          {
            Pieces0_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces0_12, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[0])));
            MR_hl_field(1, Pieces0_12, 1) = ((MR_Box) (Var_29));
          }
          top_level__mercury_compile_make_hlds__maybe_mention_undoc_3_p_0(DocUndoc_11, Pieces0_12, &Pieces_13);
          Context_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 1))));
          {
            Spec_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_warn_about_stdlib_shadowing\'/4"));
            MR_hl_field(1, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(1, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(1, Spec_15, 3) = ((MR_Box) (Context_14));
            MR_hl_field(1, Spec_15, 4) = ((MR_Box) (Pieces_13));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_25 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
          }
        }
        else
        {
          MR_Word ShadowedLibModuleName_22;
          MR_Word DocUndoc_125;
          MR_Word LibModuleNames_20;
          MR_Word IsShadowed_21;
          MR_String ShadowedLibModuleNameStr_23;
          MR_Box conv1_ShadowedLibModuleName_22;

          mercury__solutions__solutions_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_make_hlds_scalar_common_4[0]), &LibModuleNames_20);
          {
            IsShadowed_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IsShadowed_21, 0) = ((MR_Box) (&top_level__mercury_compile_make_hlds_scalar_common_5[0]));
            MR_hl_field(0, IsShadowed_21, 1) = ((MR_Box) (top_level__mercury_compile_make_hlds__maybe_warn_about_stdlib_shadowing_4_p_0_3));
            MR_hl_field(0, IsShadowed_21, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, IsShadowed_21, 3) = ((MR_Box) (ModuleName_9));
          }
          succeeded = mercury__list__find_first_match_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IsShadowed_21, LibModuleNames_20, &conv1_ShadowedLibModuleName_22);
          if (succeeded)
          {
            ShadowedLibModuleName_22 = ((MR_Word) (conv1_ShadowedLibModuleName_22));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            ShadowedLibModuleNameStr_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ShadowedLibModuleName_22);
            succeeded = mercury__library__stdlib_module_doc_undoc_2_p_0(ShadowedLibModuleNameStr_23, &DocUndoc_125);
          }
          if (succeeded)
          {
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_68;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Pieces0_121;
            MR_Word Pieces_122;
            MR_Word Context_123;
            MR_Word Spec_124;

            {
              Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_64, 1) = ((MR_Box) (ModuleName_9));
            }
            {
              Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_72, 1) = ((MR_Box) (ShadowedLibModuleName_22));
            }
            {
              Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[42])));
            }
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[17])));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[14])));
              MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
            }
            {
              Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
              MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
            }
            {
              Pieces0_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces0_121, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_make_hlds_scalar_common_1[16])));
              MR_hl_field(1, Pieces0_121, 1) = ((MR_Box) (Var_63));
            }
            top_level__mercury_compile_make_hlds__maybe_mention_undoc_3_p_0(DocUndoc_125, Pieces0_121, &Pieces_122);
            Context_123 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 1))));
            {
              Spec_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_124, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_make_hlds.maybe_warn_about_stdlib_shadowing\'/4"));
              MR_hl_field(1, Spec_124, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(1, Spec_124, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(1, Spec_124, 3) = ((MR_Box) (Context_123));
              MR_hl_field(1, Spec_124, 4) = ((MR_Box) (Pieces_122));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_25 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_124));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
            }
          }
          else
            *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
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
      *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_5, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_make_hlds_scalar_common_1[48])));
      break;
  }
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
