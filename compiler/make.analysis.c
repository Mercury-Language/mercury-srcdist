/*
** Automatically generated from `make.analysis.m'
** by the Mercury compiler,
** version rotd-2026-08-22
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


// :- module make.analysis.
// :- implementation.

/*
INIT mercury__make__analysis__init
ENDINIT
*/

#include "make.analysis.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.link_target_util.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.pred_proc_id.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.find_local_modules.mih"
#include "make.index_set.mih"
#include "make.int_opt.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.order.mih"
#include "make.prereqs_cache.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__analysis__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__analysis__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct6 make__analysis____vti_pred_6io__type_ctor_info_text_output_stream_0libs__maybe_util__type_ctor_info_maybe_succeeded_0make__make_info__type_ctor_info_make_info_0make__make_info__type_ctor_info_make_info_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 make__analysis__list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0;

static const MR_VA_TypeInfo_Struct8 make__analysis____vti_pred_8io__type_ctor_info_text_output_stream_0libs__maybe_util__type_ctor_info_maybe_succeeded_0make__make_info__type_ctor_info_make_info_0make__make_info__type_ctor_info_make_info_0list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_DuFunctorDesc make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_0;

static const MR_PseudoTypeInfo make__analysis__make__analysis__field_types_maybe_use_analysis_cache_dir_0_1[2];

static const MR_DuFunctorDesc make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_1;

static const MR_DuFunctorDesc make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_2;

static const MR_DuFunctorDescPtr make__analysis__make__analysis__du_stag_ordered_maybe_use_analysis_cache_dir_0_0[2];

static const MR_DuFunctorDescPtr make__analysis__make__analysis__du_stag_ordered_maybe_use_analysis_cache_dir_0_1[1];

static const MR_DuPtagLayout make__analysis__make__analysis__du_ptag_ordered_maybe_use_analysis_cache_dir_0[2];

static const MR_DuFunctorDescPtr make__analysis__make__analysis__du_name_ordered_maybe_use_analysis_cache_dir_0[3];

static const MR_Integer make__analysis__make__analysis__functor_number_map_maybe_use_analysis_cache_dir_0[3];

static MR_bool MR_CALL 
make__analysis__IntroducedFrom__pred__build_analysis_files_1__285__1_2_p_0(
  MR_Word AllModules_13,
  MR_Word HeadVar__2_33);

static void MR_CALL 
make__analysis____Compare____maybe_use_analysis_cache_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__analysis____Unify____maybe_use_analysis_cache_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__analysis__make_local_module_id_option_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Opts0_5,
  MR_Word * Opts_6);

static void MR_CALL 
make__analysis__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__analysis__remove_cache_dir_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String CacheDir_10,
  MR_Word Info_11,
  MR_Word * Info_5);

static void MR_CALL 
make__analysis__build_analysis_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
make__analysis__build_analysis_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word TargetModules_15,
  MR_Word LocalModulesOpts_16,
  MR_Word Succeeded0_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
make__analysis__modules_needing_reanalysis_7_p_0(
  MR_Word ReanalyseSuboptimal_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
make__analysis__maybe_with_analysis_cache_dir_3_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__analysis__maybe_with_analysis_cache_dir_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
make__analysis____Unify____build2_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__analysis____Compare____build2_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__analysis____Unify____build3_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__analysis____Compare____build3_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__analysis____Unify____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__analysis____Compare____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__analysis_scalar_common_1[2][2];

static /* final */ const MR_Box make__analysis_scalar_common_2[1][10];

static /* final */ const MR_Box make__analysis_scalar_common_3[2][6];

static /* final */ const MR_Box make__analysis_scalar_common_4[3][3];

static /* final */ const MR_Box make__analysis_scalar_common_5[1][5];




static /* final */ const MR_Box make__analysis_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__analysis_scalar_common_2[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__analysis_scalar_common_3[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__analysis__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__analysis__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__analysis_scalar_common_4[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__analysis_scalar_common_3[0])),
    ((MR_Box) (make__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__analysis_scalar_common_3[0])),
    ((MR_Box) (make__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__analysis_scalar_common_3[1])),
    ((MR_Box) (make__analysis__build_analysis_files_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__analysis_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__analysis__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "libs.process_util.mh"
#include "make.build.mh"


static const MR_FA_PseudoTypeInfo_Struct1 make__analysis__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__analysis__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_VA_TypeInfo_Struct6 make__analysis____vti_pred_6io__type_ctor_info_text_output_stream_0libs__maybe_util__type_ctor_info_maybe_succeeded_0make__make_info__type_ctor_info_make_info_0make__make_info__type_ctor_info_make_info_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_TypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct make__analysis__make__analysis__type_ctor_info_build2_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__analysis____Unify____build2_0_0_10001)),
  ((MR_Box) (make__analysis____Compare____build2_0_0_10001)),
  (MR_String) "make.analysis",
  (MR_String) "build2",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__analysis____vti_pred_6io__type_ctor_info_text_output_stream_0libs__maybe_util__type_ctor_info_maybe_succeeded_0make__make_info__type_ctor_info_make_info_0make__make_info__type_ctor_info_make_info_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 make__analysis__list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0) }
};

