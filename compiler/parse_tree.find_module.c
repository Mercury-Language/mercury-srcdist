/*
** Automatically generated from `find_module.m'
** by the Mercury compiler,
** version rotd-2026-04-14
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


// :- module parse_tree.find_module.
// :- implementation.

/*
INIT mercury__parse_tree__find_module__init
ENDINIT
*/

#include "parse_tree.find_module.mih"


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
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_dir_name_and_contents_0_0[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_dir_name_and_contents_0_0;

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_dir_name_and_contents_0_0[1];

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_dir_name_and_contents_0[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_dir_name_and_contents_0[1];

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_dir_name_and_contents_0[1];

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_dir_name_and_stream_0_0[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_dir_name_and_stream_0_0;

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_dir_name_and_stream_0_0[1];

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_dir_name_and_stream_0[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_dir_name_and_stream_0[1];

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_dir_name_and_stream_0[1];

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_path_name_and_stream_0_0[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_path_name_and_stream_0_0;

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_path_name_and_stream_0_0[1];

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_path_name_and_stream_0[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_path_name_and_stream_0[1];

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_path_name_and_stream_0[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_0;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_1[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_1;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_2[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_2;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_3[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_3;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_4[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_4;

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_3[2];

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_dirs_0[4];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_dirs_0[5];

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_dirs_0[5];

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_0[2];

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_0[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_0;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_1[2];

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_1[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_1;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_2[2];

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_2[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_2;

static const MR_FA_TypeInfo_Struct2 parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_3[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_3;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_4[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_4;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_5[2];

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_5[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_5;

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_3[3];

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_private_dirs_0[4];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_private_dirs_0[6];

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_private_dirs_0[6];

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_0[2];

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_tail_dirs_0_0[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_0;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_1[2];

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_tail_dirs_0_1[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_1;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_2[2];

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_tail_dirs_0_2[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_2;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_3[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_3;

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_3[1];

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_private_tail_dirs_0[4];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_private_tail_dirs_0[4];

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_private_tail_dirs_0[4];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_tail_dirs_0_0;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_tail_dirs_0_1[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_tail_dirs_0_1;

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_tail_dirs_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_tail_dirs_0_3[1];

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_tail_dirs_0[2];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_tail_dirs_0[2];

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_tail_dirs_0[2];

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__compute_search_dirs__671__1_2_f_0(
  MR_String GradeDir_64,
  MR_String LambdaHeadVar__1_44);

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__compute_search_dirs__651__1_2_f_0(
  MR_String GradeDir_23,
  MR_String LambdaHeadVar__1_37);

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__541__1_1_f_0(
  MR_String LambdaHeadVar__1_15);

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__484__1_1_f_0(
  MR_String LambdaHeadVar__1_39);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__find_module__search_for_file_mod_time_loop_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeModTime_8);

static void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeDirNameAndContents_8);

static void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeDirNameAndStream_8);

static MR_Box MR_CALL 
parse_tree__find_module__compute_search_dirs_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__find_module__compute_search_dirs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__find_module__compute_search_dirs_2_p_0(
  MR_Word SearchAuthDirs_3,
  MR_Word * Dirs_4);

static MR_Box MR_CALL 
parse_tree__find_module__cannot_find_in_dirs_msg_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__find_module__cannot_find_in_dirs_msg_5_p_0(
  MR_String FileName_6,
  MR_Word Dirs_7,
  MR_String * Msg_8);

static void MR_CALL 
parse_tree__find_module__search_for_file_and_stream_loop_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeFilePathNameAndStream_8);

static MR_bool MR_CALL 
parse_tree__find_module____Unify____dir_name_and_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__find_module____Compare____dir_name_and_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__find_module____Unify____dir_name_and_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__find_module____Compare____dir_name_and_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__find_module____Unify____path_name_and_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__find_module____Compare____path_name_and_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__find_module____Compare____search_auth_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_private_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__find_module____Compare____search_auth_private_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_private_tail_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__find_module____Compare____search_auth_private_tail_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_tail_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__find_module____Compare____search_auth_tail_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_4[1][6];




static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_3[0])),
    ((MR_Box) (parse_tree__find_module__cannot_find_in_dirs_msg_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_3[0])),
    ((MR_Box) (parse_tree__find_module__search_for_module_source_and_stream_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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


static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_dir_name_and_contents_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_dir_name_and_contents_0_0 = {
  (MR_String) "dir_name_and_contents",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__find_module__parse_tree__find_module__field_types_dir_name_and_contents_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_dir_name_and_contents_0_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_dir_name_and_contents_0_0 };

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_dir_name_and_contents_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_dir_name_and_contents_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_dir_name_and_contents_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_dir_name_and_contents_0_0 };

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_dir_name_and_contents_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__find_module__parse_tree__find_module__type_ctor_info_dir_name_and_contents_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__find_module____Unify____dir_name_and_contents_0_0_10001)),
  ((MR_Box) (parse_tree__find_module____Compare____dir_name_and_contents_0_0_10001)),
  (MR_String) "parse_tree.find_module",
  (MR_String) "dir_name_and_contents",
  { parse_tree__find_module__parse_tree__find_module__du_name_ordered_dir_name_and_contents_0 },
  { parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_dir_name_and_contents_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__find_module__parse_tree__find_module__functor_number_map_dir_name_and_contents_0,

};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_dir_name_and_stream_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_input_stream_0)
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_dir_name_and_stream_0_0 = {
  (MR_String) "dir_name_and_stream",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__find_module__parse_tree__find_module__field_types_dir_name_and_stream_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_dir_name_and_stream_0_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_dir_name_and_stream_0_0 };

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_dir_name_and_stream_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_dir_name_and_stream_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_dir_name_and_stream_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_dir_name_and_stream_0_0 };

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_dir_name_and_stream_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__find_module__parse_tree__find_module__type_ctor_info_dir_name_and_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__find_module____Unify____dir_name_and_stream_0_0_10001)),
  ((MR_Box) (parse_tree__find_module____Compare____dir_name_and_stream_0_0_10001)),
  (MR_String) "parse_tree.find_module",
  (MR_String) "dir_name_and_stream",
  { parse_tree__find_module__parse_tree__find_module__du_name_ordered_dir_name_and_stream_0 },
  { parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_dir_name_and_stream_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__find_module__parse_tree__find_module__functor_number_map_dir_name_and_stream_0,

};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_path_name_and_stream_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_input_stream_0)
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_path_name_and_stream_0_0 = {
  (MR_String) "path_name_and_stream",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__find_module__parse_tree__find_module__field_types_path_name_and_stream_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_path_name_and_stream_0_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_path_name_and_stream_0_0 };

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_path_name_and_stream_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_path_name_and_stream_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_path_name_and_stream_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_path_name_and_stream_0_0 };

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_path_name_and_stream_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__find_module__parse_tree__find_module__type_ctor_info_path_name_and_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__find_module____Unify____path_name_and_stream_0_0_10001)),
  ((MR_Box) (parse_tree__find_module____Compare____path_name_and_stream_0_0_10001)),
  (MR_String) "parse_tree.find_module",
  (MR_String) "path_name_and_stream",
  { parse_tree__find_module__parse_tree__find_module__du_name_ordered_path_name_and_stream_0 },
  { parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_path_name_and_stream_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__find_module__parse_tree__find_module__functor_number_map_path_name_and_stream_0,

};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_0 = {
  (MR_String) "search_auth_cur_dir",
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

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_tail_dirs_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_1 = {
  (MR_String) "search_auth_cur_dir_and",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_2 = {
  (MR_String) "search_auth_this_dir",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_tail_dirs_0)
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_3 = {
  (MR_String) "search_auth_this_dir_and",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_private_dirs_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_4 = {
  (MR_String) "search_auth_private",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_dirs_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_0 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_1[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_1 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_2[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_2 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_3[2] = {
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_3,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_4
};

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_dirs_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_dirs_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_dirs_0[5] = {
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_0,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_1,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_4,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_2,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_dirs_0_3
};

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_dirs_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_dirs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__find_module____Unify____search_auth_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__find_module____Compare____search_auth_dirs_0_0_10001)),
  (MR_String) "parse_tree.find_module",
  (MR_String) "search_auth_dirs",
  { parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_dirs_0 },
  { parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_dirs_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_dirs_0,

};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_0[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0)
};

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_0 = {
  (MR_String) "private_auth_interface_dirs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_0,
  NULL,
  parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_1[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0)
};

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_1 = {
  (MR_String) "private_auth_intermod_dirs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_1,
  NULL,
  parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_2[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0)
};

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_2 = {
  (MR_String) "private_auth_c_include_dirs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_2,
  NULL,
  parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_3 = {
  (MR_String) "private_auth_options_file_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_4[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_lib_ext_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0)
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_4 = {
  (MR_String) "private_auth_lib_dirs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_5[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0)
};

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_5[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_5 = {
  (MR_String) "private_auth_stdlib_dirs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_dirs_0_5,
  NULL,
  parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_dirs_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_0 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_1[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_1 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_2[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_2 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_3[3] = {
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_3,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_4,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_5
};

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_private_dirs_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_dirs_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_private_dirs_0[6] = {
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_2,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_0,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_1,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_4,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_3,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_dirs_0_5
};

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_private_dirs_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_private_dirs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__find_module____Unify____search_auth_private_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__find_module____Compare____search_auth_private_dirs_0_0_10001)),
  (MR_String) "parse_tree.find_module",
  (MR_String) "search_auth_private_dirs",
  { parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_private_dirs_0 },
  { parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_private_dirs_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_private_dirs_0,

};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_0[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0)
};

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_tail_dirs_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_0 = {
  (MR_String) "private_auth_interface_dirs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_0,
  NULL,
  parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_tail_dirs_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_1[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0)
};

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_tail_dirs_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_1 = {
  (MR_String) "private_auth_intermod_dirs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_1,
  NULL,
  parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_tail_dirs_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_2[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0)
};

static const MR_DuArgLocn parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_tail_dirs_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_2 = {
  (MR_String) "private_auth_c_include_dirs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_2,
  NULL,
  parse_tree__find_module__parse_tree__find_module__field_locns_search_auth_private_tail_dirs_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_3 = {
  (MR_String) "private_auth_options_file_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_private_tail_dirs_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_0 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_1[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_1 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_2[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_2 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_3[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_3 };

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_private_tail_dirs_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_private_tail_dirs_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_private_tail_dirs_0[4] = {
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_2,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_0,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_1,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_private_tail_dirs_0_3
};

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_private_tail_dirs_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_private_tail_dirs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__find_module____Unify____search_auth_private_tail_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__find_module____Compare____search_auth_private_tail_dirs_0_0_10001)),
  (MR_String) "parse_tree.find_module",
  (MR_String) "search_auth_private_tail_dirs",
  { parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_private_tail_dirs_0 },
  { parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_private_tail_dirs_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_private_tail_dirs_0,

};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_tail_dirs_0_0 = {
  (MR_String) "search_auth_cur_dir",
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

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_auth_tail_dirs_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_private_tail_dirs_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_tail_dirs_0_1 = {
  (MR_String) "search_auth_private",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(1),
  parse_tree__find_module__parse_tree__find_module__field_types_search_auth_tail_dirs_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_tail_dirs_0_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_tail_dirs_0_0 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_tail_dirs_0_3[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_tail_dirs_0_1 };

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_tail_dirs_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_tail_dirs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_auth_tail_dirs_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(0)
  }
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_tail_dirs_0[2] = {
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_tail_dirs_0_0,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_auth_tail_dirs_0_1
};

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_tail_dirs_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_tail_dirs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__find_module____Unify____search_auth_tail_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__find_module____Compare____search_auth_tail_dirs_0_0_10001)),
  (MR_String) "parse_tree.find_module",
  (MR_String) "search_auth_tail_dirs",
  { parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_auth_tail_dirs_0 },
  { parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_auth_tail_dirs_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__find_module__parse_tree__find_module__functor_number_map_search_auth_tail_dirs_0,

};

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__compute_search_dirs__671__1_2_f_0(
  MR_String GradeDir_64,
  MR_String LambdaHeadVar__1_44)
{
  MR_String LambdaHeadVar__2_45;
  MR_String Var_46;

  Var_46 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_44, (MR_String) "lib");
  LambdaHeadVar__2_45 = mercury__dir__f_slash_2_f_0(Var_46, GradeDir_64);
  return LambdaHeadVar__2_45;
}

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__compute_search_dirs__651__1_2_f_0(
  MR_String GradeDir_23,
  MR_String LambdaHeadVar__1_37)
{
  MR_String LambdaHeadVar__2_38;
  MR_String Var_39;

  Var_39 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_37, (MR_String) "lib");
  LambdaHeadVar__2_38 = mercury__dir__f_slash_2_f_0(Var_39, GradeDir_23);
  return LambdaHeadVar__2_38;
}

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__541__1_1_f_0(
  MR_String LambdaHeadVar__1_15)
{
  MR_String LambdaHeadVar__2_16;
  MR_String Var_18;

  Var_18 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_15, (MR_String) "\'");
  LambdaHeadVar__2_16 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_18);
  return LambdaHeadVar__2_16;
}

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__484__1_1_f_0(
  MR_String LambdaHeadVar__1_39)
{
  MR_String LambdaHeadVar__2_40;
  MR_String Var_42;

  Var_42 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_39, (MR_String) "\'");
  LambdaHeadVar__2_40 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_42);
  return LambdaHeadVar__2_40;
}

void MR_CALL 
parse_tree__find_module____Compare____search_auth_tail_dirs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__find_module____Compare____search_auth_dirs_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_tail_dirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__find_module____Unify____search_auth_dirs_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__find_module____Compare____search_auth_private_tail_dirs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__find_module____Compare____search_auth_private_dirs_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_private_tail_dirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__find_module____Unify____search_auth_private_dirs_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__find_module____Compare____search_auth_dirs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_15 == CastY_16);
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
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
                MR_Word Cast_HeadVar1_25 = (MR_Word) (ArgX1_4);
                MR_Word Cast_HeadVar2_26 = (MR_Word) (ArgY1_5);
                MR_Word next_value_of_HeadVar__2_2 = Cast_HeadVar1_25;
                MR_Word next_value_of_HeadVar__3_3 = Cast_HeadVar2_26;

                // direct tailcall eliminated
                ;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                continue;
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
                MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String ArgX1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                        MR_String ArgY1_9 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                        MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                        MR_Word SubResult1_10;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_10, ArgX1_8, ArgY1_9);
                        succeeded = (SubResult1_10 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_10;
                        else
                        {
                          MR_Word Cast_HeadVar1_22 = (MR_Word) (ArgX2_11);
                          MR_Word Cast_HeadVar2_23 = (MR_Word) (ArgY2_12);
                          MR_Word next_value_of_HeadVar__2_2 = Cast_HeadVar1_22;
                          MR_Word next_value_of_HeadVar__3_3 = Cast_HeadVar2_23;

                          // direct tailcall eliminated
                          ;
                          HeadVar__2_2 = next_value_of_HeadVar__2_2;
                          HeadVar__3_3 = next_value_of_HeadVar__3_3;
                          continue;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                        MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                        parse_tree__find_module____Compare____search_auth_private_dirs_0_0(HeadVar__1_1, ArgX1_13, ArgY1_14);
                      }
                      break;
                  }
                  break;
              }
              break;
          }
          break;
      }
    break;
  }
}

