/*
** Automatically generated from `make.util.m'
** by the Mercury compiler,
** version rotd-2023-07-17
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


// :- module make.util.
// :- implementation.

/*
INIT mercury__make__util__init
ENDINIT
*/

#include "make.util.mih"


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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.make_info.mih"
#include "make.module_dep_file.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"




static const MR_FA_PseudoTypeInfo_Struct2 make__util__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_DuFunctorDesc make__util__make__util__du_functor_desc_target_extension_0_0;

static const MR_PseudoTypeInfo make__util__make__util__field_types_target_extension_0_1[1];

static const MR_DuFunctorDesc make__util__make__util__du_functor_desc_target_extension_0_1;

static const MR_PseudoTypeInfo make__util__make__util__field_types_target_extension_0_2[2];

static const MR_DuArgLocn make__util__make__util__field_locns_target_extension_0_2[2];

static const MR_DuFunctorDesc make__util__make__util__du_functor_desc_target_extension_0_2;

static const MR_PseudoTypeInfo make__util__make__util__field_types_target_extension_0_3[2];

static const MR_DuArgLocn make__util__make__util__field_locns_target_extension_0_3[2];

static const MR_DuFunctorDesc make__util__make__util__du_functor_desc_target_extension_0_3;

static const MR_DuFunctorDescPtr make__util__make__util__du_stag_ordered_target_extension_0_0[1];

static const MR_DuFunctorDescPtr make__util__make__util__du_stag_ordered_target_extension_0_1[1];

static const MR_DuFunctorDescPtr make__util__make__util__du_stag_ordered_target_extension_0_2[1];

static const MR_DuFunctorDescPtr make__util__make__util__du_stag_ordered_target_extension_0_3[1];

static const MR_DuPtagLayout make__util__make__util__du_ptag_ordered_target_extension_0[4];

static const MR_DuFunctorDescPtr make__util__make__util__du_name_ordered_target_extension_0[4];

static const MR_Integer make__util__make__util__functor_number_map_target_extension_0[4];

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__990__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8);

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__986__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8);

static void MR_CALL 
make__util____Compare____target_extension_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__util____Unify____target_extension_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__util__target_file_hash_2_p_0(
  MR_Word TargetFile_3,
  MR_Integer * Hash_4);

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__util__make_remove_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__util__find_error_or_oldest_ok_timestamp_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__util__init_target_file_timestamps_0_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__util__module_target_to_search_file_name_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_Word TargetType_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12);

static void MR_CALL 
make__util__module_target_to_file_name_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_Word TargetType_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12);

static MR_bool MR_CALL 
make__util____Unify____target_extension_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__util____Compare____target_extension_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__util_scalar_common_1[4][3];

static /* final */ const MR_Box make__util_scalar_common_2[22][2];

static /* final */ const MR_Box make__util_scalar_common_3[27][1];

static /* final */ const MR_Box make__util_scalar_common_5[1][5];

static /* final */ const MR_Box make__util_scalar_common_6[3][6];


struct make__util__vector_common_type_4_0_s {
  const MR_Word make__util__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct make__util__vector_common_type_4_0_s make__util_vector_common_4[16];



static /* final */ const MR_Box make__util_scalar_common_1[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__util_scalar_common_5[0])),
    ((MR_Box) (make__util__init_target_file_timestamps_0_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__util_scalar_common_6[0])),
    ((MR_Box) (make__util__find_error_or_oldest_ok_timestamp_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__util_scalar_common_5[0])),
    ((MR_Box) (make__util__make_remove_file_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_2[22][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 17U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 14U)),
    (MR_Box) ((MR_Unsigned) 9U)
  },
};

static /* final */ const MR_Box make__util_scalar_common_3[27][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   6 */
  { ((MR_Box) (MR_mkword(3, &make__util_scalar_common_2[13]))) },
  /* row   7 */
  { ((MR_Box) (MR_mkword(3, &make__util_scalar_common_2[14]))) },
  /* row   8 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   9 */
  { ((MR_Box) (MR_mkword(2, &make__util_scalar_common_3[8]))) },
  /* row  10 */
  { ((MR_Box) (MR_mkword(3, &make__util_scalar_common_2[15]))) },
  /* row  11 */
  { ((MR_Box) (MR_mkword(3, &make__util_scalar_common_2[16]))) },
  /* row  12 */
  { ((MR_Box) (MR_mkword(3, &make__util_scalar_common_2[17]))) },
  /* row  13 */
  { ((MR_Box) (&make__util_scalar_common_3[0])) },
  /* row  14 */
  { ((MR_Box) (&make__util_scalar_common_3[1])) },
  /* row  15 */
  { ((MR_Box) (&make__util_scalar_common_3[5])) },
  /* row  16 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row  17 */
  { ((MR_Box) (&make__util_scalar_common_3[16])) },
  /* row  18 */
  { ((MR_Box) (MR_mkword(3, &make__util_scalar_common_2[18]))) },
  /* row  19 */
  { ((MR_Box) (MR_mkword(3, &make__util_scalar_common_2[19]))) },
  /* row  20 */
  { ((MR_Box) (MR_mkword(1, &make__util_scalar_common_3[0]))) },
  /* row  21 */
  { ((MR_Box) (MR_mkword(3, &make__util_scalar_common_2[20]))) },
  /* row  22 */
  { ((MR_Box) (MR_mkword(3, &make__util_scalar_common_2[21]))) },
  /* row  23 */
  { ((MR_Box) ((MR_String) "invalid module")) },
  /* row  24 */
  { ((MR_Box) ((MR_Integer) 686)) },
  /* row  25 */
  { ((MR_Box) ((MR_Integer) 539)) },
  /* row  26 */
  { ((MR_Box) ((MR_Integer) 685)) },
};

static /* final */ const MR_Box make__util_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_6[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__util__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__util__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__util__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
};


static /* final */ const struct make__util__vector_common_type_4_0_s make__util_vector_common_4[16] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 28U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 36U) },
  /* row   2 */   { (MR_Word) ((MR_Unsigned) 48U) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 40U) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 4U) },
  /* row   5 */   { (MR_Word) ((MR_Unsigned) 12U) },
  /* row   6 */   { (MR_Word) ((MR_Unsigned) 8U) },
  /* row   7 */   { (MR_Word) ((MR_Unsigned) 16U) },
  /* row   8 */   { (MR_Word) ((MR_Unsigned) 20U) },
  /* row   9 */   { (MR_Word) ((MR_Unsigned) 44U) },
  /* row  10 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row  11 */   { (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[0])) },
  /* row  12 */   { (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[1])) },
  /* row  13 */   { (MR_Word) ((MR_Unsigned) 24U) },
  /* row  14 */   { (MR_Word) ((MR_Unsigned) 32U) },
  /* row  15 */   { (MR_Word) ((MR_Unsigned) 52U) },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"
#include "make.util.mh"


static const MR_FA_PseudoTypeInfo_Struct2 make__util__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_DuFunctorDesc make__util__make__util__du_functor_desc_target_extension_0_0 = {
  (MR_String) "source",
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

static const MR_PseudoTypeInfo make__util__make__util__field_types_target_extension_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0) };

static const MR_DuFunctorDesc make__util__make__util__du_functor_desc_target_extension_0_1 = {
  (MR_String) "extension",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__util__make__util__field_types_target_extension_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__util__make__util__field_types_target_extension_0_2[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
};

static const MR_DuArgLocn make__util__make__util__field_locns_target_extension_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc make__util__make__util__du_functor_desc_target_extension_0_2 = {
  (MR_String) "foreign_obj",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  make__util__make__util__field_types_target_extension_0_2,
  NULL,
  make__util__make__util__field_locns_target_extension_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__util__make__util__field_types_target_extension_0_3[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn make__util__make__util__field_locns_target_extension_0_3[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__util__make__util__du_functor_desc_target_extension_0_3 = {
  (MR_String) "fact_table_obj",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  make__util__make__util__field_types_target_extension_0_3,
  NULL,
  make__util__make__util__field_locns_target_extension_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__util__make__util__du_stag_ordered_target_extension_0_0[1] = { &make__util__make__util__du_functor_desc_target_extension_0_0 };

static const MR_DuFunctorDescPtr make__util__make__util__du_stag_ordered_target_extension_0_1[1] = { &make__util__make__util__du_functor_desc_target_extension_0_1 };

static const MR_DuFunctorDescPtr make__util__make__util__du_stag_ordered_target_extension_0_2[1] = { &make__util__make__util__du_functor_desc_target_extension_0_2 };

static const MR_DuFunctorDescPtr make__util__make__util__du_stag_ordered_target_extension_0_3[1] = { &make__util__make__util__du_functor_desc_target_extension_0_3 };

static const MR_DuPtagLayout make__util__make__util__du_ptag_ordered_target_extension_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__util__make__util__du_stag_ordered_target_extension_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__util__make__util__du_stag_ordered_target_extension_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__util__make__util__du_stag_ordered_target_extension_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__util__make__util__du_stag_ordered_target_extension_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__util__make__util__du_name_ordered_target_extension_0[4] = {
  &make__util__make__util__du_functor_desc_target_extension_0_1,
  &make__util__make__util__du_functor_desc_target_extension_0_3,
  &make__util__make__util__du_functor_desc_target_extension_0_2,
  &make__util__make__util__du_functor_desc_target_extension_0_0
};

static const MR_Integer make__util__make__util__functor_number_map_target_extension_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_target_extension_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__util____Unify____target_extension_0_0_10001)),
  ((MR_Box) (make__util____Compare____target_extension_0_0_10001)),
  (MR_String) "make.util",
  (MR_String) "target_extension",
  { make__util__make__util__du_name_ordered_target_extension_0 },
  { make__util__make__util__du_ptag_ordered_target_extension_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  make__util__make__util__functor_number_map_target_extension_0,

};

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__990__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8)
{
  MR_Word LambdaHeadVar__2_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (LambdaHeadVar__1_8));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (TargetType_5));
  }
  {
    LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_9, 0) = ((MR_Box) (Var_10));
  }
  return LambdaHeadVar__2_9;
}

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__986__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8)
{
  MR_Word LambdaHeadVar__2_9;

  {
    LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_9, 0) = ((MR_Box) (LambdaHeadVar__1_8));
    MR_hl_field(0, LambdaHeadVar__2_9, 1) = ((MR_Box) (TargetType_5));
  }
  return LambdaHeadVar__2_9;
}