static const MR_VA_TypeInfo_Struct8 make__analysis____vti_pred_8io__type_ctor_info_text_output_stream_0libs__maybe_util__type_ctor_info_maybe_succeeded_0make__make_info__type_ctor_info_make_info_0make__make_info__type_ctor_info_make_info_0list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_TypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_TypeInfo) (&make__analysis__list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0),
    (MR_TypeInfo) (&make__analysis__list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct make__analysis__make__analysis__type_ctor_info_build3_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__analysis____Unify____build3_0_0_10001)),
  ((MR_Box) (make__analysis____Compare____build3_0_0_10001)),
  (MR_String) "make.analysis",
  (MR_String) "build3",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__analysis____vti_pred_8io__type_ctor_info_text_output_stream_0libs__maybe_util__type_ctor_info_maybe_succeeded_0make__make_info__type_ctor_info_make_info_0make__make_info__type_ctor_info_make_info_0list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_diag_spec_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_0 = {
  (MR_String) "do_not_use_analysis_cache_dir",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__analysis__make__analysis__field_types_maybe_use_analysis_cache_dir_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_1 = {
  (MR_String) "use_analysis_cache_dir",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__analysis__make__analysis__field_types_maybe_use_analysis_cache_dir_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_2 = {
  (MR_String) "analysis_cache_dir_create_failed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__analysis__make__analysis__du_stag_ordered_maybe_use_analysis_cache_dir_0_0[2] = {
  &make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_0,
  &make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_2
};

static const MR_DuFunctorDescPtr make__analysis__make__analysis__du_stag_ordered_maybe_use_analysis_cache_dir_0_1[1] = { &make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_1 };

static const MR_DuPtagLayout make__analysis__make__analysis__du_ptag_ordered_maybe_use_analysis_cache_dir_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__analysis__make__analysis__du_stag_ordered_maybe_use_analysis_cache_dir_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__analysis__make__analysis__du_stag_ordered_maybe_use_analysis_cache_dir_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__analysis__make__analysis__du_name_ordered_maybe_use_analysis_cache_dir_0[3] = {
  &make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_2,
  &make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_0,
  &make__analysis__make__analysis__du_functor_desc_maybe_use_analysis_cache_dir_0_1
};

static const MR_Integer make__analysis__make__analysis__functor_number_map_maybe_use_analysis_cache_dir_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__analysis__make__analysis__type_ctor_info_maybe_use_analysis_cache_dir_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__analysis____Unify____maybe_use_analysis_cache_dir_0_0_10001)),
  ((MR_Box) (make__analysis____Compare____maybe_use_analysis_cache_dir_0_0_10001)),
  (MR_String) "make.analysis",
  (MR_String) "maybe_use_analysis_cache_dir",
  { make__analysis__make__analysis__du_name_ordered_maybe_use_analysis_cache_dir_0 },
  { make__analysis__make__analysis__du_ptag_ordered_maybe_use_analysis_cache_dir_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__analysis__make__analysis__functor_number_map_maybe_use_analysis_cache_dir_0,

};