void MR_CALL 
parse_tree__find_module____Compare____search_auth_private_dirs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 7);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 7);
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;
              MR_Integer Var_48 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_49 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_48 < Var_49);
              if (succeeded)
              {
                SubResult1_6 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_48 > Var_49);
                if (succeeded)
                {
                  SubResult1_6 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                libs__globals____Compare____globals_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 7);
              MR_Word ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 7);
              MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_11;
              MR_Integer Var_46 = (MR_Integer) (ArgX1_9);
              MR_Integer Var_47 = (MR_Integer) (ArgY1_10);

              succeeded = (Var_46 < Var_47);
              if (succeeded)
              {
                SubResult1_11 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_46 > Var_47);
                if (succeeded)
                {
                  SubResult1_11 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
                libs__globals____Compare____globals_0_0(HeadVar__1_1, ArgX2_12, ArgY2_13);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_14 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 3);
              MR_Word ArgY1_15 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 3);
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_16;
              MR_Integer Var_44 = (MR_Integer) (ArgX1_14);
              MR_Integer Var_45 = (MR_Integer) (ArgY1_15);

              succeeded = (Var_44 < Var_45);
              if (succeeded)
              {
                SubResult1_16 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_44 > Var_45);
                if (succeeded)
                {
                  SubResult1_16 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_16;
              else
                libs__globals____Compare____globals_0_0(HeadVar__1_1, ArgX2_17, ArgY2_18);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__find_module_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX1_19)), ((MR_Box) (ArgY1_20)));
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));

                      libs__globals____Compare____globals_0_0(HeadVar__1_1, ArgX2_23, ArgY2_24);
                    }
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 3);
                      MR_Word ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 3);
                      MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_27;
                      MR_Integer Var_42 = (MR_Integer) (ArgX1_25);
                      MR_Integer Var_43 = (MR_Integer) (ArgY1_26);

                      succeeded = (Var_42 < Var_43);
                      if (succeeded)
                      {
                        SubResult1_27 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_42 > Var_43);
                        if (succeeded)
                        {
                          SubResult1_27 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_27;
                      else
                        libs__globals____Compare____globals_0_0(HeadVar__1_1, ArgX2_28, ArgY2_29);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_dirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_14 == CastX_13);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
            MR_Word ArgY1_4;
            MR_Word Cast_HeadVar1_17;
            MR_Word Cast_HeadVar2_18;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              Cast_HeadVar1_17 = (MR_Word) (ArgX1_3);
              Cast_HeadVar2_18 = (MR_Word) (ArgY1_4);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Cast_HeadVar1_17;
              next_value_of_HeadVar__2_2 = Cast_HeadVar2_18;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
            MR_String ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
                MR_String ArgY1_8;
                MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
                MR_Word ArgY2_10;
                MR_Word Cast_HeadVar1_19;
                MR_Word Cast_HeadVar2_20;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__2_2;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  ArgY2_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
                  if (succeeded)
                  {
                    Cast_HeadVar1_19 = (MR_Word) (ArgX2_9);
                    Cast_HeadVar2_20 = (MR_Word) (ArgY2_10);
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = Cast_HeadVar1_19;
                    next_value_of_HeadVar__2_2 = Cast_HeadVar2_20;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    continue;
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  succeeded = parse_tree__find_module____Unify____search_auth_private_dirs_0_0(ArgX1_11, ArgY1_12);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_private_dirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_25 == CastY_26);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 7);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 7);
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = libs__globals____Unify____globals_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 7);
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 7);
            ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
              succeeded = libs__globals____Unify____globals_0_0(ArgX2_9, ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 3);
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 3);
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = (ArgX1_11 == ArgY1_12);
            if (succeeded)
              succeeded = libs__globals____Unify____globals_0_0(ArgX2_13, ArgY2_14);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_31_31;
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_31_31 = (MR_Word) (&parse_tree__find_module_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY2_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = libs__globals____Unify____globals_0_0(ArgX2_19, ArgY2_20);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 3);
              MR_Word ArgY1_22;
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 3);
                ArgY2_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_21 == ArgY1_22);
                if (succeeded)
                  succeeded = libs__globals____Unify____globals_0_0(ArgX2_23, ArgY2_24);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__find_module____Compare____path_name_and_stream_0_0(
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
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__io____Compare____text_input_stream_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
parse_tree__find_module____Unify____path_name_and_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = mercury__io____Unify____text_input_stream_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__find_module____Compare____dir_name_and_stream_0_0(
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
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__io____Compare____text_input_stream_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
parse_tree__find_module____Unify____dir_name_and_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = mercury__io____Unify____text_input_stream_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__find_module____Compare____dir_name_and_contents_0_0(
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
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
parse_tree__find_module____Unify____dir_name_and_contents_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_6_p_0(
  MR_Word SearchAuthDirs_7,
  MR_Word ModuleName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeFileName_10)
{
  MR_Word MaybeFileNameAndStream_12;

  parse_tree__find_module__search_for_module_source_and_stream_6_p_0(SearchAuthDirs_7, ModuleName_8, SearchDirs_9, &MaybeFileNameAndStream_12);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream_12)) == (MR_Integer) 1))
    *MaybeFileName_10 = (MR_Word) (MaybeFileNameAndStream_12);
  else
  {
    MR_String SourceFileName_13;
    MR_Word SourceStream_14;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MaybeFileNameAndStream_12, 0))));

    SourceFileName_13 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
    SourceStream_14 = ((MR_Word) ((MR_hl_field(0, Var_19, 1))));
    mercury__io__close_input_3_p_0(SourceStream_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFileName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SourceFileName_13));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_16;

  conv0_LambdaHeadVar__2_16 = parse_tree__find_module__IntroducedFrom__func__find_source_error__541__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_16));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_6_p_0(
  MR_Word SearchAuthDirs_7,
  MR_Word ModuleName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeFileNameAndStream_10)
{
  MR_String FileName0_12;
  MR_Word MaybeFileNameAndStream0_13;

  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_8, &FileName0_12);
  parse_tree__find_module__search_for_file_and_stream_6_p_0(SearchAuthDirs_7, FileName0_12, SearchDirs_9, &MaybeFileNameAndStream0_13);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream0_13)) == (MR_Integer) 1))
  {
    MR_String Error_16;
    MR_String ModuleNameStr_22;
    MR_String DirsStr_24;
    MR_Word Var_28;
    MR_String Var_31;
    MR_String Var_32;

    ModuleNameStr_22 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_8);
    Var_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_2[2]), *SearchDirs_9);
    DirsStr_24 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_28);
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", DirsStr_24);
    Var_32 = mercury__string__f_43_43_2_f_0(ModuleNameStr_22, Var_31);
    Error_16 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", Var_32);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFileNameAndStream_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_16));
    }
  }
  else
    *MaybeFileNameAndStream_10 = MaybeFileNameAndStream0_13;
}