static void MR_CALL 
make__util____Compare____target_extension_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_46 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_47 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_46 == CastY_47);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                parse_tree__file_names____Compare____ext_0_0(HeadVar__1_1, Var_53, ArgY1_11);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word Var_57 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_24 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                MR_Word ArgY2_27 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word SubResult1_25;
                MR_Integer Var_60 = (MR_Integer) (Var_57);
                MR_Integer Var_61 = (MR_Integer) (ArgY1_24);

                succeeded = (Var_60 < Var_61);
                if (succeeded)
                {
                  SubResult1_25 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_60 > Var_61);
                  if (succeeded)
                  {
                    SubResult1_25 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_25 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_25;
                else
                {
                  MR_Integer Var_62 = (MR_Integer) (Var_56);
                  MR_Integer Var_63 = (MR_Integer) (ArgY2_27);

                  succeeded = (Var_62 < Var_63);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_62 > Var_63);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_54 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_55 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgY1_42 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_String ArgY2_45 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_43;
                MR_Integer Var_58 = (MR_Integer) (Var_55);
                MR_Integer Var_59 = (MR_Integer) (ArgY1_42);

                succeeded = (Var_58 < Var_59);
                if (succeeded)
                {
                  SubResult1_43 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_58 > Var_59);
                  if (succeeded)
                  {
                    SubResult1_43 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_43 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_43;
                else
                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_54, ArgY2_45);
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
make__util____Unify____target_extension_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__file_names____Unify____ext_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
            ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_12;
          MR_String ArgX2_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_11 == ArgY1_12);
            if (succeeded)
              succeeded = (strcmp(ArgX2_13, ArgY2_14) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
make__util__dependency_file_with_module_index_hash_2_p_0(
  MR_Word DepFile_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) DepFile_3)) == (MR_Integer) 1))
  {
    MR_String FileName_9 = ((MR_String) ((MR_hl_field(1, DepFile_3, (MR_Integer) 0))));

    *Hash_4 = mercury__string__hash_1_f_0(FileName_9);
  }
  else
  {
    MR_Word ModuleIndex_5 = ((MR_Word) ((MR_hl_field(0, DepFile_3, (MR_Integer) 0))));
    MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, DepFile_3, (MR_Integer) 1))));
    MR_Integer Hash0_7;
    MR_Integer Hash1_8;
    MR_Unsigned Var_10;
    MR_Integer H1_25;
    MR_Integer Var_26;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&make__util_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Var_10;

    conv1_Var_10 = func_0(((MR_Box) ((MR_Word) (&make__util_scalar_common_2[0]))), ((MR_Box) (ModuleIndex_5)));
    Var_10 = ((MR_Unsigned) (conv1_Var_10));
    Hash0_7 = mercury__uint__cast_to_int_1_f_0(Var_10);
    switch (MR_tag((MR_Word) Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Hash1_8 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            Hash1_8 = (MR_Integer) 3;
            break;
          case (MR_Integer) 3:
            Hash1_8 = (MR_Integer) 4;
            break;
          case (MR_Integer) 4:
            Hash1_8 = (MR_Integer) 5;
            break;
          case (MR_Integer) 5:
            Hash1_8 = (MR_Integer) 6;
            break;
          case (MR_Integer) 6:
            Hash1_8 = (MR_Integer) 7;
            break;
          case (MR_Integer) 7:
            Hash1_8 = (MR_Integer) 8;
            break;
          case (MR_Integer) 8:
            Hash1_8 = (MR_Integer) 20;
            break;
          case (MR_Integer) 9:
            Hash1_8 = (MR_Integer) 11;
            break;
          case (MR_Integer) 10:
            Hash1_8 = (MR_Integer) 22;
            break;
          case (MR_Integer) 11:
            Hash1_8 = (MR_Integer) 12;
            break;
          case (MR_Integer) 12:
            Hash1_8 = (MR_Integer) 21;
            break;
          case (MR_Integer) 13:
            Hash1_8 = (MR_Integer) 19;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(1, Type_6, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Hash1_8 = (MR_Integer) 9;
              break;
            case (MR_Integer) 1:
              Hash1_8 = (MR_Integer) 10;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_12 = ((MR_Unsigned) ((MR_hl_field(2, Type_6, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer Var_19;
          MR_Integer H1_22;

          switch (PIC_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Var_19 = (MR_Integer) 3;
              break;
            case (MR_Integer) 0:
              Var_19 = (MR_Integer) 1;
              break;
          }
          H1_22 = ((MR_Integer) 16 ^ (((MR_Integer) 16 << 5)));
          Hash1_8 = (H1_22 ^ Var_19);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_8 = (MR_Integer) 17;
            break;
          case (MR_Integer) 1:
            Hash1_8 = (MR_Integer) 18;
            break;
        }
        break;
    }
    Var_26 = (Hash0_7 << 5);
    H1_25 = (Hash0_7 ^ Var_26);
    *Hash_4 = (H1_25 ^ Hash1_8);
  }
}

void MR_CALL 
make__util__dependency_file_hash_2_p_0(
  MR_Word DepFile_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) DepFile_3)) == (MR_Integer) 1))
  {
    MR_String FileName_6 = ((MR_String) ((MR_hl_field(1, DepFile_3, (MR_Integer) 0))));

    *Hash_4 = mercury__string__hash_1_f_0(FileName_6);
  }
  else
  {
    MR_Word TargetFile_5 = ((MR_Word) ((MR_hl_field(0, DepFile_3, (MR_Integer) 0))));

    make__util__target_file_hash_2_p_0(TargetFile_5, Hash_4);
  }
}