static MR_bool MR_CALL 
make__analysis__IntroducedFrom__pred__build_analysis_files_1__285__1_2_p_0(
  MR_Word AllModules_13,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_13, ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static void MR_CALL 
make__analysis____Compare____maybe_use_analysis_cache_dir_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
make__analysis____Unify____maybe_use_analysis_cache_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_4;
          MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_String ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
make__analysis____Compare____build3_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
make__analysis____Unify____build3_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
make__analysis____Compare____build2_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
make__analysis____Unify____build2_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static void MR_CALL 
make__analysis__make_local_module_id_option_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Opts0_5,
  MR_Word * Opts_6)
{
  MR_String ModuleNameStr_7;
  MR_Word Var_9;

  ModuleNameStr_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_4);
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (ModuleNameStr_7));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Opts0_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Opts_6 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "--local-module-id"));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_9));
  }
}

static void MR_CALL 
make__analysis__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word TargetFile_6;
  MR_Word TargetId_7;
  MR_Word TargetStatusMap0_8;
  MR_Word TargetStatusMap_9;

  {
    TargetFile_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TargetFile_6, 0) = ((MR_Box) (ModuleName_4));
    MR_hl_field(0, TargetFile_6, 1) = ((MR_Box) ((MR_Unsigned) 28U));
  }
  TargetId_7 = (MR_Word) ((MR_Word) (TargetFile_6));
  TargetStatusMap0_8 = make__make_info__make_info_get_target_status_map_1_f_0(STATE_VARIABLE_Info_0_10);
  mercury__version_hash_table__set_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), ((MR_Box) (TargetId_7)), ((MR_Box) ((MR_Integer) 0)), TargetStatusMap0_8, &TargetStatusMap_9);
  make__make_info__make_info_set_target_status_map_3_p_0(TargetStatusMap_9, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
}

static void MR_CALL 
make__analysis__remove_cache_dir_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String CacheDir_10,
  MR_Word Info_11,
  MR_Word * Info_5)
{
  MR_String RemovingMsg_13;
  MR_Word Var_14;

  *Info_5 = Info_11;
  make__util__verbose_make_two_part_msg_4_p_0(Globals_9, (MR_String) "Removing", CacheDir_10, &RemovingMsg_13);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, RemovingMsg_13);
  mercury__io__file__remove_file_recursively_4_p_0(CacheDir_10, &Var_14);
}

static void MR_CALL 
make__analysis__build_analysis_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Opts_6;

  make__analysis__make_local_module_id_option_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Opts_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Opts_6));
}

static MR_bool MR_CALL 
make__analysis__build_analysis_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__analysis__IntroducedFrom__pred__build_analysis_files_1__285__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
make__analysis__build_analysis_files_10_p_0(
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word AllModules_13,
  MR_Word Succeeded0_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word KeepGoing_19;

  KeepGoing_19 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_21);
  succeeded = (Succeeded0_14 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_16 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
  else
  {
    MR_Word Succeeded1_20;
    MR_Word STATE_VARIABLE_Info_1_26;

    make__int_opt__build_int_opt_files_9_p_0(ProgressStream_15, Globals_11, (MR_Integer) 3, AllModules_13, &Succeeded1_20, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_1_26);
    succeeded = (Succeeded1_20 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_16 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_1_26;
    }
    else
    {
      MR_Word TargetModules0_28;
      MR_Word TargetModules1_29;
      MR_Word TargetModules_30;
      MR_Word Succeeded0_31;
      MR_Word LocalModulesOpts_32;
      MR_Word STATE_VARIABLE_Info_1_34;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_Info_2_38;
      MR_Word LocalModules_41;
      MR_Box conv1_LocalModulesOpts_32;

      make__order__get_target_modules_9_p_0(ProgressStream_15, Globals_11, (MR_Word) ((MR_Unsigned) 28U), AllModules_13, &TargetModules0_28, STATE_VARIABLE_Info_1_26, &STATE_VARIABLE_Info_1_34);
      Var_36 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_1_34);
      make__order__get_bottom_up_ordered_modules_3_p_0(Var_36, TargetModules0_28, &TargetModules1_29);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (&make__analysis_scalar_common_5[0]));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (make__analysis__build_analysis_files_10_p_0_1));
        MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_37, 3) = ((MR_Box) (AllModules_13));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_37, TargetModules1_29, &TargetModules_30);
      make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_15, Globals_11, MainModuleName_12, &Succeeded0_31, &LocalModules_41, STATE_VARIABLE_Info_1_34, &STATE_VARIABLE_Info_2_38);
      mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__analysis_scalar_common_1[1]), (MR_Word) (&make__analysis_scalar_common_4[2]), LocalModules_41, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_LocalModulesOpts_32);
      LocalModulesOpts_32 = ((MR_Word) (conv1_LocalModulesOpts_32));
      switch (Succeeded0_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_16 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_2_38;
          }
          break;
        case (MR_Integer) 1:
          make__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0(ProgressStream_15, Globals_11, TargetModules_30, LocalModulesOpts_32, Succeeded0_31, Succeeded_16, STATE_VARIABLE_Info_2_38, STATE_VARIABLE_Info_22);
          break;
      }
    }
  }
}