void MR_CALL 
parse_tree__find_module__search_for_file_mod_time_6_p_0(
  MR_Word SearchAuthDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * Result_10)
{
  MR_Word MaybeModTime_12;

  parse_tree__find_module__compute_search_dirs_2_p_0(SearchAuthDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_mod_time_loop_5_p_0(*SearchDirs_9, FileName_8, &MaybeModTime_12);
  if ((MaybeModTime_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Msg_13;

    parse_tree__find_module__cannot_find_in_dirs_msg_5_p_0(FileName_8, *SearchDirs_9, &Msg_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_13));
    }
  }
  else
  {
    MR_Word ModTime_14 = ((MR_Word) ((MR_hl_field(1, MaybeModTime_12, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ModTime_14));
    }
  }
}

static void MR_CALL 
parse_tree__find_module__search_for_file_mod_time_loop_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeModTime_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeModTime_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HeadDir_10 = ((MR_String) ((MR_hl_field(1, Dirs_6, 0))));
      MR_Word TailDirs_11 = ((MR_Word) ((MR_hl_field(1, Dirs_6, 1))));
      MR_String HeadFilePathNameNC_12;
      MR_Word MaybeHeadModTime_13;
      MR_String Var_25;

      mercury__dir__this_directory_1_p_0(&Var_25);
      succeeded = (strcmp(HeadDir_10, Var_25) == 0);
      if (succeeded)
        HeadFilePathNameNC_12 = FileName_7;
      else
      {
        MR_String Sep_19;
        MR_Char Var_20;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;

        Var_20 = mercury__dir__directory_separator_0_f_0();
        Sep_19 = mercury__string__from_char_1_f_0(Var_20);
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (FileName_7));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (Sep_19));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (HeadDir_10));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
        }
        HeadFilePathNameNC_12 = mercury__string__append_list_1_f_0(Var_21);
      }
      mercury__io__file__file_modification_time_4_p_0(HeadFilePathNameNC_12, &MaybeHeadModTime_13);
      if (((MR_tag((MR_Word) MaybeHeadModTime_13)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_6 = TailDirs_11;

        // direct tailcall eliminated
        ;
        Dirs_6 = next_value_of_Dirs_6;
        continue;
      }
      else
      {
        MR_Word HeadModTime_14 = ((MR_Word) ((MR_hl_field(0, MaybeHeadModTime_13, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeModTime_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadModTime_14));
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_contents_6_p_0(
  MR_Word SearchAuthDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * Result_10)
{
  MR_Word MaybeDirPathNameAndContents_12;

  parse_tree__find_module__compute_search_dirs_2_p_0(SearchAuthDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_5_p_0(*SearchDirs_9, FileName_8, &MaybeDirPathNameAndContents_12);
  if ((MaybeDirPathNameAndContents_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Msg_13;

    parse_tree__find_module__cannot_find_in_dirs_msg_5_p_0(FileName_8, *SearchDirs_9, &Msg_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_13));
    }
  }
  else
  {
    MR_Word DirPathNameAndContents_14 = ((MR_Word) ((MR_hl_field(1, MaybeDirPathNameAndContents_12, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (DirPathNameAndContents_14));
    }
  }
}

static void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeDirNameAndContents_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeDirNameAndContents_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HeadDir_10 = ((MR_String) ((MR_hl_field(1, Dirs_6, 0))));
      MR_Word TailDirs_11 = ((MR_Word) ((MR_hl_field(1, Dirs_6, 1))));
      MR_String HeadFilePathNameNC_12;
      MR_Word MaybeHeadContents_13;
      MR_String Var_26;

      mercury__dir__this_directory_1_p_0(&Var_26);
      succeeded = (strcmp(HeadDir_10, Var_26) == 0);
      if (succeeded)
        HeadFilePathNameNC_12 = FileName_7;
      else
      {
        MR_String Sep_20;
        MR_Char Var_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;

        Var_21 = mercury__dir__directory_separator_0_f_0();
        Sep_20 = mercury__string__from_char_1_f_0(Var_21);
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (FileName_7));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Sep_20));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_24));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (HeadDir_10));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
        }
        HeadFilePathNameNC_12 = mercury__string__append_list_1_f_0(Var_22);
      }
      mercury__io__read_named_file_as_string_wf_4_p_0(HeadFilePathNameNC_12, &MaybeHeadContents_13);
      if (((MR_tag((MR_Word) MaybeHeadContents_13)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_6 = TailDirs_11;

        // direct tailcall eliminated
        ;
        Dirs_6 = next_value_of_Dirs_6;
        continue;
      }
      else
      {
        MR_String HeadContents_14 = ((MR_String) ((MR_hl_field(0, MaybeHeadContents_13, 0))));
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (HeadDir_10));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (HeadContents_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeDirNameAndContents_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_6_p_0(
  MR_Word SearchAuthDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeDirPathName_10)
{
  MR_Word MaybeDirPathNameAndStream_12;

  parse_tree__find_module__search_for_file_returning_dir_and_stream_6_p_0(SearchAuthDirs_7, FileName_8, SearchDirs_9, &MaybeDirPathNameAndStream_12);
  if (((MR_tag((MR_Word) MaybeDirPathNameAndStream_12)) == (MR_Integer) 1))
    *MaybeDirPathName_10 = (MR_Word) (MaybeDirPathNameAndStream_12);
  else
  {
    MR_String DirPathName_13;
    MR_Word Stream_14;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MaybeDirPathNameAndStream_12, 0))));

    DirPathName_13 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
    Stream_14 = ((MR_Word) ((MR_hl_field(0, Var_19, 1))));
    mercury__io__close_input_3_p_0(Stream_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDirPathName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (DirPathName_13));
    }
  }
}