static void MR_CALL 
make__util__target_file_hash_2_p_0(
  MR_Word TargetFile_3,
  MR_Integer * Hash_4)
{
  MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(0, TargetFile_3, (MR_Integer) 0))));
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, TargetFile_3, (MR_Integer) 1))));
  MR_Integer Hash0_7;
  MR_Integer Hash1_8;
  MR_Integer H1_25;
  MR_Integer Var_26;

  if (((MR_tag((MR_Word) ModuleName_5)) == (MR_Integer) 1))
  {
    MR_String Name_11 = ((MR_String) ((MR_hl_field(1, ModuleName_5, (MR_Integer) 1))));

    Hash0_7 = mercury__string__hash_1_f_0(Name_11);
  }
  else
  {
    MR_String Name_9 = ((MR_String) ((MR_hl_field(0, ModuleName_5, (MR_Integer) 0))));

    Hash0_7 = mercury__string__hash_1_f_0(Name_9);
  }
  switch (MR_tag((MR_Word) Type_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Type_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Hash1_8 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          Hash1_8 = (MR_Integer) 2;
          break;
        case (MR_Integer) 2:
          Hash1_8 = (MR_Integer) 3;
          break;
        case (MR_Integer) 3:
          Hash1_8 = (MR_Integer) 4;
          break;
        case (MR_Integer) 4:
          Hash1_8 = (MR_Integer) 5;
          break;
        case (MR_Integer) 5:
          Hash1_8 = (MR_Integer) 6;
          break;
        case (MR_Integer) 6:
          Hash1_8 = (MR_Integer) 7;
          break;
        case (MR_Integer) 7:
          Hash1_8 = (MR_Integer) 8;
          break;
        case (MR_Integer) 8:
          Hash1_8 = (MR_Integer) 20;
          break;
        case (MR_Integer) 9:
          Hash1_8 = (MR_Integer) 11;
          break;
        case (MR_Integer) 10:
          Hash1_8 = (MR_Integer) 22;
          break;
        case (MR_Integer) 11:
          Hash1_8 = (MR_Integer) 12;
          break;
        case (MR_Integer) 12:
          Hash1_8 = (MR_Integer) 21;
          break;
        case (MR_Integer) 13:
          Hash1_8 = (MR_Integer) 19;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(1, Type_6, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_8 = (MR_Integer) 9;
            break;
          case (MR_Integer) 1:
            Hash1_8 = (MR_Integer) 10;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PIC_12 = ((MR_Unsigned) ((MR_hl_field(2, Type_6, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Var_19;
        MR_Integer H1_22;

        switch (PIC_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Var_19 = (MR_Integer) 3;
            break;
          case (MR_Integer) 0:
            Var_19 = (MR_Integer) 1;
            break;
        }
        H1_22 = ((MR_Integer) 16 ^ (((MR_Integer) 16 << 5)));
        Hash1_8 = (H1_22 ^ Var_19);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Hash1_8 = (MR_Integer) 17;
          break;
        case (MR_Integer) 1:
          Hash1_8 = (MR_Integer) 18;
          break;
      }
      break;
  }
  Var_26 = (Hash0_7 << 5);
  H1_25 = (Hash0_7 ^ Var_26);
  *Hash_4 = (H1_25 ^ Hash1_8);
}

void MR_CALL 
make__util__module_name_hash_2_p_0(
  MR_Word SymName_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) SymName_3)) == (MR_Integer) 1))
  {
    MR_String Name_7 = ((MR_String) ((MR_hl_field(1, SymName_3, (MR_Integer) 1))));

    *Hash_4 = mercury__string__hash_1_f_0(Name_7);
  }
  else
  {
    MR_String Name_5 = ((MR_String) ((MR_hl_field(0, SymName_3, (MR_Integer) 0))));

    *Hash_4 = mercury__string__hash_1_f_0(Name_5);
  }
}

void MR_CALL 
make__util__get_real_milliseconds_3_p_0(
  MR_Integer * Time_1)
{
{
#define MR_PROC_LABEL make__util__get_real_milliseconds_3_p_0

	MR_Integer Time;

		{

    Time = MR_get_real_milliseconds();


		;}
#undef MR_PROC_LABEL
	*Time_1  = Time;
}
}

void MR_CALL 
make__util__maybe_write_msg_locked_4_p_0(
  MR_Word Info_5,
  MR_String Msg_6)
{
  MR_Word OutStream_8;

  mercury__io__output_stream_3_p_0(&OutStream_8);
  make__util__maybe_write_msg_locked_5_p_0(OutStream_8, Info_5, Msg_6);
}

void MR_CALL 
make__util__maybe_write_msg_locked_5_p_0(
  MR_Word OutStream_6,
  MR_Word Info_7,
  MR_String Msg_8)
{
  MR_bool succeeded = (strcmp(Msg_8, (MR_String) "") == 0);

  if (!(succeeded))
  {
    MR_Word MaybeLock_10;

    MaybeLock_10 = make__make_info__make_info_get_maybe_stdout_lock_1_f_0(Info_7);
    if ((MaybeLock_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(OutStream_6, Msg_8);
      mercury__io__flush_output_3_p_0(OutStream_6);
    }
    else
    {
      MR_Box Lock_11 = ((MR_Box) ((MR_hl_field(1, MaybeLock_10, (MR_Integer) 0))));

      make__build__lock_stdout_3_p_0(Lock_11);
      mercury__io__write_string_4_p_0(OutStream_6, Msg_8);
      mercury__io__flush_output_3_p_0(OutStream_6);
      make__build__unlock_stdout_3_p_0(Lock_11);
    }
  }
}

void MR_CALL 
make__util__maybe_write_msg_4_p_0(
  MR_Word OutStream_5,
  MR_String Msg_6)
{
  MR_bool succeeded = (strcmp(Msg_6, (MR_String) "") == 0);

  if (!(succeeded))
  {
    mercury__io__write_string_4_p_0(OutStream_5, Msg_6);
    mercury__io__flush_output_3_p_0(OutStream_5);
  }
}

void MR_CALL 
make__util__maybe_write_msg_3_p_0(
  MR_String Msg_4)
{
  MR_bool succeeded;
  MR_Word OutStream_6;

  mercury__io__output_stream_3_p_0(&OutStream_6);
  succeeded = (strcmp(Msg_4, (MR_String) "") == 0);
  if (!(succeeded))
  {
    mercury__io__write_string_4_p_0(OutStream_6, Msg_4);
    mercury__io__flush_output_3_p_0(OutStream_6);
  }
}

void MR_CALL 
make__util__maybe_symlink_or_copy_linked_target_msg_3_p_0(
  MR_Word Globals_4,
  MR_String FileName_5,
  MR_String * Msg_6)
{
  MR_Word VerboseMake_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 77, &VerboseMake_7);
  switch (VerboseMake_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_6 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_14;

        Var_14 = mercury__string__f_43_43_2_f_0(FileName_5, (MR_String) "\n");
        *Msg_6 = mercury__string__f_43_43_2_f_0((MR_String) "Made symlink/copy of ", Var_14);
      }
      break;
  }
}

void MR_CALL 
make__util__maybe_warn_up_to_date_target_msg_6_p_0(
  MR_Word Globals_7,
  MR_Word Target_8,
  MR_String FileName_9,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16,
  MR_String * Msg_11)
{
  MR_bool succeeded;
  MR_Word Warn_12;
  MR_Word CmdLineTargets0_13;
  MR_Word CmdLineTargets_14;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 40, &Warn_12);
  CmdLineTargets0_13 = make__make_info__make_info_get_command_line_targets_1_f_0(STATE_VARIABLE_Info_0_15);
  switch (Warn_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_11 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        succeeded = mercury__set__member_2_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Target_8)), CmdLineTargets0_13);
        if (succeeded)
        {
          MR_String Var_25;

          Var_25 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\'.\n");
          *Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "** Nothing to be done for \140", Var_25);
        }
        else
          *Msg_11 = (MR_String) "";
      }
      break;
  }
  mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Target_8)), CmdLineTargets0_13, &CmdLineTargets_14);
  make__make_info__make_info_set_command_line_targets_3_p_0(CmdLineTargets_14, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

void MR_CALL 
make__util__file_error_msg_2_p_0(
  MR_String FileName_3,
  MR_String * Msg_4)
{
  MR_String Var_10;

  Var_10 = mercury__string__f_43_43_2_f_0(FileName_3, (MR_String) "\'.\n");
  *Msg_4 = mercury__string__f_43_43_2_f_0((MR_String) "** Error making \140", Var_10);
}

void MR_CALL 
make__util__maybe_reanalyse_modules_msg_2_p_0(
  MR_Word Globals_3,
  MR_String * Msg_4)
{
  MR_Word VerboseMake_5;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 77, &VerboseMake_5);
  switch (VerboseMake_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_4 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      *Msg_4 = (MR_String) "Reanalysing invalid/suboptimal modules\n";
      break;
  }
}

void MR_CALL 
make__util__maybe_making_filename_msg_3_p_0(
  MR_Word Globals_4,
  MR_String FileName_5,
  MR_String * Msg_6)
{
  MR_Word VerboseMake_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 77, &VerboseMake_7);
  switch (VerboseMake_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_6 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_14;

        Var_14 = mercury__string__f_43_43_2_f_0(FileName_5, (MR_String) "\n");
        *Msg_6 = mercury__string__f_43_43_2_f_0((MR_String) "Making ", Var_14);
      }
      break;
  }
}

void MR_CALL 
make__util__option_set_one_part_msg_4_p_0(
  MR_Word Globals_5,
  MR_Word Option_6,
  MR_String Part1_7,
  MR_String * Msg_8)
{
  MR_Word OptionValue_9;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, Option_6, &OptionValue_9);
  switch (OptionValue_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_8 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      *Msg_8 = mercury__string__f_43_43_2_f_0(Part1_7, (MR_String) "\n");
      break;
  }
}

void MR_CALL 
make__util__verbose_make_four_part_msg_6_p_0(
  MR_Word Globals_7,
  MR_String Part1_8,
  MR_String Part2_9,
  MR_String Part3_10,
  MR_String Part4_11,
  MR_String * Msg_12)
{
  make__util__option_set_four_part_msg_7_p_0(Globals_7, (MR_Integer) 77, Part1_8, Part2_9, Part3_10, Part4_11, Msg_12);
}