static void MR_CALL 
make__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_11;

  make__analysis__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_11));
}

static void MR_CALL 
make__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_11;

  make__analysis__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_11));
}

static void MR_CALL 
make__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word TargetModules_15,
  MR_Word LocalModulesOpts_16,
  MR_Word Succeeded0_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word KeepGoing_21;
    MR_Word Registries_22;
    MR_Word Succeeded1_23;
    MR_Integer ReanalysisPasses_24;
    MR_Word ReanalyseSuboptimal_25;
    MR_Word InvalidModules_26;
    MR_Word SuboptimalModules_27;
    MR_Word STATE_VARIABLE_Info_1_34;

    // setup for model_det tailcalls optimized into a loop
    ;
    KeepGoing_21 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_29);
    Registries_22 = make__util__make_target_id_list_2_f_0(TargetModules_15, (MR_Word) ((MR_Unsigned) 28U));
    make__build__foldl2_make_module_targets_10_p_0(KeepGoing_21, LocalModulesOpts_16, ProgressStream_12, Globals_13, Registries_22, &Succeeded1_23, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_1_34);
    ReanalysisPasses_24 = make__make_info__make_info_get_reanalysis_passes_1_f_0(STATE_VARIABLE_Info_1_34);
    succeeded = (ReanalysisPasses_24 > (MR_Integer) 1);
    if (succeeded)
      ReanalyseSuboptimal_25 = (MR_Integer) 1;
    else
      ReanalyseSuboptimal_25 = (MR_Integer) 0;
    make__analysis__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_25, Globals_13, TargetModules_15, &InvalidModules_26, &SuboptimalModules_27);
    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidModules_26);
    if (succeeded)
    {
      MR_String ReanalysingMsg_28;
      MR_Word STATE_VARIABLE_Info_2_40;
      MR_Box conv1_STATE_VARIABLE_Info_2_40;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_29;

      make__util__maybe_reanalyse_modules_msg_2_p_0(Globals_13, &ReanalysingMsg_28);
      make__util__maybe_write_msg_4_p_0(ProgressStream_12, ReanalysingMsg_28);
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__analysis_scalar_common_4[0]), InvalidModules_26, ((MR_Box) (STATE_VARIABLE_Info_1_34)), &conv1_STATE_VARIABLE_Info_2_40);
      STATE_VARIABLE_Info_2_40 = ((MR_Word) (conv1_STATE_VARIABLE_Info_2_40));
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_2_40;
      STATE_VARIABLE_Info_0_29 = next_value_of_STATE_VARIABLE_Info_0_29;
      continue;
    }
    else
    {
      succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SuboptimalModules_27);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_4_44;
        MR_Integer Var_45;
        MR_Word STATE_VARIABLE_Info_5_46;
        MR_String ReanalysingMsg_51;
        MR_Box conv3_STATE_VARIABLE_Info_4_44;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_29;

        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__analysis_scalar_common_4[1]), SuboptimalModules_27, ((MR_Box) (STATE_VARIABLE_Info_1_34)), &conv3_STATE_VARIABLE_Info_4_44);
        STATE_VARIABLE_Info_4_44 = ((MR_Word) (conv3_STATE_VARIABLE_Info_4_44));
        Var_45 = (MR_Integer) ((MR_Unsigned) ReanalysisPasses_24 - (MR_Unsigned) 1);
        make__make_info__make_info_set_reanalysis_passes_3_p_0(Var_45, STATE_VARIABLE_Info_4_44, &STATE_VARIABLE_Info_5_46);
        make__util__maybe_reanalyse_modules_msg_2_p_0(Globals_13, &ReanalysingMsg_51);
        make__util__maybe_write_msg_4_p_0(ProgressStream_12, ReanalysingMsg_51);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_5_46;
        STATE_VARIABLE_Info_0_29 = next_value_of_STATE_VARIABLE_Info_0_29;
        continue;
      }
      else
      {
        *Succeeded_18 = libs__maybe_util__and_2_f_0(Succeeded0_17, Succeeded1_23);
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_1_34;
      }
    }
    break;
  }
}