void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_stream_6_p_0(
  MR_Word SearchAuthDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * Result_10)
{
  MR_Word MaybeFilePathNameAndStream_12;

  parse_tree__find_module__compute_search_dirs_2_p_0(SearchAuthDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_5_p_0(*SearchDirs_9, FileName_8, &MaybeFilePathNameAndStream_12);
  if ((MaybeFilePathNameAndStream_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Msg_13;

    parse_tree__find_module__cannot_find_in_dirs_msg_5_p_0(FileName_8, *SearchDirs_9, &Msg_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_13));
    }
  }
  else
  {
    MR_Word FilePathNameAndStream_14 = ((MR_Word) ((MR_hl_field(1, MaybeFilePathNameAndStream_12, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (FilePathNameAndStream_14));
    }
  }
}

static void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeDirNameAndStream_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeDirNameAndStream_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HeadDir_10 = ((MR_String) ((MR_hl_field(1, Dirs_6, 0))));
      MR_Word TailDirs_11 = ((MR_Word) ((MR_hl_field(1, Dirs_6, 1))));
      MR_String HeadFilePathNameNC_12;
      MR_Word MaybeHeadStream_13;
      MR_String Var_26;

      mercury__dir__this_directory_1_p_0(&Var_26);
      succeeded = (strcmp(HeadDir_10, Var_26) == 0);
      if (succeeded)
        HeadFilePathNameNC_12 = FileName_7;
      else
      {
        MR_String Sep_20;
        MR_Char Var_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;

        Var_21 = mercury__dir__directory_separator_0_f_0();
        Sep_20 = mercury__string__from_char_1_f_0(Var_21);
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (FileName_7));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Sep_20));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_24));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (HeadDir_10));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
        }
        HeadFilePathNameNC_12 = mercury__string__append_list_1_f_0(Var_22);
      }
      mercury__io__open_input_4_p_0(HeadFilePathNameNC_12, &MaybeHeadStream_13);
      if (((MR_tag((MR_Word) MaybeHeadStream_13)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_6 = TailDirs_11;

        // direct tailcall eliminated
        ;
        Dirs_6 = next_value_of_Dirs_6;
        continue;
      }
      else
      {
        MR_Word HeadStream_14 = ((MR_Word) ((MR_hl_field(0, MaybeHeadStream_13, 0))));
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (HeadDir_10));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (HeadStream_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeDirNameAndStream_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__find_module__search_for_file_6_p_0(
  MR_Word SearchAuthDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeFilePathName_10)
{
  MR_Word MaybeFilePathNameAndStream_12;

  parse_tree__find_module__search_for_file_and_stream_6_p_0(SearchAuthDirs_7, FileName_8, SearchDirs_9, &MaybeFilePathNameAndStream_12);
  if (((MR_tag((MR_Word) MaybeFilePathNameAndStream_12)) == (MR_Integer) 1))
    *MaybeFilePathName_10 = (MR_Word) (MaybeFilePathNameAndStream_12);
  else
  {
    MR_String FilePathName_13;
    MR_Word Stream_14;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MaybeFilePathNameAndStream_12, 0))));

    FilePathName_13 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
    Stream_14 = ((MR_Word) ((MR_hl_field(0, Var_19, 1))));
    mercury__io__close_input_3_p_0(Stream_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFilePathName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (FilePathName_13));
    }
  }
}