void MR_CALL 
make__util__option_set_four_part_msg_7_p_0(
  MR_Word Globals_8,
  MR_Word Option_9,
  MR_String Part1_10,
  MR_String Part2_11,
  MR_String Part3_12,
  MR_String Part4_13,
  MR_String * Msg_14)
{
  MR_Word OptionValue_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, Option_9, &OptionValue_15);
  switch (OptionValue_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_14 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_27;
        MR_String Var_29;
        MR_String Var_30;
        MR_String Var_32;
        MR_String Var_33;
        MR_String Var_35;

        Var_27 = mercury__string__f_43_43_2_f_0(Part4_13, (MR_String) "\n");
        Var_29 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_27);
        Var_30 = mercury__string__f_43_43_2_f_0(Part3_12, Var_29);
        Var_32 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_30);
        Var_33 = mercury__string__f_43_43_2_f_0(Part2_11, Var_32);
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_33);
        *Msg_14 = mercury__string__f_43_43_2_f_0(Part1_10, Var_35);
      }
      break;
  }
}

void MR_CALL 
make__util__verbose_make_three_part_msg_5_p_0(
  MR_Word Globals_6,
  MR_String Part1_7,
  MR_String Part2_8,
  MR_String Part3_9,
  MR_String * Msg_10)
{
  make__util__option_set_three_part_msg_6_p_0(Globals_6, (MR_Integer) 77, Part1_7, Part2_8, Part3_9, Msg_10);
}

void MR_CALL 
make__util__option_set_three_part_msg_6_p_0(
  MR_Word Globals_7,
  MR_Word Option_8,
  MR_String Part1_9,
  MR_String Part2_10,
  MR_String Part3_11,
  MR_String * Msg_12)
{
  MR_Word OptionValue_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, Option_8, &OptionValue_13);
  switch (OptionValue_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_12 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_23;
        MR_String Var_25;
        MR_String Var_26;
        MR_String Var_28;

        Var_23 = mercury__string__f_43_43_2_f_0(Part3_11, (MR_String) "\n");
        Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_23);
        Var_26 = mercury__string__f_43_43_2_f_0(Part2_10, Var_25);
        Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_26);
        *Msg_12 = mercury__string__f_43_43_2_f_0(Part1_9, Var_28);
      }
      break;
  }
}

void MR_CALL 
make__util__verbose_make_two_part_msg_4_p_0(
  MR_Word Globals_5,
  MR_String Part1_6,
  MR_String Part2_7,
  MR_String * Msg_8)
{
  make__util__option_set_two_part_msg_5_p_0(Globals_5, (MR_Integer) 77, Part1_6, Part2_7, Msg_8);
}

void MR_CALL 
make__util__verbose_make_one_part_msg_3_p_0(
  MR_Word Globals_4,
  MR_String Part1_5,
  MR_String * Msg_6)
{
  MR_Word OptionValue_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 77, &OptionValue_8);
  switch (OptionValue_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_6 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      *Msg_6 = mercury__string__f_43_43_2_f_0(Part1_5, (MR_String) "\n");
      break;
  }
}

void MR_CALL 
make__util__debug_make_msg_3_p_0(
  MR_Word Globals_4,
  MR_Word MakeMsgPred_5,
  MR_String * Msg_6)
{
  MR_Word DebugMake_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 105, &DebugMake_7);
  switch (DebugMake_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_6 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) ((MR_hl_field(0, MakeMsgPred_5, (MR_Integer) 1))));
        MR_Box conv1_Msg_6;

        func_0(((MR_Box) (MakeMsgPred_5)), &conv1_Msg_6);
        *Msg_6 = ((MR_String) (conv1_Msg_6));
      }
      break;
  }
}

MR_bool MR_CALL 
make__util__target_is_grade_or_arch_dependent_1_p_0(
  MR_Word Target_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Target_2)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Target_2)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 6:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 7:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 8:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 9:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 10:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 11:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 12:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Target_2, (MR_Integer) 0))) & (MR_Integer) 1);

        succeeded = (Var_11 == (MR_Integer) 1);
      }
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Target_2, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return succeeded;
}

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_9;

  conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_dependency_list__990__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
make__util__make_dependency_list_2_f_0(
  MR_Word ModuleNames_4,
  MR_Word TargetType_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&make__util_scalar_common_6[2]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (make__util__make_dependency_list_2_f_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (TargetType_5));
  }
  HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Var_7, ModuleNames_4);
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_9;

  conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_target_file_list__986__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
make__util__make_target_file_list_2_f_0(
  MR_Word ModuleNames_4,
  MR_Word TargetType_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&make__util_scalar_common_6[1]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (make__util__make_target_file_list_2_f_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (TargetType_5));
  }
  HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), Var_7, ModuleNames_4);
  return HeadVar__3_3;
}

void MR_CALL 
make__util__remove_make_module_file_8_p_0(
  MR_Word Globals_9,
  MR_Word VerboseOption_10,
  MR_Word ModuleName_11,
  MR_Word Ext_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_String FileName_15;

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_9, (MR_String) "predicate \140make.util.remove_make_module_file\'/8", Ext_12, ModuleName_11, &FileName_15);
  make__util__make_remove_file_7_p_0(Globals_9, VerboseOption_10, FileName_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
}

void MR_CALL 
make__util__remove_make_target_file_8_p_0(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word VerboseOption_11,
  MR_Word Target_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, Target_12, (MR_Integer) 0))));
  MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(0, Target_12, (MR_Integer) 1))));

  make__util__remove_make_target_file_by_name_9_p_0(Globals_9, From_10, VerboseOption_11, ModuleName_15, TargetType_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

void MR_CALL 
make__util__remove_make_target_file_by_name_9_p_0(
  MR_Word Globals_10,
  MR_String From_11,
  MR_Word VerboseOption_12,
  MR_Word ModuleName_13,
  MR_Word TargetType_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_String FileName_17;
  MR_Word STATE_VARIABLE_Info_24_24;
  MR_Word TimestampExt_18;

  make__util__module_target_to_file_name_7_p_0(Globals_10, From_11, TargetType_14, ModuleName_13, &FileName_17);
  make__util__make_remove_file_7_p_0(Globals_10, VerboseOption_12, FileName_17, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_24_24);
  succeeded = make__util__timestamp_extension_2_p_0(TargetType_14, &TimestampExt_18);
  if (succeeded)
  {
    MR_String FileName_26;

    parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_10, (MR_String) "predicate \140make.util.remove_make_module_file\'/8", TimestampExt_18, ModuleName_13, &FileName_26);
    make__util__make_remove_file_7_p_0(Globals_10, VerboseOption_12, FileName_26, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_20);
  }
  else
    *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_24_24;
}

static void MR_CALL 
make__util__make_remove_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_Hash_4;

  make__util__target_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Hash_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Hash_4));
}

void MR_CALL 
make__util__make_remove_file_7_p_0(
  MR_Word Globals_8,
  MR_Word VerboseOption_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_String RemovingMsg_13;
  MR_Word FileTimestamps0_15;
  MR_Word FileTimestamps_16;
  MR_Word STATE_VARIABLE_Info_24_24;
  MR_Word Var_25;
  MR_Word OutStream_28;
  MR_Word Var_14;

  make__util__option_set_two_part_msg_5_p_0(Globals_8, VerboseOption_9, (MR_String) "Removing", FileName_10, &RemovingMsg_13);
  mercury__io__output_stream_3_p_0(&OutStream_28);
  succeeded = (strcmp(RemovingMsg_13, (MR_String) "") == 0);
  if (!(succeeded))
  {
    mercury__io__write_string_4_p_0(OutStream_28, RemovingMsg_13);
    mercury__io__flush_output_3_p_0(OutStream_28);
  }
  mercury__io__file__remove_file_recursively_4_p_0(FileName_10, &Var_14);
  FileTimestamps0_15 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_17);
  mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_10)), FileTimestamps0_15, &FileTimestamps_16);
  make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_16, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_24_24);
  Var_25 = mercury__version_hash_table__unsafe_init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&make__util_scalar_common_1[3]));
  make__make_info__make_info_set_target_file_timestamps_3_p_0(Var_25, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_18);
}

void MR_CALL 
make__util__option_set_two_part_msg_5_p_0(
  MR_Word Globals_6,
  MR_Word Option_7,
  MR_String Part1_8,
  MR_String Part2_9,
  MR_String * Msg_10)
{
  MR_Word OptionValue_11;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, Option_7, &OptionValue_11);
  switch (OptionValue_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_10 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_19;
        MR_String Var_21;

        Var_19 = mercury__string__f_43_43_2_f_0(Part2_9, (MR_String) "\n");
        Var_21 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_19);
        *Msg_10 = mercury__string__f_43_43_2_f_0(Part1_8, Var_21);
      }
      break;
  }
}

static void MR_CALL 
make__util__find_error_or_oldest_ok_timestamp_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeTimestamp_6;

  make__util__find_error_or_older_ok_timestamp_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeTimestamp_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeTimestamp_6));
}