static void MR_CALL 
make__analysis__modules_needing_reanalysis_7_p_0(
  MR_Word ReanalyseSuboptimal_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Module_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Modules_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ModuleStatus_20;

      analysis__operations__do_read_module_overall_status_6_p_0((MR_Word) (&make__analysis_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Globals_2, Module_15, &ModuleStatus_20);
      switch (ModuleStatus_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InvalidModules0_22;

            make__analysis__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_1, Globals_2, Modules_16, &InvalidModules0_22, HeadVar__5_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Module_15));
              MR_hl_field(1, base, 1) = ((MR_Box) (InvalidModules0_22));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__3_3 = Modules_16;

            // direct tailcall eliminated
            ;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SuboptimalModules0_21;

            make__analysis__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_1, Globals_2, Modules_16, HeadVar__4_4, &SuboptimalModules0_21);
            switch (ReanalyseSuboptimal_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__5_5 = SuboptimalModules0_21;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Module_15));
                  MR_hl_field(1, base, 1) = ((MR_Box) (SuboptimalModules0_21));
                }
                break;
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__analysis__maybe_with_analysis_cache_dir_3_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_Info_5;

  make__analysis__remove_cache_dir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_Info_5);
  *wrapper_arg_2 = ((MR_Box) (conv10_Info_5));
}