void MR_CALL 
parse_tree__find_module__search_for_file_and_stream_6_p_0(
  MR_Word SearchAuthDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * Result_10)
{
  MR_Word MaybeFilePathNameAndStream_12;

  parse_tree__find_module__compute_search_dirs_2_p_0(SearchAuthDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_and_stream_loop_5_p_0(*SearchDirs_9, FileName_8, &MaybeFilePathNameAndStream_12);
  if ((MaybeFilePathNameAndStream_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Msg_13;

    parse_tree__find_module__cannot_find_in_dirs_msg_5_p_0(FileName_8, *SearchDirs_9, &Msg_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_13));
    }
  }
  else
  {
    MR_Word FilePathNameAndStream_14 = ((MR_Word) ((MR_hl_field(1, MaybeFilePathNameAndStream_12, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (FilePathNameAndStream_14));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__compute_search_dirs_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_LambdaHeadVar__2_45;

  conv6_LambdaHeadVar__2_45 = parse_tree__find_module__IntroducedFrom__func__compute_search_dirs__671__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_45));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__find_module__compute_search_dirs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_LambdaHeadVar__2_38;

  conv4_LambdaHeadVar__2_38 = parse_tree__find_module__IntroducedFrom__func__compute_search_dirs__651__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_38));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__find_module__compute_search_dirs_2_p_0(
  MR_Word SearchAuthDirs_3,
  MR_Word * Dirs_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) SearchAuthDirs_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Dir_5;

        mercury__dir__this_directory_1_p_0(&Dir_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Dirs_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Dir_5));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TailSearchAuthDirs_6 = ((MR_Word) ((MR_hl_field(1, SearchAuthDirs_3, 0))));
        MR_Word TailDirs0_7;
        MR_Word Var_30;
        MR_String Dir_49;
        MR_Word TailDirs_8;

        mercury__dir__this_directory_1_p_0(&Dir_49);
        Var_30 = (MR_Word) (TailSearchAuthDirs_6);
        parse_tree__find_module__compute_search_dirs_2_p_0(Var_30, &TailDirs0_7);
        succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailDirs0_7, ((MR_Box) (Dir_49)), &TailDirs_8);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Dirs_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Dir_49));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailDirs_8));
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Dirs_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Dir_49));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailDirs0_7));
          }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Dir_48 = ((MR_String) ((MR_hl_field(2, SearchAuthDirs_3, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Dirs_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Dir_48));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, SearchAuthDirs_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TailSearchAuthDirs_113 = ((MR_Word) ((MR_hl_field(3, SearchAuthDirs_3, 2))));
            MR_Word TailDirs0_114;
            MR_Word Var_116 = (MR_Word) (TailSearchAuthDirs_113);
            MR_String Dir_117 = ((MR_String) ((MR_hl_field(3, SearchAuthDirs_3, 1))));
            MR_Word TailDirs_111;

            parse_tree__find_module__compute_search_dirs_2_p_0(Var_116, &TailDirs0_114);
            succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailDirs0_114, ((MR_Box) (Dir_117)), &TailDirs_111);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Dirs_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Dir_117));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailDirs_111));
              }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Dirs_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Dir_117));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailDirs0_114));
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SearchAuthPrivateDirs_9 = ((MR_Word) ((MR_hl_field(3, SearchAuthDirs_3, 1))));

            switch (MR_tag((MR_Word) SearchAuthPrivateDirs_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word InterfaceExt_10 = ((MR_Unsigned) ((MR_hl_field(0, SearchAuthPrivateDirs_9, 0))) & (MR_Integer) 7);
                  MR_Word Globals_11 = ((MR_Word) ((MR_hl_field(0, SearchAuthPrivateDirs_9, 1))));
                  MR_Word ExtDirsMaps_12;
                  MR_Word InterfaceDirsMap_13;
                  MR_Word ProposedDirs_14;
                  MR_Word LegacyDirs_15;
                  MR_Box conv1_ProposedDirs_14;

                  libs__globals__get_ext_dirs_maps_2_p_0(Globals_11, &ExtDirsMaps_12);
                  InterfaceDirsMap_13 = ((MR_Word) ((MR_hl_field(0, ExtDirsMaps_12, 0))));
                  mercury__map__lookup_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&parse_tree__find_module_scalar_common_1[0]), InterfaceDirsMap_13, ((MR_Box) (InterfaceExt_10)), &conv1_ProposedDirs_14);
                  ProposedDirs_14 = ((MR_Word) (conv1_ProposedDirs_14));
                  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 557, &LegacyDirs_15);
                  *Dirs_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProposedDirs_14, LegacyDirs_15);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntermodExt_16 = ((MR_Unsigned) ((MR_hl_field(1, SearchAuthPrivateDirs_9, 0))) & (MR_Integer) 7);
                  MR_Word IntermodDirsMap_17;
                  MR_Word Globals_50 = ((MR_Word) ((MR_hl_field(1, SearchAuthPrivateDirs_9, 1))));
                  MR_Word ExtDirsMaps_51;
                  MR_Word ProposedDirs_52;
                  MR_Word LegacyDirs_53;
                  MR_Box conv2_ProposedDirs_52;

                  libs__globals__get_ext_dirs_maps_2_p_0(Globals_50, &ExtDirsMaps_51);
                  IntermodDirsMap_17 = ((MR_Word) ((MR_hl_field(0, ExtDirsMaps_51, 1))));
                  mercury__map__lookup_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&parse_tree__find_module_scalar_common_1[0]), IntermodDirsMap_17, ((MR_Box) (IntermodExt_16)), &conv2_ProposedDirs_52);
                  ProposedDirs_52 = ((MR_Word) (conv2_ProposedDirs_52));
                  libs__globals__lookup_accumulating_option_3_p_0(Globals_50, (MR_Integer) 558, &LegacyDirs_53);
                  *Dirs_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProposedDirs_52, LegacyDirs_53);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CInclExt_18 = ((MR_Unsigned) ((MR_hl_field(2, SearchAuthPrivateDirs_9, 0))) & (MR_Integer) 3);
                  MR_Word CInclDirsMap_19;
                  MR_Word Globals_54 = ((MR_Word) ((MR_hl_field(2, SearchAuthPrivateDirs_9, 1))));
                  MR_Word ExtDirsMaps_55;
                  MR_Word ProposedDirs_56;
                  MR_Word LegacyDirs_57;
                  MR_Box conv0_ProposedDirs_56;

                  libs__globals__get_ext_dirs_maps_2_p_0(Globals_54, &ExtDirsMaps_55);
                  CInclDirsMap_19 = ((MR_Word) ((MR_hl_field(0, ExtDirsMaps_55, 2))));
                  mercury__map__lookup_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0), (MR_Word) (&parse_tree__find_module_scalar_common_1[0]), CInclDirsMap_19, ((MR_Box) (CInclExt_18)), &conv0_ProposedDirs_56);
                  ProposedDirs_56 = ((MR_Word) (conv0_ProposedDirs_56));
                  libs__globals__lookup_accumulating_option_3_p_0(Globals_54, (MR_Integer) 475, &LegacyDirs_57);
                  *Dirs_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProposedDirs_56, LegacyDirs_57);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, SearchAuthPrivateDirs_9, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word OptionTable_20 = ((MR_Word) ((MR_hl_field(3, SearchAuthPrivateDirs_9, 1))));

                      mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_20, ((MR_Box) ((MR_Integer) 554)), Dirs_4);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word LibDirsMap_22;
                      MR_String GradeDir_23;
                      MR_Word LibDirs_24;
                      MR_Word Var_36;
                      MR_Word Globals_59 = ((MR_Word) ((MR_hl_field(3, SearchAuthPrivateDirs_9, 2))));
                      MR_Word ExtDirsMaps_60;
                      MR_Word ProposedDirs_61;
                      MR_Word LegacyDirs_62;
                      MR_Box conv3_ProposedDirs_61;

                      libs__globals__get_ext_dirs_maps_2_p_0(Globals_59, &ExtDirsMaps_60);
                      LibDirsMap_22 = ((MR_Word) ((MR_hl_field(0, ExtDirsMaps_60, 3))));
                      mercury__map__lookup_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_lib_ext_0), (MR_Word) (&parse_tree__find_module_scalar_common_1[0]), LibDirsMap_22, ((MR_Box) ((MR_Integer) 0)), &conv3_ProposedDirs_61);
                      ProposedDirs_61 = ((MR_Word) (conv3_ProposedDirs_61));
                      libs__globals__get_grade_dir_2_p_0(Globals_59, &GradeDir_23);
                      libs__globals__lookup_accumulating_option_3_p_0(Globals_59, (MR_Integer) 510, &LibDirs_24);
                      {
                        Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_36, 0) = ((MR_Box) (&parse_tree__find_module_scalar_common_4[0]));
                        MR_hl_field(0, Var_36, 1) = ((MR_Box) (parse_tree__find_module__compute_search_dirs_2_p_0_1));
                        MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(0, Var_36, 3) = ((MR_Box) (GradeDir_23));
                      }
                      LegacyDirs_62 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_36, LibDirs_24);
                      *Dirs_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProposedDirs_61, LegacyDirs_62);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word StdLibExt_26 = ((MR_Unsigned) ((MR_hl_field(3, SearchAuthPrivateDirs_9, 1))) & (MR_Integer) 3);
                      MR_Word StdLibDirsMap_27;
                      MR_Word Globals_68 = ((MR_Word) ((MR_hl_field(3, SearchAuthPrivateDirs_9, 2))));
                      MR_Word ExtDirsMaps_69;
                      MR_Word ProposedDirs_70;
                      MR_Word LegacyDirs_71;
                      MR_Box conv5_ProposedDirs_70;

                      libs__globals__get_ext_dirs_maps_2_p_0(Globals_68, &ExtDirsMaps_69);
                      StdLibDirsMap_27 = ((MR_Word) ((MR_hl_field(0, ExtDirsMaps_69, 4))));
                      mercury__map__lookup_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0), (MR_Word) (&parse_tree__find_module_scalar_common_1[0]), StdLibDirsMap_27, ((MR_Box) (StdLibExt_26)), &conv5_ProposedDirs_70);
                      ProposedDirs_70 = ((MR_Word) (conv5_ProposedDirs_70));
                      switch (StdLibExt_26) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_43;
                            MR_String GradeDir_64;
                            MR_Word LibDirs_65;

                            libs__globals__get_grade_dir_2_p_0(Globals_68, &GradeDir_64);
                            libs__globals__lookup_accumulating_option_3_p_0(Globals_68, (MR_Integer) 510, &LibDirs_65);
                            {
                              Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__find_module_scalar_common_4[0]));
                              MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__find_module__compute_search_dirs_2_p_0_2));
                              MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
                              MR_hl_field(0, Var_43, 3) = ((MR_Box) (GradeDir_64));
                            }
                            LegacyDirs_71 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_43, LibDirs_65);
                          }
                          break;
                        case (MR_Integer) 0:
                          libs__globals__lookup_accumulating_option_3_p_0(Globals_68, (MR_Integer) 528, &LegacyDirs_71);
                          break;
                      }
                      *Dirs_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProposedDirs_70, LegacyDirs_71);
                    }
                    break;
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__cannot_find_in_dirs_msg_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_40;

  conv0_LambdaHeadVar__2_40 = parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__484__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_40));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__find_module__cannot_find_in_dirs_msg_5_p_0(
  MR_String FileName_6,
  MR_Word Dirs_7,
  MR_String * Msg_8)
{
  MR_bool succeeded;
  MR_Word MaybeEnvVarValue_10;
  MR_String EnvVarValue_11;

  mercury__io__environment__get_environment_var_4_p_0((MR_String) "MERCURY_NO_PATHS_IN_CANNOT_FIND_MSG", &MaybeEnvVarValue_10);
  succeeded = (MaybeEnvVarValue_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    EnvVarValue_11 = ((MR_String) ((MR_hl_field(1, MaybeEnvVarValue_10, 0))));
    succeeded = (strcmp(EnvVarValue_11, (MR_String) "") == 0);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_String Var_57;

    Var_57 = mercury__string__f_43_43_2_f_0(FileName_6, (MR_String) "\' in the search path.");
    *Msg_8 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_57);
  }
  else
  if ((Dirs_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_70;

    Var_70 = mercury__string__f_43_43_2_f_0(FileName_6, (MR_String) "\' in the empty list of directories");
    *Msg_8 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_70);
  }
  else
  {
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, Dirs_7, 1))));
    MR_String Var_55 = ((MR_String) ((MR_hl_field(1, Dirs_7, 0))));

    if ((Var_54 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_64;
      MR_String Var_66;
      MR_String Var_67;

      Var_64 = mercury__string__f_43_43_2_f_0(Var_55, (MR_String) "\'");
      Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directory \140", Var_64);
      Var_67 = mercury__string__f_43_43_2_f_0(FileName_6, Var_66);
      *Msg_8 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_67);
    }
    else
    {
      MR_String DirsStr_18;
      MR_Word Var_45;
      MR_String Var_60;
      MR_String Var_61;

      Var_45 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_2[1]), Dirs_7);
      DirsStr_18 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_45);
      Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", DirsStr_18);
      Var_61 = mercury__string__f_43_43_2_f_0(FileName_6, Var_60);
      *Msg_8 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_61);
    }
  }
}