void MR_CALL 
make__util__find_error_or_oldest_ok_timestamp_2_p_0(
  MR_Word MaybeTimestamps_3,
  MR_Word * MaybeTimestamp_4)
{
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Box conv1_MaybeTimestamp_4;

  Var_7 = libs__timestamp__newest_timestamp_0_f_0();
  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (Var_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&make__util_scalar_common_1[0]), (MR_Word) (&make__util_scalar_common_1[0]), (MR_Word) (&make__util_scalar_common_1[2]), MaybeTimestamps_3, ((MR_Box) (Var_6)), &conv1_MaybeTimestamp_4);
  *MaybeTimestamp_4 = ((MR_Word) (conv1_MaybeTimestamp_4));
}

void MR_CALL 
make__util__find_error_or_older_ok_timestamp_3_p_0(
  MR_Word MaybeTimestampA_4,
  MR_Word MaybeTimestampB_5,
  MR_Word * MaybeTimestamp_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) MaybeTimestampA_4)) == (MR_Integer) 1))
    *MaybeTimestamp_6 = MaybeTimestampA_4;
  else
  {
    MR_Word TimestampA_8 = ((MR_Word) ((MR_hl_field(0, MaybeTimestampA_4, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) MaybeTimestampB_5)) == (MR_Integer) 1))
      *MaybeTimestamp_6 = MaybeTimestampB_5;
    else
    {
      MR_Word TimestampB_10 = ((MR_Word) ((MR_hl_field(0, MaybeTimestampB_5, (MR_Integer) 0))));
      MR_Word Timestamp_11;
      MR_Word Var_14;

      libs__timestamp____Compare____timestamp_0_0(&Var_14, TimestampA_8, TimestampB_10);
      succeeded = ((MR_Integer) 1 == Var_14);
      if (succeeded)
        Timestamp_11 = TimestampA_8;
      else
        Timestamp_11 = TimestampB_10;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_11));
      }
    }
  }
}

void MR_CALL 
make__util__get_dependency_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word DependencyFile_9,
  MR_Word * MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) DependencyFile_9)) == (MR_Integer) 1))
  {
    MR_String FileName_13 = ((MR_String) ((MR_hl_field(1, DependencyFile_9, (MR_Integer) 0))));
    MR_Word SearchDirs_14;
    MR_String Var_23;

    Var_23 = mercury__dir__this_directory_0_f_0();
    {
      SearchDirs_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SearchDirs_14, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, SearchDirs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__util__get_file_timestamp_7_p_0(SearchDirs_14, FileName_13, MaybeTimestamp_10, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
  }
  else
  {
    MR_Word Target_15 = ((MR_Word) ((MR_hl_field(0, DependencyFile_9, (MR_Integer) 0))));
    MR_Word MaybeTimestamp0_16;
    MR_Word Var_30;
    MR_Word Var_31;

    make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 0, Target_15, &MaybeTimestamp0_16, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
    succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(0, Target_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_31 = ((MR_Unsigned) ((MR_hl_field(1, Var_30, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (Var_31 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word Var_32;

      Var_32 = libs__timestamp__oldest_timestamp_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      }
    }
    else
      *MaybeTimestamp_10 = MaybeTimestamp0_16;
  }
}

void MR_CALL 
make__util__get_target_timestamp_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word TargetFile_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 1))));

  succeeded = (TargetType_16 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_String FileName_17;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word ModuleName_45;
    MR_Word FileTimestamps0_47;
    MR_Word MaybeTimestamp0_48;
    MR_Box conv0_MaybeTimestamp0_48;

    make__util__get_file_name_9_p_0(Globals_9, (MR_String) "predicate \140make.util.get_target_timestamp\'/8", Search_10, TargetFile_11, &FileName_17, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_28_28);
    ModuleName_45 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 0))));
    FileTimestamps0_47 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_28_28);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), FileTimestamps0_47, ((MR_Box) (FileName_17)), &conv0_MaybeTimestamp0_48);
    if (succeeded)
    {
      MaybeTimestamp0_48 = ((MR_Word) (conv0_MaybeTimestamp0_48));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_12 = MaybeTimestamp0_48;
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_28_28;
    }
    else
    {
      MR_Word Status_49;

      analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__util_scalar_common_2[1]), ((MR_Box) ((MR_Integer) 0)), Globals_9, ModuleName_45, &Status_49);
      switch (Status_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FileTimestamps_50;

            *MaybeTimestamp_12 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[23]));
            mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_17)), ((MR_Box) (*MaybeTimestamp_12)), FileTimestamps0_47, &FileTimestamps_50);
            make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_50, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_24);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word ModuleName_59 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 0))));
            MR_Word TargetType_60 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 1))));
            MR_Word SearchDirs_61;
            MR_Word MaybeTimestamp0_62;
            MR_Word STATE_VARIABLE_Info_33_71;

            switch (Search_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String Var_69;

                  Var_69 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_61, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(1, SearchDirs_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 0:
                switch (MR_tag((MR_Word) TargetType_60)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(TargetType_60)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                      case (MR_Integer) 10:
                      case (MR_Integer) 11:
                      case (MR_Integer) 12:
                      case (MR_Integer) 13:
                        {
                          MR_String Var_83;

                          Var_83 = mercury__dir__this_directory_0_f_0();
                          {
                            SearchDirs_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, SearchDirs_61, 0) = ((MR_Box) (Var_83));
                            MR_hl_field(1, SearchDirs_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                        {
                          MR_Word SearchDirOpt_116 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[26])), (MR_Integer) 0))));
                          MR_Word SearchDirs0_117;
                          MR_String Var_109;

                          libs__globals__lookup_accumulating_option_3_p_0(Globals_9, SearchDirOpt_116, &SearchDirs0_117);
                          Var_109 = mercury__dir__this_directory_0_f_0();
                          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_109)), SearchDirs0_117);
                          if (succeeded)
                            SearchDirs_61 = SearchDirs0_117;
                          else
                          {
                            MR_String Var_111;

                            Var_111 = mercury__dir__this_directory_0_f_0();
                            {
                              SearchDirs_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SearchDirs_61, 0) = ((MR_Box) (Var_111));
                              MR_hl_field(1, SearchDirs_61, 1) = ((MR_Box) (SearchDirs0_117));
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        {
                          MR_Word SearchDirOpt_79 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[24])), (MR_Integer) 0))));
                          MR_Word SearchDirs0_80;
                          MR_String Var_81;

                          libs__globals__lookup_accumulating_option_3_p_0(Globals_9, SearchDirOpt_79, &SearchDirs0_80);
                          Var_81 = mercury__dir__this_directory_0_f_0();
                          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_81)), SearchDirs0_80);
                          if (succeeded)
                            SearchDirs_61 = SearchDirs0_80;
                          else
                          {
                            MR_String Var_82;

                            Var_82 = mercury__dir__this_directory_0_f_0();
                            {
                              SearchDirs_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SearchDirs_61, 0) = ((MR_Box) (Var_82));
                              MR_hl_field(1, SearchDirs_61, 1) = ((MR_Box) (SearchDirs0_80));
                            }
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SearchDirOpt_104 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[25])), (MR_Integer) 0))));
                      MR_Word SearchDirs0_105;
                      MR_String Var_97;

                      libs__globals__lookup_accumulating_option_3_p_0(Globals_9, SearchDirOpt_104, &SearchDirs0_105);
                      Var_97 = mercury__dir__this_directory_0_f_0();
                      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_97)), SearchDirs0_105);
                      if (succeeded)
                        SearchDirs_61 = SearchDirs0_105;
                      else
                      {
                        MR_String Var_99;

                        Var_99 = mercury__dir__this_directory_0_f_0();
                        {
                          SearchDirs_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, SearchDirs_61, 0) = ((MR_Box) (Var_99));
                          MR_hl_field(1, SearchDirs_61, 1) = ((MR_Box) (SearchDirs0_105));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String Var_83;

                      Var_83 = mercury__dir__this_directory_0_f_0();
                      {
                        SearchDirs_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SearchDirs_61, 0) = ((MR_Box) (Var_83));
                        MR_hl_field(1, SearchDirs_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_String Var_83;

                      Var_83 = mercury__dir__this_directory_0_f_0();
                      {
                        SearchDirs_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SearchDirs_61, 0) = ((MR_Box) (Var_83));
                        MR_hl_field(1, SearchDirs_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                }
                break;
            }
            make__util__get_file_timestamp_7_p_0(SearchDirs_61, FileName_17, &MaybeTimestamp0_62, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_33_71);
            succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_62)) == (MR_Integer) 1);
            if (succeeded)
            {
              if ((TargetType_60 == (MR_Word) ((MR_Unsigned) 28U)))
                succeeded = MR_TRUE;
              else
              if ((TargetType_60 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
            if (succeeded)
            {
              MR_Word MaybeModuleDepInfo_64;
              MR_Word STATE_VARIABLE_Info_35_73;
              MR_Word ModuleDepInfo_65;
              MR_String ModuleDir_66;
              MR_String Var_77;

              make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_59, &MaybeModuleDepInfo_64, STATE_VARIABLE_Info_33_71, &STATE_VARIABLE_Info_35_73);
              succeeded = (MaybeModuleDepInfo_64 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModuleDepInfo_65 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_64, (MR_Integer) 0))));
                parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_65, &ModuleDir_66);
                Var_77 = mercury__dir__this_directory_0_f_0();
                succeeded = (strcmp(ModuleDir_66, Var_77) == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word FileTimestamps0_67;
                MR_Word FileTimestamps_68;
                MR_Word Var_74;

                Var_74 = libs__timestamp__oldest_timestamp_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeTimestamp_12 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
                }
                FileTimestamps0_67 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_35_73);
                mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_17)), ((MR_Box) (*MaybeTimestamp_12)), FileTimestamps0_67, &FileTimestamps_68);
                make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_68, STATE_VARIABLE_Info_35_73, STATE_VARIABLE_Info_24);
              }
              else
              {
                *MaybeTimestamp_12 = MaybeTimestamp0_62;
                *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_35_73;
              }
            }
            else
            {
              *MaybeTimestamp_12 = MaybeTimestamp0_62;
              *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_33_71;
            }
          }
          break;
      }
    }
  }
  else
  {
    MR_Word TargetFileTimestamps0_18;
    MR_Word Timestamp_19;
    MR_Box conv1_Timestamp_19;

    TargetFileTimestamps0_18 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_23);
    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), TargetFileTimestamps0_18, ((MR_Box) (TargetFile_11)), &conv1_Timestamp_19);
    if (succeeded)
    {
      Timestamp_19 = ((MR_Word) (conv1_Timestamp_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_19));
      }
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_33_33;
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_String FileName_40;

      make__util__get_file_name_9_p_0(Globals_9, (MR_String) "predicate \140make.util.get_target_timestamp\'/8", Search_10, TargetFile_11, &FileName_40, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_33_33);
      make__util__get_target_timestamp_2_9_p_0(Globals_9, Search_10, TargetFile_11, FileName_40, MaybeTimestamp_12, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_35_35);
      if (((MR_tag((MR_Word) *MaybeTimestamp_12)) == (MR_Integer) 1))
        *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_35_35;
      else
      {
        MR_Word TargetFileTimestamps1_20;
        MR_Word TargetFileTimestamps_21;
        MR_Word Timestamp_38 = ((MR_Word) ((MR_hl_field(0, *MaybeTimestamp_12, (MR_Integer) 0))));

        TargetFileTimestamps1_20 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_35_35);
        mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_11)), ((MR_Box) (Timestamp_38)), TargetFileTimestamps1_20, &TargetFileTimestamps_21);
        make__make_info__make_info_set_target_file_timestamps_3_p_0(TargetFileTimestamps_21, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_24);
      }
    }
  }
}