void MR_CALL 
make__analysis__maybe_with_analysis_cache_dir_3_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Pred_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;
  MR_Word IntermodAnalysis_62;
  MR_Word Caching_63;
  MR_String CacheDir0_64;

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 437, &IntermodAnalysis_62);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 439, &Caching_63);
  libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 440, &CacheDir0_64);
  succeeded = (IntermodAnalysis_62 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (Caching_63 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (strcmp(CacheDir0_64, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (!(succeeded))
      {
        MR_Word Params_66;
        MR_Word OpttonArgs_69;

        Params_66 = make__make_info__make_info_get_compiler_params_1_f_0(STATE_VARIABLE_Info_0_29);
        OpttonArgs_69 = ((MR_Word) ((MR_hl_field(0, Params_66, 2))));
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), OpttonArgs_69);
      }
    }
  }
  if (succeeded)
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_13, 1))));
    MR_Box conv4_Succeeded_14;
    MR_Box conv3_STATE_VARIABLE_Info_30;
    MR_Box conv2_STATE_VARIABLE_Specs_32;
    MR_Box conv1_STATE_VARIABLE_IO_34;

    func_0(((MR_Box) (Pred_13)), ((MR_Box) (ProgressStream_11)), &conv4_Succeeded_14, ((MR_Box) (STATE_VARIABLE_Info_0_29)), &conv3_STATE_VARIABLE_Info_30, ((MR_Box) (STATE_VARIABLE_Specs_0_31)), &conv2_STATE_VARIABLE_Specs_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34);
    *Succeeded_14 = ((MR_Word) (conv4_Succeeded_14));
    *STATE_VARIABLE_Info_30 = ((MR_Word) (conv3_STATE_VARIABLE_Info_30));
    *STATE_VARIABLE_Specs_32 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_32));
  }
  else
  {
    MR_String CacheDir_71;
    MR_String CreatingMsg_77;
    MR_Word MakeRes_78;
    MR_String _CacheDirProposed_76;

    parse_tree__file_names__analysis_cache_dir_name_3_p_0(Globals_12, &CacheDir_71, &_CacheDirProposed_76);
    make__util__verbose_make_two_part_msg_4_p_0(Globals_12, (MR_String) "Creating", CacheDir_71, &CreatingMsg_77);
    make__util__maybe_write_msg_4_p_0(ProgressStream_11, CreatingMsg_77);
    mercury__dir__make_directory_4_p_0(CacheDir_71, &MakeRes_78);
    if ((MakeRes_78 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OrigParams_21;
      MR_Word OrigOptionArgs_22;
      MR_Word NewOptionArgs_23;
      MR_Word NewParams_24;
      MR_Word VeryVerbose_25;
      MR_Box Cookie_26;
      MR_Word TaskSucceeded_27;
      MR_Word CleanupPred_28;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word STATE_VARIABLE_Info_2_42;
      MR_Word STATE_VARIABLE_Info_3_45;
      MR_Word STATE_VARIABLE_Info_5_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_String RemovingMsg_97;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv9_TaskSucceeded_27;
      MR_Box conv8_STATE_VARIABLE_Info_3_45;
      MR_Box conv7_STATE_VARIABLE_Specs_32;
      MR_Box conv6_STATE_VARIABLE_IO_4_47;
      MR_Box conv11_STATE_VARIABLE_Info_5_50;
      MR_Word Var_98;

      OrigParams_21 = make__make_info__make_info_get_compiler_params_1_f_0(STATE_VARIABLE_Info_0_29);
      Var_51 = ((MR_Word) ((MR_hl_field(0, OrigParams_21, 0))));
      Var_52 = ((MR_Word) ((MR_hl_field(0, OrigParams_21, 1))));
      OrigOptionArgs_22 = ((MR_Word) ((MR_hl_field(0, OrigParams_21, 2))));
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (CacheDir_71));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
      }
      NewOptionArgs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_22, Var_39);
      {
        NewParams_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewParams_24, 0) = ((MR_Box) (Var_51));
        MR_hl_field(0, NewParams_24, 1) = ((MR_Box) (Var_52));
        MR_hl_field(0, NewParams_24, 2) = ((MR_Box) (NewOptionArgs_23));
      }
      make__make_info__make_info_set_compiler_params_3_p_0(NewParams_24, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_2_42);
      libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 132, &VeryVerbose_25);
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_26);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_13, 1))));
      func_5(((MR_Box) (Pred_13)), ((MR_Box) (ProgressStream_11)), &conv9_TaskSucceeded_27, ((MR_Box) (STATE_VARIABLE_Info_2_42)), &conv8_STATE_VARIABLE_Info_3_45, ((MR_Box) (STATE_VARIABLE_Specs_0_31)), &conv7_STATE_VARIABLE_Specs_32, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_4_47);
      TaskSucceeded_27 = ((MR_Word) (conv9_TaskSucceeded_27));
      STATE_VARIABLE_Info_3_45 = ((MR_Word) (conv8_STATE_VARIABLE_Info_3_45));
      *STATE_VARIABLE_Specs_32 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_32));
      {
        CleanupPred_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CleanupPred_28, 0) = ((MR_Box) (&make__analysis_scalar_common_2[0]));
        MR_hl_field(0, CleanupPred_28, 1) = ((MR_Box) (make__analysis__maybe_with_analysis_cache_dir_3_10_p_0_1));
        MR_hl_field(0, CleanupPred_28, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, CleanupPred_28, 3) = ((MR_Box) (ProgressStream_11));
        MR_hl_field(0, CleanupPred_28, 4) = ((MR_Box) (Globals_12));
        MR_hl_field(0, CleanupPred_28, 5) = ((MR_Box) (CacheDir_71));
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_25, Cookie_26, CleanupPred_28, TaskSucceeded_27, Succeeded_14, ((MR_Box) (STATE_VARIABLE_Info_3_45)), &conv11_STATE_VARIABLE_Info_5_50);
      STATE_VARIABLE_Info_5_50 = ((MR_Word) (conv11_STATE_VARIABLE_Info_5_50));
      make__util__verbose_make_two_part_msg_4_p_0(Globals_12, (MR_String) "Removing", CacheDir_71, &RemovingMsg_97);
      make__util__maybe_write_msg_4_p_0(ProgressStream_11, RemovingMsg_97);
      mercury__io__file__remove_file_recursively_4_p_0(CacheDir_71, &Var_98);
      make__make_info__make_info_set_compiler_params_3_p_0(OrigParams_21, STATE_VARIABLE_Info_5_50, STATE_VARIABLE_Info_30);
    }
    else
    {
      MR_Word Error_79 = ((MR_Word) ((MR_hl_field(1, MakeRes_78, 0))));
      MR_String Var_88;

      Var_88 = mercury__io__error_message_1_f_0(Error_79);
      mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "Error: making directory ");
      mercury__io__write_string_4_p_0(ProgressStream_11, CacheDir_71);
      mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) ": ");
      mercury__io__write_string_4_p_0(ProgressStream_11, Var_88);
      mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "\n");
      *Succeeded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    }
  }
}