static void MR_CALL 
parse_tree__find_module__search_for_file_and_stream_loop_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeFilePathNameAndStream_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeFilePathNameAndStream_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HeadDir_10 = ((MR_String) ((MR_hl_field(1, Dirs_6, 0))));
      MR_Word TailDirs_11 = ((MR_Word) ((MR_hl_field(1, Dirs_6, 1))));
      MR_String HeadFilePathNameNC_12;
      MR_Word MaybeHeadStream_13;
      MR_String Var_28;

      mercury__dir__this_directory_1_p_0(&Var_28);
      succeeded = (strcmp(HeadDir_10, Var_28) == 0);
      if (succeeded)
        HeadFilePathNameNC_12 = FileName_7;
      else
      {
        MR_String Sep_22;
        MR_Char Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;

        Var_23 = mercury__dir__directory_separator_0_f_0();
        Sep_22 = mercury__string__from_char_1_f_0(Var_23);
        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (FileName_7));
          MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Sep_22));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (HeadDir_10));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
        }
        HeadFilePathNameNC_12 = mercury__string__append_list_1_f_0(Var_24);
      }
      mercury__io__open_input_4_p_0(HeadFilePathNameNC_12, &MaybeHeadStream_13);
      if (((MR_tag((MR_Word) MaybeHeadStream_13)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_6 = TailDirs_11;

        // direct tailcall eliminated
        ;
        Dirs_6 = next_value_of_Dirs_6;
        continue;
      }
      else
      {
        MR_Word HeadStream_14 = ((MR_Word) ((MR_hl_field(0, MaybeHeadStream_13, 0))));
        MR_String HeadFilePathName_15;
        MR_Word Var_20;
        MR_String Var_21;

        mercury__dir__this_directory_1_p_0(&Var_21);
        succeeded = (strcmp(HeadDir_10, Var_21) == 0);
        if (succeeded)
          HeadFilePathName_15 = FileName_7;
        else
          HeadFilePathName_15 = mercury__dir__make_path_name_2_f_0(HeadDir_10, FileName_7);
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (HeadFilePathName_15));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (HeadStream_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeFilePathNameAndStream_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
parse_tree__find_module__get_search_auth_stdlib_dirs_2_f_0(
  MR_Word StdLibExt_4,
  MR_Word Globals_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_6, 1) = (MR_Box) ((MR_Unsigned) (StdLibExt_4));
    MR_hl_field(3, Var_6, 2) = ((MR_Box) (Globals_5));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__find_module__get_search_auth_lib_dirs_2_f_0(
  MR_Word Globals_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_6, 1) = NULL;
    MR_hl_field(3, Var_6, 2) = ((MR_Box) (Globals_5));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__find_module__get_search_auth_options_file_dirs_1_f_0(
  MR_Word OptionTable_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (OptionTable_3));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__find_module__get_search_auth_intermod_dirs_2_f_0(
  MR_Word IntermodExt_4,
  MR_Word Globals_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = (MR_Box) ((MR_Unsigned) (IntermodExt_4));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) (Globals_5));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__find_module__get_search_auth_interface_dirs_2_f_0(
  MR_Word InterfaceExt_4,
  MR_Word Globals_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = (MR_Box) ((MR_Unsigned) (InterfaceExt_4));
    MR_hl_field(0, Var_6, 1) = ((MR_Box) (Globals_5));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
parse_tree__find_module____Unify____dir_name_and_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__find_module____Unify____dir_name_and_contents_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__find_module____Compare____dir_name_and_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__find_module____Compare____dir_name_and_contents_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__find_module____Unify____dir_name_and_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__find_module____Unify____dir_name_and_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__find_module____Compare____dir_name_and_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__find_module____Compare____dir_name_and_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__find_module____Unify____path_name_and_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__find_module____Unify____path_name_and_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__find_module____Compare____path_name_and_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__find_module____Compare____path_name_and_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__find_module____Unify____search_auth_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__find_module____Compare____search_auth_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__find_module____Compare____search_auth_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_private_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__find_module____Unify____search_auth_private_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__find_module____Compare____search_auth_private_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__find_module____Compare____search_auth_private_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_private_tail_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__find_module____Unify____search_auth_private_tail_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__find_module____Compare____search_auth_private_tail_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__find_module____Compare____search_auth_private_tail_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__find_module____Unify____search_auth_tail_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__find_module____Unify____search_auth_tail_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__find_module____Compare____search_auth_tail_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__find_module____Compare____search_auth_tail_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__find_module__init(void)
{
}

void mercury__parse_tree__find_module__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__find_module__parse_tree__find_module__type_ctor_info_dir_name_and_contents_0);
  MR_register_type_ctor_info(&parse_tree__find_module__parse_tree__find_module__type_ctor_info_dir_name_and_stream_0);
  MR_register_type_ctor_info(&parse_tree__find_module__parse_tree__find_module__type_ctor_info_path_name_and_stream_0);
  MR_register_type_ctor_info(&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_dirs_0);
  MR_register_type_ctor_info(&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_private_dirs_0);
  MR_register_type_ctor_info(&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_private_tail_dirs_0);
  MR_register_type_ctor_info(&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_tail_dirs_0);
}

void mercury__parse_tree__find_module__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__find_module__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.find_module.