static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, TargetFile_12, (MR_Integer) 0))));
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(0, TargetFile_12, (MR_Integer) 1))));
  MR_Word SearchDirs_19;
  MR_Word MaybeTimestamp0_20;
  MR_Word STATE_VARIABLE_Info_33_33;

  switch (Search_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_31;

        Var_31 = mercury__dir__this_directory_0_f_0();
        {
          SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) TargetType_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(TargetType_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
              {
                MR_String Var_46;

                Var_46 = mercury__dir__this_directory_0_f_0();
                {
                  SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_46));
                  MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
              {
                MR_Word SearchDirOpt_79 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[26])), (MR_Integer) 0))));
                MR_Word SearchDirs0_80;
                MR_String Var_72;

                libs__globals__lookup_accumulating_option_3_p_0(Globals_10, SearchDirOpt_79, &SearchDirs0_80);
                Var_72 = mercury__dir__this_directory_0_f_0();
                succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_72)), SearchDirs0_80);
                if (succeeded)
                  SearchDirs_19 = SearchDirs0_80;
                else
                {
                  MR_String Var_74;

                  Var_74 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_74));
                    MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) (SearchDirs0_80));
                  }
                }
              }
              break;
            case (MR_Integer) 6:
            case (MR_Integer) 7:
              {
                MR_Word SearchDirOpt_42 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[24])), (MR_Integer) 0))));
                MR_Word SearchDirs0_43;
                MR_String Var_44;

                libs__globals__lookup_accumulating_option_3_p_0(Globals_10, SearchDirOpt_42, &SearchDirs0_43);
                Var_44 = mercury__dir__this_directory_0_f_0();
                succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_44)), SearchDirs0_43);
                if (succeeded)
                  SearchDirs_19 = SearchDirs0_43;
                else
                {
                  MR_String Var_45;

                  Var_45 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_45));
                    MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) (SearchDirs0_43));
                  }
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SearchDirOpt_67 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[25])), (MR_Integer) 0))));
            MR_Word SearchDirs0_68;
            MR_String Var_60;

            libs__globals__lookup_accumulating_option_3_p_0(Globals_10, SearchDirOpt_67, &SearchDirs0_68);
            Var_60 = mercury__dir__this_directory_0_f_0();
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_60)), SearchDirs0_68);
            if (succeeded)
              SearchDirs_19 = SearchDirs0_68;
            else
            {
              MR_String Var_62;

              Var_62 = mercury__dir__this_directory_0_f_0();
              {
                SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_62));
                MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) (SearchDirs0_68));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_46;

            Var_46 = mercury__dir__this_directory_0_f_0();
            {
              SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_46;

            Var_46 = mercury__dir__this_directory_0_f_0();
            {
              SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      break;
  }
  make__util__get_file_timestamp_7_p_0(SearchDirs_19, FileName_13, &MaybeTimestamp0_20, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_33_33);
  succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_20)) == (MR_Integer) 1);
  if (succeeded)
  {
    if ((TargetType_18 == (MR_Word) ((MR_Unsigned) 28U)))
      succeeded = MR_TRUE;
    else
    if ((TargetType_18 == (MR_Word) ((MR_Unsigned) 24U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
  {
    MR_Word MaybeModuleDepInfo_22;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word ModuleDepInfo_23;
    MR_String ModuleDir_24;
    MR_String Var_40;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleDepInfo_22, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_35_35);
    succeeded = (MaybeModuleDepInfo_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ModuleDepInfo_23 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_22, (MR_Integer) 0))));
      parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_23, &ModuleDir_24);
      Var_40 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(ModuleDir_24, Var_40) == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word FileTimestamps0_25;
      MR_Word FileTimestamps_26;
      MR_Word Var_37;

      Var_37 = libs__timestamp__oldest_timestamp_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      }
      FileTimestamps0_25 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_35_35);
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_13)), ((MR_Box) (*MaybeTimestamp_14)), FileTimestamps0_25, &FileTimestamps_26);
      make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_26, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_28);
    }
    else
    {
      *MaybeTimestamp_14 = MaybeTimestamp0_20;
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_35_35;
    }
  }
  else
  {
    *MaybeTimestamp_14 = MaybeTimestamp0_20;
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_33_33;
  }
}

void MR_CALL 
make__util__get_timestamp_file_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word HeadVar__2_2,
  MR_Word * MaybeTimestamp_11,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word TargetType_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String FileName_15;
  MR_Word SearchDirs_16;
  MR_String Var_24;
  MR_Word TimestampExt_14;

  succeeded = make__util__timestamp_extension_2_p_0(TargetType_10, &TimestampExt_14);
  if (succeeded)
    parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_8, (MR_String) "predicate \140make.util.get_timestamp_file_timestamp\'/7", TimestampExt_14, ModuleName_9, &FileName_15);
  else
    make__util__module_target_to_file_name_7_p_0(Globals_8, (MR_String) "predicate \140make.util.get_timestamp_file_timestamp\'/7", TargetType_10, ModuleName_9, &FileName_15);
  Var_24 = mercury__dir__this_directory_0_f_0();
  {
    SearchDirs_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SearchDirs_16, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, SearchDirs_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__util__get_file_timestamp_7_p_0(SearchDirs_16, FileName_15, MaybeTimestamp_11, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

void MR_CALL 
make__util__get_file_timestamp_7_p_0(
  MR_Word SearchDirs_8,
  MR_String FileName_9,
  MR_Word * MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word FileTimestamps0_13;
  MR_Word MaybeTimestamp0_14;
  MR_Box conv0_MaybeTimestamp0_14;

  FileTimestamps0_13 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_21);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), FileTimestamps0_13, ((MR_Box) (FileName_9)), &conv0_MaybeTimestamp0_14);
  if (succeeded)
  {
    MaybeTimestamp0_14 = ((MR_Word) (conv0_MaybeTimestamp0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *MaybeTimestamp_10 = MaybeTimestamp0_14;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
  else
  {
    MR_Word SearchResult_15;

    parse_tree__find_module__search_for_file_mod_time_5_p_0(SearchDirs_8, FileName_9, &SearchResult_15);
    if (((MR_tag((MR_Word) SearchResult_15)) == (MR_Integer) 1))
    {
      MR_String NotFoundMsg_20;
      MR_String Var_36;

      Var_36 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' not found");
      NotFoundMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", Var_36);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NotFoundMsg_20));
      }
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    }
    else
    {
      MR_Word TimeT_16 = ((MR_Word) ((MR_hl_field(0, SearchResult_15, (MR_Integer) 0))));
      MR_Word Timestamp_17;
      MR_Word FileTimestamps_18;

      Timestamp_17 = libs__timestamp__time_t_to_timestamp_1_f_0(TimeT_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_17));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_9)), ((MR_Box) (*MaybeTimestamp_10)), FileTimestamps0_13, &FileTimestamps_18);
      make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_18, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    }
  }
}