static void MR_CALL 
make__analysis__maybe_with_analysis_cache_dir_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_Info_5;

  make__analysis__remove_cache_dir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv8_Info_5);
  *wrapper_arg_2 = ((MR_Box) (conv8_Info_5));
}

void MR_CALL 
make__analysis__maybe_with_analysis_cache_dir_2_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Pred_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_bool succeeded;
  MR_Word IntermodAnalysis_55;
  MR_Word Caching_56;
  MR_String CacheDir0_57;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 437, &IntermodAnalysis_55);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 439, &Caching_56);
  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 440, &CacheDir0_57);
  succeeded = (IntermodAnalysis_55 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (Caching_56 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (strcmp(CacheDir0_57, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (!(succeeded))
      {
        MR_Word Params_59;
        MR_Word OpttonArgs_62;

        Params_59 = make__make_info__make_info_get_compiler_params_1_f_0(STATE_VARIABLE_Info_0_26);
        OpttonArgs_62 = ((MR_Word) ((MR_hl_field(0, Params_59, 2))));
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), OpttonArgs_62);
      }
    }
  }
  if (succeeded)
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_11, 1))));
    MR_Box conv3_Succeeded_12;
    MR_Box conv2_STATE_VARIABLE_Info_27;
    MR_Box conv1_STATE_VARIABLE_IO_29;

    func_0(((MR_Box) (Pred_11)), ((MR_Box) (ProgressStream_9)), &conv3_Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_0_26)), &conv2_STATE_VARIABLE_Info_27, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29);
    *Succeeded_12 = ((MR_Word) (conv3_Succeeded_12));
    *STATE_VARIABLE_Info_27 = ((MR_Word) (conv2_STATE_VARIABLE_Info_27));
  }
  else
  {
    MR_String CacheDir_64;
    MR_String CreatingMsg_70;
    MR_Word MakeRes_71;
    MR_String _CacheDirProposed_69;

    parse_tree__file_names__analysis_cache_dir_name_3_p_0(Globals_10, &CacheDir_64, &_CacheDirProposed_69);
    make__util__verbose_make_two_part_msg_4_p_0(Globals_10, (MR_String) "Creating", CacheDir_64, &CreatingMsg_70);
    make__util__maybe_write_msg_4_p_0(ProgressStream_9, CreatingMsg_70);
    mercury__dir__make_directory_4_p_0(CacheDir_64, &MakeRes_71);
    if ((MakeRes_71 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OrigParams_18;
      MR_Word OrigOptionArgs_19;
      MR_Word NewOptionArgs_20;
      MR_Word NewParams_21;
      MR_Word VeryVerbose_22;
      MR_Box Cookie_23;
      MR_Word TaskSucceeded_24;
      MR_Word CleanupPred_25;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word STATE_VARIABLE_Info_2_36;
      MR_Word STATE_VARIABLE_Info_3_39;
      MR_Word STATE_VARIABLE_Info_5_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_String RemovingMsg_90;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv7_TaskSucceeded_24;
      MR_Box conv6_STATE_VARIABLE_Info_3_39;
      MR_Box conv5_STATE_VARIABLE_IO_4_40;
      MR_Box conv9_STATE_VARIABLE_Info_5_43;
      MR_Word Var_91;

      OrigParams_18 = make__make_info__make_info_get_compiler_params_1_f_0(STATE_VARIABLE_Info_0_26);
      Var_44 = ((MR_Word) ((MR_hl_field(0, OrigParams_18, 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(0, OrigParams_18, 1))));
      OrigOptionArgs_19 = ((MR_Word) ((MR_hl_field(0, OrigParams_18, 2))));
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (CacheDir_64));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_34));
      }
      NewOptionArgs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_19, Var_33);
      {
        NewParams_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewParams_21, 0) = ((MR_Box) (Var_44));
        MR_hl_field(0, NewParams_21, 1) = ((MR_Box) (Var_45));
        MR_hl_field(0, NewParams_21, 2) = ((MR_Box) (NewOptionArgs_20));
      }
      make__make_info__make_info_set_compiler_params_3_p_0(NewParams_21, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_2_36);
      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 132, &VeryVerbose_22);
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_23);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_11, 1))));
      func_4(((MR_Box) (Pred_11)), ((MR_Box) (ProgressStream_9)), &conv7_TaskSucceeded_24, ((MR_Box) (STATE_VARIABLE_Info_2_36)), &conv6_STATE_VARIABLE_Info_3_39, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_4_40);
      TaskSucceeded_24 = ((MR_Word) (conv7_TaskSucceeded_24));
      STATE_VARIABLE_Info_3_39 = ((MR_Word) (conv6_STATE_VARIABLE_Info_3_39));
      {
        CleanupPred_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CleanupPred_25, 0) = ((MR_Box) (&make__analysis_scalar_common_2[0]));
        MR_hl_field(0, CleanupPred_25, 1) = ((MR_Box) (make__analysis__maybe_with_analysis_cache_dir_2_8_p_0_1));
        MR_hl_field(0, CleanupPred_25, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, CleanupPred_25, 3) = ((MR_Box) (ProgressStream_9));
        MR_hl_field(0, CleanupPred_25, 4) = ((MR_Box) (Globals_10));
        MR_hl_field(0, CleanupPred_25, 5) = ((MR_Box) (CacheDir_64));
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_22, Cookie_23, CleanupPred_25, TaskSucceeded_24, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_3_39)), &conv9_STATE_VARIABLE_Info_5_43);
      STATE_VARIABLE_Info_5_43 = ((MR_Word) (conv9_STATE_VARIABLE_Info_5_43));
      make__util__verbose_make_two_part_msg_4_p_0(Globals_10, (MR_String) "Removing", CacheDir_64, &RemovingMsg_90);
      make__util__maybe_write_msg_4_p_0(ProgressStream_9, RemovingMsg_90);
      mercury__io__file__remove_file_recursively_4_p_0(CacheDir_64, &Var_91);
      make__make_info__make_info_set_compiler_params_3_p_0(OrigParams_18, STATE_VARIABLE_Info_5_43, STATE_VARIABLE_Info_27);
    }
    else
    {
      MR_Word Error_72 = ((MR_Word) ((MR_hl_field(1, MakeRes_71, 0))));
      MR_String Var_81;

      Var_81 = mercury__io__error_message_1_f_0(Error_72);
      mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "Error: making directory ");
      mercury__io__write_string_4_p_0(ProgressStream_9, CacheDir_64);
      mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) ": ");
      mercury__io__write_string_4_p_0(ProgressStream_9, Var_81);
      mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\n");
      *Succeeded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
    }
  }
}

static MR_bool MR_CALL 
make__analysis____Unify____build2_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__analysis____Unify____build2_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__analysis____Compare____build2_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__analysis____Compare____build2_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__analysis____Unify____build3_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__analysis____Unify____build3_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__analysis____Compare____build3_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__analysis____Compare____build3_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__analysis____Unify____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__analysis____Unify____maybe_use_analysis_cache_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__analysis____Compare____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__analysis____Compare____maybe_use_analysis_cache_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__analysis__init(void)
{
}

void mercury__make__analysis__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&make__analysis__make__analysis__type_ctor_info_build2_0);
  MR_register_type_ctor_info(&make__analysis__make__analysis__type_ctor_info_build3_0);
  MR_register_type_ctor_info(&make__analysis__make__analysis__type_ctor_info_maybe_use_analysis_cache_dir_0);
}

void mercury__make__analysis__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__analysis__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.analysis.