static void MR_CALL 
make__util__init_target_file_timestamps_0_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_Hash_4;

  make__util__target_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Hash_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Hash_4));
}

MR_Word MR_CALL 
make__util__init_target_file_timestamps_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__version_hash_table__unsafe_init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&make__util_scalar_common_1[1]));
  return HeadVar__1_1;
}

MR_bool MR_CALL 
make__util__timestamp_extension_2_p_0(
  MR_Word ModuleTargetType_3,
  MR_Word * Ext_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ModuleTargetType_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(ModuleTargetType_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            *Ext_4 = (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[11]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            *Ext_4 = (MR_Word) (&make__util_scalar_common_3[2]);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            *Ext_4 = (MR_Word) (&make__util_scalar_common_3[3]);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            *Ext_4 = (MR_Word) (&make__util_scalar_common_3[3]);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            *Ext_4 = (MR_Word) (&make__util_scalar_common_3[4]);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            *Ext_4 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[5]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            *Ext_4 = (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[8]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            *Ext_4 = (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[9]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            *Ext_4 = (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[10]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            *Ext_4 = (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[12]));
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *Ext_4 = (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[9]));
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
make__util__target_extension_synonym_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = (strcmp(HeadVar__1_1, (MR_String) ".csharp") == 0);

  if (succeeded)
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 40U);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
make__util__extension_to_target_type_3_p_0(
  MR_Word Globals_4,
  MR_String ExtStr_5,
  MR_Word * Target_6)
{
  MR_bool succeeded;
  MR_Word TargetPrime_7;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    if (((MR_nth_code_unit(ExtStr_5, 0)) == (MR_Integer) 46))
      switch (MR_nth_code_unit(ExtStr_5, 1)) {
        case (MR_Integer) 97:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".analysis"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(ExtStr_5, 2)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".class"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".cs"))
                case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 101:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".err"))
            case_num_0 = (MR_Integer) 4;
          break;
        case (MR_Integer) 105:
          if (((((MR_nth_code_unit(ExtStr_5, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(ExtStr_5, 3)) == (MR_Integer) 116))))
            switch (MR_nth_code_unit(ExtStr_5, 4)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 5;
                break;
              case (MR_Integer) 48:
                if (MR_offset_streq(5, ExtStr_5, (MR_String) ".int0"))
                  case_num_0 = (MR_Integer) 6;
                break;
              case (MR_Integer) 50:
                if (MR_offset_streq(5, ExtStr_5, (MR_String) ".int2"))
                  case_num_0 = (MR_Integer) 7;
                break;
              case (MR_Integer) 51:
                if (MR_offset_streq(5, ExtStr_5, (MR_String) ".int3"))
                  case_num_0 = (MR_Integer) 8;
                break;
            }
          break;
        case (MR_Integer) 106:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".java"))
            case_num_0 = (MR_Integer) 9;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(ExtStr_5, 2)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".mh"))
                case_num_0 = (MR_Integer) 11;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".mih"))
                case_num_0 = (MR_Integer) 12;
              break;
          }
          break;
        case (MR_Integer) 111:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".opt"))
            case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".track_flags"))
            case_num_0 = (MR_Integer) 14;
          break;
        case (MR_Integer) 120:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".xml"))
            case_num_0 = (MR_Integer) 15;
          break;
      }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      TargetPrime_7 = ((&make__util_vector_common_4[0 + case_num_0]))->make__util__vector_common_type_4_0__vct_4_f_0;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *Target_6 = TargetPrime_7;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word PIC_8;

    succeeded = backend_libs__compile_target_code__is_maybe_pic_object_file_extension_3_p_0(Globals_4, ExtStr_5, &PIC_8);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Target_6 = base;
        MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (PIC_8));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
make__util__linked_target_file_name_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word TargetType_9,
  MR_String * FileName_10)
{
  switch (TargetType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[2])), ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 4:
      parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[3])), ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 0:
      parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[4])), ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 6:
    case (MR_Integer) 5:
      parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[5])), ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 2:
      parse_tree__file_names__module_name_to_lib_file_name_6_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_String) "lib", (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[6])), ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 1:
      parse_tree__file_names__module_name_to_lib_file_name_6_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_String) "lib", (MR_Word) (MR_mkword(3, &make__util_scalar_common_2[7])), ModuleName_8, FileName_10);
      break;
  }
}

void MR_CALL 
make__util__dependency_file_to_file_name_5_p_0(
  MR_Word Globals_6,
  MR_Word DepFile_7,
  MR_String * FileName_8)
{
  if (((MR_tag((MR_Word) DepFile_7)) == (MR_Integer) 1))
    *FileName_8 = ((MR_String) ((MR_hl_field(1, DepFile_7, (MR_Integer) 0))));
  else
  {
    MR_Word TargetFile_10 = ((MR_Word) ((MR_hl_field(0, DepFile_7, (MR_Integer) 0))));
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(0, TargetFile_10, (MR_Integer) 0))));
    MR_Word TargetType_15 = ((MR_Word) ((MR_hl_field(0, TargetFile_10, (MR_Integer) 1))));

    make__util__module_target_to_file_name_7_p_0(Globals_6, (MR_String) "predicate \140make.util.dependency_file_to_file_name\'/5", TargetType_15, ModuleName_14, FileName_8);
  }
}

void MR_CALL 
make__util__get_make_target_file_name_6_p_0(
  MR_Word Globals_7,
  MR_String From_8,
  MR_Word TargetFile_9,
  MR_String * FileName_10)
{
  MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(0, TargetFile_9, (MR_Integer) 0))));
  MR_Word TargetType_13 = ((MR_Word) ((MR_hl_field(0, TargetFile_9, (MR_Integer) 1))));

  make__util__module_target_to_file_name_7_p_0(Globals_7, From_8, TargetType_13, ModuleName_12, FileName_10);
}

void MR_CALL 
make__util__get_file_name_9_p_0(
  MR_Word Globals_10,
  MR_String From_11,
  MR_Word Search_12,
  MR_Word TargetFile_13,
  MR_String * FileName_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));

  succeeded = (TargetType_18 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word MaybeModuleDepInfo_19;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_17, FileName_14);
    else
    {
      MR_Word ModuleDepInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_19, (MR_Integer) 0))));

      parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo_20, FileName_14);
    }
  }
  else
  {
    MR_Word TargetExt_21;

    switch (MR_tag((MR_Word) TargetType_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TargetType_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TargetExt_21 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[12]));
            break;
          case (MR_Integer) 2:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[13]));
            break;
          case (MR_Integer) 3:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[14]));
            break;
          case (MR_Integer) 4:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[15]));
            break;
          case (MR_Integer) 5:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[17]));
            break;
          case (MR_Integer) 6:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[20]));
            break;
          case (MR_Integer) 7:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[6]));
            break;
          case (MR_Integer) 8:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[21]));
            break;
          case (MR_Integer) 9:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[7]));
            break;
          case (MR_Integer) 10:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[11]));
            break;
          case (MR_Integer) 11:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[19]));
            break;
          case (MR_Integer) 12:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[18]));
            break;
          case (MR_Integer) 13:
            TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[22]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_73 = ((MR_Unsigned) ((MR_hl_field(1, TargetType_18, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_73) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[9]));
              break;
            case (MR_Integer) 1:
              TargetExt_21 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[10]));
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_33 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_18, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ObjExt_34;
          MR_Word Var_68;
          MR_Word Var_35;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_33, &ObjExt_34, &Var_35);
          {
            Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_68, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_34));
          }
          {
            TargetExt_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TargetExt_21, 0) = ((MR_Box) (Var_68));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TargetType_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, TargetType_18, (MR_Integer) 1)));

              {
                TargetExt_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, TargetExt_21, 0) = (MR_Box) (packed_word_2);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FactFile_37 = ((MR_String) ((MR_hl_field(3, TargetType_18, (MR_Integer) 2))));
              MR_Word PIC_72 = ((MR_Unsigned) ((MR_hl_field(3, TargetType_18, (MR_Integer) 1))) & (MR_Integer) 1);

              {
                TargetExt_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TargetExt_21, 0) = (MR_Box) ((MR_Unsigned) (PIC_72));
                MR_hl_field(3, TargetExt_21, 1) = ((MR_Box) (FactFile_37));
              }
            }
            break;
        }
        break;
    }
    switch (MR_tag((MR_Word) TargetExt_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_17, FileName_14);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ext_22 = ((MR_Word) ((MR_hl_field(1, TargetExt_21, (MR_Integer) 0))));

          switch (Search_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_10, From_11, Ext_22, ModuleName_17, FileName_14);
              break;
            case (MR_Integer) 0:
              parse_tree__file_names__module_name_to_search_file_name_5_p_0(Globals_10, From_11, Ext_22, ModuleName_17, FileName_14);
              break;
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        switch (Search_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            make__util__module_target_to_file_name_7_p_0(Globals_10, From_11, TargetType_18, ModuleName_17, FileName_14);
            break;
          case (MR_Integer) 0:
            make__util__module_target_to_search_file_name_7_p_0(Globals_10, From_11, TargetType_18, ModuleName_17, FileName_14);
            break;
        }
        break;
    }
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
  }
}

static void MR_CALL 
make__util__module_target_to_search_file_name_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_Word TargetType_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12)
{
  while (MR_TRUE)
  {
    MR_Word TargetExt_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TargetType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TargetType_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TargetExt_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[12]));
            break;
          case (MR_Integer) 2:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[13]));
            break;
          case (MR_Integer) 3:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[14]));
            break;
          case (MR_Integer) 4:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[15]));
            break;
          case (MR_Integer) 5:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[17]));
            break;
          case (MR_Integer) 6:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[20]));
            break;
          case (MR_Integer) 7:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[6]));
            break;
          case (MR_Integer) 8:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[21]));
            break;
          case (MR_Integer) 9:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[7]));
            break;
          case (MR_Integer) 10:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[11]));
            break;
          case (MR_Integer) 11:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[19]));
            break;
          case (MR_Integer) 12:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[18]));
            break;
          case (MR_Integer) 13:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[22]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_71 = ((MR_Unsigned) ((MR_hl_field(1, TargetType_10, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_71) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[9]));
              break;
            case (MR_Integer) 1:
              TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[10]));
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_31 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_10, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ObjExt_32;
          MR_Word Var_66;
          MR_Word Var_33;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_31, &ObjExt_32, &Var_33);
          {
            Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_66, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_32));
          }
          {
            TargetExt_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TargetExt_14, 0) = ((MR_Box) (Var_66));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TargetType_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, TargetType_10, (MR_Integer) 1)));

              {
                TargetExt_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, TargetExt_14, 0) = (MR_Box) (packed_word_2);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FactFile_35 = ((MR_String) ((MR_hl_field(3, TargetType_10, (MR_Integer) 2))));
              MR_Word PIC_70 = ((MR_Unsigned) ((MR_hl_field(3, TargetType_10, (MR_Integer) 1))) & (MR_Integer) 1);

              {
                TargetExt_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TargetExt_14, 0) = (MR_Box) ((MR_Unsigned) (PIC_70));
                MR_hl_field(3, TargetExt_14, 1) = ((MR_Box) (FactFile_35));
              }
            }
            break;
        }
        break;
    }
    switch (MR_tag((MR_Word) TargetExt_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_11, FileName_12);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ext_15 = ((MR_Word) ((MR_hl_field(1, TargetExt_14, (MR_Integer) 0))));

          parse_tree__file_names__module_name_to_search_file_name_5_p_0(Globals_8, From_9, Ext_15, ModuleName_11, FileName_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_16 = ((((MR_Unsigned) ((MR_hl_field(2, TargetExt_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word Lang_17 = ((MR_Unsigned) ((MR_hl_field(2, TargetExt_14, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ForeignModuleName_18;
          MR_Word Var_26;
          MR_Word next_value_of_TargetType_10;
          MR_Word next_value_of_ModuleName_11;

          parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_11, Lang_17, &ForeignModuleName_18);
          {
            Var_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_26, 0) = (MR_Box) ((MR_Unsigned) (PIC_16));
          }
          // direct tailcall eliminated
          ;
          next_value_of_TargetType_10 = Var_26;
          next_value_of_ModuleName_11 = ForeignModuleName_18;
          TargetType_10 = next_value_of_TargetType_10;
          ModuleName_11 = next_value_of_ModuleName_11;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String FactFile_19 = ((MR_String) ((MR_hl_field(3, TargetExt_14, (MR_Integer) 1))));
          MR_Word ObjExt_20;
          MR_Word Var_29;
          MR_Word PIC_30 = ((MR_Unsigned) ((MR_hl_field(3, TargetExt_14, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_21;
          MR_Word _FactDirs_22;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_30, &ObjExt_20, &Var_21);
          {
            Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_29, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_20));
          }
          parse_tree__file_names__fact_table_file_name_return_dirs_6_p_0(Globals_8, (MR_String) "predicate \140make.util.module_target_to_search_file_name\'/7", Var_29, FactFile_19, &_FactDirs_22, FileName_12);
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
make__util__module_target_to_file_name_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_Word TargetType_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12)
{
  while (MR_TRUE)
  {
    MR_Word TargetExt_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TargetType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TargetType_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TargetExt_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[12]));
            break;
          case (MR_Integer) 2:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[13]));
            break;
          case (MR_Integer) 3:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[14]));
            break;
          case (MR_Integer) 4:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[15]));
            break;
          case (MR_Integer) 5:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[17]));
            break;
          case (MR_Integer) 6:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[20]));
            break;
          case (MR_Integer) 7:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[6]));
            break;
          case (MR_Integer) 8:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[21]));
            break;
          case (MR_Integer) 9:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[7]));
            break;
          case (MR_Integer) 10:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[11]));
            break;
          case (MR_Integer) 11:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[19]));
            break;
          case (MR_Integer) 12:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[18]));
            break;
          case (MR_Integer) 13:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[22]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_71 = ((MR_Unsigned) ((MR_hl_field(1, TargetType_10, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_71) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[9]));
              break;
            case (MR_Integer) 1:
              TargetExt_14 = (MR_Word) (MR_mkword(1, &make__util_scalar_common_3[10]));
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_31 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_10, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ObjExt_32;
          MR_Word Var_66;
          MR_Word Var_33;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_31, &ObjExt_32, &Var_33);
          {
            Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_66, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_32));
          }
          {
            TargetExt_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TargetExt_14, 0) = ((MR_Box) (Var_66));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TargetType_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, TargetType_10, (MR_Integer) 1)));

              {
                TargetExt_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, TargetExt_14, 0) = (MR_Box) (packed_word_2);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FactFile_35 = ((MR_String) ((MR_hl_field(3, TargetType_10, (MR_Integer) 2))));
              MR_Word PIC_70 = ((MR_Unsigned) ((MR_hl_field(3, TargetType_10, (MR_Integer) 1))) & (MR_Integer) 1);

              {
                TargetExt_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TargetExt_14, 0) = (MR_Box) ((MR_Unsigned) (PIC_70));
                MR_hl_field(3, TargetExt_14, 1) = ((MR_Box) (FactFile_35));
              }
            }
            break;
        }
        break;
    }
    switch (MR_tag((MR_Word) TargetExt_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_11, FileName_12);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ext_15 = ((MR_Word) ((MR_hl_field(1, TargetExt_14, (MR_Integer) 0))));

          parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_8, From_9, Ext_15, ModuleName_11, FileName_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_16 = ((((MR_Unsigned) ((MR_hl_field(2, TargetExt_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word Lang_17 = ((MR_Unsigned) ((MR_hl_field(2, TargetExt_14, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ForeignModuleName_18;
          MR_Word Var_26;
          MR_Word next_value_of_TargetType_10;
          MR_Word next_value_of_ModuleName_11;

          parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_11, Lang_17, &ForeignModuleName_18);
          {
            Var_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_26, 0) = (MR_Box) ((MR_Unsigned) (PIC_16));
          }
          // direct tailcall eliminated
          ;
          next_value_of_TargetType_10 = Var_26;
          next_value_of_ModuleName_11 = ForeignModuleName_18;
          TargetType_10 = next_value_of_TargetType_10;
          ModuleName_11 = next_value_of_ModuleName_11;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String FactFile_19 = ((MR_String) ((MR_hl_field(3, TargetExt_14, (MR_Integer) 1))));
          MR_Word ObjExt_20;
          MR_Word Var_29;
          MR_Word PIC_30 = ((MR_Unsigned) ((MR_hl_field(3, TargetExt_14, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_21;
          MR_Word _FactDirs_22;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_30, &ObjExt_20, &Var_21);
          {
            Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_29, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_20));
          }
          parse_tree__file_names__fact_table_file_name_return_dirs_6_p_0(Globals_8, (MR_String) "predicate \140make.util.module_target_to_file_name\'/7", Var_29, FactFile_19, &_FactDirs_22, FileName_12);
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
make__util____Unify____target_extension_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__util____Unify____target_extension_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__util____Compare____target_extension_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__util____Compare____target_extension_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__util__init(void)
{
}

void mercury__make__util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_target_extension_0);
}

void mercury__make__util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.util.
